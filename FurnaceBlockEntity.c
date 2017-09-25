

unsigned int __fastcall FurnaceBlockEntity::getBurnProgress(FurnaceBlockEntity *this, int a2)
{
  _R0 = *((_DWORD *)this + 56) * a2;
  _R1 = 1374389535;
  __asm { SMMUL.W         R0, R0, R1 }
  return ((signed int)_R0 >> 6) + (_R0 >> 31);
}


void __fastcall FurnaceBlockEntity::onNeighborChanged(FurnaceBlockEntity *this, BlockSource *a2, const BlockPos *a3)
{
  FurnaceBlockEntity::onNeighborChanged(this, a2, a3);
}


signed int __fastcall FurnaceBlockEntity::isFuel(FurnaceBlockEntity *this, const ItemInstance *a2)
{
  signed int v2; // r0@1
  signed int v3; // r1@1

  v2 = FurnaceBlockEntity::getBurnDuration(this, a2);
  v3 = 0;
  if ( v2 > 0 )
    v3 = 1;
  return v3;
}


BlockEntity *__fastcall FurnaceBlockEntity::~FurnaceBlockEntity(FurnaceBlockEntity *this)
{
  FurnaceBlockEntity *v1; // r4@1
  Container *v2; // r5@1
  void *v3; // r0@1
  void *v4; // r0@3
  int v5; // r0@5
  void *v6; // r0@7
  void *v7; // r0@9
  int v8; // r0@11
  void *v9; // r0@13
  void *v10; // r0@15
  int v11; // r0@17
  void *v12; // r0@19
  void *v13; // r0@21
  int v14; // r0@23

  v1 = this;
  *(_DWORD *)this = &off_2709C38;
  *((_DWORD *)this + 26) = &off_2709CD4;
  v2 = (FurnaceBlockEntity *)((char *)this + 104);
  v3 = (void *)*((_DWORD *)this + 127);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 123);
  if ( v4 )
    operator delete(v4);
  v5 = *((_DWORD *)v1 + 116);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  *((_DWORD *)v1 + 116) = 0;
  v6 = (void *)*((_DWORD *)v1 + 107);
  if ( v6 )
    operator delete(v6);
  v7 = (void *)*((_DWORD *)v1 + 103);
  if ( v7 )
    operator delete(v7);
  v8 = *((_DWORD *)v1 + 96);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *((_DWORD *)v1 + 96) = 0;
  v9 = (void *)*((_DWORD *)v1 + 89);
  if ( v9 )
    operator delete(v9);
  v10 = (void *)*((_DWORD *)v1 + 85);
  if ( v10 )
    operator delete(v10);
  v11 = *((_DWORD *)v1 + 78);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  *((_DWORD *)v1 + 78) = 0;
  v12 = (void *)*((_DWORD *)v1 + 71);
  if ( v12 )
    operator delete(v12);
  v13 = (void *)*((_DWORD *)v1 + 67);
  if ( v13 )
    operator delete(v13);
  v14 = *((_DWORD *)v1 + 60);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  *((_DWORD *)v1 + 60) = 0;
  Container::~Container(v2);
  return j_j_j__ZN11BlockEntityD2Ev_0(v1);
}


int __fastcall FurnaceBlockEntity::setLitDuration(int result, int a2)
{
  *(_DWORD *)(result + 220) = a2;
  return result;
}


int *__fastcall FurnaceBlockEntity::setItem(FurnaceBlockEntity *this, int a2, const ItemInstance *a3)
{
  int v3; // r8@1
  const ItemInstance *v4; // r7@1
  FurnaceBlockEntity *v5; // r5@1
  char *v6; // r11@1
  signed int v7; // r4@4
  bool v8; // zf@9
  signed int v9; // r10@14
  signed int v10; // r0@15
  signed int v11; // r1@15
  signed int v12; // r6@28
  int *result; // r0@28
  unsigned __int8 v14; // r0@29

  v3 = a2;
  v4 = a3;
  v5 = this;
  v6 = (char *)this + 72 * a2;
  if ( *((_BYTE *)a3 + 15) )
  {
    if ( *(_DWORD *)a3 )
    {
      if ( ItemInstance::isNull(a3) )
      {
        v7 = 0;
      }
      else
        v7 = *((_BYTE *)v4 + 14);
        if ( *((_BYTE *)v4 + 14) )
          v7 = 1;
    }
    else
      v7 = 0;
  }
  else
    v7 = 0;
  v8 = v6[247] == 0;
  if ( v6[247] )
    v8 = *((_DWORD *)v6 + 58) == 0;
  if ( v8 || ItemInstance::isNull((ItemInstance *)(v6 + 232)) == 1 )
    if ( !v7 )
      v9 = 0;
      goto LABEL_28;
LABEL_18:
    if ( v3 )
LABEL_27:
      v9 = 1;
LABEL_26:
    *((_DWORD *)v5 + 56) = 0;
    goto LABEL_27;
  v10 = (unsigned __int8)v6[246];
  v11 = (unsigned __int8)v6[246];
  if ( v6[246] )
    v11 = 1;
  if ( v7 != v11 )
    goto LABEL_18;
    v10 = 1;
  if ( (v10 & v7) == 1 )
    if ( ItemInstance::operator!=(v4, (ItemInstance *)(v6 + 232)) == 1 )
      if ( v3 || ItemInstance::isStackable(v4, (const ItemInstance *)(v6 + 232)) )
        goto LABEL_27;
      goto LABEL_26;
    v9 = 0;
LABEL_28:
  (*(void (__fastcall **)(char *, int, char *, const ItemInstance *))(*((_DWORD *)v5 + 26) + 112))(
    (char *)v5 + 104,
    v3,
    v6 + 232,
    v4);
  ItemInstance::operator=((int)(v6 + 232), (int)v4);
  v12 = (unsigned __int8)v6[246];
  result = (int *)(*(int (__fastcall **)(FurnaceBlockEntity *))(*(_DWORD *)v5 + 124))(v5);
  if ( v12 > (signed int)result )
    v14 = (*(int (__fastcall **)(FurnaceBlockEntity *))(*(_DWORD *)v5 + 124))(v5);
    result = ItemInstance::set((ItemInstance *)(v6 + 232), v14);
  if ( v9 == 1 )
    BlockEntity::setChanged(v5);
    *((_BYTE *)v5 + v3 + 448) = 1;
    result = (int *)(*(int (__fastcall **)(char *, int))(*((_DWORD *)v5 + 26) + 84))((char *)v5 + 104, v3);
  return result;
}


signed int __fastcall FurnaceBlockEntity::getContainerSize(FurnaceBlockEntity *this)
{
  return 3;
}


void __fastcall FurnaceBlockEntity::load(FurnaceBlockEntity *this, const CompoundTag *a2)
{
  FurnaceBlockEntity *v2; // r4@1
  const CompoundTag *v3; // r8@1
  ListTag *v4; // r6@1
  void *v5; // r0@1
  int v6; // r11@4
  int *v7; // r4@4
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  const CompoundTag *v10; // r8@13
  unsigned int v11; // r10@14
  void *v12; // r0@14
  void (__fastcall *v13)(FurnaceBlockEntity *, unsigned int, char *); // ST10_4@16
  void *v14; // r0@24
  void *v15; // r0@25
  void *v16; // r0@26
  unsigned int *v17; // r2@28
  signed int v18; // r1@30
  unsigned int *v19; // r2@32
  signed int v20; // r1@34
  unsigned int *v21; // r2@36
  signed int v22; // r1@38
  unsigned int *v23; // r2@40
  signed int v24; // r1@42
  int v25; // [sp+8h] [bp-A8h]@2
  FurnaceBlockEntity *v26; // [sp+14h] [bp-9Ch]@1
  int v27; // [sp+1Ch] [bp-94h]@26
  int v28; // [sp+24h] [bp-8Ch]@25
  int v29; // [sp+2Ch] [bp-84h]@24
  char v30; // [sp+30h] [bp-80h]@16
  int v31; // [sp+38h] [bp-78h]@20
  void *v32; // [sp+54h] [bp-5Ch]@18
  void *ptr; // [sp+64h] [bp-4Ch]@16
  int v34; // [sp+7Ch] [bp-34h]@5
  int v35; // [sp+84h] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  v26 = this;
  BlockEntity::load(this, a2);
  (*(void (__fastcall **)(FurnaceBlockEntity *, _DWORD, void *))(*(_DWORD *)v2 + 120))(v2, 0, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(FurnaceBlockEntity *, signed int, void *))(*(_DWORD *)v2 + 120))(
    v2,
    1,
    &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v2 + 120))(v2, 2, &ItemInstance::EMPTY_ITEM);
  sub_21E94B4((void **)&v35, "Items");
  v4 = (ListTag *)CompoundTag::getList((int)v3, (const void **)&v35);
  v5 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v25 = (int)v3;
  if ( v4 && ListTag::size(v4) >= 1 )
    v6 = 0;
    v7 = &dword_28898C0;
    do
      v10 = (const CompoundTag *)ListTag::get(v4, v6);
      if ( (*(int (**)(void))(*(_DWORD *)v10 + 24))() == 10 )
      {
        sub_21E94B4((void **)&v34, "Slot");
        v11 = CompoundTag::getByte((int)v10, (const void **)&v34);
        v12 = (void *)(v34 - 12);
        if ( (int *)(v34 - 12) != v7 )
        {
          v8 = (unsigned int *)(v34 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          }
          else
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        }
        if ( v11 <= 2 )
          v13 = *(void (__fastcall **)(FurnaceBlockEntity *, unsigned int, char *))(*(_DWORD *)v26 + 120);
          ItemInstance::fromTag((ItemInstance *)&v30, v10);
          v13(v26, v11, &v30);
          if ( ptr )
            operator delete(ptr);
          v7 = &dword_28898C0;
          if ( v32 )
            operator delete(v32);
          if ( v31 )
            (*(void (**)(void))(*(_DWORD *)v31 + 4))();
          v31 = 0;
      }
      ++v6;
    while ( v6 < ListTag::size(v4) );
  sub_21E94B4((void **)&v29, "BurnTime");
  *((_DWORD *)v26 + 54) = CompoundTag::getShort(v25, (const void **)&v29);
  v14 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v29 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v28, "CookTime");
  *((_DWORD *)v26 + 56) = CompoundTag::getShort(v25, (const void **)&v28);
  v15 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v28 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v27, "BurnDuration");
  *((_DWORD *)v26 + 55) = CompoundTag::getShort(v25, (const void **)&v27);
  v16 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v27 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
}


signed int __fastcall FurnaceBlockEntity::tick(FurnaceBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r5@1
  FurnaceBlockEntity *v3; // r4@1
  signed int v4; // r7@1
  Level *v5; // r0@3
  signed int result; // r0@3
  const BlockPos *v7; // r3@3
  signed int v8; // r0@4
  signed int v9; // r8@5
  const ItemInstance *v10; // r1@6
  signed int v11; // r0@7
  bool v12; // zf@8
  ItemInstance *v13; // r0@13
  int v14; // r0@25
  signed int v15; // r0@27
  int v16; // r0@28
  signed int v17; // r1@28
  signed int v18; // r1@33
  signed int v19; // r2@33
  bool v20; // nf@38
  FurnaceBlock *v21; // r0@38
  int v22; // [sp+0h] [bp-60h]@13
  int v23; // [sp+8h] [bp-58h]@17
  void *v24; // [sp+24h] [bp-3Ch]@15
  void *ptr; // [sp+34h] [bp-2Ch]@13

  v2 = a2;
  v3 = this;
  BlockEntity::tick(this, a2);
  v4 = *((_DWORD *)v3 + 54);
  if ( v4 >= 1 )
    *((_DWORD *)v3 + 54) = v4 - 1;
  v5 = (Level *)BlockSource::getLevel(v2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v8 = *((_DWORD *)v3 + 54);
    if ( v8 )
    {
      v9 = 0;
    }
    else
      if ( FurnaceBlockEntity::canBurn(v3) == 1 )
      {
        v11 = FurnaceBlockEntity::getBurnDuration((FurnaceBlockEntity *)((char *)v3 + 304), v10);
        *((_DWORD *)v3 + 54) = v11;
        *((_DWORD *)v3 + 55) = v11;
        if ( v11 < 1 )
        {
          v9 = 0;
        }
        else
          v12 = *((_BYTE *)v3 + 319) == 0;
          if ( *((_BYTE *)v3 + 319) )
            v12 = *((_DWORD *)v3 + 76) == 0;
          if ( !v12 && !ItemInstance::isNull((FurnaceBlockEntity *)((char *)v3 + 304)) && *((_BYTE *)v3 + 318) )
          {
            ItemInstance::operator=((int)v3 + 456, (int)v3 + 304);
            ItemInstance::set((FurnaceBlockEntity *)((char *)v3 + 456), 1);
            v13 = ItemInstance::ItemInstance((ItemInstance *)&v22, (int)v3 + 304);
            ItemInstance::useAsFuel(v13);
            (*(void (__fastcall **)(FurnaceBlockEntity *, signed int, int *))(*(_DWORD *)v3 + 120))(v3, 1, &v22);
            if ( ptr )
              operator delete(ptr);
            if ( v24 )
              operator delete(v24);
            if ( v23 )
              (*(void (**)(void))(*(_DWORD *)v23 + 4))();
          }
          v9 = 1;
      }
      else
        v9 = 0;
      v8 = *((_DWORD *)v3 + 54);
    if ( v8 < 1 || FurnaceBlockEntity::canBurn(v3) != 1 )
      v15 = *((_DWORD *)v3 + 56);
      if ( v15 >= 1 )
        v16 = v15 - 2;
        v17 = v16;
        if ( v16 <= 0 )
          v17 = 0;
        if ( v16 > 200 )
          v17 = 200;
        *((_DWORD *)v3 + 56) = v17;
      v14 = *((_DWORD *)v3 + 56) + 1;
      *((_DWORD *)v3 + 56) = v14;
      if ( v14 == 200 )
        *((_DWORD *)v3 + 56) = 0;
        FurnaceBlockEntity::burn(v3);
        v9 = 1;
    result = *((_DWORD *)v3 + 54);
    v18 = 0;
    v19 = 0;
    if ( v4 > 0 )
      v18 = 1;
    if ( result > 0 )
      v19 = 1;
    if ( v18 != v19 )
      v12 = result == 0;
      v20 = result < 0;
      v21 = 0;
      *((_BYTE *)v3 + 530) = 1;
      if ( !v20 && !v12 )
        v21 = (FurnaceBlock *)1;
      FurnaceBlock::setLit(v21, (int)v2, (FurnaceBlockEntity *)((char *)v3 + 32), v7);
      *((_BYTE *)v3 + 530) = 0;
      return BlockEntity::setChanged(v3);
    if ( v9 == 1 )
  }
  if ( v4 <= 0 )
    result = 1;
    *((_BYTE *)v3 + 529) = 1;
  return result;
}


void __fastcall FurnaceBlockEntity::checkForSmeltEverythingAchievement(FurnaceBlockEntity *this, BlockSource *a2)
{
  FurnaceBlockEntity *v2; // r5@1
  BlockSource *v3; // r4@1
  int v4; // r9@1
  int v12; // r1@2
  int v13; // r2@2
  BlockEntity *v14; // r0@2
  HopperBlockEntity *v15; // r7@2
  int v16; // r0@5
  Level *v17; // r0@10
  int v18; // r0@10
  void *v19; // r0@10
  void *v20; // r0@11
  void *v21; // r0@12
  unsigned int *v22; // r2@14
  signed int v23; // r1@16
  unsigned int *v24; // r2@18
  signed int v25; // r1@20
  unsigned int *v26; // r2@22
  signed int v27; // r1@24
  signed int v28; // [sp+4h] [bp-8Ch]@1
  void **v29; // [sp+8h] [bp-88h]@2
  int v30; // [sp+Ch] [bp-84h]@2
  int v31; // [sp+10h] [bp-80h]@2
  int v32; // [sp+40h] [bp-50h]@12
  int v33; // [sp+44h] [bp-4Ch]@11
  int v34; // [sp+48h] [bp-48h]@10
  void **v35; // [sp+54h] [bp-3Ch]@2
  int v36; // [sp+58h] [bp-38h]@2
  int v37; // [sp+5Ch] [bp-34h]@2
  float v38; // [sp+60h] [bp-30h]@2

  v2 = this;
  v3 = a2;
  v4 = 0;
  v28 = 0;
  do
  {
    _R1 = &Facing::STEP_X[v4];
    _R0 = &Facing::STEP_Z[v4];
    __asm { VLDR            S0, [R1] }
    _R1 = &Facing::STEP_Y[v4];
    __asm
    {
      VLDR            S4, [R0]
      VLDR            S2, [R1]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VSTR            S0, [SP,#0x90+var_30]
      VSTR            S2, [SP,#0x90+var_2C]
      VSTR            S4, [SP,#0x90+var_28]
    }
    BlockPos::BlockPos((int)&v29, (int)&v38);
    v12 = *((_DWORD *)v2 + 9);
    v13 = *((_DWORD *)v2 + 10);
    v35 = (void **)((char *)v29 + *((_DWORD *)v2 + 8));
    v36 = v30 + v12;
    v37 = v31 + v13;
    v14 = (BlockEntity *)BlockSource::getBlockEntity(v3, (const BlockPos *)&v35);
    v15 = v14;
    if ( v14
      && *(_DWORD *)BlockEntity::getType(v14) == 15
      && HopperBlockEntity::isAttachedToChestAndFurnace(v15, v3) == 1 )
      _ZF = HopperBlockEntity::getAttachedFurnace(v15, v3) == v2;
      v16 = v28;
      if ( _ZF )
        v16 = v28 + 1;
      v28 = v16;
    ++v4;
  }
  while ( v4 != 6 );
  if ( v28 > 2 )
    EventPacket::EventPacket((int)&v29, 0, 53, 0);
    v17 = (Level *)BlockSource::getLevel(v3);
    v18 = Level::getPacketSender(v17);
    (*(void (**)(void))(*(_DWORD *)v18 + 8))();
    v29 = &off_26E9D30;
    v19 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v34 - 4);
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
        j_j_j_j__ZdlPv_9(v19);
    v20 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v33 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v32 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
}


signed int __fastcall FurnaceBlockEntity::burn(FurnaceBlockEntity *this)
{
  const ItemInstance *v1; // r6@0
  FurnaceBlockEntity *v2; // r4@1
  signed int result; // r0@1
  FurnaceRecipes *v4; // r0@2
  bool v5; // zf@2
  int v6; // r0@10
  Block *v7; // r0@17
  int v8; // r1@20
  bool v9; // zf@20
  int v10; // [sp+0h] [bp-140h]@31
  int v11; // [sp+8h] [bp-138h]@35
  void *v12; // [sp+24h] [bp-11Ch]@33
  void *v13; // [sp+34h] [bp-10Ch]@31
  char v14; // [sp+48h] [bp-F8h]@25
  int v15; // [sp+50h] [bp-F0h]@29
  void *v16; // [sp+6Ch] [bp-D4h]@27
  void *v17; // [sp+7Ch] [bp-C4h]@25
  char v18; // [sp+90h] [bp-B0h]@10
  int v19; // [sp+98h] [bp-A8h]@14
  void *v20; // [sp+B4h] [bp-8Ch]@12
  void *ptr; // [sp+C4h] [bp-7Ch]@10
  int v22; // [sp+D8h] [bp-68h]@2
  int v23; // [sp+E0h] [bp-60h]@41
  void *v24; // [sp+FCh] [bp-44h]@39
  void *v25; // [sp+10Ch] [bp-34h]@37
  __int64 v26; // [sp+120h] [bp-20h]@9
  __int64 v27; // [sp+128h] [bp-18h]@9

  v2 = this;
  result = FurnaceBlockEntity::canBurn(this);
  if ( result == 1 )
  {
    v4 = FurnaceRecipes::getInstance((FurnaceRecipes *)1);
    FurnaceRecipes::getResult((FurnaceRecipes *)&v22, v4, (int)v2 + 232);
    v5 = *((_BYTE *)v2 + 391) == 0;
    if ( *((_BYTE *)v2 + 391) )
    {
      v1 = (FurnaceBlockEntity *)((char *)v2 + 376);
      v5 = *((_DWORD *)v2 + 94) == 0;
    }
    if ( v5 || ItemInstance::isNull(v1) || !*((_BYTE *)v2 + 390) )
      (*(void (__fastcall **)(FurnaceBlockEntity *, signed int, int *))(*(_DWORD *)v2 + 120))(v2, 2, &v22);
    else if ( *(_DWORD *)v1 )
      if ( v22 == *(_DWORD *)v1 )
      {
        MapItem::getMapId((MapItem *)&v27, v1);
        MapItem::getMapId((MapItem *)&v26, (const ItemInstance *)&v22);
        if ( !(v27 ^ v26) )
        {
          v6 = (*(int (__fastcall **)(FurnaceBlockEntity *, signed int))(*(_DWORD *)v2 + 116))(v2, 2);
          ItemInstance::clone((ItemInstance *)&v18, v6);
          ItemInstance::add((ItemInstance *)&v18, 1);
          (*(void (__fastcall **)(FurnaceBlockEntity *, signed int, char *))(*(_DWORD *)v2 + 120))(v2, 2, &v18);
          if ( ptr )
            operator delete(ptr);
          if ( v20 )
            operator delete(v20);
          if ( v19 )
            (*(void (**)(void))(*(_DWORD *)v19 + 4))();
        }
      }
    v7 = (Block *)*((_DWORD *)v2 + 59);
    if ( v7
      && Block::isType(v7, (const Block *)Block::mSponge) == 1
      && (unsigned __int16)ItemInstance::getAuxValue((FurnaceBlockEntity *)((char *)v2 + 232)) == 1 )
      v8 = *((_DWORD *)v2 + 76);
      v9 = v8 == Item::mBucket;
      if ( v8 == Item::mBucket )
        v9 = *((_BYTE *)v2 + 318) == 1;
      if ( v9 && !(unsigned __int16)ItemInstance::getAuxValue((FurnaceBlockEntity *)((char *)v2 + 304)) )
        ItemInstance::ItemInstance((ItemInstance *)&v14, Item::mBucket, 1, *(_BYTE *)(Block::mFlowingWater + 4));
        (*(void (__fastcall **)(FurnaceBlockEntity *, signed int, char *))(*(_DWORD *)v2 + 120))(v2, 1, &v14);
        if ( v17 )
          operator delete(v17);
        if ( v16 )
          operator delete(v16);
        if ( v15 )
          (*(void (**)(void))(*(_DWORD *)v15 + 4))();
    ItemInstance::ItemInstance((ItemInstance *)&v10, (int)v2 + 232);
    ItemInstance::remove((ItemInstance *)&v10, 1);
    (*(void (__fastcall **)(FurnaceBlockEntity *, _DWORD, int *))(*(_DWORD *)v2 + 120))(v2, 0, &v10);
    *((_BYTE *)v2 + 450) = 1;
    *((_BYTE *)v2 + 448) = 1;
    if ( v13 )
      operator delete(v13);
    if ( v12 )
      operator delete(v12);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    if ( v25 )
      operator delete(v25);
    if ( v24 )
      operator delete(v24);
    result = v23;
    if ( v23 )
      result = (*(int (**)(void))(*(_DWORD *)v23 + 4))();
  }
  return result;
}


int __fastcall FurnaceBlockEntity::resetBurnProgress(int result)
{
  *(_DWORD *)(result + 224) = 0;
  return result;
}


unsigned int __fastcall FurnaceBlockEntity::isFinished(FurnaceBlockEntity *this)
{
  unsigned int v1; // r0@1
  signed int v2; // r1@1

  v1 = *((_WORD *)this + 264);
  v2 = 0;
  if ( v1 > 0xFF )
    v2 = 1;
  v1 = (unsigned __int8)v1;
  if ( (_BYTE)v1 )
    v1 = 1;
  return v1 & v2;
}


char *__fastcall FurnaceBlockEntity::getItem(FurnaceBlockEntity *this, int a2)
{
  return (char *)this + 72 * a2 + 232;
}


void __fastcall FurnaceBlockEntity::checkForSmeltEverythingAchievement(FurnaceBlockEntity *this, BlockSource *a2)
{
  FurnaceBlockEntity::checkForSmeltEverythingAchievement(this, a2);
}


int __fastcall FurnaceBlockEntity::setTickCount(int result, int a2)
{
  *(_DWORD *)(result + 224) = a2;
  return result;
}


void __fastcall FurnaceBlockEntity::onNeighborChanged(FurnaceBlockEntity *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  FurnaceBlockEntity *v4; // r5@1
  Level *v5; // r0@1

  v3 = a2;
  v4 = this;
  v5 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v5) )
    j_j_j__ZN18FurnaceBlockEntity34checkForSmeltEverythingAchievementER11BlockSource(v4, v3);
}


signed int __fastcall FurnaceBlockEntity::getBurnDuration(FurnaceBlockEntity *this, const ItemInstance *a2)
{
  FurnaceBlockEntity *v2; // r4@1
  int v3; // r0@1
  bool v4; // zf@1
  signed int v5; // r6@6
  int *v6; // r0@7
  signed int result; // r0@8

  v2 = this;
  v3 = *((_BYTE *)this + 15);
  v4 = v3 == 0;
  if ( v3 )
    v4 = *(_DWORD *)v2 == 0;
  if ( v4 || ItemInstance::isNull(v2) || !*((_BYTE *)v2 + 14) )
  {
    result = 0;
  }
  else
    v5 = *(_WORD *)(*(_DWORD *)v2 + 18);
    if ( v5 <= 255 && (v6 = (int *)Block::getMaterial((Block *)Block::mBlocks[v5]), Material::isType(v6, 2)) )
    {
      result = 300;
    }
    else if ( (unsigned __int16)v5 == *(_WORD *)(Item::mStick + 18) )
      result = 100;
    else if ( (unsigned __int16)v5 == *(_WORD *)(Item::mCoal + 18) )
      result = 1600;
    else if ( (unsigned __int16)v5 != *(_WORD *)(Item::mBucket + 18)
           || ItemInstance::getAuxValue(v2) != *(_BYTE *)(Block::mFlowingLava + 4) )
      if ( v5 == *(_BYTE *)(Block::mSapling + 4) )
      {
        result = 100;
      }
      else if ( v5 == *(_BYTE *)(Block::mCoalBlock + 4) )
        result = 16000;
      else if ( (unsigned __int16)v5 == *(_WORD *)(Item::mBlazeRod + 18) )
        result = 2400;
      else if ( (unsigned __int16)v5 != *(_WORD *)(Item::mBow + 18)
             && (unsigned __int16)v5 != *(_WORD *)(Item::mBowl + 18)
             && (unsigned __int16)v5 != *(_WORD *)(Item::mShovel_wood + 18)
             && (unsigned __int16)v5 != *(_WORD *)(Item::mHoe_wood + 18)
             && (unsigned __int16)v5 != *(_WORD *)(Item::mPickAxe_wood + 18)
             && (unsigned __int16)v5 != *(_WORD *)(Item::mHatchet_wood + 18)
             && (unsigned __int16)v5 != *(_WORD *)(Item::mSword_wood + 18) )
        if ( (unsigned __int16)v5 == *(_WORD *)(Item::mBoat + 18) )
        {
          result = 1200;
        }
        else
          result = 0;
          if ( (unsigned __int16)v5 == *(_WORD *)(Item::mBanner + 18) )
            result = 300;
      else
        result = 200;
    else
      result = 20000;
  return result;
}


signed int __fastcall FurnaceBlockEntity::getMaxStackSize(FurnaceBlockEntity *this)
{
  return 64;
}


void __fastcall FurnaceBlockEntity::load(FurnaceBlockEntity *this, const CompoundTag *a2)
{
  FurnaceBlockEntity::load(this, a2);
}


signed int __fastcall FurnaceBlockEntity::isLit(FurnaceBlockEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 54);
  result = 0;
  if ( v1 > 0 )
    result = 1;
  return result;
}


signed int __fastcall FurnaceBlockEntity::save(FurnaceBlockEntity *this, CompoundTag *a2)
{
  ItemInstance *v2; // r8@0
  CompoundTag *v3; // r4@1
  FurnaceBlockEntity *v4; // r5@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r6@5
  signed int v9; // r9@5
  signed int result; // r0@6
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  int v13; // r4@15
  bool v14; // zf@15
  int v15; // r4@20
  void *v16; // r0@20
  int v17; // r0@21
  void *v18; // r0@28
  unsigned int *v19; // r2@30
  signed int v20; // r1@32
  unsigned int *v21; // r2@34
  signed int v22; // r1@36
  unsigned int *v23; // r2@38
  signed int v24; // r1@40
  unsigned int *v25; // r2@42
  signed int v26; // r1@44
  int v27; // [sp+8h] [bp-60h]@5
  void *v28; // [sp+Ch] [bp-5Ch]@26
  int v29; // [sp+14h] [bp-54h]@26
  int v30; // [sp+18h] [bp-50h]@21
  int v31; // [sp+20h] [bp-48h]@7
  int v32; // [sp+24h] [bp-44h]@20
  int v33; // [sp+2Ch] [bp-3Ch]@4
  int v34; // [sp+34h] [bp-34h]@3
  int v35; // [sp+3Ch] [bp-2Ch]@2
  int v36; // [sp+48h] [bp-20h]@7

  v3 = a2;
  v4 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    sub_21E94B4((void **)&v35, "BurnTime");
    CompoundTag::putShort((int)v3, (const void **)&v35, *((_WORD *)v4 + 108));
    v5 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v35 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    }
    sub_21E94B4((void **)&v34, "CookTime");
    CompoundTag::putShort((int)v3, (const void **)&v34, *((_WORD *)v4 + 112));
    v6 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v34 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    sub_21E94B4((void **)&v33, "BurnDuration");
    CompoundTag::putShort((int)v3, (const void **)&v33, *((_WORD *)v4 + 110));
    v7 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v33 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v27 = (int)v3;
    v8 = operator new(0x14u);
    ListTag::ListTag((int)v8);
    v9 = 0;
    do
      v13 = (int)v4 + 72 * v9;
      v14 = *(_BYTE *)(v13 + 247) == 0;
      if ( *(_BYTE *)(v13 + 247) )
        v2 = (ItemInstance *)(v13 + 232);
        v14 = *(_DWORD *)(v13 + 232) == 0;
      if ( !v14 && !ItemInstance::isNull(v2) && *(_BYTE *)(v13 + 246) )
        ItemInstance::save((ItemInstance *)&v32, v2);
        v15 = v32;
        sub_21E94B4((void **)&v31, "Slot");
        CompoundTag::putByte(v15, (const void **)&v31, v9);
        v16 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
        {
          v11 = (unsigned int *)(v31 - 4);
          if ( v36 )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        }
        v17 = v32;
        v32 = 0;
        v30 = v17;
        ListTag::add((int)v8, &v30);
        if ( v30 )
          (*(void (**)(void))(*(_DWORD *)v30 + 4))();
        v30 = 0;
        if ( v32 )
          (*(void (**)(void))(*(_DWORD *)v32 + 4))();
      ++v9;
    while ( v9 < 3 );
    sub_21E94B4((void **)&v29, "Items");
    v28 = v8;
    CompoundTag::put(v27, (const void **)&v29, (int *)&v28);
    if ( v28 )
      (*(void (**)(void))(*(_DWORD *)v28 + 4))();
    v28 = 0;
    v18 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v29 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall FurnaceBlockEntity::isIngredient(FurnaceBlockEntity *this, const ItemInstance *a2)
{
  FurnaceBlockEntity *v2; // r4@1
  FurnaceRecipes *v3; // r0@1
  signed int v4; // r4@4
  int v6; // [sp+0h] [bp-50h]@1
  int v7; // [sp+8h] [bp-48h]@13
  unsigned __int8 v8; // [sp+Eh] [bp-42h]@7
  char v9; // [sp+Fh] [bp-41h]@1
  void *v10; // [sp+24h] [bp-2Ch]@11
  void *ptr; // [sp+34h] [bp-1Ch]@9

  v2 = this;
  v3 = FurnaceRecipes::getInstance(this);
  FurnaceRecipes::getResult((FurnaceRecipes *)&v6, v3, (int)v2);
  if ( v9 )
  {
    if ( v6 )
    {
      if ( ItemInstance::isNull((ItemInstance *)&v6) )
      {
        v4 = 0;
      }
      else
        v4 = v8;
        if ( v8 )
          v4 = 1;
    }
    else
      v4 = 0;
  }
  else
    v4 = 0;
  if ( ptr )
    operator delete(ptr);
  if ( v10 )
    operator delete(v10);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  return v4;
}


int __fastcall FurnaceBlockEntity::canPushInItem(FurnaceBlockEntity *this, BlockSource *a2, int a3, int a4, const ItemInstance *a5)
{
  int result; // r0@3
  signed int v6; // r4@7

  if ( a3 == 1 )
  {
    v6 = 0;
    if ( a4 != 1 && FurnaceBlockEntity::getBurnDuration(a5, a2) > 0 )
      v6 = 1;
    result = v6;
  }
  else if ( a3 )
    result = 0;
  else
    if ( a4 != 1 )
      a4 = 0;
    result = a4;
  return result;
}


int __fastcall FurnaceBlockEntity::setLitTime(int result, int a2)
{
  *(_DWORD *)(result + 216) = a2;
  return result;
}


int __fastcall FurnaceBlockEntity::getLitProgress(FurnaceBlockEntity *this, int a2)
{
  int v2; // r4@1
  signed int v3; // r1@1
  int result; // r0@3

  v2 = a2;
  v3 = *((_DWORD *)this + 55);
  if ( !v3 )
  {
    v3 = 200;
    *((_DWORD *)this + 55) = 200;
  }
  result = *((_DWORD *)this + 54) * v2 / v3;
  if ( result >= v2 )
    result = v2;
  return result;
}


char *__fastcall FurnaceBlockEntity::getLastFuelSource(FurnaceBlockEntity *this)
{
  return (char *)this + 456;
}


    if ( a4 != 1 && FurnaceBlockEntity::getBurnDuration(a5, a2) > 0 )
{
    result = v6;
  }
  else if ( a3 )
  {
    result = 0;
  else
    if ( a4 != 1 )
      a4 = 0;
    result = a4;
  return result;
}


int __fastcall FurnaceBlockEntity::FurnaceBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  double v4; // r0@1
  unsigned int *v6; // r2@3
  int v7; // [sp+4h] [bp-24h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v7, "Furnace");
  BlockEntity::BlockEntity(v3, 1, v2);
  HIDWORD(v4) = v7;
  LODWORD(v4) = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        HIDWORD(v4) = __ldrex(v6);
      while ( __strex(HIDWORD(v4) - 1, v6) );
    }
    else
      HIDWORD(v4) = (*v6)--;
    if ( SHIDWORD(v4) <= 0 )
      j_j_j_j__ZdlPv_9((void *)LODWORD(v4));
  }
  LODWORD(v4) = v3 + 104;
  Container::Container(v4);
  *(_DWORD *)v3 = &off_2709C38;
  *(_DWORD *)(v3 + 104) = &off_2709CD4;
  *(_DWORD *)(v3 + 216) = 0;
  *(_DWORD *)(v3 + 220) = 0;
  *(_DWORD *)(v3 + 224) = 0;
  ItemInstance::ItemInstance(v3 + 232);
  ItemInstance::ItemInstance(v3 + 304);
  ItemInstance::ItemInstance(v3 + 376);
  ItemInstance::ItemInstance(v3 + 456);
  *(_WORD *)(v3 + 528) = 0;
  *(_BYTE *)(v3 + 530) = 0;
  return v3;
}


signed int __fastcall FurnaceBlockEntity::canPullOutItem(FurnaceBlockEntity *this, BlockSource *a2, int a3, int a4, const ItemInstance *a5)
{
  signed int v5; // r4@2

  if ( a3 == 1 )
  {
    if ( a4 )
      return 0;
    v5 = 0;
    if ( ItemInstance::getId(a5) == *(_WORD *)(Item::mBucket + 18)
      && ItemInstance::getAuxValue(a5) == *(_BYTE *)(Block::mAir + 4) )
    {
      v5 = 1;
    }
    return v5;
  }
  v5 = 0;
  if ( a3 != 2 )
  if ( !a4 )
    v5 = 1;
  return v5;
}


int __fastcall FurnaceBlockEntity::_getPositionOfNeighbor(FurnaceBlockEntity *this, int a2, int a3)
{
  int v3; // r5@1
  FurnaceBlockEntity *v4; // r4@1
  __int64 v12; // kr00_8@1
  int v13; // r2@1
  int v14; // r1@1
  int v15; // r0@1
  int result; // r0@1
  float v17; // [sp+0h] [bp-28h]@1
  int v18; // [sp+Ch] [bp-1Ch]@1
  int v19; // [sp+10h] [bp-18h]@1
  int v20; // [sp+14h] [bp-14h]@1

  v3 = a2;
  v4 = this;
  _R1 = &Facing::STEP_X[a3];
  __asm { VLDR            S0, [R1] }
  _R0 = &Facing::STEP_Z[a3];
  _R1 = &Facing::STEP_Y[a3];
  __asm
  {
    VLDR            S4, [R0]
    VCVT.F32.S32    S0, S0
    VLDR            S2, [R1]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VSTR            S0, [SP,#0x28+var_28]
    VSTR            S2, [SP,#0x28+var_24]
    VSTR            S4, [SP,#0x28+var_20]
  }
  BlockPos::BlockPos((int)&v18, (int)&v17);
  v12 = *(_QWORD *)(v3 + 32);
  v13 = *(_DWORD *)(v3 + 40);
  v14 = HIDWORD(v12) + v19;
  v15 = v20;
  *(_DWORD *)v4 = v18 + v12;
  *((_DWORD *)v4 + 1) = v14;
  result = v15 + v13;
  *((_DWORD *)v4 + 2) = result;
  return result;
}


void __fastcall FurnaceBlockEntity::~FurnaceBlockEntity(FurnaceBlockEntity *this)
{
  FurnaceBlockEntity::~FurnaceBlockEntity(this);
}


void __fastcall FurnaceBlockEntity::~FurnaceBlockEntity(FurnaceBlockEntity *this)
{
  BlockEntity *v1; // r0@1

  v1 = FurnaceBlockEntity::~FurnaceBlockEntity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall FurnaceBlockEntity::onFurnaceBlockRemoved(FurnaceBlockEntity *this, BlockSource *a2)
{
  FurnaceBlockEntity *v2; // r5@1
  BlockSource *v3; // r4@1
  int result; // r0@1
  int v5; // r5@2
  int v6; // t1@2
  int (__fastcall *v7)(int, BlockSource *, int *, _DWORD); // r7@2
  int v8; // [sp+0h] [bp-20h]@2

  v2 = this;
  v3 = a2;
  result = *((_BYTE *)this + 530);
  if ( !result )
  {
    v6 = *((_DWORD *)v2 + 26);
    v5 = (int)v2 + 104;
    v7 = *(int (__fastcall **)(int, BlockSource *, int *, _DWORD))(v6 + 40);
    Vec3::Vec3((int)&v8, v5 - 72);
    result = v7(v5, v3, &v8, 0);
  }
  return result;
}


signed int __fastcall FurnaceBlockEntity::canBurn(FurnaceBlockEntity *this)
{
  FurnaceBlockEntity *v1; // r4@1
  signed int v2; // r4@4
  FurnaceRecipes *v3; // r0@8
  int v4; // r6@25
  unsigned int v5; // r6@26
  unsigned int v6; // r5@30
  int v8; // [sp+0h] [bp-58h]@8
  int v9; // [sp+8h] [bp-50h]@36
  char v10; // [sp+Eh] [bp-4Ah]@15
  char v11; // [sp+Fh] [bp-49h]@8
  void *v12; // [sp+24h] [bp-34h]@34
  void *ptr; // [sp+34h] [bp-24h]@32

  v1 = this;
  if ( *((_BYTE *)this + 247) )
  {
    if ( *((_DWORD *)this + 58) )
    {
      if ( ItemInstance::isNull((FurnaceBlockEntity *)((char *)this + 232)) )
      {
        v2 = 0;
      }
      else if ( *((_BYTE *)v1 + 246) )
        v3 = FurnaceRecipes::getInstance((FurnaceRecipes *)*((_BYTE *)v1 + 246));
        FurnaceRecipes::getResult((FurnaceRecipes *)&v8, v3, (int)v1 + 232);
        if ( v11 )
        {
          if ( v8 )
          {
            if ( ItemInstance::isNull((ItemInstance *)&v8) )
            {
              v2 = 0;
            }
            else if ( v10 )
              if ( *((_BYTE *)v1 + 391) )
              {
                if ( *((_DWORD *)v1 + 94) )
                {
                  if ( ItemInstance::isNull((FurnaceBlockEntity *)((char *)v1 + 376)) )
                  {
                    v2 = 1;
                  }
                  else if ( *((_BYTE *)v1 + 390) )
                    if ( ItemInstance::sameItemAndAux(
                           (FurnaceBlockEntity *)((char *)v1 + 376),
                           (const ItemInstance *)&v8) == 1 )
                    {
                      v4 = *((_BYTE *)v1 + 390);
                      if ( v4 >= (*(int (__fastcall **)(FurnaceBlockEntity *))(*(_DWORD *)v1 + 124))(v1)
                        || (v5 = *((_BYTE *)v1 + 390),
                            v5 >= ItemInstance::getMaxStackSize((FurnaceBlockEntity *)((char *)v1 + 376))) )
                      {
                        v6 = *((_BYTE *)v1 + 390);
                        v2 = 0;
                        if ( v6 < ItemInstance::getMaxStackSize((ItemInstance *)&v8) )
                          v2 = 1;
                      }
                      else
                        v2 = 1;
                    }
                    else
                      v2 = 0;
                  else
                }
                else
                  v2 = 1;
              }
              else
                v2 = 1;
            else
          }
          else
            v2 = 0;
        }
        else
          v2 = 0;
        if ( ptr )
          operator delete(ptr);
        if ( v12 )
          operator delete(v12);
        if ( v9 )
          (*(void (**)(void))(*(_DWORD *)v9 + 4))();
      else
    }
    else
      v2 = 0;
  }
  else
    v2 = 0;
  return v2;
}


int __fastcall FurnaceBlockEntity::resetSlotsDirty(int result)
{
  *(_BYTE *)(result + 448) = 0;
  *(_WORD *)(result + 449) = 0;
  return result;
}
