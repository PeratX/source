

int __fastcall WrittenBookItem::getGeneration(WrittenBookItem *this, const ItemInstance *a2)
{
  int v2; // r4@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+0h] [bp-20h]@1

  v2 = *(_DWORD *)ItemInstance::getUserData(this);
  sub_21E91E0((void **)&v8, unk_2809184, WrittenBookItem::TAG_GENERATION);
  v3 = CompoundTag::getInt(v2, (const void **)&v8);
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
  return v3;
}


void __fastcall WrittenBookItem::appendFormattedHovertext(int a1, ItemInstance *this, int a3, int a4, int a5)
{
  WrittenBookItem::appendFormattedHovertext(a1, this, a3, a4, a5);
}


const void **__fastcall WrittenBookItem::getAuthor(WrittenBookItem *this, const ItemInstance *a2)
{
  WrittenBookItem *v2; // r4@1
  void **v3; // r0@4
  int v4; // r4@10
  const void **v5; // r4@11
  void *v6; // r0@11
  unsigned int *v7; // r2@12
  signed int v8; // r1@14
  int v10; // [sp+0h] [bp-20h]@11

  v2 = this;
  if ( !*((_BYTE *)this + 15) )
  {
    v3 = &Util::EMPTY_STRING;
    return (const void **)*v3;
  }
  if ( !*(_DWORD *)this )
  if ( ItemInstance::isNull(this) )
  if ( !*((_BYTE *)v2 + 14) )
  if ( ItemInstance::getId(v2) != *(_WORD *)(Item::mWritable_book + 18)
    && ItemInstance::getId(v2) != *(_WORD *)(Item::mWritten_book + 18) )
  v4 = *(_DWORD *)ItemInstance::getUserData(v2);
  if ( !v4 )
  sub_21E91E0((void **)&v10, *(unsigned int *)algn_280916C, WrittenBookItem::TAG_AUTHOR);
  v5 = CompoundTag::getString(v4, (const void **)&v10);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  return v5;
}


void __fastcall WrittenBookItem::~WrittenBookItem(WrittenBookItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall WrittenBookItem::getPages(WrittenBookItem *this, const ItemInstance *a2)
{
  WrittenBookItem *v2; // r11@1
  const ItemInstance *v3; // r5@1
  bool v4; // zf@1
  int v5; // r5@8
  signed int v6; // r6@9
  void *v7; // r0@9
  ListTag *v8; // r5@11
  void *v9; // r0@11
  int i; // r6@12
  const CompoundTag *v11; // r1@15
  __int64 v12; // r0@16
  int v13; // r1@17
  void *v14; // r0@19
  char *v15; // r0@20
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  unsigned int *v18; // r2@25
  signed int v19; // r1@27
  unsigned int *v20; // r2@38
  signed int v21; // r1@40
  unsigned int *v22; // r2@46
  signed int v23; // r1@48
  char *v24; // [sp+0h] [bp-40h]@16
  void *v25; // [sp+4h] [bp-3Ch]@17
  int v26; // [sp+8h] [bp-38h]@11
  int v27; // [sp+Ch] [bp-34h]@9

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = a2;
  *((_DWORD *)this + 2) = 0;
  v4 = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    v4 = *(_DWORD *)a2 == 0;
  if ( !v4
    && !ItemInstance::isNull(a2)
    && *((_BYTE *)v3 + 14)
    && (ItemInstance::getId(v3) == *(_WORD *)(Item::mWritable_book + 18)
     || ItemInstance::getId(v3) == *(_WORD *)(Item::mWritten_book + 18)) )
  {
    v5 = *(_DWORD *)ItemInstance::getUserData(v3);
    if ( v5 )
    {
      sub_21E91E0((void **)&v27, dword_2809174, WrittenBookItem::TAG_PAGES);
      v6 = CompoundTag::contains(v5, (const void **)&v27, 9);
      v7 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
      {
        v20 = (unsigned int *)(v27 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
        }
        else
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      if ( v6 == 1 )
        sub_21E91E0((void **)&v26, dword_2809174, WrittenBookItem::TAG_PAGES);
        v8 = (ListTag *)CompoundTag::getList(v5, (const void **)&v26);
        v9 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
          v22 = (unsigned int *)(v26 - 4);
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
        for ( i = 0; i < ListTag::size(v8); ++i )
          v11 = (const CompoundTag *)ListTag::get(v8, i);
          if ( v11 )
            PageContent::read((PageContent *)&v24, v11);
            v12 = *(_QWORD *)((char *)v2 + 4);
            if ( (_DWORD)v12 == HIDWORD(v12) )
            {
              std::vector<PageContent,std::allocator<PageContent>>::_M_emplace_back_aux<PageContent>(
                (unsigned __int64 *)v2,
                (int)&v24);
              v13 = (int)v25;
            }
            else
              *(_DWORD *)v12 = v24;
              HIDWORD(v12) = &unk_28898CC;
              v24 = (char *)&unk_28898CC;
              *(_DWORD *)(v12 + 4) = v25;
              v25 = &unk_28898CC;
              *((_DWORD *)v2 + 1) = v12 + 8;
            v14 = (void *)(v13 - 12);
            if ( (int *)(v13 - 12) != &dword_28898C0 )
              v18 = (unsigned int *)(v13 - 4);
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
                j_j_j_j__ZdlPv_9(v14);
            v15 = v24 - 12;
            if ( (int *)(v24 - 12) != &dword_28898C0 )
              v16 = (unsigned int *)(v24 - 4);
                  v17 = __ldrex(v16);
                while ( __strex(v17 - 1, v16) );
                v17 = (*v16)--;
              if ( v17 <= 0 )
                j_j_j_j__ZdlPv_9(v15);
    }
  }
}


void __fastcall WrittenBookItem::buildDescriptionId(WrittenBookItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  WrittenBookItem::buildDescriptionId(this, a2, a3);
}


void __fastcall WrittenBookItem::getBookId(WrittenBookItem *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r5@1
  int *v3; // r4@1
  bool v4; // zf@1
  int v5; // r5@8
  signed int v6; // r7@9
  void *v7; // r0@9
  __int64 v8; // r0@11
  void *v9; // r0@11
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@18
  signed int v13; // r1@20
  int v14; // [sp+4h] [bp-34h]@11
  int v15; // [sp+8h] [bp-30h]@9

  v2 = a2;
  v3 = (int *)this;
  v4 = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    v4 = *(_DWORD *)a2 == 0;
  if ( v4
    || ItemInstance::isNull(a2)
    || !*((_BYTE *)v2 + 14)
    || ItemInstance::getId(v2) != *(_WORD *)(Item::mWritable_book + 18)
    && ItemInstance::getId(v2) != *(_WORD *)(Item::mWritten_book + 18) )
  {
    goto LABEL_31;
  }
  v5 = *(_DWORD *)ItemInstance::getUserData(v2);
  if ( !v5 )
  sub_21E91E0((void **)&v15, unk_280919C, WrittenBookItem::TAG_ID);
  v6 = CompoundTag::contains(v5, (const void **)&v15);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  if ( v6 != 1 )
LABEL_31:
    sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
  else
    sub_21E91E0((void **)&v14, unk_280919C, WrittenBookItem::TAG_ID);
    v8 = CompoundTag::getInt64(v5, (const void **)&v14);
    Util::toString<long long,(void *)0,(void *)0>((void **)v3, SHIDWORD(v8), v8);
    v9 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v14 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
}


Item *__fastcall WrittenBookItem::WrittenBookItem(int a1, const void **a2, __int16 a3)
{
  Item *v3; // r4@1

  v3 = (Item *)a1;
  Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_2703A48;
  Item::setMaxStackSize(v3, 0x10u);
  return v3;
}


signed int __fastcall WrittenBookItem::canBeCopied(WrittenBookItem *this, const ItemInstance *a2)
{
  int v2; // r0@1
  signed int v3; // r1@1

  v2 = WrittenBookItem::getGeneration(this, a2);
  v3 = 0;
  if ( v2 < 2 )
    v3 = 1;
  return v3;
}


void __fastcall WrittenBookItem::buildDescriptionId(WrittenBookItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  ItemInstance *v3; // r4@1
  int *v4; // r5@1
  const ItemInstance *v5; // r8@1
  int v6; // r7@2
  int *v7; // r7@2
  void *v8; // r0@2
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  int v11; // [sp+0h] [bp-28h]@2

  v3 = a3;
  v4 = (int *)this;
  v5 = a2;
  if ( ItemInstance::hasUserData(a3) != 1 )
    goto LABEL_16;
  v6 = *(_DWORD *)ItemInstance::getUserData(v3);
  sub_21E91E0((void **)&v11, unk_2809164, WrittenBookItem::TAG_TITLE);
  v7 = (int *)CompoundTag::getString(v6, (const void **)&v11);
  v8 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v11 - 4);
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
  if ( *(_DWORD *)(*v7 - 12) )
    sub_21E8AF4(v4, v7);
  else
LABEL_16:
    Item::buildDescriptionName((Item *)v4, v5);
}


void __fastcall WrittenBookItem::~WrittenBookItem(WrittenBookItem *this)
{
  WrittenBookItem::~WrittenBookItem(this);
}


void __fastcall WrittenBookItem::appendFormattedHovertext(int a1, ItemInstance *this, int a3, int a4, int a5)
{
  ItemInstance *v5; // r5@1
  const void **v6; // r4@1
  int v7; // r6@2
  const void **v8; // r6@2
  void *v9; // r0@2
  __int64 v10; // kr00_8@4
  unsigned int v11; // r1@4
  const void **v12; // r0@6
  const void **v13; // r0@8
  const void **v14; // r0@8
  char *v15; // r0@8
  char *v16; // r0@9
  char *v17; // r0@10
  void *v18; // r0@11
  void *v19; // r0@12
  char *v20; // r0@13
  const ItemInstance *v21; // r1@14
  int v22; // r0@14
  const void **v23; // r0@14
  __int64 v24; // kr08_8@14
  unsigned int v25; // r1@14
  const void **v26; // r0@16
  char *v27; // r0@18
  char *v28; // r0@19
  char *v29; // r0@20
  void *v30; // r0@21
  char *v31; // r0@22
  unsigned int *v32; // r2@24
  signed int v33; // r1@26
  unsigned int *v34; // r2@28
  signed int v35; // r1@30
  unsigned int *v36; // r2@32
  signed int v37; // r1@34
  unsigned int *v38; // r2@36
  signed int v39; // r1@38
  unsigned int *v40; // r2@40
  signed int v41; // r1@42
  unsigned int *v42; // r2@44
  signed int v43; // r1@46
  unsigned int *v44; // r2@48
  signed int v45; // r1@50
  unsigned int *v46; // r2@52
  signed int v47; // r1@54
  unsigned int *v48; // r2@56
  signed int v49; // r1@58
  unsigned int *v50; // r2@60
  signed int v51; // r1@62
  unsigned int *v52; // r2@64
  signed int v53; // r1@66
  unsigned int *v54; // r2@68
  signed int v55; // r1@70
  int v56; // [sp+4h] [bp-4Ch]@1
  char *v57; // [sp+8h] [bp-48h]@1
  void *v58; // [sp+Ch] [bp-44h]@1
  char *v59; // [sp+10h] [bp-40h]@1
  char *v60; // [sp+14h] [bp-3Ch]@1
  int v61; // [sp+18h] [bp-38h]@1
  int v62; // [sp+1Ch] [bp-34h]@1
  int v63; // [sp+20h] [bp-30h]@1
  char *v64; // [sp+24h] [bp-2Ch]@1
  char *v65; // [sp+28h] [bp-28h]@1
  char *v66; // [sp+2Ch] [bp-24h]@1
  char *v67; // [sp+30h] [bp-20h]@1
  int v68; // [sp+34h] [bp-1Ch]@1

  v5 = this;
  v6 = (const void **)a4;
  Item::appendFormattedHovertext(
    a1,
    this,
    a3,
    a4,
    a5,
    v56,
    (int)v57,
    v58,
    (int)v59,
    (int)v60,
    v61,
    v62,
    v63,
    (int)v64,
    (int)v65,
    (int)v66,
    (int)v67,
    v68);
  if ( ItemInstance::hasUserData(v5) == 1 )
  {
    v7 = *(_DWORD *)ItemInstance::getUserData(v5);
    sub_21E91E0((void **)&v68, *(unsigned int *)algn_280916C, WrittenBookItem::TAG_AUTHOR);
    v8 = CompoundTag::getString(v7, (const void **)&v68);
    v9 = (void *)(v68 - 12);
    if ( (int *)(v68 - 12) != &dword_28898C0 )
    {
      v32 = (unsigned int *)(v68 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
    }
    if ( *((_DWORD *)*v8 - 3) )
      v64 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v64, *(_DWORD *)(dword_28091C4 - 12) + 1);
      sub_21E7408((const void **)&v64, "\n", 1u);
      sub_21E72F0((const void **)&v64, (const void **)&dword_28091C4);
      sub_21E94B4((void **)&v62, "book.byAuthor");
      I18n::get(&v63, (int **)&v62);
      v10 = *(_QWORD *)(v64 - 12);
      v11 = *(_DWORD *)(v63 - 12) + v10;
      if ( v11 > HIDWORD(v10) && v11 <= *(_DWORD *)(v63 - 8) )
        v12 = sub_21E82D8((const void **)&v63, 0, (unsigned int)v64, (_BYTE *)v10);
        v12 = sub_21E72F0((const void **)&v64, (const void **)&v63);
      v65 = (char *)*v12;
      *v12 = &unk_28898CC;
      v13 = sub_21E7408((const void **)&v65, " ", 1u);
      v66 = (char *)*v13;
      *v13 = &unk_28898CC;
      v14 = sub_21E72F0((const void **)&v66, v8);
      v67 = (char *)*v14;
      *v14 = &unk_28898CC;
      sub_21E72F0(v6, (const void **)&v67);
      v15 = v67 - 12;
      if ( (int *)(v67 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v67 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
        }
        else
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v16 = v66 - 12;
      if ( (int *)(v66 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v66 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v17 = v65 - 12;
      if ( (int *)(v65 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v65 - 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v18 = (void *)(v63 - 12);
      if ( (int *)(v63 - 12) != &dword_28898C0 )
        v50 = (unsigned int *)(v63 - 4);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = (void *)(v62 - 12);
      if ( (int *)(v62 - 12) != &dword_28898C0 )
        v52 = (unsigned int *)(v62 - 4);
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
          v53 = (*v52)--;
        if ( v53 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v20 = v64 - 12;
      if ( (int *)(v64 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v64 - 4);
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
    v59 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v59, *(_DWORD *)(dword_28091C4 - 12) + 1);
    sub_21E7408((const void **)&v59, "\n", 1u);
    sub_21E72F0((const void **)&v59, (const void **)&dword_28091C4);
    v22 = WrittenBookItem::getGeneration(v5, v21);
    Util::toString<int,(void *)0,(void *)0>((void **)&v56, v22);
    v23 = sub_21E82D8((const void **)&v56, 0, (unsigned int)"book.generation.", (_BYTE *)0x10);
    v57 = (char *)*v23;
    *v23 = &unk_28898CC;
    I18n::get((int *)&v58, (int **)&v57);
    v24 = *(_QWORD *)(v59 - 12);
    v25 = *((_DWORD *)v58 - 3) + v24;
    if ( v25 > HIDWORD(v24) && v25 <= *((_DWORD *)v58 - 2) )
      v26 = sub_21E82D8((const void **)&v58, 0, (unsigned int)v59, (_BYTE *)v24);
    else
      v26 = sub_21E72F0((const void **)&v59, (const void **)&v58);
    v60 = (char *)*v26;
    *v26 = &unk_28898CC;
    sub_21E72F0(v6, (const void **)&v60);
    v27 = v60 - 12;
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v60 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v28 = (char *)v58 - 12;
    if ( (int *)((char *)v58 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)((char *)v58 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    v29 = v57 - 12;
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v57 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    v30 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v56 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    v31 = v59 - 12;
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v59 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
  }
}


void __fastcall WrittenBookItem::getPages(WrittenBookItem *this, const ItemInstance *a2)
{
  WrittenBookItem::getPages(this, a2);
}


void __fastcall WrittenBookItem::resolvedBookComponents(WrittenBookItem *this, const ItemInstance *a2, const Player *a3)
{
  ItemInstance *v3; // r4@1
  WrittenBookItem *v4; // r6@2
  _BOOL4 v5; // r5@2
  void *v6; // r0@2
  CompoundTag *v7; // r1@4
  char *v8; // r0@4
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  unsigned int *v11; // r2@15
  CompoundTag *v12; // [sp+0h] [bp-30h]@4
  int v13; // [sp+4h] [bp-2Ch]@2

  v3 = a2;
  if ( ItemInstance::hasUserData(a2) == 1 )
  {
    v4 = *(WrittenBookItem **)ItemInstance::getUserData(v3);
    sub_21E91E0((void **)&v13, unk_280918C, WrittenBookItem::TAG_RESOLVED);
    v5 = CompoundTag::getBoolean((int)v4, (const void **)&v13);
    v6 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v13 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    if ( !v5 )
      sub_21E91E0((void **)&v12, unk_280918C, WrittenBookItem::TAG_RESOLVED);
      CompoundTag::putBoolean((int)v4, (const void **)&v12, 1);
      v7 = v12;
      v8 = (char *)v12 - 12;
      if ( (int *)((char *)v12 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)((char *)v12 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = (CompoundTag *)__ldrex(v11);
          while ( __strex((unsigned int)v7 - 1, v11) );
        }
        else
          v7 = (CompoundTag *)(*v11)--;
        if ( (signed int)v7 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      WrittenBookItem::makeSureTagIsValid(v4, v7);
  }
}


signed int __fastcall WrittenBookItem::makeSureTagIsValid(WrittenBookItem *this, const CompoundTag *a2)
{
  WrittenBookItem *v2; // r4@1
  signed int v3; // r6@2
  void *v4; // r0@2
  const void **v5; // r5@4
  void *v6; // r0@4
  signed int v7; // r4@6
  void *v9; // r0@8
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@21
  signed int v15; // r1@23
  int v16; // [sp+0h] [bp-20h]@8
  int v17; // [sp+4h] [bp-1Ch]@4
  int v18; // [sp+8h] [bp-18h]@2

  v2 = this;
  if ( WritableBookItem::makeSureTagIsValid(this, a2) != 1 )
    goto LABEL_34;
  sub_21E91E0((void **)&v18, unk_2809164, WrittenBookItem::TAG_TITLE);
  v3 = CompoundTag::contains((int)v2, (const void **)&v18, 8);
  v4 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v18 - 4);
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
  if ( !v3 )
  sub_21E91E0((void **)&v17, unk_2809164, WrittenBookItem::TAG_TITLE);
  v5 = CompoundTag::getString((int)v2, (const void **)&v17);
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v17 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  if ( *((_DWORD *)*v5 - 3) <= 0x10u )
    sub_21E91E0((void **)&v16, *(unsigned int *)algn_280916C, WrittenBookItem::TAG_AUTHOR);
    v7 = CompoundTag::contains((int)v2, (const void **)&v16, 8);
    v9 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v16 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
  else
LABEL_34:
    v7 = 0;
  return v7;
}


signed int __fastcall WrittenBookItem::getPageCount(WrittenBookItem *this, const ItemInstance *a2)
{
  WrittenBookItem *v2; // r4@1
  int v3; // r0@1
  bool v4; // zf@1
  int v5; // r4@8
  signed int v6; // r6@9
  void *v7; // r0@9
  ListTag *v8; // r4@11
  void *v9; // r0@11
  signed int result; // r0@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  unsigned int *v13; // r2@22
  signed int v14; // r1@24
  int v15; // [sp+0h] [bp-30h]@11
  int v16; // [sp+4h] [bp-2Ch]@9

  v2 = this;
  v3 = *((_BYTE *)this + 15);
  v4 = v3 == 0;
  if ( v3 )
    v4 = *(_DWORD *)v2 == 0;
  if ( v4
    || ItemInstance::isNull(v2)
    || !*((_BYTE *)v2 + 14)
    || ItemInstance::getId(v2) != *(_WORD *)(Item::mWritable_book + 18)
    && ItemInstance::getId(v2) != *(_WORD *)(Item::mWritten_book + 18) )
  {
    goto LABEL_32;
  }
  v5 = *(_DWORD *)ItemInstance::getUserData(v2);
  if ( !v5 )
  sub_21E91E0((void **)&v16, dword_2809174, WrittenBookItem::TAG_PAGES);
  v6 = CompoundTag::contains(v5, (const void **)&v16, 9);
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
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
      j_j_j_j__ZdlPv_9(v7);
  if ( v6 != 1 )
LABEL_32:
    result = 0;
  else
    sub_21E91E0((void **)&v15, dword_2809174, WrittenBookItem::TAG_PAGES);
    v8 = (ListTag *)CompoundTag::getList(v5, (const void **)&v15);
    v9 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
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
        j_j_j_j__ZdlPv_9(v9);
    result = ListTag::size(v8);
  return result;
}


ItemInstance *__fastcall WrittenBookItem::use(WrittenBookItem *this, ItemInstance *a2, Player *a3)
{
  Player *v3; // r5@1
  ItemInstance *v4; // r4@1
  Level *v5; // r0@1
  PlayerInventoryProxy *v6; // r7@2
  int v7; // r6@2
  int v8; // r0@2
  ItemInstance *v9; // r0@5

  v3 = a3;
  v4 = a2;
  v5 = (Level *)Entity::getLevel(a3);
  if ( Level::isClientSide(v5) == 1 )
  {
    v6 = (PlayerInventoryProxy *)Player::getSupplies(v3);
    v7 = PlayerInventoryProxy::getLinkedSlotsCount(v6);
    v8 = PlayerInventoryProxy::getContainerSize((int)v6, 0);
    while ( v7 < v8 )
    {
      v9 = (ItemInstance *)PlayerInventoryProxy::getItem((int)v6, v7, 0);
      if ( ItemInstance::operator==(v9, v4) == 1 )
      {
        (*(void (__fastcall **)(Player *, int, _DWORD))(*(_DWORD *)v3 + 1328))(v3, v7, 0);
        return v4;
      }
      v8 = PlayerInventoryProxy::getContainerSize((int)v6, 0);
      ++v7;
    }
  }
  return v4;
}


const void **__fastcall WrittenBookItem::getTitle(WrittenBookItem *this, const ItemInstance *a2)
{
  WrittenBookItem *v2; // r4@1
  void **v3; // r0@4
  int v4; // r4@10
  signed int v5; // r6@11
  void *v6; // r0@11
  const void **v7; // r4@13
  void *v8; // r0@13
  unsigned int *v9; // r2@14
  signed int v10; // r1@16
  unsigned int *v12; // r2@24
  signed int v13; // r1@26
  int v14; // [sp+0h] [bp-30h]@13
  int v15; // [sp+4h] [bp-2Ch]@11

  v2 = this;
  if ( !*((_BYTE *)this + 15) )
  {
    v3 = &Util::EMPTY_STRING;
    return (const void **)*v3;
  }
  if ( !*(_DWORD *)this )
  if ( ItemInstance::isNull(this) )
  if ( !*((_BYTE *)v2 + 14) )
  if ( ItemInstance::getId(v2) != *(_WORD *)(Item::mWritable_book + 18)
    && ItemInstance::getId(v2) != *(_WORD *)(Item::mWritten_book + 18) )
  v4 = *(_DWORD *)ItemInstance::getUserData(v2);
  if ( !v4 )
  sub_21E91E0((void **)&v15, unk_2809164, WrittenBookItem::TAG_TITLE);
  v5 = CompoundTag::contains(v4, (const void **)&v15, 8);
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  if ( v5 != 1 )
  sub_21E91E0((void **)&v14, unk_2809164, WrittenBookItem::TAG_TITLE);
  v7 = CompoundTag::getString(v4, (const void **)&v14);
  v8 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v14 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return v7;
}


void __fastcall WrittenBookItem::getBookId(WrittenBookItem *this, const ItemInstance *a2)
{
  WrittenBookItem::getBookId(this, a2);
}


signed int __fastcall WrittenBookItem::isGlint(WrittenBookItem *this, const ItemInstance *a2)
{
  return 1;
}
