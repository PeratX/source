

void __fastcall ClothBlockItem::buildDescriptionId(ClothBlockItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  int *v3; // r5@1
  ItemInstance *v4; // r4@1
  int *v5; // r0@1
  ClothBlock *v6; // r0@3
  int v7; // r1@3
  unsigned int v8; // r0@3
  const void **v9; // r0@3
  const void **v10; // r0@3
  char *v11; // r0@3
  void *v12; // r0@4
  void *v13; // r0@5
  unsigned int *v14; // r2@7
  signed int v15; // r1@9
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  int v20; // [sp+8h] [bp-20h]@3
  char *v21; // [sp+Ch] [bp-1Ch]@3
  int v22; // [sp+10h] [bp-18h]@1

  v3 = (int *)this;
  v4 = a3;
  v5 = sub_21E8AF4(&v22, (int *)a2 + 5);
  sub_21E91FC((const void **)v5, 0, 4u, "tile", (_BYTE *)4);
  if ( (unsigned __int16)ItemInstance::getAuxValue(v4) == 0x7FFF )
  {
    sub_21E8AF4(v3, &v22);
    sub_21E7408((const void **)v3, ".name", 5u);
  }
  else
    sub_21E8AF4(&v20, &v22);
    sub_21E7408((const void **)&v20, ".", 1u);
    v6 = (ClothBlock *)ItemInstance::getAuxValue(v4);
    v8 = ClothBlock::getBlockDataForItemAuxValue(v6, v7);
    v9 = sub_21E72F0((const void **)&v20, (const void **)&DyePowderItem::COLOR_DESCS[v8]);
    v21 = (char *)*v9;
    *v9 = &unk_28898CC;
    v10 = sub_21E7408((const void **)&v21, ".name", 5u);
    *v3 = (int)*v10;
    *v10 = &unk_28898CC;
    v11 = v21 - 12;
    if ( (int *)(v21 - 12) != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v21 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    }
    v12 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v20 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall ClothBlockItem::~ClothBlockItem(ClothBlockItem *this)
{
  ClothBlockItem::~ClothBlockItem(this);
}


void __fastcall ClothBlockItem::~ClothBlockItem(ClothBlockItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ClothBlockItem::buildDescriptionId(ClothBlockItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  ClothBlockItem::buildDescriptionId(this, a2, a3);
}


int __fastcall ClothBlockItem::getLevelDataForAuxValue(ClothBlockItem *this, int a2)
{
  return a2;
}
