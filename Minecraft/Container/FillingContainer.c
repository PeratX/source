

signed int __fastcall FillingContainer::_release(FillingContainer *this, int a2)
{
  FillingContainer *v2; // r5@1
  signed int v3; // r4@1
  __int64 v4; // r0@1
  int v5; // r6@5
  signed int result; // r0@5
  bool v7; // zf@5

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 16);
  if ( (HIDWORD(v4) - (signed int)v4) >> 2 > v3 )
  {
    if ( v3 < 0 )
      v3 = -1;
    else
      v3 = *(_DWORD *)(v4 + 4 * v3);
  }
  v5 = *((_DWORD *)v2 + 28) + 72 * v3;
  result = *(_BYTE *)(v5 + 15);
  v7 = result == 0;
  if ( *(_BYTE *)(v5 + 15) )
    result = *(_DWORD *)v5;
    v7 = *(_DWORD *)v5 == 0;
  if ( !v7 )
    result = ItemInstance::isNull((ItemInstance *)(*((_DWORD *)v2 + 28) + 72 * v3));
    if ( !result )
    {
      result = *(_BYTE *)(v5 + 14);
      if ( *(_BYTE *)(v5 + 14) )
        result = (*(int (__fastcall **)(FillingContainer *, signed int, void *))(*(_DWORD *)v2 + 32))(
                   v2,
                   v3,
                   &ItemInstance::EMPTY_ITEM);
    }
  return result;
}


void *__fastcall FillingContainer::getLinked(FillingContainer *this, int a2)
{
  FillingContainer *v2; // r4@1
  int v3; // r0@2
  int v4; // r2@2
  int v5; // r5@3
  void *result; // r0@9

  v2 = this;
  if ( a2 <= -1 )
  {
    v4 = *((_QWORD *)this + 16) >> 32;
    v3 = *((_QWORD *)this + 16);
    v5 = -1;
  }
  else
    if ( (v4 - v3) >> 2 <= a2 )
      v5 = -1;
    else
      v5 = *(_DWORD *)(v3 + 4 * a2);
  if ( v5 < (v4 - v3) >> 2 || v5 >= (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2) )
    result = &ItemInstance::EMPTY_ITEM;
    result = (void *)(*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v2 + 16))(v2, v5);
  return result;
}


signed int __fastcall FillingContainer::getLinkedSlot(FillingContainer *this, int a2)
{
  __int64 v2; // kr00_8@2
  signed int result; // r0@3

  if ( a2 < 0 || (v2 = *((_QWORD *)this + 16), (HIDWORD(v2) - (signed int)v2) >> 2 <= a2) )
    result = -1;
  else
    result = *(_DWORD *)(v2 + 4 * a2);
  return result;
}


int __fastcall FillingContainer::_getEmptySlotsCount(FillingContainer *this, int a2, int a3)
{
  FillingContainer *v3; // r5@1
  int v4; // r4@1
  int v5; // r8@1
  int v6; // r7@3
  int v7; // r6@4
  signed int v8; // r0@7

  v3 = this;
  v4 = a2;
  v5 = a3;
  if ( (*(int (**)(void))(*(_DWORD *)this + 44))() <= a3 )
    v5 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v3 + 44))(v3);
  v6 = 0;
  if ( v5 > v4 )
  {
    do
    {
      v7 = (*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v3 + 16))(v3, v4);
      if ( *(_BYTE *)(v7 + 15) )
      {
        if ( *(_DWORD *)v7 )
        {
          if ( ItemInstance::isNull((ItemInstance *)v7) )
          {
            v8 = 0;
          }
          else
            v8 = *(_BYTE *)(v7 + 14);
            if ( *(_BYTE *)(v7 + 14) )
              v8 = 1;
        }
        else
          v8 = 0;
      }
      else
        v8 = 0;
      ++v4;
      if ( !v8 )
        ++v6;
    }
    while ( v5 != v4 );
  }
  return v6;
}


int __fastcall FillingContainer::removeResource(FillingContainer *this, const ItemInstance *a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r8@1
  int v7; // r9@1
  Recipe *v8; // r11@1
  FillingContainer *v9; // r5@1
  FillingContainer *v10; // r0@5
  const ItemInstance *v11; // r1@5
  int v12; // r2@5
  int v13; // r3@5
  signed int v14; // r0@7
  signed int v15; // r7@7
  int v16; // r6@8
  bool v17; // zf@10
  signed int v18; // r0@13
  bool v19; // zf@13
  int v21; // [sp+0h] [bp-70h]@8
  int v22; // [sp+8h] [bp-68h]@22
  unsigned __int8 v23; // [sp+Eh] [bp-62h]@8
  char v24; // [sp+Fh] [bp-61h]@10
  void *v25; // [sp+24h] [bp-4Ch]@20
  void *ptr; // [sp+34h] [bp-3Ch]@18

  v5 = a5;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = this;
  if ( a5 > 0 || (v5 = *((_BYTE *)a2 + 14)) != 0 )
  {
    while ( 1 )
    {
      if ( Recipe::isAnyAuxValue(v8, a2) || (unsigned __int16)ItemInstance::getAuxValue(v8) == 0x7FFF )
      {
        v10 = v9;
        v11 = v8;
        v12 = 0;
        v13 = 0;
      }
      else
        v12 = v7;
        v13 = v6;
      v14 = FillingContainer::getSlotWithItem(v10, v11, v12, v13);
      v15 = v14;
      if ( v14 < 0 )
        break;
      ItemInstance::ItemInstance((ItemInstance *)&v21, *((_DWORD *)v9 + 28) + 72 * v14);
      v16 = v23;
      if ( v23 >= v5 )
        v16 = v5;
      ItemInstance::remove((ItemInstance *)&v21, v16);
      (*(void (__fastcall **)(FillingContainer *, signed int, int *))(*(_DWORD *)v9 + 32))(v9, v15, &v21);
      v17 = v24 == 0;
      if ( v24 )
        v17 = v21 == 0;
      if ( v17 )
        goto LABEL_29;
      v18 = ItemInstance::isNull((ItemInstance *)&v21);
      a2 = (const ItemInstance *)v23;
      v19 = v23 == 0;
      if ( v23 )
        v19 = v18 == 1;
      if ( v19 )
LABEL_29:
        (*(void (__fastcall **)(FillingContainer *, signed int))(*(_DWORD *)v9 + 128))(v9, v15);
      if ( ptr )
        operator delete(ptr);
      if ( v25 )
        operator delete(v25);
      v5 -= v16;
      if ( v22 )
        (*(void (**)(void))(*(_DWORD *)v22 + 4))();
      if ( v5 <= 0 )
        goto LABEL_25;
    }
  }
  else
LABEL_25:
    v5 = 0;
  return v5;
}


signed int __fastcall FillingContainer::_getSlot(FillingContainer *this, int a2)
{
  FillingContainer *v2; // r6@1
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r7@1
  int v6; // r0@1
  int i; // r5@1
  ItemInstance *v8; // r0@4

  v2 = this;
  v3 = a2;
  v5 = *((_QWORD *)this + 16) >> 32;
  v4 = *((_QWORD *)this + 16);
  v6 = (*(int (**)(void))(*(_DWORD *)this + 44))();
  for ( i = (v5 - v4) >> 2; i < v6; ++i )
  {
    v8 = (ItemInstance *)(*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v2 + 16))(v2, i);
    if ( ItemInstance::getId(v8) == v3 )
      return i;
    v6 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2);
  }
  return -1;
}


void __fastcall FillingContainer::~FillingContainer(FillingContainer *this)
{
  Container *v1; // r0@1

  v1 = FillingContainer::~FillingContainer(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void *__fastcall FillingContainer::getItem(FillingContainer *this, int a2)
{
  FillingContainer *v2; // r4@1
  __int64 v3; // kr00_8@2
  __int64 v4; // r2@3
  int v5; // r5@4
  void *result; // r0@5

  v2 = this;
  if ( a2 < 0 )
  {
    result = &ItemInstance::EMPTY_ITEM;
  }
  else
    v3 = *((_QWORD *)this + 14);
    if ( 954437177 * ((HIDWORD(v3) - (signed int)v3) >> 3) <= a2 )
    {
      result = &ItemInstance::EMPTY_ITEM;
    }
    else
      v4 = *((_QWORD *)this + 16);
      HIDWORD(v4) = (HIDWORD(v4) - (signed int)v4) >> 2;
      if ( SHIDWORD(v4) <= a2 )
      {
        result = (void *)(v3 + 72 * a2);
      }
      else
        v5 = *(_DWORD *)(v4 + 4 * a2);
        if ( v5 >= SHIDWORD(v4) )
        {
          if ( v5 >= (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)this + 44))(this) )
            result = &ItemInstance::EMPTY_ITEM;
          else
            result = (void *)(*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v2 + 16))(v2, v5);
        }
        else
          result = &ItemInstance::EMPTY_ITEM;
  return result;
}


signed int __fastcall FillingContainer::getLinkedSlotsCount(FillingContainer *this)
{
  return (signed int)((*((_QWORD *)this + 16) >> 32) - *((_QWORD *)this + 16)) >> 2;
}


signed int __fastcall FillingContainer::canAdd(FillingContainer *this, const ItemInstance *a2)
{
  FillingContainer *v2; // r5@1
  const ItemInstance *v3; // r4@1
  int v4; // r0@1
  bool v5; // zf@3
  __int64 v6; // r6@9
  int v7; // r0@9
  int i; // r6@9
  int v9; // r0@12
  int v10; // r7@12
  int v11; // r0@12
  bool v12; // zf@12
  signed int result; // r0@18
  signed int v14; // r0@19
  signed int v15; // r1@19

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 31);
  if ( v4 && (*(int (**)(void))(*(_DWORD *)v4 + 652))() )
    goto LABEL_18;
  v5 = *((_BYTE *)v3 + 15) == 0;
  if ( *((_BYTE *)v3 + 15) )
    v5 = *(_DWORD *)v3 == 0;
  if ( v5 || ItemInstance::isNull(v3) || !*((_BYTE *)v3 + 14) )
  {
LABEL_18:
    result = 1;
  }
  else
    if ( (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 144))(v2) )
    {
      v6 = *((_QWORD *)v2 + 16);
      v7 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2);
      for ( i = (HIDWORD(v6) - (signed int)v6) >> 2; i < v7; ++i )
      {
        v9 = (*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v2 + 16))(v2, i);
        v10 = v9;
        v11 = *(_BYTE *)(v9 + 15);
        v12 = v11 == 0;
        if ( v11 )
          v12 = *(_DWORD *)v10 == 0;
        if ( v12 || ItemInstance::isNull((ItemInstance *)v10) || !*(_BYTE *)(v10 + 14) )
        {
          if ( i <= -1 )
            break;
          goto LABEL_18;
        }
        v7 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2);
      }
    }
    v14 = FillingContainer::_getSlotWithRemainingSpace(v2, v3);
    v15 = 0;
    if ( v14 > -1 )
      v15 = 1;
    result = v15;
  return result;
}


int __fastcall FillingContainer::removeItem(FillingContainer *this, int a2, int a3)
{
  FillingContainer *v3; // r5@1
  signed int v4; // r6@1
  int v5; // r4@1
  int v6; // r0@1
  bool v7; // zf@1
  bool v8; // zf@8
  signed int v9; // r0@11
  bool v10; // zf@11
  int result; // r0@20
  int v12; // [sp+0h] [bp-58h]@1
  int v13; // [sp+8h] [bp-50h]@20
  int v14; // [sp+Eh] [bp-4Ah]@1
  void *v15; // [sp+24h] [bp-34h]@18
  void *ptr; // [sp+34h] [bp-24h]@16

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (*(int (**)(void))(*(_DWORD *)this + 16))();
  ItemInstance::ItemInstance((ItemInstance *)&v12, v6);
  v7 = BYTE1(v14) == 0;
  if ( BYTE1(v14) )
    v7 = v12 == 0;
  if ( !v7 && !ItemInstance::isNull((ItemInstance *)&v12) && (_BYTE)v14 )
  {
    if ( (unsigned __int8)v14 < v4 )
      v4 = (unsigned __int8)v14;
    ItemInstance::remove((ItemInstance *)&v12, v4);
    v8 = BYTE1(v14) == 0;
    if ( BYTE1(v14) )
      v8 = v12 == 0;
    if ( v8 )
      goto LABEL_24;
    v9 = ItemInstance::isNull((ItemInstance *)&v12);
    v10 = (unsigned __int8)v14 == 0;
    if ( (_BYTE)v14 )
      v10 = v9 == 1;
    if ( v10 )
LABEL_24:
      (*(void (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v3 + 128))(v3, v5);
    else
      (*(void (__fastcall **)(FillingContainer *, int, int *))(*(_DWORD *)v3 + 32))(v3, v5, &v12);
  }
  (*(void (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v3 + 84))(v3, v5);
  if ( ptr )
    operator delete(ptr);
  if ( v15 )
    operator delete(v15);
  result = v13;
  if ( v13 )
    result = (*(int (**)(void))(*(_DWORD *)v13 + 4))();
  return result;
}


int __fastcall FillingContainer::dropAll(FillingContainer *this, int a2, int a3, int a4)
{
  FillingContainer *v4; // r5@1
  int v5; // r9@1
  int v6; // r4@1
  int v7; // r8@1
  int v8; // r0@1
  int v9; // r6@1
  int v10; // r7@1
  int result; // r0@5

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = (*(int (**)(void))(*(_DWORD *)this + 44))();
  v9 = 0;
  v10 = 0;
  if ( v5 > 0 )
    v9 = v5;
  if ( v8 < v5 )
    v9 = v8;
  result = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v4 + 44))(v4);
  if ( v7 > 0 )
    v10 = v7;
  if ( result < v7 )
    v10 = result;
  if ( v9 < v10 )
  {
    do
    {
      FillingContainer::dropSlot(__PAIR__(v9, (unsigned int)v4), v6, 1, 1);
      result = (*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v4 + 84))(v4, v9++);
    }
    while ( v10 != v9 );
  }
  return result;
}


signed int __fastcall FillingContainer::load(FillingContainer *this, const ListTag *a2)
{
  FillingContainer *v2; // r5@1
  ListTag *v3; // r4@1
  int v4; // r0@1
  signed int result; // r0@3
  signed int v6; // r6@4
  __int64 v7; // r0@7
  int v8; // r0@10
  const CompoundTag *v9; // r8@10
  signed int v10; // r11@11
  void *v11; // r0@11
  bool v12; // zf@12
  __int64 v13; // r0@15
  signed int v14; // r0@20
  bool v15; // zf@20
  int v16; // r8@24
  __int64 v17; // r0@24
  signed int v18; // r0@26
  bool v19; // zf@26
  bool v20; // nf@26
  unsigned __int8 v21; // vf@26
  signed int v22; // r0@27
  int v23; // r0@31
  int v24; // r0@32
  int v25; // r0@35
  __int64 v26; // r0@37
  unsigned int *v27; // r2@39
  signed int v28; // r1@41
  FillingContainer *v29; // r0@44
  int v30; // [sp+8h] [bp-78h]@12
  int v31; // [sp+10h] [bp-70h]@55
  unsigned __int8 v32; // [sp+16h] [bp-6Ah]@15
  char v33; // [sp+17h] [bp-69h]@12
  void *v34; // [sp+2Ch] [bp-54h]@53
  void *ptr; // [sp+3Ch] [bp-44h]@51
  int v36; // [sp+54h] [bp-2Ch]@11

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 31);
  if ( !v4 || (*(int (**)(void))(*(_DWORD *)v4 + 652))() != 1 || (result = ListTag::size(v3)) != 0 )
  {
    (*(void (__fastcall **)(FillingContainer *, signed int))(*(_DWORD *)v2 + 132))(v2, -1);
    result = ListTag::size(v3);
    v6 = result;
    if ( result )
    {
      while ( 1 )
      {
        v8 = ListTag::get(v3, --v6);
        v9 = (const CompoundTag *)v8;
        result = (*(int (**)(void))(*(_DWORD *)v8 + 24))();
        if ( result == 10 )
          break;
LABEL_57:
        if ( !v6 )
          return result;
      }
      sub_21E94B4((void **)&v36, "Slot");
      v10 = CompoundTag::getByte((int)v9, (const void **)&v36);
      v11 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v36 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        }
        else
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      ItemInstance::fromTag((ItemInstance *)&v30, v9);
      v12 = v33 == 0;
      if ( v33 )
        v12 = v30 == 0;
      if ( !v12 )
        v13 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v30);
        if ( !v32 )
          HIDWORD(v13) = 1;
        if ( !v13 )
          if ( v10 < (signed int)((*((_QWORD *)v2 + 16) >> 32) - *((_QWORD *)v2 + 16)) >> 2 )
          {
            if ( v10 >= 954437177 * ((signed int)((*((_QWORD *)v2 + 14) >> 32) - *((_QWORD *)v2 + 14)) >> 3) )
              goto LABEL_60;
            v14 = ItemInstance::getId((ItemInstance *)&v30);
            v15 = v14 == 255;
            if ( v14 == 255 )
              v15 = v32 == 255;
            if ( v15 )
            {
              v16 = ItemInstance::getAuxValue((ItemInstance *)&v30);
              v17 = *((_QWORD *)v2 + 16);
              if ( v10 == v16 )
                v16 = v10 + ((HIDWORD(v17) - (signed int)v17) >> 2);
              v18 = HIDWORD(v17) - v17;
              v21 = __OFSUB__(v16, v18 >> 2);
              v19 = v16 == v18 >> 2;
              v20 = v16 - (v18 >> 2) < 0;
              if ( v16 >= v18 >> 2 )
              {
                v22 = v18 >> 2;
                v21 = __OFSUB__(v22, v10);
                v19 = v22 == v10;
                v20 = v22 - v10 < 0;
              }
              if ( !((unsigned __int8)(v20 ^ v21) | v19)
                && v16 < 954437177 * ((signed int)((*((_QWORD *)v2 + 14) >> 32) - *((_QWORD *)v2 + 14)) >> 3) )
                if ( (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2) <= v16 )
                {
                  if ( v16 == -1 )
                  {
                    v7 = *((_QWORD *)v2 + 16);
                    if ( (HIDWORD(v7) - (signed int)v7) >> 2 > v10 )
                      *(_DWORD *)(v7 + 4 * v10) = -1;
                  }
                }
                else
                  v23 = *((_DWORD *)v2 + 32);
                  if ( *(_DWORD *)(v23 + 4 * v10) != v16 )
                    *(_DWORD *)(v23 + 4 * v10) = v16;
                    v24 = *((_DWORD *)v2 + 31);
                    if ( v24 )
                      (*(void (**)(void))(*(_DWORD *)v24 + 1500))();
            }
            else
LABEL_60:
              ItemInstance::getId((ItemInstance *)&v30);
            goto LABEL_51;
          }
          if ( (unsigned int)v10 <= 0x5F )
            v25 = *((_DWORD *)v2 + 31);
            if ( v25 && (*(int (**)(void))(*(_DWORD *)v25 + 652))() == 1 )
              v26 = *((_QWORD *)v2 + 14);
              goto LABEL_44;
            v26 = *((_QWORD *)v2 + 14);
            if ( v10 < 954437177 * ((HIDWORD(v26) - (signed int)v26) >> 3) )
LABEL_44:
              v29 = (FillingContainer *)(954437177 * ((HIDWORD(v26) - (signed int)v26) >> 3));
              if ( v10 < (signed int)v29 )
                FillingContainer::_fixBackwardCompabilityItem(v29, (ItemInstance *)&v30);
                (*(void (__fastcall **)(FillingContainer *, signed int, int *))(*(_DWORD *)v2 + 32))(v2, v10, &v30);
              goto LABEL_51;
            (*(void (__fastcall **)(FillingContainer *, int *, signed int))(*(_DWORD *)v2 + 140))(v2, &v30, 1);
LABEL_51:
      if ( ptr )
        operator delete(ptr);
      if ( v34 )
        operator delete(v34);
      result = v31;
      if ( v31 )
        result = (*(int (**)(void))(*(_DWORD *)v31 + 4))();
      goto LABEL_57;
    }
  }
  return result;
}


int __fastcall FillingContainer::setItem(__int64 this, const ItemInstance *a2)
{
  int v2; // r4@1
  const ItemInstance *v3; // r6@1
  int v4; // r5@1
  signed int v5; // r0@5
  int v6; // r1@8
  int v7; // r3@8
  bool v8; // zf@9
  signed int v9; // r1@14
  signed int v10; // r0@14
  int v11; // r6@16
  bool v12; // zf@16
  bool v13; // nf@16
  unsigned __int8 v14; // vf@16
  int v15; // r0@20
  int v16; // r0@21
  __int64 v17; // r0@27

  v2 = HIDWORD(this);
  v3 = a2;
  v4 = this;
  if ( SHIDWORD(this) >= 0 )
  {
    this = *(_QWORD *)(this + 112);
    if ( 954437177 * ((HIDWORD(this) - (signed int)this) >> 3) > v2 )
    {
      LODWORD(this) = ItemInstance::operator==((ItemInstance *)(this + 72 * v2), a2);
      if ( !(_DWORD)this )
      {
        v5 = (signed int)((*(_QWORD *)(v4 + 128) >> 32) - *(_QWORD *)(v4 + 128)) >> 2;
        if ( v5 <= v2 )
        {
          (*(void (__fastcall **)(int, int, int, const ItemInstance *))(*(_DWORD *)v4 + 112))(
            v4,
            v2 - v5,
            *(_DWORD *)(v4 + 112) + 72 * v2,
            v3);
          if ( *(_DWORD *)(v4 + 124) )
          {
            if ( ItemInstance::operator!=((ItemInstance *)(*(_DWORD *)(v4 + 112) + 72 * v2), v3) == 1 )
            {
              v6 = *(_DWORD *)(v4 + 132);
              v7 = *(_DWORD *)(v4 + 112) + 72 * v2;
              (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*(_QWORD *)(v4 + 124) + 1468))(*(_QWORD *)(v4 + 124));
            }
          }
        }
        ItemInstance::operator=(*(_DWORD *)(v4 + 112) + 72 * v2, (int)v3);
        v8 = *((_BYTE *)v3 + 15) == 0;
        if ( *((_BYTE *)v3 + 15) )
          v8 = *(_DWORD *)v3 == 0;
        if ( v8 || ItemInstance::isNull(v3) || !*((_BYTE *)v3 + 14) )
          (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 128))(v4, v2);
        else
          v9 = (*(_QWORD *)(v4 + 128) >> 32) - *(_QWORD *)(v4 + 128);
          v10 = v9 >> 2;
          if ( v9 >> 2 <= v2 && v9 >> 1 >= v2 )
            v11 = v2 - v10;
            v14 = 0;
            v12 = v2 == v10;
            v13 = v2 - v10 < 0;
            if ( v2 - v10 >= 0 )
              v14 = __OFSUB__(v10, v11);
              v12 = v10 == v11;
              v13 = v10 - v11 < 0;
            if ( !((unsigned __int8)(v13 ^ v14) | v12) )
              if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 44))(v4) <= v2 )
              {
                if ( v2 == -1 )
                {
                  v17 = *(_QWORD *)(v4 + 128);
                  if ( (HIDWORD(v17) - (signed int)v17) >> 2 > v11 )
                    *(_DWORD *)(v17 + 4 * v11) = -1;
                }
              }
              else
                v15 = *(_DWORD *)(v4 + 128);
                if ( *(_DWORD *)(v15 + 4 * v11) != v2 )
                  *(_DWORD *)(v15 + 4 * v11) = v2;
                  v16 = *(_DWORD *)(v4 + 124);
                  if ( v16 )
                    (*(void (__cdecl **)(int))(*(_DWORD *)v16 + 1500))(v16);
        LODWORD(this) = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 84))(v4, v2);
      }
    }
  }
  return this;
}


signed int __fastcall FillingContainer::getMaxStackSize(FillingContainer *this)
{
  return 254;
}


int __fastcall FillingContainer::_isCreative(FillingContainer *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 31);
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 652))();
  else
    result = 0;
  return result;
}


char *__fastcall FillingContainer::getLinkedSlots(FillingContainer *this)
{
  return (char *)this + 128;
}


void __fastcall FillingContainer::~FillingContainer(FillingContainer *this)
{
  FillingContainer::~FillingContainer(this);
}


int __fastcall FillingContainer::getItemCount(FillingContainer *this, int a2, int a3)
{
  FillingContainer *v3; // r5@1
  int v4; // r9@1
  int v5; // r8@1
  int v6; // r4@1
  int v7; // r6@1
  int v8; // r0@1
  signed int v9; // r1@1
  int v10; // r6@1
  int v11; // r7@1
  int v12; // r0@3
  bool v13; // zf@3
  __int64 v14; // r0@6
  int v15; // r0@19
  bool v16; // zf@19
  __int64 v17; // r0@22
  int v19; // [sp+0h] [bp-68h]@3
  int v20; // [sp+8h] [bp-60h]@15
  unsigned __int8 v21; // [sp+Eh] [bp-5Ah]@6
  char v22; // [sp+Fh] [bp-59h]@3
  void *v23; // [sp+24h] [bp-44h]@13
  void *ptr; // [sp+34h] [bp-34h]@11

  v3 = this;
  v4 = a2;
  v5 = a3;
  v7 = *((_QWORD *)this + 16) >> 32;
  v6 = *((_QWORD *)this + 16);
  v8 = (*(int (**)(void))(*(_DWORD *)this + 44))();
  v9 = v7 - v6;
  v10 = 0;
  v11 = v9 >> 2;
  if ( v9 >> 2 < v8 )
  {
    if ( v5 == 0x7FFF )
    {
      do
      {
        v12 = (*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v3 + 16))(v3, v11);
        ItemInstance::ItemInstance((ItemInstance *)&v19, v12);
        v13 = v22 == 0;
        if ( v22 )
          v13 = v19 == 0;
        if ( !v13 )
        {
          v14 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v19);
          if ( !v21 )
            HIDWORD(v14) = 1;
          if ( !v14 && ItemInstance::getId((ItemInstance *)&v19) == v4 )
            v10 += v21;
        }
        if ( ptr )
          operator delete(ptr);
        if ( v23 )
          operator delete(v23);
        if ( v20 )
          (*(void (**)(void))(*(_DWORD *)v20 + 4))();
        ++v11;
      }
      while ( v11 < (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v3 + 44))(v3) );
    }
    else
        v15 = (*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v3 + 16))(v3, v11);
        ItemInstance::ItemInstance((ItemInstance *)&v19, v15);
        v16 = v22 == 0;
          v16 = v19 == 0;
        if ( !v16 )
          v17 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v19);
            HIDWORD(v17) = 1;
          if ( !v17
            && ItemInstance::getId((ItemInstance *)&v19) == v4
            && ItemInstance::getAuxValue((ItemInstance *)&v19) == v5 )
          {
          }
  }
  return v10;
}


int __fastcall FillingContainer::dropAll(FillingContainer *this, int a2)
{
  FillingContainer *v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  signed int v5; // r8@1
  int result; // r0@1
  int v7; // r7@1
  bool v8; // nf@3
  unsigned __int8 v9; // vf@3
  int v10; // r6@3

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 44))();
  v5 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2);
  result = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2);
  v7 = v4;
  if ( v4 <= 0 )
    v7 = 0;
  v9 = __OFSUB__(result, v4);
  v8 = result - v4 < 0;
  v10 = v5 & (v5 >> 31);
  if ( v8 ^ v9 )
    v7 = result;
  if ( v10 < v7 )
  {
    do
    {
      FillingContainer::dropSlot(__PAIR__(v10, (unsigned int)v2), v3, 1, 1);
      result = (*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v2 + 84))(v2, v10++);
    }
    while ( v7 != v10 );
  }
  return result;
}


signed int __fastcall FillingContainer::_getFreeSlot(FillingContainer *this)
{
  FillingContainer *v1; // r5@1
  int v2; // r4@2
  int v3; // r6@2
  int v4; // r0@2
  int i; // r4@2
  int v6; // r0@5
  int v7; // r6@5
  int v8; // r0@5
  bool v9; // zf@5

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 144))() )
  {
    v3 = *((_QWORD *)v1 + 16) >> 32;
    v2 = *((_QWORD *)v1 + 16);
    v4 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v1 + 44))(v1);
    for ( i = (v3 - v2) >> 2; i < v4; ++i )
    {
      v6 = (*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v1 + 16))(v1, i);
      v7 = v6;
      v8 = *(_BYTE *)(v6 + 15);
      v9 = v8 == 0;
      if ( v8 )
        v9 = *(_DWORD *)v7 == 0;
      if ( v9 || ItemInstance::isNull((ItemInstance *)v7) || !*(_BYTE *)(v7 + 14) )
        return i;
      v4 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v1 + 44))(v1);
    }
  }
  return -1;
}


int __fastcall FillingContainer::_fixBackwardCompabilityItem(FillingContainer *this, ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  int result; // r0@1
  unsigned __int64 *v4; // r5@2
  unsigned int v5; // r8@2
  int v6; // r5@2
  unsigned __int64 v7; // kr00_8@2
  BlockState *v8; // r0@2
  __int64 v9; // r6@2

  v2 = a2;
  result = Block::mStoneSlab;
  if ( *((_DWORD *)a2 + 1) == Block::mStoneSlab )
  {
    v4 = (unsigned __int64 *)Block::getBlockState(Block::mStoneSlab, 24);
    v5 = ItemInstance::getAuxValue(v2);
    v7 = *v4;
    v6 = *v4 >> 32;
    v8 = (BlockState *)Block::getBlockState(Block::mStoneSlab, 24);
    v9 = *(_QWORD *)v8;
    BlockState::getMask(v8);
    result = j_j_j__ZN12ItemInstance11setAuxValueEs_0(
               v2,
               (unsigned __int8)(((v5 >> (1 - v6 + v7)) & (0xFu >> (4 - v6))) << (v9 + 1 - BYTE4(v9))));
  }
  return result;
}


Container *__fastcall FillingContainer::~FillingContainer(FillingContainer *this)
{
  FillingContainer *v1; // r4@1
  void *v2; // r0@1
  int v3; // r5@3 OVERLAPPED
  int v4; // r6@3 OVERLAPPED
  void *v5; // r0@4
  void *v6; // r0@6
  int v7; // r0@8

  v1 = this;
  *(_DWORD *)this = &off_2700B18;
  v2 = (void *)*((_DWORD *)this + 32);
  if ( v2 )
    operator delete(v2);
  *(_QWORD *)&v3 = *((_QWORD *)v1 + 14);
  if ( v3 != v4 )
  {
    do
    {
      v5 = *(void **)(v3 + 52);
      if ( v5 )
        operator delete(v5);
      v6 = *(void **)(v3 + 36);
      if ( v6 )
        operator delete(v6);
      v7 = *(_DWORD *)(v3 + 8);
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      *(_DWORD *)(v3 + 8) = 0;
      v3 += 72;
    }
    while ( v4 != v3 );
    v3 = *((_DWORD *)v1 + 28);
  }
  if ( v3 )
    operator delete((void *)v3);
  return j_j_j__ZN9ContainerD2Ev(v1);
}


int __fastcall FillingContainer::replace(int a1, unsigned __int64 *a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  unsigned __int64 *v5; // r8@1
  __int64 v6; // kr00_8@1
  int v7; // r7@1
  int result; // r0@5
  int v9; // r4@8
  int v10; // r6@8

  v3 = a1;
  v4 = a3;
  v5 = a2;
  (*(void (**)(void))(*(_DWORD *)a1 + 132))();
  v6 = *(_QWORD *)(v3 + 128);
  v7 = 954437177 * ((signed int)((*v5 >> 32) - *v5) >> 3);
  if ( 954437177 * ((signed int)((*v5 >> 32) - *v5) >> 3) > v4 )
    v7 = v4;
  if ( v4 < 0 )
    v7 = 954437177 * ((signed int)((*v5 >> 32) - *v5) >> 3);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 44))(v3) - ((HIDWORD(v6) - (signed int)v6) >> 2);
  if ( v7 >= result )
    v7 = result;
  if ( v7 >= 1 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v3 + 32))(
                 v3,
                 ((HIDWORD(v6) - (signed int)v6) >> 2) + v10++,
                 *(_DWORD *)v5 + v9);
      v9 += 72;
    }
    while ( v10 < v7 );
  }
  return result;
}


signed int __fastcall FillingContainer::linkSlot(FillingContainer *this, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  FillingContainer *v5; // r5@1
  int v6; // r0@2
  int v7; // r0@5
  int v8; // r0@6
  __int64 v10; // r0@11

  v3 = a2;
  v4 = a3;
  v5 = this;
  if ( a2 < 0 )
    return 0;
  v6 = (signed int)((*((_QWORD *)this + 16) >> 32) - *((_QWORD *)this + 16)) >> 2;
  if ( v6 <= a2 )
  if ( v6 <= a3 && (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v5 + 44))(v5) > a3 )
  {
    v7 = *((_DWORD *)v5 + 32);
    if ( *(_DWORD *)(v7 + 4 * v3) != v4 )
    {
      *(_DWORD *)(v7 + 4 * v3) = v4;
      v8 = *((_DWORD *)v5 + 31);
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 1500))();
      return 1;
    }
  }
  if ( v4 != -1 )
  v10 = *((_QWORD *)v5 + 16);
  if ( (HIDWORD(v10) - (signed int)v10) >> 2 > v3 )
    *(_DWORD *)(v10 + 4 * v3) = -1;
    return 1;
  return 1;
}


signed int __fastcall FillingContainer::removeResource(FillingContainer *this, int a2)
{
  FillingContainer *v2; // r4@1
  int v3; // r6@1
  int v4; // r0@1
  int v5; // r5@3
  int v6; // r7@3
  int v7; // r0@3
  int i; // r5@3
  ItemInstance *v9; // r0@6
  int v10; // r0@8
  ItemInstance *v11; // r0@8
  int v13; // [sp+0h] [bp-60h]@8
  int v14; // [sp+8h] [bp-58h]@12
  void *v15; // [sp+24h] [bp-3Ch]@10
  void *ptr; // [sp+34h] [bp-2Ch]@8

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 31);
  if ( !v4 || !(*(int (**)(void))(*(_DWORD *)v4 + 652))() )
  {
    v6 = *((_QWORD *)v2 + 16) >> 32;
    v5 = *((_QWORD *)v2 + 16);
    v7 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2);
    for ( i = (v6 - v5) >> 2; ; ++i )
    {
      if ( i >= v7 )
        return 0;
      v9 = (ItemInstance *)(*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v2 + 16))(v2, i);
      if ( ItemInstance::getId(v9) == v3 )
        break;
      v7 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2);
    }
    if ( i < 0 )
      return 0;
    v10 = (*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v2 + 16))(v2, i);
    v11 = ItemInstance::ItemInstance((ItemInstance *)&v13, v10);
    ItemInstance::remove(v11, 1);
    (*(void (__fastcall **)(FillingContainer *, int, int *))(*(_DWORD *)v2 + 32))(v2, i, &v13);
    if ( ptr )
      operator delete(ptr);
    if ( v15 )
      operator delete(v15);
    if ( v14 )
      (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  }
  return 1;
}


int __fastcall FillingContainer::clearInventory(FillingContainer *this, int a2)
{
  FillingContainer *v2; // r4@1
  unsigned int v3; // r9@1
  __int64 v4; // r0@1
  int v5; // r6@1
  signed int v6; // r2@2
  FillingContainer *v7; // r11@5
  int v8; // r10@6
  int v9; // r8@6
  int v10; // r5@7
  bool v11; // zf@7
  __int64 v12; // r0@13
  signed int v13; // r7@13
  int v14; // r5@17
  bool v15; // zf@17
  __int64 v16; // kr00_8@28
  unsigned int v17; // r1@28
  __int64 v18; // r0@29
  int v19; // r8@31
  int v20; // r6@32
  void *v21; // r0@33
  void *v22; // r0@35
  int v23; // r0@37

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 16);
  HIDWORD(v4) -= v4;
  v5 = SHIDWORD(v4) >> 2;
  if ( SHIDWORD(v4) >= 1 )
  {
    v6 = 1;
    if ( v5 > 1 )
      v6 = SHIDWORD(v4) >> 2;
    _aeabi_memset4(v4, 4 * v6, 255);
  }
  v7 = (FillingContainer *)((char *)v2 + 112);
  if ( v5 >= (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2) )
    v8 = 0;
  else
    v9 = 72 * v5;
    do
    {
      v10 = *(_DWORD *)v7 + v9;
      v11 = *(_BYTE *)(v10 + 15) == 0;
      if ( *(_BYTE *)(v10 + 15) )
        v11 = *(_DWORD *)(*(_DWORD *)v7 + v9) == 0;
      if ( !v11 && !ItemInstance::isNull((ItemInstance *)(*(_DWORD *)v7 + v9)) && *(_BYTE *)(v10 + 14) )
        v8 += *(_BYTE *)(*(_DWORD *)v7 + v9 + 14);
      v12 = *((_QWORD *)v2 + 16);
      v13 = v5;
      if ( (HIDWORD(v12) - (signed int)v12) >> 2 > v5 )
      {
        if ( v5 < 0 )
          v13 = -1;
        else
          v13 = *(_DWORD *)(v12 + 4 * v5);
      }
      v14 = *((_DWORD *)v2 + 28) + 72 * v13;
      v15 = *(_BYTE *)(v14 + 15) == 0;
      if ( *(_BYTE *)(v14 + 15) )
        v15 = *(_DWORD *)v14 == 0;
      if ( !v15 && !ItemInstance::isNull((ItemInstance *)(*((_DWORD *)v2 + 28) + 72 * v13)) && *(_BYTE *)(v14 + 14) )
        (*(void (__fastcall **)(FillingContainer *, signed int, void *))(*(_DWORD *)v2 + 32))(
          v2,
          v13,
          &ItemInstance::EMPTY_ITEM);
      ++v5;
      v9 += 72;
    }
    while ( v5 < (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2) );
  if ( (v3 & 0x80000000) != 0 )
    v3 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 44))(v2);
  v16 = *((_QWORD *)v2 + 14);
  v17 = 954437177 * ((HIDWORD(v16) - (signed int)v16) >> 3);
  if ( v3 <= v17 )
    if ( v3 < v17 )
      v19 = v16 + 72 * v3;
      if ( HIDWORD(v16) != v19 )
        v20 = v16 + 72 * v3;
        do
        {
          v21 = *(void **)(v20 + 52);
          if ( v21 )
            operator delete(v21);
          v22 = *(void **)(v20 + 36);
          if ( v22 )
            operator delete(v22);
          v23 = *(_DWORD *)(v20 + 8);
          if ( v23 )
            (*(void (__cdecl **)(int))(*(_DWORD *)v23 + 4))(v23);
          *(_DWORD *)(v20 + 8) = 0;
          v20 += 72;
        }
        while ( HIDWORD(v16) != v20 );
      *((_DWORD *)v2 + 29) = v19;
    HIDWORD(v18) = v3 - v17;
    LODWORD(v18) = (char *)v2 + 112;
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_default_append(v18);
  return v8;
}


int __fastcall FillingContainer::unlinkSlot(int result, int a2)
{
  int v2; // r2@2

  if ( a2 >= 0 )
  {
    v2 = *(_QWORD *)(result + 128);
    result = (signed int)((*(_QWORD *)(result + 128) >> 32) - v2) >> 2;
    if ( result > a2 )
    {
      result = -1;
      *(_DWORD *)(v2 + 4 * a2) = -1;
    }
  }
  return result;
}


signed int __fastcall FillingContainer::getAndRemoveResource(FillingContainer *this, ItemInstance *a2, int a3, int a4)
{
  ItemInstance *v4; // r5@1
  FillingContainer *v5; // r4@1
  int v6; // r6@1
  int v7; // r7@1
  FillingContainer *v8; // r0@3
  const ItemInstance *v9; // r1@3
  int v10; // r2@3
  int v11; // r3@3
  signed int v12; // r0@5
  signed int v13; // r6@5
  int v14; // r0@6
  signed int result; // r0@12
  int v16; // [sp+0h] [bp-60h]@6
  int v17; // [sp+8h] [bp-58h]@10
  void *v18; // [sp+24h] [bp-3Ch]@8
  void *ptr; // [sp+34h] [bp-2Ch]@6

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  if ( Recipe::isAnyAuxValue(a2, a2) || (unsigned __int16)ItemInstance::getAuxValue(v4) == 0x7FFF )
  {
    v8 = v5;
    v9 = v4;
    v10 = 0;
    v11 = 0;
  }
  else
    v10 = v7;
    v11 = v6;
  v12 = FillingContainer::getSlotWithItem(v8, v9, v10, v11);
  v13 = v12;
  if ( v12 < 0 )
    result = 0;
    v14 = (*(int (__fastcall **)(FillingContainer *, signed int))(*(_DWORD *)v5 + 16))(v5, v12);
    ItemInstance::ItemInstance((ItemInstance *)&v16, v14);
    ItemInstance::operator=((int)v4, (int)&v16);
    ItemInstance::set(v4, 1);
    ItemInstance::remove((ItemInstance *)&v16, 1);
    (*(void (__fastcall **)(FillingContainer *, signed int, int *))(*(_DWORD *)v5 + 32))(v5, v13, &v16);
    if ( ptr )
      operator delete(ptr);
    if ( v18 )
      operator delete(v18);
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
    result = 1;
  return result;
}


int __fastcall FillingContainer::FillingContainer(double a1, unsigned int a2, unsigned int a3)
{
  int v3; // r7@1
  unsigned int v4; // r5@1
  unsigned int v5; // r9@1
  int v6; // r4@1
  int v7; // r6@1
  int v8; // r0@1
  int v9; // r7@1
  unsigned int v10; // r1@3
  __int64 v11; // r0@4
  int v12; // r8@6
  int v13; // r5@7
  void *v14; // r0@8
  void *v15; // r0@10
  int v16; // r0@12

  v3 = HIDWORD(a1);
  v4 = a3;
  v5 = a2;
  v6 = LODWORD(a1);
  Container::Container(a1);
  v7 = 0;
  *(_DWORD *)v6 = &off_2700B18;
  v8 = 0;
  *(_DWORD *)(v6 + 112) = 0;
  *(_DWORD *)(v6 + 116) = 0;
  *(_DWORD *)(v6 + 120) = 0;
  *(_DWORD *)(v6 + 124) = v3;
  *(_DWORD *)(v6 + 128) = 0;
  v9 = v6 + 128;
  *(_DWORD *)(v9 + 4) = 0;
  *(_DWORD *)(v9 + 8) = 0;
  if ( v4 )
  {
    std::vector<FillingContainer::LinkedSlot,std::allocator<FillingContainer::LinkedSlot>>::_M_default_append(
      v6 + 128,
      v4);
    v7 = *(_QWORD *)(v6 + 112) >> 32;
    v8 = *(_QWORD *)(v6 + 112);
  }
  v10 = 954437177 * ((v7 - v8) >> 3);
  if ( v10 >= v5 )
    if ( v10 > v5 )
    {
      v12 = v8 + 72 * v5;
      if ( v7 != v12 )
      {
        v13 = v8 + 72 * v5;
        do
        {
          v14 = *(void **)(v13 + 52);
          if ( v14 )
            operator delete(v14);
          v15 = *(void **)(v13 + 36);
          if ( v15 )
            operator delete(v15);
          v16 = *(_DWORD *)(v13 + 8);
          if ( v16 )
            (*(void (**)(void))(*(_DWORD *)v16 + 4))();
          *(_DWORD *)(v13 + 8) = 0;
          v13 += 72;
        }
        while ( v7 != v13 );
      }
      *(_DWORD *)(v6 + 116) = v12;
    }
  else
    HIDWORD(v11) = v5 - v10;
    LODWORD(v11) = v6 + 112;
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_default_append(v11);
  return v6;
}


int __fastcall FillingContainer::setLinkedSlot(__int64 this, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1

  v2 = HIDWORD(this);
  v3 = a2;
  v4 = this;
  if ( SHIDWORD(this) >= 0 )
  {
    LODWORD(this) = (signed int)((*(_QWORD *)(this + 128) >> 32) - *(_QWORD *)(this + 128)) >> 2;
    if ( (signed int)this > SHIDWORD(this) )
    {
      if ( (signed int)this > a2
        || (LODWORD(this) = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 44))(v4), (signed int)this <= v3) )
      {
        if ( v3 == -1 )
        {
          this = *(_QWORD *)(v4 + 128);
          if ( (HIDWORD(this) - (signed int)this) >> 2 > v2 )
            *(_DWORD *)(this + 4 * v2) = -1;
        }
      }
      else
        LODWORD(this) = *(_DWORD *)(v4 + 128);
        if ( *(_DWORD *)(this + 4 * v2) != v3 )
          *(_DWORD *)(this + 4 * v2) = v3;
          LODWORD(this) = *(_DWORD *)(v4 + 124);
          if ( (_DWORD)this )
            LODWORD(this) = (*(int (**)(void))(*(_DWORD *)this + 1500))();
    }
  }
  return this;
}


int __fastcall FillingContainer::_addResource(FillingContainer *this, const ItemInstance *a2, int a3)
{
  const ItemInstance *v3; // r7@1
  FillingContainer *v4; // r5@1
  int v5; // r8@1
  int v6; // r9@1
  int v7; // r4@3
  int v8; // r6@3
  int v9; // r0@3
  int i; // r4@3
  int v11; // r0@6
  int v12; // r6@6
  int v13; // r0@6
  bool v14; // zf@6
  int j; // r6@15
  signed int v16; // r10@16
  int v17; // r4@17
  int v18; // r11@20
  int v19; // r4@22
  int v20; // r6@22
  int v21; // r0@22
  int v22; // r0@25
  int v23; // r4@25
  int v24; // r0@25
  bool v25; // zf@25
  int v26; // r0@45
  int v28; // [sp+0h] [bp-70h]@42
  int v29; // [sp+8h] [bp-68h]@56
  void *v30; // [sp+24h] [bp-4Ch]@54
  void *ptr; // [sp+34h] [bp-3Ch]@52

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = *((_BYTE *)a2 + 14);
  if ( ItemInstance::getMaxStackSize(a2) == 1 )
  {
    if ( (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v4 + 144))(v4) )
    {
      v8 = *((_QWORD *)v4 + 16) >> 32;
      v7 = *((_QWORD *)v4 + 16);
      v9 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v4 + 44))(v4);
      for ( i = (v8 - v7) >> 2; i < v9; ++i )
      {
        v11 = (*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v4 + 16))(v4, i);
        v12 = v11;
        v13 = *(_BYTE *)(v11 + 15);
        v14 = v13 == 0;
        if ( v13 )
          v14 = *(_DWORD *)v12 == 0;
        if ( v14 || ItemInstance::isNull((ItemInstance *)v12) || !*(_BYTE *)(v12 + 14) )
        {
          if ( i >= 0 )
          {
            (*(void (__fastcall **)(FillingContainer *, int, const ItemInstance *))(*(_DWORD *)v4 + 32))(v4, i, v3);
            if ( v5 == 1 )
              FillingContainer::linkEmptySlot(v4, i);
            v6 = 0;
          }
          return v6;
        }
        v9 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v4 + 44))(v4);
      }
    }
  }
  else
    j = FillingContainer::_getSlotWithRemainingSpace(v4, v3);
    if ( j >= 0 )
      v16 = 1;
LABEL_17:
      v17 = (*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v4 + 16))(v4, j);
      if ( *(_BYTE *)(v17 + 15) )
        if ( *(_DWORD *)v17 )
          if ( ItemInstance::isNull((ItemInstance *)v17) )
            v18 = v6;
          else if ( *(_BYTE *)(v17 + 14) )
            if ( v6 > ItemInstance::getMaxStackSize((ItemInstance *)v17) - *(_BYTE *)(v17 + 14) )
              v18 = ItemInstance::getMaxStackSize((ItemInstance *)v17) - *(_BYTE *)(v17 + 14);
            if ( v18 > (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v4 + 48))(v4) - *(_BYTE *)(v17 + 14) )
              v18 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v4 + 48))(v4) - *(_BYTE *)(v17 + 14);
            if ( !v18 )
              return v6;
          else
        else
          v18 = v6;
      else
        v18 = v6;
      ItemInstance::ItemInstance((ItemInstance *)&v28, (int)v3);
            LOBYTE(v26) = 0;
            v26 = *(_BYTE *)(v17 + 14);
          LOBYTE(v26) = 0;
        LOBYTE(v26) = 0;
      ItemInstance::set((ItemInstance *)&v28, (unsigned __int8)(v26 + v18));
      ItemInstance::setPickupTime((ItemInstance *)&v28);
      (*(void (__fastcall **)(FillingContainer *, int, int *))(*(_DWORD *)v4 + 32))(v4, j, &v28);
      if ( !(v5 ^ 1 | v16) )
        FillingContainer::linkEmptySlot(v4, j);
      if ( ptr )
        operator delete(ptr);
      if ( v30 )
        operator delete(v30);
      v6 -= v18;
      if ( v29 )
        (*(void (**)(void))(*(_DWORD *)v29 + 4))();
      return v6;
      v20 = *((_QWORD *)v4 + 16) >> 32;
      v19 = *((_QWORD *)v4 + 16);
      v21 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 44))(v4);
      for ( j = (v20 - v19) >> 2; j < v21; ++j )
        v22 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v4 + 16))(v4, j);
        v23 = v22;
        v24 = *(_BYTE *)(v22 + 15);
        v25 = v24 == 0;
        if ( v24 )
          v25 = *(_DWORD *)v23 == 0;
        if ( v25 || ItemInstance::isNull((ItemInstance *)v23) || !*(_BYTE *)(v23 + 14) )
          if ( j < 0 )
            return v6;
          v16 = 0;
          goto LABEL_17;
        v21 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 44))(v4);
  return v6;
}


signed int __fastcall FillingContainer::removeResource(FillingContainer *this, const ItemInstance *a2)
{
  int v2; // r0@1
  signed int v3; // r1@1

  v2 = FillingContainer::removeResource(this, a2, 1, 1, -1);
  v3 = 0;
  if ( !v2 )
    v3 = 1;
  return v3;
}


int __fastcall FillingContainer::dropSlot(__int64 this, int a2, int a3, int a4)
{
  int v4; // r10@1
  int v5; // r9@1
  int v6; // r4@1
  int v7; // r2@2
  int v8; // r5@3
  int v9; // r7@3
  signed int v10; // r2@5
  signed int v11; // r2@6
  int v12; // r3@6
  int v13; // r6@13
  bool v14; // zf@13
  int v15; // r8@18
  ItemInstance *v16; // r0@22
  int v17; // r0@29
  int v18; // r1@30 OVERLAPPED
  int v19; // r8@30
  int v20; // r2@30
  int v21; // r6@32
  bool v22; // zf@32
  __int64 v23; // r0@39
  int v25; // [sp+0h] [bp-B8h]@29
  int v26; // [sp+8h] [bp-B0h]@45
  void *v27; // [sp+24h] [bp-94h]@43
  void *v28; // [sp+34h] [bp-84h]@41
  char v29; // [sp+48h] [bp-70h]@22
  int v30; // [sp+50h] [bp-68h]@26
  void *v31; // [sp+6Ch] [bp-4Ch]@24
  void *ptr; // [sp+7Ch] [bp-3Ch]@22

  v4 = a3;
  v5 = a2;
  v6 = this;
  if ( SHIDWORD(this) <= -1 )
  {
    v7 = *(_QWORD *)(this + 128) >> 32;
    LODWORD(this) = *(_QWORD *)(this + 128);
  }
  else
    if ( (v7 - (signed int)this) >> 2 > SHIDWORD(this) )
    {
      v8 = *(_DWORD *)(this + 4 * HIDWORD(this));
      v9 = HIDWORD(this);
      goto LABEL_11;
    }
  v10 = v7 - this;
  v9 = -1;
  if ( v10 >= 1 )
    v11 = v10 >> 2;
    v12 = 0;
    do
      if ( *(_DWORD *)(this + 4 * v12) == HIDWORD(this) )
        v9 = v12;
      ++v12;
    while ( v12 < v11 );
  v8 = HIDWORD(this);
LABEL_11:
  if ( v8 >= 0 )
    this = *(_QWORD *)(v6 + 112);
    if ( v8 < 954437177 * ((HIDWORD(this) - (signed int)this) >> 3) )
      v13 = this + 72 * v8;
      LODWORD(this) = *(_BYTE *)(v13 + 15);
      v14 = (_DWORD)this == 0;
      if ( *(_BYTE *)(v13 + 15) )
      {
        LODWORD(this) = *(_DWORD *)v13;
        v14 = *(_DWORD *)v13 == 0;
      }
      if ( !v14 )
        LODWORD(this) = ItemInstance::isNull((ItemInstance *)v13);
        if ( !(_DWORD)this )
        {
          LODWORD(this) = *(_BYTE *)(v13 + 14);
          if ( *(_BYTE *)(v13 + 14) )
          {
            LODWORD(this) = *(_DWORD *)(v6 + 112);
            HIDWORD(this) = this + 72 * v8;
            v15 = *(_BYTE *)(HIDWORD(this) + 14);
            if ( *(_BYTE *)(HIDWORD(this) + 14) )
            {
              if ( !v4 )
                v15 = 1;
              if ( !v5 )
              {
                v16 = ItemInstance::ItemInstance((ItemInstance *)&v29, SHIDWORD(this));
                ItemInstance::set(v16, v15);
                (*(void (__fastcall **)(int, char *, int))(*(_DWORD *)v6 + 140))(v6, &v29, a4);
                if ( ptr )
                  operator delete(ptr);
                if ( v31 )
                  operator delete(v31);
                if ( v30 )
                  (*(void (**)(void))(*(_DWORD *)v30 + 4))();
                LODWORD(this) = *(_DWORD *)(v6 + 112);
              }
              ItemInstance::clone((ItemInstance *)&v25, this + 72 * v8);
              ItemInstance::remove((ItemInstance *)&v25, v15);
              (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)v6 + 32))(v6, v8, &v25);
              v17 = *(_DWORD *)(v6 + 112);
              if ( !*(_BYTE *)(v17 + 72 * v8 + 14) )
                *(_QWORD *)&v18 = *(_QWORD *)(v6 + 128);
                v19 = v8;
                if ( (v20 - v18) >> 2 > v8 )
                  v19 = *(_DWORD *)(v18 + 4 * v8);
                v21 = v17 + 72 * v19;
                v22 = *(_BYTE *)(v21 + 15) == 0;
                if ( *(_BYTE *)(v21 + 15) )
                  v22 = *(_DWORD *)v21 == 0;
                if ( !v22 && !ItemInstance::isNull((ItemInstance *)v21) && *(_BYTE *)(v21 + 14) )
                  (*(void (__fastcall **)(int, int, void *))(*(_DWORD *)v6 + 32))(v6, v19, &ItemInstance::EMPTY_ITEM);
                if ( v9 >= 0 )
                {
                  v23 = *(_QWORD *)(v6 + 128);
                  if ( (HIDWORD(v23) - (signed int)v23) >> 2 > v9 )
                    *(_DWORD *)(v23 + 4 * v9) = -1;
                }
              (*(void (__fastcall **)(int, int))(*(_DWORD *)v6 + 84))(v6, v8);
              if ( v28 )
                operator delete(v28);
              if ( v27 )
                operator delete(v27);
              LODWORD(this) = v26;
              if ( v26 )
                LODWORD(this) = (*(int (**)(void))(*(_DWORD *)v26 + 4))();
            }
          }
        }
  return this;
}


signed int __fastcall FillingContainer::linkEmptySlot(FillingContainer *this, int a2)
{
  FillingContainer *v2; // r8@1
  int v3; // r5@1
  __int64 v4; // r0@1
  signed int v5; // r2@1
  int v6; // r7@2
  int v7; // r4@6
  int v8; // r7@7
  ItemInstance *v9; // r6@7
  bool v10; // zf@10
  signed int result; // r0@16
  int v12; // r0@17

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 16);
  v5 = HIDWORD(v4) - v4;
  if ( HIDWORD(v4) - (signed int)v4 < 1 )
  {
LABEL_16:
    result = 0;
  }
  else
    v6 = 0;
    while ( *(_DWORD *)(v4 + 4 * v6) != v3 )
    {
      if ( ++v6 >= v5 >> 2 )
      {
        if ( v5 < 1 )
          goto LABEL_16;
        v7 = 0;
        while ( 1 )
        {
          v8 = *(_DWORD *)(v4 + 4 * v7);
          v9 = (ItemInstance *)&ItemInstance::EMPTY_ITEM;
          if ( v8 >= (HIDWORD(v4) - (signed int)v4) >> 2 )
          {
            v9 = (ItemInstance *)&ItemInstance::EMPTY_ITEM;
            if ( v8 < (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2) )
              v9 = (ItemInstance *)(*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v2 + 16))(v2, v8);
          }
          v10 = *((_BYTE *)v9 + 15) == 0;
          if ( *((_BYTE *)v9 + 15) )
            v10 = *(_DWORD *)v9 == 0;
          if ( v10 || ItemInstance::isNull(v9) || !*((_BYTE *)v9 + 14) )
            break;
          v4 = *((_QWORD *)v2 + 16);
          if ( ++v7 >= (HIDWORD(v4) - (signed int)v4) >> 2 )
            goto LABEL_16;
        }
        *(_DWORD *)(*((_DWORD *)v2 + 32) + 4 * v7) = v3;
        v12 = *((_DWORD *)v2 + 31);
        if ( v12 )
          (*(void (**)(void))(*(_DWORD *)v12 + 1500))();
        break;
      }
    }
    result = 1;
  return result;
}


signed int __fastcall FillingContainer::_getSlotWithRemainingSpace(FillingContainer *this, const ItemInstance *a2)
{
  FillingContainer *v2; // r6@1
  const ItemInstance *v3; // r4@1
  signed int v4; // r5@1
  int v5; // r0@2
  int v6; // r7@2
  int v7; // r0@2
  bool v8; // zf@2
  int v9; // r0@6
  bool v10; // zf@6
  unsigned int v11; // r10@11
  int v12; // r10@12
  __int64 v14; // [sp+0h] [bp-30h]@10
  __int64 v15; // [sp+8h] [bp-28h]@10

  v2 = this;
  v3 = a2;
  v4 = (signed int)((*((_QWORD *)this + 16) >> 32) - *((_QWORD *)this + 16)) >> 2;
  if ( v4 >= (*(int (**)(void))(*(_DWORD *)this + 44))() )
  {
LABEL_15:
    v4 = -1;
  }
  else
    while ( 1 )
    {
      v5 = (*(int (__fastcall **)(FillingContainer *, signed int))(*(_DWORD *)v2 + 16))(v2, v4);
      v6 = v5;
      v7 = *(_BYTE *)(v5 + 15);
      v8 = v7 == 0;
      if ( v7 )
        v8 = *(_DWORD *)v6 == 0;
      if ( !v8 && !ItemInstance::isNull((ItemInstance *)v6) )
      {
        v9 = *(_BYTE *)(v6 + 14);
        v10 = v9 == 0;
        if ( *(_BYTE *)(v6 + 14) )
        {
          v9 = *(_DWORD *)v3;
          v10 = *(_DWORD *)v3 == 0;
        }
        if ( !v10 && *(_DWORD *)v6 == v9 )
          MapItem::getMapId((MapItem *)&v15, v3);
          MapItem::getMapId((MapItem *)&v14, (const ItemInstance *)v6);
          if ( !(v15 ^ v14) )
          {
            v11 = *(_BYTE *)(v6 + 14);
            if ( v11 < ItemInstance::getMaxStackSize((ItemInstance *)v6) )
            {
              v12 = *(_BYTE *)(v6 + 14);
              if ( v12 < (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 48))(v2) )
              {
                if ( ItemInstance::isStackable(v3, (const ItemInstance *)v6) )
                  break;
              }
            }
          }
      }
      if ( ++v4 >= (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2) )
        goto LABEL_15;
    }
  return v4;
}


signed int __fastcall FillingContainer::getSlotWithItem(FillingContainer *this, const ItemInstance *a2, int a3, int a4)
{
  FillingContainer *v4; // r6@1
  int v5; // r8@1
  int v6; // r7@1
  ItemInstance *v7; // r9@1
  signed int v8; // r0@1
  signed int v9; // r4@1
  int v10; // r0@1
  int v11; // r5@1
  int v12; // r0@1
  bool v13; // zf@1
  signed int v14; // r10@6
  int v15; // r10@8
  int v16; // r0@14
  int v17; // r5@14
  int v18; // r0@14
  bool v19; // zf@14
  signed int v20; // r7@19
  int v21; // r7@20
  int v22; // r0@27
  int v23; // r5@27
  int v24; // r0@27
  bool v25; // zf@27
  signed int v26; // r7@32
  int v27; // r0@37
  int v28; // r5@37
  int v29; // r0@37
  bool v30; // zf@37
  signed int v31; // r5@42

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Player::getSelectedItemSlot(*((Player **)this + 31));
  v9 = v8;
  v10 = (*(int (__fastcall **)(FillingContainer *, signed int))(*(_DWORD *)v4 + 16))(v4, v8);
  v11 = v10;
  v12 = *(_BYTE *)(v10 + 15);
  v13 = v12 == 0;
  if ( v12 )
    v13 = *(_DWORD *)v11 == 0;
  if ( v13
    || ItemInstance::isNull((ItemInstance *)v11)
    || !*(_BYTE *)(v11 + 14)
    || (v14 = ItemInstance::getId((ItemInstance *)v11), v14 != ItemInstance::getId(v7))
    || v6 == 1 && (v15 = ItemInstance::getAuxValue((ItemInstance *)v11), v15 != ItemInstance::getAuxValue(v7))
    || v5 == 1
    && (ItemInstance::hasSameUserData((ItemInstance *)v11, v7) != 1
     || !ItemInstance::componentsMatch((ItemInstance *)v11, v7)) )
  {
    v9 = (signed int)((*((_QWORD *)v4 + 16) >> 32) - *((_QWORD *)v4 + 16)) >> 2;
    if ( v9 >= (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 44))(v4) )
    {
LABEL_44:
      v9 = -1;
    }
    else if ( v6 == 1 )
      while ( 1 )
      {
        v16 = (*(int (__fastcall **)(FillingContainer *, signed int))(*(_DWORD *)v4 + 16))(v4, v9);
        v17 = v16;
        v18 = *(_BYTE *)(v16 + 15);
        v19 = v18 == 0;
        if ( v18 )
          v19 = *(_DWORD *)v17 == 0;
        if ( !v19 && !ItemInstance::isNull((ItemInstance *)v17) )
        {
          if ( *(_BYTE *)(v17 + 14) )
          {
            v20 = ItemInstance::getId((ItemInstance *)v17);
            if ( v20 == ItemInstance::getId(v7) )
            {
              v21 = ItemInstance::getAuxValue((ItemInstance *)v17);
              if ( v21 == ItemInstance::getAuxValue(v7)
                && (v5 != 1
                 || ItemInstance::hasSameUserData((ItemInstance *)v17, v7) == 1
                 && ItemInstance::componentsMatch((ItemInstance *)v17, v7)) )
              {
                break;
              }
            }
          }
        }
        if ( ++v9 >= (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v4 + 44))(v4) )
          goto LABEL_44;
      }
    else if ( v5 == 1 )
        v22 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v4 + 16))(v4, v9);
        v23 = v22;
        v24 = *(_BYTE *)(v22 + 15);
        v25 = v24 == 0;
        if ( v24 )
          v25 = *(_DWORD *)v23 == 0;
        if ( !v25 && !ItemInstance::isNull((ItemInstance *)v23) )
          if ( *(_BYTE *)(v23 + 14) )
            v26 = ItemInstance::getId((ItemInstance *)v23);
            if ( v26 == ItemInstance::getId(v7)
              && ItemInstance::hasSameUserData((ItemInstance *)v23, v7) == 1
              && ItemInstance::componentsMatch((ItemInstance *)v23, v7) )
              break;
    else
        v27 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v4 + 16))(v4, v9);
        v28 = v27;
        v29 = *(_BYTE *)(v27 + 15);
        v30 = v29 == 0;
        if ( v29 )
          v30 = *(_DWORD *)v28 == 0;
        if ( !v30 && !ItemInstance::isNull((ItemInstance *)v28) )
          if ( *(_BYTE *)(v28 + 14) )
            v31 = ItemInstance::getId((ItemInstance *)v28);
            if ( v31 == ItemInstance::getId(v7) )
        if ( ++v9 >= (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 44))(v4) )
  }
  return v9;
}


int __fastcall FillingContainer::clearSlot(int result, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r0@2
  signed int v5; // r6@3
  int v6; // r7@7
  bool v7; // zf@7
  int v8; // r6@14
  bool v9; // zf@14

  v2 = a2;
  v3 = result;
  if ( a2 >= 0 )
  {
    v4 = *(_QWORD *)(result + 128);
    HIDWORD(v4) = (HIDWORD(v4) - (signed int)v4) >> 2;
    if ( SHIDWORD(v4) <= v2 )
    {
      v8 = *(_DWORD *)(v3 + 112) + 72 * v2;
      result = *(_BYTE *)(v8 + 15);
      v9 = result == 0;
      if ( *(_BYTE *)(v8 + 15) )
      {
        result = *(_DWORD *)v8;
        v9 = *(_DWORD *)v8 == 0;
      }
      if ( !v9 )
        result = ItemInstance::isNull((ItemInstance *)(*(_DWORD *)(v3 + 112) + 72 * v2));
        if ( !result )
        {
          result = *(_BYTE *)(v8 + 14);
          if ( *(_BYTE *)(v8 + 14) )
            result = (*(int (__fastcall **)(int, int, void *))(*(_DWORD *)v3 + 32))(v3, v2, &ItemInstance::EMPTY_ITEM);
        }
    }
    else
      v5 = *(_DWORD *)(v4 + 4 * v2);
      if ( SHIDWORD(v4) > v5 )
        if ( v5 < 0 )
          v5 = -1;
        else
          v5 = *(_DWORD *)(v4 + 4 * v5);
      v6 = *(_DWORD *)(v3 + 112) + 72 * v5;
      v7 = *(_BYTE *)(v6 + 15) == 0;
      if ( *(_BYTE *)(v6 + 15) )
        v7 = *(_DWORD *)v6 == 0;
      if ( !v7 && !ItemInstance::isNull((ItemInstance *)(*(_DWORD *)(v3 + 112) + 72 * v5)) )
        if ( *(_BYTE *)(v6 + 14) )
          (*(void (__fastcall **)(int, signed int, void *))(*(_DWORD *)v3 + 32))(v3, v5, &ItemInstance::EMPTY_ITEM);
      result = *(_DWORD *)(v3 + 128);
      *(_DWORD *)(result + 4 * v2) = -1;
  }
  return result;
}


int __fastcall FillingContainer::getEmptySlotsCount(FillingContainer *this)
{
  FillingContainer *v1; // r4@1
  int v2; // r8@1
  int v3; // r7@4
  int v4; // r6@4
  int v5; // r5@5
  signed int v6; // r0@8
  int result; // r0@16

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 44))();
  if ( (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v1 + 44))(v1) <= v2 )
    v2 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v1 + 44))(v1);
  if ( v2 < 1 )
  {
    result = 0;
  }
  else
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = (*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v1 + 16))(v1, v3);
      if ( *(_BYTE *)(v5 + 15) )
      {
        if ( *(_DWORD *)v5 )
        {
          if ( ItemInstance::isNull((ItemInstance *)v5) )
          {
            v6 = 0;
          }
          else
            v6 = *(_BYTE *)(v5 + 14);
            if ( *(_BYTE *)(v5 + 14) )
              v6 = 1;
        }
        else
          v6 = 0;
      }
      else
        v6 = 0;
      ++v3;
      if ( !v6 )
        ++v4;
    }
    while ( v2 != v3 );
    result = v4;
  return result;
}


signed int __fastcall FillingContainer::add(FillingContainer *this, ItemInstance *a2, int a3)
{
  ItemInstance *v3; // r4@1
  FillingContainer *v4; // r5@1
  int v5; // r6@1
  bool v6; // zf@1
  int v7; // r8@8
  int v8; // r0@9
  int v9; // r7@9
  int v10; // r0@9
  bool v11; // zf@9
  int v12; // r1@14
  signed int result; // r0@14
  unsigned __int8 v14; // r7@16
  unsigned __int8 v15; // r0@17
  unsigned int v16; // r1@17
  unsigned int v17; // r2@17

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    v6 = *(_DWORD *)a2 == 0;
  if ( v6 || ItemInstance::isNull(a2) || !*((_BYTE *)v3 + 14) )
    return 1;
  if ( ItemInstance::isDamaged(v3) )
  {
    if ( !(*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v4 + 144))(v4) )
      return 0;
    v7 = (signed int)((*((_QWORD *)v4 + 16) >> 32) - *((_QWORD *)v4 + 16)) >> 2;
    if ( v7 >= (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v4 + 44))(v4) )
    while ( 1 )
    {
      v8 = (*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v4 + 16))(v4, v7);
      v9 = v8;
      v10 = *(_BYTE *)(v8 + 15);
      v11 = v10 == 0;
      if ( v10 )
        v11 = *(_DWORD *)v9 == 0;
      if ( v11 || ItemInstance::isNull((ItemInstance *)v9) || !*(_BYTE *)(v9 + 14) )
        break;
      ++v7;
      v12 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v4 + 44))(v4);
      result = 0;
      if ( v7 >= v12 )
        return result;
    }
    if ( v7 < 0 )
    (*(void (__fastcall **)(FillingContainer *, int, ItemInstance *))(*(_DWORD *)v4 + 32))(v4, v7, v3);
    if ( v5 == 1 )
      FillingContainer::linkEmptySlot(v4, v7);
    ItemInstance::set(v3, 0);
  }
  v14 = *((_BYTE *)v3 + 14);
  do
    v15 = FillingContainer::_addResource(v4, v3, v5);
    ItemInstance::set(v3, v15);
    v16 = *((_BYTE *)v3 + 14);
    v17 = v14;
    result = 0;
    if ( v16 < v14 )
      result = 1;
    if ( !*((_BYTE *)v3 + 14) )
      break;
    v14 = *((_BYTE *)v3 + 14);
  while ( v16 < v17 );
  return result;
}


int __fastcall FillingContainer::setItemWithoutSlotLinking(__int64 this, const ItemInstance *a2)
{
  __int64 v2; // kr00_8@1
  const ItemInstance *v3; // r6@1
  int v4; // r1@7
  int v5; // r3@7
  bool v6; // zf@8

  v2 = this;
  v3 = a2;
  LODWORD(this) = (signed int)((*(_QWORD *)(this + 128) >> 32) - *(_QWORD *)(this + 128)) >> 2;
  if ( (signed int)this <= SHIDWORD(this) )
  {
    this = *(_QWORD *)(v2 + 112);
    if ( 954437177 * ((HIDWORD(this) - (signed int)this) >> 3) > SHIDWORD(v2) )
    {
      LODWORD(this) = ItemInstance::operator==((ItemInstance *)(this + 72 * HIDWORD(v2)), a2);
      if ( !(_DWORD)this )
      {
        (*(void (__fastcall **)(_DWORD, int, int, const ItemInstance *))(*(_DWORD *)v2 + 112))(
          v2,
          HIDWORD(v2) - ((signed int)((*(_QWORD *)(v2 + 128) >> 32) - *(_QWORD *)(v2 + 128)) >> 2),
          *(_DWORD *)(v2 + 112) + 72 * HIDWORD(v2),
          v3);
        if ( *(_DWORD *)(v2 + 124)
          && ItemInstance::operator!=((ItemInstance *)(*(_DWORD *)(v2 + 112) + 72 * HIDWORD(v2)), v3) == 1 )
        {
          v4 = *(_DWORD *)(v2 + 132);
          v5 = *(_DWORD *)(v2 + 112) + 72 * HIDWORD(v2);
          (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*(_QWORD *)(v2 + 124) + 1468))(*(_QWORD *)(v2 + 124));
        }
        ItemInstance::operator=(*(_DWORD *)(v2 + 112) + 72 * HIDWORD(v2), (int)v3);
        v6 = *((_BYTE *)v3 + 15) == 0;
        if ( *((_BYTE *)v3 + 15) )
          v6 = *(_DWORD *)v3 == 0;
        if ( v6 || ItemInstance::isNull(v3) || !*((_BYTE *)v3 + 14) )
          (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 128))(v2, HIDWORD(v2));
        LODWORD(this) = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 84))(v2, HIDWORD(v2));
      }
    }
  }
  return this;
}


int __fastcall FillingContainer::save(FillingContainer *this, int a2)
{
  FillingContainer *v2; // r4@1
  int v3; // r5@1
  void *v4; // r8@1
  __int64 v5; // r0@1
  int v6; // r11@2
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  __int64 v9; // r0@11
  int v10; // r3@12
  FillingContainer *v11; // r6@21
  int v12; // r4@21
  void *v13; // r0@21
  int v14; // r0@22
  int v15; // r8@22
  int v17; // [sp+8h] [bp-C8h]@22
  int v18; // [sp+10h] [bp-C0h]@3
  int v19; // [sp+14h] [bp-BCh]@21
  char v20; // [sp+18h] [bp-B8h]@13
  int v21; // [sp+20h] [bp-B0h]@17
  void *v22; // [sp+3Ch] [bp-94h]@15
  void *ptr; // [sp+4Ch] [bp-84h]@13
  char v24; // [sp+60h] [bp-70h]@11
  int v25; // [sp+68h] [bp-68h]@30
  char v26; // [sp+6Fh] [bp-61h]@20
  void *v27; // [sp+84h] [bp-4Ch]@28
  void *v28; // [sp+94h] [bp-3Ch]@26

  v2 = this;
  v3 = a2;
  v4 = operator new(0x14u);
  ListTag::ListTag((int)v4);
  *(_DWORD *)v2 = v4;
  v5 = *(_QWORD *)(v3 + 112);
  if ( HIDWORD(v5) - (signed int)v5 >= 1 )
  {
    v6 = 0;
    do
    {
      ItemInstance::ItemInstance((ItemInstance *)&v24, v5 + 72 * v6);
      v9 = *(_QWORD *)(v3 + 128);
      if ( v6 < (HIDWORD(v9) - (signed int)v9) >> 2 )
      {
        v10 = *(_DWORD *)(v9 + 4 * v6);
        if ( v10 != -1 )
        {
          ItemInstance::ItemInstance((ItemInstance *)&v20, 255, 255, v10);
          ItemInstance::operator=((int)&v24, (int)&v20);
          if ( ptr )
            operator delete(ptr);
          if ( v22 )
            operator delete(v22);
          if ( v21 )
            (*(void (**)(void))(*(_DWORD *)v21 + 4))();
          v21 = 0;
        }
      }
      if ( v26 )
        ItemInstance::save((ItemInstance *)&v19, (ItemInstance *)&v24);
        v11 = v2;
        v12 = v19;
        sub_21E94B4((void **)&v18, "Slot");
        CompoundTag::putByte(v12, (const void **)&v18, v6);
        v2 = v11;
        v13 = (void *)(v18 - 12);
        if ( (int *)(v18 - 12) != &dword_28898C0 )
          v7 = (unsigned int *)(v18 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
            v2 = v11;
          }
          else
            v8 = (*v7)--;
          if ( v8 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        v14 = v19;
        v15 = *(_DWORD *)v2;
        v19 = 0;
        v17 = v14;
        ListTag::add(v15, &v17);
        if ( v17 )
          (*(void (**)(void))(*(_DWORD *)v17 + 4))();
        v17 = 0;
        if ( v19 )
          (*(void (**)(void))(*(_DWORD *)v19 + 4))();
      if ( v28 )
        operator delete(v28);
      if ( v27 )
        operator delete(v27);
      if ( v25 )
        (*(void (**)(void))(*(_DWORD *)v25 + 4))();
      v5 = *(_QWORD *)(v3 + 112);
      ++v6;
    }
    while ( v6 < 954437177 * ((HIDWORD(v5) - (signed int)v5) >> 3) );
  }
  return v5;
}


signed int __fastcall FillingContainer::hasResource(FillingContainer *this, int a2)
{
  FillingContainer *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  signed int result; // r0@3
  __int64 v6; // r6@4
  int v7; // r0@4
  int i; // r6@4
  ItemInstance *v9; // r0@7

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 31);
  if ( v4 && (*(int (**)(void))(*(_DWORD *)v4 + 652))() )
  {
    result = 1;
  }
  else
    v6 = *((_QWORD *)v2 + 16);
    v7 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2);
    for ( i = (HIDWORD(v6) - (signed int)v6) >> 2; i < v7; ++i )
    {
      v9 = (ItemInstance *)(*(int (__fastcall **)(FillingContainer *, int))(*(_DWORD *)v2 + 16))(v2, i);
      if ( ItemInstance::getId(v9) == v3 )
        goto LABEL_10;
      v7 = (*(int (__fastcall **)(FillingContainer *))(*(_DWORD *)v2 + 44))(v2);
    }
    i = -1;
LABEL_10:
    result = 0;
    if ( i > -1 )
      result = 1;
  return result;
}
