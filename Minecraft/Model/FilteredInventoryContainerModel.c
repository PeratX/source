

ContainerModel *__fastcall FilteredInventoryContainerModel::~FilteredInventoryContainerModel(FilteredInventoryContainerModel *this)
{
  FilteredInventoryContainerModel *v1; // r4@1
  void (*v2)(void); // r3@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26ED654;
  v2 = (void (*)(void))*((_DWORD *)this + 24);
  if ( v2 )
    v2();
  v3 = (void *)*((_DWORD *)v1 + 19);
  if ( v3 )
    operator delete(v3);
  return j_j_j__ZN14ContainerModelD2Ev(v1);
}


void __fastcall FilteredInventoryContainerModel::postInit(FilteredInventoryContainerModel *this)
{
  FilteredInventoryContainerModel::postInit(this);
}


int __fastcall FilteredInventoryContainerModel::FilteredInventoryContainerModel(int a1, unsigned int a2, unsigned int a3, int a4, int a5, int a6)
{
  int v6; // r5@1
  int v7; // r4@1
  void (__fastcall *v8)(int, int, signed int); // r3@1

  v6 = a4;
  v7 = a1;
  ContainerModel::ContainerModel(a1, a2, a3, a5);
  *(_DWORD *)v7 = &off_26ED5FC;
  *(_DWORD *)(v7 + 68) = v6;
  ContainerModel::_init((ContainerModel *)v7);
  *(_DWORD *)v7 = &off_26ED654;
  *(_DWORD *)(v7 + 96) = 0;
  *(_DWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 84) = 0;
  *(_DWORD *)(v7 + 72) = 0;
  *(_DWORD *)(v7 + 76) = 0;
  v8 = *(void (__fastcall **)(int, int, signed int))(a6 + 8);
  if ( v8 )
  {
    v8(v7 + 88, a6, 2);
    *(_DWORD *)(v7 + 100) = *(_DWORD *)(a6 + 12);
    *(_DWORD *)(v7 + 96) = *(_DWORD *)(a6 + 8);
  }
  return v7;
}


int __fastcall FilteredInventoryContainerModel::_getContainer(FilteredInventoryContainerModel *this)
{
  PlayerInventoryProxy *v1; // r0@1

  v1 = (PlayerInventoryProxy *)Player::getSupplies(*((Player **)this + 17));
  return PlayerInventoryProxy::_getInventoryContainer(v1);
}


void __fastcall FilteredInventoryContainerModel::_onItemChanged(FilteredInventoryContainerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  FilteredInventoryContainerModel::_onItemChanged(this, a2, a3, a4);
}


void __fastcall FilteredInventoryContainerModel::~FilteredInventoryContainerModel(FilteredInventoryContainerModel *this)
{
  FilteredInventoryContainerModel *v1; // r4@1
  void (*v2)(void); // r3@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26ED654;
  v2 = (void (*)(void))*((_DWORD *)this + 24);
  if ( v2 )
    v2();
  v3 = (void *)*((_DWORD *)v1 + 19);
  if ( v3 )
    operator delete(v3);
  ContainerModel::~ContainerModel(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall FilteredInventoryContainerModel::postInit(FilteredInventoryContainerModel *this)
{
  FilteredInventoryContainerModel *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 76))();
  (*(void (**)(void))(*(_DWORD *)v2 + 8))();
  j_j_j__ZN31FilteredInventoryContainerModel17_refreshContainerEv(v1);
}


void __fastcall FilteredInventoryContainerModel::_onItemChanged(FilteredInventoryContainerModel *this, int a2, const ItemInstance *a3, const ItemInstance *a4)
{
  int v4; // r5@1
  FilteredInventoryContainerModel *v5; // r6@1
  int v6; // r0@1
  int v7; // r1@1

  v4 = a2;
  v5 = this;
  ContainerModel::_onItemChanged(this, a2, a3, a4);
  v6 = (*(int (__fastcall **)(FilteredInventoryContainerModel *))(*(_DWORD *)v5 + 76))(v5);
  v7 = *(_DWORD *)(*((_DWORD *)v5 + 19) + 4 * v4);
  (*(void (**)(void))(*(_DWORD *)v6 + 32))();
  j_j_j__ZN31FilteredInventoryContainerModel17_refreshContainerEv(v5);
}


void __fastcall FilteredInventoryContainerModel::_refreshContainer(FilteredInventoryContainerModel *this)
{
  FilteredInventoryContainerModel::_refreshContainer(this);
}


void __fastcall FilteredInventoryContainerModel::~FilteredInventoryContainerModel(FilteredInventoryContainerModel *this)
{
  FilteredInventoryContainerModel::~FilteredInventoryContainerModel(this);
}


void __fastcall FilteredInventoryContainerModel::_refreshContainer(FilteredInventoryContainerModel *this)
{
  FilteredInventoryContainerModel *v1; // r4@1
  int v2; // r0@1
  int v3; // r6@1
  int v4; // r0@1
  int v5; // r5@1
  int v6; // r9@1
  int v7; // r11@2
  unsigned int v8; // r8@2
  bool v9; // zf@3
  __int64 v10; // r0@6
  __int64 v11; // r0@11
  ItemInstance *v12; // r0@14
  char *v13; // r6@25
  void *v14; // r11@25
  unsigned int v15; // r2@25
  unsigned int v16; // r1@27
  unsigned int v17; // r8@27
  signed int v18; // r2@34
  int v19; // r0@34
  int v20; // ST04_4@35
  int v21; // r1@36
  void *v22; // r0@37
  int v23; // r11@37
  int v24; // r6@42
  ItemInstance *v25; // r5@42
  signed int v26; // r4@42
  void *v27; // r0@50
  void *v28; // r0@52
  int v29; // r0@54
  int v30; // r7@65
  int v31; // r11@65
  __int64 v32; // r0@66
  void *v33; // r8@68
  char *v34; // r9@68
  unsigned int v35; // r2@68
  unsigned int v36; // r1@70
  unsigned int v37; // r10@70
  int v38; // r2@77
  int v39; // r1@77
  int v40; // ST0C_4@78
  int v41; // r1@79
  void *v42; // r0@80
  int v43; // r8@80
  unsigned __int64 v44; // [sp+8h] [bp-E0h]@25
  char v45; // [sp+10h] [bp-D8h]@13
  int v46; // [sp+18h] [bp-D0h]@20
  void *v47; // [sp+34h] [bp-B4h]@18
  void *ptr; // [sp+44h] [bp-A4h]@16
  int v49; // [sp+58h] [bp-90h]@14
  int v50; // [sp+60h] [bp-88h]@1
  int v51; // [sp+68h] [bp-80h]@47
  char v52; // [sp+6Eh] [bp-7Ah]@6
  char v53; // [sp+6Fh] [bp-79h]@3
  void *v54; // [sp+84h] [bp-64h]@45
  void *v55; // [sp+94h] [bp-54h]@43
  ItemInstance *v56; // [sp+ACh] [bp-3Ch]@1
  ItemInstance *v57; // [sp+B0h] [bp-38h]@1
  ItemInstance *v58; // [sp+B4h] [bp-34h]@1
  void *v59; // [sp+B8h] [bp-30h]@1

  v1 = this;
  *((_DWORD *)this + 20) = *((_DWORD *)this + 19);
  v2 = (*(int (**)(void))(*(_DWORD *)this + 76))();
  (*(void (__fastcall **)(void **))(*(_DWORD *)v2 + 64))(&v59);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  ItemInstance::ItemInstance((int)&v50);
  v3 = *((_DWORD *)v1 + 3);
  v4 = (*(int (__fastcall **)(FilteredInventoryContainerModel *))(*(_DWORD *)v1 + 20))(v1);
  v5 = *((_DWORD *)v1 + 3);
  v6 = v4 + v3;
  if ( v5 >= v4 + v3 )
  {
    v24 = 0;
    v25 = 0;
    *((_DWORD *)v1 + 18) = 0;
    v26 = 1;
  }
  else
    v7 = (int)v1 + 88;
    v8 = 0;
    do
    {
      ItemInstance::operator=((int)&v50, *((_DWORD *)v59 + v5));
      v9 = v53 == 0;
      if ( v53 )
        v9 = v50 == 0;
      if ( v9 )
        goto LABEL_87;
      v10 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v50);
      if ( !v52 )
        HIDWORD(v10) = 1;
      if ( v10 )
      if ( !*((_DWORD *)v1 + 24) )
        sub_21E5F48();
      if ( (*((int (__fastcall **)(_DWORD, _DWORD))v1 + 25))(v7, &v50) != 1 )
      {
LABEL_87:
        ItemIndexPair::ItemIndexPair((ItemIndexPair *)&v45, (const ItemInstance *)&v50, v5);
        if ( v57 == v58 )
        {
          std::vector<ItemIndexPair,std::allocator<ItemIndexPair>>::_M_emplace_back_aux<ItemIndexPair>(
            (unsigned __int64 *)&v56,
            (int)&v45);
        }
        else
          v12 = ItemInstance::ItemInstance(v57, (int)&v45);
          *((_DWORD *)v12 + 18) = v49;
          v57 = (ItemInstance *)((char *)v12 + 80);
        if ( ptr )
          operator delete(ptr);
        if ( v47 )
          operator delete(v47);
        if ( v46 )
          (*(void (**)(void))(*(_DWORD *)v46 + 4))();
        v46 = 0;
      }
      else
        v11 = *((_QWORD *)v1 + 10);
        if ( (_DWORD)v11 == HIDWORD(v11) )
          v44 = __PAIR__(v8, v7);
          v13 = 0;
          v14 = (void *)*((_DWORD *)v1 + 19);
          v15 = ((signed int)v11 - (signed int)v14) >> 2;
          if ( !v15 )
            v15 = 1;
          HIDWORD(v11) = v15 + (((signed int)v11 - (signed int)v14) >> 2);
          v17 = v15 + (((signed int)v11 - (signed int)v14) >> 2);
          if ( 0 != HIDWORD(v11) >> 30 )
            v17 = 0x3FFFFFFF;
          if ( v16 < v15 )
          if ( v17 )
          {
            if ( v17 >= 0x40000000 )
              sub_21E57F4();
            v13 = (char *)operator new(4 * v17);
            LODWORD(v11) = *(_QWORD *)((char *)v1 + 76) >> 32;
            v14 = (void *)*(_QWORD *)((char *)v1 + 76);
          }
          v18 = v11 - (_DWORD)v14;
          v19 = (int)&v13[v18];
          *(_DWORD *)&v13[v18] = v5;
          if ( 0 != v18 >> 2 )
            v20 = (int)&v13[v18];
            _aeabi_memmove4(v13, v14);
            v19 = v20;
          v21 = v19 + 4;
          if ( v14 )
            v22 = v14;
            v23 = v21;
            operator delete(v22);
            v21 = v23;
          *((_DWORD *)v1 + 19) = v13;
          *((_DWORD *)v1 + 20) = v21;
          *((_DWORD *)v1 + 21) = &v13[4 * v17];
          v8 = HIDWORD(v44);
          v7 = v44;
          *(_DWORD *)v11 = v5;
          *((_DWORD *)v1 + 20) = v11 + 4;
        ItemInstance::operator=(*((_DWORD *)v1 + 4) + 72 * v8++, (int)&v50);
      ++v5;
    }
    while ( v5 < v6 );
    v25 = v57;
    v24 = (int)v56;
    *((_DWORD *)v1 + 18) = v8;
    if ( (ItemInstance *)v24 == v25 )
      v26 = 1;
    else
      v30 = v24;
      v31 = 72 * v8;
      do
        ItemInstance::operator=(*((_DWORD *)v1 + 4) + v31, v30);
        v32 = *((_QWORD *)v1 + 10);
        if ( (_DWORD)v32 == HIDWORD(v32) )
          v33 = (void *)*((_DWORD *)v1 + 19);
          v34 = 0;
          v35 = ((signed int)v32 - (signed int)v33) >> 2;
          if ( !v35 )
            v35 = 1;
          HIDWORD(v32) = v35 + (((signed int)v32 - (signed int)v33) >> 2);
          v37 = v35 + (((signed int)v32 - (signed int)v33) >> 2);
          if ( 0 != HIDWORD(v32) >> 30 )
            v37 = 0x3FFFFFFF;
          if ( v36 < v35 )
          if ( v37 )
            if ( v37 >= 0x40000000 )
            v34 = (char *)operator new(4 * v37);
            LODWORD(v32) = *(_QWORD *)((char *)v1 + 76) >> 32;
            v33 = (void *)*(_QWORD *)((char *)v1 + 76);
          v38 = v32 - (_DWORD)v33;
          HIDWORD(v32) = &v34[v38];
          *(_DWORD *)&v34[v38] = *(_DWORD *)(v30 + 72);
          if ( ((signed int)v32 - (signed int)v33) >> 2 )
            v40 = (int)&v34[v38];
            _aeabi_memmove4(v34, v33);
            v39 = v40;
          v41 = v39 + 4;
          if ( v33 )
            v42 = v33;
            v43 = v41;
            operator delete(v42);
            v41 = v43;
          *((_DWORD *)v1 + 19) = v34;
          *((_DWORD *)v1 + 20) = v41;
          *((_DWORD *)v1 + 21) = &v34[4 * v37];
          *(_DWORD *)v32 = *(_DWORD *)(v30 + 72);
          *((_DWORD *)v1 + 20) = v32 + 4;
        v30 += 80;
        v31 += 72;
      while ( v25 != (ItemInstance *)v30 );
      v26 = 0;
  if ( v55 )
    operator delete(v55);
  if ( v54 )
    operator delete(v54);
  if ( v51 )
    (*(void (**)(void))(*(_DWORD *)v51 + 4))();
  if ( !v26 )
      v27 = *(void **)(v24 + 52);
      if ( v27 )
        operator delete(v27);
      v28 = *(void **)(v24 + 36);
      if ( v28 )
        operator delete(v28);
      v29 = *(_DWORD *)(v24 + 8);
      if ( v29 )
        (*(void (**)(void))(*(_DWORD *)v29 + 4))();
      *(_DWORD *)(v24 + 8) = 0;
      v24 += 80;
    while ( v25 != (ItemInstance *)v24 );
    v25 = v56;
  if ( v25 )
    operator delete((void *)v25);
  if ( v59 )
    operator delete(v59);
}
