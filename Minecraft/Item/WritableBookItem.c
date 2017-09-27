

void __fastcall WritableBookItem::addPageAt(WritableBookItem *this, const ItemInstance *a2, int a3, const PageContent *a4)
{
  WritableBookItem *v4; // r6@1
  PageContent *v5; // r5@1
  int v6; // r0@1
  const ItemInstance *v7; // r4@1
  bool v8; // zf@1
  int v9; // r6@7
  signed int v10; // r8@9
  void *v11; // r0@9
  void *v12; // r7@11
  void *v13; // r0@13
  ListTag *v14; // r11@14
  void *v15; // r0@14
  const CompoundTag *v16; // r6@17
  CompoundTag *v17; // r2@17
  signed int i; // r7@18
  int v19; // r0@19
  int v20; // r0@24
  unsigned int *v21; // r2@29
  signed int v22; // r1@31
  unsigned int *v23; // r2@33
  signed int v24; // r1@35
  unsigned int *v25; // r2@45
  signed int v26; // r1@47
  const CompoundTag *v27; // r6@50
  CompoundTag *v28; // r2@50
  void *v29; // r0@50
  void *v30; // r0@51
  unsigned int *v31; // r2@52
  signed int v32; // r1@54
  unsigned int *v33; // r2@56
  signed int v34; // r1@58
  int v35; // r0@67
  void *v36; // r0@71
  void *v37; // r0@72
  unsigned int *v38; // r2@78
  signed int v39; // r1@80
  unsigned int *v40; // r2@82
  signed int v41; // r1@84
  int v42; // [sp+8h] [bp-60h]@24
  int v43; // [sp+Ch] [bp-5Ch]@24
  int v44; // [sp+10h] [bp-58h]@19
  int v45; // [sp+14h] [bp-54h]@19
  int v46; // [sp+18h] [bp-50h]@67
  int v47; // [sp+1Ch] [bp-4Ch]@67
  int v48; // [sp+20h] [bp-48h]@50
  int v49; // [sp+24h] [bp-44h]@50
  int v50; // [sp+28h] [bp-40h]@17
  int v51; // [sp+2Ch] [bp-3Ch]@50
  int v52; // [sp+30h] [bp-38h]@14
  void *v53; // [sp+34h] [bp-34h]@11
  int v54; // [sp+38h] [bp-30h]@11
  int v55; // [sp+3Ch] [bp-2Ch]@9

  v4 = this;
  v5 = (PageContent *)a3;
  v6 = *((_BYTE *)this + 15);
  v7 = a2;
  v8 = v6 == 0;
  if ( v6 )
    v8 = *(_DWORD *)v4 == 0;
  if ( !v8 && !ItemInstance::isNull(v4) )
  {
    if ( *((_BYTE *)v4 + 14) )
    {
      if ( ItemInstance::getId(v4) == *(_WORD *)(Item::mWritable_book + 18) )
      {
        v9 = *(_DWORD *)ItemInstance::getUserData(v4);
        if ( v9 )
        {
          if ( (signed int)v7 < 50 )
          {
            sub_21E91E0((void **)&v55, dword_2809174, WrittenBookItem::TAG_PAGES);
            v10 = CompoundTag::contains(v9, (const void **)&v55, 9);
            v11 = (void *)(v55 - 12);
            if ( (int *)(v55 - 12) != &dword_28898C0 )
            {
              v21 = (unsigned int *)(v55 - 4);
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
                j_j_j_j__ZdlPv_9(v11);
            }
            if ( !v10 )
              sub_21E91E0((void **)&v54, dword_2809174, WrittenBookItem::TAG_PAGES);
              v12 = operator new(0x14u);
              ListTag::ListTag((int)v12);
              v53 = v12;
              CompoundTag::put(v9, (const void **)&v54, (int *)&v53);
              if ( v53 )
                (*(void (**)(void))(*(_DWORD *)v53 + 4))();
              v53 = 0;
              v13 = (void *)(v54 - 12);
              if ( (int *)(v54 - 12) != &dword_28898C0 )
                v25 = (unsigned int *)(v54 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v26 = __ldrex(v25);
                  while ( __strex(v26 - 1, v25) );
                }
                else
                  v26 = (*v25)--;
                if ( v26 <= 0 )
                  j_j_j_j__ZdlPv_9(v13);
            sub_21E91E0((void **)&v52, dword_2809174, WrittenBookItem::TAG_PAGES);
            v14 = (ListTag *)CompoundTag::get(v9, (const void **)&v52);
            v15 = (void *)(v52 - 12);
            if ( (int *)(v52 - 12) != &dword_28898C0 )
              v23 = (unsigned int *)(v52 - 4);
                  v24 = __ldrex(v23);
                while ( __strex(v24 - 1, v23) );
                v24 = (*v23)--;
              if ( v24 <= 0 )
                j_j_j_j__ZdlPv_9(v15);
            if ( ListTag::size(v14) < 50 )
              if ( ListTag::size(v14) <= (signed int)v7 )
                for ( i = ListTag::size(v14); i < (signed int)v7; v44 = 0 )
                  PageContent::createTag((PageContent *)&v44, (PageContent *)&PageContent::BLANK_PAGE);
                  v19 = v44;
                  v44 = 0;
                  v45 = v19;
                  ListTag::add((int)v14, &v45);
                  if ( v45 )
                    (*(void (**)(void))(*(_DWORD *)v45 + 4))();
                  v45 = 0;
                  if ( v44 )
                    (*(void (**)(void))(*(_DWORD *)v44 + 4))();
                  ++i;
                PageContent::createTag((PageContent *)&v42, v5);
                v20 = v42;
                v42 = 0;
                v43 = v20;
                ListTag::add((int)v14, &v43);
                if ( v43 )
                  (*(void (**)(void))(*(_DWORD *)v43 + 4))();
                v43 = 0;
                if ( v42 )
                  (*(void (**)(void))(*(_DWORD *)v42 + 4))();
                v16 = (const CompoundTag *)ListTag::get(v14, (int)v7);
                PageContent::read((PageContent *)&v50, v16);
                PageContent::write(v5, v16, v17);
                while ( 1 )
                  v7 = (const ItemInstance *)((char *)v7 + 1);
                  if ( (signed int)v7 >= ListTag::size(v14) )
                    break;
                  v27 = (const CompoundTag *)ListTag::get(v14, (int)v7);
                  PageContent::read((PageContent *)&v48, v27);
                  PageContent::write((PageContent *)&v50, v27, v28);
                  EntityInteraction::setInteractText(&v50, &v48);
                  EntityInteraction::setInteractText(&v51, &v49);
                  v29 = (void *)(v49 - 12);
                  if ( (int *)(v49 - 12) != &dword_28898C0 )
                  {
                    v33 = (unsigned int *)(v49 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v34 = __ldrex(v33);
                      while ( __strex(v34 - 1, v33) );
                    }
                    else
                      v34 = (*v33)--;
                    if ( v34 <= 0 )
                      j_j_j_j__ZdlPv_9(v29);
                  }
                  v30 = (void *)(v48 - 12);
                  if ( (int *)(v48 - 12) != &dword_28898C0 )
                    v31 = (unsigned int *)(v48 - 4);
                        v32 = __ldrex(v31);
                      while ( __strex(v32 - 1, v31) );
                      v32 = (*v31)--;
                    if ( v32 <= 0 )
                      j_j_j_j__ZdlPv_9(v30);
                PageContent::createTag((PageContent *)&v46, (PageContent *)&v50);
                v35 = v46;
                v46 = 0;
                v47 = v35;
                ListTag::add((int)v14, &v47);
                if ( v47 )
                  (*(void (**)(void))(*(_DWORD *)v47 + 4))();
                v47 = 0;
                if ( v46 )
                  (*(void (**)(void))(*(_DWORD *)v46 + 4))();
                v36 = (void *)(v51 - 12);
                if ( (int *)(v51 - 12) != &dword_28898C0 )
                  v38 = (unsigned int *)(v51 - 4);
                  if ( &pthread_create )
                    __dmb();
                    do
                      v39 = __ldrex(v38);
                    while ( __strex(v39 - 1, v38) );
                  else
                    v39 = (*v38)--;
                  if ( v39 <= 0 )
                    j_j_j_j__ZdlPv_9(v36);
                v37 = (void *)(v50 - 12);
                if ( (int *)(v50 - 12) != &dword_28898C0 )
                  v40 = (unsigned int *)(v50 - 4);
                      v41 = __ldrex(v40);
                    while ( __strex(v41 - 1, v40) );
                    v41 = (*v40)--;
                  if ( v41 <= 0 )
                    j_j_j_j__ZdlPv_9(v37);
          }
        }
      }
    }
  }
}


void __fastcall WritableBookItem::replacePage(WritableBookItem *this, const ItemInstance *a2, int a3, const PageContent *a4)
{
  WritableBookItem *v4; // r6@1
  PageContent *v5; // r11@1
  int v6; // r0@1
  const ItemInstance *v7; // r5@1
  bool v8; // zf@1
  int v9; // r6@7
  signed int v10; // r7@9
  void *v11; // r0@9
  void *v12; // r7@11
  void *v13; // r0@13
  ListTag *v14; // r8@14
  void *v15; // r0@14
  const PageContent *v16; // r1@16
  CompoundTag *v17; // r2@16
  signed int i; // r7@18
  int v19; // r0@19
  int v20; // r0@24
  unsigned int *v21; // r2@30
  signed int v22; // r1@32
  unsigned int *v23; // r2@34
  signed int v24; // r1@36
  unsigned int *v25; // r2@46
  signed int v26; // r1@48
  int v27; // [sp+0h] [bp-48h]@24
  int v28; // [sp+4h] [bp-44h]@24
  int v29; // [sp+8h] [bp-40h]@19
  int v30; // [sp+Ch] [bp-3Ch]@19
  int v31; // [sp+10h] [bp-38h]@14
  void *v32; // [sp+14h] [bp-34h]@11
  int v33; // [sp+18h] [bp-30h]@11
  int v34; // [sp+1Ch] [bp-2Ch]@9

  v4 = this;
  v5 = (PageContent *)a3;
  v6 = *((_BYTE *)this + 15);
  v7 = a2;
  v8 = v6 == 0;
  if ( v6 )
    v8 = *(_DWORD *)v4 == 0;
  if ( !v8 && !ItemInstance::isNull(v4) )
  {
    if ( *((_BYTE *)v4 + 14) )
    {
      if ( ItemInstance::getId(v4) == *(_WORD *)(Item::mWritable_book + 18) )
      {
        v9 = *(_DWORD *)ItemInstance::getUserData(v4);
        if ( v9 )
        {
          if ( (signed int)v7 < 50 )
          {
            sub_21E91E0((void **)&v34, dword_2809174, WrittenBookItem::TAG_PAGES);
            v10 = CompoundTag::contains(v9, (const void **)&v34, 9);
            v11 = (void *)(v34 - 12);
            if ( (int *)(v34 - 12) != &dword_28898C0 )
            {
              v21 = (unsigned int *)(v34 - 4);
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
                j_j_j_j__ZdlPv_9(v11);
            }
            if ( !v10 )
              sub_21E91E0((void **)&v33, dword_2809174, WrittenBookItem::TAG_PAGES);
              v12 = operator new(0x14u);
              ListTag::ListTag((int)v12);
              v32 = v12;
              CompoundTag::put(v9, (const void **)&v33, (int *)&v32);
              if ( v32 )
                (*(void (**)(void))(*(_DWORD *)v32 + 4))();
              v32 = 0;
              v13 = (void *)(v33 - 12);
              if ( (int *)(v33 - 12) != &dword_28898C0 )
                v25 = (unsigned int *)(v33 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v26 = __ldrex(v25);
                  while ( __strex(v26 - 1, v25) );
                }
                else
                  v26 = (*v25)--;
                if ( v26 <= 0 )
                  j_j_j_j__ZdlPv_9(v13);
            sub_21E91E0((void **)&v31, dword_2809174, WrittenBookItem::TAG_PAGES);
            v14 = (ListTag *)CompoundTag::get(v9, (const void **)&v31);
            v15 = (void *)(v31 - 12);
            if ( (int *)(v31 - 12) != &dword_28898C0 )
              v23 = (unsigned int *)(v31 - 4);
                  v24 = __ldrex(v23);
                while ( __strex(v24 - 1, v23) );
                v24 = (*v23)--;
              if ( v24 <= 0 )
                j_j_j_j__ZdlPv_9(v15);
            if ( ListTag::size(v14) <= (signed int)v7 )
              for ( i = ListTag::size(v14); i < (signed int)v7; v29 = 0 )
                PageContent::createTag((PageContent *)&v29, (PageContent *)&PageContent::BLANK_PAGE);
                v19 = v29;
                v29 = 0;
                v30 = v19;
                ListTag::add((int)v14, &v30);
                if ( v30 )
                  (*(void (**)(void))(*(_DWORD *)v30 + 4))();
                v30 = 0;
                if ( v29 )
                  (*(void (**)(void))(*(_DWORD *)v29 + 4))();
                ++i;
              PageContent::createTag((PageContent *)&v27, v5);
              v20 = v27;
              v27 = 0;
              v28 = v20;
              ListTag::add((int)v14, &v28);
              if ( v28 )
                (*(void (**)(void))(*(_DWORD *)v28 + 4))();
              v28 = 0;
              if ( v27 )
                (*(void (**)(void))(*(_DWORD *)v27 + 4))();
            else
              v16 = (const PageContent *)ListTag::get(v14, (int)v7);
              if ( v16 )
                PageContent::write(v5, v16, v17);
          }
        }
      }
    }
  }
}


void __fastcall WritableBookItem::replacePage(WritableBookItem *this, const ItemInstance *a2, int a3, const PageContent *a4)
{
  WritableBookItem::replacePage(this, a2, a3, a4);
}


signed int __fastcall WritableBookItem::makeSureTagIsValid(WritableBookItem *this, const CompoundTag *a2)
{
  WritableBookItem *v2; // r4@1
  signed int v3; // r5@1
  void *v4; // r0@1
  ListTag *v5; // r4@3
  void *v6; // r0@3
  int v7; // r5@6
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  int v10; // r0@17
  void *v11; // r0@17
  signed int v12; // r7@17
  unsigned int *v14; // r2@21
  signed int v15; // r1@23
  unsigned int *v16; // r2@29
  signed int v17; // r1@31
  int v18; // [sp+4h] [bp-34h]@9
  int v19; // [sp+8h] [bp-30h]@3
  int v20; // [sp+Ch] [bp-2Ch]@1

  v2 = this;
  sub_21E91E0((void **)&v20, dword_2809174, WrittenBookItem::TAG_PAGES);
  v3 = CompoundTag::contains((int)v2, (const void **)&v20, 8);
  v4 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  if ( !v3 )
    return 0;
  sub_21E91E0((void **)&v19, dword_2809174, WrittenBookItem::TAG_PAGES);
  v5 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v19);
  v6 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  if ( ListTag::size(v5) > 50 )
  if ( ListTag::size(v5) >= 1 )
    v7 = 0;
    while ( 1 )
      v10 = ListTag::get(v5, v7);
      (*(void (__fastcall **)(int *))(*(_DWORD *)v10 + 20))(&v18);
      v11 = (void *)(v18 - 12);
      v12 = *(_DWORD *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v18 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      }
      if ( v12 > 256 )
        break;
      if ( ++v7 >= ListTag::size(v5) )
        return 1;
  return 1;
}


int __fastcall WritableBookItem::WritableBookItem(int a1, const void **a2, __int16 a3)
{
  int result; // r0@1

  result = Item::Item(a1, a2, a3);
  *(_DWORD *)result = &off_270392C;
  *(_BYTE *)(result + 4) = 1;
  return result;
}


void __fastcall WritableBookItem::swapPages(WritableBookItem *this, const ItemInstance *a2, int a3, int a4)
{
  WritableBookItem *v4; // r6@1
  signed int v5; // r4@1
  int v6; // r0@1
  const ItemInstance *v7; // r5@1
  bool v8; // zf@1
  char *v9; // r0@7
  int v10; // r6@8
  bool v11; // zf@10
  bool v12; // nf@10
  unsigned __int8 v13; // vf@10
  signed int v14; // r8@13
  void *v15; // r0@13
  void *v16; // r7@15
  void *v17; // r0@17
  ListTag *v18; // r6@18
  void *v19; // r0@18
  const CompoundTag *v20; // r5@21
  const CompoundTag *v21; // r4@21
  CompoundTag *v22; // r2@21
  CompoundTag *v23; // r2@21
  void *v24; // r0@21
  void *v25; // r0@22
  void *v26; // r0@23
  void *v27; // r0@24
  unsigned int *v28; // r2@26
  signed int v29; // r1@28
  unsigned int *v30; // r2@30
  signed int v31; // r1@32
  unsigned int *v32; // r2@42
  signed int v33; // r1@44
  unsigned int *v34; // r2@50
  signed int v35; // r1@52
  unsigned int *v36; // r2@54
  signed int v37; // r1@56
  unsigned int *v38; // r2@58
  signed int v39; // r1@60
  unsigned int *v40; // r2@62
  signed int v41; // r1@64
  int v42; // [sp+4h] [bp-3Ch]@21
  int v43; // [sp+8h] [bp-38h]@21
  int v44; // [sp+Ch] [bp-34h]@21
  int v45; // [sp+10h] [bp-30h]@23
  int v46; // [sp+14h] [bp-2Ch]@18
  void *v47; // [sp+18h] [bp-28h]@15
  int v48; // [sp+1Ch] [bp-24h]@15
  int v49; // [sp+20h] [bp-20h]@13

  v4 = this;
  v5 = a3;
  v6 = *((_BYTE *)this + 15);
  v7 = a2;
  v8 = v6 == 0;
  if ( v6 )
    v8 = *(_DWORD *)v4 == 0;
  if ( !v8 && !ItemInstance::isNull(v4) )
  {
    if ( *((_BYTE *)v4 + 14) )
    {
      if ( ItemInstance::getId(v4) == *(_WORD *)(Item::mWritable_book + 18) )
      {
        v9 = ItemInstance::getUserData(v4);
        if ( (signed int)v7 >= 0 )
        {
          v10 = *(_DWORD *)v9;
          if ( *(_DWORD *)v9 )
          {
            if ( v5 < 50 )
            {
              v13 = 0;
              v11 = v5 == 0;
              v12 = v5 < 0;
              if ( v5 >= 0 )
              {
                v13 = __OFSUB__(50, v7);
                v11 = 50 == (_DWORD)v7;
                v12 = 50 - (signed int)v7 < 0;
              }
              if ( !((unsigned __int8)(v12 ^ v13) | v11) )
                sub_21E91E0((void **)&v49, dword_2809174, WrittenBookItem::TAG_PAGES);
                v14 = CompoundTag::contains(v10, (const void **)&v49, 9);
                v15 = (void *)(v49 - 12);
                if ( (int *)(v49 - 12) != &dword_28898C0 )
                {
                  v28 = (unsigned int *)(v49 - 4);
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
                    j_j_j_j__ZdlPv_9(v15);
                }
                if ( !v14 )
                  sub_21E91E0((void **)&v48, dword_2809174, WrittenBookItem::TAG_PAGES);
                  v16 = operator new(0x14u);
                  ListTag::ListTag((int)v16);
                  v47 = v16;
                  CompoundTag::put(v10, (const void **)&v48, (int *)&v47);
                  if ( v47 )
                    (*(void (**)(void))(*(_DWORD *)v47 + 4))();
                  v47 = 0;
                  v17 = (void *)(v48 - 12);
                  if ( (int *)(v48 - 12) != &dword_28898C0 )
                    v32 = (unsigned int *)(v48 - 4);
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
                      j_j_j_j__ZdlPv_9(v17);
                sub_21E91E0((void **)&v46, dword_2809174, WrittenBookItem::TAG_PAGES);
                v18 = (ListTag *)CompoundTag::get(v10, (const void **)&v46);
                v19 = (void *)(v46 - 12);
                if ( (int *)(v46 - 12) != &dword_28898C0 )
                  v30 = (unsigned int *)(v46 - 4);
                      v31 = __ldrex(v30);
                    while ( __strex(v31 - 1, v30) );
                    v31 = (*v30)--;
                  if ( v31 <= 0 )
                    j_j_j_j__ZdlPv_9(v19);
                if ( ListTag::size(v18) > (signed int)v7 && ListTag::size(v18) > v5 )
                  v20 = (const CompoundTag *)ListTag::get(v18, (int)v7);
                  v21 = (const CompoundTag *)ListTag::get(v18, v5);
                  PageContent::read((PageContent *)&v44, v20);
                  PageContent::read((PageContent *)&v42, v21);
                  PageContent::write((PageContent *)&v44, v21, v22);
                  PageContent::write((PageContent *)&v42, v20, v23);
                  v24 = (void *)(v43 - 12);
                  if ( (int *)(v43 - 12) != &dword_28898C0 )
                    v34 = (unsigned int *)(v43 - 4);
                        v35 = __ldrex(v34);
                      while ( __strex(v35 - 1, v34) );
                      v35 = (*v34)--;
                    if ( v35 <= 0 )
                      j_j_j_j__ZdlPv_9(v24);
                  v25 = (void *)(v42 - 12);
                  if ( (int *)(v42 - 12) != &dword_28898C0 )
                    v36 = (unsigned int *)(v42 - 4);
                        v37 = __ldrex(v36);
                      while ( __strex(v37 - 1, v36) );
                      v37 = (*v36)--;
                    if ( v37 <= 0 )
                      j_j_j_j__ZdlPv_9(v25);
                  v26 = (void *)(v45 - 12);
                  if ( (int *)(v45 - 12) != &dword_28898C0 )
                    v38 = (unsigned int *)(v45 - 4);
                        v39 = __ldrex(v38);
                      while ( __strex(v39 - 1, v38) );
                      v39 = (*v38)--;
                    if ( v39 <= 0 )
                      j_j_j_j__ZdlPv_9(v26);
                  v27 = (void *)(v44 - 12);
                  if ( (int *)(v44 - 12) != &dword_28898C0 )
                    v40 = (unsigned int *)(v44 - 4);
                        v41 = __ldrex(v40);
                      while ( __strex(v41 - 1, v40) );
                      v41 = (*v40)--;
                    if ( v41 <= 0 )
                      j_j_j_j__ZdlPv_9(v27);
            }
          }
        }
      }
    }
  }
}


void __fastcall WritableBookItem::deletePage(WritableBookItem *this, const ItemInstance *a2, int a3)
{
  WritableBookItem::deletePage(this, a2, a3);
}


void __fastcall WritableBookItem::~WritableBookItem(WritableBookItem *this)
{
  WritableBookItem::~WritableBookItem(this);
}


void __fastcall WritableBookItem::~WritableBookItem(WritableBookItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


ItemInstance *__fastcall WritableBookItem::use(WritableBookItem *this, ItemInstance *a2, Player *a3)
{
  Entity *v3; // r8@1
  ItemInstance *v4; // r4@1
  void *v5; // r5@2
  Level *v6; // r0@5
  PlayerInventoryProxy *v7; // r6@6
  signed int i; // r7@6
  ItemInstance *v9; // r0@9
  int v10; // r5@11
  signed int v11; // r6@11
  void *v12; // r0@11
  int v13; // r5@13
  int v14; // r0@13
  void *v15; // r0@13
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  unsigned int *v19; // r2@29
  signed int v20; // r1@31
  int v21; // [sp+0h] [bp-88h]@13
  int v22; // [sp+4h] [bp-84h]@13
  int v23; // [sp+Ch] [bp-7Ch]@13
  int v24; // [sp+10h] [bp-78h]@11
  void *v25; // [sp+14h] [bp-74h]@2
  char v26; // [sp+18h] [bp-70h]@1
  int v27; // [sp+20h] [bp-68h]@18
  void *v28; // [sp+3Ch] [bp-4Ch]@16
  void *ptr; // [sp+4Ch] [bp-3Ch]@14

  v3 = a3;
  v4 = a2;
  ItemInstance::ItemInstance((ItemInstance *)&v26, (int)a2);
  if ( !ItemInstance::hasUserData(v4) )
  {
    v5 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v5);
    v25 = v5;
    ItemInstance::setUserData((int)v4, (int *)&v25);
    if ( v25 )
      (*(void (**)(void))(*(_DWORD *)v25 + 4))();
    v25 = 0;
  }
  v6 = (Level *)Entity::getLevel(v3);
  if ( Level::isClientSide(v6) )
    v7 = (PlayerInventoryProxy *)Player::getSupplies(v3);
    for ( i = PlayerInventoryProxy::getLinkedSlotsCount(v7); i < PlayerInventoryProxy::getContainerSize((int)v7, 0); ++i )
    {
      v9 = (ItemInstance *)PlayerInventoryProxy::getItem((int)v7, i, 0);
      if ( ItemInstance::operator==(v9, (ItemInstance *)&v26) == 1 )
      {
        (*(void (__fastcall **)(Entity *, signed int, signed int))(*(_DWORD *)v3 + 1328))(v3, i, 1);
        break;
      }
    }
  else
    v10 = *(_DWORD *)ItemInstance::getUserData(v4);
    sub_21E91E0((void **)&v24, unk_280919C, WrittenBookItem::TAG_ID);
    v11 = CompoundTag::contains(v10, (const void **)&v24);
    v12 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    if ( !v11 )
      v13 = *(_DWORD *)ItemInstance::getUserData(v4);
      sub_21E91E0((void **)&v23, unk_280919C, WrittenBookItem::TAG_ID);
      v14 = Entity::getLevel(v3);
      Level::getNewUniqueID((Level *)&v21, v14);
      CompoundTag::putInt64(v13, (const void **)&v23, v21, v22);
      v15 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v23 - 4);
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
          j_j_j_j__ZdlPv_9(v15);
  if ( ptr )
    operator delete(ptr);
  if ( v28 )
    operator delete(v28);
  if ( v27 )
    (*(void (**)(void))(*(_DWORD *)v27 + 4))();
  return v4;
}


void __fastcall WritableBookItem::deletePage(WritableBookItem *this, const ItemInstance *a2, int a3)
{
  WritableBookItem *v3; // r8@1
  const ItemInstance *v4; // r6@1
  unsigned int v5; // r5@1
  bool v6; // zf@1
  int v7; // r10@7
  int v8; // r6@9
  void *v9; // r11@9
  __int64 v10; // r0@9
  int v11; // r6@10
  int v12; // r9@10
  int v13; // r0@12
  void *v14; // r0@20
  signed int v15; // r9@21
  signed int v16; // r10@21
  int v17; // r5@23
  int v18; // r7@23
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  unsigned int *v21; // r2@29
  signed int v22; // r1@31
  int v23; // r1@41
  void *v24; // r0@41
  int *v25; // r0@42
  int v26; // r1@48
  void *v27; // r0@48
  int *v28; // r0@49
  unsigned int *v29; // r2@51
  signed int v30; // r1@53
  unsigned int *v31; // r2@55
  signed int v32; // r1@57
  unsigned int *v33; // r2@67
  signed int v34; // r1@69
  void *v35; // [sp+0h] [bp-48h]@18
  int v36; // [sp+4h] [bp-44h]@18
  int v37; // [sp+8h] [bp-40h]@12
  int v38; // [sp+Ch] [bp-3Ch]@12
  int v39; // [sp+10h] [bp-38h]@7
  int v40; // [sp+14h] [bp-34h]@8

  v3 = this;
  v4 = a2;
  v5 = a3;
  *(_DWORD *)this = &unk_28898CC;
  *((_DWORD *)this + 1) = &unk_28898CC;
  v6 = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    v6 = *(_DWORD *)a2 == 0;
  if ( !v6
    && !ItemInstance::isNull(a2)
    && *((_BYTE *)v4 + 14)
    && ItemInstance::getId(v4) == *(_WORD *)(Item::mWritable_book + 18) )
  {
    v7 = *(_DWORD *)ItemInstance::getUserData(v4);
    WrittenBookItem::getPages((WrittenBookItem *)&v39, v4);
    if ( v7 && (v40 - v39) >> 3 > v5 )
    {
      v8 = v39 + 8 * v5;
      EntityInteraction::setInteractText((int *)v3, (int *)(v39 + 8 * v5));
      EntityInteraction::setInteractText((int *)v3 + 1, (int *)(v8 + 4));
      v9 = operator new(0x14u);
      ListTag::ListTag((int)v9);
      v10 = *(_QWORD *)&v39;
      if ( v40 - v39 >= 1 )
      {
        v11 = 0;
        v12 = 0;
        do
        {
          if ( v5 != v12 )
          {
            PageContent::createTag((PageContent *)&v37, (PageContent *)(v10 + v11));
            v13 = v37;
            v37 = 0;
            v38 = v13;
            ListTag::add((int)v9, &v38);
            if ( v38 )
              (*(void (**)(void))(*(_DWORD *)v38 + 4))();
            v38 = 0;
            if ( v37 )
              (*(void (**)(void))(*(_DWORD *)v37 + 4))();
            v10 = *(_QWORD *)&v39;
          }
          ++v12;
          v11 += 8;
        }
        while ( v12 < (HIDWORD(v10) - (signed int)v10) >> 3 );
      }
      sub_21E91E0((void **)&v36, dword_2809174, WrittenBookItem::TAG_PAGES);
      v35 = v9;
      CompoundTag::put(v7, (const void **)&v36, (int *)&v35);
      if ( v35 )
        (*(void (**)(void))(*(_DWORD *)v35 + 4))();
      v35 = 0;
      v14 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v36 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
        else
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v15 = 0;
      v16 = 1;
    }
    else
      v15 = 1;
      v16 = 0;
    v18 = v40;
    v17 = v39;
    if ( v39 != v40 )
      do
        v23 = *(_DWORD *)(v17 + 4);
        v24 = (void *)(v23 - 12);
        if ( (int *)(v23 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v23 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          else
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        v25 = (int *)(*(_DWORD *)v17 - 12);
        if ( v25 != &dword_28898C0 )
          v21 = (unsigned int *)(*(_DWORD *)v17 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        v17 += 8;
      while ( v17 != v18 );
      v17 = v39;
    if ( v17 )
      operator delete((void *)v17);
    if ( !(v16 | v15) )
      v26 = *((_DWORD *)v3 + 1);
      v27 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v26 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      v28 = (int *)(*(_DWORD *)v3 - 12);
      if ( v28 != &dword_28898C0 )
        v31 = (unsigned int *)(*(_DWORD *)v3 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
  }
}


void __fastcall WritableBookItem::swapPages(WritableBookItem *this, const ItemInstance *a2, int a3, int a4)
{
  WritableBookItem::swapPages(this, a2, a3, a4);
}


ItemInstance *__fastcall WritableBookItem::signBook(ItemInstance *a1, int a2, int *a3, int *a4)
{
  int v4; // r5@1
  ItemInstance *v5; // r4@1
  int *v6; // r7@1
  int *v7; // r6@1
  bool v8; // zf@1
  int v9; // r8@7
  void *v10; // r0@8
  void *v11; // r0@9
  void *v12; // r0@10
  ItemInstance *result; // r0@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  int v20; // [sp+8h] [bp-28h]@10
  int v21; // [sp+Ch] [bp-24h]@9
  int v22; // [sp+10h] [bp-20h]@8

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = *(_BYTE *)(a2 + 15) == 0;
  if ( *(_BYTE *)(a2 + 15) )
    v8 = *(_DWORD *)a2 == 0;
  if ( v8
    || ItemInstance::isNull((ItemInstance *)a2)
    || !*(_BYTE *)(v4 + 14)
    || ItemInstance::getId((ItemInstance *)v4) != *(_WORD *)(Item::mWritable_book + 18)
    || (v9 = *(_DWORD *)ItemInstance::getUserData((ItemInstance *)v4)) == 0 )
  {
    result = (ItemInstance *)ItemInstance::ItemInstance((int)v5);
  }
  else
    sub_21E91E0((void **)&v22, *(unsigned int *)algn_280916C, WrittenBookItem::TAG_AUTHOR);
    CompoundTag::putString(v9, (const void **)&v22, v6);
    v10 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    }
    sub_21E91E0((void **)&v21, unk_2809164, WrittenBookItem::TAG_TITLE);
    CompoundTag::putString(v9, (const void **)&v21, v7);
    v11 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v21 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    sub_21E91E0((void **)&v20, unk_2809184, WrittenBookItem::TAG_GENERATION);
    CompoundTag::putInt(v9, (const void **)&v20, 0);
    v12 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v20 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    result = ItemInstance::ItemInstance(v5, Item::mWritten_book, 1, 0, v9);
  return result;
}


void __fastcall WritableBookItem::addPageAt(WritableBookItem *this, const ItemInstance *a2, int a3, const PageContent *a4)
{
  WritableBookItem::addPageAt(this, a2, a3, a4);
}
