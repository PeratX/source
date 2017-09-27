

void __fastcall TntBlock::~TntBlock(TntBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall TntBlock::dispense(TntBlock *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, signed __int8 a6)
{
  BlockSource *v6; // r6@1
  int v7; // r9@1
  Container *v8; // r5@1
  int v9; // r7@1
  void *v14; // r0@1
  void *v15; // r0@2
  void *v16; // r0@3
  int v17; // r1@4
  signed int result; // r0@4
  void (__fastcall *v19)(int, BlockSource *, int *); // r3@5
  Player *v20; // r0@7
  unsigned int *v21; // r2@11
  signed int v22; // r1@13
  unsigned int *v23; // r2@15
  signed int v24; // r1@17
  unsigned int *v25; // r2@19
  signed int v26; // r1@21
  char v27; // [sp+Ch] [bp-64h]@7
  int v28; // [sp+18h] [bp-58h]@5
  float v29; // [sp+1Ch] [bp-54h]@1
  float v32; // [sp+28h] [bp-48h]@1
  int v33; // [sp+34h] [bp-3Ch]@1
  int v34; // [sp+38h] [bp-38h]@2
  int v35; // [sp+3Ch] [bp-34h]@1
  int v36; // [sp+40h] [bp-30h]@1
  char v37; // [sp+44h] [bp-2Ch]@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = BlockSource::getLevel(a2);
  BlockPos::BlockPos((int)&v37, (int)a5);
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v33, 65);
  Vec3::Vec3((int)&v29, (int)&v37);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [SP,#0x70+var_54]
    VLDR            S4, [SP,#0x70+var_50]
    VLDR            S6, [SP,#0x70+var_4C]
    VADD.F32        S2, S2, S0
    VADD.F32        S4, S4, S0
    VADD.F32        S0, S6, S0
    VSTR            S2, [SP,#0x70+var_48]
    VSTR            S4, [SP,#0x70+var_44]
    VSTR            S0, [SP,#0x70+var_40]
  }
  EntityFactory::createSpawnedEntity((Entity **)&v36, (const void **)&v33, 0, (int)&v32, &Vec2::ZERO);
  v14 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v34 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v33 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = v36;
  result = 0;
  if ( v36 )
    v19 = *(void (__fastcall **)(int, BlockSource *, int *))(*(_DWORD *)v9 + 44);
    v36 = 0;
    v28 = v17;
    v19(v9, v6, &v28);
    if ( v28 )
      (*(void (**)(void))(*(_DWORD *)v28 + 32))();
    v28 = 0;
    v20 = (Player *)BlockSource::getLevel(v6);
    Level::broadcastLevelEvent(v20, 1000, __PAIR__(1000, (unsigned int)a5), 0);
    Vec3::Vec3((int)&v27, (int)&v37);
    Level::broadcastDimensionEvent(v9, v6, 1005, (int)&v27, 0);
    (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v8 + 36))(v8, v7, 1);
    if ( v36 )
      (*(void (**)(void))(*(_DWORD *)v36 + 32))();
    result = 1;
  return result;
}


int __fastcall TntBlock::onExploded(TntBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  BlockSource *v4; // r4@1
  Entity *v5; // r6@1
  int v7; // r0@1
  int v12; // r5@1
  void *v13; // r0@1
  void *v14; // r0@2
  void *v15; // r0@3
  void *v16; // r0@4
  void *v17; // r0@5
  void *v18; // r0@6
  int result; // r0@7
  void (__fastcall *v20)(int, BlockSource *, int *); // r3@8
  unsigned int *v21; // r2@13
  signed int v22; // r1@15
  unsigned int *v23; // r2@17
  signed int v24; // r1@19
  unsigned int *v25; // r2@21
  signed int v26; // r1@23
  unsigned int *v27; // r2@25
  signed int v28; // r1@27
  unsigned int *v29; // r2@29
  signed int v30; // r1@31
  unsigned int *v31; // r2@33
  signed int v32; // r1@35
  int v33; // [sp+4h] [bp-4Ch]@8
  int v34; // [sp+Ch] [bp-44h]@1
  int v35; // [sp+10h] [bp-40h]@1
  int v36; // [sp+18h] [bp-38h]@1
  int v37; // [sp+1Ch] [bp-34h]@1
  int v38; // [sp+20h] [bp-30h]@2
  int v39; // [sp+24h] [bp-2Ch]@1
  int v40; // [sp+28h] [bp-28h]@1
  float v41; // [sp+2Ch] [bp-24h]@1

  v4 = a2;
  v5 = a4;
  _R7 = a3;
  v7 = BlockSource::getLevel(a2);
  __asm
  {
    VLDR            S0, [R7]
    VMOV.F32        S6, #0.5
    VLDR            S4, [R7,#8]
  }
  v12 = v7;
    VLDR            S2, [R7,#4]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S2, S2
    VADD.F32        S0, S0, S6
    VADD.F32        S4, S4, S6
    VSTR            S0, [SP,#0x50+var_24]
    VSTR            S2, [SP,#0x50+var_20]
    VSTR            S4, [SP,#0x50+var_1C]
  sub_21E94B4((void **)&v36, "minecraft");
  EntityTypeToString((void **)&v35, 0x41u, 0);
  sub_21E94B4((void **)&v34, "from_explosion");
  EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v37, &v36, &v35, &v34);
  EntityFactory::createSpawnedEntity((Entity **)&v40, (const void **)&v37, (int)v5, (int)&v41, &Vec2::ZERO);
  v13 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v38 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v37 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v34 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v35 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v36 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  result = v40;
  if ( v40 )
    v20 = *(void (__fastcall **)(int, BlockSource *, int *))(*(_DWORD *)v12 + 44);
    v40 = 0;
    v33 = result;
    v20(v12, v4, &v33);
    if ( v33 )
      (*(void (**)(void))(*(_DWORD *)v33 + 32))();
    v33 = 0;
    result = v40;
    if ( v40 )
      result = (*(int (**)(void))(*(_DWORD *)v40 + 32))();
  return result;
}


char *__fastcall TntBlock::onRedstoneUpdate(TntBlock *this, BlockSource *a2, const BlockPos *a3, int a4, bool a5)
{
  BlockSource *v5; // r4@1
  TntBlock *v6; // r6@1
  int v7; // r5@1
  const BlockPos *v8; // r8@1
  Level *v9; // r0@1
  char *result; // r0@1
  unsigned __int64 *v11; // r7@1
  BlockState *v12; // r0@4
  int v13; // r5@4
  int v14; // r7@4
  int v15; // r1@4
  int v16; // r2@4
  int v17; // r3@4
  char v18; // [sp+Ch] [bp-1Ch]@4

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (Level *)BlockSource::getLevel(a2);
  result = Level::getGameRules(v9);
  v11 = (unsigned __int64 *)result;
  if ( v7 >= 1 )
  {
    result = (char *)GameRules::hasRule((unsigned __int64 *)result, (int **)&GameRules::DO_TNT_EXPLODE);
    if ( result == (char *)1 )
    {
      result = (char *)GameRules::getBool(v11, (int **)&GameRules::DO_TNT_EXPLODE);
      if ( result == (char *)1 )
      {
        v12 = (BlockState *)Block::getBlockState((int)v6, 14);
        v14 = *(_QWORD *)v12 >> 32;
        v13 = *(_QWORD *)v12;
        BlockState::getMask(v12);
        (*(void (__fastcall **)(TntBlock *, BlockSource *, const BlockPos *, _DWORD))(*(_DWORD *)v6 + 240))(
          v6,
          v5,
          v8,
          (unsigned __int8)(1 << (v13 + 1 - v14)));
        v15 = *(_DWORD *)v8;
        v16 = *((_DWORD *)v8 + 1);
        v17 = *((_DWORD *)v8 + 2);
        v18 = BlockID::AIR;
        result = (char *)BlockSource::setBlock((int)v5, v15, v16, v17, &v18, 3);
      }
    }
  }
  return result;
}


_DWORD *__fastcall TntBlock::TntBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(17);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &off_2715EF0;
  return v3;
}


int __fastcall TntBlock::destroy(TntBlock *this, BlockSource *a2, const BlockPos *a3, int a4, Entity *a5)
{
  BlockSource *v5; // r4@1
  TntBlock *v6; // r7@1
  unsigned __int8 v7; // r5@1
  const BlockPos *v8; // r6@1
  Level *v9; // r0@1
  int v10; // r8@1
  int result; // r0@1
  BlockState *v12; // r0@2
  Level *v13; // r0@3
  unsigned __int64 *v14; // r0@3
  unsigned __int64 *v15; // r5@3
  void *v20; // r0@5
  void *v21; // r0@6
  void *v22; // r0@7
  int v23; // r0@9
  int v24; // r1@9
  void (__fastcall *v25)(int, BlockSource *, int *); // r3@9
  unsigned int *v26; // r2@14
  signed int v27; // r1@16
  unsigned int *v28; // r2@18
  signed int v29; // r1@20
  unsigned int *v30; // r2@22
  signed int v31; // r1@24
  int v32; // [sp+Ch] [bp-4Ch]@9
  float v33; // [sp+10h] [bp-48h]@5
  int v34; // [sp+14h] [bp-44h]@5
  float v36; // [sp+1Ch] [bp-3Ch]@5
  int v37; // [sp+20h] [bp-38h]@5
  int v38; // [sp+28h] [bp-30h]@5
  int v39; // [sp+2Ch] [bp-2Ch]@6
  int v40; // [sp+30h] [bp-28h]@5
  int v41; // [sp+34h] [bp-24h]@5
  unsigned __int8 v42; // [sp+3Bh] [bp-1Dh]@2

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (Level *)BlockSource::getLevel(a2);
  v10 = (int)v9;
  result = Level::isClientSide(v9);
  if ( !result )
  {
    v42 = v7;
    v12 = (BlockState *)Block::getBlockState((int)v6, 14);
    result = BlockState::getBool(v12, &v42);
    if ( result == 1 )
    {
      v13 = (Level *)BlockSource::getLevel(v5);
      v14 = (unsigned __int64 *)Level::getGameRules(v13);
      v15 = v14;
      result = GameRules::hasRule(v14, (int **)&GameRules::DO_TNT_EXPLODE);
      if ( result == 1 )
      {
        result = GameRules::getBool(v15, (int **)&GameRules::DO_TNT_EXPLODE);
        if ( result == 1 )
        {
          EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v38, 65);
          Vec3::Vec3((int)&v33, (int)v8);
          __asm
          {
            VMOV.F32        S0, #0.5
            VLDR            S2, [SP,#0x58+var_48]
            VLDR            S4, [SP,#0x58+var_40]
            VADD.F32        S2, S2, S0
            VADD.F32        S0, S4, S0
            VSTR            S2, [SP,#0x58+var_3C]
          }
          v37 = v34;
          __asm { VSTR            S0, [SP,#0x58+var_34] }
          EntityFactory::createSpawnedEntity((Entity **)&v41, (const void **)&v38, (int)a5, (int)&v36, &Vec2::ZERO);
          v20 = (void *)(v40 - 12);
          if ( (int *)(v40 - 12) != &dword_28898C0 )
            v26 = (unsigned int *)(v40 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
            }
            else
              v27 = (*v26)--;
            if ( v27 <= 0 )
              j_j_j_j__ZdlPv_9(v20);
          v21 = (void *)(v39 - 12);
          if ( (int *)(v39 - 12) != &dword_28898C0 )
            v28 = (unsigned int *)(v39 - 4);
                v29 = __ldrex(v28);
              while ( __strex(v29 - 1, v28) );
              v29 = (*v28)--;
            if ( v29 <= 0 )
              j_j_j_j__ZdlPv_9(v21);
          v22 = (void *)(v38 - 12);
          if ( (int *)(v38 - 12) != &dword_28898C0 )
            v30 = (unsigned int *)(v38 - 4);
                v31 = __ldrex(v30);
              while ( __strex(v31 - 1, v30) );
              v31 = (*v30)--;
            if ( v31 <= 0 )
              j_j_j_j__ZdlPv_9(v22);
          result = v41;
          if ( v41 )
            v23 = (*(int (**)(void))(*(_DWORD *)v41 + 52))();
            Level::broadcastDimensionEvent(v10, v5, 1005, v23, 0);
            v24 = v41;
            v25 = *(void (__fastcall **)(int, BlockSource *, int *))(*(_DWORD *)v10 + 44);
            v41 = 0;
            v32 = v24;
            v25(v10, v5, &v32);
            if ( v32 )
              (*(void (**)(void))(*(_DWORD *)v32 + 32))();
            v32 = 0;
            result = v41;
            if ( v41 )
              result = (*(int (**)(void))(*(_DWORD *)v41 + 32))();
        }
      }
    }
  }
  return result;
}


void __fastcall TntBlock::~TntBlock(TntBlock *this)
{
  TntBlock::~TntBlock(this);
}


int __fastcall TntBlock::use(TntBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Entity *v4; // r7@1
  TntBlock *v5; // r9@1
  ItemUseCallback *v6; // r4@1
  const BlockPos *v7; // r8@1
  void *v8; // r0@1
  const ItemInstance *v9; // r2@3
  signed int v10; // r5@4
  Level *v11; // r0@12
  unsigned __int64 *v12; // r6@12
  int v13; // r10@18
  BlockState *v14; // r0@18
  int v15; // r11@18
  int (__fastcall *v16)(ItemUseCallback *, const BlockPos *, char *, _DWORD *); // r5@19
  void (__fastcall *v17)(ItemUseCallback *, const BlockPos *, char *, _DWORD *); // r6@21
  int v18; // r4@22
  int v20; // [sp+8h] [bp-80h]@18
  char v21; // [sp+Ch] [bp-7Ch]@21
  char v22; // [sp+Dh] [bp-7Bh]@21
  char v23; // [sp+10h] [bp-78h]@20
  char v24; // [sp+11h] [bp-77h]@20
  char v25; // [sp+14h] [bp-74h]@19
  char v26; // [sp+15h] [bp-73h]@19
  int v27; // [sp+18h] [bp-70h]@1
  int v28; // [sp+20h] [bp-68h]@28
  char v29; // [sp+26h] [bp-62h]@7
  char v30; // [sp+27h] [bp-61h]@1
  void *v31; // [sp+3Ch] [bp-4Ch]@26
  void *ptr; // [sp+4Ch] [bp-3Ch]@24

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = Player::getSelectedItem(a2);
  ItemInstance::ItemInstance((ItemInstance *)&v27, (int)v8);
  if ( v30 )
  {
    if ( v27 )
    {
      if ( ItemInstance::isNull((ItemInstance *)&v27) )
      {
        v10 = 0;
      }
      else if ( v29 )
        v10 = 1;
        if ( v27 != Item::mFlintAndSteel && v27 != Item::mFireCharge )
          v10 = EnchantUtils::hasEnchant((EnchantUtils *)0xD, (int)&v27, v9);
      else
    }
    else
      v10 = 0;
  }
  else
    v10 = 0;
  v11 = (Level *)Entity::getLevel(v4);
  v12 = (unsigned __int64 *)Level::getGameRules(v11);
  if ( GameRules::hasRule(v12, (int **)&GameRules::DO_TNT_EXPLODE) == 1
    && GameRules::getBool(v12, (int **)&GameRules::DO_TNT_EXPLODE) != 1 )
    goto LABEL_23;
  if ( GameRules::hasRule(v12, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) == 1 )
    if ( !(v10 & GameRules::getBool(v12, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS)) )
      goto LABEL_23;
  else if ( v10 != 1 )
LABEL_23:
    v18 = Block::use(v5, v4, v7, v6);
    goto LABEL_24;
  v13 = Entity::getRegion(v4);
  v14 = (BlockState *)Block::getBlockState((int)v5, 14);
  v15 = *(_QWORD *)v14;
  v20 = *(_QWORD *)v14 >> 32;
  BlockState::getMask(v14);
  if ( !v6
    || (v16 = *(int (__fastcall **)(ItemUseCallback *, const BlockPos *, char *, _DWORD *))(*(_DWORD *)v6 + 16),
        v25 = *((_BYTE *)v5 + 4),
        v26 = 0,
        !v16(v6, v7, &v25, &FullBlock::AIR)) )
    ItemInstance::hurtAndBreak((ItemInstance *)&v27, 1, v4);
    Player::setSelectedItem(v4, (const ItemInstance *)&v27);
    v23 = BlockID::AIR;
    v24 = 0;
    BlockSource::setBlockAndData(v13, v7, (int)&v23, 3, (int)v4);
    (*(void (__fastcall **)(TntBlock *, int, const BlockPos *, _DWORD))(*(_DWORD *)v5 + 240))(
      v5,
      v13,
      v7,
      (unsigned __int8)(1 << (v15 + 1 - v20)));
    if ( v6 )
      v17 = *(void (__fastcall **)(ItemUseCallback *, const BlockPos *, char *, _DWORD *))(*(_DWORD *)v6 + 20);
      v21 = *((_BYTE *)v5 + 4);
      v22 = 0;
      v17(v6, v7, &v21, &FullBlock::AIR);
  v18 = 1;
LABEL_24:
  if ( ptr )
    operator delete(ptr);
  if ( v31 )
    operator delete(v31);
  if ( v28 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v28 + 4))(v28);
  return v18;
}


int __fastcall TntBlock::onPlace(TntBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  TntBlock *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  Block::onPlace(this, a2, a3);
  return (*(int (__fastcall **)(TntBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 188))(v5, v4, v3);
}


int __fastcall TntBlock::shouldDispense(TntBlock *this, BlockSource *a2, Container *a3)
{
  Level *v3; // r0@1
  unsigned __int64 *v4; // r4@1
  int result; // r0@2

  v3 = (Level *)BlockSource::getLevel(a2);
  v4 = (unsigned __int64 *)Level::getGameRules(v3);
  if ( GameRules::hasRule(v4, (int **)&GameRules::DO_TNT_EXPLODE) == 1 )
    result = GameRules::getBool(v4, (int **)&GameRules::DO_TNT_EXPLODE);
  else
    result = 0;
  return result;
}


_BOOL4 __fastcall TntBlock::shouldExplode(TntBlock *this, const unsigned __int8 *a2)
{
  const unsigned __int8 *v2; // r4@1
  BlockState *v3; // r0@1

  v2 = a2;
  v3 = (BlockState *)Block::getBlockState((int)this, 14);
  return j_j_j__ZNK10BlockState7getBoolERKh_1(v3, v2);
}


int __fastcall TntBlock::onLoaded(TntBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r5@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r0@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = Dimension::getCircuitSystem(v7);
    result = j_j_j__ZN13CircuitSystem6createI17ConsumerComponentEEPT_RK8BlockPosP11BlockSourcea(v8, v4, (int)v3, 0);
  }
  return result;
}


signed int __fastcall TntBlock::getResourceCount(TntBlock *this, Random *a2, int a3, int a4)
{
  return 1;
}
