

void __fastcall ExpandoContainerModel::_refreshContainer(ExpandoContainerModel *this, int a2)
{
  ExpandoContainerModel::_refreshContainer(this, a2);
}


void __fastcall ExpandoContainerModel::containerContentChanged(ExpandoContainerModel *this, int a2)
{
  j_j_j__ZN21ExpandoContainerModel17_refreshContainerEb(this, 0);
}


char *__fastcall ExpandoContainerModel::getItems(ExpandoContainerModel *this)
{
  return (char *)this + 16;
}


ExpandoContainerModel *__fastcall ExpandoContainerModel::~ExpandoContainerModel(ExpandoContainerModel *this)
{
  ExpandoContainerModel *v1; // r9@1
  void (*v2)(void); // r3@1
  int v3; // r5@3
  int v4; // r7@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int v7; // r1@13
  void *v8; // r0@13
  void *v9; // r0@14
  void *v10; // r0@16
  int v11; // r0@18
  int v12; // r5@24
  int v13; // r7@24
  unsigned int *v14; // r2@26
  signed int v15; // r1@28
  int v16; // r1@34
  void *v17; // r0@34
  void *v18; // r0@35
  void *v19; // r0@37
  int v20; // r0@39

  v1 = this;
  *(_DWORD *)this = &off_26ED4E0;
  v2 = (void (*)(void))*((_DWORD *)this + 25);
  if ( v2 )
    v2();
  v4 = *((_QWORD *)v1 + 10) >> 32;
  v3 = *((_QWORD *)v1 + 10);
  if ( v3 != v4 )
  {
    do
    {
      v7 = *(_DWORD *)(v3 + 76);
      v8 = (void *)(v7 - 12);
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
          j_j_j_j__ZdlPv_9(v8);
      }
      v9 = *(void **)(v3 + 52);
      if ( v9 )
        operator delete(v9);
      v10 = *(void **)(v3 + 36);
      if ( v10 )
        operator delete(v10);
      v11 = *(_DWORD *)(v3 + 8);
      if ( v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      *(_DWORD *)(v3 + 8) = 0;
      v3 += 80;
    }
    while ( v3 != v4 );
    v3 = *((_DWORD *)v1 + 20);
  }
  if ( v3 )
    operator delete((void *)v3);
  v13 = *(_QWORD *)((char *)v1 + 68) >> 32;
  v12 = *(_QWORD *)((char *)v1 + 68);
  if ( v12 != v13 )
      v16 = *(_DWORD *)(v12 + 76);
      v17 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v16 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v18 = *(void **)(v12 + 52);
      if ( v18 )
        operator delete(v18);
      v19 = *(void **)(v12 + 36);
      if ( v19 )
        operator delete(v19);
      v20 = *(_DWORD *)(v12 + 8);
      if ( v20 )
        (*(void (**)(void))(*(_DWORD *)v20 + 4))();
      *(_DWORD *)(v12 + 8) = 0;
      v12 += 80;
    while ( v12 != v13 );
    v12 = *((_DWORD *)v1 + 17);
  if ( v12 )
    operator delete((void *)v12);
  ContainerModel::~ContainerModel(v1);
  return v1;
}


void __fastcall ExpandoContainerModel::containerContentChanged(ExpandoContainerModel *this, int a2)
{
  ExpandoContainerModel::containerContentChanged(this, a2);
}


signed int __fastcall ExpandoContainerModel::getIndexForCreativeItem(ExpandoContainerModel *this, const ItemInstance *a2)
{
  ExpandoContainerModel *v2; // r5@1
  ItemInstance *v3; // r9@1
  int v4; // r7@1
  int v5; // r6@2
  signed int v6; // r4@2

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 68);
  if ( *(_QWORD *)((char *)this + 68) >> 32 == v4 )
  {
LABEL_5:
    v6 = -1;
  }
  else
    v5 = 0;
    v6 = 0;
    while ( ItemInstance::matchesItem(v3, (const ItemInstance *)(v4 + v5)) != 1 )
    {
      v4 = *(_QWORD *)((char *)v2 + 68);
      v5 += 80;
      if ( ++v6 >= (unsigned int)(-858993459 * ((signed int)((*(_QWORD *)((char *)v2 + 68) >> 32) - v4) >> 4)) )
        goto LABEL_5;
    }
    if ( *(_DWORD *)(v4 + 80 * v6 + 72) == 1
      && v6 + 1 < (unsigned int)(-858993459
                               * ((signed int)((*(_QWORD *)((char *)v2 + 68) >> 32) - *(_QWORD *)((char *)v2 + 68)) >> 4)) )
      ++v6;
  return v6;
}


void __fastcall ExpandoContainerModel::_refreshContainer(ExpandoContainerModel *this, int a2)
{
  ExpandoContainerModel *v2; // r9@1
  char *v3; // r6@1
  char *v4; // r11@2
  ItemInstance *v5; // r5@2
  ItemInstance *v6; // r10@2
  unsigned int v7; // r4@4
  signed int v8; // r7@4
  int v9; // r1@6
  ItemInstance *v10; // r4@12
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  int v13; // r1@21
  void *v14; // r0@21
  void *v15; // r0@22
  void *v16; // r0@24
  int v17; // r0@26
  int v18; // r2@29
  signed int v19; // r8@30
  int v20; // r5@30
  unsigned __int64 *v21; // r3@30
  int *v22; // r6@30
  __int64 i; // r0@30
  unsigned __int64 *v24; // r1@33
  int v25; // r0@33
  int v26; // r3@33
  int *v27; // r11@33
  int v28; // r10@34
  unsigned __int64 *v29; // r5@34
  unsigned __int64 *v30; // r10@35
  ItemInstance *v31; // r11@35
  ItemInstance *v32; // r0@37
  unsigned __int64 *v33; // r3@37
  int v34; // r1@37
  int v35; // r6@38
  signed int v36; // r7@38
  ItemInstance *v37; // r0@39
  ItemInstance *v38; // r0@42
  int v39; // r1@42
  int v40; // r4@43
  int j; // r6@43
  void *v42; // r0@44
  void *v43; // r0@46
  int v44; // r0@48
  int v45; // r10@51
  void *v46; // r0@53
  void *v47; // r0@62
  ItemInstance *v48; // r6@70
  ItemInstance *v49; // r7@70
  signed int v50; // r0@70
  ItemInstance *v51; // r0@73
  int v52; // r1@73
  void *v53; // r0@75
  ItemInstance *v54; // r0@83
  unsigned __int64 *v55; // r4@83
  int v56; // r1@83
  void *v57; // r0@85
  unsigned int v58; // r10@93
  unsigned int *v59; // r2@95
  signed int v60; // r1@97
  unsigned int *v61; // r2@99
  signed int v62; // r1@101
  unsigned int *v63; // r2@111
  signed int v64; // r1@113
  unsigned int *v65; // r2@115
  signed int v66; // r1@117
  char *v67; // r0@127
  __int64 v68; // r4@128
  void *v69; // r0@129
  void *v70; // r0@131
  int v71; // r0@133
  __int64 v72; // r4@139
  void *v73; // r0@140
  void *v74; // r0@142
  int v75; // r0@144
  unsigned int *v76; // r2@151
  signed int v77; // r1@153
  unsigned __int64 *v78; // [sp+28h] [bp-190h]@33
  ItemInstance **v79; // [sp+2Ch] [bp-18Ch]@2
  char v80; // [sp+30h] [bp-188h]@36
  int v81; // [sp+38h] [bp-180h]@67
  void *v82; // [sp+54h] [bp-164h]@65
  void *v83; // [sp+64h] [bp-154h]@63
  int v84; // [sp+78h] [bp-140h]@36
  int *v85; // [sp+7Ch] [bp-13Ch]@36
  char v86; // [sp+80h] [bp-138h]@41
  int v87; // [sp+88h] [bp-130h]@58
  void *v88; // [sp+A4h] [bp-114h]@56
  void *ptr; // [sp+B4h] [bp-104h]@54
  int v90; // [sp+C8h] [bp-F0h]@41
  int *v91; // [sp+CCh] [bp-ECh]@41
  char v92; // [sp+D0h] [bp-E8h]@82
  int v93; // [sp+D8h] [bp-E0h]@90
  void *v94; // [sp+F4h] [bp-C4h]@88
  void *v95; // [sp+104h] [bp-B4h]@86
  int v96; // [sp+118h] [bp-A0h]@82
  int *v97; // [sp+11Ch] [bp-9Ch]@82
  char v98; // [sp+120h] [bp-98h]@70
  int v99; // [sp+128h] [bp-90h]@80
  void *v100; // [sp+144h] [bp-74h]@78
  void *v101; // [sp+154h] [bp-64h]@76
  int v102; // [sp+168h] [bp-50h]@72
  int *v103; // [sp+16Ch] [bp-4Ch]@72
  char *v104; // [sp+174h] [bp-44h]@29
  ItemInstance *v105; // [sp+178h] [bp-40h]@29
  ItemInstance *v106; // [sp+17Ch] [bp-3Ch]@29
  int v107; // [sp+180h] [bp-38h]@29
  ItemInstance *v108; // [sp+184h] [bp-34h]@1
  ItemInstance *v109; // [sp+188h] [bp-30h]@1
  ItemInstance *v110; // [sp+18Ch] [bp-2Ch]@1

  v2 = this;
  v3 = (char *)this + 80;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  if ( a2 == 1 )
  {
    v4 = (char *)this + 80;
    v5 = (ItemInstance *)*((_DWORD *)this + 21);
    v79 = (ItemInstance **)((char *)this + 84);
    v6 = (ItemInstance *)*((_DWORD *)this + 20);
  }
  else
    if ( v5 != v6 )
    {
      v7 = 0;
      v8 = 72;
      do
      {
        if ( *(_DWORD *)((char *)v6 + v8) == 1 )
        {
          v9 = (int)v6 + v8 - 72;
          if ( v109 == v110 )
            std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
              (unsigned __int64 *)&v108,
              v9);
          else
            v109 = (ItemInstance *)((char *)ItemInstance::ItemInstance(v109, v9) + 72);
        }
        v8 += 80;
        v6 = *(ItemInstance **)v3;
        ++v7;
        v5 = *v79;
      }
      while ( v7 < -858993459 * (((signed int)*v79 - *(_DWORD *)v3) >> 4) );
    }
    v4 = v3;
  if ( v5 != v6 )
    v10 = v6;
    do
      v13 = *((_DWORD *)v10 + 19);
      v14 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v13 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        else
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v15 = (void *)*((_DWORD *)v10 + 13);
      if ( v15 )
        operator delete(v15);
      v16 = (void *)*((_DWORD *)v10 + 9);
      if ( v16 )
        operator delete(v16);
      v17 = *((_DWORD *)v10 + 2);
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
      *((_DWORD *)v10 + 2) = 0;
      v10 = (ItemInstance *)((char *)v10 + 80);
    while ( v10 != v5 );
  *v79 = v6;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v104 = (char *)&unk_28898CC;
  v18 = *((_QWORD *)v2 + 2);
  if ( *((_QWORD *)v2 + 2) >> 32 != v18 )
    v19 = -1431655765;
    v20 = 0;
    v21 = (unsigned __int64 *)&Item::mCreativeGroups;
    v22 = &dword_28898C0;
    for ( i = 0LL; ; i = *(_QWORD *)&v105 )
      if ( HIDWORD(i) == (_DWORD)i )
        v24 = v21;
        v78 = (unsigned __int64 *)v4;
        v25 = *v21 >> 32;
        v26 = *v21;
        v27 = v22;
        if ( v25 == v26 )
          v28 = v20;
          v29 = v24;
LABEL_41:
          ItemInstance::ItemInstance((ItemInstance *)&v86, v18 + 72 * v28);
          v22 = v27;
          v90 = 0;
          sub_21E8AF4((int *)&v91, (int *)&Util::EMPTY_STRING);
          v4 = (char *)v78;
          if ( *v79 == *((ItemInstance **)v2 + 22) )
          {
            std::vector<ExpandoModelElement,std::allocator<ExpandoModelElement>>::_M_emplace_back_aux<ExpandoModelElement>(
              v78,
              (int)&v86);
            v39 = (int)v91;
          }
            v38 = ItemInstance::ItemInstance(*v79, (int)&v86);
            *((_DWORD *)v38 + 18) = v90;
            *((_DWORD *)v38 + 19) = v91;
            v39 = (int)(v22 + 3);
            v91 = v22 + 3;
            *v79 = (ItemInstance *)((char *)*v79 + 80);
          v46 = (void *)(v39 - 12);
          if ( (int *)(v39 - 12) != v22 )
            v59 = (unsigned int *)(v39 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v60 = __ldrex(v59);
              while ( __strex(v60 - 1, v59) );
            }
            else
              v60 = (*v59)--;
            if ( v60 <= 0 )
              j_j_j_j__ZdlPv_9(v46);
          if ( ptr )
            operator delete(ptr);
          if ( v88 )
            operator delete(v88);
          if ( v87 )
            (*(void (**)(void))(*(_DWORD *)v87 + 4))();
          v87 = 0;
          v35 = 0;
          v36 = 4;
          while ( 1 )
            v37 = std::__find_if<__gnu_cxx::__normal_iterator<ItemInstance *,std::vector<ItemInstance,std::allocator<ItemInstance>>>,__gnu_cxx::__ops::_Iter_equals_val<ItemInstance const>>(
                    *(_DWORD *)(v26 + v36 - 4),
                    *(ItemInstance **)(v26 + v36),
                    (ItemInstance *)(v18 + 72 * v28));
            v26 = *(_DWORD *)v29;
            if ( v37 != *(ItemInstance **)(*(_DWORD *)v29 + v36) )
              break;
            v36 += 12;
            v18 = *((_DWORD *)v2 + 4);
            if ( ++v35 >= (unsigned int)(((*((_DWORD *)v29 + 1) - v26) >> 2) * v19) )
              goto LABEL_41;
          std::vector<ItemInstance,std::allocator<ItemInstance>>::operator=(
            (int)&v105,
            (unsigned __int64 *)(v26 + 12 * v35));
          EntityInteraction::setInteractText((int *)&v104, (int *)(Item::mCreativeGroupNames + 4 * v35));
          v48 = v109;
          v49 = std::__find_if<__gnu_cxx::__normal_iterator<ItemInstance *,std::vector<ItemInstance,std::allocator<ItemInstance>>>,__gnu_cxx::__ops::_Iter_equals_val<ItemInstance const>>(
                  (int)v108,
                  v109,
                  (ItemInstance *)(*((_DWORD *)v2 + 4) + 72 * v28));
          ItemInstance::ItemInstance((ItemInstance *)&v98, *((_DWORD *)v2 + 4) + 72 * v28);
          v50 = 2;
          if ( v49 != v48 )
            v50 = 1;
          v102 = v50;
          sub_21E8AF4((int *)&v103, (int *)&v104);
              (int)&v98);
            v52 = (int)v103;
            v51 = ItemInstance::ItemInstance(*v79, (int)&v98);
            *((_DWORD *)v51 + 18) = v102;
            *((_DWORD *)v51 + 19) = v103;
            v52 = (int)(v27 + 3);
            v103 = v27 + 3;
          v53 = (void *)(v52 - 12);
          if ( (int *)(v52 - 12) != v27 )
            v63 = (unsigned int *)(v52 - 4);
                v64 = __ldrex(v63);
              while ( __strex(v64 - 1, v63) );
              v64 = (*v63)--;
            if ( v64 <= 0 )
              j_j_j_j__ZdlPv_9(v53);
          if ( v101 )
            operator delete(v101);
          if ( v100 )
            operator delete(v100);
          if ( v99 )
            (*(void (**)(void))(*(_DWORD *)v99 + 4))();
          v99 = 0;
          ItemInstance::ItemInstance((ItemInstance *)&v92, *((_DWORD *)v2 + 4) + 72 * v28);
          v96 = 3;
          sub_21E8AF4((int *)&v97, (int *)&v104);
            v55 = v78;
              (int)&v92);
            v22 = v27;
            v56 = (int)v97;
            v54 = ItemInstance::ItemInstance(*v79, (int)&v92);
            *((_DWORD *)v54 + 18) = v96;
            *((_DWORD *)v54 + 19) = v97;
            v56 = (int)(v27 + 3);
            v97 = v27 + 3;
          v57 = (void *)(v56 - 12);
          if ( (int *)(v56 - 12) != v22 )
            v65 = (unsigned int *)(v56 - 4);
                v66 = __ldrex(v65);
              while ( __strex(v66 - 1, v65) );
              v66 = (*v65)--;
            if ( v66 <= 0 )
              j_j_j_j__ZdlPv_9(v57);
          if ( v95 )
            operator delete(v95);
          if ( v94 )
            operator delete(v94);
          if ( v93 )
            (*(void (**)(void))(*(_DWORD *)v93 + 4))();
          v4 = (char *)v55;
          v93 = 0;
      else
        v30 = (unsigned __int64 *)v4;
        v31 = std::__find_if<__gnu_cxx::__normal_iterator<ItemInstance *,std::vector<ItemInstance,std::allocator<ItemInstance>>>,__gnu_cxx::__ops::_Iter_equals_val<ItemInstance const>>(
                i,
                (ItemInstance *)HIDWORD(i),
                (ItemInstance *)(v18 + 72 * v20));
        if ( v31 == v106 )
          v40 = (int)v105;
          for ( j = (int)v105; v31 != (ItemInstance *)j; j += 72 )
            v42 = *(void **)(j + 52);
            if ( v42 )
              operator delete(v42);
            v43 = *(void **)(j + 36);
            if ( v43 )
              operator delete(v43);
            v44 = *(_DWORD *)(j + 8);
            if ( v44 )
              (*(void (**)(void))(*(_DWORD *)v44 + 4))();
            *(_DWORD *)(j + 8) = 0;
          v4 = (char *)v30;
          v45 = v20;
          v22 = &dword_28898C0;
          v19 = -1431655765;
          v29 = (unsigned __int64 *)&Item::mCreativeGroups;
          v28 = v45 - 1;
          v106 = (ItemInstance *)v40;
          ItemInstance::ItemInstance((ItemInstance *)&v80, *((_DWORD *)v2 + 4) + 72 * v20);
          v84 = 3;
          sub_21E8AF4((int *)&v85, (int *)&v104);
              v30,
              (int)&v80);
            v33 = (unsigned __int64 *)&Item::mCreativeGroups;
            v28 = v20;
            v34 = (int)v85;
            v32 = ItemInstance::ItemInstance(*v79, (int)&v80);
            *((_DWORD *)v32 + 18) = v84;
            *((_DWORD *)v32 + 19) = v85;
            v34 = (int)(v22 + 3);
            v85 = v22 + 3;
          v47 = (void *)(v34 - 12);
          v29 = v33;
          if ( (int *)(v34 - 12) != v22 )
            v61 = (unsigned int *)(v34 - 4);
                v62 = __ldrex(v61);
              while ( __strex(v62 - 1, v61) );
              v62 = (*v61)--;
            if ( v62 <= 0 )
              j_j_j_j__ZdlPv_9(v47);
          if ( v83 )
            operator delete(v83);
          if ( v82 )
            operator delete(v82);
          if ( v81 )
            (*(void (**)(void))(*(_DWORD *)v81 + 4))();
          v81 = 0;
      v18 = *((_QWORD *)v2 + 2);
      v58 = v28 + 1;
      if ( v58 >= 954437177 * ((signed int)((*((_QWORD *)v2 + 2) >> 32) - v18) >> 3) )
        break;
      v21 = v29;
      v20 = v58;
  ExpandoContainerModel::_generateCurrentItems(v2);
  v67 = v104 - 12;
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v104 - 4);
    if ( &pthread_create )
      __dmb();
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
    else
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
  v68 = *(_QWORD *)&v105;
  if ( v105 != v106 )
      v69 = *(void **)(v68 + 52);
      if ( v69 )
        operator delete(v69);
      v70 = *(void **)(v68 + 36);
      if ( v70 )
        operator delete(v70);
      v71 = *(_DWORD *)(v68 + 8);
      if ( v71 )
        (*(void (**)(void))(*(_DWORD *)v71 + 4))();
      *(_DWORD *)(v68 + 8) = 0;
      LODWORD(v68) = v68 + 72;
    while ( HIDWORD(v68) != (_DWORD)v68 );
    LODWORD(v68) = v105;
  if ( (_DWORD)v68 )
    operator delete((void *)v68);
  v72 = *(_QWORD *)&v108;
  if ( v108 != v109 )
      v73 = *(void **)(v72 + 52);
      if ( v73 )
        operator delete(v73);
      v74 = *(void **)(v72 + 36);
      if ( v74 )
        operator delete(v74);
      v75 = *(_DWORD *)(v72 + 8);
      if ( v75 )
        (*(void (**)(void))(*(_DWORD *)v75 + 4))();
      *(_DWORD *)(v72 + 8) = 0;
      LODWORD(v72) = v72 + 72;
    while ( HIDWORD(v72) != (_DWORD)v72 );
    LODWORD(v72) = v108;
  if ( (_DWORD)v72 )
    operator delete((void *)v72);
}


const void **__fastcall ExpandoContainerModel::getItemGroupName(ExpandoContainerModel *this, int a2)
{
  __int64 v2; // kr00_8@2
  const void **result; // r0@3

  if ( a2 < 0 )
  {
    result = &Util::EMPTY_STRING;
  }
  else
    v2 = *(_QWORD *)((char *)this + 68);
    if ( -858993459 * ((HIDWORD(v2) - (signed int)v2) >> 4) <= a2 )
      result = &Util::EMPTY_STRING;
    else
      result = (const void **)(v2 + 80 * a2 + 76);
  return result;
}


int __fastcall ExpandoContainerModel::ExpandoContainerModel(int a1, unsigned int a2, unsigned int a3, int a4)
{
  int result; // r0@1

  result = ContainerModel::ContainerModel(a1, a2, a3, a4);
  *(_DWORD *)result = &off_26ED4E0;
  *(_DWORD *)(result + 100) = 0;
  *(_DWORD *)(result + 76) = 0;
  *(_DWORD *)(result + 80) = 0;
  *(_DWORD *)(result + 84) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  return result;
}


int __fastcall ExpandoContainerModel::getItemExpandStatus(ExpandoContainerModel *this, int a2)
{
  __int64 v2; // kr00_8@2
  int result; // r0@3

  if ( a2 < 0 || (v2 = *(_QWORD *)((char *)this + 68), -858993459 * ((HIDWORD(v2) - (signed int)v2) >> 4) <= a2) )
    result = 0;
  else
    result = *(_DWORD *)(v2 + 80 * a2 + 72);
  return result;
}


void __fastcall ExpandoContainerModel::~ExpandoContainerModel(ExpandoContainerModel *this)
{
  ExpandoContainerModel *v1; // r0@1

  v1 = ExpandoContainerModel::~ExpandoContainerModel(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ExpandoContainerModel::~ExpandoContainerModel(ExpandoContainerModel *this)
{
  ExpandoContainerModel::~ExpandoContainerModel(this);
}


void __fastcall ExpandoContainerModel::_init(ExpandoContainerModel *this)
{
  ExpandoContainerModel *v1; // r11@1
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r1@11
  void *v7; // r0@11
  void *v8; // r0@12
  void *v9; // r0@14
  int v10; // r0@16
  __int64 v11; // kr08_8@19
  int v12; // r4@20
  unsigned int *v13; // r2@21
  signed int v14; // r1@23
  int v15; // r1@29
  void *v16; // r0@29
  void *v17; // r0@30
  void *v18; // r0@32
  int v19; // r0@34

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 68);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      v6 = *(_DWORD *)(v3 + 76);
      v7 = (void *)(v6 - 12);
      if ( (int *)(v6 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v6 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      v8 = *(void **)(v3 + 52);
      if ( v8 )
        operator delete(v8);
      v9 = *(void **)(v3 + 36);
      if ( v9 )
        operator delete(v9);
      v10 = *(_DWORD *)(v3 + 8);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      *(_DWORD *)(v3 + 8) = 0;
      v3 += 80;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 18) = v2;
  v11 = *((_QWORD *)v1 + 10);
  if ( HIDWORD(v11) != (_DWORD)v11 )
    v12 = v11;
      v15 = *(_DWORD *)(v12 + 76);
      v16 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v15 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v17 = *(void **)(v12 + 52);
      if ( v17 )
        operator delete(v17);
      v18 = *(void **)(v12 + 36);
      if ( v18 )
        operator delete(v18);
      v19 = *(_DWORD *)(v12 + 8);
      if ( v19 )
        (*(void (**)(void))(*(_DWORD *)v19 + 4))();
      *(_DWORD *)(v12 + 8) = 0;
      v12 += 80;
    while ( v12 != HIDWORD(v11) );
  *((_DWORD *)v1 + 21) = v11;
  ExpandoContainerModel::_refreshContainer(v1, 0);
}


void *__fastcall ExpandoContainerModel::getItem(ExpandoContainerModel *this, int a2)
{
  __int64 v2; // kr00_8@2
  void *result; // r0@3

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
  return result;
}


int __fastcall ExpandoContainerModel::_generateCurrentItems(ExpandoContainerModel *this)
{
  ExpandoContainerModel *v1; // r8@1
  int v2; // r9@1
  int v3; // r7@1
  int v4; // r5@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // r1@11
  void *v8; // r0@11
  void *v9; // r0@12
  void *v10; // r0@14
  int v11; // r0@16
  __int64 v12; // r0@19
  unsigned int v13; // r10@20
  unsigned int *v14; // r2@21
  signed int v15; // r1@23
  int v16; // r5@29
  int v17; // r4@29
  __int64 v18; // r0@29
  ItemInstance *v19; // r0@30
  char *v20; // r1@30
  char *v21; // r0@32
  int v22; // r2@39
  int *v23; // r5@40
  unsigned int v24; // r2@41
  int v25; // t1@42
  unsigned __int64 *v27; // [sp+4h] [bp-7Ch]@1
  char v28; // [sp+8h] [bp-78h]@29
  int v29; // [sp+10h] [bp-70h]@37
  void *v30; // [sp+2Ch] [bp-54h]@35
  void *ptr; // [sp+3Ch] [bp-44h]@33
  int v32; // [sp+50h] [bp-30h]@29
  char *v33; // [sp+54h] [bp-2Ch]@29

  v1 = this;
  v2 = *((_DWORD *)this + 17);
  v27 = (unsigned __int64 *)((char *)this + 68);
  v3 = *((_DWORD *)this + 18);
  if ( v3 != v2 )
  {
    v4 = *((_DWORD *)this + 17);
    do
    {
      v7 = *(_DWORD *)(v4 + 76);
      v8 = (void *)(v7 - 12);
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
          j_j_j_j__ZdlPv_9(v8);
      }
      v9 = *(void **)(v4 + 52);
      if ( v9 )
        operator delete(v9);
      v10 = *(void **)(v4 + 36);
      if ( v10 )
        operator delete(v10);
      v11 = *(_DWORD *)(v4 + 8);
      if ( v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      *(_DWORD *)(v4 + 8) = 0;
      v4 += 80;
    }
    while ( v4 != v3 );
  }
  *((_DWORD *)v1 + 18) = v2;
  v12 = *((_QWORD *)v1 + 10);
  if ( HIDWORD(v12) != (_DWORD)v12 )
    v13 = 0;
      v16 = v12 + 80 * v13;
      v17 = *(_DWORD *)(v16 + 72);
      ItemInstance::ItemInstance((ItemInstance *)&v28, v16);
      v32 = v17;
      sub_21E8AF4((int *)&v33, (int *)(v16 + 76));
      v18 = *((_QWORD *)v1 + 9);
      if ( (_DWORD)v18 == HIDWORD(v18) )
        std::vector<ExpandoModelElement,std::allocator<ExpandoModelElement>>::_M_emplace_back_aux<ExpandoModelElement>(
          v27,
          (int)&v28);
        v20 = v33;
      else
        v19 = ItemInstance::ItemInstance((ItemInstance *)v18, (int)&v28);
        *((_DWORD *)v19 + 18) = v32;
        *((_DWORD *)v19 + 19) = v33;
        v20 = (char *)&unk_28898CC;
        v33 = (char *)&unk_28898CC;
        *((_DWORD *)v1 + 18) += 80;
      v21 = v20 - 12;
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v20 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      if ( ptr )
        operator delete(ptr);
      if ( v30 )
        operator delete(v30);
      if ( v29 )
        (*(void (**)(void))(*(_DWORD *)v29 + 4))();
      v29 = 0;
      v12 = *((_QWORD *)v1 + 10);
      v22 = v12 + 80 * v13;
      if ( *(_DWORD *)(v22 + 72) == 2 )
        v23 = (int *)(v22 + 152);
        do
          v24 = v13++;
          if ( v13 >= -858993459 * ((HIDWORD(v12) - (signed int)v12) >> 4) )
            break;
          v25 = *v23;
          v23 += 20;
        while ( v25 == 3 );
        v24 = v13;
      v13 = v24 + 1;
    while ( v24 + 1 < -858993459 * ((HIDWORD(v12) - (signed int)v12) >> 4) );
  return v12;
}


int __fastcall ExpandoContainerModel::switchItemExpando(ExpandoContainerModel *this, int a2)
{
  ExpandoContainerModel *v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r0@1
  int v5; // r7@2
  int v6; // r6@2
  int v7; // r7@6
  signed int v8; // r2@6
  int v9; // r0@6
  int v10; // r5@10
  signed int v11; // r6@11
  int v12; // r0@13
  __int64 v13; // kr08_8@14
  int v14; // r1@14
  unsigned int v15; // r0@14
  int v16; // r3@15
  _DWORD *v17; // r2@15

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 10);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = 0;
    v6 = 0;
    while ( ItemInstance::operator==((ItemInstance *)(v4 + v5), (ItemInstance *)(*((_DWORD *)v2 + 17) + 80 * v3)) != 1 )
    {
      v4 = *((_QWORD *)v2 + 10);
      v5 += 80;
      if ( ++v6 >= (unsigned int)(-858993459 * ((HIDWORD(v4) - (signed int)v4) >> 4)) )
        return v4;
    }
    v7 = 5 * v6;
    v8 = 2;
    v9 = *((_DWORD *)v2 + 20) + 80 * v6;
    if ( *(_DWORD *)(v9 + 72) == 2 )
      v8 = 1;
    *(_DWORD *)(v9 + 72) = v8;
    ExpandoContainerModel::_generateCurrentItems(v2);
    HIDWORD(v4) = *((_DWORD *)v2 + 20) + 80 * v6;
    LODWORD(v4) = *(_DWORD *)(HIDWORD(v4) + 72);
    if ( (_DWORD)v4 == 1 )
      LODWORD(v4) = *(_QWORD *)((char *)v2 + 68);
      if ( *(_QWORD *)((char *)v2 + 68) >> 32 != (_DWORD)v4 )
      {
        v10 = 0;
        if ( ItemInstance::operator==((ItemInstance *)v4, (ItemInstance *)HIDWORD(v4)) == 1 )
        {
LABEL_14:
          v13 = *(_QWORD *)((char *)v2 + 68);
          v14 = v10 + 1;
          v15 = -858993459 * ((HIDWORD(v13) - (signed int)v13) >> 4);
          if ( v10 + 1 >= v15 )
          {
            v16 = 0;
          }
          else
            v17 = (_DWORD *)(v13 + 80 * v14 + 72);
            do
            {
              if ( *v17 != 3 )
                break;
              ++v16;
              v17 = (_DWORD *)(v13 + 80);
            }
            while ( v14 + v16 < v15 );
          if ( !*((_DWORD *)v2 + 25) )
            sub_21E5F48();
          LODWORD(v4) = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))v2 + 26))(
                          (char *)v2 + 92,
                          (char *)v2 + 4,
                          v10,
                          v16);
        }
        else
          v11 = 80;
          while ( 1 )
            v4 = *(_QWORD *)((char *)v2 + 68);
            if ( ++v10 >= (unsigned int)(-858993459 * ((HIDWORD(v4) - (signed int)v4) >> 4)) )
              break;
            v12 = ItemInstance::operator==((ItemInstance *)(v4 + v11), (ItemInstance *)(*((_DWORD *)v2 + 20) + 16 * v7));
            v11 += 80;
            if ( v12 )
              goto LABEL_14;
      }
  }
  return v4;
}


int __fastcall ExpandoContainerModel::setOnItemExpandedCallback(int a1, int a2)
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
  v9 = v4 + 92;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 92);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 100);
  v10 = v13;
  *(_DWORD *)(v4 + 100) = v8;
  v14 = *(_DWORD *)(v4 + 104);
  *(_DWORD *)(v4 + 104) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}
