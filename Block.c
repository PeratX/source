

int __fastcall Block::isSignalSource(Block *this)
{
  return 0;
}


int __fastcall Block::setAllowsRunes(int result, bool a2)
{
  *(_BYTE *)(result + 100) = a2;
  return result;
}


int __fastcall Block::getSpawnResourcesAuxValue(Block *this, unsigned __int8 a2)
{
  return 0;
}


int __fastcall Block::setPushesOutItems(Block *this, bool a2)
{
  int result; // r0@1

  result = *((_BYTE *)this + 4);
  Block::mPushesOutItems[result] = a2;
  return result;
}


signed int __fastcall Block::mayPlaceOn(Block *this, const Block *a2)
{
  return 1;
}


int __fastcall Block::isHurtableBlock(Block *this)
{
  return 0;
}


signed int __fastcall Block::mayConsumeFertilizer(Block *this, BlockSource *a2)
{
  return 1;
}


unsigned int __fastcall Block::getTypeToSpawn(int a1, int a2, int a3, const BlockPos *a4)
{
  BlockSource *v4; // r5@1
  const BlockPos *v5; // r7@1
  int *v6; // r4@1
  int v7; // r0@2
  Level *v8; // r0@3
  char *v9; // r0@3
  __int64 v10; // r2@3
  unsigned int v11; // r5@3
  int *v12; // r1@4
  int v13; // t1@5
  signed int v14; // r1@7

  v4 = (BlockSource *)a2;
  v5 = a4;
  v6 = BlockSource::getHardcodedEntitySpawn(a2, a4, a3);
  if ( (unsigned int)*(_QWORD *)v6 == *(_QWORD *)v6 >> 32 )
  {
    v7 = BlockSource::getBiome(v4, v5);
    v6 = (int *)(*(int (**)(void))(*(_DWORD *)v7 + 36))();
  }
  v8 = (Level *)BlockSource::getLevel(v4);
  v9 = Level::getRandom(v8);
  v10 = *(_QWORD *)v6;
  v11 = 0;
  if ( (_DWORD)v10 != HIDWORD(v10) )
    v12 = (int *)*(_QWORD *)v6;
    do
    {
      v13 = *v12;
      v12 += 30;
      v11 += v13;
    }
    while ( (int *)HIDWORD(v10) != v12 );
    if ( v11 )
      v14 = Random::_genRandInt32((Random *)v9) % v11;
      v10 = *(_QWORD *)v6;
    else
      v14 = 0;
    if ( (_DWORD)v10 == HIDWORD(v10) )
LABEL_12:
      v11 = 0;
      while ( 1 )
      {
        v14 -= *(_DWORD *)v10;
        if ( v14 < 0 )
          break;
        LODWORD(v10) = v10 + 120;
        if ( HIDWORD(v10) == (_DWORD)v10 )
          goto LABEL_12;
      }
      v11 = v10;
  return v11;
}


void __fastcall Block::setExplodeable(Block *this, float _R1)
{
  __asm
  {
    VMOV.F32        S0, #3.0
    VMOV            S2, R1
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0,#0x5C]
  }
}


unsigned int __fastcall Block::isMotionBlockingBlock(Block *this)
{
  Block *v1; // r4@1
  unsigned int result; // r0@2
  int v3; // r0@3

  v1 = this;
  if ( Material::getBlocksMotion(*((Material **)this + 14)) == 1 )
  {
    v3 = *((_DWORD *)v1 + 6);
    if ( v3 & 0x200000 )
      result = 1;
    else
      result = (v3 & 0x100000u) >> 20;
  }
  else
    result = 0;
  return result;
}


void __fastcall Block::~Block(Block *this)
{
  Block::~Block(this);
}


int __fastcall Block::resetBitsUsed(int result)
{
  *(_DWORD *)(result + 132) = 0;
  return result;
}


int __fastcall Block::canHaveExtraData(Block *this)
{
  return 0;
}


int __fastcall Block::getPlacementDataValue(Block *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  return a6;
}


signed int __fastcall Block::mayPick(Block *this)
{
  return 1;
}


signed int __fastcall Block::tryToPlace(Block *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  Block *v4; // r7@1
  BlockSource *v5; // r5@1
  signed int v6; // r6@1
  unsigned __int8 v7; // r8@1
  BlockPos *v8; // r4@1
  char v10; // [sp+10h] [bp-20h]@2
  unsigned __int8 v11; // [sp+11h] [bp-1Fh]@2
  char v12; // [sp+14h] [bp-1Ch]@1

  v4 = this;
  v5 = a2;
  v6 = 0;
  v12 = *((_BYTE *)this + 4);
  v7 = a4;
  v8 = a3;
  if ( BlockSource::mayPlace(a2, (int)&v12, (int)a3, 1, 0, 1, 0) == 1 )
  {
    v10 = *((_BYTE *)v4 + 4);
    v11 = v7;
    BlockSource::setBlockAndData((int)v5, v8, (int)&v10, 3, 0);
    v6 = 1;
  }
  return v6;
}


int __fastcall Block::isStairBlock(Block *this)
{
  return 0;
}


int __fastcall Block::setIsInteraction(int result, bool a2)
{
  *(_BYTE *)(result + 50) = a2;
  return result;
}


Block *__fastcall Block::init(Block *this)
{
  Block *v1; // r4@1

  v1 = this;
  _R5 = &Block::mTranslucency[*((_BYTE *)this + 4)];
  __asm
  {
    VLDR            S0, [R5]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    *_R5 = Material::getTranslucency(*((Material **)this + 14));
  return v1;
}


int __fastcall Block::getBlockState(int a1, int a2)
{
  return a1 + 12 * a2 + 136;
}


int __fastcall Block::onFertilized(Block *this, BlockSource *a2, const BlockPos *a3, Entity *a4, ItemUseCallback *a5)
{
  return 0;
}


char *__fastcall Block::getVisualShape(Block *this, unsigned __int8 a2, AABB *a3, bool a4)
{
  return (char *)this + 104;
}


__int64 __fastcall Block::setVisualShape(__int64 this)
{
  LODWORD(this) = this + 104;
  return j_j_j__ZN4AABB3setERKS__0(this);
}


int __fastcall Block::onGraphicsModeChanged(int result, bool a2, bool a3, bool a4)
{
  *(_BYTE *)(result + 16) = a2;
  return result;
}


int __fastcall Block::pushesOutItems(Block *this)
{
  return Block::mPushesOutItems[*((_BYTE *)this + 4)];
}


signed int __fastcall Block::getColor(Block *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  return -1;
}


int __fastcall Block::addBlockState(int a1, int a2, unsigned int a3)
{
  int v3; // r4@1

  v3 = a1;
  BlockState::initState((BlockState *)(v3 + 12 * a2 + 136), (unsigned int *)(v3 + 132), a3);
  return v3;
}


void __fastcall Block::setExplodeable(Block *this, float _R1)
{
  Block::setExplodeable(this, _R1);
}


int __fastcall Block::setLightBlock(int result, _BYTE *a2)
{
  Block::mLightBlock[*(_BYTE *)(result + 4)] = *a2;
  return result;
}


int __fastcall Block::getVariant(Block *this, int a2)
{
  return a2;
}


int __fastcall Block::spawnBurnResources(Block *this, BlockSource *a2, float a3, float a4, float a5)
{
  return 0;
}


signed int __fastcall Block::canFillAtPos(Block *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  return 1;
}


int __fastcall Block::isStemBlock(Block *this)
{
  return 0;
}


int __fastcall Block::addBlockProperty(int result, int a2, __int64 a3)
{
  *(_QWORD *)(result + 24) |= a3;
  return result;
}


int __fastcall Block::detachesOnPistonMove(Block *this, BlockSource *a2, const BlockPos *a3)
{
  return 0;
}


signed int __fastcall Block::getCollisionShape(Block *this, AABB *a2, BlockSource *a3, const BlockPos *a4, Entity *a5)
{
  AABB *v5; // r5@1
  signed int v6; // r4@1
  int v7; // r0@1

  v5 = a2;
  v6 = 0;
  v7 = (*(int (__cdecl **)(Block *, BlockSource *, const BlockPos *))(*(_DWORD *)this + 32))(this, a3, a4);
  *(_DWORD *)v5 = *(_DWORD *)v7;
  _R1 = *(_DWORD *)(v7 + 4);
  *((_DWORD *)v5 + 1) = _R1;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(v7 + 8);
  __asm { VMOV            S0, R1 }
  *((_DWORD *)v5 + 3) = *(_DWORD *)(v7 + 12);
  _R2 = *(_DWORD *)(v7 + 16);
  *((_DWORD *)v5 + 4) = _R2;
  __asm { VMOV            S2, R2 }
  *((_DWORD *)v5 + 5) = *(_DWORD *)(v7 + 20);
  __asm { VCMPE.F32       S0, S2 }
  *((_BYTE *)v5 + 24) = *(_BYTE *)(v7 + 24);
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( !_ZF )
    v6 = 1;
  return v6;
}


int __fastcall Block::getIconYOffset(Block *this)
{
  return 0;
}


     || Block::isType(v12, (const Block *)Block::mChainCommandBlock)
{
  {
    goto LABEL_35;
  }
  if ( (*(int (**)(void))(**(_DWORD **)(v2 + 4) + 652))() != 1 )
    goto LABEL_36;
  v13 = v29 == 0;
  if ( v29 )
    v13 = v26 == 0;
  if ( v13 || ItemInstance::isNull((ItemInstance *)&v26) || !v28 || (*(int (**)(void))(*(_DWORD *)v26 + 108))() )
LABEL_36:
    *(_BYTE *)v1[2] = GameMode::_destroyBlockInternal((GameMode *)v2, (const BlockPos *)v1[3], 0);
    v14 = Player::canDestroy(*(Player **)(v2 + 4), v12);
    v15 = v29 == 0;
    if ( v29 )
      v15 = v26 == 0;
    if ( !v15 && !ItemInstance::isNull((ItemInstance *)&v26) && v28 )
    {
      v21 = v22;
      v16 = v1[3];
      v17 = *(_DWORD *)(v2 + 4);
      v18 = *(_QWORD *)v16;
      v19 = *(_DWORD *)(v16 + 8);
      ItemInstance::mineBlock(&v26, (char *)&v21, v18);
      Player::setSelectedItem(*(Player **)(v2 + 4), (const ItemInstance *)&v26);
    }
    if ( *(_BYTE *)v1[2]
      && v14 == 1
      && !(*(int (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(v2 + 4) + 652))(
            *(_DWORD *)(v2 + 4),
            *(_DWORD *)(**(_DWORD **)(v2 + 4) + 652)) )
      (*(void (__fastcall **)(Block *, _DWORD, int, _DWORD))(*(_DWORD *)v12 + 320))(
        v12,
        *(_DWORD *)(v2 + 4),
        v1[3],
        v23);
  else
LABEL_35:
    *(_BYTE *)v1[2] = 0;
  if ( ptr )
    operator delete(ptr);
  if ( v30 )
    operator delete(v30);
  result = v27;
  if ( v27 )
    result = (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)v27 + 4))(v27, *(_DWORD *)(*(_DWORD *)v27 + 4));
  return result;
}


int __fastcall Block::isInteractiveBlock(Block *this)
{
  return 0;
}


int __fastcall Block::addProperty(int result, int a2, __int64 a3)
{
  if ( !(*(_QWORD *)(result + 24) & a3) )
    *(_QWORD *)(result + 24) |= a3;
  return result;
}


int __fastcall Block::lookupByName(unsigned int *a1, int a2)
{
  int v2; // r7@1
  int v3; // r1@1
  int v4; // r4@4
  unsigned int v5; // r0@6
  int v6; // r2@7
  unsigned int v7; // r3@7
  void *v8; // r0@8
  unsigned int v9; // r10@9
  unsigned int v10; // r11@9
  int v11; // r6@9
  int *v12; // r5@9
  int v13; // r9@10
  _DWORD *v14; // r8@10
  int v15; // r7@10
  const void *v16; // r1@12
  size_t v17; // r2@12
  int v18; // r0@13
  int v19; // r4@14
  char *v20; // r0@18
  unsigned int v21; // r9@19
  unsigned int v22; // r10@19
  int v23; // r11@19
  int *v24; // r5@19
  int v25; // r6@20
  _DWORD *v26; // r8@20
  int v27; // r7@20
  _DWORD *v28; // r1@22
  size_t v29; // r2@22
  int v30; // r4@24
  bool v31; // zf@29
  unsigned int *v32; // r2@34
  signed int v33; // r1@36
  unsigned int *v34; // r2@41
  signed int v35; // r1@43
  char *v36; // r0@54
  unsigned int *v38; // r2@56
  signed int v39; // r1@58
  char *v40; // [sp+4h] [bp-34h]@18
  int v41; // [sp+8h] [bp-30h]@8
  void *s1; // [sp+Ch] [bp-2Ch]@3

  v2 = a2;
  v3 = *(_DWORD *)(*a1 - 12);
  if ( !v3 )
    return 0;
  if ( v2 == 1 )
    Util::toLower(&s1, v3, *a1);
  else
    sub_21E8AF4((int *)&s1, (int *)a1);
  v5 = sub_21E76A0((int *)&s1, ":", 0, 1u);
  if ( v5 != -1 )
  {
    v6 = v5 + 1;
    v7 = *((_DWORD *)s1 - 3);
    if ( v7 < v5 + 1 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v6, v7);
    sub_21E9040((void **)&v41, (int *)&s1, v6, 0xFFFFFFFF);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&s1,
      &v41);
    v8 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
    {
      v32 = (unsigned int *)(v41 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
      }
      else
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  v9 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v10 = *(_DWORD *)algn_280AFA4;
  v11 = v9 % *(_DWORD *)algn_280AFA4;
  v12 = *(int **)(Block::mBlockLookupMap + 4 * (v9 % *(_DWORD *)algn_280AFA4));
  if ( v12 )
    v13 = *v12;
    v14 = s1;
    v15 = *(_DWORD *)(*v12 + 12);
    while ( 1 )
      if ( v15 == v9 )
        v16 = *(const void **)(v13 + 4);
        v17 = *(v14 - 3);
        if ( v17 == *((_DWORD *)v16 - 3) )
        {
          v18 = memcmp(v14, v16, v17);
          if ( !v18 )
            break;
        }
      v19 = *(_DWORD *)v13;
      if ( *(_DWORD *)v13 )
        v15 = *(_DWORD *)(v19 + 12);
        v12 = (int *)v13;
        v13 = *(_DWORD *)v13;
        if ( *(_DWORD *)(v19 + 12) % v10 == v11 )
          continue;
      goto LABEL_16;
    v31 = v12 == 0;
    if ( v12 )
      v18 = *v12;
      v31 = *v12 == 0;
    if ( !v31 )
      goto LABEL_40;
LABEL_16:
  if ( sub_21E76A0((int *)&s1, "tile.", 0, 5u) != -1 )
    v4 = 0;
    goto LABEL_54;
  v40 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v40, *((_DWORD *)s1 - 3) + 5);
  sub_21E7408((const void **)&v40, "tile.", 5u);
  sub_21E72F0((const void **)&v40, (const void **)&s1);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&s1,
    (int *)&v40);
  v20 = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
    else
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v22 = *(_DWORD *)algn_280AFA4;
  v23 = v21 % *(_DWORD *)algn_280AFA4;
  v24 = *(int **)(Block::mBlockLookupMap + 4 * (v21 % *(_DWORD *)algn_280AFA4));
  if ( !v24 )
  v25 = *v24;
  v26 = s1;
  v27 = *(_DWORD *)(*v24 + 12);
  while ( 1 )
    if ( v27 == v21 )
      v28 = *(_DWORD **)(v25 + 4);
      v29 = *(v26 - 3);
      if ( v29 == *(v28 - 3) && !memcmp(v26, v28, v29) )
        break;
    v30 = *(_DWORD *)v25;
    if ( !*(_DWORD *)v25 )
      v4 = 0;
      goto LABEL_54;
    v27 = *(_DWORD *)(v30 + 12);
    v24 = (int *)v25;
    v25 = *(_DWORD *)v25;
    if ( *(_DWORD *)(v30 + 12) % v22 != v23 )
  if ( v24 )
    v18 = *v24;
    if ( *v24 )
LABEL_40:
      v4 = *(_DWORD *)(v18 + 8);
LABEL_54:
  v36 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)((char *)s1 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  return v4;
}


    if ( Block::isInteraction(v8) == 1 )
{
      v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
      v10 = *((_DWORD *)v1 + 1);
      v11 = (*(int (**)(void))(*(_DWORD *)v9 + 56))();
      if ( (v11 | 2) == 3 )
      {
        **((_DWORD **)v1 + 2) = 8;
        goto LABEL_38;
      }
    }
    else
    {
      v11 = 0;
    v32 = *((_DWORD *)v1 + 1);
    v89 = &off_2700C8C;
    v90 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
    v91 = v32;
    v92 = &v99;
    v93 = 0;
    v97 = 0;
    v96 = 0;
    v94 = 0;
    v95 = 0;
    v33 = FullBlock::getBlock((FullBlock *)&v98);
    v34 = *((_DWORD *)v1 + 1);
    v35 = (*(int (**)(void))(*(_DWORD *)v33 + 292))();
    v36 = Player::getSelectedItem(*((Player **)v1 + 1));
    ItemInstance::operator=((int)&v99, (int)v36);
    ItemUseCallback::~ItemUseCallback((ItemUseCallback *)&v89);
    if ( v35 )
      v61 = 1;
      goto LABEL_39;
LABEL_38:
    v61 = 0;
    if ( (unsigned int)(v11 - 1) > 1 )
      goto LABEL_44;
LABEL_39:
    v37 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 52))(v3);
    v38 = *((_DWORD *)v1 + 1);
    (*(void (**)(void))(*(_DWORD *)v37 + 60))();
    if ( v61 == 1 )
      if ( !(*(int (**)(void))(**((_DWORD **)v1 + 1) + 312))() )
        v60 = (ItemUseInventoryTransaction *)*((_DWORD *)v1 + 1);
        goto LABEL_54;
      v39 = 1;
      goto LABEL_43;
LABEL_42:
    v39 = 0;
LABEL_43:
    v61 = v39;
LABEL_44:
    v40 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 52))();
    v41 = *(_QWORD *)v40;
    v88 = *(_DWORD *)(v40 + 8);
    v87 = v41;
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 48))();
    v42 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 52))(v3);
    v43 = *(_BYTE *)(_R11 + 64);
    v44 = *((_DWORD *)v1 + 1);
    v45 = *(int (__fastcall **)(int, int, char *, int))(*(_DWORD *)v42 + 16);
    Vec3::Vec3((int)&v84, _R11 + 52);
    __asm
      VLDR            S0, [SP,#0x1C8+var_108]
      VLDR            S6, [R11,#0x9C]
      VLDR            S2, [SP,#0x1C8+var_104]
      VLDR            S8, [R11,#0xA0]
      VADD.F32        S0, S0, S6
      VLDR            S10, [R11,#0xA4]
      VLDR            S4, [SP,#0x1C8+var_100]
      VADD.F32        S2, S2, S8
      VADD.F32        S4, S4, S10
      VSTR            S0, [SP,#0x1C8+var_FC]
      VSTR            S2, [SP,#0x1C8+var_F8]
      VSTR            S4, [SP,#0x1C8+var_F4]
    v50 = v45(v42, v44, &v99, _R11 + 52);
    if ( (v50 | 2) == 3 )
      **((_DWORD **)v1 + 2) = 8;
      if ( v61 )
        v51 = 1;
LABEL_50:
        v56 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 52))(v3);
        v57 = *(_BYTE *)(_R11 + 64);
        v58 = *((_DWORD *)v1 + 1);
        v59 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v56 + 20);
        Vec3::Vec3((int)&v69, _R11 + 52);
        __asm
        {
          VLDR            S0, [SP,#0x1C8+var_15C]
          VLDR            S6, [R11,#0x9C]
          VLDR            S2, [SP,#0x1C8+var_158]
          VLDR            S8, [R11,#0xA0]
          VADD.F32        S0, S0, S6
          VLDR            S10, [R11,#0xA4]
          VLDR            S4, [SP,#0x1C8+var_154]
          VADD.F32        S2, S2, S8
          VADD.F32        S4, S4, S10
          VSTR            S0, [SP,#0x1C8+var_150]
          VSTR            S2, [SP,#0x1C8+var_14C]
          VSTR            S4, [SP,#0x1C8+var_148]
        }
        v59(v56, v58, &v99, _R11 + 52);
LABEL_51:
        (*(void (__cdecl **)(_DWORD, __int64 *, _DWORD))(**((_DWORD **)v1 + 1) + 48))(
          *((_DWORD *)v1 + 1),
          &v87,
          *(_DWORD *)(**((_DWORD **)v1 + 1) + 48));
        if ( !v51 )
          ItemUseInventoryTransaction::resendBlocksAroundArea(
            v60,
            *((Player **)v1 + 1),
            (const BlockPos *)(_R11 + 52),
            *(_BYTE *)(_R11 + 64));
LABEL_55:
          if ( v102 )
            operator delete(v102);
          if ( v101 )
            operator delete(v101);
          result = v100;
          goto LABEL_60;
LABEL_54:
        Player::setSelectedItem(v60, (const ItemInstance *)&v99);
        goto LABEL_55;
      v52 = *((_DWORD *)v1 + 1);
      v75 = &off_2700C8C;
      v76 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 52))(v3);
      v77 = v52;
      v78 = &v99;
      v79 = 0;
      v83 = 0;
      v82 = 0;
      v80 = 0;
      v81 = 0;
      LOBYTE(v52) = *(_BYTE *)(_R11 + 64);
      v53 = *(_DWORD *)(*((_DWORD *)v1 + 1) + 5172);
      v54 = *(int (__fastcall **)(int, char *, int, _DWORD))(*(_DWORD *)v53 + 52);
      Vec3::Vec3((int)&v72, _R11 + 52);
      __asm
        VLDR            S0, [SP,#0x1C8+var_144]
        VLDR            S6, [R11,#0x9C]
        VLDR            S2, [SP,#0x1C8+var_140]
        VLDR            S8, [R11,#0xA0]
        VADD.F32        S0, S0, S6
        VLDR            S10, [R11,#0xA4]
        VLDR            S4, [SP,#0x1C8+var_13C]
        VADD.F32        S2, S2, S8
        VADD.F32        S4, S4, S10
        VSTR            S0, [SP,#0x1C8+var_138]
        VSTR            S2, [SP,#0x1C8+var_134]
        VSTR            S4, [SP,#0x1C8+var_130]
      v55 = v54(v53, &v99, _R11 + 52, (char)v52);
      ItemUseCallback::~ItemUseCallback((ItemUseCallback *)&v75);
      if ( v55 )
        goto LABEL_50;
    v51 = 0;
    if ( (unsigned int)(v50 - 1) > 1 )
      goto LABEL_51;
    goto LABEL_50;
  }
  if ( result == 2 )
  {
    ItemInstance::ItemInstance((ItemInstance *)&v65, _R11 + 72);
    v12 = (const BlockPos *)Entity::getRegion(*((Entity **)v1 + 1));
    BlockSource::getBlockAndData((BlockSource *)&v64, v12, _R11 + 52);
    v13 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 52))();
    v14 = *(_QWORD *)v13;
    v63 = *(_DWORD *)(v13 + 8);
    v62 = v14;
    v15 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 52))(v3);
    v16 = *((_DWORD *)v1 + 1);
    v17 = (*(int (__cdecl **)(int))(*(_DWORD *)v15 + 32))(v15);
    if ( (v17 | 2) == 3 )
      v18 = 0;
      v24 = *(_BYTE *)(_R11 + 64);
      v18 = (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(*((_DWORD *)v1 + 1) + 5172) + 12))(*(_DWORD *)(*((_DWORD *)v1 + 1) + 5172));
    (*(void (__cdecl **)(_DWORD))(**((_DWORD **)v1 + 1) + 48))(*((_DWORD *)v1 + 1));
    v25 = 0;
    if ( (unsigned int)(v17 - 1) < 2 )
      v25 = 1;
    v26 = (ItemUseInventoryTransaction *)(v25 | v18);
    if ( !(v25 | v18)
      || (v27 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 52))(v3),
          v28 = *((_DWORD *)v1 + 1),
          v26 = (ItemUseInventoryTransaction *)(*(int (__cdecl **)(int))(*(_DWORD *)v27 + 36))(v27),
          !v18) )
      ItemUseInventoryTransaction::resendBlocksAroundArea(
        v26,
        *((Player **)v1 + 1),
        (const BlockPos *)(_R11 + 52),
        *(_BYTE *)(_R11 + 64));
    if ( ptr )
      operator delete(ptr);
    if ( v67 )
      operator delete(v67);
    result = v66;
    goto LABEL_60;
  if ( result != 1 )
    return result;
  v5 = *((_DWORD *)v1 + 1);
  v6 = *(_DWORD *)(v5 + 416);
  if ( v6 - *(_DWORD *)(v5 + 4584) <= 4 )
    result = *((_DWORD *)v1 + 2);
    *(_DWORD *)result = 7;
  *(_DWORD *)(v5 + 4584) = v6;
  v19 = Player::getSelectedItem(*((Player **)v1 + 1));
  ItemInstance::ItemInstance((ItemInstance *)&v103, (int)v19);
  v20 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 52))(v3);
  v21 = *((_DWORD *)v1 + 1);
  v23 = (*(int (**)(void))(*(_DWORD *)v20 + 8))();
  if ( (v23 | 2) == 3 )
    **((_DWORD **)v1 + 2) = 8;
    if ( (unsigned int)(v23 - 1) >= 2 )
      goto LABEL_30;
  else
    v29 = GameMode::baseUseItem(*(GameMode **)(*((_DWORD *)v1 + 1) + 5172), (ItemInstance *)&v103);
    v22 = 0;
    if ( (unsigned int)(v23 - 1) < 2 )
      v22 = 1;
    if ( !(v29 | v22) )
  v30 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 52))(v3);
  v31 = *((_DWORD *)v1 + 1);
  (*(void (**)(void))(*(_DWORD *)v30 + 12))();
LABEL_30:
  if ( v106 )
    operator delete(v106);
  if ( v105 )
    operator delete(v105);
  result = v104;
LABEL_60:
  if ( result )
    result = (*(int (__cdecl **)(int, _DWORD, signed int))(*(_DWORD *)result + 4))(
               result,
               *(_DWORD *)(*(_DWORD *)result + 4),
               v22);
  return result;
}


int __fastcall Block::isCropBlock(Block *this)
{
  return 0;
}


signed int __fastcall Block::isUnbreakable(Block *this)
{
  signed int result; // r0@1

  __asm { VLDR            S0, [R0,#0x58] }
  result = 0;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


signed int __fastcall Block::canBeSilkTouched(Block *this)
{
  return 1;
}


int __fastcall Block::getMapColor(int result, BlockSource *a2, const BlockPos *a3)
{
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r12@1
  int v6; // r1@1

  v3 = *((_DWORD *)a2 + 15);
  v4 = *((_DWORD *)a2 + 16);
  v5 = *((_DWORD *)a2 + 17);
  v6 = *((_DWORD *)a2 + 18);
  *(_DWORD *)result = v3;
  *(_DWORD *)(result + 4) = v4;
  *(_DWORD *)(result + 8) = v5;
  *(_DWORD *)(result + 12) = v6;
  return result;
}


signed int __fastcall Block::shouldDispense(Block *this, BlockSource *a2, Container *a3)
{
  return 1;
}


int __fastcall Block::onRemove(Block *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  CircuitSystem *v8; // r0@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = (CircuitSystem *)Dimension::getCircuitSystem(v7);
    result = j_j_j__ZN13CircuitSystem16removeComponentsERK8BlockPos(v8, v4);
  }
  return result;
}


void __fastcall Block::randomlyModifyPosition(Block *this, const BlockPos *a2, int a3)
{
  Vec3::Vec3((int)this, a3);
}


unsigned int __fastcall Block::isInfiniburnBlock(Block *this, int a2)
{
  return (*((_BYTE *)this + 27) & 8u) >> 3;
}


signed int __fastcall Block::isType(Block *this, const Block *a2)
{
  signed int v2; // r2@1

  v2 = 0;
  if ( this == a2 )
    v2 = 1;
  return v2;
}


int __fastcall Block::use(Block *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  return 0;
}


unsigned int __fastcall Block::canProvideSupport(int a1, BlockSource *a2, const BlockPos *a3, char a4)
{
  int v4; // r4@1
  int v5; // r0@1
  int *v6; // r5@1
  signed int v7; // r0@3
  int v8; // r1@3
  signed int v9; // r5@6
  unsigned __int8 v11; // [sp+7h] [bp-11h]@14

  v4 = a1;
  v6 = (int *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 24);
  if ( a4 != 1 )
  {
    if ( !(v5 & 0x200000) )
      return (v5 & 0x100000u) >> 20;
    return 1;
  }
  if ( v5 & 0x280000 )
  v7 = BlockSource::getData(a2, a3);
  v8 = *v6;
  if ( *v6 & 1 )
    v7 = (v7 & 4u) >> 2;
LABEL_16:
    v9 = 1;
    return v7 & v9;
  if ( v8 & 2 )
    v11 = v7;
    v7 = BlockState::getBool((BlockState *)(Block::mStoneSlab + 580), &v11);
    goto LABEL_16;
  if ( v8 & 0x80 )
    v7 = 1;
  v9 = 0;
  if ( Block::mTopSnow == v4 )
    if ( TopSnowBlock::dataIDToHeight((TopSnowBlock *)v7, Block::mTopSnow) == 8 )
      v9 = 1;
    v7 = v9;
  return v7 & v9;
}


int __fastcall Block::randomlyModifyPosition(Block *this, const BlockPos *a2, int *a3, _DWORD *a4)
{
  *a4 = 0;
  return (*(int (__fastcall **)(Block *))(*(_DWORD *)a2 + 24))(this);
}


signed int __fastcall Block::attack(Block *this, Player *a2, const BlockPos *a3)
{
  return 1;
}


InstantaneousAttributeBuff *__fastcall Block::playerDestroy(Block *this, Player *a2, const BlockPos *a3, int a4)
{
  Entity *v4; // r4@1
  Block *v5; // r7@1
  int v6; // r9@1
  const BlockPos *v7; // r8@1
  ItemInstance *v8; // r5@1
  const ItemInstance *v9; // r2@9
  BlockSource *v10; // r5@11
  Block *v11; // r0@11
  void (__fastcall *v12)(Block *, int, const BlockPos *, int); // r6@21
  int v13; // r0@21
  char v15; // [sp+8h] [bp-68h]@11
  int v16; // [sp+10h] [bp-60h]@15
  void *v17; // [sp+2Ch] [bp-44h]@13
  void *ptr; // [sp+3Ch] [bp-34h]@11

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (ItemInstance *)Player::getSelectedItem(a2);
  if ( !*((_BYTE *)v8 + 15)
    || !*(_DWORD *)v8
    || ItemInstance::isNull(v8)
    || !*((_BYTE *)v8 + 14)
    || ItemInstance::isEnchanted(v8) != 1 )
  {
    goto LABEL_21;
  }
  if ( (*(int (__fastcall **)(Block *))(*(_DWORD *)v5 + 440))(v5) != 1
    || EnchantUtils::hasEnchant((EnchantUtils *)0x10, (int)v8, v9) != 1 )
    EnchantUtils::getEnchantLevel((EnchantUtils *)0x12, (int)v8, v9);
LABEL_21:
    v12 = *(void (__fastcall **)(Block *, int, const BlockPos *, int))(*(_DWORD *)v5 + 276);
    v13 = Entity::getRegion(v4);
    v12(v5, v13, v7, v6);
    return Player::causeFoodExhaustion(v4, 0.025);
  v10 = (BlockSource *)Entity::getRegion(v4);
  v11 = (Block *)(*(int (__fastcall **)(char *, Block *, int))(*(_DWORD *)v5 + 444))(&v15, v5, v6);
  Block::popResource(v11, v10, v7, (const ItemInstance *)&v15);
  if ( ptr )
    operator delete(ptr);
  if ( v17 )
    operator delete(v17);
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  v16 = 0;
  return Player::causeFoodExhaustion(v4, 0.025);
}


void __fastcall Block::spawnResources(Block *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  Block::spawnResources(this, a2, a3, a4, a5, a6);
}


_BOOL4 __fastcall Block::hasProperty(int a1, int a2, __int64 a3)
{
  return (*(_QWORD *)(a1 + 24) & a3) != 0;
}


int __fastcall Block::clip(Block *this, BlockSource *a2, const BlockPos *a3, const Vec3 *a4, __int64 a5, int a6, const AABB *a7, const Vec3 *a8)
{
  const Vec3 *v8; // r9@1
  Block *v9; // r8@1
  signed int v16; // lr@3
  signed int v17; // r3@3
  signed int v19; // r11@16
  signed int v20; // r0@16
  signed int v22; // r2@29
  signed int v23; // r7@29
  signed int v25; // r6@47
  signed int v26; // r6@54
  signed int v27; // r0@61
  signed int v28; // r5@62
  signed int v29; // r5@69
  signed int v30; // r7@76
  signed int v31; // r4@77
  signed int v32; // r2@84
  char v34; // r0@118
  float v35; // [sp+0h] [bp-F0h]@130
  float v36; // [sp+Ch] [bp-E4h]@1
  float v37; // [sp+10h] [bp-E0h]@1
  float v38; // [sp+14h] [bp-DCh]@1
  float v39; // [sp+18h] [bp-D8h]@1
  float v40; // [sp+1Ch] [bp-D4h]@1
  float v41; // [sp+20h] [bp-D0h]@1
  float v42; // [sp+24h] [bp-CCh]@1
  float v43; // [sp+28h] [bp-C8h]@1
  float v44; // [sp+2Ch] [bp-C4h]@1
  float v45; // [sp+30h] [bp-C0h]@1
  float v46; // [sp+34h] [bp-BCh]@1
  float v47; // [sp+38h] [bp-B8h]@1
  float v48; // [sp+3Ch] [bp-B4h]@1
  float v49; // [sp+40h] [bp-B0h]@1
  int v50; // [sp+44h] [bp-ACh]@1
  int v51; // [sp+48h] [bp-A8h]@1
  float v52; // [sp+4Ch] [bp-A4h]@1
  float v53; // [sp+50h] [bp-A0h]@1
  float v54; // [sp+54h] [bp-9Ch]@1
  float v55; // [sp+60h] [bp-90h]@1
  float v58; // [sp+6Ch] [bp-84h]@3
  float v59; // [sp+70h] [bp-80h]@16
  float v60; // [sp+74h] [bp-7Ch]@29
  float v61; // [sp+7Ch] [bp-74h]@1

  v8 = a4;
  v9 = this;
  Vec3::Vec3((int)&v61, (int)a4);
  __asm
  {
    VLDR            S0, [SP,#0xF0+var_74]
    VLDR            S2, [SP,#0xF0+var_70]
    VLDR            S4, [SP,#0xF0+var_6C]
    VNEG.F32        S0, S0
    VNEG.F32        S2, S2
    VNEG.F32        S4, S4
    VSTR            S0, [SP,#0xF0+var_9C]
    VSTR            S2, [SP,#0xF0+var_98]
    VSTR            S4, [SP,#0xF0+var_94]
  }
  AABB::translated((AABB *)&v55, a8, (int)&v54);
  _R0 = a5;
    VLDR            S12, [R1]
    VLDR            S14, [R1,#4]
    VLDR            S10, [R0]
    VLDR            S8, [R0,#4]
    VSUB.F32        S30, S12, S10
    VLDR            S6, [R0,#8]
    VLDR            S1, [R1,#8]
    VSUB.F32        S24, S14, S8
    VSUB.F32        S22, S1, S6
    VSUB.F32        S10, S10, S0
    VSUB.F32        S8, S8, S2
    VLDR            S5, =1.0e-7
    VSUB.F32        S6, S6, S4
  v51 = 0;
  __asm { VMUL.F32        S12, S30, S30 }
  v52 = 0.0;
  v53 = 0.0;
  v48 = 0.0;
  v49 = 0.0;
  v50 = 0;
  v46 = 0.0;
  v47 = 0.0;
  v42 = 0.0;
  v43 = 0.0;
  v44 = 0.0;
  v45 = 0.0;
  v40 = 0.0;
  v41 = 0.0;
  __asm { VCMPE.F32       S12, S5 }
  v36 = 0.0;
  v37 = 0.0;
  v38 = 0.0;
  v39 = 0.0;
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( _NF ^ _VF )
    __asm { VLDR            S12, =0.0 }
    _R12 = &v58;
    v16 = 1;
    v17 = 0;
    __asm
    {
      VMOV.F32        S1, S12
      VMOV.F32        S3, S12
      VMOV.F32        S26, S12
      VMOV.F32        S28, S12
    }
  else
    __asm { VLDR            S12, [SP,#0xF0+var_90] }
      VSUB.F32        S12, S12, S10
      VDIV.F32        S14, S12, S30
      VLDR            S12, =0.0
      VCMPE.F32       S14, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm
      {
        VMOV.F32        S26, S12
        VMOV.F32        S28, S12
      }
    else
        VMOV.F32        S1, #1.0
        VCMPE.F32       S14, S1
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm { VMUL.F32        S1, S14, S30 }
        v17 = 1;
        __asm
        {
          VMUL.F32        S3, S14, S24
          VMUL.F32        S14, S14, S22
          VADD.F32        S1, S1, S10
          VADD.F32        S28, S3, S8
          VADD.F32        S26, S14, S6
          VSTR            S1, [SP,#0xF0+var_A8]
          VSTR            S28, [SP,#0xF0+var_A4]
          VSTR            S26, [SP,#0xF0+var_A0]
        }
    __asm { VLDR            S14, [SP,#0xF0+var_84] }
      VSUB.F32        S14, S14, S10
      VDIV.F32        S14, S14, S30
      goto LABEL_140;
      VMOV.F32        S1, #1.0
      VCMPE.F32       S14, S1
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm { VMUL.F32        S12, S14, S30 }
      v16 = 0;
        VMUL.F32        S1, S14, S24
        VMUL.F32        S14, S14, S22
        VADD.F32        S12, S12, S10
        VADD.F32        S3, S1, S8
        VADD.F32        S1, S14, S6
        VSTR            S12, [SP,#0xF0+var_B4]
        VSTR            S3, [SP,#0xF0+var_B0]
        VSTR            S1, [SP,#0xF0+var_AC]
LABEL_140:
        VMOV.F32        S1, S12
        VMOV.F32        S3, S12
    VMUL.F32        S14, S24, S24
    VCMPE.F32       S14, S5
    VMRS            APSR_nzcv, FPSCR
    __asm { VLDR            S14, =0.0 }
    _R10 = &v59;
    v19 = 1;
    v20 = 0;
      VMOV.F32        S7, S14
      VMOV.F32        S13, S14
      VMOV.F32        S15, S14
      VMOV.F32        S9, S14
      VMOV.F32        S11, S14
    __asm { VLDR            S14, [SP,#0xF0+var_8C] }
      VSUB.F32        S14, S14, S8
      VDIV.F32        S13, S14, S24
      VLDR            S14, =0.0
      VCMPE.F32       S13, #0.0
        VMOV.F32        S7, S14
        VMOV.F32        S9, S14
        VMOV.F32        S11, S14
        VMOV.F32        S7, #1.0
        VCMPE.F32       S13, S7
        __asm { VMUL.F32        S7, S13, S30 }
        v20 = 1;
          VMUL.F32        S9, S13, S24
          VMUL.F32        S13, S13, S22
          VADD.F32        S11, S7, S10
          VADD.F32        S7, S9, S8
          VADD.F32        S9, S13, S6
          VSTR            S11, [SP,#0xF0+var_C0]
          VSTR            S7, [SP,#0xF0+var_BC]
          VSTR            S9, [SP,#0xF0+var_B8]
    __asm { VLDR            S13, [SP,#0xF0+var_80] }
      VSUB.F32        S13, S13, S8
      VDIV.F32        S13, S13, S24
      goto LABEL_141;
      VMOV.F32        S15, #1.0
      VCMPE.F32       S13, S15
      __asm { VMUL.F32        S14, S13, S30 }
      v19 = 0;
        VMUL.F32        S16, S13, S24
        VMUL.F32        S13, S13, S22
        VADD.F32        S15, S14, S10
        VADD.F32        S14, S16, S8
        VADD.F32        S13, S13, S6
        VSTR            S15, [SP,#0xF0+var_CC]
        VSTR            S14, [SP,#0xF0+var_C8]
        VSTR            S13, [SP,#0xF0+var_C4]
LABEL_141:
        VMOV.F32        S13, S14
        VMOV.F32        S15, S14
    VMUL.F32        S16, S22, S22
    VCMPE.F32       S16, S5
    __asm { VLDR            S5, =0.0 }
    _R4 = &v60;
    v22 = 1;
    v23 = 0;
      VMOV.F32        S16, S5
      VMOV.F32        S22, S5
      VMOV.F32        S24, S5
      VMOV.F32        S18, S5
      VMOV.F32        S20, S5
    __asm { VLDR            S5, [SP,#0xF0+var_88] }
      VSUB.F32        S5, S5, S6
      VDIV.F32        S17, S5, S22
      VLDR            S5, =0.0
      VCMPE.F32       S17, #0.0
        VMOV.F32        S16, S5
        VMOV.F32        S18, S5
        VMOV.F32        S20, S5
        VMOV.F32        S16, #1.0
        VCMPE.F32       S17, S16
        __asm { VMUL.F32        S18, S17, S24 }
        v23 = 1;
          VMUL.F32        S16, S17, S30
          VMUL.F32        S17, S17, S22
          VADD.F32        S18, S18, S8
          VADD.F32        S20, S16, S10
          VADD.F32        S16, S17, S6
          VSTR            S20, [SP,#0xF0+var_D8]
          VSTR            S18, [SP,#0xF0+var_D4]
          VSTR            S16, [SP,#0xF0+var_D0]
    __asm { VLDR            S17, [SP,#0xF0+var_7C] }
      VSUB.F32        S17, S17, S6
      VDIV.F32        S17, S17, S22
      goto LABEL_142;
      VMOV.F32        S19, #1.0
      VCMPE.F32       S17, S19
      __asm { VMUL.F32        S5, S17, S30 }
      v22 = 0;
        VMUL.F32        S30, S17, S24
        VMUL.F32        S17, S17, S22
        VADD.F32        S24, S5, S10
        VADD.F32        S22, S30, S8
        VADD.F32        S5, S17, S6
        VSTR            S24, [SP,#0xF0+var_E4]
        VSTR            S22, [SP,#0xF0+var_E0]
        VSTR            S5, [SP,#0xF0+var_DC]
LABEL_142:
        VMOV.F32        S22, S5
        VMOV.F32        S24, S5
    VLDR            S30, [SP,#0xF0+var_8C]
    VCMPE.F32       S28, S30
    goto LABEL_143;
  if ( v17 ^ 1 )
    VLDR            S30, [R10]
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    VLDR            S28, [SP,#0xF0+var_88]
    VCMPE.F32       S26, S28
    VLDR            S28, [R4]
LABEL_143:
    _R3 = 0;
    _R3 = (float *)1;
  __asm { VLDR            S26, [SP,#0xF0+var_8C] }
  v25 = 0;
    VCMPE.F32       S3, S26
    v25 = 1;
  if ( v25 | v16 )
    goto LABEL_144;
    VLDR            S26, [R10]
    VLDR            S26, [SP,#0xF0+var_88]
    VCMPE.F32       S1, S26
    VLDR            S26, [R4]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v26 = 1;
LABEL_144:
    v26 = 0;
    VLDR            S26, [SP,#0xF0+var_90]
    VCMPE.F32       S11, S26
    goto LABEL_145;
  if ( v20 ^ 1 )
    VLDR            S26, [R12]
    VCMPE.F32       S9, S26
LABEL_145:
    v27 = 0;
    v27 = 1;
  __asm { VLDR            S26, [SP,#0xF0+var_90] }
  v28 = 0;
    VCMPE.F32       S15, S26
    v28 = 1;
  if ( v28 | v19 )
    goto LABEL_146;
    VCMPE.F32       S13, S26
    v29 = 1;
LABEL_146:
    v29 = 0;
    VCMPE.F32       S20, S26
    goto LABEL_147;
  if ( v23 ^ 1 )
    VLDR            S26, [SP,#0xF0+var_8C]
    VCMPE.F32       S18, S26
LABEL_147:
    v30 = 0;
    v30 = 1;
  v31 = 0;
    VCMPE.F32       S24, S26
    v31 = 1;
  if ( v22 | v31 )
    goto LABEL_148;
    VCMPE.F32       S22, S26
    v32 = 1;
LABEL_148:
    v32 = 0;
  if ( _R3 )
    _R3 = (float *)&v51;
  if ( v26 == 1 )
    if ( !_R3 )
      goto LABEL_149;
      VLDR            S26, [R3]
      VLDR            S28, [R3,#4]
      VSUB.F32        S3, S3, S8
      VSUB.F32        S26, S26, S10
      VLDR            S30, [R3,#8]
      VSUB.F32        S28, S28, S8
      VSUB.F32        S1, S1, S6
      VSUB.F32        S30, S30, S6
      VMUL.F32        S12, S12, S12
      VMUL.F32        S3, S3, S3
      VMUL.F32        S26, S26, S26
      VMUL.F32        S28, S28, S28
      VMUL.F32        S1, S1, S1
      VADD.F32        S12, S3, S12
      VMUL.F32        S3, S30, S30
      VADD.F32        S26, S28, S26
      VADD.F32        S12, S12, S1
      VADD.F32        S1, S26, S3
      VCMPE.F32       S12, S1
LABEL_149:
      _R3 = &v48;
      _R3 = (float *)&v51;
  if ( v27 == 1 )
    if ( _R3 )
        VLDR            S1, [R3]
        VSUB.F32        S12, S11, S10
        VLDR            S3, [R3,#4]
        VSUB.F32        S7, S7, S8
        VSUB.F32        S1, S1, S10
        VLDR            S11, [R3,#8]
        VSUB.F32        S3, S3, S8
        VSUB.F32        S9, S9, S6
        VSUB.F32        S11, S11, S6
        VMUL.F32        S12, S12, S12
        VMUL.F32        S7, S7, S7
        VMUL.F32        S1, S1, S1
        VMUL.F32        S3, S3, S3
        VMUL.F32        S9, S9, S9
        VADD.F32        S12, S7, S12
        VMUL.F32        S7, S11, S11
        VADD.F32        S1, S3, S1
        VADD.F32        S12, S12, S9
        VADD.F32        S1, S1, S7
        VCMPE.F32       S12, S1
      if ( _NF ^ _VF )
        _R3 = &v45;
      _R3 = &v45;
  if ( v29 == 1 )
        VSUB.F32        S12, S15, S10
        VSUB.F32        S14, S14, S8
        VLDR            S7, [R3,#8]
        VSUB.F32        S9, S13, S6
        VSUB.F32        S7, S7, S6
        VMUL.F32        S14, S14, S14
        VADD.F32        S12, S14, S12
        VMUL.F32        S14, S7, S7
        VADD.F32        S14, S1, S14
        VCMPE.F32       S12, S14
        _R3 = &v42;
      _R3 = &v42;
  if ( v30 == 1 )
        VLDR            S14, [R3]
        VSUB.F32        S12, S20, S10
        VLDR            S1, [R3,#4]
        VSUB.F32        S7, S18, S8
        VSUB.F32        S14, S14, S10
        VLDR            S3, [R3,#8]
        VSUB.F32        S1, S1, S8
        VSUB.F32        S9, S16, S6
        VSUB.F32        S3, S3, S6
        VADD.F32        S14, S14, S3
        _R3 = &v39;
      _R3 = &v39;
  if ( v32 == 1 )
        VSUB.F32        S12, S24, S10
        VSUB.F32        S7, S22, S8
        VSUB.F32        S10, S14, S10
        VSUB.F32        S8, S1, S8
        VSUB.F32        S14, S5, S6
        VSUB.F32        S6, S3, S6
        VMUL.F32        S1, S7, S7
        VMUL.F32        S10, S10, S10
        VMUL.F32        S8, S8, S8
        VMUL.F32        S6, S6, S6
        VADD.F32        S12, S1, S12
        VADD.F32        S8, S8, S10
        VADD.F32        S10, S12, S14
        VADD.F32        S6, S8, S6
        VCMPE.F32       S10, S6
        _R3 = &v36;
      _R3 = &v36;
  else if ( !_R3 )
    return HitResult::HitResult((int)v9, SHIDWORD(a5));
  __asm { VLDR            S6, [R3] }
  v34 = -1;
    VLDR            S8, [R3,#4]
    VLDR            S10, [R3,#8]
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VSTR            S0, [SP,#0xF0+var_F0]
    VSTR            S2, [SP,#0xF0+var_EC]
    VSTR            S4, [SP,#0xF0+var_E8]
  if ( _ZF )
    v34 = 4;
  if ( _R3 == &v48 )
    v34 = 5;
  if ( _R3 == &v45 )
    v34 = 0;
  if ( _R3 == &v42 )
    v34 = 1;
  if ( _R3 == &v39 )
    v34 = 2;
  if ( _R3 == &v36 )
    v34 = 3;
  return HitResult::HitResult((int)v9, (int)v8, v34, (int)&v35);
}


signed int __fastcall Block::canSurvive(Block *this, BlockSource *a2, const BlockPos *a3)
{
  return 1;
}


int __fastcall Block::dispense(Block *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, signed __int8 a6)
{
  return 0;
}


signed int __fastcall Block::addCollisionShapes(int a1, int a2, int a3, AABB *a4, int a5)
{
  int v5; // r7@1
  AABB *v6; // r8@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r0@1
  char v11; // [sp+8h] [bp-38h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  AABB::AABB((AABB *)&v11);
  v9 = (*(int (__fastcall **)(int, char *, int, int))(*(_DWORD *)v5 + 12))(v5, &v11, v8, v7);
  return Block::addAABB(v9, (AABB *)&v11, v6, a5);
}


int __fastcall Block::canBeOriginalSurface(Block *this)
{
  return 0;
}


int __fastcall Block::getSecondPart(Block *this, unsigned __int8 a2, const BlockPos *a3, BlockPos *a4)
{
  return 0;
}


int __fastcall Block::getPlacementFacingAllExceptAxisY(Block *this, Entity *a2, const BlockPos *a3, float a4)
{
  float v10; // r1@1
  int v12; // [sp+0h] [bp-10h]@1

  _R4 = a3;
  Entity::getRotation((Entity *)&v12, (int)this);
  __asm
  {
    VMOV            S0, R4
    VLDR            S2, [SP,#0x10+var_C]
    VMOV.F32        S4, #0.5
    VSUB.F32        S0, S2, S0
    VLDR            S2, =0.011111
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return (char)(0x4030502u >> (8 * mce::Math::floor(_R0, v10) & 0x18));
}


signed int __fastcall Block::isEmpty(Block *this)
{
  signed int result; // r0@2

  if ( *((_QWORD *)this + 3) )
    result = 0;
  else
    result = Material::isType(*((int **)this + 14), 0);
  return result;
}


signed int __fastcall Block::waterSpreadCausesSpawn(Block *this)
{
  return 1;
}


int __fastcall Block::isSlabBlock(Block *this)
{
  return 0;
}


signed int __fastcall Block::canGrowChorus(Block *this)
{
  int v1; // r1@1
  signed int result; // r0@2

  v1 = *((_BYTE *)this + 4);
  if ( v1 == *(_BYTE *)(Block::mEndStone + 4) )
  {
    result = 1;
  }
  else
    result = 0;
    if ( v1 == *(_BYTE *)(Block::mChorusPlantBlock + 4) )
      result = 1;
  return result;
}


int __fastcall Block::getExtraRenderLayers(Block *this)
{
  return 0;
}


int __fastcall Block::setDestroyTime(int result, float _R1)
{
  __asm { VMOV.F32        S0, #5.0 }
  *(float *)(result + 88) = _R1;
  __asm
  {
    VMOV            S2, R1
    VMUL.F32        S0, S2, S0
    VLDR            S2, [R0,#0x5C]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VSTRLT          S0, [R0,#0x5C] }
  return result;
}


int __fastcall Block::forEachBlock(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int result; // r0@3
  bool v4; // zf@3

  v1 = a1;
  v2 = 0;
  do
  {
    if ( !*(_DWORD *)(v1 + 8) )
      sub_21E5F48();
    result = (*(int (__fastcall **)(int, _DWORD))(v1 + 12))(v1, Block::mBlocks[v2]);
    v4 = v2 == 255;
    if ( v2 != 255 )
    {
      result ^= 1u;
      ++v2;
      v4 = result == 1;
    }
  }
  while ( !v4 );
  return result;
}


unsigned int __fastcall Block::isSolidBlockingBlock(Block *this)
{
  Block *v1; // r4@1
  unsigned int result; // r0@2
  int v3; // r0@3

  v1 = this;
  if ( Material::isSolidBlocking(*((Material **)this + 14)) == 1 )
  {
    v3 = *((_DWORD *)v1 + 6);
    if ( v3 & 0x200000 )
      result = 1;
    else
      result = (v3 & 0x100000u) >> 20;
  }
  else
    result = 0;
  return result;
}


void __fastcall Block::buildDescriptionName(Block *this, int a2)
{
  int *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = (int *)this;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 380))(&v6);
  I18n::get(v2, (int **)&v6);
  v3 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
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
}


int __fastcall Block::isRailBlock(Block *this)
{
  return 0;
}


unsigned int __fastcall Block::getMobToSpawn(Block *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  int v5; // r0@1
  int v6; // r1@1
  int v7; // r2@1
  unsigned int result; // r0@2
  int v14; // [sp+4h] [bp-1Ch]@1
  int v15; // [sp+8h] [bp-18h]@1
  int v16; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 2);
  v14 = v5;
  v15 = v6 + 1;
  v16 = v7;
  _R0 = BlockSource::getBrightness(v4, (const BlockPos *)&v14);
  __asm
  {
    VMOV.F32        S0, #8.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = Block::getTypeToSpawn(_R0, (int)v4, 2816, v3);
  else
    result = 0;
  return result;
}


void __fastcall Block::buildDescriptionName(Block *this, int a2)
{
  Block::buildDescriptionName(this, a2);
}


  if ( this && Block::hasBlockEntity(this) == 1 )
{
    if ( v3 )
    {
      v4 = Block::getBlockEntityType(v3);
      v5 = Block::getBlockEntityType(v2);
      result = 0;
      if ( v4 != v5 )
        result = 1;
    }
    else
      result = 1;
  }
  else
  {
    result = 0;
  return result;
}


int __fastcall Block::checkIsPathable(Block *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  return Material::getBlocksMotion(*((Material **)this + 14)) ^ 1;
}


void __fastcall Block::~Block(Block *this)
{
  Block *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &loc_2704AC0;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  operator delete((void *)v1);
}


_BYTE *__fastcall Block::transformToValidBlockId(_BYTE *result, _BYTE *a2)
{
  int v2; // r1@1

  v2 = *a2;
  if ( v2 && !Block::mBlocks[v2] )
    LOBYTE(v2) = *(_BYTE *)(Block::mInfoUpdateGame2 + 4);
  *result = v2;
  return result;
}


int __fastcall Block::updateEntityAfterFallOn(Block *this, Entity *a2)
{
  int result; // r0@1

  result = 0;
  *((_DWORD *)a2 + 28) = 0;
  return result;
}


int __fastcall Block::getDirectSignal(Block *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 0;
}


void __fastcall Block::getDebugText(int a1, int a2)
{
  Block::getDebugText(a1, a2);
}


signed int __fastcall Block::isValidAuxValue(Block *this, int a2)
{
  return 1;
}


int __fastcall Block::isAlphaTested(Block *this)
{
  Block *v1; // r1@1
  int result; // r0@1
  int v3; // r2@1
  bool v4; // zf@1
  int v5; // r0@4
  char v6; // r1@7

  v1 = this;
  result = 1;
  v3 = *((_DWORD *)v1 + 5);
  v4 = v3 == 5;
  if ( v3 != 5 )
    v4 = v3 == 8;
  if ( !v4 )
  {
    v5 = *((_BYTE *)v1 + 16);
    if ( v3 == 4 && *((_BYTE *)v1 + 16) )
    {
      result = 1;
    }
    else
      v6 = 0;
      if ( v3 == 7 )
        v6 = 1;
      result = (v5 != 0) & (unsigned __int8)v6;
  }
  return result;
}


int __fastcall Block::Block(int a1, const void **a2, char a3, int a4)
{
  int v4; // r5@1
  const void **v5; // r4@1
  int *v6; // r9@1
  __int64 v7; // r6@1

  v4 = a1;
  v5 = a2;
  v6 = (int *)(a1 + 8);
  HIDWORD(v7) = a4;
  *(_DWORD *)a1 = &loc_2704AC0;
  *(_BYTE *)(a1 + 4) = a3;
  if ( *((_DWORD *)*a2 - 3) )
  {
    sub_21E8AF4(v6, (int *)&Block::BLOCK_DESCRIPTION_PREFIX);
    sub_21E72F0((const void **)v6, v5);
  }
  else
    sub_21E94B4((void **)v6, (const char *)&unk_257BC67);
  sub_21E8AF4((int *)(v4 + 12), (int *)v5);
  *(_BYTE *)(v4 + 17) = 0;
  LODWORD(v7) = 1065353216;
  *(_DWORD *)(v4 + 20) = 3;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 24) = 0x200000;
  *(_DWORD *)(v4 + 32) = 0;
  *(_BYTE *)(v4 + 36) = 0;
  *(_DWORD *)(v4 + 40) = 1065353216;
  *(_BYTE *)(v4 + 50) = 0;
  *(_WORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 44) = 0;
  *(_QWORD *)(v4 + 52) = v7;
  Material::getColor((Material *)(v4 + 60), SHIDWORD(v7));
  *(_DWORD *)(v4 + 76) = 1058642330;
  *(_BYTE *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 84) = 1065353216;
  *(_BYTE *)(v4 + 100) = 0;
  *(_DWORD *)(v4 + 96) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_DWORD *)(v4 + 92) = 0;
  *(_BYTE *)(v4 + 101) = 1;
  AABB::AABB((AABB *)(v4 + 104));
  *(_DWORD *)(v4 + 132) = 0;
  BlockState::BlockState(v4 + 136);
  BlockState::BlockState(v4 + 148);
  BlockState::BlockState(v4 + 160);
  BlockState::BlockState(v4 + 172);
  BlockState::BlockState(v4 + 184);
  BlockState::BlockState(v4 + 196);
  BlockState::BlockState(v4 + 208);
  BlockState::BlockState(v4 + 220);
  BlockState::BlockState(v4 + 232);
  BlockState::BlockState(v4 + 244);
  BlockState::BlockState(v4 + 256);
  BlockState::BlockState(v4 + 268);
  BlockState::BlockState(v4 + 280);
  BlockState::BlockState(v4 + 292);
  BlockState::BlockState(v4 + 304);
  BlockState::BlockState(v4 + 316);
  BlockState::BlockState(v4 + 328);
  BlockState::BlockState(v4 + 340);
  BlockState::BlockState(v4 + 352);
  BlockState::BlockState(v4 + 364);
  BlockState::BlockState(v4 + 376);
  BlockState::BlockState(v4 + 388);
  BlockState::BlockState(v4 + 400);
  BlockState::BlockState(v4 + 412);
  BlockState::BlockState(v4 + 424);
  BlockState::BlockState(v4 + 436);
  BlockState::BlockState(v4 + 448);
  BlockState::BlockState(v4 + 460);
  BlockState::BlockState(v4 + 472);
  BlockState::BlockState(v4 + 484);
  BlockState::BlockState(v4 + 496);
  BlockState::BlockState(v4 + 508);
  BlockState::BlockState(v4 + 520);
  BlockState::BlockState(v4 + 532);
  BlockState::BlockState(v4 + 544);
  BlockState::BlockState(v4 + 556);
  BlockState::BlockState(v4 + 568);
  BlockState::BlockState(v4 + 580);
  BlockState::BlockState(v4 + 592);
  BlockState::BlockState(v4 + 604);
  BlockState::BlockState(v4 + 616);
  BlockState::BlockState(v4 + 628);
  _R0 = Material::getTranslucency((Material *)HIDWORD(v7));
  __asm
    VMOV            S0, R0
    VSTR            S0, [R0]
  Block::mSolid[*(_BYTE *)(v4 + 4)] = 1;
  Block::mLightBlock[*(_BYTE *)(v4 + 4)] = Brightness::MAX;
  Block::mPushesOutItems[*(_BYTE *)(v4 + 4)] = 1;
  return v4;
}


signed int __fastcall Block::breaksFallingBlocks(Block *this, int a2)
{
  int v2; // r1@1
  signed int result; // r0@1

  v2 = Block::mSolid[*((_BYTE *)this + 4)];
  result = 0;
  if ( !v2 )
    result = 1;
  return result;
}


void __fastcall Block::randomlyModifyPosition(Block *this, const BlockPos *a2, int a3)
{
  Block::randomlyModifyPosition(this, a2, a3);
}


int __fastcall Block::setBlockProperty(int result, int a2, __int64 a3)
{
  *(_QWORD *)(result + 24) = a3;
  return result;
}


_BYTE *__fastcall Block::buildDocumentation(Block *this, DocumentationSystem *a2)
{
  char *v2; // r5@1
  void **v3; // r9@1
  _BYTE *v4; // r8@1
  unsigned int *v5; // r2@2
  signed int v6; // r1@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  const char *v23; // r6@51
  int v24; // r7@51
  size_t v25; // r2@51
  void **v26; // r6@53
  char *v27; // r9@53
  void *v28; // r0@53
  void *v29; // r0@54
  void *v30; // r0@55
  void *v31; // r0@56
  char *v32; // r0@59
  _BYTE *result; // r0@60
  int v34; // [sp+14h] [bp-4Ch]@10
  int v35; // [sp+1Ch] [bp-44h]@14
  int v36; // [sp+24h] [bp-3Ch]@1
  int v37; // [sp+2Ch] [bp-34h]@22
  const char *v38; // [sp+30h] [bp-30h]@51
  const char *v39; // [sp+34h] [bp-2Ch]@6

  v2 = DocumentationSystem::getPage((int)this, (const void **)&DocumentationSystem::NODE_BLOCKS);
  v2[4] = 1;
  sub_21E8190((void **)v2 + 5, "List of blocks and their IDs", (_BYTE *)0x1C);
  sub_21E8190((void **)v2 + 6, "ID", (_BYTE *)2);
  sub_21E8190((void **)v2 + 7, "Name", (_BYTE *)4);
  sub_21E8190((void **)v2 + 8, (char *)&unk_257BC67, 0);
  sub_21E8190((void **)v2 + 9, (char *)&unk_257BC67, 0);
  v3 = (void **)&v36;
  v4 = (_BYTE *)Block::mBlocks;
  do
  {
    if ( *(_DWORD *)v4 )
    {
      _R0 = *(_BYTE *)(*(_DWORD *)v4 + 4);
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.U32    S0, S0
        VMOV            R1, S0
      }
      Util::toString((Util *)&v39, _R1);
      sub_21E8AF4((int *)&v38, (int *)(*(_DWORD *)v4 + 12));
      v23 = v39;
      v24 = (int)v38;
      v25 = *((_DWORD *)v39 - 3);
      if ( v25 != *((_DWORD *)v38 - 3) || memcmp(v39, v38, v25) )
        sub_21E94B4((void **)&v37, v23);
        sub_21E94B4(v3, v38);
        sub_21E94B4((void **)&v35, (const char *)&unk_257BC67);
        sub_21E94B4((void **)&v34, (const char *)&unk_257BC67);
        v26 = v3;
        v27 = DocumentationSystem::Node::addNode((int)v2, &v37, (const void **)v3, &v35, &v34);
        v28 = (void *)(v34 - 12);
        if ( (int *)(v34 - 12) != &dword_28898C0 )
        {
          v9 = (unsigned int *)(v34 - 4);
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
            j_j_j_j__ZdlPv_9(v28);
        }
        v29 = (void *)(v35 - 12);
        if ( (int *)(v35 - 12) != &dword_28898C0 )
          v11 = (unsigned int *)(v35 - 4);
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        v30 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v36 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        v31 = (void *)(v37 - 12);
        if ( (int *)(v37 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v37 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        v27[6] = 0;
        v3 = v26;
        v24 = (int)v38;
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v5 = (unsigned int *)(v24 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9((void *)(v24 - 12));
      v32 = (char *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v39 - 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
    }
    v4 += 4;
    result = Block::mLightBlock;
  }
  while ( v4 != Block::mLightBlock );
  return result;
}


int __fastcall Block::getMappedFace(Block *this, int a2, int a3)
{
  return a2;
}


_BYTE *__fastcall Block::getLightEmission(_BYTE *result, _BYTE *a2)
{
  *result = Block::mLightEmission[*a2];
  return result;
}


int __fastcall Block::sanitizeFillBlock(int result, int a2, int a3, int a4, int a5)
{
  *(_BYTE *)result = *(_BYTE *)a5;
  *(_BYTE *)(result + 1) = *(_BYTE *)(a5 + 1);
  return result;
}


int __fastcall Block::getMapColor(int result, int a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)(a2 + 60);
  v3 = *(_DWORD *)(a2 + 64);
  v4 = *(_DWORD *)(a2 + 68);
  v5 = *(_DWORD *)(a2 + 72);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = v3;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = v5;
  return result;
}


_DWORD *__fastcall Block::DEPRECATEDcallOnGraphicsModeChanged(Block *this, bool a2, bool a3, bool a4)
{
  _DWORD *result; // r0@1
  _DWORD **v5; // r4@1
  int v6; // r7@1

  result = &Block::mStainedGlassPane;
  v6 = dword_280AF94;
  v5 = (_DWORD **)Block::mOwnedBlocks;
  if ( Block::mOwnedBlocks != dword_280AF94 )
  {
    do
    {
      result = *v5;
      if ( *v5 )
        result = (_DWORD *)(*(int (**)(void))(*result + 404))();
      ++v5;
    }
    while ( (_DWORD **)v6 != v5 );
  }
  return result;
}


int __fastcall Block::isAttachedTo(Block *this, BlockSource *a2, const BlockPos *a3, BlockPos *a4)
{
  return 0;
}


signed int __fastcall Block::getColor(Block *this, BlockSource *a2, const BlockPos *a3)
{
  return -1;
}


int __fastcall Block::getAABB(Block *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, bool a6, int a7)
{
  const BlockPos *v7; // r5@1
  AABB *v8; // r4@1
  int v9; // r0@1
  char v11; // [sp+4h] [bp-1Ch]@1

  v7 = a3;
  v8 = a4;
  v9 = (*(int (__cdecl **)(Block *))(*(_DWORD *)this + 416))(this);
  *(_DWORD *)v8 = *(_DWORD *)v9;
  *((_DWORD *)v8 + 1) = *(_DWORD *)(v9 + 4);
  *((_DWORD *)v8 + 2) = *(_DWORD *)(v9 + 8);
  *((_DWORD *)v8 + 3) = *(_DWORD *)(v9 + 12);
  *((_DWORD *)v8 + 4) = *(_DWORD *)(v9 + 16);
  *((_DWORD *)v8 + 5) = *(_DWORD *)(v9 + 20);
  *((_BYTE *)v8 + 24) = *(_BYTE *)(v9 + 24);
  Vec3::Vec3((int)&v11, (int)v7);
  return AABB::move(v8, (const Vec3 *)&v11);
}


int __fastcall Block::setFriction(int result, float a2)
{
  *(float *)(result + 76) = a2;
  return result;
}


int __fastcall Block::isFenceBlock(Block *this)
{
  return 0;
}


signed int __fastcall Block::addAABBs(int a1, int a2, int a3, AABB *a4, int a5)
{
  int v5; // r7@1
  AABB *v6; // r9@1
  int v7; // r5@1
  int v8; // r6@1
  AABB *v9; // r0@1
  char v11; // [sp+10h] [bp-38h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  AABB::AABB((AABB *)&v11);
  v9 = (AABB *)(*(int (__fastcall **)(int, int, int, char *))(*(_DWORD *)v5 + 32))(v5, v8, v7, &v11);
  return Block::addAABB((int)v9, v9, v6, a5);
}


signed int __fastcall Block::getColor(Block *this, int a2)
{
  return -1;
}


ItemInstance *__fastcall Block::getSilkTouchItemInstance(Block *this, int a2, int a3)
{
  ItemInstance *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1

  v3 = this;
  v4 = *(_BYTE *)(a2 + 4);
  v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 500))(a2, a3);
  return ItemInstance::ItemInstance(v3, v4, 1, v5);
}


int __fastcall Block::getExperienceDrop(Block *this, Random *a2)
{
  return 0;
}


_BOOL4 __fastcall Block::hasBlockEntity(Block *this)
{
  return *((_DWORD *)this + 8) != 0;
}


int __fastcall Block::isCraftingBlock(Block *this)
{
  return 0;
}


int __fastcall Block::getComparatorSignal(Block *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4, int a5)
{
  return 0;
}


int __fastcall Block::isContainerBlock(Block *this)
{
  return 0;
}


int __fastcall Block::ignoreEntitiesOnPistonMove(Block *this, unsigned __int8 a2)
{
  return 0;
}


int __fastcall Block::getIgnoresDestroyPermissions(Block *this, Entity *a2, const BlockPos *a3)
{
  return 0;
}


int __fastcall Block::isObstructingChests(Block *this, BlockSource *a2, const BlockPos *a3)
{
  return Block::mSolid[*((_BYTE *)this + 4)];
}


int __fastcall Block::teardownBlocks(Block *this)
{
  __int64 v1; // r4@1
  int v2; // r7@2
  unsigned __int64 *v3; // r6@6
  unsigned int *v4; // r2@8
  signed int v5; // r1@10
  unsigned __int64 *v6; // r5@16
  int v7; // r1@16
  void *v8; // r0@16
  int result; // r0@18

  _aeabi_memclr8(Block::mBlocks, 1024);
  v1 = *(_QWORD *)&Block::mOwnedBlocks;
  if ( dword_280AF94 != Block::mOwnedBlocks )
  {
    v2 = Block::mOwnedBlocks;
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( HIDWORD(v1) != v2 );
  }
  v3 = (unsigned __int64 *)dword_280AFA8;
  dword_280AF94 = v1;
  if ( dword_280AFA8 )
      v6 = v3;
      v7 = *v3 >> 32;
      v3 = (unsigned __int64 *)*v3;
      v8 = (void *)(v7 - 12);
      if ( (int *)(v7 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v7 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      }
      operator delete(v6);
    while ( v3 );
  _aeabi_memclr4(Block::mBlockLookupMap, 4 * *(_DWORD *)algn_280AFA4);
  result = 0;
  dword_280AFA8 = 0;
  *(_DWORD *)algn_280AFAC = 0;
  return result;
}


int __fastcall Block::isSeasonTinted(Block *this, BlockSource *a2, const BlockPos *a3)
{
  return 0;
}


const void **__fastcall Block::buildDescriptionId(Block *this, int a2)
{
  const void **v2; // r5@1

  v2 = (const void **)this;
  sub_21E8AF4((int *)this, (int *)(a2 + 8));
  return sub_21E7408(v2, ".name", 5u);
}


int __fastcall Block::shouldConnectToRedstone(Block *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 0;
}


int __fastcall Block::isSolid(Block *this)
{
  return Block::mSolid[*((_BYTE *)this + 4)];
}


int __fastcall Block::isWaterBlocking(Block *this)
{
  Block *v1; // r4@1
  int result; // r0@2
  Material *v8; // r4@3

  v1 = this;
  _R0 = (*(int (**)(void))(*(_DWORD *)this + 140))();
  __asm
  {
    VMOV            S0, R0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v8 = (Material *)*((_DWORD *)v1 + 14);
    if ( Material::getBlocksMotion(v8) )
      result = 1;
    else
      result = Material::isSolid(v8);
  else
    result = 0;
  return result;
}


int __fastcall Block::pushesUpFallingBlocks(Block *this)
{
  return 0;
}


int __fastcall Block::clip(Block *this, BlockSource *a2, const BlockPos *a3, const Vec3 *a4, __int64 a5, int a6)
{
  Block *v6; // r8@1
  const Vec3 *v7; // r4@1
  const BlockPos *v8; // r5@1
  BlockSource *v9; // r6@1
  const AABB *v11; // [sp+Ch] [bp-44h]@0
  char v12; // [sp+18h] [bp-38h]@1

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  AABB::AABB((AABB *)&v12);
  (*(void (__fastcall **)(BlockSource *, const BlockPos *, const Vec3 *, char *))(*(_DWORD *)v9 + 32))(v9, v8, v7, &v12);
  return Block::clip(v6, (BlockSource *)HIDWORD(a5), 0, v7, a5, 0, v11, (const Vec3 *)&v12);
}


int __fastcall Block::setLightEmission(int result, float _R1)
{
  __asm { VMOV            S2, R1 }
  _R2 = (unsigned __int8)Brightness::MAX;
  __asm
  {
    VMOV            S0, R2
    VCVT.F32.U32    S0, S0
    VMUL.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R3, S0
  }
  Block::mLightEmission[*(_BYTE *)(result + 4)] = _R3;
  return result;
}


int __fastcall Block::getShadeBrightness(Block *this)
{
  int result; // r0@2

  if ( Block::mSolid[*((_BYTE *)this + 4)] )
  {
    __asm
    {
      VLDRNE          S0, =0.2
      VMOVNE          R0, S0
    }
  }
  else
      VMOV.F32        S0, #1.0
      VLDR            S2, =0.2
    if ( *((_BYTE *)this + 24) & 0x20 )
      __asm { VMOVNE.F32      S0, S2 }
    __asm { VMOV            R0, S0 }
  return result;
}


  if ( a2 && Block::hasBlockEntity(a2) == 1 )
{
    if ( v3 )
    {
      v4 = Block::getBlockEntityType(v2);
      v5 = Block::getBlockEntityType(v3);
      result = 0;
      if ( v4 != v5 )
        result = 1;
    }
    else
      result = 1;
  }
  else
  {
    result = 0;
  return result;
}


int __fastcall Block::setCategory(int result, int a2)
{
  *(_DWORD *)(result + 96) = a2;
  return result;
}


int __fastcall Block::mayPlace(Block *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  BlockSource *v4; // r5@1
  signed int v5; // r1@1
  Block *v6; // r4@1
  int result; // r0@1
  Material *v8; // r0@3
  int v9; // r1@4
  int v10; // r2@4
  int v11; // r3@4
  int (__fastcall *v12)(Block *, int); // r6@4
  int v13; // r0@4
  int v14; // [sp+4h] [bp-1Ch]@4
  int v15; // [sp+8h] [bp-18h]@4
  int v16; // [sp+Ch] [bp-14h]@4

  v3 = a3;
  v4 = a2;
  v5 = *((_DWORD *)a3 + 1);
  v6 = this;
  result = 0;
  if ( v5 >= 0 && v5 < *((_WORD *)v4 + 12) )
  {
    v8 = (Material *)BlockSource::getMaterial(v4, a3);
    if ( Material::isReplaceable(v8) == 1 )
    {
      v9 = *(_DWORD *)v3;
      v10 = *((_DWORD *)v3 + 1);
      v11 = *((_DWORD *)v3 + 2);
      v12 = *(int (__fastcall **)(Block *, int))(*(_DWORD *)v6 + 228);
      v14 = v9;
      v15 = v10 - 1;
      v16 = v11;
      v13 = BlockSource::getBlock(v4, (const BlockPos *)&v14);
      result = v12(v6, v13);
    }
    else
      result = 0;
  }
  return result;
}


int __fastcall Block::getVisualShape(Block *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  Block *v5; // r5@1
  AABB *v6; // r4@1
  int (__fastcall *v7)(Block *, unsigned int, AABB *, _DWORD); // r6@1
  unsigned int v8; // r0@1

  v5 = this;
  v6 = a4;
  v7 = *(int (__fastcall **)(Block *, unsigned int, AABB *, _DWORD))(*(_DWORD *)this + 420);
  v8 = BlockSource::getData(a2, a3);
  return v7(v5, v8, v6, 0);
}


int __fastcall Block::setTicking(Block *this, bool a2)
{
  int result; // r0@1

  result = *((_BYTE *)this + 4);
  Block::mShouldTick[result] = a2;
  return result;
}


int __fastcall Block::calcVariant(Block *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return a4;
}


int __fastcall Block::setMapColor(int result, const Color *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 60) = v2;
  *(_DWORD *)(result + 64) = v3;
  *(_DWORD *)(result + 68) = v4;
  *(_DWORD *)(result + 72) = v5;
  return result;
}


int __fastcall Block::getPlacementFacingAll(Block *this, Entity *a2, const BlockPos *a3, float a4)
{
  int v13; // r1@1
  int v15; // r0@4
  int result; // r0@8
  float v18; // r1@11
  int v19; // [sp+0h] [bp-20h]@11

  _R4 = this;
  _R6 = a2;
  _R5 = a3;
  _R0 = (*(int (**)(void))(*(_DWORD *)this + 52))();
  __asm
  {
    VLDR            S0, [R0]
    VCVTR.S32.F32   S0, S0
    VMOV            R2, S0
  }
  v13 = _R2 - *(_DWORD *)_R6;
  if ( _R2 - *(_DWORD *)_R6 < 0 )
    v13 = -v13;
  if ( v13 > 1 )
    goto LABEL_11;
    VLDR            S0, [R0,#8]
    VMOV            R1, S0
  v15 = _R1 - *((_DWORD *)_R6 + 2);
  if ( v15 < 0 )
    v15 = -v15;
  if ( v15 > 1 )
    VLDR            S0, [R6,#4]
    VCVT.F32.S32    S0, S0
    VLDR            S2, [R4,#0x10C]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VLDR            S2, [R4,#0x118]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      LOBYTE(result) = 0;
      return (char)result;
LABEL_11:
    __asm { VMOV            S16, R5 }
    Entity::getRotation((Entity *)&v19, (int)_R4);
      VLDR            S0, [SP,#0x20+var_1C]
      VMOV.F32        S4, #0.5
      VLDR            S2, =0.011111
      VSUB.F32        S0, S0, S16
      VMUL.F32        S0, S0, S2
      VADD.F32        S0, S0, S4
      VMOV            R0, S0
    return (char)(0x4030502u >> (8 * mce::Math::floor(_R0, v18) & 0x18));
  LOBYTE(result) = 1;
  return (char)result;
}


  if ( Block::getCreativeCategory(a2) != 6 )
{
    v4 = *v3;
    Util::toLower(&v15, *(_DWORD *)(*(_DWORD *)(v2 + 12) - 12), *(_DWORD *)(v2 + 12));
    v5 = v15;
    v16 = (char *)v15;
    v15 = &unk_28898CC;
    v17 = v2;
    v6 = *(_QWORD *)(v4 + 4);
    if ( (_DWORD)v6 == HIDWORD(v6) )
    {
      std::vector<std::pair<std::string,Block const*>,std::allocator<std::pair<std::string,Block const*>>>::_M_emplace_back_aux<std::pair<std::string,Block const*>>(
        (unsigned __int64 *)v4,
        (int)&v16);
      v7 = v16;
    }
    else
      *(_DWORD *)v6 = v5;
      v7 = (char *)&unk_28898CC;
      v16 = (char *)&unk_28898CC;
      *(_DWORD *)(v6 + 4) = v2;
      *(_DWORD *)(v4 + 4) = v6 + 8;
    v8 = v7 - 12;
    if ( (int *)(v7 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v7 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    v9 = (char *)v15 - 12;
    if ( (int *)((char *)v15 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)((char *)v15 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
  }
  return 1;
}


signed int __fastcall Block::getResourceCount(Block *this, Random *a2, int a3, int a4)
{
  return 1;
}


  if ( Block::isType(this, (const Block *)Block::mWoodenDoor) == 1 )
{
    v2 = Item::mDoor_wood;
  }
  else if ( Block::isType(v1, (const Block *)Block::mIronDoor) == 1 )
  {
    v2 = Item::mDoor_iron;
  else if ( Block::isType(v1, (const Block *)Block::mWoodenDoorAcacia) == 1 )
    v2 = Item::mDoor_acacia;
  else if ( Block::isType(v1, (const Block *)Block::mWoodenDoorBirch) == 1 )
    v2 = Item::mDoor_birch;
  else if ( Block::isType(v1, (const Block *)Block::mWoodenDoorDarkOak) == 1 )
    v2 = &Item::mDoor_darkoak;
  else if ( Block::isType(v1, (const Block *)Block::mWoodenDoorJungle) == 1 )
    v2 = Item::mDoor_jungle;
  else
    if ( Block::isType(v1, (const Block *)Block::mWoodenDoorSpruce) != 1 )
      return 0;
    v2 = Item::mDoor_spruce;
  return *(_WORD *)(**v2 + 18);
}


int __fastcall Block::popResource(Block *this, BlockSource *a2, const BlockPos *a3, const ItemInstance *a4)
{
  BlockSource *v4; // r5@1
  const ItemInstance *v5; // r4@1
  Level *v7; // r7@1
  int result; // r0@2
  Level *v9; // r0@3
  unsigned __int64 *v10; // r0@3
  char *v11; // r0@4
  char *v17; // r0@4
  char *v19; // r0@4
  Level *v21; // r0@4
  Spawner *v22; // r0@4
  float v23; // [sp+Ch] [bp-44h]@4

  v4 = a2;
  v5 = a4;
  _R6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  if ( Level::isClientSide(v7) )
  {
    result = 0;
  }
  else
    v9 = (Level *)BlockSource::getLevel(v4);
    v10 = (unsigned __int64 *)Level::getGameRules(v9);
    if ( GameRules::getBool(v10, (int **)&GameRules::DO_TILE_DROPS) == 1 )
    {
      v11 = Level::getRandom(v7);
      _R0 = Random::_genRandInt32((Random *)v11);
      __asm
      {
        VMOV            S0, R0
        VCVT.F64.U32    D8, S0
      }
      v17 = Level::getRandom(v7);
      _R0 = Random::_genRandInt32((Random *)v17);
        VCVT.F64.U32    D9, S0
      v19 = Level::getRandom(v7);
      __asm { VLDR            D10, =2.32830644e-10 }
      _R0 = Random::_genRandInt32((Random *)v19);
        VMUL.F64        D2, D9, D10
        VCVT.F64.U32    D0, S0
        VMUL.F64        D1, D8, D10
        VMUL.F64        D0, D0, D10
        VCVT.F32.F64    S2, D1
        VCVT.F32.F64    S4, D2
        VLDR            S18, =0.7
        VCVT.F32.F64    S16, D0
        VMUL.F32        S20, S2, S18
        VMUL.F32        S22, S4, S18
      v21 = (Level *)BlockSource::getLevel(v4);
      v22 = (Spawner *)Level::getSpawner(v21);
        VMUL.F32        S6, S16, S18
        VLDR            S8, =0.15
        VLDR            S0, [R6]
        VLDR            S2, [R6,#4]
        VADD.F32        S10, S20, S8
        VLDR            S4, [R6,#8]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VADD.F32        S12, S22, S8
        VCVT.F32.S32    S4, S4
        VADD.F32        S6, S6, S8
        VADD.F32        S0, S10, S0
        VADD.F32        S2, S12, S2
        VADD.F32        S4, S6, S4
        VSTR            S0, [SP,#0x50+var_44]
        VSTR            S2, [SP,#0x50+var_40]
        VSTR            S4, [SP,#0x50+var_3C]
      result = Spawner::spawnItem(v22, v4, v5, 0, (const Vec3 *)&v23, 10);
    }
    else
      result = 0;
  return result;
}


void __fastcall Block::spawnResources(Block *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  Block *v6; // r5@1
  int v7; // r8@1
  Level *v8; // r7@1
  int (__fastcall *v9)(Block *, char *, int, int); // r4@2
  char *v10; // r0@2
  int v11; // r4@2
  int v16; // r11@3
  char *v17; // r0@4
  int (__fastcall *v19)(Block *, char *, int, int); // r6@6
  char *v20; // r0@6
  int v21; // r9@6
  int v22; // r0@7
  ItemInstance *v23; // r0@7
  int (__fastcall *v24)(Block *, char *); // r6@15
  char *v25; // r0@15
  signed int v26; // r0@15
  __int64 v27; // [sp+4h] [bp-94h]@1
  char v28; // [sp+Ch] [bp-8Ch]@15
  char v29; // [sp+18h] [bp-80h]@7
  int v30; // [sp+20h] [bp-78h]@11
  void *v31; // [sp+3Ch] [bp-5Ch]@9
  void *ptr; // [sp+4Ch] [bp-4Ch]@7

  v6 = this;
  v7 = a4;
  v27 = *(_QWORD *)&a2;
  v8 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v8) )
  {
    v9 = *(int (__fastcall **)(Block *, char *, int, int))(*(_DWORD *)v6 + 268);
    v10 = Level::getRandom(v8);
    v11 = v9(v6, v10, v7, a6);
    if ( v11 >= 1 )
    {
      __asm
      {
        VLDR            S16, [SP,#0x98+arg_0]
        VLDR            D9, =2.32830644e-10
      }
      v16 = 0;
      do
        v17 = Level::getRandom(v8);
        _R0 = Random::_genRandInt32((Random *)v17);
        __asm
        {
          VMOV            S0, R0
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D9
          VCVT.F32.F64    S0, D0
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          v19 = *(int (__fastcall **)(Block *, char *, int, int))(*(_DWORD *)v6 + 264);
          v20 = Level::getRandom(v8);
          v21 = v19(v6, v20, v7, a6);
          if ( v21 >= 1 )
          {
            v22 = (*(int (__fastcall **)(Block *, int))(*(_DWORD *)v6 + 500))(v6, v7);
            v23 = ItemInstance::ItemInstance((ItemInstance *)&v29, v21, 1, v22);
            Block::popResource(v23, (BlockSource *)v27, (const BlockPos *)HIDWORD(v27), (const ItemInstance *)&v29);
            if ( ptr )
              operator delete(ptr);
            if ( v31 )
              operator delete(v31);
            if ( v30 )
              (*(void (**)(void))(*(_DWORD *)v30 + 4))();
            v30 = 0;
          }
        ++v16;
      while ( v16 < v11 );
    }
    Vec3::Vec3((int)&v28, SHIDWORD(v27));
    v24 = *(int (__fastcall **)(Block *, char *))(*(_DWORD *)v6 + 328);
    v25 = Level::getRandom(v8);
    v26 = v24(v6, v25);
    ExperienceOrb::spawnOrbs((Player *)v27, (const Vec3 *)&v28, v26, 1, 0);
  }
}


_BYTE *__fastcall Block::transformToValidBlockId(_BYTE *result, _BYTE *a2, int a3)
{
  int v3; // r1@1
  int v4; // r1@3
  _DWORD *v5; // r2@3

  v3 = *a2;
  if ( v3 && !Block::mBlocks[v3] )
  {
    v4 = (*(_QWORD *)a3 >> 32) + *(_QWORD *)a3 + *(_DWORD *)(a3 + 8);
    v5 = &Block::mInfoUpdateGame2;
    if ( v4 & 1 )
      v5 = &Block::mInfoUpdateGame1;
    LOBYTE(v3) = *(_BYTE *)(*v5 + 4);
  }
  *result = v3;
  return result;
}


void __fastcall Block::getDebugText(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  const void **v4; // r6@1
  const void **v5; // r0@1
  void *v6; // r1@1
  __int64 v7; // kr00_8@1
  char *v8; // r1@2
  char *v9; // r0@4
  char *v10; // r0@5
  const void **v17; // r0@6
  void *v18; // r1@6
  __int64 v19; // kr08_8@6
  char *v20; // r1@7
  char *v21; // r0@9
  void *v22; // r0@10
  unsigned int *v23; // r2@12
  signed int v24; // r1@14
  unsigned int *v25; // r2@16
  signed int v26; // r1@18
  unsigned int *v27; // r2@20
  signed int v28; // r1@22
  unsigned int *v29; // r2@24
  signed int v30; // r1@26
  int v31; // [sp+4h] [bp-24h]@6
  char *v32; // [sp+8h] [bp-20h]@6
  char *v33; // [sp+Ch] [bp-1Ch]@1
  char *v34; // [sp+10h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v33 = (char *)&unk_28898CC;
  v4 = (const void **)(a1 + 8);
  sub_21E6FCC((const void **)&v33, *(_DWORD *)(*(_DWORD *)(a1 + 8) - 12) + 13);
  sub_21E7408((const void **)&v33, "Debug Block[ ", 0xDu);
  sub_21E72F0((const void **)&v33, v4);
  v5 = sub_21E7408((const void **)&v33, " ]", 2u);
  v6 = (void *)*v5;
  v34 = (char *)*v5;
  *v5 = &unk_28898CC;
  v7 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v3, &v34);
    v8 = v34;
  }
  else
    *(_DWORD *)v7 = v6;
    v8 = (char *)&unk_28898CC;
    v34 = (char *)&unk_28898CC;
    *(_DWORD *)(v3 + 4) = v7 + 4;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = v33 - 12;
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v33 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  _R0 = *(_BYTE *)(v2 + 4);
  __asm
    VMOV            S0, R0
    VCVT.F32.U32    S0, S0
    VMOV            R1, S0
  Util::toString((Util *)&v31, _R1);
  v17 = sub_21E82D8((const void **)&v31, 0, (unsigned int)"Block ID: ", (_BYTE *)0xA);
  v18 = (void *)*v17;
  v32 = (char *)*v17;
  *v17 = &unk_28898CC;
  v19 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v19 == HIDWORD(v19) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v3, &v32);
    v20 = v32;
    *(_DWORD *)v19 = v18;
    v20 = (char *)&unk_28898CC;
    v32 = (char *)&unk_28898CC;
    *(_DWORD *)(v3 + 4) = v19 + 4;
  v21 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v20 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v31 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
}


Block *__fastcall Block::~Block(Block *this)
{
  Block *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &loc_2704AC0;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}


signed int __fastcall Block::addAABB(int a1, AABB *a2, AABB *a3, int a4)
{
  AABB *v4; // r5@1
  int v5; // r10@1
  AABB *v6; // r6@1
  int v7; // r12@3
  int v8; // r0@4
  int v9; // r5@4
  int v10; // r2@4
  int v11; // r3@4
  int v12; // r12@4
  int v13; // r2@4
  int v14; // r3@4
  int v15; // r7@4
  signed int result; // r0@4
  int v17; // r0@6
  int v18; // r2@6
  unsigned int v19; // r6@6
  unsigned int v20; // r2@8
  unsigned int v21; // r9@8
  char *v22; // r8@14
  int v23; // r3@16
  int v24; // r5@16
  int v25; // r6@16
  int v26; // r7@16
  int v27; // r2@16
  int v28; // r4@16
  int v29; // r6@16
  int v30; // r7@16
  char *v31; // r2@16
  char *v32; // r3@17
  int v33; // r4@17
  int v34; // r7@17
  int v35; // r5@17
  int v36; // r6@17
  int v37; // r4@17
  int v38; // r5@17
  int v39; // r6@17
  int v40; // r5@19

  v4 = a2;
  v5 = a4;
  v6 = a3;
  if ( AABB::isEmpty(a2) || AABB::intersects(v6, v4) != 1 )
  {
    result = 0;
  }
  else
    v7 = *(_QWORD *)(v5 + 4);
    if ( v7 == *(_QWORD *)(v5 + 4) >> 32 )
    {
      v17 = *(_DWORD *)v5;
      v18 = (v7 - *(_DWORD *)v5) >> 2;
      v19 = -1227133513 * v18;
      if ( v7 == *(_DWORD *)v5 )
        v19 = 1;
      v20 = v19 + -1227133513 * v18;
      v21 = v20;
      if ( v20 > 0x9249249 )
        v21 = 153391689;
      if ( v20 < v19 )
      if ( v21 )
      {
        if ( v21 >= 0x924924A )
          sub_21E57F4();
        v22 = (char *)operator new(28 * v21);
        v7 = *(_QWORD *)v5 >> 32;
        v17 = *(_QWORD *)v5;
      }
      else
        v22 = 0;
      v23 = *(_DWORD *)v4;
      v25 = *((_DWORD *)v4 + 1);
      v26 = *((_DWORD *)v4 + 2);
      v24 = (int)v4 + 12;
      v27 = (int)&v22[v7 - v17];
      *(_DWORD *)v27 = v23;
      *(_DWORD *)(v27 + 4) = v25;
      *(_DWORD *)(v27 + 8) = v26;
      v27 += 12;
      v28 = *(_DWORD *)(v24 + 4);
      v29 = *(_DWORD *)(v24 + 8);
      v30 = *(_DWORD *)(v24 + 12);
      *(_DWORD *)v27 = *(_DWORD *)v24;
      *(_DWORD *)(v27 + 4) = v28;
      *(_DWORD *)(v27 + 8) = v29;
      *(_DWORD *)(v27 + 12) = v30;
      v31 = v22;
      if ( v7 != v17 )
        do
        {
          v32 = v31;
          v33 = *(_DWORD *)v17;
          v35 = *(_DWORD *)(v17 + 4);
          v36 = *(_DWORD *)(v17 + 8);
          v34 = v17 + 12;
          v17 += 28;
          v31 += 28;
          *(_DWORD *)v32 = v33;
          *((_DWORD *)v32 + 1) = v35;
          *((_DWORD *)v32 + 2) = v36;
          v32 += 12;
          v37 = *(_DWORD *)(v34 + 4);
          v38 = *(_DWORD *)(v34 + 8);
          v39 = *(_DWORD *)(v34 + 12);
          *(_DWORD *)v32 = *(_DWORD *)v34;
          *((_DWORD *)v32 + 1) = v37;
          *((_DWORD *)v32 + 2) = v38;
          *((_DWORD *)v32 + 3) = v39;
        }
        while ( v7 != v17 );
        v17 = *(_DWORD *)v5;
      v40 = (int)(v31 + 28);
      if ( v17 )
        operator delete((void *)v17);
      *(_DWORD *)v5 = v22;
      *(_DWORD *)(v5 + 4) = v40;
      *(_DWORD *)(v5 + 8) = &v22[28 * v21];
      result = 1;
    }
    else
      v8 = *(_DWORD *)v4;
      v10 = *((_DWORD *)v4 + 1);
      v11 = *((_DWORD *)v4 + 2);
      v9 = (int)v4 + 12;
      *(_DWORD *)v7 = v8;
      *(_DWORD *)(v7 + 4) = v10;
      *(_DWORD *)(v7 + 8) = v11;
      v12 = v7 + 12;
      v13 = *(_DWORD *)(v9 + 4);
      v14 = *(_DWORD *)(v9 + 8);
      v15 = *(_DWORD *)(v9 + 12);
      *(_DWORD *)v12 = *(_DWORD *)v9;
      *(_DWORD *)(v12 + 4) = v13;
      *(_DWORD *)(v12 + 8) = v14;
      *(_DWORD *)(v12 + 12) = v15;
      *(_DWORD *)(v5 + 4) += 28;
  return result;
}


int __fastcall Block::initBlocks(Block *this)
{
  __int64 v1; // r4@1
  int v2; // r7@2
  int v3; // r0@6
  int v4; // r0@6
  int v5; // r0@6
  int v6; // r0@6
  int v7; // r0@6
  int v8; // r0@6
  int v9; // r0@6
  int (*v10)(void); // r2@6
  int v11; // r0@6
  int v12; // r0@6
  int (*v13)(void); // r2@6
  int v14; // r0@6
  int v15; // r0@6
  int v16; // r0@6
  int v17; // r0@6
  int v18; // r0@6
  int v19; // r0@6
  int v20; // r0@6
  int v21; // r0@6
  int v22; // r0@6
  int v23; // r0@6
  int v24; // r0@6
  int v25; // r0@6
  int v26; // r0@6
  int v27; // r0@6
  int v28; // r0@6
  int v29; // r0@6
  int v30; // r0@6
  int v31; // r0@6
  int (*v32)(void); // r2@6
  int v33; // r0@6
  int v34; // r0@6
  char *v35; // r7@6
  int *v36; // r0@6
  int v37; // r0@6
  int (*v38)(void); // r2@6
  int v39; // r0@6
  int v40; // r0@6
  int v41; // r0@6
  int v42; // r0@6
  int (*v43)(void); // r2@6
  int v44; // r0@6
  int v45; // r0@6
  char *v46; // r7@6
  int *v47; // r0@6
  int v48; // r0@6
  int v49; // r0@6
  int (*v50)(void); // r2@6
  int v51; // r0@6
  int (*v52)(void); // r2@6
  int v53; // r0@6
  int v54; // r0@6
  int (*v55)(void); // r2@6
  int v56; // r0@6
  int v57; // r0@6
  int v58; // r0@6
  int v59; // r0@6
  int v60; // r0@6
  int v61; // r0@6
  int v62; // r0@6
  int v63; // r0@6
  int v64; // r0@6
  int v65; // r0@6
  int v66; // r0@6
  int v67; // r0@6
  int v68; // r0@6
  int v69; // r0@6
  int v70; // r0@6
  int (*v71)(void); // r2@6
  int v72; // r0@6
  int v73; // r0@6
  int v74; // r0@6
  int v75; // r0@6
  int v76; // r0@6
  int v77; // r0@6
  int v78; // r0@6
  int v79; // r0@6
  int v80; // r0@6
  int v81; // r0@6
  int v82; // r0@6
  int v83; // r0@6
  int v84; // r0@6
  int (*v85)(void); // r2@6
  int v86; // r0@6
  int v87; // r0@6
  int v88; // r0@6
  int v89; // r0@6
  int v90; // r0@6
  int v91; // r0@6
  int v92; // r0@6
  int v93; // r0@6
  int v94; // r0@6
  int v95; // r0@6
  int v96; // r0@6
  int v97; // r0@6
  int v98; // r0@6
  int v99; // r0@6
  int v100; // r0@6
  int v101; // r0@6
  int v102; // r0@6
  int v103; // r0@6
  int v104; // r0@6
  int v105; // r0@6
  int v106; // r0@6
  int v107; // r0@6
  int (*v108)(void); // r2@6
  int v109; // r0@6
  int v110; // r0@6
  int v111; // r0@6
  int v112; // r0@6
  int v113; // r0@6
  int v114; // r0@6
  int v115; // r0@6
  int v116; // r0@6
  int v117; // r0@6
  int v118; // r0@6
  int v119; // r0@6
  int v120; // r0@6
  int v121; // r0@6
  int v122; // r0@6
  int v123; // r0@6
  int v124; // r0@6
  int v125; // r0@6
  int v126; // r0@6
  int v127; // r0@6
  int v128; // r0@6
  int v129; // r0@6
  int (*v130)(void); // r2@6
  int v131; // r0@6
  int v132; // r0@6
  int v133; // r0@6
  int (*v134)(void); // r2@6
  int v135; // r0@6
  int v136; // r0@6
  int v137; // r0@6
  int v138; // r0@6
  int v139; // r0@6
  int v140; // r0@6
  int v141; // r0@6
  int v142; // r0@6
  int v143; // r0@6
  int v144; // r0@6
  int v145; // r0@6
  int v146; // r0@6
  int v147; // r0@6
  int v148; // r0@6
  int (*v149)(void); // r2@6
  int v150; // r0@6
  int v151; // r0@6
  int v152; // r0@6
  int v153; // r0@6
  int v154; // r0@6
  int v155; // r0@6
  int v156; // r0@6
  int v157; // r0@6
  int v158; // r0@6
  int v159; // r0@6
  int v160; // r0@6
  int (*v161)(void); // r2@6
  int v162; // r0@6
  int v163; // r0@6
  int v164; // r0@6
  int v165; // r0@6
  int v166; // r0@6
  int v167; // r0@6
  int v168; // r0@6
  int (*v169)(void); // r2@6
  int v170; // r0@6
  int v171; // r0@6
  int v172; // r0@6
  int v173; // r0@6
  int v174; // r0@6
  int v175; // r0@6
  int v176; // r0@6
  int v177; // r0@6
  int v178; // r0@6
  int v179; // r0@6
  int (*v180)(void); // r2@6
  int v181; // r0@6
  int v182; // r0@6
  int v183; // r0@6
  int v184; // r0@6
  int v185; // r0@6
  int v186; // r0@6
  int v187; // r0@6
  int v188; // r0@6
  int v189; // r0@6
  int v190; // r0@6
  int v191; // r0@6
  int v192; // r0@6
  int v193; // r0@6
  int v194; // r0@6
  int v195; // r0@6
  int v196; // r0@6
  int v197; // r0@6
  int v198; // r0@6
  int (*v199)(void); // r2@6
  int v200; // r0@6
  int v201; // r0@6
  int v202; // r0@6
  int v203; // r0@6
  int v204; // r0@6
  int v205; // r0@6
  int v206; // r0@6
  int v207; // r0@6
  int v208; // r0@6
  int v209; // r0@6
  int v210; // r0@6
  int v211; // r0@6
  int v212; // r0@6
  int v213; // r0@6
  int v214; // r0@6
  int v215; // r0@6
  int v216; // r0@6
  int v217; // r0@6
  int v218; // r0@6
  int v219; // r0@6
  int v220; // r0@6
  int v221; // r0@6
  int (*v222)(void); // r2@6
  int v223; // r0@6
  int v224; // r0@6
  int v225; // r0@6
  int v226; // r0@6
  int v227; // r0@6
  int v228; // r0@6
  int v229; // r0@6
  int v230; // r0@6
  int v231; // r0@6
  int v232; // r0@6
  int v233; // r0@6
  int v234; // r0@6
  int v235; // r0@6
  int v236; // r0@6
  int v237; // r0@6
  int v238; // r0@6
  int v239; // r0@6
  int v240; // r0@6
  int v241; // r0@6
  int v242; // r0@6
  int v243; // r0@6
  int v244; // r0@6
  int v245; // r0@6
  int v246; // r0@6
  int v247; // r0@6
  int v248; // r0@6
  int v249; // r0@6
  int v250; // r0@6
  int v251; // r0@6
  int (*v252)(void); // r2@6
  int v253; // r0@6
  int v254; // r0@6
  int v255; // r0@6
  int v256; // r0@6
  int v257; // r0@6
  int v258; // r0@6
  int v259; // r0@6
  int v260; // r0@6
  int v261; // r0@6
  int v262; // r0@6
  int v263; // r0@6
  int v264; // r0@6
  int v265; // r0@6
  int v266; // r0@6
  int v267; // r5@6
  int (__fastcall *v268)(int, char *); // r4@6
  int v269; // r0@6
  int v270; // r0@6
  int v271; // r0@6
  int (*v272)(void); // r2@6
  int v273; // r0@6
  int v274; // r0@6
  int v275; // r0@6
  int (*v276)(void); // r2@6
  int v277; // r0@6
  int v278; // r0@6
  int (*v279)(void); // r2@6
  int v280; // r0@6
  int v281; // r0@6
  int v282; // r0@6
  int v283; // r0@6
  int v284; // r0@6
  int v285; // r0@6
  int v286; // r0@6
  int v287; // r0@6
  int v288; // r0@6
  int (*v289)(void); // r2@6
  int v290; // r0@6
  int v291; // r0@6
  int v292; // r0@6
  int v293; // r0@6
  int v294; // r0@6
  int v295; // r0@6
  int v296; // r0@6
  int v297; // r0@6
  int v298; // r0@6
  int v299; // r0@6
  int v300; // r0@6
  int v301; // r0@6
  int v302; // r0@6
  int v303; // r0@6
  int v304; // r0@6
  int v305; // r0@6
  int v306; // r0@6
  int v307; // r0@6
  int v308; // r0@6
  int v309; // r0@6
  int v310; // r0@6
  int v311; // r0@6
  int v312; // r0@6
  int v313; // r0@6
  int v314; // r0@6
  int v315; // r0@6
  int v316; // r0@6
  int v317; // r0@6
  int v318; // r0@6
  int v319; // r0@6
  int v320; // r0@6
  int (*v321)(void); // r2@6
  int v322; // r0@6
  int v323; // r0@6
  int v324; // r0@6
  int (*v325)(void); // r2@6
  int v326; // r0@6
  int v327; // r0@6
  int v328; // r0@6
  int (*v329)(void); // r2@6
  int v330; // r0@6
  int v331; // r0@6
  int v332; // r0@6
  int v333; // r0@6
  int v334; // r0@6
  int v335; // r0@6
  int v336; // r0@6
  int (*v337)(void); // r2@6
  int v338; // r0@6
  int v339; // r0@6
  int v340; // r0@6
  int v341; // r0@6
  int v342; // r0@6
  int v343; // r0@6
  int v344; // r0@6
  int v345; // r0@6
  int v346; // r4@6
  int (__fastcall *v347)(int, char *); // r10@6
  int v348; // r0@6
  int v349; // r0@6
  int v350; // r0@6
  int v351; // r0@6
  int v352; // r0@6
  int v353; // r0@6
  int v354; // r0@6
  int v355; // r0@6
  int v356; // r0@6
  int (*v357)(void); // r2@6
  int v358; // r0@6
  int v359; // r0@6
  int v360; // r0@6
  int v361; // r0@6
  int v362; // r0@6
  int (*v363)(void); // r2@6
  int v364; // r0@6
  int v365; // r0@6
  int v366; // r0@6
  int v367; // r0@6
  int (*v368)(void); // r2@6
  int v369; // r0@6
  int v370; // r0@6
  int v371; // r0@6
  int v372; // r0@6
  int v373; // r0@6
  int (*v374)(void); // r2@6
  int v375; // r0@6
  int (*v376)(void); // r2@6
  int v377; // r0@6
  int v378; // r0@6
  int v379; // r0@6
  int (*v380)(void); // r2@6
  int v381; // r0@6
  int (*v382)(void); // r2@6
  int v383; // r0@6
  int v384; // r5@6
  int v385; // r0@6
  void *v386; // r0@6
  int v387; // r0@7
  int v388; // r0@7
  int v389; // r0@7
  int (*v390)(void); // r2@7
  int v391; // r0@7
  int v392; // r0@7
  int v393; // r0@7
  int v394; // r0@7
  int v395; // r0@7
  int (*v396)(void); // r2@7
  int v397; // r0@7
  int v398; // r0@7
  int v399; // r0@7
  int v400; // r0@7
  int v401; // r0@7
  int v402; // r0@7
  int v403; // r0@7
  int v404; // r0@7
  int v405; // r0@7
  int v406; // r0@7
  int v407; // r0@7
  int v408; // r0@7
  int v409; // r0@7
  int v410; // r0@7
  int v411; // r0@7
  int v412; // r0@7
  int v413; // r0@7
  int v414; // r0@7
  int v415; // r0@7
  int v416; // r0@7
  int v417; // r0@7
  int v418; // r0@7
  int v419; // r0@7
  int v420; // r0@7
  int v421; // r0@7
  int v422; // r0@7
  int v423; // r0@7
  int v424; // r0@7
  int v425; // r0@7
  int v426; // r0@7
  int v427; // r0@7
  int v428; // r0@7
  int v429; // r0@7
  int v430; // r0@7
  int v431; // r0@7
  int v432; // r0@7
  int (*v433)(void); // r2@7
  int v434; // r0@7
  int v435; // r0@7
  int v436; // r0@7
  int v437; // r0@7
  int v438; // r0@7
  int v439; // r0@7
  int v440; // r0@7
  int v441; // r0@7
  int v442; // r0@7
  int v443; // r0@7
  int v444; // r0@7
  int v445; // r0@7
  int v446; // r0@7
  int (*v447)(void); // r2@7
  int v448; // r0@7
  int v449; // r0@7
  int v450; // r0@7
  int v451; // r0@7
  int v452; // r0@7
  int v453; // r0@7
  int v454; // r0@7
  int v455; // r0@7
  int v456; // r0@7
  int v457; // r0@7
  int v458; // r0@7
  int v459; // r0@7
  int v460; // r0@7
  int v461; // r0@7
  int v462; // r0@7
  int v463; // r0@7
  int v464; // r0@7
  int (*v465)(void); // r2@7
  int v466; // r0@7
  int v467; // r0@7
  int v468; // r0@7
  int v469; // r0@7
  int v470; // r0@7
  int v471; // r0@7
  int (*v472)(void); // r2@7
  int v473; // r0@7
  int v474; // r0@7
  int v475; // r0@7
  int v476; // r0@7
  int (*v477)(void); // r2@7
  int v478; // r0@7
  int v479; // r0@7
  int v480; // r0@7
  int v481; // r0@7
  int v482; // r0@7
  int v483; // r0@7
  int v484; // r0@7
  int v485; // r0@7
  int v486; // r0@7
  int v487; // r0@7
  int v488; // r0@7
  int v489; // r0@7
  int v490; // r0@7
  int v491; // r0@7
  int v492; // r0@7
  int v493; // r0@7
  int (*v494)(void); // r2@7
  int v495; // r0@7
  int v496; // r0@7
  int (*v497)(void); // r2@7
  int v498; // r0@7
  int v499; // r0@7
  int v500; // r0@7
  int v501; // r0@7
  int (*v502)(void); // r2@7
  int v503; // r0@7
  int v504; // r0@7
  int v505; // r0@7
  int (*v506)(void); // r2@7
  int v507; // r0@7
  int v508; // r0@7
  int v509; // r0@7
  Block *v510; // r0@7
  int v511; // r0@7
  int v512; // r0@7
  int v513; // r0@7
  int v514; // r0@7
  int v515; // r0@7
  int v516; // r0@7
  int v517; // r0@7
  int v518; // r0@7
  int v519; // r0@7
  int v520; // r0@7
  int v521; // r0@7
  int v522; // r0@7
  int v523; // r0@7
  int v524; // r0@7
  int v525; // r0@7
  int v526; // r0@7
  int v527; // r0@7
  int v528; // r0@7
  int v529; // r0@7
  int v530; // r0@7
  int (*v531)(void); // r2@7
  int v532; // r0@7
  int v533; // r0@7
  int v534; // r0@7
  int v535; // r0@7
  int v536; // r0@7
  int v537; // r0@7
  int v538; // r0@7
  int v539; // r0@7
  int v540; // r0@7
  int v541; // r0@7
  int v542; // r0@7
  int v543; // r0@7
  int (*v544)(void); // r2@7
  int (*v545)(void); // r2@7
  int v546; // r0@7
  int v547; // r0@7
  int v548; // r0@7
  int v549; // r0@7
  int v550; // r0@7
  int v551; // r0@7
  int v552; // r0@7
  int v553; // r0@7
  int v554; // r0@7
  int v555; // r0@7
  int v556; // r0@7
  int v557; // r0@7
  int v558; // r0@7
  int (*v559)(void); // r2@7
  int v560; // r0@7
  int v561; // r0@7
  int v562; // r0@7
  int v563; // r0@7
  int v564; // r0@7
  int (*v565)(void); // r2@7
  int v566; // r0@7
  int v567; // r0@7
  int (*v568)(void); // r2@7
  int v569; // r0@7
  int v570; // r0@7
  int v571; // r0@7
  int (*v572)(void); // r2@7
  int v573; // r0@7
  int v574; // r0@7
  int v575; // r0@7
  int v576; // r0@7
  int v577; // r0@7
  int v578; // r0@7
  int v579; // r0@7
  int v580; // r0@7
  int v581; // r0@7
  int v582; // r0@7
  int v583; // r0@7
  int v584; // r0@7
  int v585; // r0@7
  int v586; // r0@7
  int v587; // r0@7
  int v588; // r0@7
  int v589; // r0@7
  int (*v590)(void); // r2@7
  int v591; // r0@7
  int v592; // r0@7
  Block *v593; // r0@7
  int v594; // r0@7
  int v595; // r0@7
  int v596; // r0@7
  int v597; // r0@7
  int v598; // r0@7
  int v599; // r0@7
  int v600; // r0@7
  int v601; // r0@7
  int v602; // r0@7
  int v603; // r0@7
  int v604; // r0@7
  int v605; // r0@7
  int v606; // r0@7
  int v607; // r5@7
  int (__fastcall *v608)(int, char *); // r11@7
  int v609; // r0@7
  int v610; // r0@7
  int v611; // r0@7
  int v612; // r0@7
  int v613; // r0@7
  int v614; // r0@7
  int v615; // r5@7
  int (__fastcall *v616)(int, char *); // r7@7
  int v617; // r0@7
  int v618; // r0@7
  int v619; // r0@7
  int v620; // r0@7
  int v621; // r0@7
  int v622; // r0@7
  int v623; // r5@7
  int (__fastcall *v624)(int, char *); // r7@7
  int v625; // r0@7
  int v626; // r0@7
  int v627; // r0@7
  int v628; // r0@7
  int v629; // r0@7
  int v630; // r0@7
  int v631; // r5@7
  int (__fastcall *v632)(int, char *); // r7@7
  int v633; // r0@7
  int v634; // r0@7
  int v635; // r0@7
  int v636; // r0@7
  int v637; // r0@7
  int v638; // r0@7
  int v639; // r5@7
  int (__fastcall *v640)(int, char *); // r7@7
  int v641; // r0@7
  int v642; // r0@7
  int v643; // r0@7
  int v644; // r0@7
  int v645; // r0@7
  int v646; // r0@7
  int v647; // r0@7
  int v648; // r0@7
  int v649; // r0@7
  int v650; // r0@7
  int v651; // r0@7
  int v652; // r0@7
  int v653; // r0@7
  int v654; // r0@7
  int v655; // r0@7
  int v656; // r0@7
  int (*v657)(void); // r2@7
  int v658; // r0@7
  int v659; // r0@7
  int v660; // r0@7
  int v661; // r0@7
  int v662; // r0@7
  int v663; // r0@7
  int v664; // r0@7
  int (*v665)(void); // r2@7
  int v666; // r0@7
  int v667; // r0@7
  int v668; // r0@7
  int v669; // r0@7
  int v670; // r0@7
  int v671; // r0@7
  int v672; // r0@7
  int (*v673)(void); // r2@7
  int v674; // r0@7
  int v675; // r0@7
  int v676; // r0@7
  int v677; // r0@7
  int v678; // r0@7
  int v679; // r0@7
  int v680; // r0@7
  int (*v681)(void); // r2@7
  int v682; // r0@7
  int v683; // r0@7
  int v684; // r0@7
  int v685; // r0@7
  int v686; // r0@7
  int v687; // r0@7
  int v688; // r0@7
  int (*v689)(void); // r2@7
  int v690; // r0@7
  int v691; // r0@7
  int v692; // r0@7
  int v693; // r0@7
  int v694; // r0@7
  int v695; // r0@7
  int v696; // r0@7
  int v697; // r0@7
  int v698; // r0@7
  int v699; // r0@7
  int v700; // r0@7
  int (*v701)(void); // r2@7
  int v702; // r0@7
  int v703; // r0@7
  int v704; // r0@7
  int v705; // r0@7
  Block *v706; // r0@7
  int v707; // r0@7
  int v708; // r0@7
  int v709; // r0@7
  int v710; // r0@7
  int v711; // r0@7
  int v712; // r0@7
  int v713; // r0@7
  int v714; // r0@7
  int (*v715)(void); // r2@7
  int v716; // r0@7
  int v717; // r0@7
  int v718; // r0@7
  int v719; // r0@7
  int v720; // r0@7
  int v721; // r0@7
  int v722; // r0@7
  int v723; // r0@7
  int v724; // r0@7
  int v725; // r0@7
  int v726; // r0@7
  int v727; // r0@7
  int (*v728)(void); // r2@7
  int v729; // r0@7
  int v730; // r0@7
  int v731; // r0@7
  int (*v732)(void); // r2@7
  int v733; // r0@7
  int v734; // r0@7
  int v735; // r0@7
  int v736; // r0@7
  int v737; // r0@7
  int v738; // r0@7
  int v739; // r0@7
  int v740; // r0@7
  int v741; // r0@7
  int v742; // r0@7
  int v743; // r4@7
  int v744; // r0@7
  void *v745; // r0@7
  int v746; // r0@8
  int v747; // r4@8
  int v748; // r0@8
  void *v749; // r0@8
  int v750; // r0@9
  int v751; // r4@9
  int v752; // r0@9
  void *v753; // r0@9
  int v754; // r0@10
  int v755; // r4@10
  int v756; // r0@10
  void *v757; // r0@10
  int v758; // r0@11
  int v759; // r4@11
  int v760; // r0@11
  void *v761; // r0@11
  int v762; // r0@12
  int v763; // r4@12
  int v764; // r0@12
  void *v765; // r0@12
  int v766; // r0@13
  int v767; // r4@13
  int v768; // r0@13
  void *v769; // r0@13
  int v770; // r0@14
  int v771; // r4@14
  int v772; // r0@14
  void *v773; // r0@14
  int v774; // r0@15
  int v775; // r4@15
  int v776; // r0@15
  void *v777; // r0@15
  int v778; // r0@16
  int v779; // r4@16
  int v780; // r0@16
  void *v781; // r0@16
  int v782; // r0@17
  int v783; // r4@17
  int v784; // r0@17
  void *v785; // r0@17
  int v786; // r0@18
  int v787; // r4@18
  int v788; // r0@18
  void *v789; // r0@18
  int v790; // r0@19
  int v791; // r4@19
  int v792; // r0@19
  void *v793; // r0@19
  int v794; // r0@20
  int v795; // r4@20
  int v796; // r0@20
  void *v797; // r0@20
  int v798; // r0@21
  int v799; // r4@21
  int v800; // r0@21
  void *v801; // r0@21
  int v802; // r0@22
  int v803; // r4@22
  int v804; // r0@22
  void *v805; // r0@22
  int v806; // r0@23
  int v807; // r0@23
  signed int v808; // r4@23
  int v809; // r0@23
  int v810; // r0@23
  int (*v811)(void); // r2@23
  int v812; // r0@23
  int v813; // r0@23
  int v814; // r0@23
  int v815; // r0@23
  int v816; // r0@23
  int (*v817)(void); // r2@23
  int v818; // r0@23
  int v819; // r0@23
  int v820; // r0@23
  int v821; // r0@23
  int v822; // r0@23
  int v823; // r0@23
  int v824; // r0@23
  int v825; // r0@23
  int v826; // r0@23
  int v827; // r0@23
  int v828; // r0@23
  int v829; // r0@23
  int v830; // r0@23
  int v831; // r0@23
  int v832; // r0@23
  int v833; // r0@23
  int v834; // r0@23
  int v835; // r0@23
  int v836; // r0@23
  int v837; // r0@23
  int v838; // r0@23
  int v839; // r0@23
  int v840; // r0@23
  int v841; // r0@23
  int v842; // r0@23
  int v843; // r0@23
  int v844; // r0@23
  int v845; // r0@23
  int v846; // r0@23
  int v847; // r0@23
  int v848; // r0@23
  int v849; // r0@23
  unsigned int *v850; // r2@24
  signed int v851; // r1@26
  int v852; // r0@33
  void *v853; // r0@33
  int v854; // r0@33
  void *v855; // r0@33
  int v856; // r4@36
  int *v857; // r5@36
  int v858; // t1@37
  unsigned int *v860; // r2@39
  signed int v861; // r1@41
  unsigned int *v862; // r2@43
  signed int v863; // r1@45
  unsigned int *v864; // r2@47
  signed int v865; // r1@49
  unsigned int *v866; // r2@51
  signed int v867; // r1@53
  unsigned int *v868; // r2@55
  signed int v869; // r1@57
  unsigned int *v870; // r2@59
  signed int v871; // r1@61
  unsigned int *v872; // r2@63
  signed int v873; // r1@65
  unsigned int *v874; // r2@67
  signed int v875; // r1@69
  unsigned int *v876; // r2@71
  signed int v877; // r1@73
  unsigned int *v878; // r2@75
  signed int v879; // r1@77
  unsigned int *v880; // r2@79
  signed int v881; // r1@81
  unsigned int *v882; // r2@83
  signed int v883; // r1@85
  unsigned int *v884; // r2@87
  signed int v885; // r1@89
  unsigned int *v886; // r2@91
  signed int v887; // r1@93
  unsigned int *v888; // r2@95
  signed int v889; // r1@97
  unsigned int *v890; // r2@99
  signed int v891; // r1@101
  unsigned int *v892; // r2@103
  signed int v893; // r1@105
  char v894; // [sp+4h] [bp-944h]@38
  char v895; // [sp+8h] [bp-940h]@38
  char v896; // [sp+Ch] [bp-93Ch]@38
  char v897; // [sp+10h] [bp-938h]@38
  char v898; // [sp+14h] [bp-934h]@38
  int v899; // [sp+18h] [bp-930h]@24
  int v900; // [sp+1Ch] [bp-92Ch]@23
  int v901; // [sp+20h] [bp-928h]@23
  int v902; // [sp+24h] [bp-924h]@23
  int v903; // [sp+28h] [bp-920h]@23
  int v904; // [sp+2Ch] [bp-91Ch]@23
  int v905; // [sp+30h] [bp-918h]@23
  int v906; // [sp+34h] [bp-914h]@23
  int v907; // [sp+38h] [bp-910h]@23
  int v908; // [sp+3Ch] [bp-90Ch]@23
  char v909; // [sp+43h] [bp-905h]@23
  int v910; // [sp+44h] [bp-904h]@23
  int v911; // [sp+48h] [bp-900h]@23
  int v912; // [sp+4Ch] [bp-8FCh]@23
  int v913; // [sp+50h] [bp-8F8h]@23
  int v914; // [sp+54h] [bp-8F4h]@23
  signed int v915; // [sp+58h] [bp-8F0h]@23
  int v916; // [sp+5Ch] [bp-8ECh]@23
  int v917; // [sp+60h] [bp-8E8h]@23
  int v918; // [sp+64h] [bp-8E4h]@23
  int v919; // [sp+68h] [bp-8E0h]@23
  int v920; // [sp+6Ch] [bp-8DCh]@23
  int v921; // [sp+70h] [bp-8D8h]@23
  int v922; // [sp+74h] [bp-8D4h]@23
  int v923; // [sp+78h] [bp-8D0h]@23
  int v924; // [sp+7Ch] [bp-8CCh]@23
  int v925; // [sp+80h] [bp-8C8h]@23
  int v926; // [sp+88h] [bp-8C0h]@22
  int v927; // [sp+8Ch] [bp-8BCh]@22
  int v928; // [sp+94h] [bp-8B4h]@21
  int v929; // [sp+98h] [bp-8B0h]@21
  int v930; // [sp+A0h] [bp-8A8h]@20
  int v931; // [sp+A4h] [bp-8A4h]@20
  int v932; // [sp+ACh] [bp-89Ch]@19
  int v933; // [sp+B0h] [bp-898h]@19
  int v934; // [sp+B8h] [bp-890h]@18
  int v935; // [sp+BCh] [bp-88Ch]@18
  int v936; // [sp+C4h] [bp-884h]@17
  int v937; // [sp+C8h] [bp-880h]@17
  int v938; // [sp+D0h] [bp-878h]@16
  int v939; // [sp+D4h] [bp-874h]@16
  int v940; // [sp+DCh] [bp-86Ch]@15
  int v941; // [sp+E0h] [bp-868h]@15
  int v942; // [sp+E8h] [bp-860h]@14
  int v943; // [sp+ECh] [bp-85Ch]@14
  int v944; // [sp+F4h] [bp-854h]@13
  int v945; // [sp+F8h] [bp-850h]@13
  int v946; // [sp+100h] [bp-848h]@12
  int v947; // [sp+104h] [bp-844h]@12
  int v948; // [sp+10Ch] [bp-83Ch]@11
  int v949; // [sp+110h] [bp-838h]@11
  int v950; // [sp+118h] [bp-830h]@10
  int v951; // [sp+11Ch] [bp-82Ch]@10
  int v952; // [sp+124h] [bp-824h]@9
  int v953; // [sp+128h] [bp-820h]@9
  int v954; // [sp+130h] [bp-818h]@8
  int v955; // [sp+134h] [bp-814h]@8
  int v956; // [sp+13Ch] [bp-80Ch]@7
  int v957; // [sp+140h] [bp-808h]@7
  int v958; // [sp+144h] [bp-804h]@7
  int v959; // [sp+148h] [bp-800h]@7
  int v960; // [sp+14Ch] [bp-7FCh]@7
  signed int v961; // [sp+150h] [bp-7F8h]@7
  signed int v962; // [sp+154h] [bp-7F4h]@7
  int v963; // [sp+158h] [bp-7F0h]@7
  int v964; // [sp+15Ch] [bp-7ECh]@7
  int v965; // [sp+160h] [bp-7E8h]@7
  signed int v966; // [sp+164h] [bp-7E4h]@7
  signed int v967; // [sp+168h] [bp-7E0h]@7
  int v968; // [sp+16Ch] [bp-7DCh]@7
  int v969; // [sp+170h] [bp-7D8h]@7
  int v970; // [sp+174h] [bp-7D4h]@7
  int v971; // [sp+178h] [bp-7D0h]@7
  int v972; // [sp+17Ch] [bp-7CCh]@7
  char v973; // [sp+180h] [bp-7C8h]@7
  char v974; // [sp+183h] [bp-7C5h]@7
  int v975; // [sp+184h] [bp-7C4h]@7
  int v976; // [sp+188h] [bp-7C0h]@7
  int v977; // [sp+18Ch] [bp-7BCh]@7
  int v978; // [sp+190h] [bp-7B8h]@7
  int v979; // [sp+194h] [bp-7B4h]@7
  signed int v980; // [sp+198h] [bp-7B0h]@7
  signed int v981; // [sp+19Ch] [bp-7ACh]@7
  int v982; // [sp+1A0h] [bp-7A8h]@7
  int v983; // [sp+1A4h] [bp-7A4h]@7
  int v984; // [sp+1A8h] [bp-7A0h]@7
  int v985; // [sp+1ACh] [bp-79Ch]@7
  int v986; // [sp+1B0h] [bp-798h]@7
  int v987; // [sp+1B4h] [bp-794h]@7
  int v988; // [sp+1B8h] [bp-790h]@7
  signed int v989; // [sp+1BCh] [bp-78Ch]@7
  int v990; // [sp+1C0h] [bp-788h]@7
  int v991; // [sp+1C4h] [bp-784h]@7
  int v992; // [sp+1C8h] [bp-780h]@7
  int v993; // [sp+1CCh] [bp-77Ch]@7
  int v994; // [sp+1D0h] [bp-778h]@7
  signed int v995; // [sp+1D4h] [bp-774h]@7
  int v996; // [sp+1D8h] [bp-770h]@7
  int v997; // [sp+1DCh] [bp-76Ch]@7
  int v998; // [sp+1E0h] [bp-768h]@7
  int v999; // [sp+1E4h] [bp-764h]@7
  int v1000; // [sp+1E8h] [bp-760h]@7
  int v1001; // [sp+1ECh] [bp-75Ch]@7
  int v1002; // [sp+1F0h] [bp-758h]@7
  int v1003; // [sp+1F4h] [bp-754h]@7
  int v1004; // [sp+1F8h] [bp-750h]@7
  int v1005; // [sp+1FCh] [bp-74Ch]@7
  int v1006; // [sp+200h] [bp-748h]@7
  signed int v1007; // [sp+204h] [bp-744h]@7
  int v1008; // [sp+208h] [bp-740h]@7
  int v1009; // [sp+20Ch] [bp-73Ch]@7
  int v1010; // [sp+210h] [bp-738h]@7
  int v1011; // [sp+214h] [bp-734h]@7
  int v1012; // [sp+218h] [bp-730h]@7
  int v1013; // [sp+21Ch] [bp-72Ch]@7
  int v1014; // [sp+220h] [bp-728h]@7
  int v1015; // [sp+224h] [bp-724h]@7
  int v1016; // [sp+228h] [bp-720h]@7
  char v1017; // [sp+22Fh] [bp-719h]@7
  int v1018; // [sp+230h] [bp-718h]@7
  char v1019; // [sp+237h] [bp-711h]@7
  int v1020; // [sp+238h] [bp-710h]@7
  char v1021; // [sp+23Ch] [bp-70Ch]@7
  int v1022; // [sp+24Ch] [bp-6FCh]@7
  int v1023; // [sp+250h] [bp-6F8h]@7
  char v1024; // [sp+254h] [bp-6F4h]@7
  int v1025; // [sp+264h] [bp-6E4h]@7
  int v1026; // [sp+268h] [bp-6E0h]@7
  char v1027; // [sp+26Ch] [bp-6DCh]@7
  int v1028; // [sp+27Ch] [bp-6CCh]@7
  int v1029; // [sp+280h] [bp-6C8h]@7
  char v1030; // [sp+284h] [bp-6C4h]@7
  int v1031; // [sp+294h] [bp-6B4h]@7
  int v1032; // [sp+298h] [bp-6B0h]@7
  char v1033; // [sp+29Ch] [bp-6ACh]@7
  int v1034; // [sp+2ACh] [bp-69Ch]@7
  int v1035; // [sp+2B0h] [bp-698h]@7
  char v1036; // [sp+2B7h] [bp-691h]@7
  int v1037; // [sp+2B8h] [bp-690h]@7
  char v1038; // [sp+2BFh] [bp-689h]@7
  int v1039; // [sp+2C0h] [bp-688h]@7
  int v1040; // [sp+2C4h] [bp-684h]@7
  int v1041; // [sp+2C8h] [bp-680h]@7
  signed int v1042; // [sp+2CCh] [bp-67Ch]@7
  signed int v1043; // [sp+2D0h] [bp-678h]@7
  int v1044; // [sp+2D4h] [bp-674h]@7
  int v1045; // [sp+2D8h] [bp-670h]@7
  char v1046; // [sp+2DFh] [bp-669h]@7
  int v1047; // [sp+2E0h] [bp-668h]@7
  char v1048; // [sp+2E7h] [bp-661h]@7
  int v1049; // [sp+2E8h] [bp-660h]@7
  char v1050; // [sp+2EFh] [bp-659h]@7
  int v1051; // [sp+2F0h] [bp-658h]@7
  int v1052; // [sp+2F4h] [bp-654h]@7
  char v1053; // [sp+2FBh] [bp-64Dh]@7
  int v1054; // [sp+2FCh] [bp-64Ch]@7
  int v1055; // [sp+300h] [bp-648h]@7
  signed int v1056; // [sp+304h] [bp-644h]@7
  signed int v1057; // [sp+308h] [bp-640h]@7
  int v1058; // [sp+30Ch] [bp-63Ch]@7
  int v1059; // [sp+310h] [bp-638h]@7
  int v1060; // [sp+314h] [bp-634h]@7
  signed int v1061; // [sp+318h] [bp-630h]@7
  int v1062; // [sp+31Ch] [bp-62Ch]@7
  int v1063; // [sp+320h] [bp-628h]@7
  int v1064; // [sp+324h] [bp-624h]@7
  char v1065; // [sp+328h] [bp-620h]@7
  int v1066; // [sp+32Ch] [bp-61Ch]@7
  int v1067; // [sp+330h] [bp-618h]@7
  signed int v1068; // [sp+334h] [bp-614h]@7
  signed int v1069; // [sp+338h] [bp-610h]@7
  int v1070; // [sp+33Ch] [bp-60Ch]@7
  int v1071; // [sp+340h] [bp-608h]@7
  int v1072; // [sp+344h] [bp-604h]@7
  int v1073; // [sp+348h] [bp-600h]@7
  int v1074; // [sp+34Ch] [bp-5FCh]@7
  char v1075; // [sp+350h] [bp-5F8h]@7
  int v1076; // [sp+354h] [bp-5F4h]@7
  int v1077; // [sp+358h] [bp-5F0h]@7
  signed int v1078; // [sp+35Ch] [bp-5ECh]@7
  int v1079; // [sp+360h] [bp-5E8h]@7
  int v1080; // [sp+364h] [bp-5E4h]@7
  int v1081; // [sp+368h] [bp-5E0h]@7
  int v1082; // [sp+36Ch] [bp-5DCh]@7
  int v1083; // [sp+370h] [bp-5D8h]@7
  int v1084; // [sp+374h] [bp-5D4h]@7
  int v1085; // [sp+378h] [bp-5D0h]@7
  char v1086; // [sp+37Ch] [bp-5CCh]@7
  int v1087; // [sp+380h] [bp-5C8h]@7
  char v1088; // [sp+387h] [bp-5C1h]@7
  int v1089; // [sp+388h] [bp-5C0h]@7
  int v1090; // [sp+38Ch] [bp-5BCh]@7
  char v1091; // [sp+393h] [bp-5B5h]@7
  int v1092; // [sp+394h] [bp-5B4h]@7
  char v1093; // [sp+39Bh] [bp-5ADh]@7
  int v1094; // [sp+39Ch] [bp-5ACh]@7
  int v1095; // [sp+3A0h] [bp-5A8h]@7
  int v1096; // [sp+3A4h] [bp-5A4h]@7
  int v1097; // [sp+3A8h] [bp-5A0h]@7
  signed int v1098; // [sp+3ACh] [bp-59Ch]@7
  int v1099; // [sp+3B0h] [bp-598h]@7
  int v1100; // [sp+3B4h] [bp-594h]@7
  char v1101; // [sp+3B8h] [bp-590h]@7
  int v1102; // [sp+3BCh] [bp-58Ch]@7
  int v1103; // [sp+3C0h] [bp-588h]@7
  int v1104; // [sp+3C4h] [bp-584h]@7
  int v1105; // [sp+3C8h] [bp-580h]@7
  int v1106; // [sp+3CCh] [bp-57Ch]@7
  int v1107; // [sp+3D0h] [bp-578h]@7
  int v1108; // [sp+3D4h] [bp-574h]@7
  int v1109; // [sp+3D8h] [bp-570h]@7
  int v1110; // [sp+3DCh] [bp-56Ch]@7
  int v1111; // [sp+3E0h] [bp-568h]@7
  int v1112; // [sp+3E4h] [bp-564h]@7
  char v1113; // [sp+3EBh] [bp-55Dh]@7
  int v1114; // [sp+3ECh] [bp-55Ch]@7
  char v1115; // [sp+3F3h] [bp-555h]@7
  int v1116; // [sp+3F4h] [bp-554h]@7
  char v1117; // [sp+3FBh] [bp-54Dh]@7
  int v1118; // [sp+3FCh] [bp-54Ch]@7
  int v1119; // [sp+400h] [bp-548h]@7
  int v1120; // [sp+404h] [bp-544h]@7
  int v1121; // [sp+408h] [bp-540h]@7
  int v1122; // [sp+40Ch] [bp-53Ch]@7
  int v1123; // [sp+410h] [bp-538h]@7
  int v1124; // [sp+414h] [bp-534h]@7
  int v1125; // [sp+418h] [bp-530h]@7
  int v1126; // [sp+41Ch] [bp-52Ch]@7
  int v1127; // [sp+420h] [bp-528h]@7
  int v1128; // [sp+424h] [bp-524h]@7
  int v1129; // [sp+428h] [bp-520h]@7
  int v1130; // [sp+42Ch] [bp-51Ch]@7
  int v1131; // [sp+430h] [bp-518h]@7
  int v1132; // [sp+434h] [bp-514h]@7
  char v1133; // [sp+438h] [bp-510h]@7
  int v1134; // [sp+43Ch] [bp-50Ch]@7
  int v1135; // [sp+440h] [bp-508h]@7
  int v1136; // [sp+444h] [bp-504h]@7
  int v1137; // [sp+448h] [bp-500h]@7
  int v1138; // [sp+44Ch] [bp-4FCh]@7
  int v1139; // [sp+450h] [bp-4F8h]@7
  int v1140; // [sp+454h] [bp-4F4h]@7
  int v1141; // [sp+458h] [bp-4F0h]@7
  int v1142; // [sp+45Ch] [bp-4ECh]@7
  int v1143; // [sp+460h] [bp-4E8h]@7
  int v1144; // [sp+464h] [bp-4E4h]@7
  int v1145; // [sp+468h] [bp-4E0h]@7
  char v1146; // [sp+46Fh] [bp-4D9h]@7
  int v1147; // [sp+470h] [bp-4D8h]@7
  int v1148; // [sp+474h] [bp-4D4h]@7
  int v1149; // [sp+478h] [bp-4D0h]@7
  int v1150; // [sp+47Ch] [bp-4CCh]@7
  int v1151; // [sp+480h] [bp-4C8h]@7
  int v1152; // [sp+484h] [bp-4C4h]@7
  int v1153; // [sp+488h] [bp-4C0h]@7
  int v1154; // [sp+48Ch] [bp-4BCh]@7
  int v1155; // [sp+490h] [bp-4B8h]@7
  int v1156; // [sp+494h] [bp-4B4h]@7
  int v1157; // [sp+498h] [bp-4B0h]@7
  int v1158; // [sp+49Ch] [bp-4ACh]@7
  int v1159; // [sp+4A0h] [bp-4A8h]@7
  int v1160; // [sp+4A4h] [bp-4A4h]@7
  int v1161; // [sp+4A8h] [bp-4A0h]@7
  int v1162; // [sp+4ACh] [bp-49Ch]@7
  int v1163; // [sp+4B0h] [bp-498h]@7
  int v1164; // [sp+4B4h] [bp-494h]@7
  int v1165; // [sp+4B8h] [bp-490h]@7
  int v1166; // [sp+4BCh] [bp-48Ch]@7
  char v1167; // [sp+4C3h] [bp-485h]@7
  int v1168; // [sp+4C4h] [bp-484h]@7
  char v1169; // [sp+4CBh] [bp-47Dh]@7
  int v1170; // [sp+4CCh] [bp-47Ch]@7
  int v1171; // [sp+4D0h] [bp-478h]@7
  int v1172; // [sp+4D4h] [bp-474h]@7
  int v1173; // [sp+4D8h] [bp-470h]@7
  int v1174; // [sp+4DCh] [bp-46Ch]@7
  int v1175; // [sp+4E0h] [bp-468h]@7
  int v1176; // [sp+4E4h] [bp-464h]@7
  int v1177; // [sp+4E8h] [bp-460h]@7
  int v1178; // [sp+4ECh] [bp-45Ch]@7
  int v1179; // [sp+4F0h] [bp-458h]@7
  int v1180; // [sp+4F4h] [bp-454h]@7
  int v1181; // [sp+4F8h] [bp-450h]@7
  int v1182; // [sp+4FCh] [bp-44Ch]@7
  int v1183; // [sp+504h] [bp-444h]@6
  char v1184; // [sp+508h] [bp-440h]@6
  int v1185; // [sp+50Ch] [bp-43Ch]@6
  char v1186; // [sp+510h] [bp-438h]@6
  int v1187; // [sp+514h] [bp-434h]@6
  int v1188; // [sp+518h] [bp-430h]@6
  int v1189; // [sp+51Ch] [bp-42Ch]@6
  int v1190; // [sp+520h] [bp-428h]@6
  int v1191; // [sp+524h] [bp-424h]@6
  int v1192; // [sp+528h] [bp-420h]@6
  int v1193; // [sp+52Ch] [bp-41Ch]@6
  int v1194; // [sp+530h] [bp-418h]@6
  int v1195; // [sp+534h] [bp-414h]@6
  int v1196; // [sp+538h] [bp-410h]@6
  int v1197; // [sp+53Ch] [bp-40Ch]@6
  int v1198; // [sp+540h] [bp-408h]@6
  int v1199; // [sp+544h] [bp-404h]@6
  int v1200; // [sp+548h] [bp-400h]@6
  int v1201; // [sp+54Ch] [bp-3FCh]@6
  int v1202; // [sp+550h] [bp-3F8h]@6
  int v1203; // [sp+554h] [bp-3F4h]@6
  int v1204; // [sp+558h] [bp-3F0h]@6
  int v1205; // [sp+55Ch] [bp-3ECh]@6
  int v1206; // [sp+560h] [bp-3E8h]@6
  int v1207; // [sp+564h] [bp-3E4h]@6
  int v1208; // [sp+568h] [bp-3E0h]@6
  int v1209; // [sp+56Ch] [bp-3DCh]@6
  int v1210; // [sp+570h] [bp-3D8h]@6
  int v1211; // [sp+574h] [bp-3D4h]@6
  int v1212; // [sp+578h] [bp-3D0h]@6
  int v1213; // [sp+57Ch] [bp-3CCh]@6
  int v1214; // [sp+580h] [bp-3C8h]@6
  int v1215; // [sp+584h] [bp-3C4h]@6
  int v1216; // [sp+588h] [bp-3C0h]@6
  char v1217; // [sp+58Ch] [bp-3BCh]@6
  int v1218; // [sp+59Ch] [bp-3ACh]@6
  int v1219; // [sp+5A0h] [bp-3A8h]@6
  int v1220; // [sp+5A4h] [bp-3A4h]@6
  int v1221; // [sp+5A8h] [bp-3A0h]@6
  int v1222; // [sp+5ACh] [bp-39Ch]@6
  int v1223; // [sp+5B0h] [bp-398h]@6
  int v1224; // [sp+5B4h] [bp-394h]@6
  int v1225; // [sp+5B8h] [bp-390h]@6
  int v1226; // [sp+5BCh] [bp-38Ch]@6
  int v1227; // [sp+5C0h] [bp-388h]@6
  char v1228; // [sp+5C6h] [bp-382h]@6
  char v1229; // [sp+5C7h] [bp-381h]@6
  int v1230; // [sp+5C8h] [bp-380h]@6
  int v1231; // [sp+5CCh] [bp-37Ch]@6
  int v1232; // [sp+5D0h] [bp-378h]@6
  int v1233; // [sp+5D4h] [bp-374h]@6
  int v1234; // [sp+5D8h] [bp-370h]@6
  char v1235; // [sp+5DEh] [bp-36Ah]@6
  char v1236; // [sp+5DFh] [bp-369h]@6
  int v1237; // [sp+5E0h] [bp-368h]@6
  int v1238; // [sp+5E4h] [bp-364h]@6
  int v1239; // [sp+5E8h] [bp-360h]@6
  int v1240; // [sp+5ECh] [bp-35Ch]@6
  int v1241; // [sp+5F0h] [bp-358h]@6
  int v1242; // [sp+5F4h] [bp-354h]@6
  int v1243; // [sp+5F8h] [bp-350h]@6
  int v1244; // [sp+5FCh] [bp-34Ch]@6
  int v1245; // [sp+600h] [bp-348h]@6
  int v1246; // [sp+604h] [bp-344h]@6
  int v1247; // [sp+608h] [bp-340h]@6
  int v1248; // [sp+60Ch] [bp-33Ch]@6
  int v1249; // [sp+610h] [bp-338h]@6
  int v1250; // [sp+614h] [bp-334h]@6
  int v1251; // [sp+618h] [bp-330h]@6
  int v1252; // [sp+61Ch] [bp-32Ch]@6
  int v1253; // [sp+620h] [bp-328h]@6
  char v1254; // [sp+627h] [bp-321h]@6
  int v1255; // [sp+628h] [bp-320h]@6
  char v1256; // [sp+62Fh] [bp-319h]@6
  int v1257; // [sp+630h] [bp-318h]@6
  int v1258; // [sp+634h] [bp-314h]@6
  int v1259; // [sp+638h] [bp-310h]@6
  int v1260; // [sp+63Ch] [bp-30Ch]@6
  int v1261; // [sp+640h] [bp-308h]@6
  int v1262; // [sp+644h] [bp-304h]@6
  char v1263; // [sp+64Bh] [bp-2FDh]@6
  int v1264; // [sp+64Ch] [bp-2FCh]@6
  int v1265; // [sp+650h] [bp-2F8h]@6
  int v1266; // [sp+654h] [bp-2F4h]@6
  int v1267; // [sp+658h] [bp-2F0h]@6
  int v1268; // [sp+65Ch] [bp-2ECh]@6
  int v1269; // [sp+660h] [bp-2E8h]@6
  int v1270; // [sp+664h] [bp-2E4h]@6
  int v1271; // [sp+668h] [bp-2E0h]@6
  int v1272; // [sp+66Ch] [bp-2DCh]@6
  int v1273; // [sp+670h] [bp-2D8h]@6
  int v1274; // [sp+674h] [bp-2D4h]@6
  int v1275; // [sp+678h] [bp-2D0h]@6
  int v1276; // [sp+67Ch] [bp-2CCh]@6
  int v1277; // [sp+680h] [bp-2C8h]@6
  int v1278; // [sp+684h] [bp-2C4h]@6
  int v1279; // [sp+688h] [bp-2C0h]@6
  int v1280; // [sp+68Ch] [bp-2BCh]@6
  char v1281; // [sp+693h] [bp-2B5h]@6
  int v1282; // [sp+694h] [bp-2B4h]@6
  char v1283; // [sp+698h] [bp-2B0h]@6
  int v1284; // [sp+6A8h] [bp-2A0h]@6
  int v1285; // [sp+6ACh] [bp-29Ch]@6
  int v1286; // [sp+6B0h] [bp-298h]@6
  int v1287; // [sp+6B4h] [bp-294h]@6
  int v1288; // [sp+6B8h] [bp-290h]@6
  int v1289; // [sp+6BCh] [bp-28Ch]@6
  char v1290; // [sp+6C0h] [bp-288h]@6
  char v1291; // [sp+6C3h] [bp-285h]@6
  int v1292; // [sp+6C4h] [bp-284h]@6
  int v1293; // [sp+6C8h] [bp-280h]@6
  int v1294; // [sp+6CCh] [bp-27Ch]@6
  char v1295; // [sp+6D3h] [bp-275h]@6
  int v1296; // [sp+6D4h] [bp-274h]@6
  char v1297; // [sp+6DBh] [bp-26Dh]@6
  int v1298; // [sp+6DCh] [bp-26Ch]@6
  char v1299; // [sp+6E3h] [bp-265h]@6
  int v1300; // [sp+6E4h] [bp-264h]@6
  char v1301; // [sp+6EBh] [bp-25Dh]@6
  int v1302; // [sp+6ECh] [bp-25Ch]@6
  int v1303; // [sp+6F0h] [bp-258h]@6
  int v1304; // [sp+6F4h] [bp-254h]@6
  int v1305; // [sp+6F8h] [bp-250h]@6
  int v1306; // [sp+6FCh] [bp-24Ch]@6
  int v1307; // [sp+700h] [bp-248h]@6
  int v1308; // [sp+704h] [bp-244h]@6
  int v1309; // [sp+708h] [bp-240h]@6
  int v1310; // [sp+70Ch] [bp-23Ch]@6
  int v1311; // [sp+710h] [bp-238h]@6
  int v1312; // [sp+714h] [bp-234h]@6
  int v1313; // [sp+718h] [bp-230h]@6
  char v1314; // [sp+71Fh] [bp-229h]@6
  int v1315; // [sp+720h] [bp-228h]@6
  int v1316; // [sp+724h] [bp-224h]@6
  int v1317; // [sp+728h] [bp-220h]@6
  int v1318; // [sp+72Ch] [bp-21Ch]@6
  int v1319; // [sp+730h] [bp-218h]@6
  int v1320; // [sp+734h] [bp-214h]@6
  int v1321; // [sp+738h] [bp-210h]@6
  int v1322; // [sp+73Ch] [bp-20Ch]@6
  int v1323; // [sp+740h] [bp-208h]@6
  int v1324; // [sp+744h] [bp-204h]@6
  char v1325; // [sp+74Bh] [bp-1FDh]@6
  int v1326; // [sp+74Ch] [bp-1FCh]@6
  char v1327; // [sp+753h] [bp-1F5h]@6
  int v1328; // [sp+754h] [bp-1F4h]@6
  char v1329; // [sp+75Bh] [bp-1EDh]@6
  int v1330; // [sp+75Ch] [bp-1ECh]@6
  int v1331; // [sp+760h] [bp-1E8h]@6
  int v1332; // [sp+764h] [bp-1E4h]@6
  int v1333; // [sp+768h] [bp-1E0h]@6
  int v1334; // [sp+76Ch] [bp-1DCh]@6
  int v1335; // [sp+770h] [bp-1D8h]@6
  int v1336; // [sp+774h] [bp-1D4h]@6
  int v1337; // [sp+778h] [bp-1D0h]@6
  int v1338; // [sp+77Ch] [bp-1CCh]@6
  int v1339; // [sp+780h] [bp-1C8h]@6
  int v1340; // [sp+784h] [bp-1C4h]@6
  int v1341; // [sp+788h] [bp-1C0h]@6
  int v1342; // [sp+78Ch] [bp-1BCh]@6
  char v1343; // [sp+790h] [bp-1B8h]@6
  int v1344; // [sp+794h] [bp-1B4h]@6
  int v1345; // [sp+798h] [bp-1B0h]@6
  int v1346; // [sp+79Ch] [bp-1ACh]@6
  int v1347; // [sp+7A0h] [bp-1A8h]@6
  int v1348; // [sp+7A4h] [bp-1A4h]@6
  int v1349; // [sp+7A8h] [bp-1A0h]@6
  char v1350; // [sp+7AFh] [bp-199h]@6
  int v1351; // [sp+7B0h] [bp-198h]@6
  int v1352; // [sp+7B4h] [bp-194h]@6
  int v1353; // [sp+7B8h] [bp-190h]@6
  int v1354; // [sp+7BCh] [bp-18Ch]@6
  int v1355; // [sp+7C0h] [bp-188h]@6
  int v1356; // [sp+7C4h] [bp-184h]@6
  int v1357; // [sp+7C8h] [bp-180h]@6
  int v1358; // [sp+7CCh] [bp-17Ch]@6
  int v1359; // [sp+7D0h] [bp-178h]@6
  char v1360; // [sp+7D7h] [bp-171h]@6
  int v1361; // [sp+7D8h] [bp-170h]@6
  char v1362; // [sp+7DFh] [bp-169h]@6
  int v1363; // [sp+7E0h] [bp-168h]@6
  int v1364; // [sp+7E4h] [bp-164h]@6
  int v1365; // [sp+7E8h] [bp-160h]@6
  int v1366; // [sp+7ECh] [bp-15Ch]@6
  int v1367; // [sp+7F0h] [bp-158h]@6
  int v1368; // [sp+7F4h] [bp-154h]@6
  int v1369; // [sp+7F8h] [bp-150h]@6
  int v1370; // [sp+7FCh] [bp-14Ch]@6
  int v1371; // [sp+800h] [bp-148h]@6
  int v1372; // [sp+804h] [bp-144h]@6
  int v1373; // [sp+808h] [bp-140h]@6
  int v1374; // [sp+80Ch] [bp-13Ch]@6
  int v1375; // [sp+810h] [bp-138h]@6
  int v1376; // [sp+814h] [bp-134h]@6
  int v1377; // [sp+818h] [bp-130h]@6
  int v1378; // [sp+81Ch] [bp-12Ch]@6
  int v1379; // [sp+820h] [bp-128h]@6
  int v1380; // [sp+824h] [bp-124h]@6
  int v1381; // [sp+828h] [bp-120h]@6
  int v1382; // [sp+82Ch] [bp-11Ch]@6
  int v1383; // [sp+830h] [bp-118h]@6
  int v1384; // [sp+834h] [bp-114h]@6
  char v1385; // [sp+838h] [bp-110h]@6
  int v1386; // [sp+83Ch] [bp-10Ch]@6
  int v1387; // [sp+840h] [bp-108h]@6
  int v1388; // [sp+844h] [bp-104h]@6
  int v1389; // [sp+848h] [bp-100h]@6
  int v1390; // [sp+84Ch] [bp-FCh]@6
  int v1391; // [sp+850h] [bp-F8h]@6
  int v1392; // [sp+854h] [bp-F4h]@6
  int v1393; // [sp+858h] [bp-F0h]@6
  int v1394; // [sp+85Ch] [bp-ECh]@6
  int v1395; // [sp+860h] [bp-E8h]@6
  int v1396; // [sp+864h] [bp-E4h]@6
  int v1397; // [sp+868h] [bp-E0h]@6
  int v1398; // [sp+86Ch] [bp-DCh]@6
  int v1399; // [sp+870h] [bp-D8h]@6
  int v1400; // [sp+874h] [bp-D4h]@6
  int v1401; // [sp+878h] [bp-D0h]@6
  int v1402; // [sp+87Ch] [bp-CCh]@6
  char v1403; // [sp+880h] [bp-C8h]@6
  int v1404; // [sp+884h] [bp-C4h]@6
  int v1405; // [sp+888h] [bp-C0h]@6
  int v1406; // [sp+88Ch] [bp-BCh]@6
  int v1407; // [sp+890h] [bp-B8h]@6
  int v1408; // [sp+894h] [bp-B4h]@6
  int v1409; // [sp+898h] [bp-B0h]@6
  int v1410; // [sp+89Ch] [bp-ACh]@6
  int v1411; // [sp+8A0h] [bp-A8h]@6
  int v1412; // [sp+8A4h] [bp-A4h]@6
  int v1413; // [sp+8A8h] [bp-A0h]@6
  int v1414; // [sp+8ACh] [bp-9Ch]@6
  int v1415; // [sp+8B0h] [bp-98h]@6
  int v1416; // [sp+8B4h] [bp-94h]@6
  int v1417; // [sp+8B8h] [bp-90h]@6
  int v1418; // [sp+8BCh] [bp-8Ch]@6
  char v1419; // [sp+8C0h] [bp-88h]@6
  int v1420; // [sp+8C4h] [bp-84h]@6
  char v1421; // [sp+8C8h] [bp-80h]@6
  int v1422; // [sp+8CCh] [bp-7Ch]@6
  char v1423; // [sp+8D0h] [bp-78h]@6
  int v1424; // [sp+8D4h] [bp-74h]@6
  char v1425; // [sp+8D8h] [bp-70h]@6
  int v1426; // [sp+8DCh] [bp-6Ch]@6
  int v1427; // [sp+8E0h] [bp-68h]@6
  int v1428; // [sp+8E4h] [bp-64h]@6
  int v1429; // [sp+8E8h] [bp-60h]@6
  int v1430; // [sp+8ECh] [bp-5Ch]@6
  int v1431; // [sp+8F0h] [bp-58h]@6
  int v1432; // [sp+8F4h] [bp-54h]@6
  int v1433; // [sp+8F8h] [bp-50h]@6
  int v1434; // [sp+8FCh] [bp-4Ch]@6
  int v1435; // [sp+900h] [bp-48h]@6
  int v1436; // [sp+904h] [bp-44h]@6
  int v1437; // [sp+908h] [bp-40h]@6
  int v1438; // [sp+90Ch] [bp-3Ch]@6
  int v1439; // [sp+910h] [bp-38h]@6
  int v1440; // [sp+914h] [bp-34h]@6
  int v1441; // [sp+918h] [bp-30h]@6
  int v1442; // [sp+91Ch] [bp-2Ch]@6

  v1 = *(_QWORD *)&Block::mOwnedBlocks;
  if ( dword_280AF94 != Block::mOwnedBlocks )
  {
    v2 = Block::mOwnedBlocks;
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( HIDWORD(v1) != v2 );
  }
  dword_280AF94 = v1;
  _aeabi_memclr8(Block::mBlocks, 1024);
  Block::mTranslucency[0] = 1065353216;
  v1442 = 0;
  v3 = Material::getMaterial(0);
  v4 = Block::registerBlock<AirBlock,char const(&)[4],int,Material const&>("air", &v1442, v3);
  v5 = (*(int (**)(void))(*(_DWORD *)v4 + 468))();
  v6 = (*(int (**)(void))(*(_DWORD *)v5 + 496))();
  v1441 = 1;
  Block::mAir = v6;
  v7 = Block::registerBlock<StoneBlock,char const(&)[6],int>("stone", &v1441);
  v8 = (*(int (**)(void))(*(_DWORD *)v7 + 468))();
  v9 = (*(int (**)(void))(*(_DWORD *)v8 + 464))();
  *(_DWORD *)(v9 + 96) = 2;
  Block::mStone = (*(int (**)(void))(*(_DWORD *)v9 + 488))();
  v1440 = 2;
  v10 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<GrassBlock,char const(&)[6],int>("grass", &v1440) + 480);
  v1436 = 1056898816;
  v1437 = 1060287155;
  v1438 = 1046536418;
  v1439 = 0;
  v11 = v10();
  v12 = (*(int (**)(void))(*(_DWORD *)v11 + 468))();
  *(_DWORD *)(v12 + 96) = 2;
  Block::mGrass = v12;
  v1435 = 3;
  v13 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<DirtBlock,char const(&)[5],int>("dirt", &v1435) + 480);
  v1431 = 1058510744;
  v1432 = 1054530268;
  v1433 = 1050319515;
  v1434 = 0;
  v14 = v13();
  v15 = (*(int (**)(void))(*(_DWORD *)v14 + 468))();
  *(_DWORD *)(v15 + 96) = 2;
  Block::mDirt = (*(int (**)(void))(*(_DWORD *)v15 + 488))();
  v1430 = 4;
  v16 = Material::getMaterial(3);
  v17 = Block::registerBlock<Block,char const(&)[12],int,Material const&>("cobblestone", &v1430, v16);
  v18 = (*(int (**)(void))(*(_DWORD *)v17 + 468))();
  v19 = (*(int (**)(void))(*(_DWORD *)v18 + 464))();
  *(_DWORD *)(v19 + 96) = 1;
  Block::mCobblestone = v19;
  v1429 = 5;
  v20 = Block::registerBlock<WoodBlock,char const(&)[7],int>("planks", &v1429);
  v21 = (*(int (**)(void))(*(_DWORD *)v20 + 468))();
  v22 = (*(int (**)(void))(*(_DWORD *)v21 + 464))();
  *(_DWORD *)(v22 + 96) = 1;
  Block::mWoodPlanks = (*(int (**)(void))(*(_DWORD *)v22 + 488))();
  v1428 = 6;
  v23 = Block::registerBlock<Sapling,char const(&)[8],int>("sapling", &v1428);
  v24 = (*(int (**)(void))(*(_DWORD *)v23 + 468))();
  *(_DWORD *)(v24 + 96) = 2;
  v25 = (*(int (**)(void))(*(_DWORD *)v24 + 488))();
  Block::mSapling = (*(int (**)(void))(*(_DWORD *)v25 + 488))();
  v1427 = 7;
  v26 = Block::registerBlock<BedrockBlock,char const(&)[8],int>("bedrock", &v1427);
  v27 = (*(int (**)(void))(*(_DWORD *)v26 + 468))();
  v28 = (*(int (**)(void))(*(_DWORD *)v27 + 464))();
  v29 = (*(int (**)(void))(*(_DWORD *)v28 + 484))();
  *(_DWORD *)(v29 + 96) = 2;
  Block::mBedrock = v29;
  v1426 = 8;
  v30 = Material::getMaterial(5);
  v31 = Block::registerBlock<LiquidBlockDynamic,char const(&)[14],int,Material const&>("flowing_water", &v1426, v30);
  v32 = *(int (**)(void))(*(_DWORD *)(*(int (**)(void))(*(_DWORD *)v31 + 468))() + 456);
  v1425 = 3;
  v33 = v32();
  *(_DWORD *)(v33 + 96) = 2;
  v34 = (*(int (**)(void))(*(_DWORD *)v33 + 488))();
  Block::mFlowingWater = v34;
  v35 = (char *)(v34 + 4);
  v1424 = 9;
  v36 = (int *)Material::getMaterial(5);
  v37 = Block::registerBlock<LiquidBlockStatic,char const(&)[6],int,BlockID const&,Material const&>(
          "water",
          &v1424,
          v35,
          v36);
  v38 = *(int (**)(void))(*(_DWORD *)(*(int (**)(void))(*(_DWORD *)v37 + 468))() + 456);
  v1423 = 3;
  v39 = v38();
  *(_DWORD *)(v39 + 96) = 2;
  Block::mStillWater = (*(int (**)(void))(*(_DWORD *)v39 + 488))();
  v1422 = 10;
  v40 = Material::getMaterial(6);
  v41 = Block::registerBlock<LiquidBlockDynamic,char const(&)[13],int,Material const&>("flowing_lava", &v1422, v40);
  v42 = (*(int (**)(void))(*(_DWORD *)v41 + 468))();
  v43 = *(int (**)(void))(*(_DWORD *)(*(int (**)(void))(*(_DWORD *)v42 + 460))() + 456);
  v1421 = Brightness::MAX;
  v44 = v43();
  *(_DWORD *)(v44 + 96) = 2;
  v45 = (*(int (**)(void))(*(_DWORD *)v44 + 488))();
  Block::mFlowingLava = v45;
  v46 = (char *)(v45 + 4);
  v1420 = 11;
  v47 = (int *)Material::getMaterial(6);
  v48 = Block::registerBlock<LiquidBlockStatic,char const(&)[5],int,BlockID const&,Material const&>(
          "lava",
          &v1420,
          v46,
          v47);
  v49 = (*(int (**)(void))(*(_DWORD *)v48 + 468))();
  v50 = *(int (**)(void))(*(_DWORD *)(*(int (**)(void))(*(_DWORD *)v49 + 460))() + 456);
  v1419 = Brightness::MAX;
  v51 = v50();
  *(_DWORD *)(v51 + 96) = 2;
  Block::mStillLava = (*(int (**)(void))(*(_DWORD *)v51 + 488))();
  v1418 = 12;
  v52 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<SandBlock,char const(&)[5],int>("sand", &v1418) + 480);
  v1414 = 1064826873;
  v1415 = 1063905771;
  v1416 = 1059300260;
  v1417 = 0;
  v53 = v52();
  v54 = (*(int (**)(void))(*(_DWORD *)v53 + 468))();
  *(_DWORD *)(v54 + 96) = 2;
  Block::mSand = (*(int (**)(void))(*(_DWORD *)v54 + 488))();
  v1413 = 13;
  v55 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<GravelBlock,char const(&)[7],int>("gravel", &v1413) + 480);
  v1409 = 1054925026;
  v1410 = 1054925026;
  v1411 = 1054925026;
  v1412 = 0;
  v56 = v55();
  v57 = (*(int (**)(void))(*(_DWORD *)v56 + 468))();
  *(_DWORD *)(v57 + 96) = 2;
  Block::mGravel = v57;
  v1408 = 14;
  v58 = Block::registerBlock<OreBlock,char const(&)[9],int>("gold_ore", &v1408);
  v59 = (*(int (**)(void))(*(_DWORD *)v58 + 468))();
  v60 = (*(int (**)(void))(*(_DWORD *)v59 + 464))();
  *(_DWORD *)(v60 + 96) = 2;
  Block::mGoldOre = v60;
  v1407 = 15;
  v61 = Block::registerBlock<OreBlock,char const(&)[9],int>("iron_ore", &v1407);
  v62 = (*(int (**)(void))(*(_DWORD *)v61 + 468))();
  v63 = (*(int (**)(void))(*(_DWORD *)v62 + 464))();
  *(_DWORD *)(v63 + 96) = 2;
  Block::mIronOre = v63;
  v1406 = 16;
  v64 = Block::registerBlock<OreBlock,char const(&)[9],int>("coal_ore", &v1406);
  v65 = (*(int (**)(void))(*(_DWORD *)v64 + 468))();
  v66 = (*(int (**)(void))(*(_DWORD *)v65 + 464))();
  *(_DWORD *)(v66 + 96) = 2;
  Block::mCoalOre = v66;
  v1405 = 17;
  v67 = Block::registerBlock<OldLogBlock,char const(&)[4],int>("log", &v1405);
  v68 = (*(int (**)(void))(*(_DWORD *)v67 + 468))();
  *(_DWORD *)(v68 + 96) = 2;
  v69 = (*(int (**)(void))(*(_DWORD *)v68 + 488))();
  Block::mLog = (*(int (**)(void))(*(_DWORD *)v69 + 488))();
  v1404 = 18;
  v70 = Block::registerBlock<OldLeafBlock,char const(&)[7],int>("leaves", &v1404);
  v71 = *(int (**)(void))(*(_DWORD *)(*(int (**)(void))(*(_DWORD *)v70 + 468))() + 456);
  v1403 = 1;
  v72 = v71();
  *(_DWORD *)(v72 + 96) = 2;
  v73 = (*(int (**)(void))(*(_DWORD *)v72 + 488))();
  v74 = (*(int (**)(void))(*(_DWORD *)v73 + 488))();
  Block::mLeaves = (*(int (**)(void))(*(_DWORD *)v74 + 488))();
  v1402 = 19;
  v75 = Material::getMaterial(10);
  v76 = Block::registerBlock<SpongeBlock,char const(&)[7],int,Material const&>("sponge", &v1402, v75);
  *(_DWORD *)(v76 + 96) = 2;
  v77 = (*(int (**)(void))(*(_DWORD *)v76 + 468))();
  Block::mSponge = (*(int (**)(void))(*(_DWORD *)v77 + 464))();
  v1401 = 20;
  v78 = Material::getMaterial(16);
  v79 = Block::registerBlock<GlassBlock,char const(&)[6],int,Material const&>("glass", &v1401, v78);
  v80 = (*(int (**)(void))(*(_DWORD *)v79 + 468))();
  *(_DWORD *)(v80 + 96) = 1;
  Block::mGlass = v80;
  v1400 = 21;
  v81 = Block::registerBlock<OreBlock,char const(&)[10],int>("lapis_ore", &v1400);
  v82 = (*(int (**)(void))(*(_DWORD *)v81 + 468))();
  v83 = (*(int (**)(void))(*(_DWORD *)v82 + 464))();
  *(_DWORD *)(v83 + 96) = 2;
  Block::mLapisOre = v83;
  v1399 = 22;
  v84 = Material::getMaterial(3);
  v85 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<Block,char const(&)[12],int,Material const&>(
                                       "lapis_block",
                                       &v1399,
                                       v84)
                        + 480);
  v1395 = 1049924757;
  v1396 = 1056997505;
  v1397 = 1065353216;
  v1398 = 0;
  v86 = v85();
  v87 = (*(int (**)(void))(*(_DWORD *)v86 + 468))();
  v88 = (*(int (**)(void))(*(_DWORD *)v87 + 464))();
  *(_DWORD *)(v88 + 96) = 1;
  Block::mLapisBlock = v88;
  v1394 = 23;
  v89 = Block::registerBlock<DispenserBlock,char const(&)[10],int>("dispenser", &v1394);
  v90 = (*(int (**)(void))(*(_DWORD *)v89 + 468))();
  *(_DWORD *)(v90 + 96) = 4;
  v91 = (*(int (**)(void))(*(_DWORD *)v90 + 488))();
  Block::mDispenser = (*(int (**)(void))(*(_DWORD *)v91 + 488))();
  v1393 = 24;
  v92 = Block::registerBlock<SandStoneBlock,char const(&)[10],int>("sandstone", &v1393);
  v93 = (*(int (**)(void))(*(_DWORD *)v92 + 468))();
  *(_DWORD *)(v93 + 96) = 1;
  Block::mSandStone = (*(int (**)(void))(*(_DWORD *)v93 + 488))();
  v1392 = 25;
  v94 = Block::registerBlock<NoteBlock,char const(&)[10],int>("noteblock", &v1392);
  v95 = (*(int (**)(void))(*(_DWORD *)v94 + 468))();
  *(_DWORD *)(v95 + 96) = 4;
  Block::mNote = v95;
  v1391 = 26;
  v96 = Block::registerBlock<BedBlock,char const(&)[4],int>("bed", &v1391);
  v97 = (*(int (**)(void))(*(_DWORD *)v96 + 468))();
  *(_DWORD *)(v97 + 96) = 4;
  v98 = (*(int (**)(void))(*(_DWORD *)v97 + 488))();
  v99 = (*(int (**)(void))(*(_DWORD *)v98 + 488))();
  Block::mBed = (*(int (**)(void))(*(_DWORD *)v99 + 488))();
  v1390 = 27;
  v100 = Block::registerBlock<PoweredRailBlock,char const(&)[12],int>("golden_rail", &v1390);
  v101 = (*(int (**)(void))(*(_DWORD *)v100 + 468))();
  *(_DWORD *)(v101 + 96) = 4;
  v102 = (*(int (**)(void))(*(_DWORD *)v101 + 488))();
  Block::mGoldenRail = (*(int (**)(void))(*(_DWORD *)v102 + 488))();
  v1389 = 28;
  v103 = Block::registerBlock<DetectorRailBlock,char const(&)[14],int>("detector_rail", &v1389);
  v104 = (*(int (**)(void))(*(_DWORD *)v103 + 468))();
  *(_DWORD *)(v104 + 96) = 4;
  v105 = (*(int (**)(void))(*(_DWORD *)v104 + 488))();
  Block::mDetectorRail = (*(int (**)(void))(*(_DWORD *)v105 + 488))();
  v1388 = 29;
  v1387 = 1;
  v106 = Block::registerBlock<PistonBlock,char const(&)[14],int,PistonBlock::Type>("sticky_piston", &v1388, &v1387);
  v107 = (*(int (**)(void))(*(_DWORD *)v106 + 468))();
  *(_DWORD *)(v107 + 96) = 4;
  Block::mStickyPiston = (*(int (**)(void))(*(_DWORD *)v107 + 488))();
  v1386 = 30;
  v108 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<WebBlock,char const(&)[4],int>("web", &v1386) + 456);
  v1385 = 1;
  v109 = v108();
  v110 = (*(int (**)(void))(*(_DWORD *)v109 + 468))();
  *(_DWORD *)(v110 + 96) = 2;
  Block::mWeb = v110;
  v1384 = 31;
  v111 = Block::registerBlock<TallGrass,char const(&)[10],int>("tallgrass", &v1384);
  v112 = (*(int (**)(void))(*(_DWORD *)v111 + 468))();
  *(_DWORD *)(v112 + 96) = 2;
  Block::mTallgrass = (*(int (**)(void))(*(_DWORD *)v112 + 488))();
  v1383 = 32;
  v113 = Block::registerBlock<DeadBush,char const(&)[9],int>("deadbush", &v1383);
  v114 = (*(int (**)(void))(*(_DWORD *)v113 + 468))();
  *(_DWORD *)(v114 + 96) = 2;
  Block::mDeadBush = v114;
  v1382 = 33;
  v115 = Block::registerBlock<PistonBlock,char const(&)[7],int>("piston", &v1382);
  v116 = (*(int (**)(void))(*(_DWORD *)v115 + 468))();
  *(_DWORD *)(v116 + 96) = 4;
  Block::mPiston = (*(int (**)(void))(*(_DWORD *)v116 + 488))();
  v1381 = 34;
  v117 = Block::registerBlock<PistonArmBlock,char const(&)[19],int>("pistonArmCollision", &v1381);
  v118 = (*(int (**)(void))(*(_DWORD *)v117 + 468))();
  Block::mPistonArm = (*(int (**)(void))(*(_DWORD *)v118 + 488))();
  v1380 = 35;
  v119 = Block::registerBlock<ClothBlock,char const(&)[5],int>("wool", &v1380);
  v120 = (*(int (**)(void))(*(_DWORD *)v119 + 468))();
  *(_DWORD *)(v120 + 96) = 1;
  Block::mWool = (*(int (**)(void))(*(_DWORD *)v120 + 488))();
  v1379 = 37;
  v1378 = 0;
  v121 = Block::registerBlock<FlowerBlock,char const(&)[14],int,FlowerBlock::Type>("yellow_flower", &v1379, &v1378);
  v122 = (*(int (**)(void))(*(_DWORD *)v121 + 468))();
  *(_DWORD *)(v122 + 96) = 2;
  Block::mYellowFlower = (*(int (**)(void))(*(_DWORD *)v122 + 488))();
  v1377 = 38;
  v1376 = 1;
  v123 = Block::registerBlock<FlowerBlock,char const(&)[11],int,FlowerBlock::Type>("red_flower", &v1377, &v1376);
  v124 = (*(int (**)(void))(*(_DWORD *)v123 + 468))();
  *(_DWORD *)(v124 + 96) = 2;
  Block::mRedFlower = (*(int (**)(void))(*(_DWORD *)v124 + 488))();
  v1375 = 39;
  v125 = Block::registerBlock<MushroomBlock,char const(&)[15],int>("brown_mushroom", &v1375);
  v126 = (*(int (**)(void))(*(_DWORD *)v125 + 468))();
  v127 = (*(int (**)(void))(*(_DWORD *)v126 + 460))();
  *(_DWORD *)(v127 + 96) = 2;
  Block::mBrownMushroom = v127;
  v1374 = 40;
  v128 = Block::registerBlock<MushroomBlock,char const(&)[13],int>("red_mushroom", &v1374);
  v129 = (*(int (**)(void))(*(_DWORD *)v128 + 468))();
  *(_DWORD *)(v129 + 96) = 2;
  Block::mRedMushroom = v129;
  v1373 = 41;
  v130 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<MetalBlock,char const(&)[11],int>("gold_block", &v1373) + 480);
  v1369 = 1065024252;
  v1370 = 1064234736;
  v1371 = 1050319515;
  v1372 = 0;
  v131 = v130();
  v132 = (*(int (**)(void))(*(_DWORD *)v131 + 468))();
  v133 = (*(int (**)(void))(*(_DWORD *)v132 + 464))();
  *(_DWORD *)(v133 + 96) = 1;
  Block::mGoldBlock = v133;
  v1368 = 42;
  v134 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<MetalBlock,char const(&)[11],int>("iron_block", &v1368) + 480);
  v1364 = 1059563432;
  v1365 = 1059563432;
  v1366 = 1059563432;
  v1367 = 0;
  v135 = v134();
  v136 = (*(int (**)(void))(*(_DWORD *)v135 + 468))();
  v137 = (*(int (**)(void))(*(_DWORD *)v136 + 464))();
  *(_DWORD *)(v137 + 96) = 1;
  Block::mIronBlock = v137;
  v1363 = 43;
  v1362 = 1;
  v138 = Block::registerBlock<StoneSlabBlock,char const(&)[18],int,bool>("double_stone_slab", &v1363, &v1362);
  v139 = (*(int (**)(void))(*(_DWORD *)v138 + 468))();
  v140 = (*(int (**)(void))(*(_DWORD *)v139 + 464))();
  *(_DWORD *)(v140 + 96) = 1;
  v141 = (*(int (**)(void))(*(_DWORD *)v140 + 488))();
  v142 = (*(int (**)(void))(*(_DWORD *)v141 + 488))();
  Block::mDoubleStoneSlab = (*(int (**)(void))(*(_DWORD *)v142 + 496))();
  v1361 = 44;
  v1360 = 0;
  v143 = Block::registerBlock<StoneSlabBlock,char const(&)[11],int,bool>("stone_slab", &v1361, &v1360);
  v144 = (*(int (**)(void))(*(_DWORD *)v143 + 468))();
  v145 = (*(int (**)(void))(*(_DWORD *)v144 + 464))();
  *(_DWORD *)(v145 + 96) = 1;
  v146 = (*(int (**)(void))(*(_DWORD *)v145 + 488))();
  v147 = (*(int (**)(void))(*(_DWORD *)v146 + 488))();
  Block::mStoneSlab = (*(int (**)(void))(*(_DWORD *)v147 + 496))();
  v1359 = 45;
  v148 = Material::getMaterial(3);
  v149 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<Block,char const(&)[12],int,Material const&>(
                                        "brick_block",
                                        &v1359,
                                        v148)
                         + 480);
  v1355 = 1058642330;
  v1356 = 1045220558;
  v1357 = 1045220558;
  v1358 = 0;
  v150 = v149();
  v151 = (*(int (**)(void))(*(_DWORD *)v150 + 468))();
  v152 = (*(int (**)(void))(*(_DWORD *)v151 + 464))();
  *(_DWORD *)(v152 + 96) = 1;
  Block::mBrick = v152;
  v1354 = 46;
  v153 = Block::registerBlock<TntBlock,char const(&)[4],int>("tnt", &v1354);
  v154 = (*(int (**)(void))(*(_DWORD *)v153 + 468))();
  *(_DWORD *)(v154 + 96) = 4;
  Block::mTNT = (*(int (**)(void))(*(_DWORD *)v154 + 488))();
  v1353 = 47;
  v155 = Block::registerBlock<BookshelfBlock,char const(&)[10],int>("bookshelf", &v1353);
  v156 = (*(int (**)(void))(*(_DWORD *)v155 + 468))();
  *(_DWORD *)(v156 + 96) = 4;
  Block::mBookshelf = v156;
  v1352 = 48;
  v157 = Material::getMaterial(3);
  v158 = Block::registerBlock<Block,char const(&)[18],int,Material const&>("mossy_cobblestone", &v1352, v157);
  v159 = (*(int (**)(void))(*(_DWORD *)v158 + 468))();
  v160 = (*(int (**)(void))(*(_DWORD *)v159 + 464))();
  *(_DWORD *)(v160 + 96) = 1;
  Block::mMossyCobblestone = v160;
  v1351 = 49;
  v1350 = 0;
  v161 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<ObsidianBlock,char const(&)[9],int,bool>(
                                        "obsidian",
                                        &v1351,
                                        &v1350)
  v1346 = 1036568778;
  v1347 = 1036568778;
  v1348 = 1036568778;
  v1349 = 0;
  v162 = v161();
  v163 = (*(int (**)(void))(*(_DWORD *)v162 + 468))();
  v164 = (*(int (**)(void))(*(_DWORD *)v163 + 464))();
  *(_DWORD *)(v164 + 96) = 2;
  Block::mObsidian = v164;
  v1345 = 50;
  v165 = Block::registerBlock<TorchBlock,char const(&)[6],int>("torch", &v1345);
  v166 = (*(int (**)(void))(*(_DWORD *)v165 + 468))();
  v167 = (*(int (**)(void))(*(_DWORD *)v166 + 460))();
  *(_DWORD *)(v167 + 96) = 4;
  Block::mTorch = (*(int (**)(void))(*(_DWORD *)v167 + 488))();
  v1344 = 52;
  v168 = Block::registerBlock<MobSpawnerBlock,char const(&)[12],int>("mob_spawner", &v1344);
  v169 = *(int (**)(void))(*(_DWORD *)(*(int (**)(void))(*(_DWORD *)v168 + 468))() + 456);
  v1343 = Brightness::MIN;
  v170 = v169();
  *(_DWORD *)(v170 + 96) = 2;
  Block::mMobSpawner = v170;
  v1342 = 53;
  v171 = Block::registerBlock<StairBlock,char const(&)[11],int,Block const&>(
           "oak_stairs",
           &v1342,
           (Block *)Block::mWoodPlanks);
  *(_DWORD *)(v171 + 96) = 1;
  v172 = (*(int (**)(void))(*(_DWORD *)v171 + 488))();
  Block::mOakStairs = (*(int (**)(void))(*(_DWORD *)v172 + 488))();
  v1341 = 54;
  v173 = Block::registerBlock<ChestBlock,char const(&)[6],int>("chest", &v1341);
  *(_DWORD *)(v173 + 96) = 4;
  v174 = (*(int (**)(void))(*(_DWORD *)v173 + 468))();
  Block::mChest = (*(int (**)(void))(*(_DWORD *)v174 + 488))();
  v1340 = 55;
  v175 = Block::registerBlock<RedStoneWireBlock,char const(&)[14],int>("redstone_wire", &v1340);
  v176 = (*(int (**)(void))(*(_DWORD *)v175 + 468))();
  *(_DWORD *)(v176 + 96) = 4;
  Block::mRedStoneDust = (*(int (**)(void))(*(_DWORD *)v176 + 488))();
  v1339 = 56;
  v177 = Block::registerBlock<OreBlock,char const(&)[12],int>("diamond_ore", &v1339);
  v178 = (*(int (**)(void))(*(_DWORD *)v177 + 468))();
  v179 = (*(int (**)(void))(*(_DWORD *)v178 + 464))();
  *(_DWORD *)(v179 + 96) = 2;
  Block::mDiamondOre = v179;
  v1338 = 57;
  v180 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<MetalBlock,char const(&)[14],int>("diamond_block", &v1338)
  v1334 = 1052293305;
  v1335 = 1062984669;
  v1336 = 1062589911;
  v1337 = 0;
  v181 = v180();
  v182 = (*(int (**)(void))(*(_DWORD *)v181 + 468))();
  v183 = (*(int (**)(void))(*(_DWORD *)v182 + 464))();
  *(_DWORD *)(v183 + 96) = 1;
  Block::mDiamondBlock = v183;
  v1333 = 58;
  v184 = Block::registerBlock<WorkbenchBlock,char const(&)[15],int>("crafting_table", &v1333);
  v185 = (*(int (**)(void))(*(_DWORD *)v184 + 468))();
  *(_DWORD *)(v185 + 96) = 4;
  Block::mWorkBench = v185;
  v1332 = 59;
  v186 = Block::registerBlock<CropBlock,char const(&)[6],int>("wheat", &v1332);
  v187 = (*(int (**)(void))(*(_DWORD *)v186 + 468))();
  *(_DWORD *)(v187 + 96) = 2;
  Block::mWheatCrop = (*(int (**)(void))(*(_DWORD *)v187 + 488))();
  v1331 = 60;
  v188 = Block::registerBlock<FarmBlock,char const(&)[9],int>("farmland", &v1331);
  v189 = (*(int (**)(void))(*(_DWORD *)v188 + 468))();
  *(_DWORD *)(v189 + 96) = 2;
  v190 = (*(int (**)(void))(*(_DWORD *)v189 + 488))();
  v1329 = 0;
  Block::mFarmland = v190;
  v1330 = 61;
  v191 = Block::registerBlock<FurnaceBlock,char const(&)[8],int,bool>("furnace", &v1330, &v1329);
  v192 = (*(int (**)(void))(*(_DWORD *)v191 + 468))();
  *(_DWORD *)(v192 + 96) = 4;
  Block::mFurnace = (*(int (**)(void))(*(_DWORD *)v192 + 488))();
  v1328 = 62;
  v1327 = 1;
  v193 = Block::registerBlock<FurnaceBlock,char const(&)[12],int,bool>("lit_furnace", &v1328, &v1327);
  v194 = (*(int (**)(void))(*(_DWORD *)v193 + 468))();
  v195 = (*(int (**)(void))(*(_DWORD *)v194 + 460))();
  *(_DWORD *)(v195 + 96) = 4;
  Block::mLitFurnace = (*(int (**)(void))(*(_DWORD *)v195 + 488))();
  v1326 = 63;
  v1325 = 1;
  v196 = Block::registerBlock<SignBlock,char const(&)[14],int,bool>("standing_sign", &v1326, &v1325);
  v197 = (*(int (**)(void))(*(_DWORD *)v196 + 468))();
  *(_DWORD *)(v197 + 96) = 4;
  Block::mSign = (*(int (**)(void))(*(_DWORD *)v197 + 488))();
  v1324 = 64;
  v198 = Material::getMaterial(2);
  v1323 = 0;
  v199 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<DoorBlock,char const(&)[12],int,Material const&,DoorBlock::DoorType>(
                                        "wooden_door",
                                        &v1324,
                                        v198,
                                        &v1323)
  v1319 = 1057984400;
  v1320 = 1055846128;
  v1321 = 1049661585;
  v1322 = 0;
  v200 = v199();
  v201 = (*(int (**)(void))(*(_DWORD *)v200 + 468))();
  *(_DWORD *)(v201 + 96) = 1;
  v202 = (*(int (**)(void))(*(_DWORD *)v201 + 488))();
  v203 = (*(int (**)(void))(*(_DWORD *)v202 + 488))();
  v204 = (*(int (**)(void))(*(_DWORD *)v203 + 488))();
  v205 = (*(int (**)(void))(*(_DWORD *)v204 + 492))();
  Block::mWoodenDoor = (*(int (**)(void))(*(_DWORD *)v205 + 488))();
  v1318 = 65;
  v206 = Block::registerBlock<LadderBlock,char const(&)[7],int>("ladder", &v1318);
  v207 = (*(int (**)(void))(*(_DWORD *)v206 + 468))();
  *(_DWORD *)(v207 + 96) = 1;
  Block::mLadder = (*(int (**)(void))(*(_DWORD *)v207 + 488))();
  v1317 = 66;
  v208 = Block::registerBlock<RailBlock,char const(&)[5],int>("rail", &v1317);
  v209 = (*(int (**)(void))(*(_DWORD *)v208 + 468))();
  *(_DWORD *)(v209 + 96) = 4;
  Block::mRail = (*(int (**)(void))(*(_DWORD *)v209 + 488))();
  v1316 = 67;
  v210 = Block::registerBlock<StairBlock,char const(&)[13],int,Block const&>(
           "stone_stairs",
           &v1316,
           (Block *)Block::mCobblestone);
  *(_DWORD *)(v210 + 96) = 1;
  v211 = (*(int (**)(void))(*(_DWORD *)v210 + 488))();
  Block::mStoneStairs = (*(int (**)(void))(*(_DWORD *)v211 + 488))();
  v1315 = 68;
  v1314 = 0;
  v212 = Block::registerBlock<SignBlock,char const(&)[10],int,bool>("wall_sign", &v1315, &v1314);
  v213 = (*(int (**)(void))(*(_DWORD *)v212 + 468))();
  *(_DWORD *)(v213 + 96) = 4;
  Block::mWallSign = (*(int (**)(void))(*(_DWORD *)v213 + 488))();
  v1313 = 69;
  v214 = Block::registerBlock<LeverBlock,char const(&)[6],int>("lever", &v1313);
  v215 = (*(int (**)(void))(*(_DWORD *)v214 + 468))();
  *(_DWORD *)(v215 + 96) = 4;
  v216 = (*(int (**)(void))(*(_DWORD *)v215 + 488))();
  Block::mLever = (*(int (**)(void))(*(_DWORD *)v216 + 488))();
  v1312 = 70;
  v217 = Material::getMaterial(3);
  v1311 = 1;
  v218 = Block::registerBlock<PressurePlateBlock,char const(&)[21],int,Material const&,PressurePlateBlock::Sensitivity>(
           "stone_pressure_plate",
           &v1312,
           v217,
           &v1311);
  v219 = (*(int (**)(void))(*(_DWORD *)v218 + 468))();
  *(_DWORD *)(v219 + 96) = 4;
  v220 = (*(int (**)(void))(*(_DWORD *)v219 + 488))();
  Block::mStonePressurePlate = (*(int (**)(void))(*(_DWORD *)v220 + 496))();
  v1310 = 71;
  v221 = Material::getMaterial(4);
  v1309 = 6;
  v222 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<DoorBlock,char const(&)[10],int,Material const&,DoorBlock::DoorType>(
                                        "iron_door",
                                        &v1310,
                                        v221,
                                        &v1309)
  v1305 = 1059563432;
  v1306 = 1059563432;
  v1307 = 1059563432;
  v1308 = 0;
  v223 = v222();
  v224 = (*(int (**)(void))(*(_DWORD *)v223 + 468))();
  *(_DWORD *)(v224 + 96) = 1;
  v225 = (*(int (**)(void))(*(_DWORD *)v224 + 488))();
  v226 = (*(int (**)(void))(*(_DWORD *)v225 + 488))();
  v227 = (*(int (**)(void))(*(_DWORD *)v226 + 488))();
  v228 = (*(int (**)(void))(*(_DWORD *)v227 + 492))();
  Block::mIronDoor = (*(int (**)(void))(*(_DWORD *)v228 + 488))();
  v1304 = 72;
  v229 = Material::getMaterial(2);
  v1303 = 0;
  v230 = Block::registerBlock<PressurePlateBlock,char const(&)[22],int,Material const&,PressurePlateBlock::Sensitivity>(
           "wooden_pressure_plate",
           &v1304,
           v229,
           &v1303);
  v231 = (*(int (**)(void))(*(_DWORD *)v230 + 468))();
  *(_DWORD *)(v231 + 96) = 4;
  v232 = (*(int (**)(void))(*(_DWORD *)v231 + 488))();
  Block::mWoodPressurePlate = (*(int (**)(void))(*(_DWORD *)v232 + 496))();
  v1302 = 73;
  v1301 = 0;
  v233 = Block::registerBlock<RedStoneOreBlock,char const(&)[13],int,bool>("redstone_ore", &v1302, &v1301);
  v234 = (*(int (**)(void))(*(_DWORD *)v233 + 468))();
  v235 = (*(int (**)(void))(*(_DWORD *)v234 + 464))();
  *(_DWORD *)(v235 + 96) = 2;
  Block::mRedStoneOre = v235;
  v1300 = 74;
  v1299 = 1;
  v236 = Block::registerBlock<RedStoneOreBlock,char const(&)[17],int,bool>("lit_redstone_ore", &v1300, &v1299);
  v237 = (*(int (**)(void))(*(_DWORD *)v236 + 468))();
  v238 = (*(int (**)(void))(*(_DWORD *)v237 + 460))();
  Block::mLitRedStoneOre = (*(int (**)(void))(*(_DWORD *)v238 + 464))();
  v1298 = 75;
  v1297 = 0;
  v239 = Block::registerBlock<RedstoneTorchBlock,char const(&)[21],int,bool>("unlit_redstone_torch", &v1298, &v1297);
  v240 = (*(int (**)(void))(*(_DWORD *)v239 + 468))();
  *(_DWORD *)(v240 + 96) = 4;
  Block::mUnlitRedStoneTorch = (*(int (**)(void))(*(_DWORD *)v240 + 488))();
  v1296 = 76;
  v1295 = 1;
  v241 = Block::registerBlock<RedstoneTorchBlock,char const(&)[15],int,bool>("redstone_torch", &v1296, &v1295);
  v242 = (*(int (**)(void))(*(_DWORD *)v241 + 468))();
  *(_DWORD *)(v242 + 96) = 4;
  v243 = (*(int (**)(void))(*(_DWORD *)v242 + 460))();
  Block::mLitRedStoneTorch = (*(int (**)(void))(*(_DWORD *)v243 + 488))();
  v1294 = 77;
  v244 = Block::registerBlock<StoneButtonBlock,char const(&)[13],int>("stone_button", &v1294);
  v245 = (*(int (**)(void))(*(_DWORD *)v244 + 468))();
  *(_DWORD *)(v245 + 96) = 4;
  v246 = (*(int (**)(void))(*(_DWORD *)v245 + 488))();
  Block::mStoneButton = (*(int (**)(void))(*(_DWORD *)v246 + 488))();
  v1293 = 78;
  v247 = Block::registerBlock<TopSnowBlock,char const(&)[11],int>("snow_layer", &v1293);
  v248 = (*(int (**)(void))(*(_DWORD *)v247 + 468))();
  *(_DWORD *)(v248 + 96) = 2;
  v249 = (*(int (**)(void))(*(_DWORD *)v248 + 488))();
  v250 = (*(int (**)(void))(*(_DWORD *)v249 + 488))();
  Block::mTopSnow = (*(int (**)(void))(*(_DWORD *)v250 + 496))();
  v1292 = 79;
  v1291 = 0;
  v251 = Block::registerBlock<IceBlock,char const(&)[4],int,bool>("ice", &v1292, &v1291);
  v252 = *(int (**)(void))(*(_DWORD *)(*(int (**)(void))(*(_DWORD *)v251 + 468))() + 456);
  v1290 = 3;
  v253 = v252();
  *(_DWORD *)(v253 + 96) = 2;
  Block::mIce = v253;
  v1289 = 80;
  v254 = Block::registerBlock<SnowBlock,char const(&)[5],int>("snow", &v1289);
  v255 = (*(int (**)(void))(*(_DWORD *)v254 + 468))();
  *(_DWORD *)(v255 + 96) = 2;
  Block::mSnow = v255;
  v1288 = 81;
  v256 = Block::registerBlock<CactusBlock,char const(&)[7],int>("cactus", &v1288);
  v257 = (*(int (**)(void))(*(_DWORD *)v256 + 468))();
  *(_DWORD *)(v257 + 96) = 2;
  Block::mCactus = (*(int (**)(void))(*(_DWORD *)v257 + 488))();
  v1287 = 82;
  v258 = Block::registerBlock<ClayBlock,char const(&)[5],int>("clay", &v1287);
  v259 = (*(int (**)(void))(*(_DWORD *)v258 + 468))();
  *(_DWORD *)(v259 + 96) = 1;
  Block::mClay = v259;
  v1286 = 83;
  v260 = Block::registerBlock<ReedBlock,char const(&)[6],int>("reeds", &v1286);
  v261 = (*(int (**)(void))(*(_DWORD *)v260 + 468))();
  *(_DWORD *)(v261 + 96) = 2;
  Block::mReeds = (*(int (**)(void))(*(_DWORD *)v261 + 488))();
  v1285 = 84;
  v262 = Block::registerBlock<JukeboxBlock,char const(&)[8],int>("jukebox", &v1285);
  v263 = (*(int (**)(void))(*(_DWORD *)v262 + 468))();
  v264 = (*(int (**)(void))(*(_DWORD *)v263 + 484))();
  *(_DWORD *)(v264 + 96) = 4;
  Block::mJukebox = v264;
  v1284 = 85;
  v265 = Material::getMaterial(2);
  v266 = Block::registerBlock<FenceBlock,char const(&)[6],int,Material const&>("fence", &v1284, v265);
  v267 = v266;
  v268 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v266 + 480);
  WoodBlock::getWoodMaterialColor((int)&v1283, 0);
  v269 = v268(v267, &v1283);
  v270 = (*(int (**)(void))(*(_DWORD *)v269 + 468))();
  v271 = (*(int (**)(void))(*(_DWORD *)v270 + 464))();
  *(_DWORD *)(v271 + 96) = 1;
  Block::mFence = (*(int (**)(void))(*(_DWORD *)v271 + 488))();
  v1282 = 86;
  v1281 = 0;
  v272 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<PumpkinBlock,char const(&)[8],int,bool>(
                                        "pumpkin",
                                        &v1282,
                                        &v1281)
  v1277 = 1062787290;
  v1278 = 1056898816;
  v1279 = 1045220558;
  v1280 = 0;
  v273 = v272();
  v274 = (*(int (**)(void))(*(_DWORD *)v273 + 468))();
  *(_DWORD *)(v274 + 96) = 2;
  Block::mPumpkin = (*(int (**)(void))(*(_DWORD *)v274 + 488))();
  v1276 = 87;
  v275 = Material::getMaterial(3);
  v276 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<Block,char const(&)[11],int,Material const&>(
                                        "netherrack",
                                        &v1276,
                                        v275)
  v1272 = 1054925026;
  v1273 = 1006665857;
  v1274 = 0;
  v1275 = 0;
  v277 = v276();
  v278 = (*(int (**)(void))(*(_DWORD *)v277 + 468))();
  *(_DWORD *)(v278 + 96) = 2;
  Block::mNetherrack = (*(int (**)(void))(*(_DWORD *)v278 + 484))();
  v1271 = 88;
  v279 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<SoulSandBlock,char const(&)[10],int>("soul_sand", &v1271)
  v1267 = 1053609166;
  v1268 = 1050187929;
  v1269 = 1045220558;
  v1270 = 0;
  v280 = v279();
  v281 = (*(int (**)(void))(*(_DWORD *)v280 + 468))();
  *(_DWORD *)(v281 + 96) = 2;
  Block::mSoulSand = v281;
  v1266 = 89;
  v282 = Material::getMaterial(16);
  v283 = Block::registerBlock<LightGemBlock,char const(&)[10],int,Material const&>("glowstone", &v1266, v282);
  v284 = (*(int (**)(void))(*(_DWORD *)v283 + 468))();
  *(_DWORD *)(v284 + 96) = 4;
  Block::mGlowStone = (*(int (**)(void))(*(_DWORD *)v284 + 460))();
  v1265 = 90;
  v285 = Block::registerBlock<PortalBlock,char const(&)[7],int>("portal", &v1265);
  v286 = (*(int (**)(void))(*(_DWORD *)v285 + 468))();
  v287 = (*(int (**)(void))(*(_DWORD *)v286 + 460))();
  *(_DWORD *)(v287 + 96) = 4;
  v288 = (*(int (**)(void))(*(_DWORD *)v287 + 488))();
  v1263 = 1;
  Block::mPortal = v288;
  v1264 = 91;
  v289 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<PumpkinBlock,char const(&)[12],int,bool>(
                                        "lit_pumpkin",
                                        &v1264,
                                        &v1263)
  v1259 = 1062787290;
  v1260 = 1056898816;
  v1261 = 1045220558;
  v1262 = 0;
  v290 = v289();
  v291 = (*(int (**)(void))(*(_DWORD *)v290 + 468))();
  v292 = (*(int (**)(void))(*(_DWORD *)v291 + 460))();
  *(_DWORD *)(v292 + 96) = 2;
  Block::mLitPumpkin = (*(int (**)(void))(*(_DWORD *)v292 + 488))();
  v1258 = 92;
  v293 = Block::registerBlock<CakeBlock,char const(&)[5],int>("cake", &v1258);
  v294 = (*(int (**)(void))(*(_DWORD *)v293 + 468))();
  *(_DWORD *)(v294 + 96) = 2;
  Block::mCake = (*(int (**)(void))(*(_DWORD *)v294 + 488))();
  v1257 = 93;
  v1256 = 0;
  v295 = Block::registerBlock<RepeaterBlock,char const(&)[19],int,bool>("unpowered_repeater", &v1257, &v1256);
  v296 = (*(int (**)(void))(*(_DWORD *)v295 + 468))();
  *(_DWORD *)(v296 + 96) = 4;
  v297 = (*(int (**)(void))(*(_DWORD *)v296 + 488))();
  Block::mUnpoweredRepeater = (*(int (**)(void))(*(_DWORD *)v297 + 488))();
  v1255 = 94;
  v1254 = 1;
  v298 = Block::registerBlock<RepeaterBlock,char const(&)[17],int,bool>("powered_repeater", &v1255, &v1254);
  v299 = (*(int (**)(void))(*(_DWORD *)v298 + 468))();
  *(_DWORD *)(v299 + 96) = 4;
  v300 = (*(int (**)(void))(*(_DWORD *)v299 + 460))();
  v301 = (*(int (**)(void))(*(_DWORD *)v300 + 488))();
  Block::mPoweredRepeater = (*(int (**)(void))(*(_DWORD *)v301 + 488))();
  v1253 = 95;
  v302 = Material::getMaterial(3);
  v303 = Block::registerBlock<InvisibleBlock,char const(&)[17],int,Material const&>("invisibleBedrock", &v1253, v302);
  v304 = (*(int (**)(void))(*(_DWORD *)v303 + 468))();
  v305 = (*(int (**)(void))(*(_DWORD *)v304 + 464))();
  v306 = (*(int (**)(void))(*(_DWORD *)v305 + 484))();
  *(_DWORD *)(v306 + 96) = 6;
  Block::mInvisibleBedrock = v306;
  v1252 = 96;
  v307 = Material::getMaterial(2);
  v308 = Block::registerBlock<TrapDoorBlock,char const(&)[9],int,Material const&>("trapdoor", &v1252, v307);
  v309 = (*(int (**)(void))(*(_DWORD *)v308 + 468))();
  *(_DWORD *)(v309 + 96) = 1;
  v310 = (*(int (**)(void))(*(_DWORD *)v309 + 488))();
  v311 = (*(int (**)(void))(*(_DWORD *)v310 + 488))();
  v312 = (*(int (**)(void))(*(_DWORD *)v311 + 488))();
  Block::mTrapdoor = (*(int (**)(void))(*(_DWORD *)v312 + 496))();
  v1251 = 97;
  v313 = Block::registerBlock<MonsterEggBlock,char const(&)[12],int>("monster_egg", &v1251);
  v314 = (*(int (**)(void))(*(_DWORD *)v313 + 468))();
  v315 = (*(int (**)(void))(*(_DWORD *)v314 + 488))();
  *(_DWORD *)(v315 + 96) = 2;
  Block::mMonsterStoneEgg = v315;
  v1250 = 98;
  v316 = Material::getMaterial(3);
  v317 = Block::registerBlock<MultiTextureBlock,char const(&)[11],int,Material const&>("stonebrick", &v1250, v316);
  v318 = (*(int (**)(void))(*(_DWORD *)v317 + 468))();
  v319 = (*(int (**)(void))(*(_DWORD *)v318 + 464))();
  *(_DWORD *)(v319 + 96) = 1;
  Block::mStoneBrick = (*(int (**)(void))(*(_DWORD *)v319 + 488))();
  v1249 = 99;
  v320 = Material::getMaterial(2);
  v1248 = 0;
  v321 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<HugeMushroomBlock,char const(&)[21],int,Material const&,HugeMushroomBlock::Type>(
                                        "brown_mushroom_block",
                                        &v1249,
                                        v320,
                                        &v1248)
  v1244 = 1058510744;
  v1245 = 1054530268;
  v1246 = 1050319515;
  v1247 = 0;
  v322 = v321();
  v323 = (*(int (**)(void))(*(_DWORD *)v322 + 468))();
  *(_DWORD *)(v323 + 96) = 2;
  Block::mBrownMushroomBlock = v323;
  v1243 = 100;
  v324 = Material::getMaterial(2);
  v1242 = 1;
  v325 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<HugeMushroomBlock,char const(&)[19],int,Material const&,HugeMushroomBlock::Type>(
                                        "red_mushroom_block",
                                        &v1243,
                                        v324,
                                        &v1242)
  v1238 = 1058642330;
  v1239 = 1045220558;
  v1240 = 1045220558;
  v1241 = 0;
  v326 = v325();
  v327 = (*(int (**)(void))(*(_DWORD *)v326 + 468))();
  *(_DWORD *)(v327 + 96) = 2;
  Block::mRedMushroomBlock = v327;
  v1237 = 101;
  v328 = Material::getMaterial(4);
  v1236 = 1;
  v1235 = 1;
  v329 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<ThinFenceBlock,char const(&)[10],int,Material const&,bool,bool>(
                                        "iron_bars",
                                        &v1237,
                                        v328,
                                        &v1236,
                                        &v1235)
  v1231 = 1059563432;
  v1232 = 1059563432;
  v1233 = 1059563432;
  v1234 = 0;
  v330 = v329();
  v331 = (*(int (**)(void))(*(_DWORD *)v330 + 468))();
  v332 = (*(int (**)(void))(*(_DWORD *)v331 + 464))();
  *(_DWORD *)(v332 + 96) = 1;
  Block::mIronFence = v332;
  v1230 = 102;
  v333 = Material::getMaterial(16);
  v1229 = 0;
  v1228 = 0;
  v334 = Block::registerBlock<ThinFenceBlock,char const(&)[11],int,Material const&,bool,bool>(
           "glass_pane",
           &v1230,
           v333,
           &v1229,
           &v1228);
  v335 = (*(int (**)(void))(*(_DWORD *)v334 + 468))();
  *(_DWORD *)(v335 + 96) = 1;
  Block::mGlassPane = v335;
  v1227 = 103;
  v336 = Block::registerBlock<MelonBlock,char const(&)[12],int>("melon_block", &v1227);
  v337 = *(int (**)(void))(*(_DWORD *)(*(int (**)(void))(*(_DWORD *)v336 + 468))() + 480);
  v1223 = 1056898816;
  v1224 = 1061997774;
  v1225 = 1036568778;
  v1226 = 0;
  v338 = v337();
  *(_DWORD *)(v338 + 96) = 2;
  Block::mMelon = v338;
  v1222 = 104;
  v339 = Block::registerBlock<StemBlock,char const(&)[13],int,Block const&>("pumpkin_stem", &v1222, Block::mPumpkin);
  v340 = (*(int (**)(void))(*(_DWORD *)v339 + 468))();
  *(_DWORD *)(v340 + 96) = 2;
  Block::mPumpkinStem = (*(int (**)(void))(*(_DWORD *)v340 + 488))();
  v1221 = 105;
  v341 = Block::registerBlock<StemBlock,char const(&)[11],int,Block const&>("melon_stem", &v1221, Block::mMelon);
  v342 = (*(int (**)(void))(*(_DWORD *)v341 + 468))();
  *(_DWORD *)(v342 + 96) = 2;
  Block::mMelonStem = (*(int (**)(void))(*(_DWORD *)v342 + 488))();
  v1220 = 106;
  v343 = Block::registerBlock<VineBlock,char const(&)[5],int>("vine", &v1220);
  v344 = (*(int (**)(void))(*(_DWORD *)v343 + 468))();
  *(_DWORD *)(v344 + 96) = 2;
  Block::mVine = (*(int (**)(void))(*(_DWORD *)v344 + 488))();
  v1219 = 107;
  v1218 = 0;
  v345 = Block::registerBlock<FenceGateBlock,char const(&)[11],int,WoodBlockType>("fence_gate", &v1219, &v1218);
  v346 = v345;
  v347 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v345 + 480);
  WoodBlock::getWoodMaterialColor((int)&v1217, 0);
  v348 = v347(v346, &v1217);
  v349 = (*(int (**)(void))(*(_DWORD *)v348 + 468))();
  v350 = (*(int (**)(void))(*(_DWORD *)v349 + 464))();
  *(_DWORD *)(v350 + 96) = 1;
  v351 = (*(int (**)(void))(*(_DWORD *)v350 + 488))();
  v352 = (*(int (**)(void))(*(_DWORD *)v351 + 488))();
  Block::mFenceGateOak = (*(int (**)(void))(*(_DWORD *)v352 + 488))();
  v1216 = 108;
  v353 = Block::registerBlock<StairBlock,char const(&)[13],int,Block const&>(
           "brick_stairs",
           &v1216,
           (Block *)Block::mBrick);
  *(_DWORD *)(v353 + 96) = 1;
  v354 = (*(int (**)(void))(*(_DWORD *)v353 + 488))();
  Block::mBrickStairs = (*(int (**)(void))(*(_DWORD *)v354 + 488))();
  v1215 = 109;
  v355 = Block::registerBlock<StairBlock,char const(&)[19],int,Block const&>(
           "stone_brick_stairs",
           &v1215,
           (Block *)Block::mStoneBrick);
  *(_DWORD *)(v355 + 96) = 1;
  v356 = (*(int (**)(void))(*(_DWORD *)v355 + 488))();
  Block::mStoneBrickStairs = (*(int (**)(void))(*(_DWORD *)v356 + 488))();
  v1214 = 110;
  v357 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<MyceliumBlock,char const(&)[9],int>("mycelium", &v1214) + 480);
  v1210 = 1056898816;
  v1211 = 1048378622;
  v1212 = 1060287155;
  v1213 = 0;
  v358 = v357();
  v359 = (*(int (**)(void))(*(_DWORD *)v358 + 468))();
  *(_DWORD *)(v359 + 96) = 2;
  Block::mMycelium = v359;
  v1209 = 111;
  v360 = Block::registerBlock<WaterlilyBlock,char const(&)[10],int>("waterlily", &v1209);
  v361 = (*(int (**)(void))(*(_DWORD *)v360 + 468))();
  *(_DWORD *)(v361 + 96) = 2;
  Block::mWaterlily = v361;
  v1208 = 112;
  v362 = Material::getMaterial(3);
  v363 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<Block,char const(&)[13],int,Material const&>(
                                        "nether_brick",
                                        &v1208,
                                        v362)
  v1204 = 1054925026;
  v1205 = 1006665857;
  v1206 = 0;
  v1207 = 0;
  v364 = v363();
  v365 = (*(int (**)(void))(*(_DWORD *)v364 + 468))();
  v366 = (*(int (**)(void))(*(_DWORD *)v365 + 464))();
  *(_DWORD *)(v366 + 96) = 1;
  Block::mNetherBrick = v366;
  v1203 = 113;
  v367 = Material::getMaterial(3);
  v368 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<FenceBlock,char const(&)[19],int,Material const&>(
                                        "nether_brick_fence",
                                        &v1203,
                                        v367)
  v1199 = 1054925026;
  v1200 = 1006665857;
  v1201 = 0;
  v1202 = 0;
  v369 = v368();
  v370 = (*(int (**)(void))(*(_DWORD *)v369 + 468))();
  v371 = (*(int (**)(void))(*(_DWORD *)v370 + 464))();
  *(_DWORD *)(v371 + 96) = 1;
  Block::mNetherFence = (*(int (**)(void))(*(_DWORD *)v371 + 488))();
  v1198 = 114;
  v372 = Block::registerBlock<StairBlock,char const(&)[20],int,Block const&>(
           "nether_brick_stairs",
           &v1198,
           (Block *)Block::mNetherBrick);
  *(_DWORD *)(v372 + 96) = 1;
  v373 = (*(int (**)(void))(*(_DWORD *)v372 + 488))();
  Block::mNetherBrickStairs = (*(int (**)(void))(*(_DWORD *)v373 + 488))();
  v1197 = 115;
  v374 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<NetherWartBlock,char const(&)[12],int>("nether_wart", &v1197)
  v1193 = 1058642330;
  v1194 = 1045220558;
  v1195 = 1045220558;
  v1196 = 0;
  v375 = v374();
  *(_DWORD *)(v375 + 96) = 1;
  Block::mNetherWart = (*(int (**)(void))(*(_DWORD *)v375 + 488))();
  v1192 = 116;
  v376 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<EnchantingTableBlock,char const(&)[17],int>(
                                        "enchanting_table",
                                        &v1192)
  v1188 = 1058642330;
  v1189 = 1045220558;
  v1190 = 1045220558;
  v1191 = 0;
  v377 = v376();
  v378 = (*(int (**)(void))(*(_DWORD *)v377 + 464))();
  *(_DWORD *)(v378 + 96) = 4;
  Block::mEnchantingTable = v378;
  v1187 = 117;
  v379 = Block::registerBlock<BrewingStandBlock,char const(&)[14],int>("brewing_stand", &v1187);
  v380 = *(int (**)(void))(*(_DWORD *)(*(int (**)(void))(*(_DWORD *)v379 + 468))() + 456);
  v1186 = 3;
  Block::mBrewingStand = v380();
  v1185 = 118;
  v381 = Block::registerBlock<CauldronBlock,char const(&)[9],int>("cauldron", &v1185);
  v382 = *(int (**)(void))(*(_DWORD *)(*(int (__fastcall **)(int, signed int))(*(_DWORD *)v381 + 468))(v381, 0x40000000)
                         + 456);
  v1184 = 3;
  v383 = v382();
  v384 = v383;
  *(_DWORD *)(v383 + 96) = 4;
  sub_21E94B4((void **)&v1183, "cauldron");
  v385 = Block::setNameId(v384, (const void **)&v1183);
  Block::mCauldron = (*(int (**)(void))(*(_DWORD *)v385 + 488))();
  v386 = (void *)(v1183 - 12);
  if ( (int *)(v1183 - 12) != &dword_28898C0 )
    v860 = (unsigned int *)(v1183 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v861 = __ldrex(v860);
      while ( __strex(v861 - 1, v860) );
    else
      v861 = (*v860)--;
    if ( v861 <= 0 )
      j_j_j_j__ZdlPv_9(v386);
  v1182 = 119;
  v387 = Block::registerBlock<EndPortalBlock,char const(&)[11],int>("end_portal", &v1182);
  v388 = (*(int (**)(void))(*(_DWORD *)v387 + 468))();
  v389 = (*(int (**)(void))(*(_DWORD *)v388 + 464))();
  *(_DWORD *)(v389 + 96) = 6;
  Block::mEndPortal = v389;
  v1181 = 120;
  v390 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<EndPortalFrameBlock,char const(&)[17],int>(
                                        "end_portal_frame",
                                        &v1181)
  v1177 = 1053609166;
  v1178 = 1056898816;
  v1179 = 1045220558;
  v1180 = 0;
  v391 = v390();
  v392 = (*(int (**)(void))(*(_DWORD *)v391 + 468))();
  v393 = (*(int (**)(void))(*(_DWORD *)v392 + 464))();
  *(_DWORD *)(v393 + 96) = 4;
  v394 = (*(int (**)(void))(*(_DWORD *)v393 + 488))();
  Block::mEndPortalFrame = (*(int (**)(void))(*(_DWORD *)v394 + 488))();
  v1176 = 121;
  v395 = Material::getMaterial(3);
  v396 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<Block,char const(&)[10],int,Material const&>(
                                        "end_stone",
                                        &v1176,
                                        v395)
  v1172 = 1064826873;
  v1173 = 1063905771;
  v1174 = 1059300260;
  v1175 = 0;
  v397 = v396();
  v398 = (*(int (**)(void))(*(_DWORD *)v397 + 468))();
  v399 = (*(int (**)(void))(*(_DWORD *)v398 + 464))();
  *(_DWORD *)(v399 + 96) = 2;
  Block::mEndStone = v399;
  v1171 = 122;
  v400 = Block::registerBlock<DragonEggBlock,char const(&)[11],int>("dragon_egg", &v1171);
  v401 = (*(int (**)(void))(*(_DWORD *)v400 + 468))();
  *(_DWORD *)(v401 + 96) = 2;
  v402 = (*(int (**)(void))(*(_DWORD *)v401 + 460))();
  v1169 = 0;
  Block::mDragonEgg = v402;
  v1170 = 123;
  v403 = Block::registerBlock<RedstoneLampBlock,char const(&)[14],int,bool>("redstone_lamp", &v1170, &v1169);
  v404 = (*(int (**)(void))(*(_DWORD *)v403 + 468))();
  *(_DWORD *)(v404 + 96) = 4;
  Block::mUnlitRedStoneLamp = v404;
  v1168 = 124;
  v1167 = 1;
  v405 = Block::registerBlock<RedstoneLampBlock,char const(&)[18],int,bool>("lit_redstone_lamp", &v1168, &v1167);
  Block::mLitRedStoneLamp = (*(int (**)(void))(*(_DWORD *)v405 + 468))();
  v1166 = 125;
  v406 = Block::registerBlock<DropperBlock,char const(&)[8],int>("dropper", &v1166);
  v407 = (*(int (**)(void))(*(_DWORD *)v406 + 468))();
  *(_DWORD *)(v407 + 96) = 4;
  v408 = (*(int (**)(void))(*(_DWORD *)v407 + 488))();
  Block::mDropper = (*(int (**)(void))(*(_DWORD *)v408 + 488))();
  v1165 = 126;
  v409 = Block::registerBlock<ActivatorRailBlock,char const(&)[15],int>("activator_rail", &v1165);
  v410 = (*(int (**)(void))(*(_DWORD *)v409 + 468))();
  *(_DWORD *)(v410 + 96) = 4;
  v411 = (*(int (**)(void))(*(_DWORD *)v410 + 488))();
  Block::mActivatorRail = (*(int (**)(void))(*(_DWORD *)v411 + 488))();
  v1164 = 127;
  v412 = Block::registerBlock<CocoaBlock,char const(&)[6],int>("cocoa", &v1164);
  v413 = (*(int (**)(void))(*(_DWORD *)v412 + 468))();
  v414 = (*(int (**)(void))(*(_DWORD *)v413 + 464))();
  *(_DWORD *)(v414 + 96) = 2;
  v415 = (*(int (**)(void))(*(_DWORD *)v414 + 488))();
  Block::mCocoa = (*(int (**)(void))(*(_DWORD *)v415 + 488))();
  v1163 = 128;
  v416 = Block::registerBlock<StairBlock,char const(&)[17],int,Block const&>(
           "sandstone_stairs",
           &v1163,
           (Block *)Block::mSandStone);
  *(_DWORD *)(v416 + 96) = 1;
  v417 = (*(int (**)(void))(*(_DWORD *)v416 + 488))();
  Block::mSandstoneStairs = (*(int (**)(void))(*(_DWORD *)v417 + 488))();
  v1162 = 129;
  v418 = Block::registerBlock<OreBlock,char const(&)[12],int>("emerald_ore", &v1162);
  *(_DWORD *)(v418 + 96) = 2;
  v419 = (*(int (**)(void))(*(_DWORD *)v418 + 468))();
  Block::mEmeraldOre = (*(int (**)(void))(*(_DWORD *)v419 + 464))();
  v1161 = 130;
  v420 = Block::registerBlock<EnderChestBlock,char const(&)[12],int>("ender_chest", &v1161);
  v421 = (*(int (**)(void))(*(_DWORD *)v420 + 468))();
  v422 = (*(int (**)(void))(*(_DWORD *)v421 + 464))();
  v423 = (*(int (**)(void))(*(_DWORD *)v422 + 460))();
  *(_DWORD *)(v423 + 96) = 4;
  Block::mEnderChest = (*(int (**)(void))(*(_DWORD *)v423 + 488))();
  v1160 = 131;
  v424 = Block::registerBlock<TripWireHookBlock,char const(&)[14],int>("tripwire_hook", &v1160);
  v425 = (*(int (**)(void))(*(_DWORD *)v424 + 468))();
  *(_DWORD *)(v425 + 96) = 4;
  v426 = (*(int (**)(void))(*(_DWORD *)v425 + 488))();
  v427 = (*(int (**)(void))(*(_DWORD *)v426 + 488))();
  Block::mTripwireHook = (*(int (**)(void))(*(_DWORD *)v427 + 488))();
  v1159 = 132;
  v428 = Block::registerBlock<TripWireBlock,char const(&)[9],int>("tripWire", &v1159);
  v429 = (*(int (**)(void))(*(_DWORD *)v428 + 468))();
  *(_DWORD *)(v429 + 96) = 4;
  v430 = (*(int (**)(void))(*(_DWORD *)v429 + 488))();
  v431 = (*(int (**)(void))(*(_DWORD *)v430 + 488))();
  v432 = (*(int (**)(void))(*(_DWORD *)v431 + 488))();
  Block::mTripwire = (*(int (**)(void))(*(_DWORD *)v432 + 488))();
  v1158 = 133;
  v433 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<MetalBlock,char const(&)[14],int>("emerald_block", &v1158)
  v1154 = 0;
  v1155 = 1062853083;
  v1156 = 1047062762;
  v1157 = 0;
  v434 = v433();
  *(_DWORD *)(v434 + 96) = 1;
  v435 = (*(int (**)(void))(*(_DWORD *)v434 + 468))();
  Block::mEmeraldBlock = (*(int (**)(void))(*(_DWORD *)v435 + 464))();
  v1153 = 134;
  v1152 = 1;
  v436 = Block::registerBlock<StairBlock,char const(&)[14],int,Block const&,int>(
           "spruce_stairs",
           &v1153,
           (Block *)Block::mWoodPlanks,
           &v1152);
  *(_DWORD *)(v436 + 96) = 1;
  v437 = (*(int (**)(void))(*(_DWORD *)v436 + 488))();
  Block::mSpruceStairs = (*(int (**)(void))(*(_DWORD *)v437 + 488))();
  v1151 = 135;
  v1150 = 2;
  v438 = Block::registerBlock<StairBlock,char const(&)[13],int,Block const&,int>(
           "birch_stairs",
           &v1151,
           &v1150);
  *(_DWORD *)(v438 + 96) = 1;
  v439 = (*(int (**)(void))(*(_DWORD *)v438 + 488))();
  Block::mBirchStairs = (*(int (**)(void))(*(_DWORD *)v439 + 488))();
  v1149 = 136;
  v1148 = 3;
  v440 = Block::registerBlock<StairBlock,char const(&)[14],int,Block const&,int>(
           "jungle_stairs",
           &v1149,
           &v1148);
  *(_DWORD *)(v440 + 96) = 1;
  v441 = (*(int (**)(void))(*(_DWORD *)v440 + 488))();
  Block::mJungleStairs = (*(int (**)(void))(*(_DWORD *)v441 + 488))();
  v1147 = 137;
  v1146 = 0;
  v442 = Block::registerBlock<CommandBlock,char const(&)[14],int,CommandBlockMode>("command_block", &v1147, &v1146);
  v443 = (*(int (**)(void))(*(_DWORD *)v442 + 468))();
  v444 = (*(int (**)(void))(*(_DWORD *)v443 + 464))();
  v445 = (*(int (**)(void))(*(_DWORD *)v444 + 484))();
  *(_DWORD *)(v445 + 96) = 5;
  v446 = (*(int (**)(void))(*(_DWORD *)v445 + 488))();
  Block::mCommandBlock = (*(int (**)(void))(*(_DWORD *)v446 + 488))();
  v1145 = 138;
  v447 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<BeaconBlock,char const(&)[7],int>("beacon", &v1145) + 480);
  v1141 = 1052293305;
  v1142 = 1062984669;
  v1143 = 1062589911;
  v1144 = 0;
  v448 = v447();
  v449 = (*(int (**)(void))(*(_DWORD *)v448 + 468))();
  v450 = (*(int (**)(void))(*(_DWORD *)v449 + 460))();
  *(_DWORD *)(v450 + 96) = 4;
  Block::mBeacon = (*(int (**)(void))(*(_DWORD *)v450 + 484))();
  v1140 = 139;
  v451 = Block::registerBlock<WallBlock,char const(&)[17],int,Block const&>(
           "cobblestone_wall",
           &v1140,
  *(_DWORD *)(v451 + 96) = 1;
  Block::mCobblestoneWall = (*(int (**)(void))(*(_DWORD *)v451 + 488))();
  v1139 = 140;
  v452 = Block::registerBlock<FlowerPotBlock,char const(&)[11],int>("flower_pot", &v1139);
  v453 = (*(int (**)(void))(*(_DWORD *)v452 + 468))();
  *(_DWORD *)(v453 + 96) = 4;
  Block::mFlowerPot = v453;
  v1138 = 141;
  v454 = Block::registerBlock<CarrotBlock,char const(&)[8],int>("carrots", &v1138);
  v455 = (*(int (**)(void))(*(_DWORD *)v454 + 468))();
  *(_DWORD *)(v455 + 96) = 2;
  Block::mCarrotCrop = (*(int (**)(void))(*(_DWORD *)v455 + 488))();
  v1137 = 142;
  v456 = Block::registerBlock<PotatoBlock,char const(&)[9],int>("potatoes", &v1137);
  v457 = (*(int (**)(void))(*(_DWORD *)v456 + 468))();
  *(_DWORD *)(v457 + 96) = 2;
  Block::mPotatoCrop = (*(int (**)(void))(*(_DWORD *)v457 + 488))();
  v1136 = 143;
  v458 = Block::registerBlock<WoodButtonBlock,char const(&)[14],int>("wooden_button", &v1136);
  v459 = (*(int (**)(void))(*(_DWORD *)v458 + 468))();
  *(_DWORD *)(v459 + 96) = 4;
  v460 = (*(int (**)(void))(*(_DWORD *)v459 + 488))();
  Block::mWoodButton = (*(int (**)(void))(*(_DWORD *)v460 + 488))();
  v1135 = 144;
  v461 = Block::registerBlock<SkullBlock,char const(&)[6],int>("skull", &v1135);
  v462 = (*(int (**)(void))(*(_DWORD *)v461 + 468))();
  *(_DWORD *)(v462 + 96) = 4;
  v463 = (*(int (**)(void))(*(_DWORD *)v462 + 488))();
  Block::mSkull = (*(int (**)(void))(*(_DWORD *)v463 + 488))();
  v1134 = 145;
  Material::getMaterial(4);
  v464 = Block::registerBlock<AnvilBlock,char const(&)[6],int,Material const&>("anvil", &v1134);
  v465 = *(int (**)(void))(*(_DWORD *)(*(int (**)(void))(*(_DWORD *)v464 + 468))() + 456);
  v1133 = 3;
  v466 = v465();
  *(_DWORD *)(v466 + 96) = 4;
  v467 = (*(int (**)(void))(*(_DWORD *)v466 + 464))();
  v468 = (*(int (**)(void))(*(_DWORD *)v467 + 488))();
  Block::mAnvil = (*(int (**)(void))(*(_DWORD *)v468 + 488))();
  v1132 = 146;
  v1131 = 1;
  v469 = Block::registerBlock<ChestBlock,char const(&)[14],int,ChestBlock::ChestType>("trapped_chest", &v1132, &v1131);
  *(_DWORD *)(v469 + 96) = 4;
  v470 = (*(int (**)(void))(*(_DWORD *)v469 + 468))();
  Block::mTrappedChest = (*(int (**)(void))(*(_DWORD *)v470 + 488))();
  v1130 = 147;
  v471 = Material::getMaterial(4);
  v1129 = 15;
  v472 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<WeightedPressurePlateBlock,char const(&)[30],int,Material const&,int>(
                                        "light_weighted_pressure_plate",
                                        &v1130,
                                        v471,
                                        &v1129)
  v1125 = 1065024252;
  v1126 = 1064234736;
  v1127 = 1050319515;
  v1128 = 0;
  v473 = v472();
  v474 = (*(int (**)(void))(*(_DWORD *)v473 + 468))();
  *(_DWORD *)(v474 + 96) = 4;
  v475 = (*(int (**)(void))(*(_DWORD *)v474 + 488))();
  Block::mLightWeightedPressurePlate = (*(int (**)(void))(*(_DWORD *)v475 + 496))();
  v1124 = 148;
  v476 = Material::getMaterial(4);
  v1123 = 150;
  v477 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<WeightedPressurePlateBlock,char const(&)[30],int,Material const&,int>(
                                        "heavy_weighted_pressure_plate",
                                        &v1124,
                                        v476,
                                        &v1123)
  v1119 = 1059563432;
  v1120 = 1059563432;
  v1121 = 1059563432;
  v1122 = 0;
  v478 = v477();
  v479 = (*(int (**)(void))(*(_DWORD *)v478 + 468))();
  *(_DWORD *)(v479 + 96) = 4;
  v480 = (*(int (**)(void))(*(_DWORD *)v479 + 488))();
  Block::mHeavyWeightedPressurePlate = (*(int (**)(void))(*(_DWORD *)v480 + 496))();
  v1118 = 149;
  v1117 = 0;
  v481 = Block::registerBlock<ComparatorBlock,char const(&)[21],int,bool>("unpowered_comparator", &v1118, &v1117);
  v482 = (*(int (**)(void))(*(_DWORD *)v481 + 468))();
  v483 = (*(int (**)(void))(*(_DWORD *)v482 + 488))();
  v484 = (*(int (**)(void))(*(_DWORD *)v483 + 488))();
  Block::mUnpoweredComparator = (*(int (**)(void))(*(_DWORD *)v484 + 488))();
  v1116 = 150;
  v1115 = 1;
  v485 = Block::registerBlock<ComparatorBlock,char const(&)[19],int,bool>("powered_comparator", &v1116, &v1115);
  v486 = (*(int (**)(void))(*(_DWORD *)v485 + 468))();
  v487 = (*(int (**)(void))(*(_DWORD *)v486 + 460))();
  v488 = (*(int (**)(void))(*(_DWORD *)v487 + 488))();
  v489 = (*(int (**)(void))(*(_DWORD *)v488 + 488))();
  v490 = (*(int (**)(void))(*(_DWORD *)v489 + 488))();
  v1113 = 0;
  Block::mPoweredComparator = v490;
  v1114 = 151;
  v491 = Block::registerBlock<DaylightDetectorBlock,char const(&)[18],int,bool>("daylight_detector", &v1114, &v1113);
  v492 = (*(int (**)(void))(*(_DWORD *)v491 + 468))();
  *(_DWORD *)(v492 + 96) = 4;
  v493 = (*(int (**)(void))(*(_DWORD *)v492 + 488))();
  Block::mDaylightDetector = (*(int (**)(void))(*(_DWORD *)v493 + 496))();
  v1112 = 152;
  v494 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<RedstoneBlock,char const(&)[15],int>(
                                        "redstone_block",
                                        &v1112)
  v1108 = 1065353216;
  v1109 = 0;
  v1110 = 0;
  v1111 = 0;
  v495 = v494();
  *(_DWORD *)(v495 + 96) = 1;
  v496 = (*(int (**)(void))(*(_DWORD *)v495 + 468))();
  Block::mRedstoneBlock = (*(int (**)(void))(*(_DWORD *)v496 + 464))();
  v1107 = 153;
  v497 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<OreBlock,char const(&)[11],int>("quartz_ore", &v1107) + 480);
  v1103 = 1054925026;
  v1104 = 1006665857;
  v1105 = 0;
  v1106 = 0;
  v498 = v497();
  v499 = (*(int (**)(void))(*(_DWORD *)v498 + 468))();
  v500 = (*(int (**)(void))(*(_DWORD *)v499 + 464))();
  *(_DWORD *)(v500 + 96) = 2;
  Block::mQuartzOre = v500;
  v1102 = 154;
  v501 = Block::registerBlock<HopperBlock,char const(&)[7],int>("hopper", &v1102);
  v502 = *(int (**)(void))(*(_DWORD *)(*(int (**)(void))(*(_DWORD *)v501 + 468))() + 456);
  v1101 = 3;
  v503 = v502();
  v504 = (*(int (**)(void))(*(_DWORD *)v503 + 464))();
  *(_DWORD *)(v504 + 96) = 4;
  v505 = (*(int (**)(void))(*(_DWORD *)v504 + 488))();
  Block::mHopper = (*(int (**)(void))(*(_DWORD *)v505 + 488))();
  v1100 = 155;
  v506 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<QuartzBlockBlock,char const(&)[13],int>(
                                        "quartz_block",
                                        &v1100)
  v1096 = 1065353216;
  v1097 = 1065155838;
  v1098 = 1064695287;
  v1099 = 0;
  v507 = v506();
  v508 = (*(int (**)(void))(*(_DWORD *)v507 + 468))();
  *(_DWORD *)(v508 + 96) = 1;
  v509 = (*(int (**)(void))(*(_DWORD *)v508 + 488))();
  v510 = (Block *)(*(int (**)(void))(*(_DWORD *)v509 + 488))();
  v1095 = 156;
  Block::mQuartzBlock = v510;
  v511 = Block::registerBlock<StairBlock,char const(&)[14],int,Block const&>("quartz_stairs", &v1095, v510);
  *(_DWORD *)(v511 + 96) = 1;
  v512 = (*(int (**)(void))(*(_DWORD *)v511 + 488))();
  Block::mQuartzStairs = (*(int (**)(void))(*(_DWORD *)v512 + 488))();
  v1094 = 157;
  v1093 = 1;
  v513 = Block::registerBlock<WoodSlabBlock,char const(&)[19],int,bool>("double_wooden_slab", &v1094, &v1093);
  v514 = (*(int (**)(void))(*(_DWORD *)v513 + 468))();
  v515 = (*(int (**)(void))(*(_DWORD *)v514 + 464))();
  *(_DWORD *)(v515 + 96) = 1;
  v516 = (*(int (**)(void))(*(_DWORD *)v515 + 488))();
  v517 = (*(int (**)(void))(*(_DWORD *)v516 + 488))();
  Block::mDoubleWoodenSlab = (*(int (**)(void))(*(_DWORD *)v517 + 496))();
  v1092 = 158;
  v1091 = 0;
  v518 = Block::registerBlock<WoodSlabBlock,char const(&)[12],int,bool>("wooden_slab", &v1092, &v1091);
  v519 = (*(int (**)(void))(*(_DWORD *)v518 + 468))();
  v520 = (*(int (**)(void))(*(_DWORD *)v519 + 464))();
  *(_DWORD *)(v520 + 96) = 1;
  v521 = (*(int (**)(void))(*(_DWORD *)v520 + 488))();
  v522 = (*(int (**)(void))(*(_DWORD *)v521 + 488))();
  Block::mWoodenSlab = (*(int (**)(void))(*(_DWORD *)v522 + 496))();
  v1090 = 159;
  v523 = Material::getMaterial(3);
  v524 = Block::registerBlock<ColoredBlock,char const(&)[22],int,Material const&>("stained_hardened_clay", &v1090, v523);
  v525 = (*(int (**)(void))(*(_DWORD *)v524 + 468))();
  v526 = (*(int (**)(void))(*(_DWORD *)v525 + 464))();
  *(_DWORD *)(v526 + 96) = 1;
  Block::mStainedClay = (*(int (**)(void))(*(_DWORD *)v526 + 488))();
  v1089 = 160;
  v527 = Material::getMaterial(16);
  v1088 = 0;
  v528 = Block::registerBlock<StainedGlassPaneBlock,char const(&)[19],int,Material const&,bool>(
           "stained_glass_pane",
           &v1089,
           v527,
           &v1088);
  v529 = (*(int (**)(void))(*(_DWORD *)v528 + 468))();
  *(_DWORD *)(v529 + 96) = 1;
  Block::mStainedGlassPane = (*(int (**)(void))(*(_DWORD *)v529 + 488))();
  v1087 = 161;
  v530 = Block::registerBlock<NewLeafBlock,char const(&)[8],int>("leaves2", &v1087);
  v531 = *(int (**)(void))(*(_DWORD *)(*(int (**)(void))(*(_DWORD *)v530 + 468))() + 456);
  v1086 = 1;
  v532 = v531();
  *(_DWORD *)(v532 + 96) = 2;
  v533 = (*(int (**)(void))(*(_DWORD *)v532 + 488))();
  v534 = (*(int (**)(void))(*(_DWORD *)v533 + 488))();
  Block::mLeaves2 = (*(int (**)(void))(*(_DWORD *)v534 + 488))();
  v1085 = 162;
  v535 = Block::registerBlock<NewLogBlock,char const(&)[5],int>("log2", &v1085);
  v536 = (*(int (**)(void))(*(_DWORD *)v535 + 468))();
  *(_DWORD *)(v536 + 96) = 2;
  v537 = (*(int (**)(void))(*(_DWORD *)v536 + 488))();
  Block::mLog2 = (*(int (**)(void))(*(_DWORD *)v537 + 488))();
  v1084 = 163;
  v1083 = 4;
  v538 = Block::registerBlock<StairBlock,char const(&)[14],int,Block const&,int>(
           "acacia_stairs",
           &v1084,
           &v1083);
  *(_DWORD *)(v538 + 96) = 1;
  v539 = (*(int (**)(void))(*(_DWORD *)v538 + 488))();
  v540 = (*(int (**)(void))(*(_DWORD *)v539 + 488))();
  v1081 = 5;
  Block::mAcaciaStairs = v540;
  v1082 = 164;
  v541 = Block::registerBlock<StairBlock,char const(&)[16],int,Block const&,int>(
           "dark_oak_stairs",
           &v1082,
           &v1081);
  *(_DWORD *)(v541 + 96) = 1;
  v542 = (*(int (**)(void))(*(_DWORD *)v541 + 488))();
  Block::mDarkOakStairs = (*(int (**)(void))(*(_DWORD *)v542 + 488))();
  v1080 = 165;
  v543 = Material::getMaterial(31);
  v544 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<SlimeBlock,char const(&)[6],int,Material const&>(
                                        "slime",
                                        &v1080,
                                        v543)
  v1076 = 1056898816;
  v1077 = 1060287155;
  v1078 = 1046536418;
  v1079 = 0;
  v545 = *(int (**)(void))(*(_DWORD *)v544() + 456);
  v1075 = Brightness::MIN;
  v546 = v545();
  *(_DWORD *)(v546 + 96) = 1;
  Block::mSlimeBlock = v546;
  v1074 = 167;
  v547 = Material::getMaterial(4);
  v548 = Block::registerBlock<TrapDoorBlock,char const(&)[14],int,Material const&>("iron_trapdoor", &v1074, v547);
  v549 = (*(int (**)(void))(*(_DWORD *)v548 + 468))();
  *(_DWORD *)(v549 + 96) = 1;
  v550 = (*(int (**)(void))(*(_DWORD *)v549 + 488))();
  v551 = (*(int (**)(void))(*(_DWORD *)v550 + 488))();
  v552 = (*(int (**)(void))(*(_DWORD *)v551 + 488))();
  Block::mIronTrapdoor = (*(int (**)(void))(*(_DWORD *)v552 + 496))();
  v1073 = 168;
  v553 = Block::registerBlock<PrismarineBlock,char const(&)[11],int>("prismarine", &v1073);
  v554 = (*(int (**)(void))(*(_DWORD *)v553 + 468))();
  v555 = (*(int (**)(void))(*(_DWORD *)v554 + 464))();
  *(_DWORD *)(v555 + 96) = 1;
  Block::mPrismarine = v555;
  v1072 = 169;
  v556 = Block::registerBlock<SeaLanternBlock,char const(&)[11],int>("seaLantern", &v1072);
  v557 = (*(int (**)(void))(*(_DWORD *)v556 + 468))();
  v558 = (*(int (**)(void))(*(_DWORD *)v557 + 464))();
  *(_DWORD *)(v558 + 96) = 4;
  Block::mSeaLantern = (*(int (**)(void))(*(_DWORD *)v558 + 460))();
  v1071 = 170;
  v559 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<HayBlockBlock,char const(&)[10],int>("hay_block", &v1071)
  v1067 = 1063642599;
  v1068 = 1063642599;
  v1069 = 1045220558;
  v1070 = 0;
  v560 = v559();
  v561 = (*(int (**)(void))(*(_DWORD *)v560 + 468))();
  *(_DWORD *)(v561 + 96) = 1;
  v562 = (*(int (**)(void))(*(_DWORD *)v561 + 488))();
  Block::mHayBlock = (*(int (**)(void))(*(_DWORD *)v562 + 488))();
  v1066 = 171;
  v563 = Block::registerBlock<WoolCarpetBlock,char const(&)[7],int>("carpet", &v1066);
  v564 = (*(int (**)(void))(*(_DWORD *)v563 + 468))();
  *(_DWORD *)(v564 + 96) = 1;
  v565 = *(int (**)(void))(*(_DWORD *)v564 + 456);
  v1065 = Brightness::MIN;
  v566 = v565();
  Block::mWoolCarpet = (*(int (**)(void))(*(_DWORD *)v566 + 496))();
  v1064 = 172;
  v567 = Material::getMaterial(3);
  v568 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<Block,char const(&)[14],int,Material const&>(
                                        "hardened_clay",
                                        &v1064,
                                        v567)
  v1060 = 1062787290;
  v1061 = 1056898816;
  v1062 = 1045220558;
  v1063 = 0;
  v569 = v568();
  v570 = (*(int (**)(void))(*(_DWORD *)v569 + 468))();
  v571 = (*(int (**)(void))(*(_DWORD *)v570 + 464))();
  *(_DWORD *)(v571 + 96) = 1;
  Block::mHardenedClay = v571;
  v1059 = 173;
  v572 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<MetalBlock,char const(&)[11],int>("coal_block", &v1059) + 480);
  v1055 = 1036568778;
  v1056 = 1036568778;
  v1057 = 1036568778;
  v1058 = 0;
  v573 = v572();
  v574 = (*(int (**)(void))(*(_DWORD *)v573 + 468))();
  v575 = (*(int (**)(void))(*(_DWORD *)v574 + 464))();
  *(_DWORD *)(v575 + 96) = 1;
  Block::mCoalBlock = v575;
  v1054 = 174;
  v1053 = 1;
  v576 = Block::registerBlock<IceBlock,char const(&)[11],int,bool>("packed_ice", &v1054, &v1053);
  v577 = (*(int (**)(void))(*(_DWORD *)v576 + 468))();
  *(_DWORD *)(v577 + 96) = 2;
  Block::mPackedIce = v577;
  v1052 = 175;
  v578 = Block::registerBlock<DoublePlantBlock,char const(&)[13],int>("double_plant", &v1052);
  v579 = (*(int (**)(void))(*(_DWORD *)v578 + 468))();
  *(_DWORD *)(v579 + 96) = 2;
  v580 = (*(int (**)(void))(*(_DWORD *)v579 + 488))();
  v581 = (*(int (**)(void))(*(_DWORD *)v580 + 492))();
  v582 = (*(int (**)(void))(*(_DWORD *)v581 + 488))();
  Block::mDoublePlant = (*(int (**)(void))(*(_DWORD *)v582 + 488))();
  v1051 = 176;
  v1050 = 1;
  v583 = Block::registerBlock<BannerBlock,char const(&)[16],int,bool>("standing_banner", &v1051, &v1050);
  v584 = (*(int (**)(void))(*(_DWORD *)v583 + 468))();
  *(_DWORD *)(v584 + 96) = 4;
  Block::mStandingBanner = (*(int (**)(void))(*(_DWORD *)v584 + 488))();
  v1049 = 177;
  v1048 = 0;
  v585 = Block::registerBlock<BannerBlock,char const(&)[12],int,bool>("wall_banner", &v1049, &v1048);
  v586 = (*(int (**)(void))(*(_DWORD *)v585 + 468))();
  *(_DWORD *)(v586 + 96) = 4;
  Block::mWallBanner = (*(int (**)(void))(*(_DWORD *)v586 + 488))();
  v1047 = 178;
  v1046 = 1;
  v587 = Block::registerBlock<DaylightDetectorBlock,char const(&)[27],int,bool>(
           "daylight_detector_inverted",
           &v1047,
           &v1046);
  v588 = (*(int (**)(void))(*(_DWORD *)v587 + 468))();
  *(_DWORD *)(v588 + 96) = 4;
  v589 = (*(int (**)(void))(*(_DWORD *)v588 + 488))();
  Block::mDaylightDetectorInverted = (*(int (**)(void))(*(_DWORD *)v589 + 496))();
  v1045 = 179;
  v590 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<SandStoneBlock,char const(&)[14],int>(
                                        "red_sandstone",
                                        &v1045)
  v1041 = 1062787290;
  v1042 = 1056898816;
  v1043 = 1045220558;
  v1044 = 0;
  v591 = v590();
  v592 = (*(int (**)(void))(*(_DWORD *)v591 + 468))();
  *(_DWORD *)(v592 + 96) = 1;
  v593 = (Block *)(*(int (**)(void))(*(_DWORD *)v592 + 488))();
  v1040 = 180;
  Block::mRedSandstone = v593;
  v594 = Block::registerBlock<StairBlock,char const(&)[21],int,Block const&>("red_sandstone_stairs", &v1040, v593);
  *(_DWORD *)(v594 + 96) = 1;
  v595 = (*(int (**)(void))(*(_DWORD *)v594 + 488))();
  Block::mRedSandstoneStairs = (*(int (**)(void))(*(_DWORD *)v595 + 488))();
  v1039 = 181;
  v1038 = 1;
  v596 = Block::registerBlock<StoneSlabBlock2,char const(&)[19],int,bool>("double_stone_slab2", &v1039, &v1038);
  v597 = (*(int (**)(void))(*(_DWORD *)v596 + 468))();
  v598 = (*(int (**)(void))(*(_DWORD *)v597 + 464))();
  *(_DWORD *)(v598 + 96) = 1;
  v599 = (*(int (**)(void))(*(_DWORD *)v598 + 488))();
  v600 = (*(int (**)(void))(*(_DWORD *)v599 + 488))();
  Block::mDoubleStoneSlab2 = (*(int (**)(void))(*(_DWORD *)v600 + 496))();
  v1037 = 182;
  v1036 = 0;
  v601 = Block::registerBlock<StoneSlabBlock2,char const(&)[12],int,bool>("stone_slab2", &v1037, &v1036);
  v602 = (*(int (**)(void))(*(_DWORD *)v601 + 468))();
  v603 = (*(int (**)(void))(*(_DWORD *)v602 + 464))();
  *(_DWORD *)(v603 + 96) = 1;
  v604 = (*(int (**)(void))(*(_DWORD *)v603 + 488))();
  v605 = (*(int (**)(void))(*(_DWORD *)v604 + 488))();
  Block::mStoneSlab2 = (*(int (**)(void))(*(_DWORD *)v605 + 496))();
  v1035 = 183;
  v1034 = 1;
  v606 = Block::registerBlock<FenceGateBlock,char const(&)[18],int,WoodBlockType>("spruce_fence_gate", &v1035, &v1034);
  v607 = v606;
  v608 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v606 + 480);
  WoodBlock::getWoodMaterialColor((int)&v1033, 1);
  v609 = v608(v607, &v1033);
  v610 = (*(int (**)(void))(*(_DWORD *)v609 + 468))();
  v611 = (*(int (**)(void))(*(_DWORD *)v610 + 464))();
  *(_DWORD *)(v611 + 96) = 1;
  v612 = (*(int (**)(void))(*(_DWORD *)v611 + 488))();
  v613 = (*(int (**)(void))(*(_DWORD *)v612 + 488))();
  Block::mSpuceFenceGate = (*(int (**)(void))(*(_DWORD *)v613 + 488))();
  v1032 = 184;
  v1031 = 2;
  v614 = Block::registerBlock<FenceGateBlock,char const(&)[17],int,WoodBlockType>("birch_fence_gate", &v1032, &v1031);
  v615 = v614;
  v616 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v614 + 480);
  WoodBlock::getWoodMaterialColor((int)&v1030, 2);
  v617 = v616(v615, &v1030);
  v618 = (*(int (**)(void))(*(_DWORD *)v617 + 468))();
  v619 = (*(int (**)(void))(*(_DWORD *)v618 + 464))();
  *(_DWORD *)(v619 + 96) = 1;
  v620 = (*(int (**)(void))(*(_DWORD *)v619 + 488))();
  v621 = (*(int (**)(void))(*(_DWORD *)v620 + 488))();
  Block::mBirchFenceGate = (*(int (**)(void))(*(_DWORD *)v621 + 488))();
  v1029 = 185;
  v1028 = 3;
  v622 = Block::registerBlock<FenceGateBlock,char const(&)[18],int,WoodBlockType>("jungle_fence_gate", &v1029, &v1028);
  v623 = v622;
  v624 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v622 + 480);
  WoodBlock::getWoodMaterialColor((int)&v1027, 3);
  v625 = v624(v623, &v1027);
  v626 = (*(int (**)(void))(*(_DWORD *)v625 + 468))();
  v627 = (*(int (**)(void))(*(_DWORD *)v626 + 464))();
  *(_DWORD *)(v627 + 96) = 1;
  v628 = (*(int (**)(void))(*(_DWORD *)v627 + 488))();
  v629 = (*(int (**)(void))(*(_DWORD *)v628 + 488))();
  Block::mJungleFenceGate = (*(int (**)(void))(*(_DWORD *)v629 + 488))();
  v1026 = 186;
  v1025 = 5;
  v630 = Block::registerBlock<FenceGateBlock,char const(&)[20],int,WoodBlockType>("dark_oak_fence_gate", &v1026, &v1025);
  v631 = v630;
  v632 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v630 + 480);
  WoodBlock::getWoodMaterialColor((int)&v1024, 5);
  v633 = v632(v631, &v1024);
  v634 = (*(int (**)(void))(*(_DWORD *)v633 + 468))();
  v635 = (*(int (**)(void))(*(_DWORD *)v634 + 464))();
  *(_DWORD *)(v635 + 96) = 1;
  v636 = (*(int (**)(void))(*(_DWORD *)v635 + 488))();
  v637 = (*(int (**)(void))(*(_DWORD *)v636 + 488))();
  Block::mDarkOakFenceGate = (*(int (**)(void))(*(_DWORD *)v637 + 488))();
  v1023 = 187;
  v1022 = 4;
  v638 = Block::registerBlock<FenceGateBlock,char const(&)[18],int,WoodBlockType>("acacia_fence_gate", &v1023, &v1022);
  v639 = v638;
  v640 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v638 + 480);
  WoodBlock::getWoodMaterialColor((int)&v1021, 4);
  v641 = v640(v639, &v1021);
  v642 = (*(int (**)(void))(*(_DWORD *)v641 + 468))();
  v643 = (*(int (**)(void))(*(_DWORD *)v642 + 464))();
  *(_DWORD *)(v643 + 96) = 1;
  v644 = (*(int (**)(void))(*(_DWORD *)v643 + 488))();
  v645 = (*(int (**)(void))(*(_DWORD *)v644 + 488))();
  Block::mAcaciaFenceGate = (*(int (**)(void))(*(_DWORD *)v645 + 488))();
  v1020 = 188;
  v1019 = 1;
  v646 = Block::registerBlock<CommandBlock,char const(&)[24],int,CommandBlockMode>(
           "repeating_command_block",
           &v1020,
           &v1019);
  v647 = (*(int (**)(void))(*(_DWORD *)v646 + 468))();
  v648 = (*(int (**)(void))(*(_DWORD *)v647 + 464))();
  v649 = (*(int (**)(void))(*(_DWORD *)v648 + 484))();
  *(_DWORD *)(v649 + 96) = 5;
  v650 = (*(int (**)(void))(*(_DWORD *)v649 + 488))();
  Block::mRepeatingCommandBlock = (*(int (**)(void))(*(_DWORD *)v650 + 488))();
  v1018 = 189;
  v1017 = 2;
  v651 = Block::registerBlock<CommandBlock,char const(&)[20],int,CommandBlockMode>(
           "chain_command_block",
           &v1018,
           &v1017);
  v652 = (*(int (**)(void))(*(_DWORD *)v651 + 468))();
  v653 = (*(int (**)(void))(*(_DWORD *)v652 + 464))();
  v654 = (*(int (**)(void))(*(_DWORD *)v653 + 484))();
  *(_DWORD *)(v654 + 96) = 5;
  v655 = (*(int (**)(void))(*(_DWORD *)v654 + 488))();
  Block::mChainCommandBlock = (*(int (**)(void))(*(_DWORD *)v655 + 488))();
  v1016 = 193;
  v656 = Material::getMaterial(2);
  v1015 = 1;
  v657 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<DoorBlock,char const(&)[12],int,Material const&,DoorBlock::DoorType>(
                                        "spruce_door",
                                        &v1016,
                                        v656,
                                        &v1015)
  v1011 = 1057063298;
  v1012 = 1051503789;
  v1013 = 1044694214;
  v1014 = 0;
  v658 = v657();
  v659 = (*(int (**)(void))(*(_DWORD *)v658 + 468))();
  *(_DWORD *)(v659 + 96) = 1;
  v660 = (*(int (**)(void))(*(_DWORD *)v659 + 488))();
  v661 = (*(int (**)(void))(*(_DWORD *)v660 + 488))();
  v662 = (*(int (**)(void))(*(_DWORD *)v661 + 488))();
  v663 = (*(int (**)(void))(*(_DWORD *)v662 + 492))();
  Block::mWoodenDoorSpruce = (*(int (**)(void))(*(_DWORD *)v663 + 488))();
  v1010 = 194;
  v664 = Material::getMaterial(2);
  v1009 = 2;
  v665 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<DoorBlock,char const(&)[11],int,Material const&,DoorBlock::DoorType>(
                                        "birch_door",
                                        &v1010,
                                        v664,
                                        &v1009)
  v1005 = 1064826873;
  v1006 = 1063905771;
  v1007 = 1059300260;
  v1008 = 0;
  v666 = v665();
  v667 = (*(int (**)(void))(*(_DWORD *)v666 + 468))();
  *(_DWORD *)(v667 + 96) = 1;
  v668 = (*(int (**)(void))(*(_DWORD *)v667 + 488))();
  v669 = (*(int (**)(void))(*(_DWORD *)v668 + 488))();
  v670 = (*(int (**)(void))(*(_DWORD *)v669 + 488))();
  v671 = (*(int (**)(void))(*(_DWORD *)v670 + 492))();
  Block::mWoodenDoorBirch = (*(int (**)(void))(*(_DWORD *)v671 + 488))();
  v1004 = 195;
  v672 = Material::getMaterial(2);
  v1003 = 3;
  v673 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<DoorBlock,char const(&)[12],int,Material const&,DoorBlock::DoorType>(
                                        "jungle_door",
                                        &v1004,
                                        v672,
                                        &v1003)
  v999 = 1058510744;
  v1000 = 1054530268;
  v1001 = 1050319515;
  v1002 = 0;
  v674 = v673();
  v675 = (*(int (**)(void))(*(_DWORD *)v674 + 468))();
  *(_DWORD *)(v675 + 96) = 1;
  v676 = (*(int (**)(void))(*(_DWORD *)v675 + 488))();
  v677 = (*(int (**)(void))(*(_DWORD *)v676 + 488))();
  v678 = (*(int (**)(void))(*(_DWORD *)v677 + 488))();
  v679 = (*(int (**)(void))(*(_DWORD *)v678 + 492))();
  Block::mWoodenDoorJungle = (*(int (**)(void))(*(_DWORD *)v679 + 488))();
  v998 = 196;
  v680 = Material::getMaterial(2);
  v997 = 4;
  v681 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<DoorBlock,char const(&)[12],int,Material const&,DoorBlock::DoorType>(
                                        "acacia_door",
                                        &v998,
                                        v680,
                                        &v997)
  v993 = 1062787290;
  v994 = 1056898816;
  v995 = 1045220558;
  v996 = 0;
  v682 = v681();
  v683 = (*(int (**)(void))(*(_DWORD *)v682 + 468))();
  *(_DWORD *)(v683 + 96) = 1;
  v684 = (*(int (**)(void))(*(_DWORD *)v683 + 488))();
  v685 = (*(int (**)(void))(*(_DWORD *)v684 + 488))();
  v686 = (*(int (**)(void))(*(_DWORD *)v685 + 488))();
  v687 = (*(int (**)(void))(*(_DWORD *)v686 + 492))();
  Block::mWoodenDoorAcacia = (*(int (**)(void))(*(_DWORD *)v687 + 488))();
  v992 = 197;
  v688 = Material::getMaterial(2);
  v991 = 5;
  v689 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<DoorBlock,char const(&)[14],int,Material const&,DoorBlock::DoorType>(
                                        "dark_oak_door",
                                        &v992,
                                        v688,
                                        &v991)
  v987 = 1053609166;
  v988 = 1050187929;
  v989 = 1045220558;
  v990 = 0;
  v690 = v689();
  v691 = (*(int (**)(void))(*(_DWORD *)v690 + 468))();
  *(_DWORD *)(v691 + 96) = 1;
  v692 = (*(int (**)(void))(*(_DWORD *)v691 + 488))();
  v693 = (*(int (**)(void))(*(_DWORD *)v692 + 488))();
  v694 = (*(int (**)(void))(*(_DWORD *)v693 + 488))();
  v695 = (*(int (**)(void))(*(_DWORD *)v694 + 492))();
  Block::mWoodenDoorDarkOak = (*(int (**)(void))(*(_DWORD *)v695 + 488))();
  v986 = 198;
  v696 = Block::registerBlock<GrassPathBlock,char const(&)[11],int>("grass_path", &v986);
  Block::mGrassPathBlock = (*(int (**)(void))(*(_DWORD *)v696 + 468))();
  v985 = 199;
  v697 = Block::registerBlock<ItemFrameBlock,char const(&)[6],int>("frame", &v985);
  *(_DWORD *)(v697 + 96) = 4;
  v698 = (*(int (**)(void))(*(_DWORD *)v697 + 468))();
  Block::mItemFrame = (*(int (**)(void))(*(_DWORD *)v698 + 488))();
  v984 = 200;
  v699 = Block::registerBlock<ChorusFlowerBlock,char const(&)[14],int>("chorus_flower", &v984);
  v700 = (*(int (**)(void))(*(_DWORD *)v699 + 468))();
  *(_DWORD *)(v700 + 96) = 2;
  Block::mChorusFlowerBlock = v700;
  v983 = 201;
  v701 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<QuartzBlockBlock,char const(&)[13],int>(
                                        "purpur_block",
                                        &v983)
  v979 = 1060287155;
  v980 = 1050187929;
  v981 = 1062787290;
  v982 = 0;
  v702 = v701();
  v703 = (*(int (**)(void))(*(_DWORD *)v702 + 468))();
  *(_DWORD *)(v703 + 96) = 1;
  v704 = (*(int (**)(void))(*(_DWORD *)v703 + 464))();
  v705 = (*(int (**)(void))(*(_DWORD *)v704 + 488))();
  v706 = (Block *)(*(int (**)(void))(*(_DWORD *)v705 + 488))();
  v978 = 203;
  Block::mPurpurBlock = v706;
  v707 = Block::registerBlock<StairBlock,char const(&)[14],int,Block const&>("purpur_stairs", &v978, v706);
  *(_DWORD *)(v707 + 96) = 1;
  v708 = (*(int (**)(void))(*(_DWORD *)v707 + 488))();
  Block::mPurpurStairs = (*(int (**)(void))(*(_DWORD *)v708 + 488))();
  v977 = 205;
  v709 = Block::registerBlock<UndyedShulkerBoxBlock,char const(&)[19],int>("undyed_shulker_box", &v977);
  v710 = (*(int (**)(void))(*(_DWORD *)v709 + 468))();
  *(_DWORD *)(v710 + 96) = 4;
  Block::mUndyedShulkerBox = v710;
  v976 = 206;
  v711 = Material::getMaterial(3);
  v712 = Block::registerBlock<Block,char const(&)[11],int,Material const&>("end_bricks", &v976, v711);
  v713 = (*(int (**)(void))(*(_DWORD *)v712 + 468))();
  *(_DWORD *)(v713 + 96) = 1;
  v974 = 0;
  Block::mEndBrick = v713;
  v975 = 207;
  v714 = Block::registerBlock<FrostedIceBlock,char const(&)[12],int,bool>("frosted_ice", &v975, &v974);
  v715 = *(int (**)(void))(*(_DWORD *)(*(int (**)(void))(*(_DWORD *)v714 + 468))() + 456);
  v973 = 3;
  v716 = v715();
  *(_DWORD *)(v716 + 96) = 6;
  Block::mFrostedIce = v716;
  v972 = 208;
  v717 = Block::registerBlock<EndRodBlock,char const(&)[8],int>("end_rod", &v972);
  v718 = (*(int (**)(void))(*(_DWORD *)v717 + 468))();
  v719 = (*(int (**)(void))(*(_DWORD *)v718 + 460))();
  *(_DWORD *)(v719 + 96) = 4;
  Block::mEndRod = v719;
  v971 = 209;
  v720 = Block::registerBlock<EndGatewayBlock,char const(&)[12],int>("end_gateway", &v971);
  v721 = (*(int (**)(void))(*(_DWORD *)v720 + 468))();
  v722 = (*(int (**)(void))(*(_DWORD *)v721 + 464))();
  *(_DWORD *)(v722 + 96) = 6;
  Block::mEndGateway = v722;
  v970 = 213;
  v723 = Block::registerBlock<MagmaBlock,char const(&)[6],int>("magma", &v970);
  v724 = (*(int (**)(void))(*(_DWORD *)v723 + 468))();
  v725 = (*(int (**)(void))(*(_DWORD *)v724 + 464))();
  v726 = (*(int (**)(void))(*(_DWORD *)v725 + 460))();
  *(_DWORD *)(v726 + 96) = 2;
  Block::mMagmaBlock = (*(int (**)(void))(*(_DWORD *)v726 + 484))();
  v969 = 214;
  v727 = Material::getMaterial(35);
  v728 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<Block,char const(&)[18],int,Material const&>(
                                        "nether_wart_block",
                                        &v969,
                                        v727)
  v965 = 1058642330;
  v966 = 1045220558;
  v967 = 1045220558;
  v968 = 0;
  v729 = v728();
  v730 = (*(int (**)(void))(*(_DWORD *)v729 + 468))();
  *(_DWORD *)(v730 + 96) = 1;
  Block::mNetherWartBlock = v730;
  v964 = 215;
  v731 = Material::getMaterial(3);
  v732 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<Block,char const(&)[17],int,Material const&>(
                                        "red_nether_brick",
                                        &v964,
                                        v731)
  v960 = 1058642330;
  v961 = 1045220558;
  v962 = 1045220558;
  v963 = 0;
  v733 = v732();
  v734 = (*(int (**)(void))(*(_DWORD *)v733 + 468))();
  v735 = (*(int (**)(void))(*(_DWORD *)v734 + 464))();
  *(_DWORD *)(v735 + 96) = 1;
  Block::mRedNetherBrick = v735;
  v959 = 216;
  v736 = Material::getMaterial(3);
  v737 = Block::registerBlock<RotatedPillarBlock,char const(&)[11],int,Material const&>("bone_block", &v959, v736);
  v738 = (*(int (**)(void))(*(_DWORD *)v737 + 468))();
  *(_DWORD *)(v738 + 96) = 1;
  v739 = (*(int (**)(void))(*(_DWORD *)v738 + 488))();
  Block::mBoneBlock = (*(int (**)(void))(*(_DWORD *)v739 + 488))();
  v958 = 218;
  v740 = Block::registerBlock<ShulkerBoxBlock,char const(&)[12],int>("shulker_box", &v958);
  v741 = (*(int (**)(void))(*(_DWORD *)v740 + 468))();
  *(_DWORD *)(v741 + 96) = 4;
  Block::mShulkerBox = v741;
  v957 = 219;
  v742 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[25],int>("purple_glazed_terracotta", &v957);
  v743 = (*(int (**)(void))(*(_DWORD *)v742 + 468))();
  sub_21E94B4((void **)&v956, "glazedTerracotta.purple");
  v744 = Block::setNameId(v743, (const void **)&v956);
  *(_DWORD *)(v744 + 96) = 1;
  Block::mGlazedTerracottaPurple = (*(int (**)(void))(*(_DWORD *)v744 + 488))();
  v745 = (void *)(v956 - 12);
  if ( (int *)(v956 - 12) != &dword_28898C0 )
    v862 = (unsigned int *)(v956 - 4);
        v863 = __ldrex(v862);
      while ( __strex(v863 - 1, v862) );
      v863 = (*v862)--;
    if ( v863 <= 0 )
      j_j_j_j__ZdlPv_9(v745);
  v955 = 220;
  v746 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[24],int>("white_glazed_terracotta", &v955);
  v747 = (*(int (**)(void))(*(_DWORD *)v746 + 468))();
  sub_21E94B4((void **)&v954, "glazedTerracotta.white");
  v748 = Block::setNameId(v747, (const void **)&v954);
  *(_DWORD *)(v748 + 96) = 1;
  Block::mGlazedTerracottaWhite = (*(int (**)(void))(*(_DWORD *)v748 + 488))();
  v749 = (void *)(v954 - 12);
  if ( (int *)(v954 - 12) != &dword_28898C0 )
    v864 = (unsigned int *)(v954 - 4);
        v865 = __ldrex(v864);
      while ( __strex(v865 - 1, v864) );
      v865 = (*v864)--;
    if ( v865 <= 0 )
      j_j_j_j__ZdlPv_9(v749);
  v953 = 221;
  v750 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[25],int>("orange_glazed_terracotta", &v953);
  v751 = (*(int (**)(void))(*(_DWORD *)v750 + 468))();
  sub_21E94B4((void **)&v952, "glazedTerracotta.orange");
  v752 = Block::setNameId(v751, (const void **)&v952);
  *(_DWORD *)(v752 + 96) = 1;
  Block::mGlazedTerracottaOrange = (*(int (**)(void))(*(_DWORD *)v752 + 488))();
  v753 = (void *)(v952 - 12);
  if ( (int *)(v952 - 12) != &dword_28898C0 )
    v866 = (unsigned int *)(v952 - 4);
        v867 = __ldrex(v866);
      while ( __strex(v867 - 1, v866) );
      v867 = (*v866)--;
    if ( v867 <= 0 )
      j_j_j_j__ZdlPv_9(v753);
  v951 = 222;
  v754 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[26],int>("magenta_glazed_terracotta", &v951);
  v755 = (*(int (**)(void))(*(_DWORD *)v754 + 468))();
  sub_21E94B4((void **)&v950, "glazedTerracotta.magenta");
  v756 = Block::setNameId(v755, (const void **)&v950);
  *(_DWORD *)(v756 + 96) = 1;
  Block::mGlazedTerracottaMagenta = (*(int (**)(void))(*(_DWORD *)v756 + 488))();
  v757 = (void *)(v950 - 12);
  if ( (int *)(v950 - 12) != &dword_28898C0 )
    v868 = (unsigned int *)(v950 - 4);
        v869 = __ldrex(v868);
      while ( __strex(v869 - 1, v868) );
      v869 = (*v868)--;
    if ( v869 <= 0 )
      j_j_j_j__ZdlPv_9(v757);
  v949 = 223;
  v758 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[29],int>("light_blue_glazed_terracotta", &v949);
  v759 = (*(int (**)(void))(*(_DWORD *)v758 + 468))();
  sub_21E94B4((void **)&v948, "glazedTerracotta.light_blue");
  v760 = Block::setNameId(v759, (const void **)&v948);
  *(_DWORD *)(v760 + 96) = 1;
  Block::mGlazedTerracottaLightBlue = (*(int (**)(void))(*(_DWORD *)v760 + 488))();
  v761 = (void *)(v948 - 12);
  if ( (int *)(v948 - 12) != &dword_28898C0 )
    v870 = (unsigned int *)(v948 - 4);
        v871 = __ldrex(v870);
      while ( __strex(v871 - 1, v870) );
      v871 = (*v870)--;
    if ( v871 <= 0 )
      j_j_j_j__ZdlPv_9(v761);
  v947 = 224;
  v762 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[25],int>("yellow_glazed_terracotta", &v947);
  v763 = (*(int (**)(void))(*(_DWORD *)v762 + 468))();
  sub_21E94B4((void **)&v946, "glazedTerracotta.yellow");
  v764 = Block::setNameId(v763, (const void **)&v946);
  *(_DWORD *)(v764 + 96) = 1;
  Block::mGlazedTerracottaYellow = (*(int (**)(void))(*(_DWORD *)v764 + 488))();
  v765 = (void *)(v946 - 12);
  if ( (int *)(v946 - 12) != &dword_28898C0 )
    v872 = (unsigned int *)(v946 - 4);
        v873 = __ldrex(v872);
      while ( __strex(v873 - 1, v872) );
      v873 = (*v872)--;
    if ( v873 <= 0 )
      j_j_j_j__ZdlPv_9(v765);
  v945 = 225;
  v766 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[23],int>("lime_glazed_terracotta", &v945);
  v767 = (*(int (**)(void))(*(_DWORD *)v766 + 468))();
  sub_21E94B4((void **)&v944, "glazedTerracotta.lime");
  v768 = Block::setNameId(v767, (const void **)&v944);
  *(_DWORD *)(v768 + 96) = 1;
  Block::mGlazedTerracottaLime = (*(int (**)(void))(*(_DWORD *)v768 + 488))();
  v769 = (void *)(v944 - 12);
  if ( (int *)(v944 - 12) != &dword_28898C0 )
    v874 = (unsigned int *)(v944 - 4);
        v875 = __ldrex(v874);
      while ( __strex(v875 - 1, v874) );
      v875 = (*v874)--;
    if ( v875 <= 0 )
      j_j_j_j__ZdlPv_9(v769);
  v943 = 226;
  v770 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[23],int>("pink_glazed_terracotta", &v943);
  v771 = (*(int (**)(void))(*(_DWORD *)v770 + 468))();
  sub_21E94B4((void **)&v942, "glazedTerracotta.pink");
  v772 = Block::setNameId(v771, (const void **)&v942);
  *(_DWORD *)(v772 + 96) = 1;
  Block::mGlazedTerracottaPink = (*(int (**)(void))(*(_DWORD *)v772 + 488))();
  v773 = (void *)(v942 - 12);
  if ( (int *)(v942 - 12) != &dword_28898C0 )
    v876 = (unsigned int *)(v942 - 4);
        v877 = __ldrex(v876);
      while ( __strex(v877 - 1, v876) );
      v877 = (*v876)--;
    if ( v877 <= 0 )
      j_j_j_j__ZdlPv_9(v773);
  v941 = 227;
  v774 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[23],int>("gray_glazed_terracotta", &v941);
  v775 = (*(int (**)(void))(*(_DWORD *)v774 + 468))();
  sub_21E94B4((void **)&v940, "glazedTerracotta.gray");
  v776 = Block::setNameId(v775, (const void **)&v940);
  *(_DWORD *)(v776 + 96) = 1;
  Block::mGlazedTerracottaGray = (*(int (**)(void))(*(_DWORD *)v776 + 488))();
  v777 = (void *)(v940 - 12);
  if ( (int *)(v940 - 12) != &dword_28898C0 )
    v878 = (unsigned int *)(v940 - 4);
        v879 = __ldrex(v878);
      while ( __strex(v879 - 1, v878) );
      v879 = (*v878)--;
    if ( v879 <= 0 )
      j_j_j_j__ZdlPv_9(v777);
  v939 = 228;
  v778 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[25],int>("silver_glazed_terracotta", &v939);
  v779 = (*(int (**)(void))(*(_DWORD *)v778 + 468))();
  sub_21E94B4((void **)&v938, "glazedTerracotta.silver");
  v780 = Block::setNameId(v779, (const void **)&v938);
  *(_DWORD *)(v780 + 96) = 1;
  Block::mGlazedTerracottaSilver = (*(int (**)(void))(*(_DWORD *)v780 + 488))();
  v781 = (void *)(v938 - 12);
  if ( (int *)(v938 - 12) != &dword_28898C0 )
    v880 = (unsigned int *)(v938 - 4);
        v881 = __ldrex(v880);
      while ( __strex(v881 - 1, v880) );
      v881 = (*v880)--;
    if ( v881 <= 0 )
      j_j_j_j__ZdlPv_9(v781);
  v937 = 229;
  v782 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[23],int>("cyan_glazed_terracotta", &v937);
  v783 = (*(int (**)(void))(*(_DWORD *)v782 + 468))();
  sub_21E94B4((void **)&v936, "glazedTerracotta.cyan");
  v784 = Block::setNameId(v783, (const void **)&v936);
  *(_DWORD *)(v784 + 96) = 1;
  Block::mGlazedTerracottaCyan = (*(int (**)(void))(*(_DWORD *)v784 + 488))();
  v785 = (void *)(v936 - 12);
  if ( (int *)(v936 - 12) != &dword_28898C0 )
    v882 = (unsigned int *)(v936 - 4);
        v883 = __ldrex(v882);
      while ( __strex(v883 - 1, v882) );
      v883 = (*v882)--;
    if ( v883 <= 0 )
      j_j_j_j__ZdlPv_9(v785);
  v935 = 231;
  v786 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[23],int>("blue_glazed_terracotta", &v935);
  v787 = (*(int (**)(void))(*(_DWORD *)v786 + 468))();
  sub_21E94B4((void **)&v934, "glazedTerracotta.blue");
  v788 = Block::setNameId(v787, (const void **)&v934);
  *(_DWORD *)(v788 + 96) = 1;
  Block::mGlazedTerracottaBlue = (*(int (**)(void))(*(_DWORD *)v788 + 488))();
  v789 = (void *)(v934 - 12);
  if ( (int *)(v934 - 12) != &dword_28898C0 )
    v884 = (unsigned int *)(v934 - 4);
        v885 = __ldrex(v884);
      while ( __strex(v885 - 1, v884) );
      v885 = (*v884)--;
    if ( v885 <= 0 )
      j_j_j_j__ZdlPv_9(v789);
  v933 = 232;
  v790 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[24],int>("brown_glazed_terracotta", &v933);
  v791 = (*(int (**)(void))(*(_DWORD *)v790 + 468))();
  sub_21E94B4((void **)&v932, "glazedTerracotta.brown");
  v792 = Block::setNameId(v791, (const void **)&v932);
  *(_DWORD *)(v792 + 96) = 1;
  Block::mGlazedTerracottaBrown = (*(int (**)(void))(*(_DWORD *)v792 + 488))();
  v793 = (void *)(v932 - 12);
  if ( (int *)(v932 - 12) != &dword_28898C0 )
    v886 = (unsigned int *)(v932 - 4);
        v887 = __ldrex(v886);
      while ( __strex(v887 - 1, v886) );
      v887 = (*v886)--;
    if ( v887 <= 0 )
      j_j_j_j__ZdlPv_9(v793);
  v931 = 233;
  v794 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[24],int>("green_glazed_terracotta", &v931);
  v795 = (*(int (**)(void))(*(_DWORD *)v794 + 468))();
  sub_21E94B4((void **)&v930, "glazedTerracotta.green");
  v796 = Block::setNameId(v795, (const void **)&v930);
  *(_DWORD *)(v796 + 96) = 1;
  Block::mGlazedTerracottaGreen = (*(int (**)(void))(*(_DWORD *)v796 + 488))();
  v797 = (void *)(v930 - 12);
  if ( (int *)(v930 - 12) != &dword_28898C0 )
    v888 = (unsigned int *)(v930 - 4);
        v889 = __ldrex(v888);
      while ( __strex(v889 - 1, v888) );
      v889 = (*v888)--;
    if ( v889 <= 0 )
      j_j_j_j__ZdlPv_9(v797);
  v929 = 234;
  v798 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[22],int>("red_glazed_terracotta", &v929);
  v799 = (*(int (**)(void))(*(_DWORD *)v798 + 468))();
  sub_21E94B4((void **)&v928, "glazedTerracotta.red");
  v800 = Block::setNameId(v799, (const void **)&v928);
  *(_DWORD *)(v800 + 96) = 1;
  Block::mGlazedTerracottaRed = (*(int (**)(void))(*(_DWORD *)v800 + 488))();
  v801 = (void *)(v928 - 12);
  if ( (int *)(v928 - 12) != &dword_28898C0 )
    v890 = (unsigned int *)(v928 - 4);
        v891 = __ldrex(v890);
      while ( __strex(v891 - 1, v890) );
      v891 = (*v890)--;
    if ( v891 <= 0 )
      j_j_j_j__ZdlPv_9(v801);
  v927 = 235;
  v802 = Block::registerBlock<GlazedTerracottaBlock,char const(&)[24],int>("black_glazed_terracotta", &v927);
  v803 = (*(int (**)(void))(*(_DWORD *)v802 + 468))();
  sub_21E94B4((void **)&v926, "glazedTerracotta.black");
  v804 = Block::setNameId(v803, (const void **)&v926);
  *(_DWORD *)(v804 + 96) = 1;
  Block::mGlazedTerracottaBlack = (*(int (**)(void))(*(_DWORD *)v804 + 488))();
  v805 = (void *)(v926 - 12);
  if ( (int *)(v926 - 12) != &dword_28898C0 )
    v892 = (unsigned int *)(v926 - 4);
        v893 = __ldrex(v892);
      while ( __strex(v893 - 1, v892) );
      v893 = (*v892)--;
    if ( v893 <= 0 )
      j_j_j_j__ZdlPv_9(v805);
  v925 = 236;
  v806 = Block::registerBlock<ConcreteBlock,char const(&)[9],int>("concrete", &v925);
  v807 = (*(int (**)(void))(*(_DWORD *)v806 + 468))();
  v808 = 1;
  *(_DWORD *)(v807 + 96) = 1;
  Block::mConcrete = (*(int (**)(void))(*(_DWORD *)v807 + 488))();
  v924 = 237;
  v809 = Block::registerBlock<ConcretePowderBlock,char const(&)[15],int>("concretePowder", &v924);
  v810 = (*(int (**)(void))(*(_DWORD *)v809 + 468))();
  *(_DWORD *)(v810 + 96) = 1;
  Block::mConcretePowder = (*(int (**)(void))(*(_DWORD *)v810 + 488))();
  v923 = 240;
  v811 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<ChorusPlantBlock,char const(&)[13],int>(
                                        "chorus_plant",
                                        &v923)
  v919 = 1056898816;
  v920 = 1048378622;
  v921 = 1060287155;
  v922 = 0;
  v812 = v811();
  v813 = (*(int (**)(void))(*(_DWORD *)v812 + 468))();
  *(_DWORD *)(v813 + 96) = 2;
  Block::mChorusPlantBlock = v813;
  v918 = 241;
  v814 = Material::getMaterial(16);
  v815 = Block::registerBlock<StainedGlassBlock,char const(&)[14],int,Material const&>("stained_glass", &v918, v814);
  v816 = (*(int (**)(void))(*(_DWORD *)v815 + 468))();
  *(_DWORD *)(v816 + 96) = 1;
  Block::mStainedGlass = (*(int (**)(void))(*(_DWORD *)v816 + 488))();
  v917 = 243;
  v817 = *(int (**)(void))(*(_DWORD *)Block::registerBlock<PodzolBlock,char const(&)[7],int>("podzol", &v917) + 480);
  v913 = 1058510744;
  v914 = 1054530268;
  v915 = 1050319515;
  v916 = 0;
  v818 = v817();
  v819 = (*(int (**)(void))(*(_DWORD *)v818 + 468))();
  *(_DWORD *)(v819 + 96) = 2;
  Block::mPodzol = v819;
  v912 = 244;
  v820 = Block::registerBlock<BeetrootBlock,char const(&)[9],int>("beetroot", &v912);
  v821 = (*(int (**)(void))(*(_DWORD *)v820 + 468))();
  *(_DWORD *)(v821 + 96) = 2;
  Block::mBeetrootCrop = (*(int (**)(void))(*(_DWORD *)v821 + 488))();
  v911 = 245;
  v822 = Block::registerBlock<StonecutterBlock,char const(&)[12],int>("stonecutter", &v911);
  v823 = (*(int (**)(void))(*(_DWORD *)v822 + 468))();
  *(_DWORD *)(v823 + 96) = 4;
  Block::mStonecutterBench = v823;
  v909 = 1;
  v910 = 246;
  v824 = Block::registerBlock<ObsidianBlock,char const(&)[16],int,bool>("glowingobsidian", &v910, &v909);
  v825 = (*(int (**)(void))(*(_DWORD *)v824 + 468))();
  v826 = (*(int (**)(void))(*(_DWORD *)v825 + 460))();
  v827 = (*(int (**)(void))(*(_DWORD *)v826 + 464))();
  *(_DWORD *)(v827 + 96) = 6;
  Block::mGlowingObsidian = v827;
  v908 = 247;
  v828 = Material::getMaterial(4);
  v829 = Block::registerBlock<NetherReactorBlock,char const(&)[14],int,Material const&>("netherreactor", &v908, v828);
  v830 = (*(int (**)(void))(*(_DWORD *)v829 + 468))();
  *(_DWORD *)(v830 + 96) = 6;
  Block::mNetherReactor = v830;
  v907 = 248;
  v831 = Material::getMaterial(1);
  v832 = Block::registerBlock<Block,char const(&)[12],int,Material const&>("info_update", &v907, v831);
  v833 = (*(int (**)(void))(*(_DWORD *)v832 + 468))();
  *(_DWORD *)(v833 + 96) = 6;
  Block::mInfoUpdateGame1 = v833;
  v906 = 249;
  v834 = Material::getMaterial(1);
  v835 = Block::registerBlock<Block,char const(&)[13],int,Material const&>("info_update2", &v906, v834);
  v836 = (*(int (**)(void))(*(_DWORD *)v835 + 468))();
  *(_DWORD *)(v836 + 96) = 6;
  Block::mInfoUpdateGame2 = v836;
  v905 = 250;
  v837 = Block::registerBlock<MovingBlock,char const(&)[12],int>("movingBlock", &v905);
  v838 = (*(int (**)(void))(*(_DWORD *)v837 + 468))();
  v839 = (*(int (**)(void))(*(_DWORD *)v838 + 464))();
  *(_DWORD *)(v839 + 96) = 6;
  Block::mMovingBlock = v839;
  v904 = 251;
  v840 = Block::registerBlock<ObserverBlock,char const(&)[9],int>("observer", &v904);
  v841 = (*(int (**)(void))(*(_DWORD *)v840 + 468))();
  *(_DWORD *)(v841 + 96) = 4;
  v842 = (*(int (**)(void))(*(_DWORD *)v841 + 488))();
  Block::mObserver = (*(int (**)(void))(*(_DWORD *)v842 + 488))();
  v903 = 252;
  v843 = Block::registerBlock<StructureBlock,char const(&)[16],int>("structure_block", &v903);
  *(_DWORD *)(v843 + 96) = 5;
  v844 = (*(int (**)(void))(*(_DWORD *)v843 + 468))();
  Block::mStructureBlock = (*(int (**)(void))(*(_DWORD *)v844 + 464))();
  v902 = 255;
  v845 = Material::getMaterial(1);
  v846 = Block::registerBlock<Block,char const(&)[10],int,Material const&>("reserved6", &v902, v845);
  *(_DWORD *)(v846 + 96) = 6;
  Block::mInfoReserved6 = v846;
  v901 = 51;
  v847 = Block::registerBlock<FireBlock,char const(&)[5],int>("fire", &v901);
  v848 = (*(int (**)(void))(*(_DWORD *)v847 + 468))();
  v849 = (*(int (**)(void))(*(_DWORD *)v848 + 460))();
  *(_DWORD *)(v849 + 96) = 2;
  Block::mFire = (*(int (**)(void))(*(_DWORD *)v849 + 488))();
  v900 = 1;
  do
    if ( !Block::mBlocks[v808] )
      Util::toString<int,(void *)0,(void *)0>((void **)&v899, v808);
      v852 = Material::getMaterial(0);
      v853 = Block::registerBlock<Block,std::string,int &,Material const&>((const void **)&v899, &v900, v852);
      v854 = (*(int (**)(void))(*(_DWORD *)v853 + 468))();
      *(_DWORD *)(v854 + 96) = 6;
      *(_DWORD *)(v854 + 24) = 0;
      *(_DWORD *)(v854 + 28) = 0;
      v855 = (void *)(v899 - 12);
      if ( (int *)(v899 - 12) != &dword_28898C0 )
      {
        v850 = (unsigned int *)(v899 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v851 = __ldrex(v850);
          while ( __strex(v851 - 1, v850) );
        }
        else
          v851 = (*v850)--;
        if ( v851 <= 0 )
          j_j_j_j__ZdlPv_9(v855);
      }
      v808 = v900;
    v900 = ++v808;
  while ( v808 < 256 );
  v856 = dword_280AF94;
  v857 = (int *)Block::mOwnedBlocks;
  if ( Block::mOwnedBlocks != dword_280AF94 )
      v858 = *v857;
      ++v857;
      (*(void (**)(void))(*(_DWORD *)v858 + 436))();
    while ( (int *)v856 != v857 );
  v898 = *(_BYTE *)(Block::mTallgrass + 4);
  TopSnowBlock::registerRecoverableBlock(&v898);
  v897 = *(_BYTE *)(Block::mYellowFlower + 4);
  TopSnowBlock::registerRecoverableBlock(&v897);
  v896 = *(_BYTE *)(Block::mRedFlower + 4);
  TopSnowBlock::registerRecoverableBlock(&v896);
  v895 = *(_BYTE *)(Block::mBrownMushroom + 4);
  TopSnowBlock::registerRecoverableBlock(&v895);
  v894 = *(_BYTE *)(Block::mRedMushroom + 4);
  TopSnowBlock::registerRecoverableBlock(&v894);
  return DocumentationSystem::registerDocumentation();
}


signed int __fastcall Block::playerWillDestroy(Block *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r5@1
  BlockPos *v5; // r4@1
  int v6; // r0@1
  __int16 v8; // [sp+4h] [bp-14h]@1

  v4 = a2;
  v5 = a3;
  v6 = Entity::getRegion(a2);
  v8 = FullBlock::AIR;
  BlockSource::setBlockAndData(v6, v5, (int)&v8, 3, (int)v4);
  return 1;
}


int __fastcall Block::setSolid(Block *this, int a2)
{
  _DWORD *v2; // r3@1
  int result; // r0@3

  v2 = &Brightness::MAX;
  Block::mSolid[*((_BYTE *)this + 4)] = a2;
  if ( !a2 )
    v2 = &Brightness::MIN;
  Block::mLightBlock[*((_BYTE *)this + 4)] = *(_BYTE *)v2;
  result = *((_BYTE *)this + 4);
  Block::mPushesOutItems[result] = a2;
  return result;
}


int __fastcall Block::getSecondPart(Block *this, BlockSource *a2, const BlockPos *a3, BlockPos *a4)
{
  Block *v4; // r6@1
  const BlockPos *v5; // r5@1
  BlockPos *v6; // r4@1
  int (__fastcall *v7)(Block *, unsigned int, const BlockPos *, BlockPos *); // r7@1
  unsigned int v8; // r1@1

  v4 = this;
  v5 = a3;
  v6 = a4;
  v7 = *(int (__fastcall **)(Block *, unsigned int, const BlockPos *, BlockPos *))(*(_DWORD *)this + 256);
  v8 = BlockSource::getData(a2, a3);
  return v7(v4, v8, v5, v6);
}


signed int __fastcall Block::canHurtAndBreakItem(Block *this)
{
  signed int result; // r0@1

  __asm { VLDR            S0, [R0,#0x58] }
  result = 0;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


char *__fastcall Block::getDescriptionId(Block *this)
{
  return (char *)this + 8;
}


int __fastcall Block::hasComparatorSignal(Block *this)
{
  return 0;
}


int __fastcall Block::setNameId(int a1, const void **a2)
{
  int v2; // r4@1
  const void **v3; // r5@1
  int *v4; // r0@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+0h] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  v4 = sub_21E8AF4(&v9, (int *)&Block::BLOCK_DESCRIPTION_PREFIX);
  sub_21E72F0((const void **)v4, v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v2 + 8),
    &v9);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  return v2;
}
