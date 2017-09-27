

char *__fastcall CommandUtils::createItemStacks(CommandUtils *this, const ItemInstance *a2, int a3, int *a4)
{
  CommandUtils *v4; // r4@1
  const ItemInstance *v5; // r6@1
  int *v6; // r8@1
  int v7; // r9@1
  char *result; // r0@2
  int v9; // r5@3
  signed int v10; // r0@4
  ItemInstance *v11; // r7@4
  int v12; // r6@4
  int v13; // r8@5
  ItemInstance *i; // r0@5
  unsigned int v15; // r1@10
  int *v16; // [sp+4h] [bp-74h]@5
  char v17; // [sp+8h] [bp-70h]@3
  char *v18; // [sp+10h] [bp-68h]@25
  void *v19; // [sp+2Ch] [bp-4Ch]@23
  void *ptr; // [sp+3Ch] [bp-3Ch]@21

  v4 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v5 = a2;
  *((_DWORD *)this + 2) = 0;
  v6 = a4;
  v7 = a3;
  if ( *((_BYTE *)a2 + 14) == a3 )
  {
    result = std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
               (unsigned __int64 *)this,
               (int)a2);
    *v6 = v7;
  }
  else
    v9 = ItemInstance::getMaxStackSize(a2);
    ItemInstance::ItemInstance((ItemInstance *)&v17, (int)v5);
    ItemInstance::set((ItemInstance *)&v17, v9);
    if ( v9 <= v7 )
    {
      v12 = v7 - v9;
      v16 = v6;
      v13 = 0;
      v11 = 0;
      for ( i = 0; ; i = (ItemInstance *)*((_DWORD *)v4 + 2) )
      {
        if ( v11 == i )
        {
          std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
            (unsigned __int64 *)v4,
            (int)&v17);
          v11 = (ItemInstance *)(*(_QWORD *)v4 >> 32);
          v13 = *(_QWORD *)v4;
        }
        else
          ItemInstance::ItemInstance(v11, (int)&v17);
          v11 = (ItemInstance *)((char *)v11 + 72);
          *((_DWORD *)v4 + 1) = v11;
        v15 = 954437177 * (((signed int)v11 - v13) >> 3);
        if ( v12 < v9 || v15 > 0x23 )
          break;
        v12 -= v9;
      }
      v10 = 0;
      if ( v15 < 0x24 )
        v10 = 1;
      v6 = v16;
    }
    else
      v10 = 1;
      v12 = v7;
    if ( v12 >= 1 && v10 == 1 )
      ItemInstance::set((ItemInstance *)&v17, (unsigned __int8)v12);
      if ( v11 == *((ItemInstance **)v4 + 2) )
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
          (unsigned __int64 *)v4,
          (int)&v17);
      else
        ItemInstance::ItemInstance(v11, (int)&v17);
        *((_DWORD *)v4 + 1) = (char *)v11 + 72;
      v12 = 0;
    *v6 = v7 - v12;
    if ( ptr )
      operator delete(ptr);
    if ( v19 )
      operator delete(v19);
    result = v18;
    if ( v18 )
      result = (char *)(*(int (**)(void))(*(_DWORD *)v18 + 4))();
  return result;
}


void *__fastcall CommandUtils::createItemInstance(ItemInstance *a1, unsigned int *a2, signed int a3, unsigned int a4)
{
  int v4; // r6@1
  ItemInstance *v5; // r8@1
  unsigned int *v6; // r7@1
  int v7; // r5@3
  int *v8; // r0@7
  int *v9; // r4@7
  int v10; // r0@8
  char v11; // r1@8
  void *result; // r0@12
  int v13; // r0@13

  v4 = a4;
  v5 = a1;
  v6 = a2;
  if ( a4 >> 15 )
    v4 = 0;
  v7 = 1;
  if ( a3 > 1 )
    v7 = a3;
  if ( a3 > 64 )
    v7 = 64;
  v8 = Item::lookupByName(a2, 1);
  v9 = v8;
  if ( v8 )
  {
    ItemInstance::ItemInstance(v5, *((_WORD *)v8 + 9), v7, v4);
    v10 = (*(int (__fastcall **)(int *, ItemInstance *))(*v9 + 212))(v9, v5);
    v11 = v7;
    if ( v7 <= 1 )
      v11 = 1;
    if ( v7 > v10 )
      v11 = v10;
    result = ItemInstance::set(v5, (unsigned __int8)v11);
  }
  else
    v13 = Block::lookupByName(v6, 1);
    if ( v13 )
      result = (void *)ItemInstance::ItemInstance(v5, *(_BYTE *)(v13 + 4), v7, v4);
    else
      result = (void *)ItemInstance::ItemInstance((int)v5);
  return result;
}


int __fastcall CommandUtils::displayLocalizableMessage(int a1, Entity *this, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  Entity *v7; // r7@1
  Level *v8; // r0@2
  unsigned __int64 *v9; // r0@2
  int result; // r0@2

  v5 = a4;
  v6 = a3;
  v7 = this;
  if ( a1 != 1
    || (v8 = (Level *)Entity::getLevel(this),
        v9 = (unsigned __int64 *)Level::getGameRules(v8),
        result = GameRules::getBool(v9, (int **)&GameRules::SEND_COMMAND_FEEDBACK),
        result == 1) )
  {
    result = (*(int (__fastcall **)(Entity *, int, int, int))(*(_DWORD *)v7 + 1376))(v7, v6, v5, a5);
  }
  return result;
}


const void **__fastcall CommandUtils::addtoCSVList(const void **a1, const void **a2)
{
  const void **v2; // r5@1
  const void **v3; // r4@1

  v2 = a1;
  v3 = a2;
  if ( *((_DWORD *)*a1 - 3) )
    sub_21E7408(a1, ", ", 2u);
  return sub_21E72F0(v2, v3);
}


int *__fastcall CommandUtils::createItemInstance(CommandUtils *this, const Item *a2, int a3, int a4)
{
  ItemInstance *v4; // r4@1
  const Item *v5; // r6@1
  signed int v6; // r5@3
  int v7; // r1@5
  char v8; // r7@5
  int v9; // r0@7

  v4 = this;
  v5 = a2;
  if ( (unsigned int)a4 >> 15 )
    a4 = 0;
  v6 = 1;
  if ( a3 > 1 )
    v6 = a3;
  v7 = *((_WORD *)a2 + 9);
  v8 = 1;
  if ( a3 > 64 )
    v6 = 64;
  ItemInstance::ItemInstance(this, v7, v6, a4);
  v9 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v5 + 212))(v5, v4);
  if ( v6 > 1 )
    v8 = v6;
  if ( v6 > v9 )
    v8 = v9;
  return ItemInstance::set(v4, (unsigned __int8)v8);
}


int __fastcall CommandUtils::getFeetPos(CommandUtils *this, Entity *a2)
{
  CommandUtils *v3; // r4@1
  int v4; // r0@2
  __int64 v5; // r1@2
  int v6; // r0@2
  _BOOL4 v7; // r0@2
  int *v8; // r1@2
  int result; // r0@5

  _R5 = a2;
  v3 = this;
  if ( a2 )
  {
    v4 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 52))(a2);
    v5 = *(_QWORD *)v4;
    v6 = *(_DWORD *)(v4 + 8);
    *(_QWORD *)v3 = v5;
    *((_DWORD *)v3 + 2) = v6;
    v7 = Entity::isRiding(_R5);
    v8 = (int *)((char *)_R5 + 268);
    if ( v7 == 1 )
    {
      _R0 = *((_DWORD *)_R5 + 128);
      __asm
      {
        VLDR            S0, [R5,#0x10C]
        VLDR            S2, [R0,#0x10C]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        v8 = (int *)(_R0 + 268);
    }
    result = *v8;
    *((_DWORD *)v3 + 1) = *v8;
  }
  else
    result = dword_2822498;
    *(_QWORD *)v3 = *(_QWORD *)&Vec3::ZERO;
    *((_DWORD *)v3 + 2) = result;
  return result;
}


Entity *__fastcall CommandUtils::spawnEntityAt(BlockSource *a1, const Vec3 *a2, int a3, _QWORD *a4)
{
  _QWORD *v4; // r8@1
  int v5; // r9@1
  const Vec3 *v6; // r5@1
  BlockSource *v7; // r6@1
  int v8; // r7@1
  void *v9; // r0@1
  void *v10; // r0@2
  void *v11; // r0@3
  Entity *v12; // r1@6
  int (__fastcall *v13)(int, BlockSource *, Entity **); // r3@6
  Entity *v14; // r6@6
  int v15; // r0@10
  int v16; // r1@10
  Entity *v17; // r0@11
  int (__fastcall *v18)(int, BlockSource *, Entity **); // r3@11
  Entity *v19; // r0@14
  int (__fastcall *v20)(int, BlockSource *, Entity **); // r3@14
  unsigned int *v22; // r2@24
  signed int v23; // r1@26
  unsigned int *v24; // r2@28
  signed int v25; // r1@30
  unsigned int *v26; // r2@32
  signed int v27; // r1@34
  Entity *v28; // [sp+4h] [bp-3Ch]@14
  Entity *v29; // [sp+8h] [bp-38h]@11
  Entity *v30; // [sp+Ch] [bp-34h]@6
  int v31; // [sp+10h] [bp-30h]@1
  int v32; // [sp+14h] [bp-2Ch]@2
  int v33; // [sp+18h] [bp-28h]@1
  Entity *v34; // [sp+1Ch] [bp-24h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = BlockSource::getLevel(a1);
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v31, v5);
  EntityFactory::createSummonedEntity((EntityFactory *)&v34, (const EntityDefinitionIdentifier *)&v31, 0, v6);
  v9 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v32 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v31 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( v34 )
    if ( Entity::isAutonomous(v34) == 1 )
      v12 = v34;
      v13 = *(int (__fastcall **)(int, BlockSource *, Entity **))(*(_DWORD *)v8 + 52);
      v34 = 0;
      v30 = v12;
      v14 = (Entity *)v13(v8, v7, &v30);
      if ( v30 )
        (*(void (**)(void))(*(_DWORD *)v30 + 32))();
      v30 = 0;
      v15 = Entity::isGlobal(v34);
      v16 = *(_DWORD *)v8;
      if ( v15 == 1 )
      {
        v17 = v34;
        v18 = *(int (__fastcall **)(int, BlockSource *, Entity **))(v16 + 48);
        v34 = 0;
        v29 = v17;
        v14 = (Entity *)v18(v8, v7, &v29);
        if ( v29 )
          (*(void (**)(void))(*(_DWORD *)v29 + 32))();
        v29 = 0;
      }
      else
        v19 = v34;
        v20 = *(int (__fastcall **)(int, BlockSource *, Entity **))(v16 + 44);
        v28 = v19;
        v14 = (Entity *)v20(v8, v7, &v28);
        if ( v28 )
          (*(void (**)(void))(*(_DWORD *)v28 + 32))();
        v28 = 0;
    if ( v14 )
      *v4 = *(_QWORD *)Entity::getUniqueID(v14);
      if ( EntityClassTree::isMob(v5) || EntityClassTree::isMobLegacy(v5) == 1 )
        Entity::setPersistent(v14);
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 32))();
  else
    v14 = 0;
  return v14;
}


int __fastcall CommandUtils::getFeetBlockPos(CommandUtils *this, Entity *a2)
{
  BlockPos *v3; // r4@1
  _BOOL4 v9; // r0@2
  int result; // r0@5

  _R5 = a2;
  v3 = this;
  if ( a2 )
  {
    _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 52))(a2);
    __asm
    {
      VLDR            S16, [R0]
      VLDR            S18, [R0,#8]
    }
    v9 = Entity::isRiding(_R5);
    _R1 = (int)_R5 + 268;
    if ( v9 == 1 )
      _R0 = *((_DWORD *)_R5 + 128);
      __asm
      {
        VLDR            S0, [R5,#0x10C]
        VLDR            S2, [R0,#0x10C]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        _R1 = _R0 + 268;
      VMOV.F32        S0, #0.5
      VLDR            S2, [R1]
      VMOV            R1, S16
      VMOV            R3, S18
      VADD.F32        S0, S2, S0
      VMOV            R2, S0
    result = BlockPos::BlockPos(v3, _R1, _R2, _R3);
  }
  else
    result = BlockPos::BlockPos((int)this, (int)&Vec3::ZERO);
  return result;
}


Json::Value *__fastcall CommandUtils::toJsonResult(const void **a1, const char **a2, const Json::Value *a3)
{
  const void **v3; // r4@1
  const char **v4; // r6@1
  const Json::Value *v5; // r5@1
  Json::Value *v6; // r0@1
  int v7; // r7@1
  int v8; // r0@1
  const void **v9; // r0@1
  const void **v10; // r0@1
  char *v11; // r0@1
  void *v12; // r0@2
  void *v13; // r0@3
  unsigned int *v15; // r2@5
  signed int v16; // r1@7
  unsigned int *v17; // r2@9
  signed int v18; // r1@11
  unsigned int *v19; // r2@13
  signed int v20; // r1@15
  int v21; // [sp+4h] [bp-4Ch]@1
  char *v22; // [sp+8h] [bp-48h]@1
  void **v23; // [sp+Ch] [bp-44h]@1
  int v24; // [sp+10h] [bp-40h]@3
  char v25; // [sp+18h] [bp-38h]@1
  char v26; // [sp+28h] [bp-28h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (Json::Value *)Json::Value::Value(&v26, 0);
  v7 = Json::Value::operator[](v6, "command");
  Json::Value::Value((int)&v25, v4);
  Json::Value::operator=(v7, (const Json::Value *)&v25);
  Json::Value::~Value((Json::Value *)&v25);
  v8 = Json::Value::operator[]((Json::Value *)&v26, "result");
  Json::Value::operator=(v8, v5);
  Json::FastWriter::FastWriter((Json::FastWriter *)&v23);
  Json::FastWriter::write((Json::FastWriter *)&v21, (const Json::Value *)&v23, (const Json::Value *)&v26);
  v9 = sub_21E82D8((const void **)&v21, 0, (unsigned int)"###* ", (_BYTE *)5);
  v22 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = sub_21E7408((const void **)&v22, " *###", 5u);
  *v3 = *v10;
  *v10 = &unk_28898CC;
  v11 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  }
  v12 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v21 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v23 = &off_2725B14;
  v13 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  Json::Writer::~Writer((Json::Writer *)&v23);
  return Json::Value::~Value((Json::Value *)&v26);
}
