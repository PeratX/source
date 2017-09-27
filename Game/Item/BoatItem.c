

void __fastcall BoatItem::~BoatItem(BoatItem *this)
{
  BoatItem::~BoatItem(this);
}


signed int __fastcall BoatItem::isStackedByData(BoatItem *this)
{
  return 1;
}


int __fastcall BoatItem::setIcon(int a1, int **a2, int a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  j_Item::setIcon(a1, a2, a3);
  sub_21E94B4((void **)&v9, "boat");
  v4 = j_Item::getTextureItem((int **)&v9);
  EntityInteraction::setInteractText((int *)(v3 + 116), v4);
  *(_DWORD *)(v3 + 120) = v4[1];
  j_std::vector<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>,std::allocator<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>>>::operator=(
    v3 + 124,
    (unsigned __int64 *)v4 + 1);
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
  return v3;
}


signed int __fastcall BoatItem::isLiquidClipItem(BoatItem *this, int a2)
{
  return 1;
}


void __fastcall BoatItem::buildDescriptionId(BoatItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  BoatItem *v3; // r4@1
  const ItemInstance *v4; // r6@1
  int v5; // r5@1
  int *v6; // r0@1
  const void **v7; // r0@1
  const void **v8; // r0@1
  char *v9; // r0@1
  void *v10; // r0@2
  unsigned int *v11; // r2@4
  signed int v12; // r1@6
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  int v15; // [sp+4h] [bp-2Ch]@1
  char *v16; // [sp+8h] [bp-28h]@1

  v3 = this;
  v4 = a2;
  v5 = j_ItemInstance::getAuxValue(a3);
  v6 = sub_21E8AF4(&v15, (int *)v4 + 5);
  sub_21E7408((const void **)v6, ".", 1u);
  v7 = sub_21E72F0((const void **)&v15, &WoodBlock::WOOD_NAMES[v5]);
  v16 = (char *)*v7;
  *v7 = &unk_28898CC;
  v8 = sub_21E7408((const void **)&v16, ".name", 5u);
  *(_DWORD *)v3 = *v8;
  *v8 = &unk_28898CC;
  v9 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v16 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


Item *__fastcall BoatItem::~BoatItem(BoatItem *this)
{
  Item *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2720514;
  j_TextureAtlasItem::~TextureAtlasItem((BoatItem *)((char *)this + 116));
  return j_j_j__ZN4ItemD2Ev_1(v1);
}


signed int __fastcall BoatItem::dispense(BoatItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, int a6)
{
  BlockSource *v7; // r6@1
  int v8; // r9@1
  Container *v9; // r5@1
  Block *v10; // r4@1
  Block *v11; // r7@1
  int *v12; // r0@1
  int *v13; // r0@3
  ItemInstance *v14; // r0@4
  unsigned __int8 v15; // r8@4
  void *v24; // r0@6
  void *v25; // r0@7
  void *v26; // r0@8
  Player *v27; // r0@10
  int v28; // r0@10
  Entity *v29; // r2@10
  void (*v30)(void); // r3@10
  signed int result; // r0@14
  unsigned int *v32; // r2@16
  signed int v33; // r1@18
  unsigned int *v34; // r2@20
  signed int v35; // r1@22
  unsigned int *v36; // r2@24
  signed int v37; // r1@26
  Entity *v38; // [sp+4h] [bp-64h]@10
  int v39; // [sp+8h] [bp-60h]@6
  float v40; // [sp+10h] [bp-58h]@6
  int v41; // [sp+1Ch] [bp-4Ch]@4
  int v42; // [sp+20h] [bp-48h]@7
  int v43; // [sp+24h] [bp-44h]@6
  Entity *v44; // [sp+28h] [bp-40h]@6
  int v45; // [sp+2Ch] [bp-3Ch]@1
  int v46; // [sp+30h] [bp-38h]@1
  int v47; // [sp+34h] [bp-34h]@1
  char v48; // [sp+38h] [bp-30h]@1
  int v49; // [sp+3Ch] [bp-2Ch]@1
  int v50; // [sp+40h] [bp-28h]@1

  _R10 = a5;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  j_BlockPos::BlockPos((int)&v48, (int)a5);
  v10 = (Block *)j_BlockSource::getBlock(v7, (const BlockPos *)&v48);
  v45 = *(_DWORD *)&v48;
  v46 = v49 - 1;
  v47 = v50;
  v11 = (Block *)j_BlockSource::getBlock(v7, (const BlockPos *)&v45);
  v12 = (int *)j_Block::getMaterial(v10);
  if ( !j_Material::isType(v12, 5) )
  {
    if ( j_Block::isType(v10, (const Block *)Block::mAir) != 1 )
      goto LABEL_42;
    v13 = (int *)j_Block::getMaterial(v11);
    if ( j_Material::isType(v13, 5) != 1 )
  }
  v14 = (ItemInstance *)(*(int (__fastcall **)(Container *, int))(*(_DWORD *)v9 + 16))(v9, v8);
  v15 = j_ItemInstance::getAuxValue(v14);
  j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v41, 90);
  __asm
    VMOV.F32        S8, #0.5
    VMOV.F32        S10, #1.0
    VLDR            S6, =0.3
  _R0 = &Facing::STEP_X[a6];
  __asm { VLDR            S0, [R0] }
  _R0 = &Facing::STEP_Y[a6];
  __asm { VLDR            S2, [R0] }
  _R0 = &Facing::STEP_Z[a6];
  __asm { VCVT.F32.S32    S0, S0 }
  _R1 = &dword_1A9F9D0;
    VLDR            S4, [R0]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S0, S6
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S6
    VLDR            S6, [R10]
    VADD.F32        S0, S0, S8
    VADD.F32        S2, S2, S10
    VLDR            S10, [R10,#8]
    VADD.F32        S4, S4, S8
    VLDR            S8, [R10,#4]
  if ( _ZF )
    _R1 = &dword_1A9F9D4;
  v39 = 0;
    VADD.F32        S0, S0, S6
    VLDR            S6, [R1]
    VADD.F32        S2, S2, S8
    VSTR            S6, [SP,#0x68+var_5C]
    VADD.F32        S4, S4, S10
    VSTR            S0, [SP,#0x68+var_58]
    VSTR            S2, [SP,#0x68+var_54]
    VSTR            S4, [SP,#0x68+var_50]
  j_EntityFactory::createSpawnedEntity(&v44, (const void **)&v41, 0, (int)&v40, &v39);
  v24 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v43 - 4);
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
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v42 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v41 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  if ( v44 )
    j_Entity::setVariant(v44, v15);
    v27 = (Player *)j_BlockSource::getLevel(v7);
    j_Level::broadcastLevelEvent(v27, 1000, __PAIR__(1000, (unsigned int)a5), 0);
    v28 = j_BlockSource::getLevel(v7);
    v29 = v44;
    v30 = *(void (**)(void))(*(_DWORD *)v28 + 44);
    v44 = 0;
    v38 = v29;
    v30();
    if ( v38 )
      (*(void (**)(void))(*(_DWORD *)v38 + 32))();
    v38 = 0;
    (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v9 + 36))(v9, v8, 1);
    if ( v44 )
      (*(void (**)(void))(*(_DWORD *)v44 + 32))();
    result = 1;
  else
LABEL_42:
    result = 0;
  return result;
}


int __fastcall BoatItem::BoatItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r4@1
  int result; // r0@1

  v3 = a1;
  j_Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_2720514;
  *(_DWORD *)(v3 + 116) = &unk_28898CC;
  *(_DWORD *)(v3 + 120) = 0;
  *(_DWORD *)(v3 + 124) = 0;
  *(_DWORD *)(v3 + 128) = 0;
  *(_DWORD *)(v3 + 132) = 0;
  j_Item::setMaxStackSize((Item *)v3, 1u);
  result = v3;
  *(_BYTE *)(v3 + 43) = 1;
  return result;
}


int __fastcall BoatItem::getIcon(BoatItem *this, int a2, int a3, bool a4)
{
  int v4; // r2@1
  int v5; // r0@3

  v4 = a2;
  if ( a2 <= 0 )
    v4 = 0;
  v5 = *((_DWORD *)this + 31);
  if ( a2 > 5 )
    v4 = 5;
  return *(_DWORD *)(v5 + 12 * v4);
}


void __fastcall BoatItem::~BoatItem(BoatItem *this)
{
  Item *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2720514;
  j_TextureAtlasItem::~TextureAtlasItem((BoatItem *)((char *)this + 116));
  j_Item::~Item(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall BoatItem::buildDescriptionId(BoatItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  BoatItem::buildDescriptionId(this, a2, a3);
}


int __fastcall BoatItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, float a6, float a7, float a8, int a9)
{
  Entity *v10; // r5@1
  ItemInstance *v11; // r4@1
  BlockSource *v12; // r0@2
  Material *v13; // r0@2
  Level *v14; // r6@3
  unsigned __int8 v15; // r8@3
  void *v19; // r0@4
  void *v20; // r0@5
  void *v21; // r0@6
  int (__fastcall *v23)(Level *, int, Entity **); // r7@13
  int v24; // r1@13
  Entity *v25; // r0@13
  int v26; // r6@13
  unsigned int *v28; // r2@23
  signed int v29; // r1@25
  unsigned int *v30; // r2@27
  signed int v31; // r1@29
  unsigned int *v32; // r2@31
  signed int v33; // r1@33
  Entity *v34; // [sp+4h] [bp-64h]@13
  char v35; // [sp+8h] [bp-60h]@4
  int v37; // [sp+10h] [bp-58h]@4
  float v38; // [sp+18h] [bp-50h]@4
  int v39; // [sp+24h] [bp-44h]@4
  int v40; // [sp+28h] [bp-40h]@5
  int v41; // [sp+2Ch] [bp-3Ch]@4
  Entity *v42; // [sp+30h] [bp-38h]@4

  _R7 = (const BlockPos *)a4;
  v10 = this;
  v11 = (ItemInstance *)a2;
  if ( (unsigned __int8)a5 != 1 )
  {
    v12 = (BlockSource *)j_Entity::getRegion(this);
    v13 = (Material *)j_BlockSource::getMaterial(v12, _R7);
    if ( j_Material::isLiquid(v13) != 1 )
      return 0;
  }
  v14 = (Level *)j_Entity::getLevel(v10);
  v15 = j_ItemInstance::getAuxValue(v11);
  if ( !j_Level::isClientSide(v14) )
    __asm
    {
      VLDR            S16, [SP,#0x68+arg_C]
      VLDR            S18, [SP,#0x68+arg_8]
      VLDR            S20, [SP,#0x68+arg_4]
    }
    j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v39, 90);
      VLDR            S0, [R7]
      VLDR            S2, [R7,#4]
      VLDR            S4, [R7,#8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VADD.F32        S0, S0, S20
      VADD.F32        S2, S2, S18
      VADD.F32        S4, S4, S16
      VSTR            S0, [SP,#0x68+var_50]
      VSTR            S2, [SP,#0x68+var_4C]
      VSTR            S4, [SP,#0x68+var_48]
    j_Entity::getRotation((Entity *)&v35, (int)v10);
      VLDR            S0, =90.0
      VLDR            S2, [SP,#0x68+var_5C]
    v37 = 0;
      VADD.F32        S0, S2, S0
      VSTR            S0, [SP,#0x68+var_54]
    j_EntityFactory::createSpawnedEntity(&v42, (const void **)&v39, (int)v10, (int)&v38, &v37);
    v19 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v41 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      }
      else
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    v20 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v40 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v39 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    if ( !v42 )
    j_Entity::setVariant(v42, v15);
    if ( a9 && (*(int (__fastcall **)(int, Entity *))(*(_DWORD *)a9 + 24))(a9, v42) )
      if ( v42 )
        (*(void (**)(void))(*(_DWORD *)v42 + 32))();
    v23 = *(int (__fastcall **)(Level *, int, Entity **))(*(_DWORD *)v14 + 44);
    v24 = j_Entity::getRegion(v10);
    v25 = v42;
    v42 = 0;
    v34 = v25;
    v26 = v23(v14, v24, &v34);
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 32))();
    _ZF = a9 == 0;
    v34 = 0;
    if ( a9 )
      _ZF = v26 == 0;
    if ( !_ZF )
      (*(void (__fastcall **)(int, Entity *))(*(_DWORD *)a9 + 28))(a9, v42);
    if ( v42 )
      (*(void (**)(void))(*(_DWORD *)v42 + 32))();
  (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)v10 + 612))(v10, v11);
  return 1;
}
