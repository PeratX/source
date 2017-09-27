

void __fastcall FixedInventoryContainer::load(FixedInventoryContainer *this, const ListTag *a2)
{
  FixedInventoryContainer::load(this, a2);
}


_DWORD *__fastcall FixedInventoryContainer::FixedInventoryContainer(double a1, unsigned int a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_FillingContainer::FillingContainer(a1, a2, 0);
  *result = &off_271FCB4;
  return result;
}


void __fastcall FixedInventoryContainer::~FixedInventoryContainer(FixedInventoryContainer *this)
{
  Container *v1; // r0@1

  v1 = j_FillingContainer::~FillingContainer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall FixedInventoryContainer::~FixedInventoryContainer(FixedInventoryContainer *this)
{
  FixedInventoryContainer::~FixedInventoryContainer(this);
}


void __fastcall FixedInventoryContainer::load(FixedInventoryContainer *this, const ListTag *a2)
{
  ListTag *v2; // r7@1
  FixedInventoryContainer *v3; // r4@1
  int v4; // r5@1
  ItemInstance *v5; // r0@3
  int v6; // r4@5
  int v7; // r9@6
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  const CompoundTag *v10; // r10@15
  int v11; // r8@15
  void *v12; // r0@15
  bool v13; // zf@17
  __int64 v14; // r0@20
  int v15; // r4@32
  int v16; // r7@32
  ItemInstance *v17; // r6@32
  bool v18; // zf@33
  void **v19; // r4@41
  int v20; // r5@41
  void *v21; // r0@44
  int v22; // r0@46
  FixedInventoryContainer *v23; // [sp+8h] [bp-80h]@3
  ItemInstance *v24; // [sp+Ch] [bp-7Ch]@5
  int v25; // [sp+10h] [bp-78h]@17
  int v26; // [sp+18h] [bp-70h]@28
  char v27; // [sp+1Eh] [bp-6Ah]@20
  char v28; // [sp+1Fh] [bp-69h]@17
  void *v29; // [sp+34h] [bp-54h]@26
  void *ptr; // [sp+44h] [bp-44h]@24
  int v31; // [sp+5Ch] [bp-2Ch]@7

  v2 = a2;
  v3 = this;
  v4 = j_ListTag::size(a2);
  if ( v4 )
  {
    if ( (unsigned int)v4 >= 0x38E38E4 )
      sub_21E57F4();
    v23 = v3;
    v5 = (ItemInstance *)j_operator new(72 * v4);
  }
  else
    v5 = 0;
  v24 = v5;
  j_std::__uninitialized_default_n_1<false>::__uninit_default_n<ItemInstance *,unsigned int>((int)v5, v4);
  v6 = 0;
    v7 = 0;
    do
    {
      v10 = (const CompoundTag *)j_ListTag::get(v2, v7);
      sub_21E94B4((void **)&v31, "Slot");
      v11 = j_CompoundTag::getByte((int)v10, (const void **)&v31);
      v12 = (void *)(v31 - 12);
      if ( (int *)(v31 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v31 - 4);
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
      if ( v11 < v4 )
        j_ItemInstance::fromTag((ItemInstance *)&v25, v10);
        v13 = v28 == 0;
        if ( v28 )
          v13 = v25 == 0;
        if ( !v13 )
          v14 = (unsigned int)j_ItemInstance::isNull((ItemInstance *)&v25);
          if ( !v27 )
            HIDWORD(v14) = 1;
          if ( !v14 )
          {
            j_ItemInstance::operator=((int)v24 + 72 * v11, (int)&v25);
            ++v6;
          }
        if ( ptr )
          j_operator delete(ptr);
        if ( v29 )
          j_operator delete(v29);
        if ( v26 )
          (*(void (**)(void))(*(_DWORD *)v26 + 4))();
      ++v7;
    }
    while ( v7 != v4 );
  j_FixedInventoryContainer::setContainerSize(v23, v6);
    v15 = 0;
    v16 = v4;
    v17 = v24;
      v18 = *((_BYTE *)v17 + 15) == 0;
      if ( *((_BYTE *)v17 + 15) )
        v18 = *(_DWORD *)v17 == 0;
      if ( !v18 && !j_ItemInstance::isNull(v17) && *((_BYTE *)v17 + 14) )
        (*(void (__fastcall **)(FixedInventoryContainer *, int, ItemInstance *))(*(_DWORD *)v23 + 32))(v23, v15++, v17);
      --v16;
      v17 = (ItemInstance *)((char *)v17 + 72);
    while ( v16 );
    if ( v4 )
      v19 = (void **)((char *)v24 + 52);
      v20 = 72 * v4;
      do
        if ( *v19 )
          j_operator delete(*v19);
        v21 = *(v19 - 4);
        if ( v21 )
          j_operator delete(v21);
        v22 = (int)*(v19 - 11);
        if ( v22 )
          (*(void (**)(void))(*(_DWORD *)v22 + 4))();
        *(v19 - 11) = 0;
        v19 += 18;
        v20 -= 72;
      while ( v20 );
  if ( v24 )
    j_operator delete((void *)v24);
}


int __fastcall FixedInventoryContainer::setContainerSize(FixedInventoryContainer *this, int a2)
{
  FixedInventoryContainer *v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r9@1
  int v7; // r7@1
  unsigned int v8; // r3@1
  __int64 v9; // r0@2
  int v10; // r8@4
  int v11; // r6@5
  void *v12; // r0@6
  void *v13; // r0@8
  int v14; // r0@10
  int result; // r0@14
  int v16; // r6@16

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 44))();
  v5 = *((_DWORD *)v2 + 28);
  v6 = v3 - v4;
  v7 = *((_DWORD *)v2 + 29);
  v8 = 954437177 * ((v7 - v5) >> 3);
  if ( v8 >= v3 )
  {
    if ( v8 > v3 )
    {
      v10 = v5 + 72 * v3;
      if ( v7 != v10 )
      {
        v11 = v5 + 72 * v3;
        do
        {
          v12 = *(void **)(v11 + 52);
          if ( v12 )
            j_operator delete(v12);
          v13 = *(void **)(v11 + 36);
          if ( v13 )
            j_operator delete(v13);
          v14 = *(_DWORD *)(v11 + 8);
          if ( v14 )
            (*(void (**)(void))(*(_DWORD *)v14 + 4))();
          *(_DWORD *)(v11 + 8) = 0;
          v11 += 72;
        }
        while ( v7 != v11 );
      }
      *((_DWORD *)v2 + 29) = v10;
    }
  }
  else
    HIDWORD(v9) = v3 - v8;
    LODWORD(v9) = (char *)v2 + 112;
    j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_default_append(v9);
  result = j_Container::setSizeChanged(v2, v3);
  if ( v6 < 1 )
    if ( v6 <= -1 )
      result = (*(int (__fastcall **)(FixedInventoryContainer *, _DWORD))(*(_DWORD *)v2 + 84))(v2, 0);
    result = (*(int (__fastcall **)(FixedInventoryContainer *))(*(_DWORD *)v2 + 44))(v2);
    if ( result <= v3 )
      v16 = result - 1;
      do
        result = (*(int (__fastcall **)(FixedInventoryContainer *, int, void *))(*(_DWORD *)v2 + 32))(
                   v2,
                   v16++,
                   &ItemInstance::EMPTY_ITEM);
      while ( v16 < v3 );
  return result;
}


int __fastcall FixedInventoryContainer::tick(FixedInventoryContainer *this, Player *a2, int a3)
{
  FixedInventoryContainer *v3; // r11@1
  Entity *v4; // r9@1
  __int64 v5; // r0@1
  int v6; // r8@1
  int v7; // r5@2
  int v8; // r7@2
  int v9; // r10@2
  int v10; // r4@4
  bool v11; // zf@4
  bool v12; // r6@9
  Level *v13; // r0@11

  v3 = this;
  v4 = a2;
  v5 = *((_QWORD *)this + 14);
  v6 = a3;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = 0;
    v8 = 0;
    v9 = 954437177 * ((HIDWORD(v5) - (signed int)v5) >> 3) - 1;
    while ( 1 )
    {
      v10 = v5 + v7;
      v11 = *(_BYTE *)(v5 + v7 + 15) == 0;
      if ( *(_BYTE *)(v5 + v7 + 15) )
      {
        LODWORD(v5) = *(_DWORD *)(v5 + v7);
        v11 = (_DWORD)v5 == 0;
      }
      if ( !v11 )
        LODWORD(v5) = j_ItemInstance::isNull((ItemInstance *)v10);
        if ( !(_DWORD)v5 )
        {
          LODWORD(v5) = *(_BYTE *)(v10 + 14);
          if ( *(_BYTE *)(v10 + 14) )
          {
            v12 = 0;
            if ( v6 == v8 )
              v12 = 1;
            v13 = (Level *)j_Entity::getLevel(v4);
            LODWORD(v5) = j_ItemInstance::inventoryTick((ItemInstance *)v10, v13, v4, v8, v12);
          }
        }
      if ( v9 == v8 )
        break;
      ++v8;
      LODWORD(v5) = *((_DWORD *)v3 + 28);
      v7 += 72;
    }
  }
  return v5;
}
