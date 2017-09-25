

void __fastcall ShulkerBoxBlockItem::~ShulkerBoxBlockItem(ShulkerBoxBlockItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ShulkerBoxBlockItem::buildContainedItemList(ShulkerBoxBlockItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  ShulkerBoxBlockItem *v3; // r4@1
  ItemInstance *v4; // r6@1
  char *v5; // r5@1
  int v6; // r6@2
  signed int v7; // r6@2
  void *v8; // r0@2
  int v9; // r5@4
  ListTag *v10; // r8@4
  void *v11; // r0@4
  ItemInstance *v12; // r6@6
  ItemInstance *v13; // r4@6
  int v14; // r7@6
  signed int v15; // r9@6
  void *v16; // r5@6
  const CompoundTag *v17; // r11@10
  const void **v18; // r0@13
  const void **v19; // r0@13
  const void *v20; // r11@13
  ItemInstance *v21; // r5@13
  ItemInstance *v22; // r6@13
  _BYTE *v23; // r3@13 OVERLAPPED
  unsigned int v24; // r1@13
  unsigned int v25; // r4@13
  const void **v26; // r0@15
  char *v27; // r0@18
  void *v28; // r0@19
  void *v29; // r0@20
  char *v30; // r0@21
  void *v31; // r0@22
  unsigned int *v32; // r2@29
  signed int v33; // r1@31
  unsigned int *v34; // r2@33
  signed int v35; // r1@35
  unsigned int *v36; // r2@37
  signed int v37; // r1@39
  unsigned int *v38; // r2@41
  signed int v39; // r1@43
  unsigned int *v40; // r2@45
  signed int v41; // r1@47
  __int64 v42; // kr00_8@70
  unsigned int v43; // r1@70
  const void **v44; // r0@72
  unsigned int *v45; // r2@73
  signed int v46; // r1@75
  unsigned int *v47; // r2@81
  signed int v48; // r1@83
  const void **v49; // r0@90
  char *v50; // r0@90
  char *v51; // r0@91
  void *v52; // r0@92
  char *v53; // r0@93
  unsigned int *v54; // r2@95
  signed int v55; // r1@97
  unsigned int *v56; // r2@99
  signed int v57; // r1@101
  unsigned int *v58; // r2@103
  signed int v59; // r1@105
  unsigned int *v60; // r2@107
  signed int v61; // r1@109
  const void **v62; // [sp+8h] [bp-A8h]@6
  int v63; // [sp+Ch] [bp-A4h]@70
  char *v64; // [sp+10h] [bp-A0h]@70
  char *v65; // [sp+14h] [bp-9Ch]@90
  char *v66; // [sp+18h] [bp-98h]@90
  int v67; // [sp+1Ch] [bp-94h]@13
  int v68; // [sp+20h] [bp-90h]@6
  char *v69; // [sp+24h] [bp-8Ch]@13
  unsigned int v70; // [sp+28h] [bp-88h]@13
  char *v71; // [sp+2Ch] [bp-84h]@18
  char v72; // [sp+30h] [bp-80h]@6
  int v73; // [sp+38h] [bp-78h]@27
  unsigned __int8 v74; // [sp+3Eh] [bp-72h]@13
  void *v75; // [sp+54h] [bp-5Ch]@25
  void *ptr; // [sp+64h] [bp-4Ch]@23
  int v77; // [sp+7Ch] [bp-34h]@4
  int v78; // [sp+84h] [bp-2Ch]@2

  v3 = this;
  v4 = a3;
  *(_DWORD *)this = &unk_28898CC;
  v5 = ItemInstance::getUserData(a3);
  if ( ItemInstance::hasUserData(v4) == 1 )
  {
    v6 = *(_DWORD *)v5;
    sub_21E94B4((void **)&v78, "Items");
    v7 = CompoundTag::contains(v6, (const void **)&v78);
    v8 = (void *)(v78 - 12);
    if ( (int *)(v78 - 12) != &dword_28898C0 )
    {
      v45 = (unsigned int *)(v78 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
      }
      else
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    if ( v7 == 1 )
      v9 = *(_DWORD *)v5;
      sub_21E94B4((void **)&v77, "Items");
      v10 = (ListTag *)CompoundTag::getList(v9, (const void **)&v77);
      v11 = (void *)(v77 - 12);
      if ( (int *)(v77 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v77 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
        }
        else
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      if ( v10 )
        v12 = (ItemInstance *)&v68;
        v62 = (const void **)v3;
        v13 = (ItemInstance *)&v72;
        v14 = 0;
        v15 = 0;
        v16 = &unk_28898CC;
        while ( 1 )
          if ( v14 >= ListTag::size(v10) )
          {
            if ( v15 >= 1 )
            {
              v64 = (char *)&unk_28898CC;
              sub_21E6FCC((const void **)&v64, *(_DWORD *)(dword_2808A64 - 12) + 5);
              sub_21E7408((const void **)&v64, "\nand ", 5u);
              sub_21E72F0((const void **)&v64, (const void **)&dword_2808A64);
              Util::toString<int,(void *)0,(void *)0>((void **)&v63, v15);
              v42 = *(_QWORD *)(v64 - 12);
              v43 = *(_DWORD *)(v63 - 12) + v42;
              if ( v43 > HIDWORD(v42) && v43 <= *(_DWORD *)(v63 - 8) )
                v44 = sub_21E82D8((const void **)&v63, 0, (unsigned int)v64, (_BYTE *)v42);
              else
                v44 = sub_21E72F0((const void **)&v64, (const void **)&v63);
              v65 = (char *)*v44;
              *v44 = &unk_28898CC;
              v49 = sub_21E7408((const void **)&v65, " more...", 8u);
              v66 = (char *)*v49;
              *v49 = &unk_28898CC;
              sub_21E72F0(v62, (const void **)&v66);
              v50 = v66 - 12;
              if ( (int *)(v66 - 12) != &dword_28898C0 )
              {
                v54 = (unsigned int *)(v66 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v55 = __ldrex(v54);
                  while ( __strex(v55 - 1, v54) );
                }
                else
                  v55 = (*v54)--;
                if ( v55 <= 0 )
                  j_j_j_j__ZdlPv_9(v50);
              }
              v51 = v65 - 12;
              if ( (int *)(v65 - 12) != &dword_28898C0 )
                v56 = (unsigned int *)(v65 - 4);
                    v57 = __ldrex(v56);
                  while ( __strex(v57 - 1, v56) );
                  v57 = (*v56)--;
                if ( v57 <= 0 )
                  j_j_j_j__ZdlPv_9(v51);
              v52 = (void *)(v63 - 12);
              if ( (int *)(v63 - 12) != &dword_28898C0 )
                v58 = (unsigned int *)(v63 - 4);
                    v59 = __ldrex(v58);
                  while ( __strex(v59 - 1, v58) );
                  v59 = (*v58)--;
                if ( v59 <= 0 )
                  j_j_j_j__ZdlPv_9(v52);
              v53 = v64 - 12;
              if ( (int *)(v64 - 12) != &dword_28898C0 )
                v60 = (unsigned int *)(v64 - 4);
                    v61 = __ldrex(v60);
                  while ( __strex(v61 - 1, v60) );
                  v61 = (*v60)--;
                if ( v61 <= 0 )
                  j_j_j_j__ZdlPv_9(v53);
            }
            return;
          }
          if ( v14 > 4 )
            break;
          v17 = (const CompoundTag *)ListTag::get(v10, v14);
          if ( (*(int (**)(void))(*(_DWORD *)v17 + 24))() != 10 )
            goto LABEL_7;
          ItemInstance::ItemInstance((int)v13);
          ItemInstance::load(v13, v17);
          if ( v14 )
            sub_21E7408(v62, "\n", 1u);
          ItemInstance::getName(v12, (int)v13);
          v18 = sub_21E82D8((const void **)v12, 0, dword_2808A64, *(_BYTE **)(dword_2808A64 - 12));
          v69 = (char *)*v18;
          *v18 = v16;
          v19 = sub_21E7408((const void **)&v69, " x", 2u);
          v70 = (unsigned int)*v19;
          *v19 = v16;
          Util::toString<unsigned char,(void *)0,(void *)0>((void **)&v67, v74);
          v20 = v16;
          v21 = v12;
          v22 = v13;
          *(_QWORD *)&v23 = *(_QWORD *)(v70 - 12);
          v24 = (unsigned int)&v23[*(_DWORD *)(v67 - 12)];
          if ( v24 > v25 && v24 <= *(_DWORD *)(v67 - 8) )
            v26 = sub_21E82D8((const void **)&v67, 0, v70, v23);
            v13 = v22;
          else
            v26 = sub_21E72F0((const void **)&v70, (const void **)&v67);
          v71 = (char *)*v26;
          *v26 = v20;
          sub_21E72F0(v62, (const void **)&v71);
          v12 = v21;
          v27 = v71 - 12;
          if ( (int *)(v71 - 12) != &dword_28898C0 )
            v32 = (unsigned int *)(v71 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v33 = __ldrex(v32);
              while ( __strex(v33 - 1, v32) );
              v12 = v21;
            else
              v33 = (*v32)--;
            if ( v33 <= 0 )
              j_j_j_j__ZdlPv_9(v27);
          v16 = (void *)v20;
          v28 = (void *)(v67 - 12);
          if ( (int *)(v67 - 12) != &dword_28898C0 )
            v34 = (unsigned int *)(v67 - 4);
                v35 = __ldrex(v34);
              while ( __strex(v35 - 1, v34) );
              v16 = (void *)v20;
              v35 = (*v34)--;
            if ( v35 <= 0 )
              j_j_j_j__ZdlPv_9(v28);
          v29 = (void *)(v70 - 12);
          if ( (int *)(v70 - 12) != &dword_28898C0 )
            v36 = (unsigned int *)(v70 - 4);
                v37 = __ldrex(v36);
              while ( __strex(v37 - 1, v36) );
              v37 = (*v36)--;
            if ( v37 <= 0 )
              j_j_j_j__ZdlPv_9(v29);
          v30 = v69 - 12;
          if ( (int *)(v69 - 12) != &dword_28898C0 )
            v38 = (unsigned int *)(v69 - 4);
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
              v39 = (*v38)--;
            if ( v39 <= 0 )
              j_j_j_j__ZdlPv_9(v30);
          v31 = (void *)(v68 - 12);
          if ( (int *)(v68 - 12) != &dword_28898C0 )
            v40 = (unsigned int *)(v68 - 4);
                v41 = __ldrex(v40);
              while ( __strex(v41 - 1, v40) );
              v41 = (*v40)--;
            if ( v41 <= 0 )
              j_j_j_j__ZdlPv_9(v31);
          if ( ptr )
            operator delete(ptr);
          if ( v75 )
            operator delete(v75);
          if ( v73 )
            (*(void (**)(void))(*(_DWORD *)v73 + 4))();
            ++v14;
LABEL_7:
        ++v15;
        goto LABEL_7;
  }
}


int __fastcall ShulkerBoxBlockItem::getLevelDataForAuxValue(ShulkerBoxBlockItem *this, int a2)
{
  if ( a2 > 15 )
    a2 = 0;
  return a2;
}


void __fastcall ShulkerBoxBlockItem::~ShulkerBoxBlockItem(ShulkerBoxBlockItem *this)
{
  ShulkerBoxBlockItem::~ShulkerBoxBlockItem(this);
}


void __fastcall ShulkerBoxBlockItem::buildEffectDescriptionName(ShulkerBoxBlockItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  const void **v3; // r5@1
  int v4; // r1@1
  void *v5; // r0@2
  void *v6; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  int v11; // [sp+0h] [bp-30h]@2
  int v12; // [sp+4h] [bp-2Ch]@1

  v3 = (const void **)this;
  *(_DWORD *)this = &unk_28898CC;
  ShulkerBoxBlockItem::buildContainedItemList((ShulkerBoxBlockItem *)&v12, a2, a3);
  v4 = v12;
  if ( *(_DWORD *)(v12 - 12) )
  {
    sub_21E8AF4(&v11, &v12);
    sub_21E72F0((const void **)&v11, (const void **)&unk_2808A94);
    sub_21E72F0(v3, (const void **)&v11);
    v5 = (void *)(v11 - 12);
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
        j_j_j_j__ZdlPv_9(v5);
    }
    v4 = v12;
  }
  v6 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v4 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


void __fastcall ShulkerBoxBlockItem::buildEffectDescriptionName(ShulkerBoxBlockItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  ShulkerBoxBlockItem::buildEffectDescriptionName(this, a2, a3);
}


void __fastcall ShulkerBoxBlockItem::buildDescriptionId(ShulkerBoxBlockItem *this, const ItemInstance *a2, int a3)
{
  void **v3; // r4@1
  ItemInstance *v4; // r5@1
  int v5; // r0@3
  int v6; // r6@3
  int v7; // r0@3
  const void **v8; // r0@3
  char *v9; // r0@3
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  char *v12; // [sp+4h] [bp-24h]@3

  v3 = (void **)this;
  v4 = (ItemInstance *)a3;
  if ( Block::isType(*(Block **)(a3 + 4), (const Block *)Block::mUndyedShulkerBox) == 1 )
  {
    sub_21E94B4(v3, "tile.shulkerBox.name");
  }
  else
    v5 = ItemInstance::getAuxValue(v4);
    v6 = 15 - v5;
    v7 = DyePowderItem::COLOR_DESCS_MIXED_CASE[15 - v5];
    v12 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v12, *(_DWORD *)(v7 - 12) + 15);
    sub_21E7408((const void **)&v12, "tile.shulkerBox", 0xFu);
    sub_21E72F0((const void **)&v12, (const void **)&DyePowderItem::COLOR_DESCS_MIXED_CASE[v6]);
    v8 = sub_21E7408((const void **)&v12, ".name", 5u);
    *v3 = (void *)*v8;
    *v8 = &unk_28898CC;
    v9 = v12 - 12;
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v12 - 4);
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
}


void __fastcall ShulkerBoxBlockItem::buildDescriptionId(ShulkerBoxBlockItem *this, const ItemInstance *a2, int a3)
{
  ShulkerBoxBlockItem::buildDescriptionId(this, a2, a3);
}


void __fastcall ShulkerBoxBlockItem::buildContainedItemList(ShulkerBoxBlockItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  ShulkerBoxBlockItem::buildContainedItemList(this, a2, a3);
}


_DWORD *__fastcall ShulkerBoxBlockItem::ShulkerBoxBlockItem(int a1, const void **a2, __int16 a3, int a4)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)AuxDataBlockItem::AuxDataBlockItem(a1, a2, a3, a4);
  *result = &off_27035B0;
  return result;
}
