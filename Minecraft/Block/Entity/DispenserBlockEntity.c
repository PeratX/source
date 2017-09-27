

int __fastcall DispenserBlockEntity::DispenserBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int v5; // r0@2
  signed int v6; // r2@2
  int v7; // r1@2
  int v8; // r0@3
  int v9; // r5@3
  int v10; // r6@3
  int v11; // r5@5
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  int v15; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v15, "Dispenser");
  RandomizableBlockEntityContainer::RandomizableBlockEntityContainer(v3, 13, (int)&v15, v2);
  v4 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &off_27096B4;
  *(_DWORD *)(v3 + 112) = &off_2709750;
  ItemInstance::ItemInstance(v3 + 224);
  ItemInstance::ItemInstance(v3 + 296);
  ItemInstance::ItemInstance(v3 + 368);
  ItemInstance::ItemInstance(v3 + 440);
  ItemInstance::ItemInstance(v3 + 512);
  ItemInstance::ItemInstance(v3 + 584);
  ItemInstance::ItemInstance(v3 + 656);
  ItemInstance::ItemInstance(v3 + 728);
  ItemInstance::ItemInstance(v3 + 800);
  v5 = sub_21E67AC((int)&Random::mRandomDevice);
  *(_DWORD *)(v3 + 872) = v5;
  v6 = 1;
  *(_DWORD *)(v3 + 3372) = 625;
  v7 = 0;
  *(_BYTE *)(v3 + 3376) = 0;
  *(_DWORD *)(v3 + 3380) = 0;
  *(_DWORD *)(v3 + 876) = v5;
  do
    v8 = v5 ^ (v5 >> 30);
    v9 = v3 + 4 * v7;
    v10 = v7++ + 1812433253 * v8;
    v5 = v6++ + 1812433253 * v8;
    *(_DWORD *)(v9 + 880) = v10 + 1;
  while ( v7 != 397 );
  *(_DWORD *)(v3 + 3372) = 624;
  *(_DWORD *)(v3 + 3384) = 398;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 124))(v3) >= 1 )
    v11 = 0;
    do
      (*(void (__fastcall **)(int, int, void *))(*(_DWORD *)v3 + 132))(v3, v11++, &ItemInstance::EMPTY_ITEM);
    while ( v11 < (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 124))(v3) );
  return v3;
}


signed int __fastcall DispenserBlockEntity::save(DispenserBlockEntity *this, CompoundTag *a2)
{
  ItemInstance *v2; // r8@0
  CompoundTag *v3; // r4@1
  DispenserBlockEntity *v4; // r5@1
  void *v5; // r4@2
  signed int v6; // r9@2
  signed int result; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int v10; // r6@12
  bool v11; // zf@12
  int v12; // r6@17
  void *v13; // r0@17
  int v14; // r0@18
  void *v15; // r0@25
  int *v16; // r5@26
  int v17; // t1@26
  void *v18; // r0@27
  unsigned int *v19; // r2@29
  signed int v20; // r1@31
  unsigned int *v21; // r2@33
  signed int v22; // r1@35
  int v23; // [sp+8h] [bp-50h]@2
  int v24; // [sp+10h] [bp-48h]@27
  void *v25; // [sp+14h] [bp-44h]@23
  int v26; // [sp+1Ch] [bp-3Ch]@23
  int v27; // [sp+20h] [bp-38h]@18
  int v28; // [sp+28h] [bp-30h]@4
  int v29; // [sp+2Ch] [bp-2Ch]@17
  int v30; // [sp+38h] [bp-20h]@4

  v3 = a2;
  v4 = this;
  if ( RandomizableBlockEntityContainerBase::save(this, a2) == 1 )
  {
    v23 = (int)v3;
    v5 = operator new(0x14u);
    ListTag::ListTag((int)v5);
    v6 = 0;
    do
    {
      v10 = (int)v4 + 72 * v6;
      v11 = *(_BYTE *)(v10 + 239) == 0;
      if ( *(_BYTE *)(v10 + 239) )
      {
        v2 = (ItemInstance *)(v10 + 224);
        v11 = *(_DWORD *)(v10 + 224) == 0;
      }
      if ( !v11 && !ItemInstance::isNull(v2) && *(_BYTE *)(v10 + 238) )
        ItemInstance::save((ItemInstance *)&v29, v2);
        v12 = v29;
        sub_21E94B4((void **)&v28, "Slot");
        CompoundTag::putByte(v12, (const void **)&v28, v6);
        v13 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
        {
          v8 = (unsigned int *)(v28 - 4);
          if ( v30 )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          }
          else
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        }
        v14 = v29;
        v29 = 0;
        v27 = v14;
        ListTag::add((int)v5, &v27);
        if ( v27 )
          (*(void (**)(void))(*(_DWORD *)v27 + 4))();
        v27 = 0;
        if ( v29 )
          (*(void (**)(void))(*(_DWORD *)v29 + 4))();
      ++v6;
    }
    while ( v6 < 9 );
    sub_21E94B4((void **)&v26, "Items");
    v25 = v5;
    CompoundTag::put(v23, (const void **)&v26, (int *)&v25);
    if ( v25 )
      (*(void (**)(void))(*(_DWORD *)v25 + 4))();
    v25 = 0;
    v15 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v17 = *((_DWORD *)v4 + 54);
    v16 = (int *)((char *)v4 + 216);
    if ( *(_DWORD *)(v17 - 12) )
      sub_21E94B4((void **)&v24, "CustomName");
      CompoundTag::putString(v23, (const void **)&v24, v16);
      v18 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v24 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        else
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall DispenserBlockEntity::~DispenserBlockEntity(DispenserBlockEntity *this)
{
  RandomizableBlockEntityContainer *v1; // r4@1
  signed int v2; // r5@1
  int v3; // r7@2
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  v2 = 648;
  *(_DWORD *)this = &off_27096B4;
  *((_DWORD *)this + 28) = &off_2709750;
  do
  {
    v3 = (int)v1 + v2;
    v4 = *(void **)((char *)v1 + v2 + 204);
    if ( v4 )
      operator delete(v4);
    v5 = *(void **)(v3 + 188);
    if ( v5 )
      operator delete(v5);
    v6 = *(_DWORD *)(v3 + 160);
    if ( v6 )
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    v2 -= 72;
    *(_DWORD *)(v3 + 160) = 0;
  }
  while ( v2 );
  RandomizableBlockEntityContainer::~RandomizableBlockEntityContainer(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


RandomizableBlockEntityContainer *__fastcall DispenserBlockEntity::~DispenserBlockEntity(DispenserBlockEntity *this)
{
  RandomizableBlockEntityContainer *v1; // r4@1
  signed int v2; // r5@1
  int v3; // r7@2
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  v2 = 648;
  *(_DWORD *)this = &off_27096B4;
  *((_DWORD *)this + 28) = &off_2709750;
  do
  {
    v3 = (int)v1 + v2;
    v4 = *(void **)((char *)v1 + v2 + 204);
    if ( v4 )
      operator delete(v4);
    v5 = *(void **)(v3 + 188);
    if ( v5 )
      operator delete(v5);
    v6 = *(_DWORD *)(v3 + 160);
    if ( v6 )
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    v2 -= 72;
    *(_DWORD *)(v3 + 160) = 0;
  }
  while ( v2 );
  return j_j_j__ZN32RandomizableBlockEntityContainerD2Ev(v1);
}


int __fastcall DispenserBlockEntity::setItem(DispenserBlockEntity *this, int a2, const ItemInstance *a3)
{
  int v3; // r8@1
  DispenserBlockEntity *v4; // r5@1
  int v5; // r6@1
  unsigned __int8 v6; // r0@2
  int result; // r0@7
  int v8; // [sp+0h] [bp-60h]@1
  int v9; // [sp+8h] [bp-58h]@7
  unsigned __int8 v10; // [sp+Eh] [bp-52h]@1
  void *v11; // [sp+24h] [bp-3Ch]@5
  void *ptr; // [sp+34h] [bp-2Ch]@3

  v3 = a2;
  v4 = this;
  ItemInstance::ItemInstance((ItemInstance *)&v8, (int)a3);
  v5 = v10;
  if ( v5 > (*(int (__fastcall **)(DispenserBlockEntity *))(*(_DWORD *)v4 + 136))(v4) )
  {
    v6 = (*(int (__fastcall **)(DispenserBlockEntity *))(*(_DWORD *)v4 + 136))(v4);
    ItemInstance::set((ItemInstance *)&v8, v6);
  }
  (*(void (__fastcall **)(char *, int, char *, int *))(*((_DWORD *)v4 + 28) + 112))(
    (char *)v4 + 112,
    v3,
    (char *)v4 + 72 * v3 + 224,
    &v8);
  ItemInstance::operator=((int)v4 + 72 * v3 + 224, (int)&v8);
  BlockEntity::setChanged(v4);
  (*(void (__fastcall **)(char *, int))(*((_DWORD *)v4 + 28) + 84))((char *)v4 + 112, v3);
  if ( ptr )
    operator delete(ptr);
  if ( v11 )
    operator delete(v11);
  result = v9;
  if ( v9 )
    result = (*(int (**)(void))(*(_DWORD *)v9 + 4))();
  return result;
}


void __fastcall DispenserBlockEntity::~DispenserBlockEntity(DispenserBlockEntity *this)
{
  DispenserBlockEntity::~DispenserBlockEntity(this);
}


char *__fastcall DispenserBlockEntity::getItem(DispenserBlockEntity *this, int a2)
{
  return (char *)this + 72 * a2 + 224;
}


void __fastcall DispenserBlockEntity::load(DispenserBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r8@1
  DispenserBlockEntity *v3; // r9@1
  int v4; // r5@2
  int v5; // r0@4
  ListTag *v6; // r6@4
  void *v7; // r0@4
  int v8; // r11@7
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  const CompoundTag *v11; // r8@16
  unsigned int v12; // r10@17
  void *v13; // r0@17
  void (__fastcall *v14)(DispenserBlockEntity *, unsigned int, char *); // ST10_4@19
  signed int v15; // r5@27
  void *v16; // r0@27
  int *v17; // r0@29
  void *v18; // r0@29
  unsigned int *v19; // r2@31
  signed int v20; // r1@33
  unsigned int *v21; // r2@35
  signed int v22; // r1@37
  unsigned int *v23; // r2@47
  signed int v24; // r1@49
  int v25; // [sp+8h] [bp-A0h]@5
  ListTag *v26; // [sp+Ch] [bp-9Ch]@4
  int v27; // [sp+1Ch] [bp-8Ch]@29
  int v28; // [sp+24h] [bp-84h]@27
  char v29; // [sp+28h] [bp-80h]@19
  int v30; // [sp+30h] [bp-78h]@23
  void *v31; // [sp+4Ch] [bp-5Ch]@21
  void *ptr; // [sp+5Ch] [bp-4Ch]@19
  int v33; // [sp+74h] [bp-34h]@8
  int v34; // [sp+7Ch] [bp-2Ch]@4

  v2 = a2;
  v3 = this;
  RandomizableBlockEntityContainerBase::load(this, a2);
  if ( (*(int (__fastcall **)(DispenserBlockEntity *))(*(_DWORD *)v3 + 124))(v3) >= 1 )
  {
    v4 = 0;
    do
      (*(void (__fastcall **)(DispenserBlockEntity *, int, void *))(*(_DWORD *)v3 + 132))(
        v3,
        v4++,
        &ItemInstance::EMPTY_ITEM);
    while ( v4 < (*(int (__fastcall **)(DispenserBlockEntity *))(*(_DWORD *)v3 + 124))(v3) );
  }
  sub_21E94B4((void **)&v34, "Items");
  v5 = CompoundTag::getList((int)v2, (const void **)&v34);
  v6 = (ListTag *)v5;
  v26 = (ListTag *)v5;
  v7 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v34 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  v25 = (int)v2;
  if ( v6 && ListTag::size(v6) >= 1 )
    v8 = 0;
      v11 = (const CompoundTag *)ListTag::get(v6, v8);
      if ( (*(int (**)(void))(*(_DWORD *)v11 + 24))() == 10 )
      {
        sub_21E94B4((void **)&v33, "Slot");
        v12 = CompoundTag::getByte((int)v11, (const void **)&v33);
        v13 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
        {
          v9 = (unsigned int *)(v33 - 4);
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
            j_j_j_j__ZdlPv_9(v13);
        }
        if ( v12 <= 8 )
          v14 = *(void (__fastcall **)(DispenserBlockEntity *, unsigned int, char *))(*(_DWORD *)v3 + 132);
          ItemInstance::fromTag((ItemInstance *)&v29, v11);
          v14(v3, v12, &v29);
          v6 = v26;
          if ( ptr )
            operator delete(ptr);
          if ( v31 )
            operator delete(v31);
          if ( v30 )
            (*(void (**)(void))(*(_DWORD *)v30 + 4))();
          v30 = 0;
      }
      ++v8;
    while ( v8 < ListTag::size(v6) );
  sub_21E94B4((void **)&v28, "CustomName");
  v15 = CompoundTag::contains(v25, (const void **)&v28);
  v16 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v28 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  if ( v15 == 1 )
    sub_21E94B4((void **)&v27, "CustomName");
    v17 = (int *)CompoundTag::getString(v25, (const void **)&v27);
    EntityInteraction::setInteractText((int *)v3 + 54, v17);
    v18 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
}


int __fastcall DispenserBlockEntity::initItems(DispenserBlockEntity *this)
{
  DispenserBlockEntity *v1; // r4@1
  int result; // r0@1
  int v3; // r5@2

  v1 = this;
  result = (*(int (**)(void))(*(_DWORD *)this + 124))();
  if ( result >= 1 )
  {
    v3 = 0;
    do
    {
      (*(void (__fastcall **)(DispenserBlockEntity *, int, void *))(*(_DWORD *)v1 + 132))(
        v1,
        v3,
        &ItemInstance::EMPTY_ITEM);
      result = (*(int (__fastcall **)(DispenserBlockEntity *))(*(_DWORD *)v1 + 124))(v1);
      ++v3;
    }
    while ( v3 < result );
  }
  return result;
}


signed int __fastcall DispenserBlockEntity::isDispenser(DispenserBlockEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 19);
  result = 0;
  if ( v1 == 13 )
    result = 1;
  return result;
}


signed int __fastcall DispenserBlockEntity::getContainerSize(DispenserBlockEntity *this)
{
  return 9;
}


signed int __fastcall DispenserBlockEntity::getMaxStackSize(DispenserBlockEntity *this)
{
  return 64;
}


void *__fastcall DispenserBlockEntity::getName(DispenserBlockEntity *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  void *result; // r0@2

  v2 = a2;
  v3 = (int *)this;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 112) + 96))(a2 + 112) == 1 )
    result = sub_21E8AF4(v3, (int *)(v2 + 216));
  else
    result = sub_21E94B4((void **)v3, "container.dispenser");
  return result;
}


int __fastcall DispenserBlockEntity::DispenserBlockEntity(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  void *v6; // r0@1
  unsigned int v7; // r0@2
  signed int v8; // r2@2
  int v9; // r1@2
  int v10; // r0@3
  int v11; // r5@3
  int v12; // r6@3
  int v13; // r5@5
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  int v17; // [sp+Ch] [bp-24h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v17, "Dispenser");
  RandomizableBlockEntityContainer::RandomizableBlockEntityContainer(v5, v4, (int)&v17, v3);
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v17 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  *(_DWORD *)v5 = &off_27096B4;
  *(_DWORD *)(v5 + 112) = &off_2709750;
  ItemInstance::ItemInstance(v5 + 224);
  ItemInstance::ItemInstance(v5 + 296);
  ItemInstance::ItemInstance(v5 + 368);
  ItemInstance::ItemInstance(v5 + 440);
  ItemInstance::ItemInstance(v5 + 512);
  ItemInstance::ItemInstance(v5 + 584);
  ItemInstance::ItemInstance(v5 + 656);
  ItemInstance::ItemInstance(v5 + 728);
  ItemInstance::ItemInstance(v5 + 800);
  v7 = sub_21E67AC((int)&Random::mRandomDevice);
  *(_DWORD *)(v5 + 872) = v7;
  v8 = 1;
  *(_DWORD *)(v5 + 3372) = 625;
  v9 = 0;
  *(_BYTE *)(v5 + 3376) = 0;
  *(_DWORD *)(v5 + 3380) = 0;
  *(_DWORD *)(v5 + 876) = v7;
  do
    v10 = v7 ^ (v7 >> 30);
    v11 = v5 + 4 * v9;
    v12 = v9++ + 1812433253 * v10;
    v7 = v8++ + 1812433253 * v10;
    *(_DWORD *)(v11 + 880) = v12 + 1;
  while ( v9 != 397 );
  *(_DWORD *)(v5 + 3372) = 624;
  *(_DWORD *)(v5 + 3384) = 398;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 124))(v5) >= 1 )
    v13 = 0;
    do
      (*(void (__fastcall **)(int, int, void *))(*(_DWORD *)v5 + 132))(v5, v13++, &ItemInstance::EMPTY_ITEM);
    while ( v13 < (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 124))(v5) );
  return v5;
}


void __fastcall DispenserBlockEntity::load(DispenserBlockEntity *this, const CompoundTag *a2)
{
  DispenserBlockEntity::load(this, a2);
}


signed int __fastcall DispenserBlockEntity::getRandomSlot(DispenserBlockEntity *this)
{
  DispenserBlockEntity *v1; // r4@1
  ItemInstance *v2; // r6@2
  signed int v3; // r9@2
  unsigned int v4; // r7@2
  int v5; // r5@2
  unsigned int v6; // r1@5

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 124))() < 1 )
  {
    v3 = -1;
  }
  else
    v2 = (DispenserBlockEntity *)((char *)v1 + 224);
    v4 = 1;
    v5 = 0;
    do
    {
      if ( !ItemInstance::isNull(v2) )
      {
        if ( v4 )
          v6 = Random::_genRandInt32((DispenserBlockEntity *)((char *)v1 + 872)) % v4;
        else
          v6 = 0;
        ++v4;
        if ( !v6 )
          v3 = v5;
      }
      ++v5;
      v2 = (ItemInstance *)((char *)v2 + 72);
    }
    while ( v5 < (*(int (__fastcall **)(DispenserBlockEntity *))(*(_DWORD *)v1 + 124))(v1) );
  return v3;
}
