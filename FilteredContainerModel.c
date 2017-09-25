

void *__fastcall FilteredContainerModel::_getItem(FilteredContainerModel *this, int a2)
{
  __int64 v2; // kr00_8@3
  void *result; // r0@4

  if ( *((_BYTE *)this + 108) )
  {
    if ( a2 < 0 )
    {
      result = &ItemInstance::EMPTY_ITEM;
    }
    else
      v2 = *(_QWORD *)((char *)this + 68);
      if ( -858993459 * ((HIDWORD(v2) - (signed int)v2) >> 4) <= a2 )
        result = &ItemInstance::EMPTY_ITEM;
      else
        result = (void *)(v2 + 80 * a2);
  }
  else
    result = (void *)(*((_DWORD *)this + 4) + 72 * a2);
  return result;
}


signed int __fastcall FilteredContainerModel::getIndexForCreativeItem(FilteredContainerModel *this, const ItemInstance *a2)
{
  FilteredContainerModel *v2; // r5@1
  ItemInstance *v3; // r4@1
  __int64 v4; // r0@2
  int v5; // r6@3
  unsigned int v6; // r7@3
  int v7; // r6@8
  const ItemInstance *v8; // r0@9

  v2 = this;
  v3 = a2;
  if ( *((_BYTE *)this + 108) )
  {
    v4 = *(_QWORD *)((char *)this + 68);
    if ( HIDWORD(v4) != (_DWORD)v4 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        if ( ItemInstance::matchesItem(v3, (const ItemInstance *)(v4 + v5)) == 1 )
          break;
        v4 = *(_QWORD *)((char *)v2 + 68);
        v5 += 80;
        ++v6;
      }
      while ( v6 < -858993459 * ((HIDWORD(v4) - (signed int)v4) >> 4) );
    }
    return -1;
  }
  if ( *((_DWORD *)this + 28) < 1 )
  v7 = 0;
  while ( 1 )
    v8 = (const ItemInstance *)(*(int (__fastcall **)(FilteredContainerModel *, int))(*(_DWORD *)v2 + 32))(v2, v7);
    if ( ItemInstance::matchesItem(v3, v8) )
      break;
    if ( ++v7 >= *((_DWORD *)v2 + 28) )
      return -1;
  return v7;
}


int __fastcall FilteredContainerModel::FilteredContainerModel(int a1, unsigned int a2, unsigned int a3, char a4, char a5, int a6)
{
  char v6; // r5@1
  unsigned int v7; // r6@1
  int v8; // r4@1
  int v9; // r5@1
  void (__fastcall *v10)(int, int, signed int); // r3@1
  __int64 v11; // kr00_8@3
  unsigned int v12; // r1@3
  __int64 v13; // r0@4
  int v14; // r8@6
  int v15; // r5@7
  void *v16; // r0@8
  void *v17; // r0@10
  int v18; // r0@12

  v6 = a4;
  v7 = a3;
  v8 = a1;
  ContainerModel::ContainerModel(a1, a2, a3, 0);
  *(_DWORD *)(v8 + 100) = 0;
  *(_DWORD *)(v8 + 84) = 0;
  *(_DWORD *)(v8 + 88) = 0;
  *(_DWORD *)(v8 + 76) = 0;
  *(_DWORD *)(v8 + 80) = 0;
  *(_DWORD *)(v8 + 68) = 0;
  *(_DWORD *)(v8 + 72) = 0;
  *(_DWORD *)v8 = &off_26ED488;
  *(_BYTE *)(v8 + 108) = v6;
  *(_BYTE *)(v8 + 109) = a5;
  *(_DWORD *)(v8 + 148) = 0;
  *(_DWORD *)(v8 + 116) = 0;
  v9 = v8 + 116;
  *(_DWORD *)(v9 + 4) = 0;
  *(_DWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 12) = 0;
  *(_DWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 20) = 0;
  *(_DWORD *)(v9 - 4) = 0;
  v10 = *(void (__fastcall **)(int, int, signed int))(a6 + 8);
  if ( v10 )
  {
    v10(v8 + 140, a6, 2);
    *(_DWORD *)(v8 + 152) = *(_DWORD *)(a6 + 12);
    *(_DWORD *)(v8 + 148) = *(_DWORD *)(a6 + 8);
  }
  ItemInstance::ItemInstance((ItemInstance *)(v8 + 160), (int)&ItemInstance::EMPTY_ITEM);
  v11 = *(_QWORD *)(v8 + 116);
  v12 = 954437177 * ((HIDWORD(v11) - (signed int)v11) >> 3);
  if ( v12 >= v7 )
    if ( v12 > v7 )
    {
      v14 = v11 + 72 * v7;
      if ( HIDWORD(v11) != v14 )
      {
        v15 = v11 + 72 * v7;
        do
        {
          v16 = *(void **)(v15 + 52);
          if ( v16 )
            operator delete(v16);
          v17 = *(void **)(v15 + 36);
          if ( v17 )
            operator delete(v17);
          v18 = *(_DWORD *)(v15 + 8);
          if ( v18 )
            (*(void (**)(void))(*(_DWORD *)v18 + 4))();
          *(_DWORD *)(v15 + 8) = 0;
          v15 += 72;
        }
        while ( HIDWORD(v11) != v15 );
      }
      *(_DWORD *)(v8 + 120) = v14;
    }
  else
    HIDWORD(v13) = v7 - v12;
    LODWORD(v13) = v8 + 116;
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_default_append(v13);
  return v8;
}


int __fastcall FilteredContainerModel::setFilteringRule(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 140;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 140);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 148);
  v10 = v13;
  *(_DWORD *)(v4 + 148) = v8;
  v14 = *(_DWORD *)(v4 + 152);
  *(_DWORD *)(v4 + 152) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall FilteredContainerModel::getContainerSize(FilteredContainerModel *this)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 108) )
    result = -858993459 * ((signed int)((*(_QWORD *)((char *)this + 68) >> 32) - *(_QWORD *)((char *)this + 68)) >> 4);
  else
    result = *((_DWORD *)this + 28);
  return result;
}


void __fastcall FilteredContainerModel::containerContentChanged(FilteredContainerModel *this, int a2)
{
  j_j_j__ZN22FilteredContainerModel17_refreshContainerEb(this, 0);
}


void __fastcall FilteredContainerModel::_refreshContainer(FilteredContainerModel *this, int a2)
{
  FilteredContainerModel::_refreshContainer(this, a2);
}


void __fastcall FilteredContainerModel::_init(FilteredContainerModel *this)
{
  j_j_j__ZN22FilteredContainerModel17_refreshContainerEb(this, 0);
}


int __fastcall FilteredContainerModel::setItem(FilteredContainerModel *this, int a2, const ItemInstance *a3)
{
  const ItemInstance *v3; // r4@1
  int v4; // r5@1
  FilteredContainerModel *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  ContainerModel::setItem(this, a2, a3);
  return j_j_j__ZN12ItemInstanceaSERKS__3(*((_DWORD *)v5 + 29) + 72 * v4, (int)v3);
}


signed int __fastcall FilteredContainerModel::isExpanableItemFiltered(FilteredContainerModel *this, int a2)
{
  FilteredContainerModel *v2; // r4@1
  int v3; // r5@3
  int v4; // r6@3
  ItemInstance *v5; // r1@3
  signed int result; // r0@3
  int v7; // r1@10

  v2 = this;
  if ( *((_BYTE *)this + 108) )
  {
    if ( *((_DWORD *)this + 37) )
    {
      v3 = *((_DWORD *)this + 17) + 80 * a2;
      v4 = (*((int (__fastcall **)(_DWORD, _DWORD))this + 38))((char *)this + 140, v3);
      v5 = std::__find_if<__gnu_cxx::__normal_iterator<ItemInstance const*,std::vector<ItemInstance,std::allocator<ItemInstance>>>,__gnu_cxx::__ops::_Iter_equals_val<ItemInstance const>>(
             *((_QWORD *)v2 + 16),
             (ItemInstance *)(*((_QWORD *)v2 + 16) >> 32),
             (ItemInstance *)v3);
      result = 0;
      if ( v4 == 2 )
        result = 1;
      if ( v5 != *((ItemInstance **)v2 + 33) && (unsigned int)(*(_DWORD *)(v3 + 72) - 1) < 2 )
        result = 0;
      return result;
    }
LABEL_13:
    sub_21E5F48();
  }
  if ( !*((_DWORD *)this + 37) )
    goto LABEL_13;
  v7 = (*((int (__fastcall **)(_DWORD, _DWORD))this + 38))((char *)this + 140, *((_DWORD *)this + 4) + 72 * a2) | 1;
  result = 0;
  if ( v7 == 3 )
    result = 1;
  return result;
}


void *__fastcall FilteredContainerModel::getItem(FilteredContainerModel *this, int a2)
{
  __int64 v2; // kr00_8@3
  void *result; // r0@4

  if ( *((_BYTE *)this + 108) )
  {
    if ( a2 < 0 )
    {
      result = &ItemInstance::EMPTY_ITEM;
    }
    else
      v2 = *(_QWORD *)((char *)this + 68);
      if ( -858993459 * ((HIDWORD(v2) - (signed int)v2) >> 4) <= a2 )
        result = &ItemInstance::EMPTY_ITEM;
      else
        result = (void *)(v2 + 80 * a2);
  }
  else
    result = (void *)(*((_DWORD *)this + 4) + 72 * a2);
  return result;
}


void __fastcall FilteredContainerModel::~FilteredContainerModel(FilteredContainerModel *this)
{
  FilteredContainerModel::~FilteredContainerModel(this);
}


void __fastcall FilteredContainerModel::containerContentChanged(FilteredContainerModel *this, int a2)
{
  FilteredContainerModel::containerContentChanged(this, a2);
}


void __fastcall FilteredContainerModel::_refreshContainer(FilteredContainerModel *this, int a2)
{
  FilteredContainerModel *v2; // r10@1
  int v3; // r4@2
  int v4; // r5@2
  int v5; // r7@3
  void *v6; // r0@4
  void *v7; // r0@6
  int v8; // r0@8
  signed int v9; // r5@11
  int v10; // r7@11
  int v11; // r8@12
  int v12; // r11@13
  bool v13; // zf@13
  signed int v14; // r8@19
  int v15; // r2@19
  signed int v16; // r9@19
  unsigned int v17; // r6@22
  signed int v18; // r5@22
  ItemInstance *v19; // r0@23
  ItemInstance *v20; // r1@23
  __int64 v21; // kr08_8@25
  int v22; // r6@26
  __int64 v23; // r0@27
  ItemInstance *v24; // r0@30
  int v25; // r1@38
  signed int v26; // r0@39
  ItemInstance *v27; // r4@44
  __int64 v28; // r0@46
  __int64 v29; // r0@48
  void *v30; // r0@60
  void *v31; // r0@62
  int v32; // r0@64
  __int64 v33; // r0@81
  ItemInstance *v34; // r9@89
  int i; // r5@89
  void *v36; // r0@90
  void *v37; // r0@92
  int v38; // r0@94
  int v39; // r9@102
  int v40; // r8@103
  int v41; // r0@104
  int v42; // r7@104
  bool v43; // zf@104
  int v44; // r4@110
  signed int v45; // r0@110
  unsigned int v46; // r0@112
  int v47; // r4@132
  ItemInstance *v48; // r7@132
  __int64 v49; // r0@134
  ItemInstance *v50; // r9@137
  int v51; // r6@137
  __int64 v52; // r0@138
  void *v53; // r0@145
  void *v54; // r0@147
  int v55; // r0@149
  __int64 v56; // kr30_8@156
  int v57; // r4@156
  int v58; // r8@157
  int v59; // r5@157
  int v60; // r7@162
  ItemInstance *v61; // r7@165
  int v62; // r6@168
  int v63; // r4@170
  ItemInstance *v64; // r8@170
  const ItemInstance *v65; // r7@172
  int v66; // r6@177
  int v67; // r5@177
  void *v68; // r0@182
  void *v69; // r0@184
  int v70; // r0@186
  __int64 v71; // r4@192
  void *v72; // r0@193
  void *v73; // r0@195
  int v74; // r0@197
  __int64 v75; // r4@203
  void *v76; // r0@204
  void *v77; // r0@206
  int v78; // r0@208
  __int64 v79; // r4@214
  void *v80; // r0@215
  void *v81; // r0@217
  int v82; // r0@219
  signed int v83; // [sp+4h] [bp-84h]@12
  unsigned __int64 *v84; // [sp+14h] [bp-74h]@2
  int v85; // [sp+18h] [bp-70h]@19
  int v86; // [sp+1Ch] [bp-6Ch]@1
  signed int v87; // [sp+20h] [bp-68h]@12
  ItemInstance *v88; // [sp+20h] [bp-68h]@156
  signed int v89; // [sp+24h] [bp-64h]@12
  ItemInstance *v90; // [sp+28h] [bp-60h]@2
  ItemInstance *v91; // [sp+2Ch] [bp-5Ch]@2
  ItemInstance *v92; // [sp+30h] [bp-58h]@2
  const ItemInstance *v93; // [sp+34h] [bp-54h]@1
  ItemInstance *v94; // [sp+38h] [bp-50h]@1
  ItemInstance *v95; // [sp+3Ch] [bp-4Ch]@1
  ItemInstance *v96; // [sp+40h] [bp-48h]@1
  ItemInstance *v97; // [sp+44h] [bp-44h]@1
  ItemInstance *v98; // [sp+48h] [bp-40h]@1
  ItemInstance *v99; // [sp+4Ch] [bp-3Ch]@1
  ItemInstance *v100; // [sp+50h] [bp-38h]@1
  ItemInstance *v101; // [sp+54h] [bp-34h]@1
  ItemInstance *v102; // [sp+58h] [bp-30h]@1
  ItemInstance *v103; // [sp+5Ch] [bp-2Ch]@1
  ItemInstance *v104; // [sp+60h] [bp-28h]@1

  v2 = this;
  v86 = a2;
  v103 = 0;
  v104 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v97 = 0;
  v98 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  if ( *((_BYTE *)this + 108) )
  {
    v90 = 0;
    v91 = 0;
    v92 = 0;
    v3 = *((_DWORD *)this + 32);
    v84 = (unsigned __int64 *)((char *)this + 128);
    v4 = *((_DWORD *)this + 33);
    if ( v4 != v3 )
    {
      v5 = *((_DWORD *)this + 32);
      do
      {
        v6 = *(void **)(v5 + 52);
        if ( v6 )
          operator delete(v6);
        v7 = *(void **)(v5 + 36);
        if ( v7 )
          operator delete(v7);
        v8 = *(_DWORD *)(v5 + 8);
        if ( v8 )
          (*(void (**)(void))(*(_DWORD *)v8 + 4))();
        *(_DWORD *)(v5 + 8) = 0;
        v5 += 72;
      }
      while ( v4 != v5 );
    }
    *((_DWORD *)v2 + 33) = v3;
    v9 = 954437177;
    v10 = *(_QWORD *)((char *)v2 + 12);
    if ( v10 >= 954437177 * ((signed int)(*((_DWORD *)v2 + 5) - (*(_QWORD *)((char *)v2 + 12) >> 32)) >> 3) )
      v87 = 3;
      v89 = 1;
    else
      v11 = (int)v2 + 140;
      v83 = -1;
        v12 = *((_DWORD *)v2 + 29) + 72 * v10;
        v13 = *(_BYTE *)(v12 + 15) == 0;
        if ( *(_BYTE *)(v12 + 15) )
          v13 = *(_DWORD *)v12 == 0;
        if ( v13 || ItemInstance::isNull((ItemInstance *)(*((_DWORD *)v2 + 29) + 72 * v10)) || !*(_BYTE *)(v12 + 14) )
        {
          if ( v94 == v95 )
          {
            std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
              (unsigned __int64 *)&v93,
              v12);
          }
          else
            v24 = ItemInstance::ItemInstance(v94, v12);
LABEL_31:
            v94 = (ItemInstance *)((char *)v24 + 72);
        }
        else
          if ( !*((_DWORD *)v2 + 37) )
            sub_21E5F48();
          v85 = (*((int (__fastcall **)(_DWORD, _DWORD))v2 + 38))(v11, v12);
          v13 = ItemInstance::matchesItem((ItemInstance *)v12, (FilteredContainerModel *)((char *)v2 + 160)) == 0;
          v14 = v9;
          v15 = Item::mCreativeGroups;
          v16 = v89;
          if ( !v13 )
            v16 = v85;
          if ( dword_2806D30 == Item::mCreativeGroups )
LABEL_25:
            v89 = v16;
            v9 = v14;
            v21 = *(_QWORD *)&v90;
            v11 = (int)v2 + 140;
            if ( v90 != v91 )
            {
              v22 = (int)v90;
              switch ( v87 )
              {
                case 0:
                  v23 = *(_QWORD *)((char *)v2 + 132);
                  if ( (_DWORD)v23 == HIDWORD(v23) )
                  {
                    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
                      v84,
                      (int)v90);
                  }
                  else
                    ItemInstance::ItemInstance((ItemInstance *)v23, (int)v90);
                    *((_DWORD *)v2 + 33) += 72;
                  std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_range_insert<__gnu_cxx::__normal_iterator<ItemInstance*,std::vector<ItemInstance,std::allocator<ItemInstance>>>>(
                    (int)&v102,
                    (int)v103,
                    v21,
                    SHIDWORD(v21));
                  v22 = v21;
                  break;
                case 1:
                  v29 = *(_QWORD *)((char *)v2 + 132);
                  if ( (_DWORD)v29 == HIDWORD(v29) )
                    ItemInstance::ItemInstance((ItemInstance *)v29, (int)v90);
                    (int)&v99,
                    (int)v100,
                case 2:
                    (int)&v96,
                    (int)v97,
                    (int)v90,
                    (int)v91);
                case 3:
                    (int)&v93,
                    (int)v94,
                default:
                  goto def_16AABDA;
              }
              do
def_16AABDA:
                v30 = *(void **)(v22 + 52);
                if ( v30 )
                  operator delete(v30);
                v31 = *(void **)(v22 + 36);
                if ( v31 )
                  operator delete(v31);
                v32 = *(_DWORD *)(v22 + 8);
                if ( v32 )
                  (*(void (**)(void))(*(_DWORD *)v32 + 4))();
                *(_DWORD *)(v22 + 8) = 0;
                v22 += 72;
              while ( HIDWORD(v21) != v22 );
              v91 = (ItemInstance *)v21;
            }
            switch ( v85 )
              case 0:
                if ( v103 == v104 )
                  std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
                    (unsigned __int64 *)&v102,
                    v12);
                else
                  v103 = (ItemInstance *)((char *)ItemInstance::ItemInstance(v103, v12) + 72);
                break;
              case 1:
                if ( v100 == v101 )
                    (unsigned __int64 *)&v99,
                  v100 = (ItemInstance *)((char *)ItemInstance::ItemInstance(v100, v12) + 72);
              case 2:
                if ( v97 == v98 )
                    (unsigned __int64 *)&v96,
                  v97 = (ItemInstance *)((char *)ItemInstance::ItemInstance(v97, v12) + 72);
              case 3:
                if ( v94 != v95 )
                {
                  v24 = ItemInstance::ItemInstance(v94, v12);
                  goto LABEL_31;
                }
                std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
                  (unsigned __int64 *)&v93,
                  v12);
              default:
            v17 = 0;
            v18 = 4;
            while ( 1 )
              v19 = std::__find_if<__gnu_cxx::__normal_iterator<ItemInstance *,std::vector<ItemInstance,std::allocator<ItemInstance>>>,__gnu_cxx::__ops::_Iter_equals_val<ItemInstance const>>(
                      *(_DWORD *)(v15 + v18 - 4),
                      *(ItemInstance **)(v15 + v18),
                      (ItemInstance *)v12);
              v15 = Item::mCreativeGroups;
              v20 = *(ItemInstance **)(Item::mCreativeGroups + v18);
              if ( v19 != v20 )
              ++v17;
              v18 += 12;
              if ( v17 >= -1431655765 * ((dword_2806D30 - Item::mCreativeGroups) >> 2) )
                goto LABEL_25;
            if ( v19 == v20 )
              v17 = -1;
            if ( v17 == v83 )
              v25 = v85;
              if ( v85 )
                v26 = v87;
                v89 = v16;
                if ( v85 != 1 )
                  v25 = v87;
                if ( v87 )
                  v26 = v25;
              else
                v26 = 0;
              v87 = v26;
              v11 = (int)v2 + 140;
              if ( v91 == v92 )
                  (unsigned __int64 *)&v90,
                v91 = (ItemInstance *)((char *)ItemInstance::ItemInstance(v91, v12) + 72);
            else
              v89 = v16;
              v27 = v90;
              if ( v90 != v91 )
                switch ( v87 )
                  case 0:
                    v28 = *(_QWORD *)((char *)v2 + 132);
                    if ( (_DWORD)v28 == HIDWORD(v28) )
                    {
                      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
                        v84,
                        (int)v90);
                    }
                    else
                      ItemInstance::ItemInstance((ItemInstance *)v28, (int)v90);
                      *((_DWORD *)v2 + 33) += 72;
                    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_range_insert<__gnu_cxx::__normal_iterator<ItemInstance*,std::vector<ItemInstance,std::allocator<ItemInstance>>>>(
                      (int)&v102,
                      (int)v103,
                      (int)v90,
                      (int)v91);
                    break;
                  case 1:
                    v33 = *(_QWORD *)((char *)v2 + 132);
                    if ( (_DWORD)v33 == HIDWORD(v33) )
                      ItemInstance::ItemInstance((ItemInstance *)v33, (int)v90);
                      (int)&v99,
                      (int)v100,
                  case 2:
                      (int)&v96,
                      (int)v97,
                  case 3:
                      (int)&v93,
                      (int)v94,
                  default:
                v34 = v91;
                v27 = v90;
                for ( i = (int)v90; v34 != (ItemInstance *)i; i += 72 )
                  v36 = *(void **)(i + 52);
                  if ( v36 )
                    operator delete(v36);
                  v37 = *(void **)(i + 36);
                  if ( v37 )
                    operator delete(v37);
                  v38 = *(_DWORD *)(i + 8);
                  if ( v38 )
                    (*(void (**)(void))(*(_DWORD *)v38 + 4))();
                  *(_DWORD *)(i + 8) = 0;
                v9 = v14;
                v91 = v27;
              if ( v27 == v92 )
                v83 = v17;
                v87 = v85;
                ItemInstance::ItemInstance(v27, v12);
                v91 = (ItemInstance *)((char *)v27 + 72);
        ++v10;
      while ( v10 < ((signed int)((*((_QWORD *)v2 + 2) >> 32) - *((_QWORD *)v2 + 2)) >> 3) * v9 );
    v48 = v91;
    v47 = (int)v90;
    if ( v90 != v91 )
      switch ( v87 )
        case 0:
          std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_range_insert<__gnu_cxx::__normal_iterator<ItemInstance*,std::vector<ItemInstance,std::allocator<ItemInstance>>>>(
            (int)&v102,
            (int)v103,
            (int)v90,
            (int)v91);
          v49 = *(_QWORD *)((char *)v2 + 132);
          if ( (_DWORD)v49 != HIDWORD(v49) )
            ItemInstance::ItemInstance((ItemInstance *)v49, v47);
            goto LABEL_140;
          std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(v84, v47);
          break;
        case 1:
            (int)&v99,
            (int)v100,
          v52 = *(_QWORD *)((char *)v2 + 132);
          if ( (_DWORD)v52 == HIDWORD(v52) )
            std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(v84, v47);
            ItemInstance::ItemInstance((ItemInstance *)v52, v47);
LABEL_140:
            *((_DWORD *)v2 + 33) += 72;
        case 2:
            (int)&v96,
            (int)v97,
        case 3:
            (int)&v93,
            (int)v94,
        default:
          goto def_16AAFC8;
def_16AAFC8:
        v53 = *(void **)(v47 + 52);
        if ( v53 )
          operator delete(v53);
        v54 = *(void **)(v47 + 36);
        if ( v54 )
          operator delete(v54);
        v55 = *(_DWORD *)(v47 + 8);
        if ( v55 )
          (*(void (**)(void))(*(_DWORD *)v55 + 4))();
        *(_DWORD *)(v47 + 8) = 0;
        v47 += 72;
      while ( v48 != (ItemInstance *)v47 );
      v47 = (int)v90;
    if ( v47 )
      operator delete((void *)v47);
    v50 = v100;
    v51 = (int)v99;
  }
  else
    v39 = *(_QWORD *)((char *)this + 12);
    if ( v39 >= 954437177 * ((signed int)(*((_DWORD *)this + 5) - (*(_QWORD *)((char *)this + 12) >> 32)) >> 3) )
      v40 = 72 * v39;
        v41 = *((_DWORD *)v2 + 29);
        v42 = v41 + v40;
        v43 = *(_BYTE *)(v41 + v40 + 15) == 0;
        if ( *(_BYTE *)(v41 + v40 + 15) )
          v43 = *(_DWORD *)(v41 + v40) == 0;
        if ( !v43 && !ItemInstance::isNull((ItemInstance *)v42) && *(_BYTE *)(v42 + 14) )
          v44 = (*((int (__fastcall **)(_DWORD, _DWORD))v2 + 38))((char *)v2 + 140, v42);
          v13 = ItemInstance::matchesItem((ItemInstance *)v42, (FilteredContainerModel *)((char *)v2 + 160)) == 0;
          v45 = v89;
            v45 = v44;
          v89 = v45;
          v46 = v44;
          if ( !*((_BYTE *)v2 + 109) )
            v46 = 1;
          if ( v44 == 3 )
            v46 = 3;
          if ( v46 < 2 )
            if ( v103 == v104 )
              std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
                (unsigned __int64 *)&v102,
                v42);
              v103 = (ItemInstance *)((char *)ItemInstance::ItemInstance(v103, v42) + 72);
          else if ( v46 == 2 )
            if ( v97 == v98 )
                (unsigned __int64 *)&v96,
              v97 = (ItemInstance *)((char *)ItemInstance::ItemInstance(v97, v42) + 72);
          else if ( v46 == 3 )
            if ( v94 == v95 )
                (unsigned __int64 *)&v93,
              v94 = (ItemInstance *)((char *)ItemInstance::ItemInstance(v94, v42) + 72);
        v40 += 72;
        ++v39;
      while ( v39 < 954437177 * ((signed int)((*((_QWORD *)v2 + 2) >> 32) - *((_QWORD *)v2 + 2)) >> 3) );
    v50 = 0;
    v51 = 0;
  v56 = *(_QWORD *)&v102;
  v13 = v103 == v102;
  v57 = (int)v96;
  v88 = v97;
  *((_DWORD *)v2 + 28) = 954437177 * ((v103 - v102) >> 3)
                       + 954437177 * (((signed int)v50 - v51) >> 3)
                       + 954437177 * ((v97 - v96) >> 3);
  if ( v13 )
    v59 = 0;
    v58 = 0;
    do
      ItemInstance::operator=(*((_DWORD *)v2 + 4) + v58, v56 + v58);
      v58 += 72;
      ++v59;
    while ( (_DWORD)v56 - HIDWORD(v56) + v58 );
  if ( (ItemInstance *)v51 != v50 )
    v60 = 72 * v59;
      ItemInstance::operator=(*((_DWORD *)v2 + 4) + v60, v51);
      v51 += 72;
      v60 += 72;
    while ( v50 != (ItemInstance *)v51 );
  if ( v89 == 3 )
    ItemInstance::operator=(*((_DWORD *)v2 + 4) + 72 * v59, (int)v2 + 160);
    v61 = v88;
    ++v59;
    ++*((_DWORD *)v2 + 28);
  if ( (ItemInstance *)v57 != v61 )
    v62 = 72 * v59;
      ItemInstance::operator=(*((_DWORD *)v2 + 4) + v62, v57);
      v57 += 72;
      v62 += 72;
    while ( v61 != (ItemInstance *)v57 );
  v64 = v94;
  v63 = (int)v93;
  if ( v93 != v94 )
    if ( v89 == 3 )
      v65 = v93;
        if ( !ItemInstance::matchesItem((FilteredContainerModel *)((char *)v2 + 160), v65) )
          ItemInstance::operator=(*((_DWORD *)v2 + 4) + 72 * v59++, (int)v65);
        v65 = (const ItemInstance *)((char *)v65 + 72);
      while ( v64 != v65 );
      v66 = (int)v93;
      v67 = 72 * v59;
        ItemInstance::operator=(*((_DWORD *)v2 + 4) + v67, v66);
        v66 += 72;
        v67 += 72;
      while ( v64 != (ItemInstance *)v66 );
  if ( *((_BYTE *)v2 + 108) )
    ExpandoContainerModel::_refreshContainer(v2, v86);
  if ( (ItemInstance *)v63 != v64 )
      v68 = *(void **)(v63 + 52);
      if ( v68 )
        operator delete(v68);
      v69 = *(void **)(v63 + 36);
      if ( v69 )
        operator delete(v69);
      v70 = *(_DWORD *)(v63 + 8);
      if ( v70 )
        (*(void (**)(void))(*(_DWORD *)v70 + 4))();
      *(_DWORD *)(v63 + 8) = 0;
      v63 += 72;
    while ( v64 != (ItemInstance *)v63 );
    v63 = (int)v93;
  if ( v63 )
    operator delete((void *)v63);
  v71 = *(_QWORD *)&v96;
  if ( v96 != v97 )
      v72 = *(void **)(v71 + 52);
      if ( v72 )
        operator delete(v72);
      v73 = *(void **)(v71 + 36);
      if ( v73 )
        operator delete(v73);
      v74 = *(_DWORD *)(v71 + 8);
      if ( v74 )
        (*(void (**)(void))(*(_DWORD *)v74 + 4))();
      *(_DWORD *)(v71 + 8) = 0;
      LODWORD(v71) = v71 + 72;
    while ( HIDWORD(v71) != (_DWORD)v71 );
    LODWORD(v71) = v96;
  if ( (_DWORD)v71 )
    operator delete((void *)v71);
  v75 = *(_QWORD *)&v99;
  if ( v99 != v100 )
      v76 = *(void **)(v75 + 52);
      if ( v76 )
        operator delete(v76);
      v77 = *(void **)(v75 + 36);
      if ( v77 )
        operator delete(v77);
      v78 = *(_DWORD *)(v75 + 8);
      if ( v78 )
        (*(void (**)(void))(*(_DWORD *)v78 + 4))();
      *(_DWORD *)(v75 + 8) = 0;
      LODWORD(v75) = v75 + 72;
    while ( HIDWORD(v75) != (_DWORD)v75 );
    LODWORD(v75) = v99;
  if ( (_DWORD)v75 )
    operator delete((void *)v75);
  v79 = *(_QWORD *)&v102;
  if ( v102 != v103 )
      v80 = *(void **)(v79 + 52);
      if ( v80 )
        operator delete(v80);
      v81 = *(void **)(v79 + 36);
      if ( v81 )
        operator delete(v81);
      v82 = *(_DWORD *)(v79 + 8);
      if ( v82 )
        (*(void (**)(void))(*(_DWORD *)v82 + 4))();
      *(_DWORD *)(v79 + 8) = 0;
      LODWORD(v79) = v79 + 72;
    while ( HIDWORD(v79) != (_DWORD)v79 );
    LODWORD(v79) = v102;
  if ( (_DWORD)v79 )
    operator delete((void *)v79);
}


int __fastcall FilteredContainerModel::_getContainerSize(FilteredContainerModel *this)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 108) )
    result = -858993459 * ((signed int)((*(_QWORD *)((char *)this + 68) >> 32) - *(_QWORD *)((char *)this + 68)) >> 4);
  else
    result = *((_DWORD *)this + 28);
  return result;
}


ExpandoContainerModel *__fastcall FilteredContainerModel::~FilteredContainerModel(FilteredContainerModel *this)
{
  FilteredContainerModel *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5
  void (*v5)(void); // r3@7
  int v6; // r5@9 OVERLAPPED
  int v7; // r6@9 OVERLAPPED
  void *v8; // r0@10
  void *v9; // r0@12
  int v10; // r0@14
  int v11; // r5@20 OVERLAPPED
  int v12; // r6@20 OVERLAPPED
  void *v13; // r0@21
  void *v14; // r0@23
  int v15; // r0@25

  v1 = this;
  *(_DWORD *)this = &off_26ED488;
  v2 = (void *)*((_DWORD *)this + 53);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 49);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 42);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 42) = 0;
  v5 = (void (*)(void))*((_DWORD *)v1 + 37);
  if ( v5 )
    v5();
  *(_QWORD *)&v6 = *((_QWORD *)v1 + 16);
  if ( v6 != v7 )
  {
    do
    {
      v8 = *(void **)(v6 + 52);
      if ( v8 )
        operator delete(v8);
      v9 = *(void **)(v6 + 36);
      if ( v9 )
        operator delete(v9);
      v10 = *(_DWORD *)(v6 + 8);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      *(_DWORD *)(v6 + 8) = 0;
      v6 += 72;
    }
    while ( v7 != v6 );
    v6 = *((_DWORD *)v1 + 32);
  }
  if ( v6 )
    operator delete((void *)v6);
  *(_QWORD *)&v11 = *(_QWORD *)((char *)v1 + 116);
  if ( v11 != v12 )
      v13 = *(void **)(v11 + 52);
      if ( v13 )
        operator delete(v13);
      v14 = *(void **)(v11 + 36);
      if ( v14 )
        operator delete(v14);
      v15 = *(_DWORD *)(v11 + 8);
      if ( v15 )
        (*(void (**)(void))(*(_DWORD *)v15 + 4))();
      *(_DWORD *)(v11 + 8) = 0;
      v11 += 72;
    while ( v12 != v11 );
    v11 = *((_DWORD *)v1 + 29);
  if ( v11 )
    operator delete((void *)v11);
  return j_j_j__ZN21ExpandoContainerModelD2Ev(v1);
}


int __fastcall FilteredContainerModel::getFilteredContainerSize(FilteredContainerModel *this)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 108) )
    result = -858993459 * ((signed int)((*(_QWORD *)((char *)this + 68) >> 32) - *(_QWORD *)((char *)this + 68)) >> 4);
  else
    result = *((_DWORD *)this + 28);
  return result;
}


int __fastcall FilteredContainerModel::setFiltering(int result, bool a2)
{
  *(_BYTE *)(result + 109) = a2;
  return result;
}


signed int __fastcall FilteredContainerModel::setLastCraftedItem(FilteredContainerModel *this, const ItemInstance *a2)
{
  char *v2; // r5@1
  const ItemInstance *v3; // r4@1
  signed int result; // r0@2

  v2 = (char *)this + 160;
  v3 = a2;
  if ( ItemInstance::matchesItem((FilteredContainerModel *)((char *)this + 160), a2) )
  {
    result = 0;
  }
  else
    ItemInstance::operator=((int)v2, (int)v3);
    result = 1;
  return result;
}


void __fastcall FilteredContainerModel::~FilteredContainerModel(FilteredContainerModel *this)
{
  ExpandoContainerModel *v1; // r0@1

  v1 = FilteredContainerModel::~FilteredContainerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}
