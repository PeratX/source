

int __fastcall ItemInstance::load(ItemInstance *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r7@1
  __int64 v3; // r10@1
  void *v4; // r0@1
  void *v5; // r0@2
  char v6; // r0@3
  double v7; // r0@5
  unsigned int v8; // r0@5
  int v9; // r4@7
  int *v10; // r8@7
  int *v11; // r2@8
  void *v12; // r0@8
  unsigned int v13; // r5@10
  unsigned int v14; // r11@10
  int v15; // r6@10
  int v16; // r0@10
  int v17; // r9@11
  int v18; // r7@11
  bool v19; // zf@12
  int v20; // r4@17
  bool v21; // zf@20
  _DWORD *v22; // r9@24
  int v23; // r0@24
  double v24; // r0@24
  unsigned int v25; // r6@25
  int *v26; // r8@27
  int v27; // r4@28
  int v28; // r1@28
  int v29; // r10@32
  int v30; // r7@32
  _DWORD *v31; // r0@33
  _DWORD *v32; // r0@39
  int v33; // r0@41
  unsigned int v34; // r6@49
  int v35; // r0@49
  int v36; // r5@50
  int v37; // r7@50
  int v38; // r4@54
  int v39; // r0@59
  int v40; // r2@59
  char v41; // r2@62
  _WORD *v42; // r0@65
  int v43; // r0@67
  __int16 v44; // r3@70
  void *v45; // r0@72
  int v46; // r0@74
  int v47; // r1@74
  int v48; // r0@74
  void *v49; // r0@77
  unsigned int *v50; // r2@78
  signed int v51; // r1@80
  int v52; // r0@82
  void *v53; // r0@86
  int result; // r0@87
  int v55; // r0@91
  unsigned int *v56; // r2@94
  signed int v57; // r1@96
  unsigned int *v58; // r2@98
  signed int v59; // r1@100
  unsigned int *v60; // r2@102
  signed int v61; // r1@104
  unsigned int *v62; // r2@106
  signed int v63; // r1@108
  __int64 v64; // [sp+Ch] [bp-9Ch]@7
  const CompoundTag *v65; // [sp+14h] [bp-94h]@8
  const CompoundTag *v66; // [sp+14h] [bp-94h]@50
  int v67; // [sp+1Ch] [bp-8Ch]@1
  int *v68; // [sp+20h] [bp-88h]@10
  int v69; // [sp+28h] [bp-80h]@74
  int v70; // [sp+30h] [bp-78h]@73
  int v71; // [sp+34h] [bp-74h]@74
  int v72; // [sp+3Ch] [bp-6Ch]@72
  int v73; // [sp+44h] [bp-64h]@1
  int v74; // [sp+4Ch] [bp-5Ch]@1
  int v75; // [sp+50h] [bp-58h]@5
  int v76; // [sp+54h] [bp-54h]@5
  int v77; // [sp+58h] [bp-50h]@5
  int v78; // [sp+5Ch] [bp-4Ch]@5
  int v79; // [sp+60h] [bp-48h]@5
  int v80; // [sp+64h] [bp-44h]@5
  int v81; // [sp+68h] [bp-40h]@5
  int v82; // [sp+6Ch] [bp-3Ch]@5
  int v83; // [sp+70h] [bp-38h]@5
  int v84; // [sp+74h] [bp-34h]@5
  char v85; // [sp+78h] [bp-30h]@24
  unsigned int v86; // [sp+7Ch] [bp-2Ch]@25

  v2 = a2;
  LODWORD(v3) = this;
  sub_21E94B4((void **)&v74, "id");
  HIDWORD(v3) = CompoundTag::getShort((int)v2, (const void **)&v74);
  sub_21E94B4((void **)&v73, "Damage");
  v67 = CompoundTag::getShort((int)v2, (const void **)&v73);
  v4 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
  {
    v56 = (unsigned int *)(v73 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
    }
    else
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v74 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = byte_28079B8;
  __dmb();
  if ( !(v6 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_28079B8) )
    HIDWORD(v7) = 65885;
    v75 = 65885;
    v76 = 460;
    v77 = 131421;
    v78 = 461;
    v79 = 196957;
    v80 = 462;
    v81 = 65886;
    v82 = 463;
    v83 = 65858;
    v84 = 466;
    dword_28079C4 = 0;
    dword_28079C8 = 0;
    dword_28079CC = 1065353216;
    LODWORD(v7) = &dword_28079CC;
    dword_28079D0 = 0;
    v8 = sub_21E6254(v7);
    dword_28079C0 = v8;
    if ( v8 == 1 )
      HIDWORD(v64) = HIDWORD(v3);
      dword_28079D4 = 0;
      v10 = &dword_28079D4;
      if ( v8 >= 0x40000000 )
        sub_21E57F4();
      v9 = 4 * v8;
      v10 = (int *)operator new(4 * v8);
      _aeabi_memclr4(v10, v9);
    v11 = &v75;
    v65 = v2;
    v12 = &unk_2807960;
    LODWORD(v64) = v3;
    for ( dword_28079BC = (int)v10; ; v10 = (int *)dword_28079BC )
      v13 = *((_DWORD *)v12 + 24);
      v68 = v11;
      v14 = (*(_WORD *)v11 ^ (unsigned int)(2 * *((_WORD *)v11 + 1))) >> 1;
      v15 = v14 % v13;
      v16 = v10[v14 % v13];
      if ( !v16 )
        goto LABEL_24;
      v17 = *(_DWORD *)v16;
      v18 = *(_DWORD *)(*(_DWORD *)v16 + 12);
      while ( 1 )
      {
        v19 = v18 == v14;
        if ( v18 == v14 )
          v19 = *(_WORD *)(v17 + 4) == *(_WORD *)v11;
        if ( v19 && *(_WORD *)(v17 + 6) == *((_WORD *)v11 + 1) )
          break;
        v20 = *(_DWORD *)v17;
        if ( *(_DWORD *)v17 )
        {
          v18 = *(_DWORD *)(v20 + 12);
          v16 = v17;
          v17 = *(_DWORD *)v17;
          if ( *(_DWORD *)(v20 + 12) % v13 == v15 )
            continue;
        }
      }
      v21 = v16 == 0;
      if ( v16 )
        v21 = *(_DWORD *)v16 == 0;
      if ( v21 )
LABEL_24:
        v22 = operator new(0x10u);
        *v22 = 0;
        v23 = *v68;
        v22[2] = v68[1];
        v22[1] = v23;
        HIDWORD(v24) = &dword_28079CC;
        LODWORD(v24) = &v85;
        sub_21E62E8(v24, dword_28079C0, dword_28079C8, 1);
        if ( v85 )
          v25 = v86;
          if ( v86 == 1 )
          {
            dword_28079D4 = 0;
            v26 = &dword_28079D4;
          }
          else
            if ( v86 >= 0x40000000 )
              sub_21E57F4();
            v26 = (int *)operator new(4 * v86);
            _aeabi_memclr4(v26, 4 * v25);
          v27 = dword_28079C4;
          v28 = 0;
          dword_28079C4 = 0;
          while ( v27 )
            v29 = v28;
            v30 = v27;
            while ( 1 )
            {
              v27 = *(_DWORD *)v30;
              v28 = *(_DWORD *)(v30 + 12) % v25;
              v31 = (_DWORD *)v26[v28];
              if ( !v31 )
                break;
              *(_DWORD *)v30 = *v31;
              *(_DWORD *)v26[v28] = v30;
              v30 = v27;
              if ( !v27 )
                goto LABEL_35;
            }
            *(_DWORD *)v30 = dword_28079C4;
            dword_28079C4 = v30;
            v26[v28] = (int)&dword_28079C4;
            if ( *(_DWORD *)v30 )
              v26[v29] = v30;
LABEL_35:
          if ( (int *)dword_28079BC != &dword_28079D4 )
            operator delete((void *)dword_28079BC);
          dword_28079BC = (int)v26;
          dword_28079C0 = v25;
          v15 = v14 % v25;
        else
          v26 = (int *)dword_28079BC;
        v22[3] = v14;
        v32 = (_DWORD *)v26[v15];
        if ( v32 )
          *v22 = *v32;
          *(_DWORD *)v26[v15] = v22;
          v33 = dword_28079C4;
          *v22 = dword_28079C4;
          dword_28079C4 = (int)v22;
          if ( v33 )
            v26[*(_DWORD *)(v33 + 12) % (unsigned int)dword_28079C0] = (int)v22;
            v26 = (int *)dword_28079BC;
          v26[v15] = (int)&dword_28079C4;
        ++dword_28079C8;
      v11 = v68 + 2;
      if ( (char *)(v68 + 2) == &v85 )
        break;
      v12 = &unk_2807960;
    _cxa_atexit(sub_18244CA);
    j___cxa_guard_release((unsigned int *)&byte_28079B8);
    v2 = v65;
    v3 = v64;
  v34 = ((HIDWORD(v3) ^ (unsigned int)(2 * v67)) >> 1) % dword_28079C0;
  v35 = *(_DWORD *)(dword_28079BC + 4 * v34);
  if ( v35 )
    v36 = *(_DWORD *)v35;
    v66 = v2;
    v37 = *(_DWORD *)(*(_DWORD *)v35 + 12);
    while ( v37 != (HIDWORD(v3) ^ (unsigned int)(2 * v67)) >> 1
         || *(_WORD *)(v36 + 4) != HIDWORD(v3)
         || *(_WORD *)(v36 + 6) != (unsigned __int16)v67 )
      v38 = *(_DWORD *)v36;
      if ( !*(_DWORD *)v36 )
        v2 = v66;
        goto LABEL_58;
      v37 = *(_DWORD *)(v38 + 12);
      v35 = v36;
      v36 = *(_DWORD *)v36;
      if ( *(_DWORD *)(v38 + 12) % (unsigned int)dword_28079C0 != v34 )
    if ( v35 )
      v55 = *(_DWORD *)v35;
      v2 = v66;
      if ( v55 )
        HIDWORD(v3) = *(_DWORD *)(v55 + 8);
        v67 = HIDWORD(v3) >> 16;
LABEL_58:
  if ( HIDWORD(v3) >= 0x200 )
    *(_DWORD *)v3 = 0;
    *(_BYTE *)(v3 + 15) = 0;
    goto LABEL_65;
  v39 = HIDWORD(v3);
  v40 = Item::mItems[HIDWORD(v3)];
  *(_DWORD *)v3 = v40;
  if ( !v40 )
    v41 = 0;
    if ( !HIDWORD(v3) )
      v41 = 1;
    *(_BYTE *)(v3 + 15) = v41;
      goto LABEL_66;
LABEL_65:
    *(_DWORD *)(v3 + 4) = 0;
    *(_BYTE *)(v3 + 14) = 0;
    *(_WORD *)(v3 + 12) = 0;
    v42 = (_WORD *)(v3 + 12);
    goto LABEL_70;
  v39 = *(_BYTE *)(v40 + 44);
  *(_BYTE *)(v3 + 15) = 1;
LABEL_66:
  if ( (unsigned int)(v39 - 1) > 0xFE )
    v43 = 0;
  else
    v43 = Block::mBlocks[v39];
  *(_DWORD *)(v3 + 4) = v43;
  v42 = (_WORD *)(v3 + 12);
LABEL_70:
  v44 = v67;
  if ( (signed __int16)v67 <= 0 )
    v44 = 0;
  *v42 = v44;
  sub_21E94B4((void **)&v72, "Count");
  *(_BYTE *)(v3 + 14) = CompoundTag::getByte((int)v2, (const void **)&v72);
  v45 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v72 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  sub_21E94B4((void **)&v70, "tag");
  if ( CompoundTag::contains((int)v2, (const void **)&v70, 10) == 1 )
    sub_21E94B4((void **)&v69, "tag");
    v46 = CompoundTag::getCompound((int)v2, (const void **)&v69);
    CompoundTag::clone((CompoundTag *)&v71, v46);
    v47 = v71;
    v71 = 0;
    v48 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = v47;
    if ( v48 )
      (*(void (**)(void))(*(_DWORD *)v48 + 4))();
      if ( v71 )
        (*(void (**)(void))(*(_DWORD *)v71 + 4))();
    v49 = (void *)(v69 - 12);
    if ( (int *)(v69 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v69 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
      else
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j__ZdlPv_9(v49);
    v52 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = 0;
    if ( v52 )
      (*(void (**)(void))(*(_DWORD *)v52 + 4))();
  v53 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v70 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  ItemInstance::_loadComponents((ItemInstance *)v3, v2);
  result = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 )
    result = (*(int (**)(void))(*(_DWORD *)result + 232))();
  return result;
}


void __fastcall ItemInstance::getName(ItemInstance *this, int a2)
{
  int v2; // r5@1
  ItemInstance *v3; // r4@1
  int v4; // r0@1
  int v5; // r0@3

  v2 = a2;
  v3 = this;
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4
    && CompoundTag::contains(v4, (const void **)&ItemInstance::TAG_DISPLAY) == 1
    && (v5 = CompoundTag::getCompound(*(_DWORD *)(v2 + 8), (const void **)&ItemInstance::TAG_DISPLAY)) != 0
    && CompoundTag::contains(v5, (const void **)&ItemInstance::TAG_DISPLAY_NAME) == 1 )
  {
    ItemInstance::getCustomName(v3, v2);
  }
  else if ( *(_DWORD *)v2 )
    Item::buildDescriptionName(v3, *(const ItemInstance **)v2);
  else
    sub_21E94B4((void **)v3, (const char *)&unk_257BC67);
}


void **__fastcall ItemInstance::getEffectName(ItemInstance *this, int *a2)
{
  int v2; // r1@1
  void **result; // r0@2

  v2 = *a2;
  if ( v2 )
    result = (void **)(*(int (__fastcall **)(ItemInstance *))(*(_DWORD *)v2 + 196))(this);
  else
    result = sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  return result;
}


    if ( v8 || ItemInstance::isNull(v7) || !*(_BYTE *)(v4 + 30) )
{
      v9 = *(_BYTE *)(v4 + 103) == 0;
      if ( *(_BYTE *)(v4 + 103) )
      {
        v3 = (ItemInstance *)(v4 + 88);
        v9 = *(_DWORD *)(v4 + 88) == 0;
      }
      if ( !v9 && !ItemInstance::isNull(v3) && *(_BYTE *)(v4 + 102) )
        (*(void (__fastcall **)(int, ItemInstance *, int))(*(_DWORD *)v5 + 664))(v5, v3, *(_DWORD *)(v4 + 8) & 1);
        return 1;
    }
    v6 = *(_DWORD *)(v4 + 12);
  }
  if ( v6 != 1 )
    return 0;
  v10 = (ItemInstance *)*(_BYTE *)(v4 + 31);
  v11 = v10 == 0;
  if ( *(_BYTE *)(v4 + 31) )
  {
    v10 = (ItemInstance *)(v4 + 16);
    v11 = *(_DWORD *)(v4 + 16) == 0;
  if ( v11 || ItemInstance::isNull(v10) || !*(_BYTE *)(v4 + 30) )
  v12 = (ItemInstance *)*(_BYTE *)(v4 + 103);
  v13 = v12 == 0;
  if ( *(_BYTE *)(v4 + 103) )
    v12 = (ItemInstance *)(v4 + 88);
    v13 = *(_DWORD *)(v4 + 88) == 0;
  if ( !v13 && !ItemInstance::isNull(v12) && *(_BYTE *)(v4 + 102) )
  return 1;
}


signed int __fastcall ItemInstance::isWearableItem(ItemInstance *this)
{
  ItemInstance *v1; // r4@1
  int v2; // r0@1
  signed int result; // r0@4

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 92))() || *((_DWORD *)v1 + 1) == Block::mPumpkin )
  {
    result = 1;
  }
  else
    result = 0;
    if ( *(_DWORD *)v1 == Item::mSkull )
      result = 1;
  return result;
}


ItemInstance *__fastcall ItemInstance::~ItemInstance(ItemInstance *this)
{
  ItemInstance *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 13);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 9);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 2);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  return v1;
}


signed int __fastcall ItemInstance::getIsValidPickupTime(ItemInstance *this)
{
  ItemInstance *v1; // r4@1
  int v2; // r6@1
  signed int v3; // r4@1
  signed __int64 v4; // r2@1
  bool v5; // cf@1
  __int64 v6; // r0@1
  __int64 v8; // [sp+0h] [bp-18h]@1

  v1 = this;
  sub_21E0378(&v8);
  v2 = (int)v1 + 16;
  v3 = 0;
  v6 = (v8 - *(_QWORD *)v2) / 1000000;
  v4 = *(_QWORD *)(v2 + 8) + 5000LL;
  v5 = (unsigned int)v4 >= (unsigned int)v6;
  LODWORD(v6) = 0;
  if ( v5 )
    LODWORD(v6) = 1;
  if ( SHIDWORD(v4) >= SHIDWORD(v6) )
    v3 = 1;
  if ( HIDWORD(v4) == HIDWORD(v6) )
    v3 = v6;
  return v3;
}


int __fastcall ItemInstance::isThrowable(ItemInstance *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *(_DWORD *)this;
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 104))();
  else
    result = 0;
  return result;
}


int __fastcall ItemInstance::refreshedInContainer(ItemInstance *this, Level *a2)
{
  int result; // r0@1

  result = *(_DWORD *)this;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 220))();
  return result;
}


  if ( ItemInstance::isNull((ItemInstance *)v5) || !*(_BYTE *)(v5 + 14) )
{
    ItemInstance::ItemInstance(v3, v4);
  }
  else if ( ItemInstance::isNull((ItemInstance *)v4) || !*(_BYTE *)(v4 + 14) )
  {
    ItemInstance::ItemInstance((int)v3);
    ItemInstance::operator=((int)v3, v5);
  else
    if ( ItemInstance::isNull((ItemInstance *)v4) )
      v7 = 0;
    else
      v7 = *(_BYTE *)(v4 + 14);
    ContainerItemStack::decreaseCount((ContainerItemStack *)&v9, v7);
    ItemInstance::ItemInstance(v3, (int)&v9);
  if ( ptr )
    operator delete(ptr);
  if ( v11 )
    operator delete(v11);
  result = v10;
  if ( v10 )
    result = (*(int (**)(void))(*(_DWORD *)v10 + 4))();
  return result;
}


int *__fastcall ItemInstance::setNull(ItemInstance *this)
{
  ItemInstance *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 6) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v2 = *((_DWORD *)this + 2);
  *((_DWORD *)v1 + 2) = 0;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 10) = *((_DWORD *)v1 + 9);
  *((_DWORD *)v1 + 14) = *((_DWORD *)v1 + 13);
  return j_j_j__ZN12ItemInstance20_updateCompareHashesEv(v1);
}


  if ( v6 || ItemInstance::isNull(v4) || !*((_BYTE *)v4 + 14) )
{
  else
    result = j_j_j__ZNK12ItemInstance17getIdAuxEnchantedEv(v4);
  return result;
}


int *__fastcall ItemInstance::getCategoryName(ItemInstance *this, int *a2)
{
  int v2; // r1@1
  int *result; // r0@2

  v2 = *a2;
  if ( v2 )
    result = (int *)(*(int (__fastcall **)(ItemInstance *))(*(_DWORD *)v2 + 200))(this);
  else
    result = sub_21E8AF4((int *)this, (int *)&Util::EMPTY_STRING);
  return result;
}


ItemInstance *__fastcall ItemInstance::ItemInstance(ItemInstance *this, int a2)
{
  ItemInstance *v2; // r4@1

  v2 = this;
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 15) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 200;
  *((_BYTE *)this + 32) = 1;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  ItemInstance::init(this, *(_WORD *)(a2 + 18), 1, 0);
  return v2;
}


int __fastcall ItemInstance::setShowPickUp(int result, bool a2)
{
  *(_BYTE *)(result + 32) = a2;
  return result;
}


_BOOL4 __fastcall ItemInstance::hasUserData(ItemInstance *this)
{
  return *((_DWORD *)this + 2) != 0;
}


  if ( v5 || ItemInstance::isNull((ItemInstance *)&v14) || !v16 )
{
    sub_119C884(v2, (const char *)&unk_257BC67);
  }
  else
  {
    v6 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v3 + 424));
    v7 = *(_BYTE *)(v3 + 516);
    (*(void (__fastcall **)(void **))(*(_DWORD *)v6 + 12))(v2);
  if ( v19 )
    operator delete(v19);
  if ( v18 )
    operator delete(v18);
  result = v15;
  if ( v15 )
    result = (*(int (**)(void))(*(_DWORD *)v15 + 4))();
  return result;
}


int __fastcall ItemInstance::getEnchantValue(ItemInstance *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *(_DWORD *)this;
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 136))();
  else
    result = 0;
  return result;
}


signed int __fastcall ItemInstance::updateComponent(ItemInstance *a1, const void **a2, int a3)
{
  ItemInstance *v3; // r9@1
  const void *v4; // r6@1
  int v5; // r8@1
  const void *v6; // r4@1
  size_t v7; // r7@1
  int v8; // r5@1
  int v9; // r0@6
  signed int v10; // r1@6
  int v11; // r6@10
  Json::Value *v12; // r8@12
  void **v13; // r7@15
  int *v14; // r5@15
  unsigned int v15; // r10@15
  __int64 v16; // r0@16
  void *v17; // r9@18
  char *v18; // r8@18
  signed int v19; // r1@18
  unsigned int v20; // r2@18
  unsigned int v21; // r1@20
  unsigned int v22; // r4@20
  int *v23; // r7@27
  unsigned int *v24; // r2@34
  signed int v25; // r1@36
  unsigned int *v26; // r2@38
  signed int v27; // r1@40
  void *v28; // r4@50
  int v29; // r11@50
  void *v30; // r0@50
  void *v31; // r0@51
  ItemInstance *v33; // [sp+Ch] [bp-4Ch]@14
  Json::Value *v34; // [sp+10h] [bp-48h]@12
  int v35; // [sp+1Ch] [bp-3Ch]@15
  int v36; // [sp+20h] [bp-38h]@15

  v3 = a1;
  v4 = *a2;
  v5 = a3;
  v6 = (const void *)ItemInstance::TAG_CAN_PLACE_ON;
  v7 = *((_DWORD *)*a2 - 3);
  v8 = *(_DWORD *)(ItemInstance::TAG_CAN_PLACE_ON - 12);
  if ( v7 == v8 && !memcmp(*a2, (const void *)ItemInstance::TAG_CAN_PLACE_ON, v7) )
    goto LABEL_59;
  if ( v7 != *(_DWORD *)(ItemInstance::TAG_CAN_DESTROY - 12)
    || memcmp(v4, (const void *)ItemInstance::TAG_CAN_DESTROY, v7) )
  {
    return 0;
  }
  if ( v7 == v8 )
LABEL_59:
    v9 = memcmp(v4, v6, v7);
    v10 = 0;
    if ( !v9 )
      v10 = 1;
  else
  v11 = (int)v3 + 52;
  if ( v10 )
    v11 = (int)v3 + 36;
  *(_DWORD *)(v11 + 4) = *(_DWORD *)v11;
  v12 = (Json::Value *)Json::Value::operator[](v5, "blocks");
  v34 = v12;
  if ( Json::Value::isArray(v12) != 1 || !Json::Value::size(v12) )
  v33 = v3;
  if ( Json::Value::size(v12) )
    v13 = (void **)&v35;
    v14 = &v36;
    v15 = 0;
    while ( 1 )
    {
      v28 = Json::Value::operator[]((int)v12, v15);
      sub_21E94B4(v13, (const char *)&unk_257BC67);
      Json::Value::asString(v14, (int)v28, (int *)v13);
      v29 = Block::lookupByName((unsigned int *)v14, 1);
      v30 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
      {
        v24 = (unsigned int *)(v36 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
        }
        else
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      }
      v31 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v35 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      if ( !v29 )
        break;
      v16 = *(_QWORD *)(v11 + 4);
      if ( (_DWORD)v16 == HIDWORD(v16) )
        v17 = *(void **)v11;
        v18 = 0;
        v19 = v16 - *(_DWORD *)v11;
        v20 = v19 >> 2;
        if ( !(v19 >> 2) )
          v20 = 1;
        v21 = v20 + (v19 >> 2);
        v22 = v21;
        if ( 0 != v21 >> 30 )
          v22 = 0x3FFFFFFF;
        if ( v21 < v20 )
        if ( v22 )
          if ( v22 >= 0x40000000 )
            sub_21E57F4();
          v18 = (char *)operator new(4 * v22);
          LODWORD(v16) = *(_QWORD *)v11 >> 32;
          v17 = (void *)*(_QWORD *)v11;
        v23 = (int *)&v18[v16 - (_DWORD)v17];
        *v23 = v29;
        if ( ((signed int)v16 - (signed int)v17) >> 2 )
          _aeabi_memmove4(v18, v17);
        v14 = &v36;
        if ( v17 )
          operator delete(v17);
        *(_DWORD *)v11 = v18;
        *(_DWORD *)(v11 + 4) = v23 + 1;
        *(_DWORD *)(v11 + 8) = &v18[4 * v22];
        v12 = v34;
        v13 = (void **)&v35;
      else
        *(_DWORD *)v16 = v29;
        *(_DWORD *)(v11 + 4) += 4;
      if ( ++v15 >= Json::Value::size(v12) )
        goto LABEL_55;
    }
    *(_DWORD *)(v11 + 4) = *(_DWORD *)v11;
LABEL_55:
  ItemInstance::_updateCompareHashes(v33);
  return 1;
}


const void **__fastcall ItemInstance::_getHoverFormattingPrefix(ItemInstance *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1
  int v5; // r0@3
  int v6; // r0@7
  bool v7; // zf@7
  const void **result; // r0@11

  v2 = a2;
  v3 = (int *)this;
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4
    && CompoundTag::contains(v4, (const void **)&ItemInstance::TAG_DISPLAY) == 1
    && (v5 = CompoundTag::getCompound(*(_DWORD *)(v2 + 8), (const void **)&ItemInstance::TAG_DISPLAY)) != 0
    && CompoundTag::contains(v5, (const void **)&ItemInstance::TAG_DISPLAY_NAME) == 1 )
  {
    sub_21E8AF4(v3, (int *)&unk_28079B0);
  }
  else
    sub_21E94B4((void **)v3, (const char *)&unk_257BC67);
  v6 = *(_BYTE *)(v2 + 15);
  v7 = v6 == 0;
  if ( *(_BYTE *)(v2 + 15) )
    v6 = *(_DWORD *)v2;
    v7 = *(_DWORD *)v2 == 0;
  if ( v7 || *(_WORD *)(v6 + 18) != *(_WORD *)(Item::mEnchanted_book + 18) )
    goto LABEL_19;
  result = *(const void ***)(v2 + 8);
  if ( !result )
    return result;
  if ( CompoundTag::contains((int)result, (const void **)&ItemInstance::TAG_ENCHANTS, 9) != 1 )
LABEL_19:
    result = *(const void ***)(v2 + 8);
    if ( result )
    {
      result = (const void **)CompoundTag::contains((int)result, (const void **)&ItemInstance::TAG_ENCHANTS, 9);
      if ( result == (const void **)1 )
        result = sub_21E72F0((const void **)v3, (const void **)&unk_2807994);
    }
    result = sub_21E72F0((const void **)v3, (const void **)&unk_28079A0);
  return result;
}


signed int __fastcall ItemInstance::isValidComponent(const void **a1)
{
  const void *v1; // r4@1
  size_t v2; // r5@1
  signed int v3; // r6@3
  signed int result; // r0@6

  v1 = *a1;
  v2 = *((_DWORD *)*a1 - 3);
  if ( v2 == *(_DWORD *)(ItemInstance::TAG_CAN_PLACE_ON - 12)
    && !memcmp(v1, (const void *)ItemInstance::TAG_CAN_PLACE_ON, v2) )
  {
    result = 1;
  }
  else
    v3 = 0;
    if ( v2 == *(_DWORD *)(ItemInstance::TAG_CAN_DESTROY - 12)
      && !memcmp(v1, (const void *)ItemInstance::TAG_CAN_DESTROY, v2) )
    {
      v3 = 1;
    }
    result = v3;
  return result;
}


const void **__fastcall ItemInstance::getFormattedHovertext(ItemInstance *this, Level *a2, bool a3)
{
  Level *v3; // r4@1
  bool v4; // zf@1
  int v5; // r0@5
  int v6; // r0@6
  ListTag *v7; // r0@7
  ListTag *v8; // r6@7
  int i; // r7@9
  const void **v10; // r0@12
  const void **v11; // r0@12
  const void **v12; // r0@12
  char *v13; // r0@12
  char *v14; // r0@13
  void *v15; // r0@14
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  __int64 v22; // kr00_8@40
  unsigned int v23; // r1@40
  const void **v24; // r0@42
  char *v25; // r0@44
  void *v26; // r0@45
  void *v27; // r0@46
  void *v28; // r0@47
  int j; // r5@48
  int v30; // r7@48
  unsigned int *v31; // r2@50
  signed int v32; // r1@52
  unsigned int *v33; // r2@54
  signed int v34; // r1@56
  const void **v35; // r0@66
  char *v36; // r0@66
  void *v37; // r0@67
  __int64 v38; // kr10_8@70
  unsigned int v39; // r1@70
  const void **v40; // r0@72
  char *v41; // r0@74
  void *v42; // r0@75
  void *v43; // r0@76
  void *v44; // r0@77
  int k; // r7@78
  int v46; // r9@78
  unsigned int *v47; // r2@80
  signed int v48; // r1@82
  unsigned int *v49; // r2@84
  signed int v50; // r1@86
  const void **v51; // r0@96
  char *v52; // r0@96
  void *v53; // r0@97
  unsigned int *v55; // r2@100
  signed int v56; // r1@102
  unsigned int *v57; // r2@104
  signed int v58; // r1@106
  unsigned int *v59; // r2@108
  signed int v60; // r1@110
  unsigned int *v61; // r2@112
  signed int v62; // r1@114
  unsigned int *v63; // r2@116
  signed int v64; // r1@118
  unsigned int *v65; // r2@120
  signed int v66; // r1@122
  unsigned int *v67; // r2@124
  signed int v68; // r1@126
  unsigned int *v69; // r2@128
  signed int v70; // r1@130
  const void **v71; // [sp+10h] [bp-70h]@1
  int v72; // [sp+14h] [bp-6Ch]@84
  char *v73; // [sp+18h] [bp-68h]@80
  int v74; // [sp+20h] [bp-60h]@70
  int v75; // [sp+24h] [bp-5Ch]@70
  unsigned int v76; // [sp+28h] [bp-58h]@70
  char *v77; // [sp+2Ch] [bp-54h]@74
  int v78; // [sp+30h] [bp-50h]@54
  char *v79; // [sp+34h] [bp-4Ch]@50
  int v80; // [sp+3Ch] [bp-44h]@40
  int v81; // [sp+40h] [bp-40h]@40
  unsigned int v82; // [sp+44h] [bp-3Ch]@40
  char *v83; // [sp+48h] [bp-38h]@44
  int v84; // [sp+4Ch] [bp-34h]@12
  char *v85; // [sp+50h] [bp-30h]@12
  char *v86; // [sp+54h] [bp-2Ch]@12

  v3 = a2;
  v71 = (const void **)this;
  *(_DWORD *)this = &unk_28898CC;
  v4 = *(_DWORD *)a2 == 0;
  if ( *(_DWORD *)a2 )
    v4 = *((_BYTE *)a2 + 15) == 0;
  if ( !v4 )
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)a2 + 124))(*(_DWORD *)a2);
  v5 = *((_DWORD *)v3 + 2);
  if ( v5 )
  {
    v6 = CompoundTag::getCompound(v5, (const void **)&ItemInstance::TAG_DISPLAY);
    if ( v6 )
    {
      v7 = (ListTag *)CompoundTag::getList(v6, (const void **)&ItemInstance::TAG_LORE);
      v8 = v7;
      if ( v7 )
      {
        if ( ListTag::size(v7) )
        {
          for ( i = 0; i < ListTag::size(v8); ++i )
          {
            sub_21E8AF4(&v84, &Util::NEW_LINE);
            sub_21E72F0((const void **)&v84, (const void **)&unk_280797C);
            v10 = sub_21E72F0((const void **)&v84, (const void **)&unk_28079B0);
            v85 = (char *)*v10;
            *v10 = &unk_28898CC;
            v11 = ListTag::getString(v8, i);
            v12 = sub_21E72F0((const void **)&v85, v11);
            v86 = (char *)*v12;
            *v12 = &unk_28898CC;
            sub_21E72F0(v71, (const void **)&v86);
            v13 = v86 - 12;
            if ( (int *)(v86 - 12) != &dword_28898C0 )
            {
              v18 = (unsigned int *)(v86 - 4);
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
                j_j_j_j__ZdlPv_9(v13);
            }
            v14 = v85 - 12;
            if ( (int *)(v85 - 12) != &dword_28898C0 )
              v20 = (unsigned int *)(v85 - 4);
                  v21 = __ldrex(v20);
                while ( __strex(v21 - 1, v20) );
                v21 = (*v20)--;
              if ( v21 <= 0 )
                j_j_j_j__ZdlPv_9(v14);
            v15 = (void *)(v84 - 12);
            if ( (int *)(v84 - 12) != &dword_28898C0 )
              v16 = (unsigned int *)(v84 - 4);
                  v17 = __ldrex(v16);
                while ( __strex(v17 - 1, v16) );
                v17 = (*v16)--;
              if ( v17 <= 0 )
                j_j_j_j__ZdlPv_9(v15);
          }
        }
      }
    }
  }
  if ( *(_QWORD *)((char *)v3 + 52) >> 32 != (unsigned int)*(_QWORD *)((char *)v3 + 52) )
    sub_21E72F0(v71, (const void **)&Util::NEW_LINE);
    sub_21E8AF4((int *)&v82, &Util::NEW_LINE);
    sub_21E72F0((const void **)&v82, (const void **)&unk_2807984);
    sub_21E94B4((void **)&v80, "item.canBreak");
    I18n::get(&v81, (int **)&v80);
    v22 = *(_QWORD *)(v82 - 12);
    v23 = *(_DWORD *)(v81 - 12) + v22;
    if ( v23 > HIDWORD(v22) && v23 <= *(_DWORD *)(v81 - 8) )
      v24 = sub_21E82D8((const void **)&v81, 0, v82, (_BYTE *)v22);
    else
      v24 = sub_21E72F0((const void **)&v82, (const void **)&v81);
    v83 = (char *)*v24;
    *v24 = &unk_28898CC;
    sub_21E72F0(v71, (const void **)&v83);
    v25 = v83 - 12;
    if ( (int *)(v83 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v83 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
      else
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = (void *)(v81 - 12);
    if ( (int *)(v81 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v81 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v27 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v80 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v28 = (void *)(v82 - 12);
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v82 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    v30 = *(_QWORD *)((char *)v3 + 52) >> 32;
    for ( j = *(_QWORD *)((char *)v3 + 52); j != v30; j += 4 )
      sub_21E8AF4(&v78, &Util::NEW_LINE);
      sub_21E72F0((const void **)&v78, (const void **)&unk_2807988);
      v35 = sub_21E72F0((const void **)&v78, (const void **)(*(_DWORD *)j + 12));
      v79 = (char *)*v35;
      *v35 = &unk_28898CC;
      sub_21E72F0(v71, (const void **)&v79);
      v36 = v79 - 12;
      if ( (int *)(v79 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v79 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
        else
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j__ZdlPv_9(v36);
      v37 = (void *)(v78 - 12);
      if ( (int *)(v78 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v78 - 4);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v37);
  sub_21E72F0(v71, (const void **)&unk_28079B4);
  if ( *(_QWORD *)((char *)v3 + 36) >> 32 != (unsigned int)*(_QWORD *)((char *)v3 + 36) )
    sub_21E8AF4((int *)&v76, &Util::NEW_LINE);
    sub_21E72F0((const void **)&v76, (const void **)&unk_2807984);
    sub_21E94B4((void **)&v74, "item.canPlace");
    I18n::get(&v75, (int **)&v74);
    v38 = *(_QWORD *)(v76 - 12);
    v39 = *(_DWORD *)(v75 - 12) + v38;
    if ( v39 > HIDWORD(v38) && v39 <= *(_DWORD *)(v75 - 8) )
      v40 = sub_21E82D8((const void **)&v75, 0, v76, (_BYTE *)v38);
      v40 = sub_21E72F0((const void **)&v76, (const void **)&v75);
    v77 = (char *)*v40;
    *v40 = &unk_28898CC;
    sub_21E72F0(v71, (const void **)&v77);
    v41 = v77 - 12;
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v77 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j__ZdlPv_9(v41);
    v42 = (void *)(v75 - 12);
    if ( (int *)(v75 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v75 - 4);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j__ZdlPv_9(v42);
    v43 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v67 = (unsigned int *)(v74 - 4);
          v68 = __ldrex(v67);
        while ( __strex(v68 - 1, v67) );
        v68 = (*v67)--;
      if ( v68 <= 0 )
        j_j_j_j__ZdlPv_9(v43);
    v44 = (void *)(v76 - 12);
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v69 = (unsigned int *)(v76 - 4);
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
        v70 = (*v69)--;
      if ( v70 <= 0 )
        j_j_j_j__ZdlPv_9(v44);
    v46 = *(_QWORD *)((char *)v3 + 36) >> 32;
    for ( k = *(_QWORD *)((char *)v3 + 36); k != v46; k += 4 )
      sub_21E8AF4(&v72, &Util::NEW_LINE);
      sub_21E72F0((const void **)&v72, (const void **)&unk_2807988);
      v51 = sub_21E72F0((const void **)&v72, (const void **)(*(_DWORD *)k + 12));
      v73 = (char *)*v51;
      *v51 = &unk_28898CC;
      sub_21E72F0(v71, (const void **)&v73);
      v52 = v73 - 12;
      if ( (int *)(v73 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v73 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v52);
      v53 = (void *)(v72 - 12);
      if ( (int *)(v72 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v72 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
  return sub_21E72F0(v71, (const void **)&unk_28079B4);
}


void __fastcall ItemInstance::setJustBrewed(ItemInstance *this, int a2)
{
  ItemInstance::setJustBrewed(this, a2);
}


int __fastcall ItemInstance::useTimeDepleted(ItemInstance *this, Level *a2, Player *a3)
{
  int result; // r0@1

  result = *(_DWORD *)this;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 172))();
  return result;
}


unsigned int __fastcall ItemInstance::retrieveEnchantFromIDAux(ItemInstance *this, int a2)
{
  return ((unsigned __int16)this & 0x8000u) >> 15;
}


signed int __fastcall ItemInstance::hasCompoundTextUserData(ItemInstance *this)
{
  int v1; // r4@1
  signed int v2; // r5@2
  void *v3; // r0@2
  signed int result; // r0@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  int v7; // [sp+4h] [bp-1Ch]@2

  v1 = *((_DWORD *)this + 2);
  if ( !v1 )
    goto LABEL_16;
  sub_21E94B4((void **)&v7, "Text");
  v2 = CompoundTag::contains(v1, (const void **)&v7);
  v3 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  if ( v2 )
    result = 1;
  else
LABEL_16:
    result = 0;
  return result;
}


  if ( v6 || ItemInstance::isNull(v4) || !*((_BYTE *)v4 + 14) )
{
    result = -1;
  }
  else
  {
    ItemInstance::getColor((ItemInstance *)&v8, (int *)v4);
    result = Color::toARGB((Color *)&v8);
  return result;
}


    if ( ItemInstance::getId(a5) == *(_WORD *)(Item::mBucket + 18)
{
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


  if ( ItemInstance::isDamageableItem((ItemInstance *)&v9) == 1 )
{
  else
    v2 = 0;
  if ( v12 )
    operator delete(v12);
  if ( v11 )
    operator delete(v11);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  return v2;
}


int __fastcall ItemInstance::mineBlock(int *a1, char *a2, int a3)
{
  int *v3; // lr@1
  int result; // r0@1
  int (__cdecl *v5)(int, int *, char *, int); // r5@2
  char v6; // [sp+Ch] [bp-14h]@2

  v3 = a1;
  result = *a1;
  if ( result )
  {
    v5 = *(int (__cdecl **)(int, int *, char *, int))(*(_DWORD *)result + 188);
    v6 = *a2;
    result = v5(result, v3, &v6, a3);
  }
  return result;
}


    || ItemInstance::hasSameUserData(this, a2)
{
    || *((_DWORD *)v3 + 12) != *((_DWORD *)v2 + 12) )
  {
    result = 1;
  }
  else
    result = 0;
    if ( *((_BYTE *)v3 + 14) != *((_BYTE *)v2 + 14) )
      result = 1;
  return result;
}


signed int __fastcall ItemInstance::addComponents(ItemInstance *a1, Json::Value *a2, void **a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, char a23, char a24)
{
  return ItemInstance::addComponents(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24);
}


int __fastcall ItemInstance::isArmorItem(ItemInstance *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *(_DWORD *)this;
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 92))();
  else
    result = 0;
  return result;
}


int *__fastcall ItemInstance::init(ItemInstance *this, int a2, int a3, int a4)
{
  ItemInstance *v4; // r4@1
  int v5; // r0@6
  int v6; // r0@7
  int v7; // r0@8
  bool v8; // zf@10
  char v9; // r1@10
  int *result; // r0@16
  int v11; // r0@17
  int v12; // [sp+0h] [bp-10h]@16

  v4 = this;
  if ( a3 < 0 )
    LOBYTE(a3) = 0;
  *((_BYTE *)this + 14) = a3;
  if ( (signed __int16)a4 <= 0 )
    LOWORD(a4) = 0;
  *((_WORD *)this + 6) = a4;
  if ( (unsigned int)a2 >= 0x200 )
  {
    *(_DWORD *)this = 0;
    *((_BYTE *)this + 15) = 0;
    goto LABEL_13;
  }
  v5 = Item::mItems[a2];
  *(_DWORD *)v4 = v5;
  if ( !v5 )
    v8 = a2 == 0;
    v9 = 0;
    if ( v8 )
      v9 = 1;
    v7 = 0;
    *((_BYTE *)v4 + 15) = v9;
      goto LABEL_15;
LABEL_13:
    *(_DWORD *)v4 = 0;
    *((_DWORD *)v4 + 1) = 0;
    *((_BYTE *)v4 + 14) = 0;
    *((_WORD *)v4 + 6) = 0;
    goto LABEL_16;
  v6 = *(_BYTE *)(v5 + 44);
  *((_BYTE *)v4 + 15) = 1;
  if ( (unsigned int)(v6 - 1) > 0xFE )
  else
    v7 = Block::mBlocks[v6];
LABEL_15:
  *((_DWORD *)v4 + 1) = v7;
LABEL_16:
  sub_21E0378(&v12);
  *((_QWORD *)v4 + 2) = *(_QWORD *)&v12;
  result = (int *)*((_BYTE *)v4 + 14);
  if ( !*((_BYTE *)v4 + 14) )
    v11 = *((_DWORD *)v4 + 2);
    *((_DWORD *)v4 + 2) = 0;
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    *((_DWORD *)v4 + 10) = *((_DWORD *)v4 + 9);
    *((_DWORD *)v4 + 14) = *((_DWORD *)v4 + 13);
    result = ItemInstance::_updateCompareHashes(v4);
  return result;
}


signed int __fastcall ItemInstance::addComponents(ItemInstance *a1, Json::Value *a2, void **a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, char a23, char a24)
{
  Json::Value *v24; // r5@1
  void **v25; // r9@1
  ItemInstance *v26; // r4@1
  Json::ValueIteratorBase *v27; // r6@5
  void **v28; // r11@5
  Json::ValueIteratorBase *v29; // r4@5
  const char *v30; // r8@5
  int *v31; // r7@5
  signed int result; // r0@6
  unsigned int *v33; // r2@9
  signed int v34; // r1@11
  unsigned int *v35; // r2@13
  signed int v36; // r1@15
  signed int v37; // r1@25
  unsigned int *v38; // r2@29
  signed int v39; // r1@31
  unsigned int *v40; // r2@37
  signed int v41; // r1@39
  unsigned int *v42; // r2@45
  signed int v43; // r1@47
  int v44; // r0@53
  int v45; // r1@53
  Json::Value *v46; // r6@53
  void *v47; // r0@53
  void **v48; // r0@56
  void **v49; // r0@56
  void *v50; // r0@56
  const void **v51; // r0@59
  char *v52; // r0@59
  char *v53; // r0@60
  unsigned int *v54; // r2@61
  signed int v55; // r1@63
  void *v56; // r11@65
  const void *v57; // r7@65
  size_t v58; // r8@65
  int v59; // r4@65
  const void **v60; // r0@69
  char *v61; // r0@69
  unsigned int *v62; // r2@75
  signed int v63; // r1@77
  unsigned int *v64; // r2@79
  signed int v65; // r1@81
  const void **v66; // r0@87
  char *v67; // r0@87
  signed int v68; // r7@94
  unsigned int *v69; // r2@99
  const void **v70; // r0@107
  char *v71; // r0@107
  char *v72; // r0@117
  void *v73; // r0@118
  ItemInstance *v74; // [sp+1Ch] [bp-8Ch]@5
  char *v75; // [sp+24h] [bp-84h]@87
  char *v76; // [sp+28h] [bp-80h]@37
  char *v77; // [sp+2Ch] [bp-7Ch]@107
  char *v78; // [sp+30h] [bp-78h]@45
  char *v79; // [sp+34h] [bp-74h]@69
  char *v80; // [sp+38h] [bp-70h]@29
  char *v81; // [sp+3Ch] [bp-6Ch]@59
  char *v82; // [sp+40h] [bp-68h]@59
  int v83; // [sp+48h] [bp-60h]@56
  void *s1; // [sp+4Ch] [bp-5Ch]@9
  int v85; // [sp+54h] [bp-54h]@5
  char v86; // [sp+58h] [bp-50h]@5
  int v87; // [sp+6Ch] [bp-3Ch]@5
  char v88; // [sp+70h] [bp-38h]@4
  char v89; // [sp+78h] [bp-30h]@4
  int v90; // [sp+A4h] [bp-4h]@9

  v24 = a2;
  v25 = a3;
  v26 = a1;
  sub_21E8190(a3, (char *)&unk_257BC67, 0);
  if ( Json::Value::isObject(v24) != 1 || Json::Value::isNull(v24) || !Json::Value::size(v24) )
  {
    sub_21E8190(v25, "No data was provided.", (_BYTE *)0x15);
    result = 0;
  }
  else
    Json::Value::begin((Json::Value *)&v89, (int)v24);
    Json::Value::end((Json::Value *)&v88, (int)v24);
    if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v89, (const Json::ValueIteratorBase *)&v88) )
    {
      v27 = (Json::ValueIteratorBase *)&v89;
      v28 = (void **)&v85;
      v74 = v26;
      v29 = (Json::ValueIteratorBase *)&v86;
      v30 = (const char *)&unk_257BC67;
      v31 = &v87;
      while ( 1 )
      {
        v44 = Json::ValueIteratorBase::deref(v27);
        v45 = (int)v27;
        v46 = (Json::Value *)v44;
        Json::ValueIteratorBase::key(v29, v45);
        sub_21E94B4(v28, v30);
        Json::Value::asString(v31, (int)v29, (int *)v28);
        v47 = (void *)(v85 - 12);
        if ( (int *)(v85 - 12) != &dword_28898C0 )
        {
          v62 = (unsigned int *)(v85 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
          }
          else
            v63 = (*v62)--;
          if ( v63 <= 0 )
            j_j_j_j__ZdlPv_9(v47);
        }
        Json::Value::~Value(v29);
        if ( sub_21E76A0(v31, ":", 0, 1u) == -1 )
          v48 = sub_21E94B4((void **)&v83, "minecraft:");
          v49 = (void **)sub_21E72F0((const void **)v48, (const void **)v31);
          s1 = *v49;
          *v49 = &unk_28898CC;
          v50 = (void *)(v83 - 12);
          if ( (int *)(v83 - 12) != &dword_28898C0 )
            v69 = (unsigned int *)(v83 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v37 = __ldrex(v69);
              while ( __strex(v37 - 1, v69) );
            }
            else
              v37 = (*v69)--;
            if ( v37 <= 0 )
              j_j_j_j__ZdlPv_9(v50);
        else
          sub_21E8AF4((int *)&s1, v31);
        if ( Json::Value::isObject(v46) != 1 || Json::Value::isNull(v46) == 1 )
          break;
        v56 = s1;
        v57 = (const void *)ItemInstance::TAG_CAN_PLACE_ON;
        v58 = *((_DWORD *)s1 - 3);
        v59 = *(_DWORD *)(ItemInstance::TAG_CAN_PLACE_ON - 12);
        if ( v58 != v59 || memcmp(s1, (const void *)ItemInstance::TAG_CAN_PLACE_ON, *((_DWORD *)s1 - 3)) )
          if ( v58 != *(_DWORD *)(ItemInstance::TAG_CAN_DESTROY - 12)
            || memcmp(v56, (const void *)ItemInstance::TAG_CAN_DESTROY, v58) )
            v79 = (char *)&unk_28898CC;
            sub_21E6FCC((const void **)&v79, *(_DWORD *)(v87 - 12) + 11);
            v29 = (Json::ValueIteratorBase *)&v86;
            v28 = (void **)&v85;
            v30 = (const char *)&unk_257BC67;
            sub_21E7408((const void **)&v79, "Component '", 0xBu);
            sub_21E72F0((const void **)&v79, (const void **)&v87);
            v60 = sub_21E7408((const void **)&v79, "' is not a supported component.", 0x1Fu);
            v80 = (char *)*v60;
            *v60 = &unk_28898CC;
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              (int *)v25,
              (int *)&v80);
            v27 = (Json::ValueIteratorBase *)&v89;
            v61 = v80 - 12;
            if ( (int *)(v80 - 12) != &dword_28898C0 )
              v38 = (unsigned int *)(v80 - 4);
              if ( v90 )
              {
                __dmb();
                do
                  v39 = __ldrex(v38);
                while ( __strex(v39 - 1, v38) );
              }
              else
                v39 = (*v38)--;
              if ( v39 <= 0 )
                j_j_j_j__ZdlPv_9(v61);
            v53 = v79 - 12;
            if ( (int *)(v79 - 12) != &dword_28898C0 )
              v54 = (unsigned int *)(v79 - 4);
              if ( &pthread_create )
                  v55 = __ldrex(v54);
                while ( __strex(v55 - 1, v54) );
                goto LABEL_114;
LABEL_113:
              v55 = (*v54)--;
LABEL_114:
              if ( v55 <= 0 )
                j_j_j_j__ZdlPv_9(v53);
LABEL_116:
            v68 = 1;
            goto LABEL_117;
          if ( v58 != v59 )
            goto LABEL_126;
        if ( memcmp(v56, v57, v58) )
LABEL_126:
            v75 = (char *)&unk_28898CC;
            sub_21E6FCC((const void **)&v75, *(_DWORD *)(v87 - 12) + 11);
            sub_21E7408((const void **)&v75, "Component '", 0xBu);
            sub_21E72F0((const void **)&v75, (const void **)&v87);
            v66 = sub_21E7408((const void **)&v75, "' could not be created.", 0x17u);
            v76 = (char *)*v66;
            *v66 = &unk_28898CC;
              (int *)&v76);
            v67 = v76 - 12;
            if ( (int *)(v76 - 12) != &dword_28898C0 )
              v40 = (unsigned int *)(v76 - 4);
                  v41 = __ldrex(v40);
                while ( __strex(v41 - 1, v40) );
                v41 = (*v40)--;
              if ( v41 <= 0 )
                j_j_j_j__ZdlPv_9(v67);
            v53 = v75 - 12;
            if ( (int *)(v75 - 12) != &dword_28898C0 )
              v54 = (unsigned int *)(v75 - 4);
              goto LABEL_113;
            goto LABEL_116;
        v29 = (Json::ValueIteratorBase *)&v86;
        v28 = (void **)&v85;
        v30 = (const char *)&unk_257BC67;
        if ( !ItemInstance::updateComponent(v74, (const void **)&s1, (int)v46) )
          v77 = (char *)&unk_28898CC;
          sub_21E6FCC((const void **)&v77, *(_DWORD *)(v87 - 12) + 11);
          sub_21E7408((const void **)&v77, "Component '", 0xBu);
          sub_21E72F0((const void **)&v77, (const void **)&v87);
          v70 = sub_21E7408((const void **)&v77, "' could not be updated.", 0x17u);
          v78 = (char *)*v70;
          *v70 = &unk_28898CC;
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v25,
            (int *)&v78);
          v27 = (Json::ValueIteratorBase *)&v89;
          v71 = v78 - 12;
          if ( (int *)(v78 - 12) != &dword_28898C0 )
            v42 = (unsigned int *)(v78 - 4);
            if ( v90 )
                v43 = __ldrex(v42);
              while ( __strex(v43 - 1, v42) );
              v43 = (*v42)--;
            if ( v43 <= 0 )
              j_j_j_j__ZdlPv_9(v71);
          v53 = v77 - 12;
          if ( (int *)(v77 - 12) != &dword_28898C0 )
            v54 = (unsigned int *)(v77 - 4);
                v55 = __ldrex(v54);
              while ( __strex(v55 - 1, v54) );
              goto LABEL_114;
            goto LABEL_113;
          goto LABEL_116;
        v68 = 0;
        v27 = (Json::ValueIteratorBase *)&v89;
LABEL_117:
        v72 = (char *)s1 - 12;
        if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
          v33 = (unsigned int *)((char *)s1 - 4);
          if ( v90 )
              v34 = __ldrex(v33);
            while ( __strex(v34 - 1, v33) );
            v34 = (*v33)--;
          if ( v34 <= 0 )
            j_j_j_j__ZdlPv_9(v72);
        v73 = (void *)(v87 - 12);
        if ( (int *)(v87 - 12) != &dword_28898C0 )
          v35 = (unsigned int *)(v87 - 4);
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
            v36 = (*v35)--;
          if ( v36 <= 0 )
            j_j_j_j__ZdlPv_9(v73);
        if ( v68 )
          goto LABEL_122;
        Json::ValueIteratorBase::increment(v27);
        Json::Value::end((Json::Value *)&a24, (int)v24);
        v31 = (int *)&a23;
        if ( Json::ValueIteratorBase::isEqual(v27, (const Json::ValueIteratorBase *)&a24) )
          goto LABEL_121;
      }
      v81 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v81, *(_DWORD *)(v87 - 12) + 11);
      sub_21E7408((const void **)&v81, "Component '", 0xBu);
      sub_21E72F0((const void **)&v81, (const void **)&v87);
      v51 = sub_21E7408((const void **)&v81, "' was not an object.", 0x14u);
      v82 = (char *)*v51;
      *v51 = &unk_28898CC;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v25,
        (int *)&v82);
      v52 = v82 - 12;
      if ( (int *)(v82 - 12) != &dword_28898C0 )
        v64 = (unsigned int *)(v82 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
          v65 = (*v64)--;
        if ( v65 <= 0 )
          j_j_j_j__ZdlPv_9(v52);
      v53 = v81 - 12;
      if ( (int *)(v81 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v81 - 4);
        if ( !&pthread_create )
          goto LABEL_113;
        __dmb();
        do
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        goto LABEL_114;
      goto LABEL_116;
    }
LABEL_121:
    v68 = 2;
LABEL_122:
    if ( v68 == 2 )
      result = 1;
  return result;
}


signed int __fastcall ItemInstance::canPlaceOn(ItemInstance *this, const Block *a2)
{
  const Block **v2; // r0@1
  const Block **v3; // r2@1
  __int64 v4; // kr00_8@1
  signed int result; // r0@2
  const Block *v6; // t1@6

  v4 = *(_QWORD *)((char *)this + 36);
  v2 = (const Block **)(*(_QWORD *)((char *)this + 36) >> 32);
  v3 = (const Block **)v4;
  if ( (const Block **)v4 == v2 )
  {
    result = 0;
  }
  else
    while ( 1 )
    {
      v6 = *v3;
      ++v3;
      if ( v6 == a2 )
        break;
      if ( v2 == v3 )
        return 0;
    }
    result = 1;
  return result;
}


void __fastcall ItemInstance::hurtAndBreak(ItemInstance *this, int a2, Entity *a3)
{
  Entity *v3; // r4@1
  __int16 v4; // r8@1
  ItemInstance *v5; // r5@1
  int v6; // r7@3
  int v7; // r0@7
  unsigned int *v8; // r2@7
  signed int v9; // r1@7
  int v10; // r7@10
  _BOOL4 v11; // r7@11
  void *v12; // r0@11
  int v13; // r6@13
  signed int v14; // r7@13
  Random *v15; // r0@13
  __int16 v16; // r2@15
  int v17; // r0@15
  int v18; // r6@17
  unsigned int v19; // r1@20
  unsigned __int8 v20; // r6@20
  unsigned int v21; // r0@21
  unsigned int v22; // r1@21
  bool v23; // zf@25
  int v24; // r0@29
  int v25; // r0@33
  signed int v26; // r1@37
  int v27; // [sp+14h] [bp-24h]@11

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( a3 )
  {
    if ( Entity::hasCategory((int)a3, 1) == 1 )
      v6 = Abilities::getBool((int)v3 + 4320, (int **)&Abilities::INSTABUILD);
    else
      v6 = 0;
  }
  else
    v6 = 0;
  if ( *(_DWORD *)v5 )
    v7 = (*(int (**)(void))(**(_DWORD **)v5 + 80))();
    v9 = 0;
    if ( v7 < 1 )
      v9 = 1;
    if ( !(v6 | v9) )
    {
      v10 = *((_DWORD *)v5 + 2);
      if ( !v10 )
        goto LABEL_45;
      sub_21E94B4((void **)&v27, "Unbreakable");
      v11 = CompoundTag::getBoolean(v10, (const void **)&v27);
      v8 = (unsigned int *)&dword_28898C0;
      v12 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v27 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v26 = __ldrex(v8);
          while ( __strex(v26 - 1, v8) );
        }
        else
          v26 = (*v8)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      }
      if ( !v11 )
LABEL_45:
        v13 = EnchantUtils::getEnchantLevel((EnchantUtils *)0x11, (int)v5, (const ItemInstance *)v8);
        v14 = (*(int (**)(void))(**(_DWORD **)v5 + 148))();
        v15 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
        if ( v13 < 1 || (signed int)(Random::_genRandInt32(v15) % 0x64) < v14 )
          v16 = *((_WORD *)v5 + 6) + v4;
          v17 = 0;
          if ( v16 <= 0 )
            v16 = 0;
          *((_WORD *)v5 + 6) = v16;
          v18 = v16;
          if ( *(_DWORD *)v5 )
            v17 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)v5 + 80))(*(_DWORD *)v5);
          if ( v18 > v17 )
          {
            v19 = *((_WORD *)v5 + 7);
            v20 = v19 - 1;
            if ( *(_DWORD *)v5 )
            {
              v21 = (*(int (**)(void))(**(_DWORD **)v5 + 212))();
              v22 = *((_BYTE *)v5 + 15);
            }
            else
              v22 = v19 >> 8;
              v21 = 255;
            if ( v20 > v21 )
              v20 = v21;
            v23 = v22 == 0;
            *((_BYTE *)v5 + 14) = v20;
            if ( v22 )
              v23 = v20 == 0;
            if ( v23 || !*(_DWORD *)v5 )
              *((_BYTE *)v5 + 14) = 0;
              *((_WORD *)v5 + 6) = 0;
              *(_DWORD *)v5 = 0;
              *((_DWORD *)v5 + 1) = 0;
              v24 = *((_DWORD *)v5 + 2);
              *((_DWORD *)v5 + 2) = 0;
              if ( v24 )
                (*(void (**)(void))(*(_DWORD *)v24 + 4))();
              *((_DWORD *)v5 + 10) = *((_DWORD *)v5 + 9);
              *((_DWORD *)v5 + 14) = *((_DWORD *)v5 + 13);
              ItemInstance::_updateCompareHashes(v5);
            if ( v3 )
              v25 = Entity::getLevel(v3);
              Level::playSound(v25, 5, (int)v3 + 72);
          }
    }
}


  if ( ItemInstance::isNull((ItemInstance *)v5) || !*(_BYTE *)(v5 + 14) )
{
    ItemInstance::ItemInstance(v3, v4);
  }
  else if ( ItemInstance::isNull((ItemInstance *)v4) || !*(_BYTE *)(v4 + 14) )
  {
    ItemInstance::ItemInstance((int)v3);
    ItemInstance::operator=((int)v3, v5);
  else
    if ( ItemInstance::isNull((ItemInstance *)v4) )
      v7 = 0;
    else
      v7 = *(_BYTE *)(v4 + 14);
    if ( !ItemInstance::isNull((ItemInstance *)&v9) )
      ItemInstance::add((ItemInstance *)&v9, v7);
    ItemInstance::ItemInstance(v3, (int)&v9);
  if ( ptr )
    operator delete(ptr);
  if ( v11 )
    operator delete(v11);
  result = v10;
  if ( v10 )
    result = (*(int (**)(void))(*(_DWORD *)v10 + 4))();
  return result;
}


int __fastcall ItemInstance::resetHoverName(ItemInstance *this)
{
  ItemInstance *v1; // r4@1
  int result; // r0@1
  bool v3; // zf@1
  int v4; // r0@6
  signed int v5; // r1@6
  int v6; // r0@6
  __int64 v7; // [sp+0h] [bp-18h]@6

  v1 = this;
  result = *(_DWORD *)this;
  v3 = result == 0;
  if ( result )
  {
    result = *((_DWORD *)v1 + 2);
    v3 = result == 0;
  }
  if ( !v3 )
    result = CompoundTag::contains(result, (const void **)&ItemInstance::TAG_DISPLAY);
    if ( result == 1 )
    {
      result = CompoundTag::contains(*((_DWORD *)v1 + 2), (const void **)&ItemInstance::TAG_DISPLAY, 10);
      if ( result == 1 )
      {
        v4 = CompoundTag::getCompound(*((_DWORD *)v1 + 2), (const void **)&ItemInstance::TAG_DISPLAY);
        CompoundTag::clone((CompoundTag *)((char *)&v7 + 4), v4);
        CompoundTag::remove(SHIDWORD(v7), (const void **)&ItemInstance::TAG_DISPLAY_NAME);
        v5 = CompoundTag::isEmpty((CompoundTag *)HIDWORD(v7));
        v6 = *((_DWORD *)v1 + 2);
        if ( v5 == 1 )
        {
          CompoundTag::remove(v6, (const void **)&ItemInstance::TAG_DISPLAY);
        }
        else
          v7 = HIDWORD(v7);
          CompoundTag::putCompound(v6, (const void **)&ItemInstance::TAG_DISPLAY, (int *)&v7);
          if ( (_DWORD)v7 )
            (*(void (**)(void))(*(_DWORD *)v7 + 4))();
          LODWORD(v7) = 0;
        result = HIDWORD(v7);
        if ( HIDWORD(v7) )
          result = (*(int (__cdecl **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 4))(HIDWORD(v7));
      }
    }
  return result;
}


int __fastcall ItemInstance::fromTag(ItemInstance *this, const CompoundTag *a2)
{
  ItemInstance *v2; // r4@1
  const CompoundTag *v3; // r5@1
  ItemInstance *v4; // r0@1
  int result; // r0@8
  int v6; // [sp+0h] [bp-58h]@1
  int v7; // [sp+8h] [bp-50h]@8
  void *v8; // [sp+24h] [bp-34h]@6
  void *ptr; // [sp+34h] [bp-24h]@4

  v2 = this;
  v3 = a2;
  v4 = (ItemInstance *)ItemInstance::ItemInstance((int)&v6);
  ItemInstance::load(v4, v3);
  if ( v6 )
    ItemInstance::ItemInstance(v2, (int)&v6);
  else
    ItemInstance::ItemInstance((int)v2);
  if ( ptr )
    operator delete(ptr);
  if ( v8 )
    operator delete(v8);
  result = v7;
  if ( v7 )
    result = (*(int (**)(void))(*(_DWORD *)v7 + 4))();
  return result;
}


signed int __fastcall ItemInstance::isDamaged(ItemInstance *this)
{
  ItemInstance *v1; // r4@1
  int v2; // r0@1
  signed int result; // r0@2
  int v4; // r1@3

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( v2 )
  {
    v4 = (*(int (**)(void))(*(_DWORD *)v2 + 80))();
    result = 0;
    if ( v4 >= 1 && (signed int)*((_WORD *)v1 + 6) > 0 )
      result = 1;
  }
  else
  return result;
}


int __fastcall ItemInstance::saveEnchantsToUserData(ItemInstance *this, const ItemEnchants *a2)
{
  ItemInstance *v2; // r5@1
  const ItemEnchants *v3; // r4@1
  int result; // r0@3
  void *v5; // r6@5
  int v6; // r0@6
  int v7; // r1@8
  int v8; // [sp+0h] [bp-18h]@8
  int v9; // [sp+4h] [bp-14h]@8

  v2 = this;
  v3 = a2;
  if ( *(_DWORD *)this && !ItemEnchants::isEmpty(a2) )
  {
    v5 = (void *)*((_DWORD *)v2 + 2);
    if ( !v5 )
    {
      v5 = operator new(0x1Cu);
      CompoundTag::CompoundTag((int)v5);
      v6 = *((_DWORD *)v2 + 2);
      *((_DWORD *)v2 + 2) = v5;
      if ( v6 )
      {
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
        v5 = (void *)*((_DWORD *)v2 + 2);
      }
    }
    ItemEnchants::_toList((ItemEnchants *)&v8, (int)v3);
    v7 = v8;
    v8 = 0;
    v9 = v7;
    CompoundTag::put((int)v5, (const void **)&ItemInstance::TAG_ENCHANTS, &v9);
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
    result = v8;
    v9 = 0;
    if ( v8 )
      result = (*(int (**)(void))(*(_DWORD *)v8 + 4))();
  }
  else
    result = *((_DWORD *)v2 + 2);
    if ( result )
      result = j_j_j__ZN11CompoundTag6removeERKSs_1(result, (const void **)&ItemInstance::TAG_ENCHANTS);
  return result;
}


void __fastcall ItemInstance::getName(ItemInstance *this, int a2)
{
  ItemInstance::getName(this, a2);
}


int __fastcall ItemInstance::getStrippedNetworkItem(ItemInstance *this, int a2)
{
  int v2; // r6@1
  ItemInstance *v3; // r5@1
  int v4; // r8@2
  int v5; // r7@2
  int v6; // r4@2
  int result; // r0@4
  int v8; // [sp+4h] [bp-1Ch]@2

  v2 = *(_DWORD *)a2;
  v3 = this;
  if ( *(_DWORD *)a2 )
  {
    v4 = *(_WORD *)(a2 + 12);
    v5 = *(_BYTE *)(a2 + 14);
    ItemInstance::getNetworkUserData((ItemInstance *)&v8, a2);
    v6 = v8;
    ItemInstance::ItemInstance(v3, v2, v5, v4, v8);
    if ( v6 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
    result = 0;
    v8 = 0;
  }
  else
    result = ItemInstance::ItemInstance((int)this);
  return result;
}


signed int __fastcall ItemInstance::matches(ItemInstance *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r5@1
  ItemInstance *v3; // r4@1
  signed int result; // r0@5

  v2 = a2;
  v3 = this;
  if ( *(_DWORD *)this != *(_DWORD *)a2
    || *((_WORD *)this + 6) != *((_WORD *)a2 + 6)
    || ItemInstance::hasSameUserData(this, a2) != 1
    || *((_DWORD *)v3 + 16) != *((_DWORD *)v2 + 16) )
  {
    result = 0;
  }
  else
    if ( *((_DWORD *)v3 + 12) == *((_DWORD *)v2 + 12) && *((_BYTE *)v3 + 14) == *((_BYTE *)v2 + 14) )
      result = 1;
  return result;
}


signed int __fastcall ItemInstance::isFullStack(ItemInstance *this)
{
  ItemInstance *v1; // r1@1
  int v2; // r0@1
  unsigned int v3; // r4@1
  unsigned int v4; // r0@2
  signed int v5; // r1@4

  v1 = this;
  v2 = *(_DWORD *)this;
  v3 = *((_BYTE *)v1 + 14);
  if ( v2 )
    v4 = (*(int (**)(void))(*(_DWORD *)v2 + 212))();
  else
    v4 = 255;
  v5 = 0;
  if ( v3 >= v4 )
    v5 = 1;
  return v5;
}


void __fastcall ItemInstance::getHoverName(ItemInstance *this, int a2)
{
  ItemInstance *v2; // r4@1
  int v3; // r5@1
  __int64 v4; // kr00_8@1
  unsigned int v5; // r1@1
  const void **v6; // r0@3
  const void **v7; // r0@5
  char *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  int v17; // [sp+0h] [bp-20h]@1
  unsigned int v18; // [sp+4h] [bp-1Ch]@1
  char *v19; // [sp+8h] [bp-18h]@5

  v2 = this;
  v3 = a2;
  ItemInstance::_getHoverFormattingPrefix((ItemInstance *)&v18, a2);
  ItemInstance::getName((ItemInstance *)&v17, v3);
  v4 = *(_QWORD *)(v18 - 12);
  v5 = *(_DWORD *)(v17 - 12) + v4;
  if ( v5 > HIDWORD(v4) && v5 <= *(_DWORD *)(v17 - 8) )
    v6 = sub_21E82D8((const void **)&v17, 0, v18, (_BYTE *)v4);
  else
    v6 = sub_21E72F0((const void **)&v18, (const void **)&v17);
  v19 = (char *)*v6;
  *v6 = &unk_28898CC;
  v7 = sub_21E72F0((const void **)&v19, (const void **)&unk_28079B4);
  *(_DWORD *)v2 = *v7;
  *v7 = &unk_28898CC;
  v8 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v19 - 4);
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
  }
  v9 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v17 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v18 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


int __fastcall ItemInstance::setCustomName(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  int v4; // r0@2
  int v5; // r1@3
  int v6; // r0@3
  int v7; // r6@7
  void *v8; // r7@7
  int v9; // r0@10
  int v10; // r0@10
  __int64 v12; // [sp+4h] [bp-24h]@10
  void *v13; // [sp+Ch] [bp-1Ch]@7
  int v14; // [sp+10h] [bp-18h]@3

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)a1 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    if ( !v4 )
    {
      std::make_unique<CompoundTag,char const(&)[4]>(&v14, "tag");
      v5 = v14;
      v14 = 0;
      v6 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 8) = v5;
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      v4 = *(_DWORD *)(v2 + 8);
    }
    if ( !CompoundTag::contains(v4, (const void **)&ItemInstance::TAG_DISPLAY, 10) )
      v7 = *(_DWORD *)(v2 + 8);
      v8 = operator new(0x1Cu);
      CompoundTag::CompoundTag((int)v8);
      v13 = v8;
      CompoundTag::putCompound(v7, (const void **)&ItemInstance::TAG_DISPLAY, (int *)&v13);
      if ( v13 )
        (*(void (**)(void))(*(_DWORD *)v13 + 4))();
      v13 = 0;
    v9 = CompoundTag::getCompound(*(_DWORD *)(v2 + 8), (const void **)&ItemInstance::TAG_DISPLAY);
    CompoundTag::clone((CompoundTag *)((char *)&v12 + 4), v9);
    CompoundTag::putString(SHIDWORD(v12), (const void **)&ItemInstance::TAG_DISPLAY_NAME, v3);
    v10 = *(_DWORD *)(v2 + 8);
    v12 = HIDWORD(v12);
    CompoundTag::putCompound(v10, (const void **)&ItemInstance::TAG_DISPLAY, (int *)&v12);
    if ( (_DWORD)v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    LODWORD(v12) = 0;
    if ( HIDWORD(v12) )
      (*(void (**)(void))(*(_DWORD *)HIDWORD(v12) + 4))();
  }
  return v2;
}


ItemInstance *__fastcall ItemInstance::ItemInstance(ItemInstance *this, int a2)
{
  ItemInstance *v2; // r4@1
  int v3; // r6@1
  char *v4; // r8@1
  char *v5; // r7@1
  int v6; // r1@3
  int v7; // r0@5
  int v8; // r1@8
  int v9; // r1@9
  int v10; // r0@11
  __int64 v11; // r0@14
  __int64 v12; // r0@14
  int v14; // [sp+4h] [bp-1Ch]@9

  v2 = this;
  v3 = a2;
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 15) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 200;
  *((_BYTE *)this + 32) = 1;
  *((_DWORD *)this + 9) = 0;
  v4 = (char *)this + 36;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  v5 = (char *)this + 52;
  *((_DWORD *)v5 + 1) = 0;
  *((_DWORD *)v5 + 2) = 0;
  if ( *(_BYTE *)(a2 + 15) )
  {
    if ( *(_DWORD *)a2 )
    {
      v6 = *(_WORD *)(*(_DWORD *)a2 + 18);
    }
    else
      v7 = *(_DWORD *)(a2 + 4);
      if ( v7 )
        v6 = *(_BYTE *)(v7 + 4);
      else
        v6 = 0;
  }
  else
    v6 = -1;
  ItemInstance::init(v2, v6, *(_BYTE *)(v3 + 14), *(_WORD *)(v3 + 12));
  v8 = *(_DWORD *)(v3 + 8);
  if ( v8 )
    CompoundTag::clone((CompoundTag *)&v14, v8);
    v9 = v14;
    v9 = 0;
    v14 = 0;
  v14 = 0;
  v10 = *((_DWORD *)v2 + 2);
  *((_DWORD *)v2 + 2) = v9;
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    if ( v14 )
      (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  HIDWORD(v11) = v3 + 36;
  LODWORD(v11) = v4;
  std::vector<Block const*,std::allocator<Block const*>>::operator=(v11);
  HIDWORD(v12) = v3 + 52;
  LODWORD(v12) = v5;
  std::vector<Block const*,std::allocator<Block const*>>::operator=(v12);
  ItemInstance::_updateCompareHashes(v2);
  return v2;
}


ItemInstance *__fastcall ItemInstance::ItemInstance(ItemInstance *this, int a2, int a3, int a4, int a5)
{
  ItemInstance *v5; // r4@1
  int v6; // r5@1
  int v7; // r0@4
  int v9; // [sp+4h] [bp-14h]@2

  v5 = this;
  v6 = 0;
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 15) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 200;
  *((_BYTE *)this + 32) = 1;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  ItemInstance::init(this, a2, a3, a4);
  if ( a5 )
  {
    CompoundTag::clone((CompoundTag *)&v9, a5);
    v6 = v9;
  }
  else
    v9 = 0;
  v9 = 0;
  v7 = *((_DWORD *)v5 + 2);
  *((_DWORD *)v5 + 2) = v6;
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  return v5;
}


void __fastcall ItemInstance::hurtAndBreak(ItemInstance *this, int a2, Entity *a3)
{
  ItemInstance::hurtAndBreak(this, a2, a3);
}


int __fastcall ItemInstance::retrieveAuxValFromIDAux(ItemInstance *this, int a2)
{
  return (unsigned __int16)this & 0x7FFF;
}


ItemInstance *__fastcall ItemInstance::ItemInstance(ItemInstance *this, int a2, int a3)
{
  ItemInstance *v3; // r4@1

  v3 = this;
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 15) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 200;
  *((_BYTE *)this + 32) = 1;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  ItemInstance::init(this, *(_BYTE *)(a2 + 4), a3, 0);
  return v3;
}


  if ( ItemInstance::getId(a5) == *(_BYTE *)(Block::mShulkerBox + 4) )
{
  else
    result = ChestBlockEntity::canPushInItem((ItemInstance *)((char *)v5 - 112), v8, v7, v6, a5);
  return result;
}


int *__fastcall ItemInstance::getCustomName(ItemInstance *this, int a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  int *result; // r0@1
  int v5; // r0@3
  int v6; // r5@3
  int *v7; // r0@4

  v2 = (int *)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  result = *(int **)(a2 + 8);
  if ( result )
  {
    result = (int *)CompoundTag::contains((int)result, (const void **)&ItemInstance::TAG_DISPLAY, 10);
    if ( result == (int *)1 )
    {
      v5 = CompoundTag::getCompound(*(_DWORD *)(v3 + 8), (const void **)&ItemInstance::TAG_DISPLAY);
      v6 = v5;
      result = (int *)CompoundTag::contains(v5, (const void **)&ItemInstance::TAG_DISPLAY_NAME);
      if ( result == (int *)1 )
      {
        v7 = (int *)CompoundTag::getString(v6, (const void **)&ItemInstance::TAG_DISPLAY_NAME);
        result = EntityInteraction::setInteractText(v2, v7);
      }
    }
  }
  return result;
}


  if ( v9 || ItemInstance::isNull((ItemInstance *)&v19) || !v21 )
{
    v11 = (MerchantRecipe *)TradeContainerManagerController::getRecipe(
                              *(TradeContainerManagerController **)(v5 + 636),
                              *(_DWORD *)(v5 + 628));
    v12 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v5 + 424));
    v13 = *(void (__fastcall **)(int, int, char *, _DWORD))(*(_DWORD *)v12 + 12);
    v14 = MerchantRecipe::getSellItem(v11);
    v13(v3, v12, v14, 0);
  }
  else
  {
    v10 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v5 + 424));
    (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v3);
  if ( ptr )
    operator delete(ptr);
  if ( v23 )
    operator delete(v23);
  result = v20;
  if ( v20 )
    result = (*(int (**)(void))(*(_DWORD *)v20 + 4))();
  return result;
}


int __fastcall ItemInstance::setUserData(int a1, int *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int result; // r0@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  result = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v2 + 8) = v3;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


ItemEnchants *__fastcall ItemInstance::getEnchantsFromUserData(ItemInstance *this, int a2)
{
  int v2; // r5@1
  ItemInstance *v3; // r4@1
  int v4; // r0@1
  signed int v5; // r6@2
  int v6; // r7@5
  const ListTag *v7; // r0@8
  ItemEnchants *result; // r0@8

  v2 = a2;
  v3 = this;
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
    v5 = CompoundTag::contains(v4, (const void **)&ItemInstance::TAG_ENCHANTS, 9);
  else
    v5 = 0;
  if ( *(_DWORD *)v2 )
    v6 = (*(int (**)(void))(**(_DWORD **)v2 + 132))();
    v6 = 0;
  if ( v5 == 1 )
  {
    v7 = (const ListTag *)CompoundTag::getList(*(_DWORD *)(v2 + 8), (const void **)&ItemInstance::TAG_ENCHANTS);
    result = ItemEnchants::ItemEnchants(v3, v6, v7);
  }
    result = (ItemEnchants *)ItemEnchants::ItemEnchants((int)v3, v6);
  return result;
}


int __fastcall ItemInstance::inventoryTick(ItemInstance *this, Level *a2, Entity *a3, int a4, bool a5)
{
  ItemInstance *v5; // r1@1
  int result; // r0@1

  v5 = this;
  result = *(_DWORD *)this;
  if ( result )
    result = (*(int (__cdecl **)(int, ItemInstance *))(*(_DWORD *)result + 216))(result, v5);
  return result;
}


int __fastcall ItemInstance::ItemInstance(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int v3; // r1@2
  int v4; // r0@3
  int v5; // r0@7
  int v7; // [sp+0h] [bp-18h]@6

  v1 = a1;
  *(_BYTE *)(a1 + 14) = 0;
  *(_WORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 15) = 1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) = 200;
  *(_BYTE *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  v2 = Item::mItems[0];
  *(_DWORD *)a1 = Item::mItems[0];
  if ( v2 )
  {
    v3 = *(_BYTE *)(v2 + 44);
    *(_BYTE *)(a1 + 15) = 1;
    if ( (unsigned int)(v3 - 1) > 0xFE )
      v4 = 0;
    else
      v4 = Block::mBlocks[v3];
  }
  else
    v4 = 0;
  *(_DWORD *)(v1 + 4) = v4;
  sub_21E0378(&v7);
  *(_QWORD *)(v1 + 16) = *(_QWORD *)&v7;
  if ( !*(_BYTE *)(v1 + 14) )
    *(_BYTE *)(v1 + 14) = 0;
    *(_WORD *)(v1 + 12) = 0;
    *(_DWORD *)v1 = 0;
    *(_DWORD *)(v1 + 4) = 0;
    v5 = *(_DWORD *)(v1 + 8);
    *(_DWORD *)(v1 + 8) = 0;
    if ( v5 )
      (*(void (**)(void))(*(_DWORD *)v5 + 4))();
    *(_DWORD *)(v1 + 40) = *(_DWORD *)(v1 + 36);
    *(_DWORD *)(v1 + 56) = *(_DWORD *)(v1 + 52);
    ItemInstance::_updateCompareHashes((ItemInstance *)v1);
  return v1;
}


  if ( ItemInstance::getId(a1) == *(_WORD *)(Item::mDye_powder + 18)
{
  {
    v2 = 1;
  }
  return v2;
}


  if ( ItemInstance::matchesItem(v6, v5) )
{
  else
    v17 = ItemInstance::isNull(v5) ^ 1;
  TradeContainerManagerController::_createResult((TradeContainerManagerController *)v8, v17);
  v18 = ContainerManagerModel::getPlayer(v16);
  v24 = 99999;
  v25 = -21;
  v27 = v23;
  v26 = v22;
  v28 = 0;
  v29 = v7;
  ItemInstance::ItemInstance((ItemInstance *)&v30, (int)v6);
  ItemInstance::ItemInstance((ItemInstance *)&v34, (int)v5);
  InventoryTransactionManager::addAction(v18 + 5152, (int)&v24);
  if ( ptr )
    operator delete(ptr);
  if ( v36 )
    operator delete(v36);
  if ( v35 )
    (*(void (**)(void))(*(_DWORD *)v35 + 4))();
  v35 = 0;
  if ( v33 )
    operator delete(v33);
  if ( v32 )
    operator delete(v32);
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  result = 0;
  v31 = 0;
  if ( v9 )
  {
    v20 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
    }
    else
      result = (*v20)--;
    if ( result == 1 )
      v21 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
      }
      else
        result = (*v21)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  }
  return result;
}


int __fastcall ItemInstance::_setItem(ItemInstance *this, int a2)
{
  int v2; // r2@2
  signed int v3; // r2@3
  signed int v4; // r3@7
  int v5; // r2@9
  int v6; // r1@11
  int result; // r0@12

  if ( (unsigned int)a2 >= 0x200 )
  {
    v3 = 0;
    *(_DWORD *)this = 0;
  }
  else
    v2 = Item::mItems[a2];
    *(_DWORD *)this = v2;
    if ( v2 )
    {
      a2 = *(_BYTE *)(v2 + 44);
      v3 = 1;
    }
    else
      v3 = 0;
  v4 = 0;
  if ( !a2 )
    v4 = 1;
  v5 = v3 | v4;
  *((_BYTE *)this + 15) = v5;
  if ( v5 )
    if ( (unsigned int)(a2 - 1) > 0xFE )
      v6 = 0;
      v6 = Block::mBlocks[a2];
    *((_DWORD *)this + 1) = v6;
    result = v5;
    *((_DWORD *)this + 1) = 0;
    *((_BYTE *)this + 14) = 0;
    *((_WORD *)this + 6) = 0;
    result = 0;
  return result;
}


int __fastcall ItemInstance::useOn(ItemInstance *this, Entity *a2, int a3, int a4, int a5, signed __int8 a6, float a7, float a8, float a9, ItemUseCallback *a10)
{
  ItemInstance *v10; // r7@1
  int v11; // r6@1
  int v12; // r8@1
  Entity *v13; // r5@1
  Level *v14; // r0@2
  unsigned __int64 *v15; // r4@2
  int v16; // r1@4
  int result; // r0@5
  float v22; // [sp+Ch] [bp-2Ch]@0
  float v23; // [sp+10h] [bp-28h]@0
  float v24; // [sp+14h] [bp-24h]@0

  v10 = this;
  v11 = a4;
  v12 = a3;
  v13 = a2;
  if ( *(_DWORD *)this
    && ((v14 = (Level *)Entity::getLevel(a2),
         v15 = (unsigned __int64 *)Level::getGameRules(v14),
         GameRules::hasRule(v15, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) != 1)
     || GameRules::getBool(v15, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS)
     || (v16 = *((_WORD *)v10 + 6), !(*(int (**)(void))(**(_DWORD **)v10 + 112))())) )
  {
    __asm
    {
      VLDR            S0, [SP,#0x38+arg_10]
      VLDR            S2, [SP,#0x38+arg_C]
      VLDR            S4, [SP,#0x38+arg_8]
      VSTR            S2, [SP,#0x38+var_28]
      VSTR            S0, [SP,#0x38+var_24]
      VSTR            S4, [SP,#0x38+var_2C]
    }
    result = Item::useOn(*(Item **)v10, v10, v13, *(float *)&v12, *(float *)&v11, *(float *)&a5, a6, v22, v23, v24, a10);
  }
  else
    result = 0;
  return result;
}


int __fastcall ItemInstance::getPickupPopPercentage(ItemInstance *this)
{
  ItemInstance *v1; // r8@1
  signed int v2; // r4@1
  signed __int64 v7; // r2@1
  signed __int64 v8; // r0@1
  int result; // r0@13
  int v12; // [sp+0h] [bp-28h]@9
  int v13; // [sp+8h] [bp-20h]@1

  v1 = this;
  sub_21E0378(&v13);
  v2 = 0;
  v8 = (*(_QWORD *)&v13 - *((_QWORD *)v1 + 2)) / 1000000LL;
  __asm { VMOV.F32        S0, #1.0 }
  v7 = *((_QWORD *)v1 + 3) + 5000LL;
  _CF = *((_DWORD *)v1 + 6) + 5000 >= (unsigned int)v8;
  LODWORD(v8) = 0;
  if ( !_CF )
    LODWORD(v8) = 1;
  if ( SHIDWORD(v7) < SHIDWORD(v8) )
    v2 = 1;
  if ( HIDWORD(v7) == HIDWORD(v8) )
    v2 = v8;
  if ( !v2 && *((_BYTE *)v1 + 32) )
  {
    sub_21E0378(&v12);
    _R4 = _aeabi_l2f(
            (*(_QWORD *)&v12 - *((_QWORD *)v1 + 2)) / 1000000LL,
            (unsigned __int64)((*(_QWORD *)&v12 - *((_QWORD *)v1 + 2)) / 1000000LL) >> 32);
    _R0 = _aeabi_l2f(*((_QWORD *)v1 + 3), *((_QWORD *)v1 + 3) >> 32);
    __asm
    {
      VMOV            S0, R0
      VMOV            S2, R4
      VDIV.F32        S2, S2, S0
      VMOV.F32        S0, #1.0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S0 }
      VLDR            S0, =1.1921e-7
      VCMPE.F32       S2, #0.0
    if ( !_ZF )
      __asm { VMOVNE.F32      S0, S2 }
  }
  __asm { VMOV            R0, S0 }
  return result;
}


  if ( v3 || ItemInstance::isNull((ItemInstance *)a2) )
{
    result = 0;
  }
  else
  {
    result = *(_BYTE *)(v2 + 14);
    if ( *(_BYTE *)(v2 + 14) )
      result = 1;
  return result;
}


int *__fastcall ItemInstance::deserializeComponents(ItemInstance *this, IDataInput *a2)
{
  IDataInput *v2; // r11@1
  ItemInstance *v3; // r4@1
  int v4; // r10@1
  unsigned int *v5; // r5@2
  int v6; // r9@2
  int *v7; // r8@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  __int64 v10; // r6@11
  void *v11; // r0@11
  __int64 v12; // r0@13
  void *v13; // r5@15
  unsigned int v14; // r2@15
  unsigned int v15; // r1@17
  unsigned int v16; // r8@17
  int v17; // r7@24
  int v18; // r10@30
  unsigned int *v19; // r5@31
  int v20; // r9@31
  int *v21; // r8@31
  unsigned int *v22; // r2@32
  signed int v23; // r1@34
  __int64 v24; // r6@40
  void *v25; // r0@40
  __int64 v26; // r0@42
  void *v27; // r5@44
  unsigned int v28; // r2@44
  unsigned int v29; // r1@46
  unsigned int v30; // r8@46
  int v31; // r7@53
  int v33; // [sp+Ch] [bp-3Ch]@31
  int v34; // [sp+10h] [bp-38h]@2

  v2 = a2;
  v3 = this;
  v4 = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 32))(a2);
  *((_DWORD *)v3 + 10) = *((_DWORD *)v3 + 9);
  if ( v4 >= 1 )
  {
    v5 = (unsigned int *)&v34;
    v6 = 0;
    v7 = &dword_28898C0;
    do
    {
      (*(void (__fastcall **)(unsigned int *, IDataInput *))(*(_DWORD *)v2 + 8))(v5, v2);
      HIDWORD(v10) = Block::lookupByName(v5, 1);
      v11 = (void *)(v34 - 12);
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
          j_j_j_j__ZdlPv_9(v11);
      }
      if ( HIDWORD(v10) )
        v12 = *((_QWORD *)v3 + 5);
        if ( (_DWORD)v12 == HIDWORD(v12) )
          v13 = (void *)*((_DWORD *)v3 + 9);
          LODWORD(v10) = 0;
          v14 = ((signed int)v12 - (signed int)v13) >> 2;
          if ( !v14 )
            v14 = 1;
          HIDWORD(v12) = v14 + (((signed int)v12 - (signed int)v13) >> 2);
          v16 = v14 + (((signed int)v12 - (signed int)v13) >> 2);
          if ( 0 != HIDWORD(v12) >> 30 )
            v16 = 0x3FFFFFFF;
          if ( v15 < v14 )
          if ( v16 )
          {
            if ( v16 >= 0x40000000 )
LABEL_60:
              sub_21E57F4();
            LODWORD(v10) = operator new(4 * v16);
            LODWORD(v12) = *(_QWORD *)((char *)v3 + 36) >> 32;
            v13 = (void *)*(_QWORD *)((char *)v3 + 36);
          }
          *(_DWORD *)(v10 + v12 - (_DWORD)v13) = HIDWORD(v10);
          v17 = v10 + v12 - (_DWORD)v13;
          if ( ((signed int)v12 - (signed int)v13) >> 2 )
            _aeabi_memmove4(v10, v13);
          HIDWORD(v10) += 4;
          if ( v13 )
            operator delete(v13);
          *(_QWORD *)((char *)v3 + 36) = v10;
          *((_DWORD *)v3 + 11) = v10 + 4 * v16;
          v5 = (unsigned int *)&v34;
          v7 = &dword_28898C0;
          *(_DWORD *)v12 = HIDWORD(v10);
          *((_DWORD *)v3 + 10) += 4;
      ++v6;
    }
    while ( v6 < v4 );
  }
  v18 = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v2 + 32))(v2);
  *((_DWORD *)v3 + 14) = *((_DWORD *)v3 + 13);
  if ( v18 >= 1 )
    v19 = (unsigned int *)&v33;
    v20 = 0;
    v21 = &dword_28898C0;
      (*(void (__fastcall **)(unsigned int *, IDataInput *))(*(_DWORD *)v2 + 8))(v19, v2);
      HIDWORD(v24) = Block::lookupByName(v19, 1);
      v25 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != v21 )
        v22 = (unsigned int *)(v33 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
      if ( HIDWORD(v24) )
        v26 = *((_QWORD *)v3 + 7);
        if ( (_DWORD)v26 == HIDWORD(v26) )
          v27 = (void *)*((_DWORD *)v3 + 13);
          LODWORD(v24) = 0;
          v28 = ((signed int)v26 - (signed int)v27) >> 2;
          if ( !v28 )
            v28 = 1;
          HIDWORD(v26) = v28 + (((signed int)v26 - (signed int)v27) >> 2);
          v30 = v28 + (((signed int)v26 - (signed int)v27) >> 2);
          if ( 0 != HIDWORD(v26) >> 30 )
            v30 = 0x3FFFFFFF;
          if ( v29 < v28 )
          if ( v30 )
            if ( v30 >= 0x40000000 )
              goto LABEL_60;
            LODWORD(v24) = operator new(4 * v30);
            LODWORD(v26) = *(_QWORD *)((char *)v3 + 52) >> 32;
            v27 = (void *)*(_QWORD *)((char *)v3 + 52);
          *(_DWORD *)(v24 + v26 - (_DWORD)v27) = HIDWORD(v24);
          v31 = v24 + v26 - (_DWORD)v27;
          if ( ((signed int)v26 - (signed int)v27) >> 2 )
            _aeabi_memmove4(v24, v27);
          HIDWORD(v24) += 4;
          if ( v27 )
            operator delete(v27);
          *(_QWORD *)((char *)v3 + 52) = v24;
          *((_DWORD *)v3 + 15) = v24 + 4 * v30;
          v19 = (unsigned int *)&v33;
          v21 = &dword_28898C0;
          *(_DWORD *)v26 = HIDWORD(v24);
          *((_DWORD *)v3 + 14) += 4;
      ++v20;
    while ( v20 < v18 );
  return ItemInstance::_updateCompareHashes(v3);
}


ItemInstance *__fastcall ItemInstance::ItemInstance(ItemInstance *this, int a2, int a3, int a4)
{
  ItemInstance *v4; // r4@1

  v4 = this;
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 15) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 200;
  *((_BYTE *)this + 32) = 1;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  ItemInstance::init(this, a2, a3, a4);
  return v4;
}


int *__fastcall ItemInstance::add(ItemInstance *this, int a2)
{
  ItemInstance *v2; // r4@1
  unsigned int v3; // r2@1
  int v4; // r0@1
  unsigned __int8 v5; // r5@1
  unsigned int v6; // r0@2
  unsigned int v7; // r1@2
  bool v8; // zf@6
  int *result; // r0@9
  int v10; // r0@10

  v2 = this;
  v3 = *((_WORD *)this + 7);
  v4 = *(_DWORD *)this;
  v5 = v3 + a2;
  if ( v4 )
  {
    v6 = (*(int (**)(void))(*(_DWORD *)v4 + 212))();
    v7 = *((_BYTE *)v2 + 15);
  }
  else
    v7 = v3 >> 8;
    v6 = 255;
  if ( v5 > v6 )
    v5 = v6;
  v8 = v7 == 0;
  *((_BYTE *)v2 + 14) = v5;
  if ( v7 )
    v8 = v5 == 0;
  if ( v8 || (result = *(int **)v2) == 0 )
    *((_BYTE *)v2 + 14) = 0;
    *((_WORD *)v2 + 6) = 0;
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
    v10 = *((_DWORD *)v2 + 2);
    *((_DWORD *)v2 + 2) = 0;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    *((_DWORD *)v2 + 10) = *((_DWORD *)v2 + 9);
    *((_DWORD *)v2 + 14) = *((_DWORD *)v2 + 13);
    result = j_j_j__ZN12ItemInstance20_updateCompareHashesEv(v2);
  return result;
}


void __fastcall ItemInstance::getHoverName(ItemInstance *this, int a2)
{
  ItemInstance::getHoverName(this, a2);
}


signed int __fastcall ItemInstance::isMusicDiscItem(ItemInstance *this, const Item *a2)
{
  RecordItem *v2; // r0@1
  signed int result; // r0@2

  v2 = *(RecordItem **)this;
  if ( v2 )
    result = RecordItem::isMusicDisc(v2, a2);
  else
    result = 0;
  return result;
}


ItemInstance *__fastcall ItemInstance::ItemInstance(ItemInstance *this, int a2)
{
  ItemInstance *v2; // r4@1

  v2 = this;
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 15) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 200;
  *((_BYTE *)this + 32) = 1;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  ItemInstance::init(this, *(_BYTE *)(a2 + 4), 1, 0);
  return v2;
}


      if ( ItemInstance::isNull((ItemInstance *)&v9) )
{
        v2 = -1;
      }
      else if ( v11 )
      {
        (*(void (__fastcall **)(char *))(*(_DWORD *)v9 + 156))(&v15);
        v2 = Color::toARGB((Color *)&v15);
      else
    }
    else
    {
      v2 = -1;
  }
  else
  {
    v2 = -1;
  if ( ptr )
    operator delete(ptr);
  if ( v13 )
    operator delete(v13);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  v10 = 0;
  if ( v7 )
    operator delete(v7);
  if ( v6 )
    operator delete(v6);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  return v2;
}


int __fastcall ItemInstance::releaseUsing(ItemInstance *this, Player *a2, int a3)
{
  int result; // r0@1

  result = *(_DWORD *)this;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 176))();
  return result;
}


int *__fastcall ItemInstance::_cloneComponents(ItemInstance *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r4@1
  ItemInstance *v3; // r5@1
  __int64 v4; // r0@1
  __int64 v5; // r0@1

  v2 = a2;
  v3 = this;
  LODWORD(v4) = (char *)this + 36;
  HIDWORD(v4) = (char *)a2 + 36;
  std::vector<Block const*,std::allocator<Block const*>>::operator=(v4);
  LODWORD(v5) = (char *)v3 + 52;
  HIDWORD(v5) = (char *)v2 + 52;
  std::vector<Block const*,std::allocator<Block const*>>::operator=(v5);
  return j_j_j__ZN12ItemInstance20_updateCompareHashesEv(v3);
}


char *__fastcall ItemInstance::getUserData(ItemInstance *this)
{
  return (char *)this + 8;
}


unsigned int __fastcall ItemInstance::retrieveIDFromIDAux(ItemInstance *this, int a2)
{
  return (unsigned int)this >> 16;
}


signed int __fastcall ItemInstance::hasSameUserData(ItemInstance *this, const ItemInstance *a2)
{
  unsigned int v2; // r2@2
  unsigned int v3; // r12@3
  bool v4; // zf@6
  bool v5; // zf@10
  int v6; // r2@14
  bool v7; // zf@14
  unsigned int v8; // r3@20
  bool v9; // zf@20
  bool v10; // zf@24
  bool v11; // zf@28
  int v12; // r0@31
  int v13; // r1@31
  bool v15; // zf@38
  int v16; // r2@42
  bool v17; // zf@42
  bool v18; // zf@48
  int v19; // r2@52
  bool v20; // zf@52
  int v21; // r2@58
  bool v22; // zf@58
  int v23; // r2@62
  bool v24; // zf@62

  if ( !*((_BYTE *)this + 15) )
  {
    v3 = 0;
LABEL_5:
    if ( !*((_BYTE *)a2 + 15) )
      return 1;
    v4 = *((_BYTE *)a2 + 14) == 0;
    if ( !*((_BYTE *)a2 + 14) )
      v4 = *((_WORD *)a2 + 6) == 0;
    if ( v4 )
    {
      v5 = *(_DWORD *)a2 == 0;
      if ( !*(_DWORD *)a2 )
        v5 = *((_DWORD *)a2 + 1) == 0;
      if ( v5 )
      {
        v6 = *((_DWORD *)a2 + 2);
        v7 = v6 == 0;
        if ( !v6 )
          v7 = *((_DWORD *)a2 + 16) == 0;
        if ( v7 && !*((_DWORD *)a2 + 12) )
          return 1;
      }
    }
    goto LABEL_23;
  }
  v2 = *((_WORD *)this + 7);
  if ( (_BYTE)v2 )
    v3 = v2 >> 8;
  v8 = *((_DWORD *)this + 3);
  v9 = (unsigned __int16)v8 == 0;
  v3 = v8 >> 24;
  if ( !(_WORD)v8 )
    v9 = *(_DWORD *)this == 0;
  if ( v9 )
    v21 = *((_DWORD *)this + 1);
    v22 = v21 == 0;
    if ( !v21 )
      v22 = *((_DWORD *)this + 2) == 0;
    if ( v22 )
      v23 = *((_DWORD *)this + 16);
      v24 = v23 == 0;
      if ( !v23 )
        v24 = *((_DWORD *)this + 12) == 0;
      if ( v24 )
        goto LABEL_5;
LABEL_23:
  if ( !v3 )
    return 0;
  v10 = *((_BYTE *)this + 14) == 0;
  if ( !*((_BYTE *)this + 14) )
    v10 = *((_WORD *)this + 6) == 0;
  if ( v10 )
    v15 = *(_DWORD *)this == 0;
    if ( !*(_DWORD *)this )
      v15 = *((_DWORD *)this + 1) == 0;
    if ( v15 )
      v16 = *((_DWORD *)this + 2);
      v17 = v16 == 0;
      if ( !v16 )
        v17 = *((_DWORD *)this + 16) == 0;
      if ( v17 && !*((_DWORD *)this + 12) )
        return 0;
  if ( !*((_BYTE *)a2 + 15) )
  v11 = *((_BYTE *)a2 + 14) == 0;
  if ( !*((_BYTE *)a2 + 14) )
    v11 = *((_WORD *)a2 + 6) == 0;
  if ( v11 )
    v18 = *(_DWORD *)a2 == 0;
    if ( !*(_DWORD *)a2 )
      v18 = *((_DWORD *)a2 + 1) == 0;
    if ( v18 )
      v19 = *((_DWORD *)a2 + 2);
      v20 = v19 == 0;
      if ( !v19 )
        v20 = *((_DWORD *)a2 + 16) == 0;
      if ( v20 && !*((_DWORD *)a2 + 12) )
  v12 = *((_DWORD *)this + 2);
  v13 = *((_DWORD *)a2 + 2);
  if ( !v12 )
    if ( v13 )
      return 0;
    return 1;
  if ( v13 && (*(int (**)(void))(*(_DWORD *)v12 + 28))() == 1 )
  return 0;
}


int __fastcall ItemInstance::setRepairCost(ItemInstance *this, int a2)
{
  ItemInstance *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r1@2
  int v6; // r0@2
  int v8; // [sp+4h] [bp-14h]@2

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 2);
  if ( !v4 )
  {
    std::make_unique<CompoundTag,char const(&)[4]>(&v8, "tag");
    v5 = v8;
    v8 = 0;
    v6 = *((_DWORD *)v2 + 2);
    *((_DWORD *)v2 + 2) = v5;
    if ( v6 )
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    v4 = *((_DWORD *)v2 + 2);
  }
  return j_j_j__ZN11CompoundTag6putIntERKSsi_1(v4, (const void **)&ItemInstance::TAG_REPAIR_COST, v3);
}


ItemInstance *__fastcall ItemInstance::ItemInstance(ItemInstance *this, int a2, int a3, int a4, int a5)
{
  ItemInstance *v5; // r4@1
  int v6; // r5@1
  int v7; // r0@4
  int v9; // [sp+4h] [bp-14h]@2

  v5 = this;
  v6 = 0;
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 15) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 200;
  *((_BYTE *)this + 32) = 1;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  ItemInstance::init(this, *(_WORD *)(a2 + 18), a3, a4);
  if ( a5 )
  {
    CompoundTag::clone((CompoundTag *)&v9, a5);
    v6 = v9;
  }
  else
    v9 = 0;
  v9 = 0;
  v7 = *((_DWORD *)v5 + 2);
  *((_DWORD *)v5 + 2) = v6;
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  return v5;
}


ItemInstance *__fastcall ItemInstance::ItemInstance(ItemInstance *this, int a2, int a3)
{
  ItemInstance *v3; // r4@1

  v3 = this;
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 15) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 200;
  *((_BYTE *)this + 32) = 1;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  ItemInstance::init(this, *(_WORD *)(a2 + 18), a3, 0);
  return v3;
}


signed int __fastcall ItemInstance::isDamageableItem(ItemInstance *this)
{
  int v1; // r0@1
  signed int v2; // r4@1

  v1 = *(_DWORD *)this;
  v2 = 0;
  if ( v1 && (*(int (**)(void))(*(_DWORD *)v1 + 80))() > 0 )
    v2 = 1;
  return v2;
}


signed int __fastcall ItemInstance::getId(ItemInstance *this)
{
  signed int result; // r0@2
  int v2; // r0@5

  if ( *((_BYTE *)this + 15) )
  {
    if ( *(_DWORD *)this )
    {
      result = *(_WORD *)(*(_DWORD *)this + 18);
    }
    else
      v2 = *((_DWORD *)this + 1);
      if ( v2 )
        result = *(_BYTE *)(v2 + 4);
      else
        result = 0;
  }
  else
    result = -1;
  return result;
}


signed int __fastcall ItemInstance::isStackable(ItemInstance *this)
{
  ItemInstance *v1; // r4@1
  int v2; // r0@1
  signed int result; // r0@2

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( v2 )
  {
    if ( (unsigned int)(*(int (**)(void))(*(_DWORD *)v2 + 212))() >= 2 )
    {
      if ( *(_DWORD *)v1
        && (*(int (**)(void))(**(_DWORD **)v1 + 80))() >= 1
        && *(_DWORD *)v1
        && (*(int (**)(void))(**(_DWORD **)v1 + 80))() >= 1 )
      {
        result = 0;
        if ( (signed int)*((_WORD *)v1 + 6) < 1 )
          result = 1;
      }
      else
        result = 1;
    }
    else
      result = 0;
  }
  else
    result = 1;
  return result;
}


  if ( ItemInstance::matchesItem(v6, v5) )
{
  else
    v17 = ItemInstance::isNull(v5) ^ 1;
  TradeContainerManagerController::_createResult((TradeContainerManagerController *)v8, v17);
  v18 = ContainerManagerModel::getPlayer(v16);
  v24 = 99999;
  v25 = -20;
  v27 = v23;
  v26 = v22;
  v28 = 0;
  v29 = v7;
  ItemInstance::ItemInstance((ItemInstance *)&v30, (int)v6);
  ItemInstance::ItemInstance((ItemInstance *)&v34, (int)v5);
  InventoryTransactionManager::addAction(v18 + 5152, (int)&v24);
  if ( ptr )
    operator delete(ptr);
  if ( v36 )
    operator delete(v36);
  if ( v35 )
    (*(void (**)(void))(*(_DWORD *)v35 + 4))();
  v35 = 0;
  if ( v33 )
    operator delete(v33);
  if ( v32 )
    operator delete(v32);
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  result = 0;
  v31 = 0;
  if ( v9 )
  {
    v20 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
    }
    else
      result = (*v20)--;
    if ( result == 1 )
      v21 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
      }
      else
        result = (*v21)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  }
  return result;
}


int __fastcall ItemInstance::getMaxUseDuration(ItemInstance *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *(_DWORD *)this;
  if ( v1 )
    result = *(_DWORD *)(v1 + 36);
  else
    result = 0;
  return result;
}


int __fastcall ItemInstance::getIdAux(ItemInstance *this)
{
  int result; // r0@2

  if ( *(_DWORD *)this )
    result = *((_WORD *)this + 6) | (*(_WORD *)(*(_DWORD *)this + 18) << 16);
  else
    result = 0;
  return result;
}


int *__fastcall ItemInstance::_loadComponents(ItemInstance *this, const CompoundTag *a2)
{
  ItemInstance *v2; // r4@1
  const CompoundTag *v3; // r5@1
  int v4; // r0@2
  int v5; // r0@4

  v2 = this;
  v3 = a2;
  if ( CompoundTag::contains((int)a2, (const void **)&ItemInstance::TAG_STORE_CAN_PLACE_ON, 9) == 1 )
  {
    v4 = CompoundTag::getList((int)v3, (const void **)&ItemInstance::TAG_STORE_CAN_PLACE_ON);
    sub_18241BC(v4, (int)v2 + 36);
  }
  if ( CompoundTag::contains((int)v3, (const void **)&ItemInstance::TAG_STORE_CAN_DESTROY, 9) == 1 )
    v5 = CompoundTag::getList((int)v3, (const void **)&ItemInstance::TAG_STORE_CAN_DESTROY);
    sub_18241BC(v5, (int)v2 + 52);
  return j_j_j__ZN12ItemInstance20_updateCompareHashesEv(v2);
}


int __fastcall ItemInstance::getIcon(ItemInstance *this, int a2, bool a3)
{
  ItemInstance *v3; // r1@1
  int v4; // r0@1
  int result; // r0@2
  int v6; // r1@3

  v3 = this;
  v4 = *(_DWORD *)this;
  if ( v4 )
  {
    v6 = *((_WORD *)v3 + 6);
    result = (*(int (**)(void))(*(_DWORD *)v4 + 248))();
  }
  else
    result = 0;
  return result;
}


int __fastcall ItemInstance::isPotionItem(ItemInstance *this)
{
  ItemInstance *v1; // r1@1
  int v2; // r0@1
  int result; // r0@4
  int v4; // r1@5

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( v2 == Item::mPotion || v2 == Item::mSplash_potion || v2 == Item::mLingering_potion )
  {
    v4 = *((_WORD *)v1 + 6);
    result = (*(int (**)(void))(*(_DWORD *)v2 + 144))();
  }
  else
    result = 0;
  return result;
}


int *__fastcall ItemInstance::getRawNameId(ItemInstance *this, int a2)
{
  int *v2; // r5@1
  int v3; // r0@1
  int *result; // r0@2

  v2 = (int *)this;
  *(_DWORD *)this = &unk_28898CC;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    result = EntityInteraction::setInteractText(v2, (int *)(v3 + 12));
  }
  else
    result = *(int **)a2;
    if ( *(_DWORD *)a2 )
      result = EntityInteraction::setInteractText(v2, result + 6);
  return result;
}


int __fastcall ItemInstance::isLiquidClipItem(ItemInstance *this)
{
  ItemInstance *v1; // r1@1
  int v2; // r0@1
  int result; // r0@2
  int v4; // r1@3

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( v2 )
  {
    v4 = *((_WORD *)v1 + 6);
    result = (*(int (**)(void))(*(_DWORD *)v2 + 116))();
  }
  else
    result = 0;
  return result;
}


  if ( v12 || ItemInstance::isNull((ItemInstance *)v10) || !*(_BYTE *)(v10 + 14) )
{
    v8 = *(Player **)(v2 + 4);
    return Player::releaseUsingItem(v8);
  }
  v13 = *(_DWORD *)(*(int (**)(void))(**(_DWORD **)(v2 + 4) + 908))();
  v14 = (ItemInstance *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v2 + 4) + 908))(*(_DWORD *)(v2 + 4));
  v15 = ItemInstance::getAuxValue(v14);
  result = Player::releaseUsingItem(*(Player **)(v2 + 4));
  if ( v13 )
  {
    v17 = (*(int (**)(void))(**(_DWORD **)(v2 + 4) + 908))();
    v18 = v17;
    result = *(_BYTE *)(v17 + 15);
    v19 = result == 0;
    if ( result )
    {
      result = *(_DWORD *)v18;
      v19 = *(_DWORD *)v18 == 0;
    }
    if ( !v19 )
      result = ItemInstance::isNull((ItemInstance *)v18);
      if ( !result )
      {
        result = *(_BYTE *)(v18 + 14);
        if ( *(_BYTE *)(v18 + 14) )
        {
          result = *(_DWORD *)(*(int (**)(void))(**(_DWORD **)(v2 + 4) + 908))();
          if ( result == v13 )
          {
            v20 = (*(int (**)(void))(**(_DWORD **)(v2 + 4) + 908))();
            v21 = ItemInstance::ItemInstance((ItemInstance *)&v22, v20);
            ItemInstance::setAuxValue(v21, v15);
            (*(void (**)(void))(**(_DWORD **)(v2 + 4) + 912))();
            if ( ptr )
              operator delete(ptr);
            if ( v24 )
              operator delete(v24);
            result = v23;
            if ( v23 )
              result = (*(int (**)(void))(*(_DWORD *)v23 + 4))();
          }
        }
      }
  return result;
}


int __fastcall ItemInstance::setAuxValue(int result, int a2)
{
  if ( a2 <= 0 )
    LOWORD(a2) = 0;
  *(_WORD *)(result + 12) = a2;
  return result;
}


_BOOL4 __fastcall ItemInstance::wasJustBrewed(ItemInstance *this)
{
  int v1; // r4@1
  _BOOL4 v2; // r5@2
  void *v3; // r0@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@2

  v1 = *((_DWORD *)this + 2);
  if ( v1 )
  {
    sub_21E94B4((void **)&v7, "wasJustBrewed");
    v2 = CompoundTag::getBoolean(v1, (const void **)&v7);
    v3 = (void *)(v7 - 12);
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
        j_j_j_j__ZdlPv_9(v3);
    }
  }
  else
    v2 = 0;
  return v2;
}


signed int __fastcall ItemInstance::isStackable(ItemInstance *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  const ItemInstance *v3; // r5@1
  int v4; // r0@1
  int v5; // r0@7
  bool v6; // zf@7
  bool v7; // nf@7
  unsigned __int8 v8; // vf@7
  int v9; // r0@8
  signed int result; // r0@15

  v2 = this;
  v3 = a2;
  v4 = *(_DWORD *)this;
  if ( v4 != *(_DWORD *)a2 )
    return 0;
  if ( !v4 )
  {
LABEL_11:
    if ( *(_DWORD *)v3 && (*(int (**)(void))(**(_DWORD **)v3 + 76))() == 1 && *((_WORD *)v2 + 6) != *((_WORD *)v3 + 6) )
      return 0;
    goto LABEL_14;
  }
  if ( (unsigned int)(*(int (**)(void))(*(_DWORD *)v4 + 212))() < 2 )
  if ( *(_DWORD *)v3 )
    if ( (*(int (**)(void))(**(_DWORD **)v3 + 80))() >= 1 )
    {
      if ( !*(_DWORD *)v3 )
        goto LABEL_14;
      v5 = (*(int (**)(void))(**(_DWORD **)v3 + 80))();
      v8 = __OFSUB__(v5, 1);
      v6 = v5 == 1;
      v7 = v5 - 1 < 0;
      if ( v5 >= 1 )
      {
        v9 = *((_WORD *)v3 + 6);
        v8 = 0;
        v6 = v9 == 0;
        v7 = v9 < 0;
      }
      if ( !((unsigned __int8)(v7 ^ v8) | v6) )
        return 0;
    }
    goto LABEL_11;
LABEL_14:
  if ( ItemInstance::hasSameUserData(v2, v3) != 1 )
  result = 0;
  if ( *((_DWORD *)v2 + 16) == *((_DWORD *)v3 + 16) && *((_DWORD *)v2 + 12) == *((_DWORD *)v3 + 12) )
    result = 1;
  return result;
}


int __fastcall ItemInstance::getMaxDamage(ItemInstance *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *(_DWORD *)this;
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 80))();
  else
    result = 0;
  return result;
}


          if ( ItemInstance::matches(v26, (const ItemInstance *)(v5 + 16)) | v4 )
{
            v16 = 1;
          }
          else
          {
            ItemInstance::toString((ItemInstance *)&v49, (int)v26);
            ItemInstance::toString((ItemInstance *)&v48, v5 + 16);
            ItemInstance::toString((ItemInstance *)&v47, v5 + 88);
            v32 = (void *)(v47 - 12);
            if ( (int *)(v47 - 12) != &dword_28898C0 )
            {
              v40 = (unsigned int *)(v47 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v41 = __ldrex(v40);
                while ( __strex(v41 - 1, v40) );
              }
              else
                v41 = (*v40)--;
              if ( v41 <= 0 )
                j_j_j_j__ZdlPv_9(v32);
            }
            v33 = (void *)(v48 - 12);
            if ( (int *)(v48 - 12) != &dword_28898C0 )
              v42 = (unsigned int *)(v48 - 4);
                  v43 = __ldrex(v42);
                while ( __strex(v43 - 1, v42) );
                v43 = (*v42)--;
              if ( v43 <= 0 )
                j_j_j_j__ZdlPv_9(v33);
            v34 = (void *)(v49 - 12);
            if ( (int *)(v49 - 12) != &dword_28898C0 )
              v44 = (unsigned int *)(v49 - 4);
                  v45 = __ldrex(v44);
                while ( __strex(v45 - 1, v44) );
                v45 = (*v44)--;
              if ( v45 <= 0 )
                j_j_j_j__ZdlPv_9(v34);
            v16 = 3;
        }
      }
      else
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
        v16 = 4;
    }
    else
    {
      v16 = 4;
    if ( v6 )
      v35 = (unsigned int *)(v6 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 == 1 )
        v37 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
        else
          v38 = (*v37)--;
        if ( v38 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  else
  {
    v16 = 4;
  return v16;
}


signed int __fastcall ItemInstance::sameItemAndAux(ItemInstance *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  const ItemInstance *v3; // r5@1
  int v4; // r0@1
  signed int result; // r0@3
  __int64 v6; // [sp+0h] [bp-20h]@4
  __int64 v7; // [sp+8h] [bp-18h]@4

  v2 = this;
  v3 = a2;
  v4 = *(_DWORD *)this;
  if ( v4 && *(_DWORD *)a2 == v4 )
  {
    MapItem::getMapId((MapItem *)&v7, v2);
    MapItem::getMapId((MapItem *)&v6, v3);
    result = 0;
    if ( v7 == v6 && *((_WORD *)v2 + 6) == *((_WORD *)v3 + 6) )
      result = 1;
  }
  else
  return result;
}


int *__fastcall ItemInstance::remove(ItemInstance *this, int a2)
{
  ItemInstance *v2; // r4@1
  unsigned int v3; // r2@1
  int v4; // r0@1
  unsigned __int8 v5; // r5@1
  unsigned int v6; // r0@2
  unsigned int v7; // r1@2
  bool v8; // zf@6
  int *result; // r0@9
  int v10; // r0@10

  v2 = this;
  v3 = *((_WORD *)this + 7);
  v4 = *(_DWORD *)this;
  v5 = v3 - a2;
  if ( v4 )
  {
    v6 = (*(int (**)(void))(*(_DWORD *)v4 + 212))();
    v7 = *((_BYTE *)v2 + 15);
  }
  else
    v7 = v3 >> 8;
    v6 = 255;
  if ( v5 > v6 )
    v5 = v6;
  v8 = v7 == 0;
  *((_BYTE *)v2 + 14) = v5;
  if ( v7 )
    v8 = v5 == 0;
  if ( v8 || (result = *(int **)v2) == 0 )
    *((_BYTE *)v2 + 14) = 0;
    *((_WORD *)v2 + 6) = 0;
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
    v10 = *((_DWORD *)v2 + 2);
    *((_DWORD *)v2 + 2) = 0;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    *((_DWORD *)v2 + 10) = *((_DWORD *)v2 + 9);
    *((_DWORD *)v2 + 14) = *((_DWORD *)v2 + 13);
    result = j_j_j__ZN12ItemInstance20_updateCompareHashesEv(v2);
  return result;
}


int __fastcall ItemInstance::getBaseRepairCost(ItemInstance *this)
{
  ItemInstance *v1; // r4@1
  int v2; // r0@1
  int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  if ( v2 && CompoundTag::contains(v2, (const void **)&ItemInstance::TAG_REPAIR_COST) == 1 )
    result = j_j_j__ZNK11CompoundTag6getIntERKSs_1(*((_DWORD *)v1 + 2), (const void **)&ItemInstance::TAG_REPAIR_COST);
  else
    result = 0;
  return result;
}


ItemInstance *__fastcall ItemInstance::use(ItemInstance *this, Player *a2)
{
  ItemInstance *v2; // r5@1
  Player *v3; // r4@1
  int v4; // r0@1
  int (__fastcall *v5)(Player *, int); // r6@2
  int v6; // r0@2
  ItemInstance *result; // r0@3

  v2 = this;
  v3 = a2;
  v4 = *(_DWORD *)this;
  if ( v4
    && (v5 = *(int (__fastcall **)(Player *, int))(*(_DWORD *)a2 + 1512),
        v6 = (*(int (**)(void))(*(_DWORD *)v4 + 224))(),
        !v5(v3, v6)) )
  {
    result = (ItemInstance *)(*(int (**)(void))(**(_DWORD **)v2 + 164))();
  }
  else
    result = v2;
  return result;
}


int *__fastcall ItemInstance::_initComponents(ItemInstance *this)
{
  *((_DWORD *)this + 10) = *((_DWORD *)this + 9);
  *((_DWORD *)this + 14) = *((_DWORD *)this + 13);
  return j_j_j__ZN12ItemInstance20_updateCompareHashesEv(this);
}


  if ( ItemInstance::isPotionItem(a5) )
{
    result = 1;
  }
  else
  {
    result = 0;
    if ( *(_DWORD *)a5 == Item::mGlass_bottle )
      result = 1;
  return result;
}


int __fastcall ItemInstance::isGlint(ItemInstance *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *(_DWORD *)this;
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 100))();
  else
    result = 0;
  return result;
}


  if ( v8 || ItemInstance::isNull((ItemInstance *)v6) || !*(_BYTE *)(v6 + 14) )
{
    if ( CraftingContainerManagerController::isExpandoItem(*(_DWORD *)(v3 + 628), &v113, v4) == 1 )
    {
      CraftingContainerManagerController::switchExpandoItem(*(_DWORD *)(v3 + 628), &v113, v4);
      v10 = 1;
    }
    else if ( MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v3 + 424)) == 1 )
      CraftingContainerManagerController::getCurrentContainerStateList(
        (CraftingContainerManagerController *)&v85,
        *(_DWORD *)(v3 + 628));
      sub_119C884((void **)&v84, "button.container_auto_place_one");
      v14 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v84);
      v15 = ContainerScreenController::_releaseHeldButton(
              (MinecraftScreenController *)v3,
              (const void **)&v113,
              v4,
              v14);
      v16 = (void *)(v84 - 12);
      if ( (int *)(v84 - 12) != &dword_28898C0 )
      {
        v42 = (unsigned int *)(v84 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
        }
        else
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v16);
      }
        (CraftingContainerManagerController *)&v81,
      v17 = HIDWORD(v85);
      v18 = *(_DWORD *)(v3 + 628);
      v19 = HIDWORD(v85);
      v20 = -1171354717 * ((HIDWORD(v85) - (signed int)v85) >> 3);
      v21 = 0;
      v75 = 0;
      v76 = 0;
      v77 = 0;
      if ( HIDWORD(v85) != (_DWORD)v85 )
        if ( v20 >= 0x2E8BA2F )
          sub_119C874();
        v21 = (char *)operator new(HIDWORD(v85) - v85);
        v17 = HIDWORD(v85);
        v19 = v85;
      v75 = v21;
      v77 = &v21[88 * v20];
      v76 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemStateData const*,std::vector<ItemStateData,std::allocator<ItemStateData>>>,ItemStateData*>(
              v19,
              v17,
              (int)v21);
      v22 = HIDWORD(v81);
      v23 = HIDWORD(v81);
      v24 = -1171354717 * ((HIDWORD(v81) - (signed int)v81) >> 3);
      v25 = 0;
      v72 = 0;
      v73 = 0;
      v74 = 0;
      if ( HIDWORD(v81) != (_DWORD)v81 )
        if ( v24 >= 0x2E8BA2F )
        v25 = operator new(HIDWORD(v81) - v81);
        v22 = HIDWORD(v81);
        v23 = v81;
      v68 = v15;
      v72 = v25;
      v74 = (char *)v25 + 88 * v24;
      v73 = (void *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemStateData const*,std::vector<ItemStateData,std::allocator<ItemStateData>>>,ItemStateData*>(
                      v23,
                      v22,
                      (int)v25);
      CraftingContainerManagerController::compareStatesAndCollectTransfers(
        (int)&ptr,
        v18,
        (unsigned __int64 *)&v75,
        &v72,
        1);
      std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v72);
      std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v75);
      *(_QWORD *)&v26 = *(_QWORD *)&ptr;
      if ( ptr != v79 )
        while ( 1 )
          sub_119CCEC(&s2, unk_27F98E0, CraftingContainerManagerController::TRANSFER_NO_ORIGIN);
          v30 = (char *)s2;
          v31 = *(_DWORD **)(v26 + 72);
          v32 = (char *)s2 - 12;
          v33 = *(v31 - 3);
          if ( v33 == *((_DWORD *)s2 - 3) )
          {
            v34 = 0;
            if ( !memcmp(v31, s2, v33) )
              v34 = 1;
          }
          else
          if ( (int *)v32 != &dword_28898C0 )
            v28 = (unsigned int *)(v30 - 4);
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
              j_j_j_j_j__ZdlPv_9_1(v32);
          if ( v34 == 1 )
            break;
          v26 += 88;
          if ( v26 == v27 )
            goto LABEL_42;
        sub_119C854(&v70, &v113);
        v35 = sub_119C854(&v69, (int *)(v26 + 80));
        CraftingScreenController::_sendFlyingItem(
          v3,
          (ItemInstance *)v26,
          (int)&v70,
          v4,
          (int)v35,
          *(_DWORD *)(v26 + 84));
        v36 = (void *)(v69 - 12);
        if ( (int *)(v69 - 12) != &dword_28898C0 )
          v59 = (unsigned int *)(v69 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v60 = __ldrex(v59);
            while ( __strex(v60 - 1, v59) );
            v60 = (*v59)--;
          if ( v60 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v36);
        v37 = (void *)(v70 - 12);
        if ( (int *)(v70 - 12) != &dword_28898C0 )
          v61 = (unsigned int *)(v70 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v37);
LABEL_42:
      std::_Destroy_aux<false>::__destroy<ItemTransferData *>((int)ptr, (int)v79);
      if ( ptr )
        operator delete(ptr);
      std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector(&v81);
      std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector(&v85);
      v10 = v68;
    else if ( MinecraftScreenController::getInputMode((MinecraftScreenController *)v3) == 3 )
    else
      v10 = CraftingScreenController::_recipeAutoCraft(
              v3,
              (int)&v113,
              1,
              v63,
              v64,
              v65,
              v66,
              v67,
              v69,
              v70,
              (int)s2,
              (int)v72,
              v73,
              (int)v74,
              (int)v75,
              v76,
              (int)v77,
              (char)ptr,
              (int)v79,
              v80,
              v81,
              SHIDWORD(v81),
              v82,
              v83,
              v84,
              v85,
              SHIDWORD(v85),
              v86,
              v87,
              v88,
              (int)v89,
              v90,
              v91,
              v92,
              v93,
              v94,
              v95,
              v96,
              v97,
              v98,
              v99,
              v100,
              (int)v101,
              v102,
              v103,
              v104,
              (int)v105,
              v106,
              v107);
  }
  else if ( MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v3 + 424)) == 1 )
  {
    sub_119C884((void **)&v108, "button.container_take_half_place_one");
    v9 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v108);
    v10 = ContainerScreenController::_releaseHeldButton((MinecraftScreenController *)v3, (const void **)&v113, v4, v9);
    v11 = (void *)(v108 - 12);
    if ( (int *)(v108 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v108 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
  else
    ItemInstance::ItemInstance((ItemInstance *)&v92, (int)&v109);
    ContainerItemStack::decreaseCount((ContainerItemStack *)&v109, 1);
    v38 = ContainerItemStack::getCount((ContainerItemStack *)&v109);
    ContainerItemStack::decreaseCount((ContainerItemStack *)&v92, v38);
    v89 = 0;
    v90 = 0;
    v91 = 0;
    if ( CraftingScreenController::_tryAutoPlaceItemIntoContainer(v3, (ContainerItemStack *)&v92, 9u, (int)&v89) == 1 )
      v39 = (ItemInstance *)ContainerItemStack::getItemInstance((ContainerItemStack *)&v92);
      v40 = v90;
      for ( i = (int)v89; i != v40; i += 8 )
        sub_119C854(&v88, &v113);
        sub_119C854(&v87, (int *)i);
        CraftingScreenController::_sendFlyingItem(v3, v39, (int)&v88, v4, (int)&v87, *(_DWORD *)(i + 4));
        v48 = (void *)(v87 - 12);
        if ( (int *)(v87 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)(v87 - 4);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v48);
        v49 = (void *)(v88 - 12);
        if ( (int *)(v88 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v88 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v49);
      ContainerScreenController::setCursorSelectedItem(
        (ContainerScreenController *)v3,
        (const ContainerItemStack *)&v109);
      if ( ContainerItemStack::isEmpty((ContainerItemStack *)&v109) == 1 )
        ItemInstance::operator=((int)&v109, (int)&v92);
        ContainerItemStack::increaseCount((ContainerItemStack *)&v109, 1);
      ContainerScreenController::_handleDropSelectedItem((ContainerScreenController *)v3, 1);
    v51 = (void *)v90;
    v50 = v89;
    if ( v89 != (void *)v90 )
      do
        v54 = (int *)(*(_DWORD *)v50 - 12);
        if ( v54 != &dword_28898C0 )
          v52 = (unsigned int *)(*(_DWORD *)v50 - 4);
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
            v53 = (*v52)--;
          if ( v53 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v54);
        v50 = (char *)v50 + 8;
      while ( v50 != v51 );
      v50 = v89;
    if ( v50 )
      operator delete(v50);
    if ( v105 )
      operator delete(v105);
    if ( v101 )
      operator delete(v101);
    if ( v94 )
      (*(void (**)(void))(*(_DWORD *)v94 + 4))();
    v10 = 1;
  if ( v112 )
    operator delete(v112);
  if ( v111 )
    operator delete(v111);
  if ( v110 )
    (*(void (**)(void))(*(_DWORD *)v110 + 4))();
  v55 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v113 - 4);
    if ( &pthread_create )
      __dmb();
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v55);
  return v10;
}


    if ( v8 || ItemInstance::isNull(v7) || !*(_BYTE *)(v4 + 30) )
{
      v9 = (ItemInstance *)*(_BYTE *)(v4 + 103);
      v10 = v9 == 0;
      if ( *(_BYTE *)(v4 + 103) )
      {
        v9 = (ItemInstance *)(v4 + 88);
        v10 = *(_DWORD *)(v4 + 88) == 0;
      }
      if ( !v10 && !ItemInstance::isNull(v9) && *(_BYTE *)(v4 + 102) )
        return 1;
    }
    v6 = *(_DWORD *)(v4 + 12);
  }
  if ( v6 != 1 )
    goto LABEL_35;
  v12 = (ItemInstance *)*(_BYTE *)(v4 + 31);
  v13 = v12 == 0;
  if ( *(_BYTE *)(v4 + 31) )
  {
    v12 = (ItemInstance *)(v4 + 16);
    v13 = *(_DWORD *)(v4 + 16) == 0;
  if ( v13 || ItemInstance::isNull(v12) || !*(_BYTE *)(v4 + 30) )
LABEL_35:
    result = 0;
  else
    if ( *(_BYTE *)(v4 + 103) )
    {
      if ( *(_DWORD *)(v4 + 88) )
        if ( ItemInstance::isNull((ItemInstance *)(v4 + 88)) )
        {
          v14 = 0;
        }
        else
          v14 = *(_BYTE *)(v4 + 102);
          if ( *(_BYTE *)(v4 + 102) )
            v14 = 1;
      else
        v14 = 0;
    else
      v14 = 0;
    result = 6;
    if ( v5 )
      result = 1;
    if ( v14 )
      result = 0;
  return result;
}


  if ( ItemInstance::isNull((ItemInstance *)&v10) )
{
  else
    BannerBlockEntity::getPatterns((BannerBlockEntity *)v2, (const ItemInstance *)&v10);
  if ( v13 )
    operator delete(v13);
  if ( v12 )
    operator delete(v12);
  result = v11;
  if ( v11 )
    result = (*(int (**)(void))(*(_DWORD *)v11 + 4))();
  return result;
}


__int64 __fastcall ItemInstance::setPickupTime(ItemInstance *this)
{
  ItemInstance *v1; // r4@1
  __int64 result; // r0@1
  int v3; // [sp+0h] [bp-10h]@1

  v1 = this;
  sub_21E0378(&v3);
  result = *(_QWORD *)&v3;
  *((_QWORD *)v1 + 2) = *(_QWORD *)&v3;
  return result;
}


int __fastcall ItemInstance::isStackedByData(ItemInstance *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *(_DWORD *)this;
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 76))();
  else
    result = 0;
  return result;
}


signed int __fastcall ItemInstance::canDestroy(ItemInstance *this, const Block *a2)
{
  const Block **v2; // r0@1
  const Block **v3; // r2@1
  __int64 v4; // kr00_8@1
  signed int result; // r0@2
  const Block *v6; // t1@6

  v4 = *(_QWORD *)((char *)this + 52);
  v2 = (const Block **)(*(_QWORD *)((char *)this + 52) >> 32);
  v3 = (const Block **)v4;
  if ( (const Block **)v4 == v2 )
  {
    result = 0;
  }
  else
    while ( 1 )
    {
      v6 = *v3;
      ++v3;
      if ( v6 == a2 )
        break;
      if ( v2 == v3 )
        return 0;
    }
    result = 1;
  return result;
}


int __fastcall ItemInstance::save(ItemInstance *this, ItemInstance *a2)
{
  CompoundTag **v2; // r4@1
  ItemInstance *v3; // r5@1
  CompoundTag *v4; // r6@1
  __int16 v5; // r2@3
  int v6; // r0@5
  void *v7; // r0@8
  int v8; // r6@9
  void *v9; // r0@9
  int v10; // r6@10
  void *v11; // r0@10
  int v12; // r6@12
  void *v13; // r0@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  int v23; // [sp+0h] [bp-38h]@12
  int v24; // [sp+8h] [bp-30h]@12
  int v25; // [sp+10h] [bp-28h]@10
  int v26; // [sp+18h] [bp-20h]@9
  int v27; // [sp+20h] [bp-18h]@1

  v2 = (CompoundTag **)this;
  v3 = a2;
  v4 = (CompoundTag *)operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v4);
  *v2 = v4;
  sub_21E94B4((void **)&v27, "id");
  if ( *((_BYTE *)v3 + 15) )
  {
    if ( *(_DWORD *)v3 )
    {
      v5 = *(_WORD *)(*(_DWORD *)v3 + 18);
    }
    else
      v6 = *((_DWORD *)v3 + 1);
      if ( v6 )
        v5 = *(_BYTE *)(v6 + 4);
      else
        v5 = 0;
  }
  else
    v5 = -1;
  CompoundTag::putShort((int)v4, (const void **)&v27, v5);
  v7 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (int)*v2;
  sub_21E94B4((void **)&v26, "Count");
  CompoundTag::putByte(v8, (const void **)&v26, *((_BYTE *)v3 + 14));
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v26 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (int)*v2;
  sub_21E94B4((void **)&v25, "Damage");
  CompoundTag::putShort(v10, (const void **)&v25, *((_WORD *)v3 + 6));
  v11 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v25 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( *((_DWORD *)v3 + 2) )
    v12 = (int)*v2;
    sub_21E94B4((void **)&v24, "tag");
    CompoundTag::clone((CompoundTag *)&v23, *((_DWORD *)v3 + 2));
    CompoundTag::putCompound(v12, (const void **)&v24, &v23);
    if ( v23 )
      (*(void (**)(void))(*(_DWORD *)v23 + 4))();
    v23 = 0;
    v13 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      }
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  return ItemInstance::_saveComponents(v3, *v2);
}


int __fastcall ItemInstance::isOffhandItem(ItemInstance *this)
{
  Item *v1; // r0@1
  int result; // r0@2

  v1 = *(Item **)this;
  if ( v1 )
    result = Item::allowOffhand(v1);
  else
    result = 0;
  return result;
}


void __fastcall ItemInstance::setJustBrewed(ItemInstance *this, int a2)
{
  ItemInstance *v2; // r4@1
  void *v3; // r5@1
  int v4; // r0@3
  void *v5; // r0@5
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  unsigned int *v8; // r2@13
  signed int v9; // r1@15
  int v10; // [sp+4h] [bp-2Ch]@11
  int v11; // [sp+Ch] [bp-24h]@5

  v2 = this;
  v3 = (void *)*((_DWORD *)this + 2);
  if ( a2 == 1 )
  {
    if ( !v3 )
    {
      v3 = operator new(0x1Cu);
      CompoundTag::CompoundTag((int)v3);
      v4 = *((_DWORD *)v2 + 2);
      *((_DWORD *)v2 + 2) = v3;
      if ( v4 )
      {
        (*(void (**)(void))(*(_DWORD *)v4 + 4))();
        v3 = (void *)*((_DWORD *)v2 + 2);
      }
    }
    sub_21E94B4((void **)&v11, "wasJustBrewed");
    CompoundTag::putBoolean((int)v3, (const void **)&v11, 1);
    v5 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      else
        v7 = (*v6)--;
      if ( v7 <= 0 )
        goto LABEL_22;
  }
  else if ( v3 )
    sub_21E94B4((void **)&v10, "wasJustBrewed");
    CompoundTag::remove((int)v3, (const void **)&v10);
    v5 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v10 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
LABEL_22:
        j_j_j_j__ZdlPv_9(v5);
        return;
}


ItemInstance *__fastcall ItemInstance::ItemInstance(ItemInstance *this, int a2, int a3, int a4)
{
  ItemInstance *v4; // r4@1

  v4 = this;
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 15) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 200;
  *((_BYTE *)this + 32) = 1;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  ItemInstance::init(this, *(_WORD *)(a2 + 18), a3, a4);
  return v4;
}


signed int __fastcall ItemInstance::_hasComponents(ItemInstance *this)
{
  signed int result; // r0@2

  if ( *((_DWORD *)this + 16) )
    result = 1;
  else
    result = *((_DWORD *)this + 12) != 0;
  return result;
}


int *__fastcall ItemInstance::useAsFuel(ItemInstance *this)
{
  ItemInstance *v1; // r4@1
  int v2; // r0@1
  int *result; // r0@10
  unsigned int v4; // r1@11
  unsigned __int8 v5; // r5@11
  unsigned int v6; // r0@12
  unsigned int v7; // r1@12
  bool v8; // zf@16
  int v9; // r0@21
  int v10; // [sp+0h] [bp-58h]@4
  int v11; // [sp+4h] [bp-54h]@4
  int v12; // [sp+8h] [bp-50h]@4
  __int16 v13; // [sp+Ch] [bp-4Ch]@4
  char v14; // [sp+Eh] [bp-4Ah]@4
  char v15; // [sp+Fh] [bp-49h]@4
  int v16; // [sp+10h] [bp-48h]@4
  int v17; // [sp+14h] [bp-44h]@4
  int v18; // [sp+18h] [bp-40h]@4
  int v19; // [sp+1Ch] [bp-3Ch]@4
  char v20; // [sp+20h] [bp-38h]@4
  void *v21; // [sp+24h] [bp-34h]@4
  int v22; // [sp+28h] [bp-30h]@4
  int v23; // [sp+2Ch] [bp-2Ch]@4
  void *ptr; // [sp+34h] [bp-24h]@4
  int v25; // [sp+38h] [bp-20h]@4
  int v26; // [sp+3Ch] [bp-1Ch]@4

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( *((_BYTE *)v1 + 14) != 1 || v2 != Item::mBucket || *((_WORD *)v1 + 6) != *(_BYTE *)(Block::mFlowingLava + 4) )
  {
    v4 = *((_WORD *)v1 + 7);
    v5 = v4 - 1;
    if ( v2 )
    {
      v6 = (*(int (**)(void))(*(_DWORD *)v2 + 212))();
      v7 = *((_BYTE *)v1 + 15);
    }
    else
      v7 = v4 >> 8;
      v6 = 255;
    if ( v5 > v6 )
      v5 = v6;
    v8 = v7 == 0;
    *((_BYTE *)v1 + 14) = v5;
    if ( v7 )
      v8 = v5 == 0;
    if ( v8 || (result = *(int **)v1) == 0 )
      *((_BYTE *)v1 + 14) = 0;
      *((_WORD *)v1 + 6) = 0;
      *(_DWORD *)v1 = 0;
      *((_DWORD *)v1 + 1) = 0;
      v9 = *((_DWORD *)v1 + 2);
      *((_DWORD *)v1 + 2) = 0;
      if ( v9 )
        (*(void (**)(void))(*(_DWORD *)v9 + 4))();
      *((_DWORD *)v1 + 10) = *((_DWORD *)v1 + 9);
      *((_DWORD *)v1 + 14) = *((_DWORD *)v1 + 13);
      result = j_j_j__ZN12ItemInstance20_updateCompareHashesEv(v1);
  }
  else
    v14 = 0;
    v13 = 0;
    v12 = 0;
    v10 = 0;
    v11 = 0;
    v15 = 1;
    v16 = 0;
    v17 = 0;
    v19 = 0;
    v18 = 200;
    v20 = 1;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    ptr = 0;
    v25 = 0;
    v26 = 0;
    ItemInstance::init((ItemInstance *)&v10, *(_WORD *)(v2 + 18), 1, 0);
    ItemInstance::operator=((int)v1, (int)&v10);
    if ( ptr )
      operator delete(ptr);
    if ( v21 )
      operator delete(v21);
    if ( v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    result = 0;
  return result;
}


_BOOL4 __fastcall ItemInstance::isEquivalentArmor(ItemInstance *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r4@1
  ItemInstance *v3; // r5@1
  signed int v4; // r0@3
  int v5; // r0@5
  signed int v6; // r1@10
  int v7; // r1@12

  v2 = a2;
  v3 = this;
  if ( *((_BYTE *)a2 + 15) )
  {
    if ( *(_DWORD *)a2 )
    {
      v4 = *(_WORD *)(*(_DWORD *)a2 + 18);
    }
    else
      v5 = *((_DWORD *)a2 + 1);
      if ( v5 )
        v4 = *(_BYTE *)(v5 + 4);
      else
        v4 = 0;
  }
  else
    v4 = -1;
  if ( *((_BYTE *)v3 + 15) )
    if ( *(_DWORD *)v3 )
      v6 = *(_WORD *)(*(_DWORD *)v3 + 18);
      v7 = *((_DWORD *)v3 + 1);
      if ( v7 )
        v6 = *(_BYTE *)(v7 + 4);
        v6 = 0;
    v6 = -1;
  return v4 == v6
      && *((_DWORD *)v2 + 2) == *((_DWORD *)v3 + 2)
      && (*(_DWORD *)v2 && (*(int (**)(void))(**(_DWORD **)v2 + 80))() > 0
       || *(_DWORD *)v3 && (*(int (**)(void))(**(_DWORD **)v3 + 80))() > 0
       || *((_WORD *)v2 + 6) == *((_WORD *)v3 + 6));
}


                if ( ItemInstance::isNull((ItemInstance *)v15) )
{
                  v16 = 0;
                }
                else if ( *(_BYTE *)(v15 + 14) )
                {
                  if ( ItemInstance::isEnchanted((ItemInstance *)v15) )
                  {
                    v16 = 0;
                  }
                  else
                    v17 = ItemInstance::getEnchantValue((ItemInstance *)v15);
                    if ( v17 > 0 )
                      v16 = 1;
                else
              }
              else
              {
                v16 = 0;
            }
            else
            {
              v16 = 0;
            EnchantingContainerManagerModel::setShouldBookBeOpen(v4, v16);
            EnchantingContainerManagerModel::recalculateOptions(v4);
            v18 = ContainerManagerModel::getPlayer(v4);
            v39 = 99999;
            v40 = -15;
            v42 = v38;
            v41 = v37;
            v43 = 0;
            v44 = v7;
            ItemInstance::ItemInstance((ItemInstance *)&v45, (int)&ItemInstance::EMPTY_ITEM);
            ItemInstance::ItemInstance((ItemInstance *)&v49, v5);
            InventoryTransactionManager::addAction(v18 + 5152, (int)&v39);
            if ( ptr )
              operator delete(ptr);
            if ( v51 )
              operator delete(v51);
            if ( v50 )
              (*(void (**)(void))(*(_DWORD *)v50 + 4))();
            v50 = 0;
            if ( v48 )
              operator delete(v48);
            if ( v47 )
              operator delete(v47);
            if ( v46 )
              (*(void (**)(void))(*(_DWORD *)v46 + 4))();
            v46 = 0;
            v19 = ContainerManagerModel::getPlayer(v4);
            v23 = 99999;
            v24 = -15;
            v26 = v22;
            v25 = v21;
            v27 = 0;
            v28 = v7;
            ItemInstance::ItemInstance((ItemInstance *)&v29, v6);
            ItemInstance::ItemInstance((ItemInstance *)&v33, (int)&ItemInstance::EMPTY_ITEM);
            InventoryTransactionManager::addAction(v19 + 5152, (int)&v23);
            if ( v36 )
              operator delete(v36);
            if ( v35 )
              operator delete(v35);
            if ( v34 )
              (*(void (**)(void))(*(_DWORD *)v34 + 4))();
            v34 = 0;
            if ( v32 )
              operator delete(v32);
            if ( v31 )
              operator delete(v31);
            if ( v30 )
              (*(void (**)(void))(*(_DWORD *)v30 + 4))();
            v30 = 0;
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v11);
            while ( __strex(result - 1, v11) );
          else
            result = (*v11)--;
          if ( result == 1 )
            v20 = (unsigned int *)(v9 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v20);
              while ( __strex(result - 1, v20) );
              result = (*v20)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
          return result;
        }
      }
      else
      {
        __clrex();
        v10 = v12;
    }
  }
  return result;
}


int __fastcall ItemInstance::getUseAnimation(ItemInstance *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *(_DWORD *)this;
  if ( v1 )
    result = *(_BYTE *)(v1 + 45);
  else
    result = 0;
  return result;
}


int *__fastcall ItemInstance::getDescriptionId(ItemInstance *this, int a2)
{
  int v2; // r2@1
  int v3; // r1@1
  int v4; // r2@2
  int *result; // r0@2

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v4 = *(_BYTE *)(v2 + 12);
    result = (int *)(*(int (__fastcall **)(ItemInstance *))(*(_DWORD *)v3 + 380))(this);
  }
  else if ( *(_DWORD *)v2 )
    result = (int *)(*(int (__fastcall **)(ItemInstance *))(**(_DWORD **)v2 + 192))(this);
  else
    result = sub_21E8AF4((int *)this, (int *)&Util::EMPTY_STRING);
  return result;
}


int __fastcall ItemInstance::startCoolDown(int result, Player *a2, int a3)
{
  bool v3; // zf@1

  v3 = a2 == 0;
  if ( a2 )
  {
    a3 = *(_DWORD *)result;
    v3 = *(_DWORD *)result == 0;
  }
  if ( !v3 )
    result = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a2 + 1504))(a2, a3);
  return result;
}


    if ( v6 || ItemInstance::isNull(v5) || !*(_BYTE *)(v3 + 30) )
{
      v7 = (ItemInstance *)*(_BYTE *)(v3 + 103);
      v8 = v7 == 0;
      if ( *(_BYTE *)(v3 + 103) )
      {
        v7 = (ItemInstance *)(v3 + 88);
        v8 = *(_DWORD *)(v3 + 88) == 0;
      }
      if ( !v8 && !ItemInstance::isNull(v7) && *(_BYTE *)(v3 + 102) )
        return 1;
    }
    v4 = *(_DWORD *)(v3 + 12);
  }
  if ( v4 != 1 )
    return 0;
  v9 = (ItemInstance *)*(_BYTE *)(v3 + 31);
  v10 = v9 == 0;
  if ( *(_BYTE *)(v3 + 31) )
  {
    v9 = (ItemInstance *)(v3 + 16);
    v10 = *(_DWORD *)(v3 + 16) == 0;
  if ( v10 || ItemInstance::isNull(v9) || !*(_BYTE *)(v3 + 30) )
  v11 = (ItemInstance *)*(_BYTE *)(v3 + 103);
  v12 = v11 == 0;
  if ( *(_BYTE *)(v3 + 103) )
    v11 = (ItemInstance *)(v3 + 88);
    v12 = *(_DWORD *)(v3 + 88) == 0;
  if ( !v12 && !ItemInstance::isNull(v11) && *(_BYTE *)(v3 + 102) )
  return 1;
}


int __fastcall ItemInstance::getPickupTime(int result, int a2)
{
  *(_QWORD *)result = *(_QWORD *)(a2 + 16);
  return result;
}


    && ItemInstance::isLiquidClipItem((ItemInstance *)&v46)
{
  {
    v9 = (unsigned int)v37 >> 8;
    v10 = *(_DWORD *)v1[1];
    v11 = v39;
    v12 = v40;
    v13 = v10 + 52;
    *(_DWORD *)v13 = v38;
    *(_DWORD *)(v13 + 4) = v11;
    *(_DWORD *)(v13 + 8) = v12;
    *(_BYTE *)(v10 + 64) = v9;
    Vec3::Vec3((int)&v30, (int)&v38);
    __asm
    {
      VLDR            S0, [SP,#0xD0+var_B8]
      VLDR            S6, [SP,#0xD0+var_78]
      VLDR            S2, [SP,#0xD0+var_B4]
      VLDR            S8, [SP,#0xD0+var_74]
      VSUB.F32        S0, S6, S0
      VLDR            S4, [SP,#0xD0+var_B0]
      VLDR            S10, [SP,#0xD0+var_70]
      VSUB.F32        S2, S8, S2
      VSUB.F32        S4, S10, S4
      VSTR            S0, [R6,#0x9C]
      VSTR            S2, [R6,#0xA0]
      VSTR            S4, [R6,#0xA4]
    }
    v17 = (*(int (**)(void))(**(_DWORD **)(v2 + 4) + 52))();
    *(_DWORD *)(v10 + 144) = *(_DWORD *)v17;
    *(_DWORD *)(v10 + 148) = *(_DWORD *)(v17 + 4);
    *(_DWORD *)(v10 + 152) = *(_DWORD *)(v17 + 8);
    *(_DWORD *)(v10 + 48) = (SHIBYTE(v37) & 0x80u) >> 7;
    *(_BYTE *)v1[2] = (*(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v2 + 52))(v2, &v46, &v38);
  }
  if ( !*(_BYTE *)v1[2] )
    v18 = v1[3];
    v19 = *(_DWORD *)v1[1];
    v20 = *(_QWORD *)v18;
    v21 = *(_DWORD *)(v18 + 8);
    *(_QWORD *)(v19 + 52) = v20;
    *(_DWORD *)(v19 + 60) = v21;
    *(_BYTE *)(v19 + 64) = *((_BYTE *)v1 + 16);
    Vec3::Vec3((int)&v27, v1[3]);
      VLDR            S0, [SP,#0xD0+var_C4]
      VLDR            S6, [SP,#0xD0+var_98]
      VLDR            S2, [SP,#0xD0+var_C0]
      VLDR            S8, [SP,#0xD0+var_94]
      VLDR            S4, [SP,#0xD0+var_BC]
      VLDR            S10, [SP,#0xD0+var_90]
    v22 = (*(int (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(v2 + 4) + 52))(
            *(_DWORD *)(v2 + 4),
            *(_DWORD *)(**(_DWORD **)(v2 + 4) + 52));
    *(_DWORD *)(v19 + 144) = *(_DWORD *)v22;
    *(_DWORD *)(v19 + 148) = *(_DWORD *)(v22 + 4);
    *(_DWORD *)(v19 + 152) = *(_DWORD *)(v22 + 8);
    *(_DWORD *)(v19 + 48) = (unsigned int)*((_BYTE *)v1 + 16) >> 7;
    v23 = (BlockSource *)Entity::getRegion(*(Entity **)(v2 + 4));
    v24 = BlockSource::getBlock(v23, (const BlockPos *)v1[3]);
    if ( (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)v24 + 80))(v24, *(_DWORD *)(*(_DWORD *)v24 + 80)) != 1
      || LeadItem::canBindPlayerMobs(*(LeadItem **)(v2 + 4), (const Entity *)v1[3], v25) != 1 )
      *(_BYTE *)v1[2] = (*(int (__fastcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 52))(
                          v2,
                          &v46,
                          v1[3],
                          *((_BYTE *)v1 + 16));
    else
      *(_BYTE *)v1[2] = 1;
  if ( *(_BYTE *)v1[2] )
    Player::setSelectedItem(*(Player **)(v2 + 4), (const ItemInstance *)&v46);
    (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(v2 + 4) + 928))(
      *(_DWORD *)(v2 + 4),
      *(_DWORD *)(**(_DWORD **)(v2 + 4) + 928));
  if ( ptr )
    operator delete(ptr);
  if ( v50 )
    operator delete(v50);
  result = v47;
  if ( v47 )
    result = (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)v47 + 4))(v47, *(_DWORD *)(*(_DWORD *)v47 + 4));
  return result;
}


signed int __fastcall ItemInstance::componentsMatch(ItemInstance *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r2@1
  int v3; // r3@1
  signed int result; // r0@1

  v2 = this;
  v3 = *((_DWORD *)this + 16);
  result = 0;
  if ( v3 == *((_DWORD *)a2 + 16) && *((_DWORD *)v2 + 12) == *((_DWORD *)a2 + 12) )
    result = 1;
  return result;
}


int __fastcall ItemInstance::getDestroySpeed(ItemInstance *this, const Block *a2)
{
  int v2; // r0@1
  int result; // r0@2

  v2 = *(_DWORD *)this;
  if ( v2 )
    result = (*(int (**)(void))(*(_DWORD *)v2 + 180))();
  else
    result = 1065353216;
  return result;
}


  if ( v3 || ItemInstance::isNull((ItemInstance *)a2) )
{
    result = 0;
  }
  else
  {
    result = *(_BYTE *)(v2 + 14);
    if ( *(_BYTE *)(v2 + 14) )
      result = 1;
  return result;
}


signed int __fastcall ItemInstance::isHorseArmorItem(ItemInstance *this)
{
  int v1; // r1@1
  signed int result; // r0@2

  v1 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    result = 1;
    if ( v1 != Item::mLeatherHorseArmor && v1 != Item::mIronHorseArmor && v1 != Item::mGoldHorseArmor )
    {
      result = 0;
      if ( v1 == Item::mDiamondHorseArmor )
        result = 1;
    }
  }
  else
    result = 0;
  return result;
}


    || ItemInstance::hasSameUserData(this, a2)
{
  {
    result = 0;
  }
  else
    if ( *((_DWORD *)v3 + 12) == *((_DWORD *)v2 + 12) && *((_BYTE *)v3 + 14) == *((_BYTE *)v2 + 14) )
      result = 1;
  return result;
}


int __fastcall ItemInstance::getNetworkUserData(int result, int a2)
{
  int v2; // r4@1
  void *v3; // r10@2
  CompoundTag *v4; // r0@2
  char *v5; // r0@3
  int v6; // r6@3
  int i; // r8@3
  _DWORD *v8; // r4@4
  size_t v9; // r7@4
  void *v10; // r4@11
  _DWORD *v11; // [sp+0h] [bp-30h]@2
  int v12; // [sp+4h] [bp-2Ch]@8
  void *v13; // [sp+8h] [bp-28h]@11

  v2 = a2;
  if ( *(_DWORD *)(a2 + 8) )
  {
    v11 = (_DWORD *)result;
    v3 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v3);
    v4 = *(CompoundTag **)(v2 + 8);
    if ( v4 )
    {
      v5 = CompoundTag::rawView(v4);
      v6 = *((_DWORD *)v5 + 3);
      for ( i = (int)(v5 + 4); v6 != i; v6 = sub_21D4820(v6) )
      {
        v8 = *(_DWORD **)(v6 + 16);
        v9 = *(v8 - 3);
        if ( v9 != *(_DWORD *)(ItemInstance::TAG_REPAIR_COST - 12)
          || memcmp(*(const void **)(v6 + 16), (const void *)ItemInstance::TAG_REPAIR_COST, *(v8 - 3)) )
        {
          if ( v9 == *(_DWORD *)(ItemInstance::TAG_ENCHANTS - 12)
            && !memcmp(v8, (const void *)ItemInstance::TAG_ENCHANTS, v9) )
          {
            v10 = operator new(0x14u);
            ListTag::ListTag((int)v10);
            v13 = v10;
            CompoundTag::put((int)v3, (const void **)(v6 + 16), (int *)&v13);
            if ( v13 )
              (*(void (**)(void))(*(_DWORD *)v13 + 4))();
            v13 = 0;
          }
          else
            (*(void (__fastcall **)(int *))(**(_DWORD **)(v6 + 20) + 48))(&v12);
            CompoundTag::put((int)v3, (const void **)(v6 + 16), &v12);
            if ( v12 )
              (*(void (**)(void))(*(_DWORD *)v12 + 4))();
            v12 = 0;
        }
      }
    }
    result = (int)v11;
    *v11 = v3;
  }
  else
    *(_DWORD *)result = 0;
  return result;
}


          if ( ItemInstance::isNull(v21) != 1 )
{
            v22 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 908))(v3);
            if ( (*(int (**)(void))(**(_DWORD **)v22 + 88))() == 1 )
            {
              EventPacket::EventPacket((int)&v32, *v1, 69, 1);
              (*(void (**)(void))(*(_DWORD *)*v1 + 1448))();
              v32 = &off_26E9D30;
              v23 = (void *)(v35 - 12);
              if ( (int *)(v35 - 12) != &dword_28898C0 )
              {
                v26 = (unsigned int *)(v35 - 4);
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
                  j_j_j_j__ZdlPv_9(v23);
              }
              v24 = (void *)(v34 - 12);
              if ( (int *)(v34 - 12) != &dword_28898C0 )
                v28 = (unsigned int *)(v34 - 4);
                    v29 = __ldrex(v28);
                  while ( __strex(v29 - 1, v28) );
                  v29 = (*v28)--;
                if ( v29 <= 0 )
                  j_j_j_j__ZdlPv_9(v24);
              v25 = (void *)(v33 - 12);
              if ( (int *)(v33 - 12) != &dword_28898C0 )
                v30 = (unsigned int *)(v33 - 4);
                    v31 = __ldrex(v30);
                  while ( __strex(v31 - 1, v30) );
                  v31 = (*v30)--;
                if ( v31 <= 0 )
                  j_j_j_j__ZdlPv_9(v25);
            }
          }
        }
      }
    }
  }
}


signed int __fastcall ItemInstance::isEnchantingBook(ItemInstance *this)
{
  int v1; // r1@1
  bool v2; // zf@1
  int v3; // r0@5
  signed int result; // r0@6

  v1 = *((_BYTE *)this + 15);
  v2 = v1 == 0;
  if ( *((_BYTE *)this + 15) )
  {
    v1 = *(_DWORD *)this;
    v2 = *(_DWORD *)this == 0;
  }
  if ( v2 || *(_WORD *)(v1 + 18) != *(_WORD *)(Item::mEnchanted_book + 18) || (v3 = *((_DWORD *)this + 2)) == 0 )
    result = 0;
  else
    result = CompoundTag::contains(v3, (const void **)&ItemInstance::TAG_ENCHANTS, 9);
  return result;
}


int __fastcall ItemInstance::_saveComponents(ItemInstance *this, CompoundTag *a2)
{
  ItemInstance *v2; // r5@1
  CompoundTag *v3; // r4@1
  int v4; // r1@2
  int result; // r0@5
  int v6; // r5@5
  int v7; // t1@5
  int v8; // r1@6
  int v9; // [sp+0h] [bp-20h]@6
  int v10; // [sp+4h] [bp-1Ch]@6
  int v11; // [sp+8h] [bp-18h]@2
  int v12; // [sp+Ch] [bp-14h]@2

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 10) != *((_DWORD *)this + 9) )
  {
    _saveBlockList(&v11, (__int64 *)((char *)this + 36));
    v4 = v11;
    v11 = 0;
    v12 = v4;
    CompoundTag::put((int)v3, (const void **)&ItemInstance::TAG_STORE_CAN_PLACE_ON, &v12);
    if ( v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    v12 = 0;
  }
  v7 = *((_DWORD *)v2 + 13);
  v6 = (int)v2 + 52;
  result = v7;
  if ( *(_DWORD *)(v6 + 4) != v7 )
    _saveBlockList(&v9, (__int64 *)v6);
    v8 = v9;
    v9 = 0;
    v10 = v8;
    CompoundTag::put((int)v3, (const void **)&ItemInstance::TAG_STORE_CAN_DESTROY, &v10);
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    result = 0;
  return result;
}


int __fastcall ItemInstance::canDestroySpecial(ItemInstance *this, const Block *a2)
{
  int v2; // r0@1
  int result; // r0@2

  v2 = *(_DWORD *)this;
  if ( v2 )
    result = (*(int (**)(void))(*(_DWORD *)v2 + 68))();
  else
    result = 0;
  return result;
}


signed int __fastcall ItemInstance::hasComponent(int a1, const void **a2)
{
  const void *v2; // r4@1
  size_t v3; // r5@1
  signed int v4; // r6@3
  signed int result; // r0@6

  v2 = *a2;
  v3 = *((_DWORD *)*a2 - 3);
  if ( v3 == *(_DWORD *)(ItemInstance::TAG_CAN_PLACE_ON - 12)
    && !memcmp(v2, (const void *)ItemInstance::TAG_CAN_PLACE_ON, *((_DWORD *)v2 - 3)) )
  {
    result = 1;
  }
  else
    v4 = 0;
    if ( v3 == *(_DWORD *)(ItemInstance::TAG_CAN_DESTROY - 12)
      && !memcmp(v2, (const void *)ItemInstance::TAG_CAN_DESTROY, v3) )
    {
      v4 = 1;
    }
    result = v4;
  return result;
}


_DWORD *__fastcall ItemInstance::toString(ItemInstance *this, int a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  char *v4; // r7@1
  char *v5; // r7@1
  signed int v6; // r1@3
  int v7; // r0@5
  char *v8; // r7@8
  void *v9; // r0@8
  void **v10; // r0@9
  void *v11; // r0@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  int v17; // [sp+0h] [bp-D8h]@1
  void **v18; // [sp+4h] [bp-D4h]@1
  int v19; // [sp+8h] [bp-D0h]@10
  void **v20; // [sp+Ch] [bp-CCh]@1
  void **v21; // [sp+10h] [bp-C8h]@9
  int v22; // [sp+2Ch] [bp-ACh]@10
  int v23; // [sp+34h] [bp-A4h]@9
  int v24; // [sp+38h] [bp-A0h]@10

  v2 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v18, 24);
  v4 = (char *)sub_21CC43C(&v20, *(_BYTE *)(v2 + 14));
  sub_21CBF38(v4, (int)" x ", 3);
  ItemInstance::getName((ItemInstance *)&v17, v2);
  v5 = sub_21CBF38(v4, v17, *(_DWORD *)(v17 - 12));
  sub_21CBF38(v5, (int)"(", 1);
  if ( *(_BYTE *)(v2 + 15) )
  {
    if ( *(_DWORD *)v2 )
    {
      v6 = *(_WORD *)(*(_DWORD *)v2 + 18);
    }
    else
      v7 = *(_DWORD *)(v2 + 4);
      if ( v7 )
        v6 = *(_BYTE *)(v7 + 4);
      else
        v6 = 0;
  }
  else
    v6 = -1;
  v8 = (char *)sub_21CC43C(v5, v6);
  sub_21CBF38(v8, (int)")", 1);
  sub_21CBF38(v8, (int)"@", 1);
  sub_21CC43C(v8, *(_WORD *)(v2 + 12));
  v9 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21CFED8(v3, (int)&v21);
  v10 = off_26D3F84;
  v18 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v18) = off_26D3F80[0];
  v20 = v10;
  v21 = &off_27734E8;
  v11 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v23 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v21 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v22);
  v18 = (void **)off_26D3F68;
  *(void ***)((char *)&v18 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v19 = 0;
  return sub_21B6560(&v24);
}


signed int __fastcall ItemInstance::hasCustomHoverName(ItemInstance *this)
{
  ItemInstance *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  signed int result; // r0@4

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  if ( v2
    && CompoundTag::contains(v2, (const void **)&ItemInstance::TAG_DISPLAY) == 1
    && (v3 = CompoundTag::getCompound(*((_DWORD *)v1 + 2), (const void **)&ItemInstance::TAG_DISPLAY)) != 0 )
  {
    result = CompoundTag::contains(v3, (const void **)&ItemInstance::TAG_DISPLAY_NAME);
  }
  else
    result = 0;
  return result;
}


  if ( v6 || ItemInstance::isNull((ItemInstance *)v4) || !*(_BYTE *)(v4 + 14) )
{
    result = 0;
  }
  else
  {
    ItemInstance::getPickupTime((ItemInstance *)&v8, v4);
    result = v8;
  return result;
}


int *__fastcall ItemInstance::_updateCompareHashes(ItemInstance *this)
{
  ItemInstance *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED
  int *v4; // r0@2
  int *v5; // r2@2
  unsigned int v6; // r1@2
  int v7; // t1@3
  char *v8; // r5@6 OVERLAPPED
  char *v9; // r6@6 OVERLAPPED
  int *result; // r0@7
  int *v11; // r2@7
  unsigned int v12; // r1@7
  int v13; // t1@8

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 36);
  if ( v2 == v3 )
  {
    *((_DWORD *)this + 12) = 0;
  }
  else
    std::__introsort_loop<__gnu_cxx::__normal_iterator<Block const**,std::vector<Block const*,std::allocator<Block const*>>>,int,__gnu_cxx::__ops::_Iter_less_iter>(
      (int)v2,
      (int)v3,
      2 * (31 - __clz((v3 - v2) >> 2)));
    std::__final_insertion_sort<__gnu_cxx::__normal_iterator<Block const**,std::vector<Block const*,std::allocator<Block const*>>>,__gnu_cxx::__ops::_Iter_less_iter>(
      v2,
      v3);
    v5 = (int *)(*(_QWORD *)((char *)v1 + 36) >> 32);
    v4 = (int *)*(_QWORD *)((char *)v1 + 36);
    v6 = 0;
    *((_DWORD *)v1 + 12) = 0;
    if ( v4 != v5 )
    {
      do
      {
        v7 = *v4;
        ++v4;
        v6 ^= v7 + (v6 << 6) + (v6 >> 2) - 1640531527;
      }
      while ( v5 != v4 );
      *((_DWORD *)v1 + 12) = v6;
    }
  *(_QWORD *)&v8 = *(_QWORD *)((char *)v1 + 52);
  if ( v8 == v9 )
    result = 0;
    *((_DWORD *)v1 + 16) = 0;
      (int)v8,
      (int)v9,
      2 * (31 - __clz((v9 - v8) >> 2)));
      v8,
      v9);
    v11 = (int *)(*(_QWORD *)((char *)v1 + 52) >> 32);
    result = (int *)*(_QWORD *)((char *)v1 + 52);
    v12 = 0;
    if ( result != v11 )
        v13 = *result;
        ++result;
        v12 ^= v13 + (v12 << 6) + (v12 >> 2) - 1640531527;
      while ( v11 != result );
      *((_DWORD *)v1 + 16) = v12;
  return result;
}


int __fastcall ItemInstance::hurtEnemy(ItemInstance *this, Mob *a2, Mob *a3)
{
  ItemInstance *v3; // r6@1
  int result; // r0@1

  v3 = this;
  result = *(_DWORD *)this;
  if ( result )
  {
    result = Mob::getHealth(a3);
    if ( result >= 1 )
      result = (*(int (**)(void))(**(_DWORD **)v3 + 184))();
  }
  return result;
}


signed int __fastcall ItemInstance::isNull(ItemInstance *this)
{
  ItemInstance *v1; // r1@1
  signed int result; // r0@2
  bool v3; // zf@4
  int v4; // r0@8
  bool v5; // zf@8

  v1 = this;
  if ( *((_BYTE *)this + 15) )
  {
    if ( *((_BYTE *)this + 14) )
      goto LABEL_17;
    v3 = *((_WORD *)this + 6) == 0;
    if ( !*((_WORD *)this + 6) )
      v3 = *(_DWORD *)this == 0;
    if ( !v3 )
    v4 = *((_DWORD *)this + 1);
    v5 = v4 == 0;
    if ( !v4 )
      v5 = *((_DWORD *)v1 + 2) == 0;
    if ( v5 )
    {
      result = 0;
      if ( !*((_DWORD *)v1 + 16) && !*((_DWORD *)v1 + 12) )
        result = 1;
    }
    else
LABEL_17:
  }
  else
    result = 1;
  return result;
}


ItemInstance *__fastcall ItemInstance::ItemInstance(ItemInstance *this, int a2, int a3, int a4)
{
  ItemInstance *v4; // r4@1

  v4 = this;
  *((_BYTE *)this + 14) = 0;
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 15) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 200;
  *((_BYTE *)this + 32) = 1;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  ItemInstance::init(this, *(_BYTE *)(a2 + 4), a3, a4);
  return v4;
}


int __fastcall ItemInstance::getAttackDamage(ItemInstance *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *(_DWORD *)this;
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 84))();
  else
    result = 0;
  return result;
}


int __fastcall ItemInstance::getColor(int result, int *a2)
{
  int v2; // r1@1
  int v3; // r3@3
  int v4; // r12@3
  int v5; // r1@3

  v2 = *a2;
  if ( v2 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 156))(result);
  }
  else
    v3 = unk_283E634;
    v4 = unk_283E638;
    v5 = unk_283E63C;
    *(float *)result = Color::BLACK;
    *(_DWORD *)(result + 4) = v3;
    *(_DWORD *)(result + 8) = v4;
    *(_DWORD *)(result + 12) = v5;
  return result;
}


int __fastcall ItemInstance::getMaxStackSize(ItemInstance *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *(_DWORD *)this;
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 212))();
  else
    result = 255;
  return result;
}


  if ( v9 || ItemInstance::isNull(v7) || !*((_BYTE *)v7 + 14) )
{
    result = sub_119C884(v4, (const char *)&unk_257BC67);
  }
  else
  {
    v10 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v5 + 424));
    v11 = *(_BYTE *)(v5 + 516);
    result = (void **)(*(int (__fastcall **)(void **))(*(_DWORD *)v10 + 12))(v4);
  return result;
}


int __fastcall ItemInstance::serializeComponents(ItemInstance *this, IDataOutput *a2)
{
  IDataOutput *v2; // r4@1
  ItemInstance *v3; // r5@1
  __int64 v4; // r0@1
  unsigned int v5; // r6@2
  __int64 v6; // r0@4
  unsigned int v7; // r6@5

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(IDataOutput *, signed int))(*(_DWORD *)a2 + 32))(
    a2,
    (signed int)((*(_QWORD *)((char *)v3 + 36) >> 32) - *(_QWORD *)((char *)v3 + 36)) >> 2);
  v4 = *(_QWORD *)((char *)v3 + 36);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = 0;
    do
    {
      (*(void (__fastcall **)(IDataOutput *, int))(*(_DWORD *)v2 + 8))(v2, *(_DWORD *)(v4 + 4 * v5) + 12);
      v4 = *(_QWORD *)((char *)v3 + 36);
      ++v5;
    }
    while ( v5 < (HIDWORD(v4) - (signed int)v4) >> 2 );
  }
  (*(void (__fastcall **)(IDataOutput *, signed int))(*(_DWORD *)v2 + 32))(
    v2,
    (signed int)((*(_QWORD *)((char *)v3 + 52) >> 32) - *(_QWORD *)((char *)v3 + 52)) >> 2);
  v6 = *(_QWORD *)((char *)v3 + 52);
  if ( HIDWORD(v6) != (_DWORD)v6 )
    v7 = 0;
      (*(void (__fastcall **)(IDataOutput *, int))(*(_DWORD *)v2 + 8))(v2, *(_DWORD *)(v6 + 4 * v7) + 12);
      v6 = *(_QWORD *)((char *)v3 + 52);
      ++v7;
    while ( v7 < (HIDWORD(v6) - (signed int)v6) >> 2 );
  return v6;
}


signed int __fastcall ItemInstance::isEnchanted(ItemInstance *this)
{
  int v1; // r0@1
  signed int result; // r0@2

  v1 = *((_DWORD *)this + 2);
  if ( v1 )
    result = CompoundTag::contains(v1, (const void **)&ItemInstance::TAG_ENCHANTS, 9);
  else
    result = 0;
  return result;
}


  if ( ItemInstance::isNull((ItemInstance *)&v10) )
{
  else
    BannerBlockEntity::getColors((BannerBlockEntity *)v2, (const ItemInstance *)&v10);
  if ( v13 )
    operator delete(v13);
  if ( v12 )
    operator delete(v12);
  result = v11;
  if ( v11 )
    result = (*(int (**)(void))(*(_DWORD *)v11 + 4))();
  return result;
}


  if ( ItemInstance::isNull(v9) == 1 )
{
    v6 = *(_DWORD *)(v1 + 20);
    goto LABEL_12;
  }
  return j_j_j__ZN10ArmorStand9_swapItemER6Player13EquipmentSlot(v3, *(Player **)v1, 0);
}


int *__fastcall ItemInstance::set(ItemInstance *this, int a2)
{
  ItemInstance *v2; // r4@1
  unsigned __int8 v3; // r5@1
  int v4; // r0@1
  unsigned int v5; // r0@2
  bool v6; // zf@6
  int *result; // r0@9
  int v8; // r0@10

  v2 = this;
  v3 = a2;
  v4 = *(_DWORD *)this;
  if ( v4 )
    v5 = (*(int (**)(void))(*(_DWORD *)v4 + 212))();
  else
    v5 = 255;
  if ( v3 > v5 )
    v3 = v5;
  *((_BYTE *)v2 + 14) = v3;
  v6 = *((_BYTE *)v2 + 15) == 0;
  if ( *((_BYTE *)v2 + 15) )
    v6 = v3 == 0;
  if ( v6 || (result = *(int **)v2) == 0 )
  {
    *((_BYTE *)v2 + 14) = 0;
    *((_WORD *)v2 + 6) = 0;
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
    v8 = *((_DWORD *)v2 + 2);
    *((_DWORD *)v2 + 2) = 0;
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    *((_DWORD *)v2 + 10) = *((_DWORD *)v2 + 9);
    *((_DWORD *)v2 + 14) = *((_DWORD *)v2 + 13);
    result = j_j_j__ZN12ItemInstance20_updateCompareHashesEv(v2);
  }
  return result;
}


int __fastcall ItemInstance::getIdAuxEnchanted(ItemInstance *this)
{
  int v1; // r4@2
  int v2; // r0@4
  signed int v3; // r0@5
  int result; // r0@7

  if ( *(_DWORD *)this )
    v1 = *((_WORD *)this + 6) | (*(_WORD *)(*(_DWORD *)this + 18) << 16);
  else
    v1 = 0;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = CompoundTag::contains(v2, (const void **)&ItemInstance::TAG_ENCHANTS, 9);
    if ( v3 )
      v3 = 0x8000;
    result = v3 | v1;
  }
    result = v1;
  return result;
}


int __fastcall ItemInstance::getEnchantSlot(ItemInstance *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *(_DWORD *)this;
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 132))();
  else
    result = 0;
  return result;
}


void *__fastcall ItemInstance::addCustomUserData(ItemInstance *this, BlockEntity *a2, BlockSource *a3)
{
  ItemInstance *v3; // r5@1
  BlockSource *v4; // r6@1
  BlockEntity *v5; // r7@1
  void *v6; // r4@1
  int v7; // r0@1
  void *v8; // r4@3
  void *v9; // r6@3
  int v10; // r0@3
  int v11; // r0@7
  void *result; // r0@7
  void *v13; // [sp+4h] [bp-24h]@7
  void *v14; // [sp+8h] [bp-20h]@5
  int v15; // [sp+Ch] [bp-1Ch]@3
  int v16; // [sp+10h] [bp-18h]@3

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v6);
  (*(void (__fastcall **)(BlockEntity *, void *))(*(_DWORD *)v5 + 16))(v5, v6);
  (*(void (__fastcall **)(BlockEntity *, void *, BlockSource *))(*(_DWORD *)v5 + 20))(v5, v6, v4);
  v7 = *((_DWORD *)v3 + 2);
  *((_DWORD *)v3 + 2) = v6;
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  v8 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v8);
  v9 = operator new(0x14u);
  ListTag::ListTag((int)v9);
  std::make_unique<StringTag,char const(&)[7],char const(&)[8]>(&v15, "Header", "(+DATA)");
  v10 = v15;
  v15 = 0;
  v16 = v10;
  ListTag::add((int)v9, &v16);
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  v16 = 0;
  v14 = v9;
  CompoundTag::put((int)v8, (const void **)&ItemInstance::TAG_LORE, (int *)&v14);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  v14 = 0;
  v11 = *((_DWORD *)v3 + 2);
  v13 = v8;
  CompoundTag::put(v11, (const void **)&ItemInstance::TAG_DISPLAY, (int *)&v13);
  result = v13;
  if ( v13 )
    result = (void *)(*(int (**)(void))(*(_DWORD *)v13 + 4))();
  return result;
}


int __fastcall ItemInstance::setPickupTime(int result, int a2, __int64 a3)
{
  *(_QWORD *)(result + 16) = a3;
  return result;
}


        v13 = ItemInstance::getAuxValue(v5)
{
        v15 = ItemInstance::getAuxValue((ItemInstance *)((char *)v6 + 16)),
        v12 < v14)
    || v14 >= v12 && v13 < v15 )
  {
    v17 = v5;
    v6 = j__ZNSt8_Rb_treeI12ItemInstanceSt4pairIKS0_St6vectorIP6RecipeSaIS5_EEESt10_Select1stIS8_E21SortItemInstanceIdAuxSaIS8_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESI_IJEEEEESt17_Rb_tree_iteratorIS8_ESt23_Rb_tree_const_iteratorIS8_EDpOT_(
           v2,
           (int)v6,
           (int)&unk_262E439,
           (int *)&v17);
  }
  return (char *)v6 + 88;
}


  if ( v6 || ItemInstance::isNull(v4) || !*((_BYTE *)v4 + 14) )
{
    result = 0;
  }
  else
  {
    v7 = 0;
    if ( ItemInstance::isDamaged(v4) == 1 && (unsigned __int16)ItemInstance::getAuxValue(v4) != 0x7FFF )
      v7 = 1;
    result = v7;
  return result;
}


signed int __fastcall ItemInstance::matchesItem(ItemInstance *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r5@1
  ItemInstance *v3; // r4@1
  signed int result; // r0@4

  v2 = a2;
  v3 = this;
  if ( *(_DWORD *)this != *(_DWORD *)a2
    || *((_WORD *)this + 6) != *((_WORD *)a2 + 6)
    || ItemInstance::hasSameUserData(this, a2) != 1 )
  {
    result = 0;
  }
  else
    if ( *((_DWORD *)v3 + 16) == *((_DWORD *)v2 + 16) && *((_DWORD *)v3 + 12) == *((_DWORD *)v2 + 12) )
      result = 1;
  return result;
}
