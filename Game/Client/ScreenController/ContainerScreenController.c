

int __fastcall ContainerScreenController::_handleTakeAmount(int a1)
{
  int v1; // r4@1
  const ItemInstance *v2; // r0@1
  int result; // r0@5
  char v4; // [sp+8h] [bp-68h]@1
  int v5; // [sp+10h] [bp-60h]@5
  void *v6; // [sp+2Ch] [bp-44h]@3
  void *ptr; // [sp+3Ch] [bp-34h]@1

  v1 = a1;
  v2 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*(MinecraftScreenModel **)(a1 + 424));
  ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v4, v2);
  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v1 + 448) + 8))(*(_DWORD *)(v1 + 448));
  ContainerScreenController::setCursorSelectedItem((ContainerScreenController *)v1, (const ContainerItemStack *)&v4);
  if ( ptr )
    operator delete(ptr);
  if ( v6 )
    operator delete(v6);
  result = v5;
  if ( v5 )
    result = (*(int (__cdecl **)(int))(*(_DWORD *)v5 + 4))(v5);
  return result;
}


    || ContainerScreenController::_getInteractionModel(v1) )
{
    result = 0;
  }
  else
  {
    result = ContainerScreenController::isSlotsPanelFocused(v1) ^ 1;
  return result;
}


void __fastcall ContainerScreenController::_handleAutoPlace(int a1, int a2, const void **a3, int a4)
{
  ContainerScreenController::_handleAutoPlace(a1, a2, a3, a4);
}


    || ContainerScreenController::_getInteractionModel(v1) )
{
    result = 0;
  }
  else
  {
    result = ContainerScreenController::isSlotsPanelFocused(v1);
  return result;
}


int __fastcall ContainerScreenController::ContainerScreenController(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  double v13; // r0@21
  double v14; // r0@21
  int v15; // r6@23
  void *v16; // r5@23
  unsigned int v17; // r0@24
  int v18; // r6@26
  void *v19; // r5@26
  void *v20; // r0@27
  void *v21; // r0@28
  void *v22; // r0@29
  void *v23; // r0@30
  void *v24; // r0@31
  void *v25; // r0@32
  unsigned int *v27; // r2@36
  signed int v28; // r1@38
  unsigned int *v29; // r2@40
  signed int v30; // r1@42
  unsigned int *v31; // r2@44
  signed int v32; // r1@46
  unsigned int *v33; // r2@48
  signed int v34; // r1@50
  unsigned int *v35; // r2@52
  signed int v36; // r1@54
  unsigned int *v37; // r2@56
  signed int v38; // r1@58
  int v39; // [sp+4h] [bp-4Ch]@32
  int v40; // [sp+Ch] [bp-44h]@31
  int v41; // [sp+14h] [bp-3Ch]@30
  int v42; // [sp+1Ch] [bp-34h]@29
  int v43; // [sp+24h] [bp-2Ch]@28
  int v44; // [sp+2Ch] [bp-24h]@27
  int v45; // [sp+30h] [bp-20h]@1
  int v46; // [sp+34h] [bp-1Ch]@1

  v3 = a1;
  v45 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v46 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  ClientInstanceScreenController::ClientInstanceScreenController(v3, (int)&v45);
  v8 = v46;
  if ( v46 )
    v9 = (unsigned int *)(v46 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  *(_DWORD *)v3 = &off_26E1600;
  *(_DWORD *)(v3 + 432) = v4;
  *(_WORD *)(v3 + 456) = 0;
  *(_DWORD *)(v3 + 448) = 0;
  *(_DWORD *)(v3 + 452) = 0;
  *(_DWORD *)(v3 + 460) = -1;
  *(_DWORD *)(v3 + 464) = 0;
  *(_BYTE *)(v3 + 468) &= 0xF8u;
  *(_DWORD *)(v3 + 480) = 0;
  *(_DWORD *)(v3 + 488) = BlockPos::ZERO;
  *(_DWORD *)(v3 + 492) = unk_2816278;
  *(_DWORD *)(v3 + 496) = dword_281627C;
  *(_DWORD *)(v3 + 504) = -1;
  *(_DWORD *)(v3 + 508) = -1;
  *(_DWORD *)(v3 + 512) = 0;
  *(_BYTE *)(v3 + 516) = 0;
  *(_DWORD *)(v3 + 520) = 0;
  *(_DWORD *)(v3 + 524) = &unk_28898CC;
  sub_119CAD8((void **)(v3 + 524), (char *)&unk_257BC67, 0);
  *(_DWORD *)(v3 + 528) = 0;
  *(_DWORD *)(v3 + 532) = -1;
  *(_BYTE *)(v3 + 548) = 0;
  *(_DWORD *)(v3 + 544) = 0;
  *(_DWORD *)(v3 + 536) = 0;
  *(_DWORD *)(v3 + 540) = 0;
  *(_BYTE *)(v3 + 552) = 0;
  *(_BYTE *)(v3 + 553) = 0;
  *(_DWORD *)(v3 + 556) = 1069547520;
  *(_DWORD *)(v3 + 560) = &unk_28898CC;
  *(_DWORD *)(v3 + 564) = -1;
  *(_BYTE *)(v3 + 568) = 0;
  *(_BYTE *)(v3 + 569) = 0;
  *(_DWORD *)(v3 + 580) = 0;
  *(_DWORD *)(v3 + 584) = 0;
  *(_DWORD *)(v3 + 588) = 1065353216;
  *(_DWORD *)(v3 + 592) = 0;
  LODWORD(v13) = v3 + 588;
  v14 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v13)));
  *(_DWORD *)(v3 + 576) = LODWORD(v14);
  if ( LODWORD(v14) == 1 )
    v16 = (void *)(v3 + 596);
    *(_DWORD *)(v3 + 596) = 0;
  else
    if ( LODWORD(v14) >= 0x40000000 )
      sub_119C874();
    v15 = 4 * LODWORD(v14);
    v16 = operator new(4 * LODWORD(v14));
    _aeabi_memclr4(v16, v15);
  *(_DWORD *)(v3 + 572) = v16;
  *(_DWORD *)(v3 + 608) = 0;
  *(_DWORD *)(v3 + 612) = 0;
  *(_DWORD *)(v3 + 616) = 1065353216;
  *(_DWORD *)(v3 + 620) = 0;
  LODWORD(v14) = v3 + 616;
  v17 = sub_119C844(v14);
  *(_DWORD *)(v3 + 604) = v17;
  if ( v17 == 1 )
    v19 = (void *)(v3 + 624);
    *(_DWORD *)(v3 + 624) = 0;
    if ( v17 >= 0x40000000 )
    v18 = 4 * v17;
    v19 = operator new(4 * v17);
    _aeabi_memclr4(v19, v18);
  *(_DWORD *)(v3 + 600) = v19;
  sub_119C884((void **)&v44, "button.container_take_all_place_all");
  *(_WORD *)(v3 + 436) = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v44);
  v20 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v44 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  sub_119C884((void **)&v43, "button.container_take_half_place_one");
  *(_WORD *)(v3 + 438) = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v43);
  v21 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v43 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  sub_119C884((void **)&v42, "button.container_auto_place");
  *(_WORD *)(v3 + 440) = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v42);
  v22 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v42 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  sub_119C884((void **)&v41, "button.container_auto_place_one");
  *(_WORD *)(v3 + 442) = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v41);
  v23 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v41 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  sub_119C884((void **)&v40, "button.container_select_slot");
  *(_WORD *)(v3 + 444) = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v40);
  v24 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v40 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  sub_119C884((void **)&v39, "button.container_unselect_slot");
  *(_WORD *)(v3 + 446) = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v39);
  v25 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v39 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  ContainerScreenController::_registerEventHandlers((ContainerScreenController *)v3);
  ContainerScreenController::_registerBindings((ContainerScreenController *)v3);
  return v3;
}


    || ContainerScreenController::_getInteractionModel(v1) )
{
    result = 0;
  }
  else
  {
    result = ContainerScreenController::isSlotsPanelFocused(v1);
  return result;
}


void __fastcall ContainerScreenController::_handleCoalesceStack(int a1, void *a2, int a3, int a4, int a5, void *a6, int a7, int a8, int a9, int a10, void *a11, int a12, int a13, char a14)
{
  int v14; // r4@1
  unsigned __int64 *v15; // r0@1
  unsigned __int64 *v16; // r6@1
  char *v17; // r2@1
  unsigned __int64 v18; // r0@1
  signed int v19; // r0@1
  unsigned int v20; // r7@1
  const ItemInstance *v21; // r0@4
  char *v22; // r4@10
  int v23; // r6@10
  unsigned int *v24; // r2@12
  signed int v25; // r1@14
  int *v26; // r0@20
  int v27; // [sp+0h] [bp-78h]@4
  int v28; // [sp+8h] [bp-70h]@8
  void *v29; // [sp+24h] [bp-54h]@6
  void *ptr; // [sp+34h] [bp-44h]@4
  char *v31; // [sp+48h] [bp-30h]@1
  char *v32; // [sp+4Ch] [bp-2Ch]@1
  char *v33; // [sp+50h] [bp-28h]@1

  v14 = a1;
  v15 = (unsigned __int64 *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                              (unsigned __int64 *)(a1 + 572),
                              (int **)a2);
  v16 = v15;
  v17 = 0;
  v18 = *v15;
  v31 = 0;
  v32 = 0;
  v19 = HIDWORD(v18) - v18;
  v33 = 0;
  v20 = v19 >> 2;
  if ( v19 >> 2 )
  {
    if ( v20 >= 0x40000000 )
      sub_119C874();
    v17 = (char *)operator new(v19);
  }
  v31 = v17;
  v32 = v17;
  v33 = &v17[4 * v20];
  v32 = (char *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                  *v16,
                  *v16 >> 32,
                  (int)v17);
  v21 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*(MinecraftScreenModel **)(v14 + 424));
  ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v27, v21);
  (*(void (**)(void))(**(_DWORD **)(v14 + 448) + 40))();
  ContainerScreenController::setCursorSelectedItem((ContainerScreenController *)v14, (const ContainerItemStack *)&v27);
  if ( ptr )
    operator delete(ptr);
  if ( v29 )
    operator delete(v29);
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  v23 = (int)v32;
  v22 = v31;
  if ( v31 != v32 )
    do
    {
      v26 = (int *)(*(_DWORD *)v22 - 12);
      if ( v26 != &dword_28898C0 )
      {
        v24 = (unsigned int *)(*(_DWORD *)v22 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v26);
      }
      v22 += 4;
    }
    while ( v22 != (char *)v23 );
    v22 = v31;
  if ( v22 )
    operator delete(v22);
}


int __fastcall ContainerScreenController::getCursorSelectedItem(ContainerScreenController *this, int a2)
{
  ContainerScreenController *v2; // r4@1
  const ItemInstance *v3; // r0@1

  v2 = this;
  v3 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*(MinecraftScreenModel **)(a2 + 424));
  return ContainerItemStack::ContainerItemStack(v2, v3);
}


ContainerScreenController *__fastcall ContainerScreenController::~ContainerScreenController(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  _DWORD *v2; // r1@1
  _DWORD *v3; // r6@2
  char *v4; // r0@3
  _DWORD *v5; // r1@6
  _DWORD *v6; // r6@7
  char *v7; // r0@8
  int v8; // r1@11
  void *v9; // r0@11
  int v10; // r1@12
  void *v11; // r0@12
  void (*v12)(void); // r3@13
  int v13; // r5@15
  unsigned int *v14; // r1@16
  unsigned int v15; // r0@18
  unsigned int *v16; // r6@22
  unsigned int v17; // r0@24
  unsigned int *v19; // r2@30
  signed int v20; // r1@32
  unsigned int *v21; // r2@34
  signed int v22; // r1@36

  v1 = this;
  *(_DWORD *)this = &off_26E1600;
  (*(void (**)(void))(**((_DWORD **)this + 112) + 48))();
  ClientInstanceScreenModel::deleteContainerManager(*((ClientInstanceScreenModel **)v1 + 106));
  v2 = (_DWORD *)*((_DWORD *)v1 + 152);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,true>>>::_M_deallocate_node(
        (int)v1 + 600,
        (int)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 75), 4 * (*((_QWORD *)v1 + 75) >> 32));
  *((_DWORD *)v1 + 152) = 0;
  *((_DWORD *)v1 + 153) = 0;
  v4 = (char *)*((_DWORD *)v1 + 150);
  if ( v4 && (char *)v1 + 624 != v4 )
    operator delete(v4);
  v5 = (_DWORD *)*((_DWORD *)v1 + 145);
  if ( v5 )
      v6 = (_DWORD *)*v5;
      std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,true>>>::_M_deallocate_node(
        (int)v1 + 572,
        (int)v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 572), 4 * (*(_QWORD *)((char *)v1 + 572) >> 32));
  *((_DWORD *)v1 + 145) = 0;
  *((_DWORD *)v1 + 146) = 0;
  v7 = (char *)*((_DWORD *)v1 + 143);
  if ( v7 && (char *)v1 + 596 != v7 )
    operator delete(v7);
  v8 = *((_DWORD *)v1 + 140);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = *((_DWORD *)v1 + 131);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v10 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void (*)(void))*((_DWORD *)v1 + 120);
  if ( v12 )
    v12();
  v13 = *((_DWORD *)v1 + 113);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  return v1;
}


void __fastcall ContainerScreenController::_getCollectionName(ContainerScreenController *this, UIPropertyBag *a2, int a3)
{
  ContainerScreenController::_getCollectionName(this, a2, a3);
}


int __fastcall ContainerScreenController::_selectionActive(ContainerScreenController *this)
{
  const ItemInstance *v1; // r0@1
  ContainerItemStack *v2; // r0@1
  int v3; // r4@1
  int v4; // r4@4
  int v6; // [sp+0h] [bp-50h]@1
  int v7; // [sp+8h] [bp-48h]@12
  void *v8; // [sp+24h] [bp-2Ch]@10
  void *ptr; // [sp+34h] [bp-1Ch]@8

  v1 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*((MinecraftScreenModel **)this + 106));
  v2 = (ContainerItemStack *)ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v6, v1);
  v3 = ContainerItemStack::getItemInstance(v2);
  if ( *(_BYTE *)(v3 + 15) )
  {
    if ( *(_DWORD *)v3 )
    {
      if ( ItemInstance::isNull((ItemInstance *)v3) )
        v4 = 0;
      else
        v4 = *(_BYTE *)(v3 + 14) != 0;
    }
    else
      v4 = 0;
  }
  else
    v4 = 0;
  if ( ptr )
    operator delete(ptr);
  if ( v8 )
    operator delete(v8);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  return v4;
}


void __fastcall ContainerScreenController::_handleAutoPlace(int a1, int a2, const void **a3, int a4)
{
  int v4; // r10@1
  int v5; // r5@1
  int **v6; // r9@1
  int v7; // r6@1
  _DWORD *v8; // r0@3
  signed int v9; // r4@3
  const void *v10; // r1@3
  size_t v11; // r2@3
  int v12; // r11@7
  unsigned __int64 *v13; // r8@10
  ItemInstance *v14; // r0@10
  ItemInstance *v15; // r4@10
  int v16; // r0@10
  bool v17; // zf@10
  void *v18; // r0@16
  void *v19; // r0@17
  int v20; // r6@19
  const void **v21; // r8@19
  unsigned __int64 v22; // kr00_8@19
  int v23; // r0@19
  _DWORD *v24; // r11@20
  int v25; // r4@20
  size_t v26; // r7@20
  const void **v27; // r5@22
  _DWORD *v28; // r0@23
  _DWORD *v29; // r0@25
  _DWORD *v30; // r0@27
  int v31; // r0@31
  _DWORD *v32; // r4@33
  size_t v33; // r7@33
  size_t v34; // r2@35
  char *v35; // r0@45
  void *v36; // r0@45
  __int64 v37; // r4@46
  unsigned int *v38; // r2@48
  signed int v39; // r1@50
  int *v40; // r0@56
  int v41; // r7@61
  int v42; // r11@61
  size_t v43; // r2@63
  _DWORD *v44; // r5@70
  unsigned int *v45; // r2@72
  signed int v46; // r1@74
  int *v47; // r0@80
  void *v48; // r0@85
  void *v49; // r0@86
  unsigned int *v50; // r2@88
  signed int v51; // r1@90
  unsigned int *v52; // r2@92
  signed int v53; // r1@94
  unsigned int *v54; // r2@96
  signed int v55; // r1@98
  unsigned int *v56; // r2@100
  signed int v57; // r1@102
  unsigned int *v58; // r2@120
  signed int v59; // r1@122
  int v60; // [sp+Ch] [bp-94h]@19
  int v61; // [sp+10h] [bp-90h]@15
  int v62; // [sp+14h] [bp-8Ch]@19
  void *v63; // [sp+18h] [bp-88h]@65
  int v64; // [sp+1Ch] [bp-84h]@65
  void *v65; // [sp+20h] [bp-80h]@65
  int v66; // [sp+24h] [bp-7Ch]@65
  int v67; // [sp+28h] [bp-78h]@65
  int v68; // [sp+2Ch] [bp-74h]@65
  void *v69; // [sp+30h] [bp-70h]@65
  void *v70; // [sp+34h] [bp-6Ch]@65
  int v71; // [sp+38h] [bp-68h]@45
  char *v72; // [sp+40h] [bp-60h]@45
  char *v73; // [sp+44h] [bp-5Ch]@45
  char *v74; // [sp+48h] [bp-58h]@45
  _DWORD *v75; // [sp+4Ch] [bp-54h]@18
  int v76; // [sp+50h] [bp-50h]@18
  int v77; // [sp+54h] [bp-4Ch]@18
  int v78; // [sp+58h] [bp-48h]@17
  int v79; // [sp+5Ch] [bp-44h]@16
  int v80; // [sp+60h] [bp-40h]@15
  int v81; // [sp+64h] [bp-3Ch]@15
  char v82; // [sp+68h] [bp-38h]@15

  v4 = a1;
  v5 = a4;
  v6 = (int **)a3;
  v7 = a2;
  if ( *(_BYTE *)(a1 + 569) )
  {
    if ( *(_DWORD *)(a1 + 564) == a4 )
    {
      v8 = *(_DWORD **)(a1 + 560);
      v9 = 0;
      v10 = *a3;
      v11 = *(v8 - 3);
      if ( v11 == *(*v6 - 3) && !memcmp(v8, v10, v11) )
        v9 = 1;
    }
    else
    v12 = v9 ^ 1;
  }
  else
    v12 = 0;
  v13 = (unsigned __int64 *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                              (unsigned __int64 *)(v4 + 600),
                              v6);
  v14 = ContainerScreenController::getItemInstance(v4, v6, v5);
  v15 = v14;
  v16 = *((_BYTE *)v14 + 15);
  v17 = v16 == 0;
  if ( v16 )
    v17 = *(_DWORD *)v15 == 0;
  if ( !v17 && !ItemInstance::isNull(v15) && *((_BYTE *)v15 + 14) )
    v61 = ItemInstance::getIdAuxEnchanted(v15);
    ItemInstance::getColor((ItemInstance *)&v82, (int *)v15);
    sub_119C854(&v81, (int *)&Util::EMPTY_STRING);
    sub_119C854(&v80, (int *)&Util::EMPTY_STRING);
    if ( ItemInstance::getId(v15) == *(_WORD *)(Item::mBanner + 18) )
      BannerBlockEntity::getPatterns((BannerBlockEntity *)&v79, v15);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v81, &v79);
      v18 = (void *)(v79 - 12);
      if ( (int *)(v79 - 12) != &dword_28898C0 )
      {
        v50 = (unsigned int *)(v79 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
        }
        else
          v51 = (*v50)--;
        if ( v51 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v18);
      }
      BannerBlockEntity::getColors((BannerBlockEntity *)&v78, v15);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v80, &v78);
      v19 = (void *)(v78 - 12);
      if ( (int *)(v78 - 12) != &dword_28898C0 )
        v52 = (unsigned int *)(v78 - 4);
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
          v53 = (*v52)--;
        if ( v53 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v19);
    v75 = 0;
    v76 = 0;
    v77 = 0;
    if ( v12 != 1 )
      v62 = v5;
      (*(void (__cdecl **)(_DWORD, int))(**(_DWORD **)(v4 + 448) + 32))(*(_DWORD *)(v4 + 448), v7);
      goto LABEL_61;
    v60 = v7;
    v62 = v5;
    v22 = *v13;
    v21 = (const void **)(*v13 >> 32);
    v20 = v22;
    v23 = (signed int)((signed int)v21 - v22) >> 5;
    if ( v23 >= 1 )
      v24 = *(_DWORD **)(v4 + 560);
      v25 = v23 + 1;
      v26 = *(v24 - 3);
      do
        if ( *(_DWORD *)(*(_DWORD *)v20 - 12) == v26 )
          v27 = (const void **)v20;
          if ( !memcmp(*(const void **)v20, v24, v26) )
            goto LABEL_44;
        v27 = (const void **)(v20 + 8);
        v28 = *(_DWORD **)(v20 + 8);
        if ( *(v28 - 3) == v26 && !memcmp(v28, v24, v26) )
          goto LABEL_44;
        v27 = (const void **)(v20 + 16);
        v29 = *(_DWORD **)(v20 + 16);
        if ( *(v29 - 3) == v26 && !memcmp(v29, v24, v26) )
        v27 = (const void **)(v20 + 24);
        v30 = *(_DWORD **)(v20 + 24);
        if ( *(v30 - 3) == v26 && !memcmp(v30, v24, v26) )
        --v25;
        v20 += 32;
      while ( v25 > 1 );
    if ( 1 == ((signed int)v21 - v20) >> 3 )
      v32 = *(_DWORD **)(v4 + 560);
      v27 = (const void **)v20;
      v33 = *(v32 - 3);
      goto LABEL_42;
    v31 = ((signed int)v21 - v20) >> 3;
    if ( v31 == 3 )
      v34 = *(_DWORD *)(*(_DWORD *)v20 - 12);
      if ( v34 == v33 )
        v27 = (const void **)v20;
        if ( !memcmp(*(const void **)v20, *(const void **)(v4 + 560), v34) )
      v27 = (const void **)(v20 + 8);
      if ( v31 != 2 )
        goto LABEL_61;
    if ( *((_DWORD *)*v27 - 3) != v33 || memcmp(*v27, v32, v33) )
      v27 += 2;
LABEL_42:
      if ( *((_DWORD *)*v27 - 3) == v33 && !memcmp(*v27, v32, v33) )
        goto LABEL_44;
LABEL_61:
      v42 = v76;
      v41 = (int)v75;
      if ( v75 != (_DWORD *)v76 )
        do
          if ( *(_DWORD *)(v41 + 4) != v62
            || (v43 = *(*v6 - 3), v43 != *(_DWORD *)(*(_DWORD *)v41 - 12))
            || memcmp(*v6, *(const void **)v41, v43) )
          {
            v63 = &unk_28898CC;
            v65 = &unk_28898CC;
            v69 = &unk_28898CC;
            v70 = &unk_28898CC;
            v67 = v61;
            v68 = Color::toARGB((Color *)&v82);
            EntityInteraction::setInteractText((int *)&v63, (int *)v6);
            v64 = v62;
            EntityInteraction::setInteractText((int *)&v65, (int *)v41);
            v66 = *(_DWORD *)(v41 + 4);
            EntityInteraction::setInteractText((int *)&v69, &v81);
            EntityInteraction::setInteractText((int *)&v70, &v80);
            if ( !*(_DWORD *)(v4 + 480) )
              sub_119C8E4();
            (*(void (__fastcall **)(int, void **))(v4 + 484))(v4 + 472, &v63);
            FlyingItemCommand::~FlyingItemCommand((FlyingItemCommand *)&v63);
          }
          v41 += 8;
        while ( v42 != v41 );
        v41 = v76;
        v44 = v75;
        if ( v75 != (_DWORD *)v76 )
            v47 = (int *)(*v44 - 12);
            if ( v47 != &dword_28898C0 )
            {
              v45 = (unsigned int *)(*v44 - 4);
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
                j_j_j_j_j__ZdlPv_9_1(v47);
            }
            v44 += 2;
          while ( v44 != (_DWORD *)v41 );
          v41 = (int)v75;
      if ( v41 )
        operator delete((void *)v41);
      v48 = (void *)(v80 - 12);
      if ( (int *)(v80 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v80 - 4);
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v48);
      v49 = (void *)(v81 - 12);
      if ( (int *)(v81 - 12) != &dword_28898C0 )
        v56 = (unsigned int *)(v81 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v49);
      return;
LABEL_44:
    if ( v27 != v21 )
      AutoPlaceItem::AutoPlaceItem(&v71, (int *)(v4 + 560), 1);
      v72 = 0;
      v73 = 0;
      v74 = 0;
      v35 = (char *)operator new(8u);
      v72 = v35;
      v73 = v35;
      v74 = v35 + 8;
      std::__uninitialized_fill_n<false>::__uninit_fill_n<AutoPlaceItem *,unsigned int,AutoPlaceItem>(
        (int)v35,
        1,
        (int)&v71);
      v73 = v74;
      v36 = (void *)(v71 - 12);
      if ( (int *)(v71 - 12) != &dword_28898C0 )
        v58 = (unsigned int *)(v71 - 4);
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
          v59 = (*v58)--;
        if ( v59 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v36);
      (*(void (__cdecl **)(_DWORD, int))(**(_DWORD **)(v4 + 448) + 32))(*(_DWORD *)(v4 + 448), v60);
      v37 = *(_QWORD *)&v72;
      if ( v72 != v73 )
          v40 = (int *)(*(_DWORD *)v37 - 12);
          if ( v40 != &dword_28898C0 )
            v38 = (unsigned int *)(*(_DWORD *)v37 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
            else
              v39 = (*v38)--;
            if ( v39 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v40);
          LODWORD(v37) = v37 + 8;
        while ( (_DWORD)v37 != HIDWORD(v37) );
        LODWORD(v37) = v72;
      if ( (_DWORD)v37 )
        operator delete((void *)v37);
    goto LABEL_61;
}


int __fastcall ContainerScreenController::_getCollectionIndex(ContainerScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r4@1
  Json::Value *v3; // r4@3
  int result; // r0@5

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8))
    || Json::Value::isObject(v2) != 1
    || (v3 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index"), !Json::Value::isInt(v3))
    && Json::Value::isUInt(v3) != 1 )
  {
    result = -1;
  }
  else
    result = j_j_j__ZNK4Json5Value5asIntEi_1(v3, 0);
  return result;
}


signed int __fastcall ContainerScreenController::_canShowSelectedSlot(MinecraftScreenController *a1, const void **a2, int a3)
{
  int v3; // r6@1
  const void **v4; // r4@1
  MinecraftScreenController *v5; // r5@1
  _DWORD *v6; // r0@3
  _DWORD *v7; // r1@3
  signed int v8; // r4@3
  size_t v9; // r2@3
  signed int result; // r0@6

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( MinecraftScreenController::getInputMode(a1) == 3 || *((_DWORD *)v5 + 141) != v3 )
  {
    result = 0;
  }
  else
    v6 = (_DWORD *)*((_DWORD *)v5 + 140);
    v7 = *v4;
    v8 = 0;
    v9 = *(v6 - 3);
    if ( v9 == *(v7 - 3) && !memcmp(v6, v7, v9) )
      v8 = 1;
    result = v8;
  return result;
}


void __fastcall ContainerScreenController::_handleCoalesceStack(int a1, void *a2, int a3, int a4, int a5, void *a6, int a7, int a8, int a9, int a10, void *a11, int a12, int a13, char a14)
{
  ContainerScreenController::_handleCoalesceStack(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}


int __fastcall ContainerScreenController::_handleUnselectSlot(int result)
{
  *(_BYTE *)(result + 568) = 0;
  return result;
}


signed int __fastcall ContainerScreenController::_handleButtonIsHeld(int a1, int **a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  int **v6; // r6@1
  int v7; // r4@1
  char v8; // r0@2
  char v9; // r1@3
  ItemInstance *v10; // r0@8
  bool v11; // zf@8
  char v12; // r7@13
  int v14; // [sp+0h] [bp-60h]@8
  int v15; // [sp+8h] [bp-58h]@21
  char v16; // [sp+Eh] [bp-52h]@12
  char v17; // [sp+Fh] [bp-51h]@8
  void *v18; // [sp+24h] [bp-3Ch]@19
  void *ptr; // [sp+34h] [bp-2Ch]@17

  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( a4 )
  {
    v8 = *(_BYTE *)(a1 + 468);
    if ( !(v8 & 2) )
    {
      v9 = 0;
      if ( a4 == 2 )
        v9 = 1;
      *(_BYTE *)(v7 + 468) = v8 & 0xF9 | 4 * v9 | 2;
      if ( v8 & 1 || (*(int (__fastcall **)(int, int **, int))(*(_DWORD *)v7 + 148))(v7, v6, a3) == 1 )
        (*(void (__fastcall **)(int, int **, int))(*(_DWORD *)v7 + 132))(v7, v6, v5);
    }
  }
  v10 = ContainerScreenController::getItemInstance(v7, v6, v5);
  ItemInstance::ItemInstance((ItemInstance *)&v14, (int)v10);
  v11 = v17 == 0;
  if ( v17 )
    v11 = v14 == 0;
  if ( v11 || ItemInstance::isNull((ItemInstance *)&v14) || !v16 )
    *(_DWORD *)(v7 + 520) = 0;
    sub_119CAD8((void **)(v7 + 524), (char *)&unk_257BC67, 0);
    *(_DWORD *)(v7 + 528) = 0;
    *(_DWORD *)(v7 + 532) = -1;
    *(_BYTE *)(v7 + 548) = 0;
    *(_DWORD *)(v7 + 544) = 0;
    *(_DWORD *)(v7 + 536) = 0;
    *(_DWORD *)(v7 + 540) = 0;
    *(_WORD *)(v7 + 552) = 0;
  else
    v12 = a5;
    *(_DWORD *)(v7 + 520) = a5;
    EntityInteraction::setInteractText((int *)(v7 + 524), (int *)v6);
    *(_DWORD *)(v7 + 528) = ContainerManagerController::getStackCount(*(_DWORD *)(v7 + 448), (int **)(v7 + 524), v5);
    *(_DWORD *)(v7 + 532) = v5;
    *(_BYTE *)(v7 + 552) = 0;
    if ( a5 )
      v12 = 1;
    *(_BYTE *)(v7 + 553) = v12;
  if ( ptr )
    operator delete(ptr);
  if ( v18 )
    operator delete(v18);
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  return 2;
}


int __fastcall ContainerScreenController::_hasSelectedSlot(ContainerScreenController *this)
{
  int result; // r0@2

  if ( *((_DWORD *)this + 141) == -1 )
    result = 0;
  else
    result = *(_DWORD *)(*((_DWORD *)this + 140) - 12) != 0;
  return result;
}


int __fastcall ContainerScreenController::addStaticScreenVars(ContainerScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  ContainerScreenController *v3; // r5@1
  int v4; // r6@1
  int v5; // r0@1
  void *v6; // r0@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+4h] [bp-2Ch]@3
  char v11; // [sp+8h] [bp-28h]@6

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$container_title");
  v5 = *((_DWORD *)v3 + 128);
  if ( v5 == 2 )
  {
    ContainerManagerController::getEntityName((const void **)&v10, *((_DWORD *)v3 + 112), (unsigned __int64 *)v3 + 63);
  }
  else if ( v5 == 1 )
    ContainerManagerController::getBlockName(
      (ContainerManagerController *)&v10,
      *((const BlockPos **)v3 + 112),
      (ContainerScreenController *)((char *)v3 + 488));
  else
    sub_119C854(&v10, (int *)&Util::EMPTY_STRING);
  Json::Value::Value((int)&v11, (const char **)&v10);
  Json::Value::operator=(v4, (const Json::Value *)&v11);
  Json::Value::~Value((Json::Value *)&v11);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  return ScreenController::addStaticScreenVars(v3, v2);
}


int __fastcall ContainerScreenController::_setPointerHeldEventsHandled(int result, bool a2)
{
  *(_BYTE *)(result + 457) = a2;
  return result;
}


void **__fastcall ContainerScreenController::_getButtonXDescription(ContainerScreenController *this, ContainerScreenController *a2)
{
  void **v2; // r4@1
  bool v3; // zf@1
  const char *v4; // r1@1

  v2 = (void **)this;
  v3 = ContainerScreenController::_selectionActive(a2) == 0;
  v4 = "controller.buttonTip.place.one";
  if ( v3 )
    v4 = "controller.buttonTip.take.half";
  return sub_119C884(v2, v4);
}


void **__fastcall ContainerScreenController::_getButtonYDescription(ContainerScreenController *this, ContainerScreenController *a2)
{
  void **v2; // r4@1
  bool v3; // zf@1
  const char *v4; // r1@1

  v2 = (void **)this;
  v3 = ContainerScreenController::_selectionActive(a2) == 0;
  v4 = "controller.buttonTip.drop";
  if ( v3 )
    v4 = "controller.buttonTip.quick.move";
  return sub_119C884(v2, v4);
}


signed int __fastcall ContainerScreenController::_handleTakePlace(int a1, int a2, const void **a3, int a4)
{
  unsigned int v4; // r4@1
  unsigned int v5; // r4@5
  signed int result; // r0@7

  v4 = *(_DWORD *)(a1 + 436);
  if ( (unsigned __int16)v4 == a2 )
  {
    ContainerScreenController::_handleTakeAllPlaceAll(a1);
    return 1;
  }
  if ( a2 == v4 >> 16 )
    ContainerScreenController::_handleTakeHalfPlaceOne((ContainerScreenController *)a1);
  v5 = *(_DWORD *)(a1 + 440);
  if ( (unsigned __int16)v5 == a2 )
    ContainerScreenController::_handleAutoPlace(a1, 0x7FFFFFFF, a3, a4);
  if ( a2 == v5 >> 16 )
    ContainerScreenController::_handleAutoPlace(a1, 1, a3, a4);
    result = 1;
  else
    result = 0;
  return result;
}


int __fastcall ContainerScreenController::_onContainerSlotPressed(int a1, int **a2, int a3)
{
  int v3; // r4@1
  ItemInstance *v4; // r0@1
  ItemInstance *v5; // r5@1
  int v6; // r0@1
  bool v7; // zf@1
  int v8; // r0@6
  int v9; // r3@6
  void *v10; // r0@7
  void *v11; // r0@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  int v17; // [sp+8h] [bp-50h]@6
  char v18; // [sp+Fh] [bp-49h]@6
  int v19; // [sp+10h] [bp-48h]@6
  const char *v20; // [sp+14h] [bp-44h]@6
  char v21; // [sp+18h] [bp-40h]@6
  int v22; // [sp+40h] [bp-18h]@6

  v3 = a1;
  v4 = ContainerScreenController::getItemInstance(a1, a2, a3);
  v5 = v4;
  v6 = *((_BYTE *)v4 + 15);
  v7 = v6 == 0;
  if ( v6 )
    v7 = *(_DWORD *)v5 == 0;
  if ( !v7 && !ItemInstance::isNull(v5) && *((_BYTE *)v5 + 14) )
  {
    v8 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v3 + 424));
    v9 = *(_BYTE *)(v3 + 516);
    (*(void (__fastcall **)(int *))(*(_DWORD *)v8 + 12))(&v22);
    UIPropertyBag::UIPropertyBag((int)&v21);
    UIPropertyBag::set<char [15]>((int)&v21, 4, "name", "popup_tip_text");
    gsl::basic_string_span<char const,-1>::remove_z<21u>((int)&v19, (int)"#selected_hover_text");
    UIPropertyBag::set<std::string>((int)&v21, v19, v20, (const void **)&v22);
    v18 = 1;
    UIPropertyBag::set<bool>((int)&v21, 9, "exclusive", &v18);
    sub_119C884((void **)&v17, "selected_item_details_factory");
    if ( !*(_DWORD *)(v3 + 12) )
      sub_119C8E4();
    (*(void (__fastcall **)(int, int *, char *))(v3 + 16))(v3 + 4, &v17, &v21);
    v10 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v17 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v10);
    }
    UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v21);
    v11 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v22 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
  }
  return 0;
}


signed int __fastcall ContainerScreenController::_resetHeldButton(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  *((_DWORD *)this + 130) = 0;
  sub_119CAD8((void **)this + 131, (char *)&unk_257BC67, 0);
  result = -1;
  *((_DWORD *)v1 + 132) = 0;
  *((_DWORD *)v1 + 133) = -1;
  *((_BYTE *)v1 + 548) = 0;
  *((_DWORD *)v1 + 136) = 0;
  *((_DWORD *)v1 + 134) = 0;
  *((_DWORD *)v1 + 135) = 0;
  *((_WORD *)v1 + 276) = 0;
  return result;
}


int __fastcall ContainerScreenController::_releaseHeldButton(MinecraftScreenController *this, const void **a2, int a3, unsigned __int16 a4)
{
  MinecraftScreenController *v4; // r4@1
  unsigned __int16 v5; // r6@1
  const void **v6; // r7@1
  int v7; // r5@1
  signed int v8; // r6@2
  _DWORD *v9; // r0@5
  const void *v10; // r1@5
  size_t v11; // r2@5
  int v12; // r0@9
  signed int v14; // r0@15
  unsigned int v21; // r1@20
  int v22; // r6@22
  unsigned int v23; // r1@32
  const ItemInstance *v24; // r0@39
  ContainerItemStack *v25; // r0@39
  const ItemInstance *v26; // r0@45
  ContainerItemStack *v27; // r0@45
  signed int v28; // r5@45
  int v30; // [sp+0h] [bp-F0h]@52
  int v31; // [sp+8h] [bp-E8h]@56
  void *v32; // [sp+24h] [bp-CCh]@54
  void *v33; // [sp+34h] [bp-BCh]@52
  char v34; // [sp+48h] [bp-A8h]@45
  int v35; // [sp+50h] [bp-A0h]@49
  void *v36; // [sp+6Ch] [bp-84h]@47
  void *v37; // [sp+7Ch] [bp-74h]@45
  char v38; // [sp+90h] [bp-60h]@39
  int v39; // [sp+98h] [bp-58h]@43
  void *v40; // [sp+B4h] [bp-3Ch]@41
  void *ptr; // [sp+C4h] [bp-2Ch]@39

  v4 = this;
  v5 = a4;
  v6 = a2;
  v7 = a3;
  if ( *((_WORD *)this + 223) == a4 )
  {
    v8 = 0;
    *((_BYTE *)this + 568) = 0;
    return v8;
  }
  if ( *((_WORD *)this + 222) != a4 )
    goto LABEL_13;
  if ( *((_DWORD *)this + 141) == a3 )
    v9 = (_DWORD *)*((_DWORD *)this + 140);
    v10 = *a2;
    v11 = *(v9 - 3);
    if ( v11 == *((_DWORD *)*v6 - 3) && !memcmp(v9, v10, v11) )
    {
      if ( MinecraftScreenController::getInputMode(v4) != 3 )
        goto LABEL_65;
      if ( *((_DWORD *)v4 + 141) != -1 )
      {
        v12 = *(_DWORD *)(*((_DWORD *)v4 + 140) - 12);
        _ZF = v12 == 0;
        if ( v12 )
          _ZF = *((_BYTE *)v4 + 568) == 0;
        if ( !_ZF )
        {
LABEL_65:
          v5 = *((_WORD *)v4 + 220);
LABEL_13:
          if ( *((_BYTE *)v4 + 468) & 1 )
          {
            v8 = 0;
          }
          else
            if ( !*((_BYTE *)v4 + 552) )
              goto LABEL_66;
            v14 = *((_DWORD *)v4 + 135);
            if ( v14 < 300 )
            _R0 = v14 - 300;
            __asm
            {
              VLDR            S2, =0.001
              VMOV            S0, R0
              VCVT.F32.S32    S0, S0
            }
            _R0 = *((_DWORD *)v4 + 132);
              VMOV            S4, R0
              VCVT.F32.S32    S4, S4
              VMUL.F32        S0, S0, S2
              VMUL.F32        S0, S0, S4
              VCVTR.S32.F32   S0, S0
              VMOV            R1, S0
            if ( _R0 < _R1 )
              _R1 = *((_DWORD *)v4 + 132);
            if ( _R1 >= 1 && !ContainerScreenController::_selectionActive(v4) )
              ContainerScreenController::_handleHeldButton(v4, *((_DWORD *)v4 + 133));
              v8 = 1;
            else
LABEL_66:
              v21 = *((_DWORD *)v4 + 109);
              if ( (unsigned __int16)v21 == v5 )
              {
                ContainerScreenController::_handleTakeAllPlaceAll((int)v4);
                v8 = 1;
              }
              else if ( v5 == v21 >> 16 )
                ContainerScreenController::_handleTakeHalfPlaceOne(v4);
              else
                v23 = *((_DWORD *)v4 + 110);
                if ( (unsigned __int16)v23 == v5 )
                {
                  ContainerScreenController::_handleAutoPlace((int)v4, 0x7FFFFFFF, v6, v7);
                  v8 = 1;
                }
                else if ( v5 == v23 >> 16 )
                  ContainerScreenController::_handleAutoPlace((int)v4, 1, v6, v7);
                else
                  v8 = 0;
          if ( ContainerScreenController::_selectionActive(v4) == 1 )
            *((_DWORD *)v4 + 115) = v7;
            v24 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*((MinecraftScreenModel **)v4 + 106));
            v25 = (ContainerItemStack *)ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v38, v24);
            *((_DWORD *)v4 + 116) = *(_BYTE *)(ContainerItemStack::getItemInstance(v25) + 14);
            if ( ptr )
              operator delete(ptr);
            if ( v40 )
              operator delete(v40);
            if ( v39 )
              (*(void (**)(void))(*(_DWORD *)v39 + 4))();
            v39 = 0;
            v26 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*((MinecraftScreenModel **)v4 + 106));
            v27 = (ContainerItemStack *)ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v34, v26);
            v28 = ContainerItemStack::isEmpty(v27);
            if ( v37 )
              operator delete(v37);
            if ( v36 )
              operator delete(v36);
            if ( v35 )
              (*(void (**)(void))(*(_DWORD *)v35 + 4))();
            v35 = 0;
            if ( v28 == 1 )
              ContainerItemStack::ContainerItemStack((int)&v30);
              ContainerScreenController::setCursorSelectedItem(v4, (const ContainerItemStack *)&v30);
              if ( v33 )
                operator delete(v33);
              if ( v32 )
                operator delete(v32);
              if ( v31 )
                (*(void (**)(void))(*(_DWORD *)v31 + 4))();
              v31 = 0;
              *((_DWORD *)v4 + 115) = -1;
            *(_QWORD *)((char *)v4 + 460) = 0xFFFFFFFFLL;
          ContainerManagerController::resetSplitStack(*((ContainerManagerController **)v4 + 112));
          *((_BYTE *)v4 + 468) &= 0xFCu;
          *((_DWORD *)v4 + 130) = 0;
          sub_119CAD8((void **)v4 + 131, (char *)&unk_257BC67, 0);
          *((_DWORD *)v4 + 132) = 0;
          *((_DWORD *)v4 + 133) = -1;
          *((_BYTE *)v4 + 548) = 0;
          *((_DWORD *)v4 + 136) = 0;
          *((_DWORD *)v4 + 134) = 0;
          *((_DWORD *)v4 + 135) = 0;
          *((_WORD *)v4 + 276) = 0;
          if ( v8 )
            v8 = 4;
          return v8;
        }
      }
    }
  v22 = MinecraftScreenController::getInputMode(v4);
  if ( v7 != -1 )
    *((_DWORD *)v4 + 141) = v7;
  if ( *((_DWORD *)*v6 - 3) )
    EntityInteraction::setInteractText((int *)v4 + 140, (int *)v6);
  if ( v22 == 3 )
    *((_BYTE *)v4 + 568) = 1;
  else
  return v8;
}


signed int __fastcall ContainerScreenController::_isSelectedSlot(int a1, const void **a2, int a3)
{
  signed int result; // r0@2
  _DWORD *v4; // r0@3
  signed int v5; // r4@3
  _DWORD *v6; // r1@3
  size_t v7; // r2@3

  if ( *(_DWORD *)(a1 + 564) == a3 )
  {
    v4 = *(_DWORD **)(a1 + 560);
    v5 = 0;
    v6 = *a2;
    v7 = *(v4 - 3);
    if ( v7 == *(v6 - 3) && !memcmp(v4, v6, v7) )
      v5 = 1;
    result = v5;
  }
  else
    result = 0;
  return result;
}


int __fastcall ContainerScreenController::_handleDropItem(ContainerScreenController *a1)
{
  ContainerScreenController *v1; // r4@1
  int result; // r0@1
  MinecraftScreenModel *v3; // r4@2
  const ItemInstance *v4; // r0@2
  char v5; // [sp+8h] [bp-60h]@2
  int v6; // [sp+10h] [bp-58h]@6
  void *v7; // [sp+2Ch] [bp-3Ch]@4
  void *ptr; // [sp+3Ch] [bp-2Ch]@2

  v1 = a1;
  result = ContainerScreenController::_selectionActive(a1);
  if ( !result )
  {
    ContainerItemStack::ContainerItemStack((int)&v5);
    (*(void (__cdecl **)(_DWORD))(**((_DWORD **)v1 + 112) + 12))(*((_DWORD *)v1 + 112));
    v3 = (MinecraftScreenModel *)*((_DWORD *)v1 + 106);
    v4 = (const ItemInstance *)ContainerItemStack::getItemInstance((ContainerItemStack *)&v5);
    MinecraftScreenModel::dropItemsFromPlayer(v3, v4, -1);
    if ( ptr )
      operator delete(ptr);
    if ( v7 )
      operator delete(v7);
    result = v6;
    if ( v6 )
      result = (*(int (__cdecl **)(int))(*(_DWORD *)v6 + 4))(v6);
  }
  return result;
}


_BOOL4 __fastcall ContainerScreenController::_canShowSelectedHoveredSlot(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1

  v1 = this;
  v2 = MinecraftScreenController::getInputMode(this);
  v3 = v2 == 3;
  if ( v2 == 3 )
    v3 = *((_BYTE *)v1 + 568) == 0;
  return v3 != 0;
}


int *__fastcall ContainerScreenController::_setSelectedSlot(int a1, int *a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@3
  int *result; // r0@3

  v4 = a1;
  if ( a3 != -1 )
    *(_DWORD *)(a1 + 564) = a3;
  v5 = a4;
  result = *(int **)(*a2 - 12);
  if ( result )
    result = EntityInteraction::setInteractText((int *)(v4 + 560), a2);
  if ( v5 == 1 )
  {
    result = (int *)1;
    *(_BYTE *)(v4 + 568) = 1;
  }
  return result;
}


int __fastcall ContainerScreenController::_getCursorSelectedItemGroup(ContainerScreenController *this, int a2)
{
  ContainerScreenController *v2; // r4@1
  int v3; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = MinecraftScreenModel::getCursorSelectedItemGroup(*(MinecraftScreenModel **)(a2 + 424));
  ItemInstance::ItemInstance(v2, v3);
  result = *(_DWORD *)(v3 + 72);
  *((_DWORD *)v2 + 18) = result;
  return result;
}


signed int __fastcall ContainerScreenController::_isStillValid(ContainerScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  signed int result; // r0@2

  v1 = this;
  if ( ClientInstanceScreenModel::isPlayerInPortal(*((ClientInstanceScreenModel **)this + 106)) )
    result = 0;
  else
    result = MinecraftScreenController::_isStillValid(v1);
  return result;
}


int *__fastcall ContainerScreenController::_handleSelectSlot(MinecraftScreenController *a1, int *a2, int a3)
{
  int v3; // r7@1
  int *v4; // r5@1
  MinecraftScreenController *v5; // r4@1
  int v6; // r6@1
  int *result; // r0@3

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = MinecraftScreenController::getInputMode(a1);
  if ( v3 != -1 )
    *((_DWORD *)v5 + 141) = v3;
  result = *(int **)(*v4 - 12);
  if ( result )
    result = EntityInteraction::setInteractText((int *)v5 + 140, v4);
  if ( v6 == 3 )
  {
    result = (int *)1;
    *((_BYTE *)v5 + 568) = 1;
  }
  return result;
}


  if ( ContainerScreenController::_selectionActive((ContainerScreenController *)v2) == 1 )
{
    v5 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*(MinecraftScreenModel **)(v2 + 424));
    ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v10, v5);
    *(_DWORD *)(v2 + 464) = *(_BYTE *)(ContainerItemStack::getItemInstance((ContainerItemStack *)&v10) + 14);
    if ( ptr )
      operator delete(ptr);
    if ( v19 )
      operator delete(v19);
    if ( v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    v12 = 0;
  }
  v6 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v21 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  return 4;
}


int __fastcall ContainerScreenController::_handleDestroySelectedItem(ContainerScreenController *a1, int a2)
{
  int v2; // r5@1
  ContainerScreenController *v3; // r4@1
  int result; // r0@1
  const ItemInstance *v5; // r0@2
  int v6; // r1@3
  int v7; // [sp+0h] [bp-58h]@2
  int v8; // [sp+8h] [bp-50h]@9
  void *v9; // [sp+24h] [bp-34h]@7
  void *ptr; // [sp+34h] [bp-24h]@5

  v2 = a2;
  v3 = a1;
  result = ContainerScreenController::_selectionActive(a1);
  if ( result == 1 )
  {
    v5 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*((MinecraftScreenModel **)v3 + 106));
    ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v7, v5);
    if ( v2 )
      v6 = *(_BYTE *)(ContainerItemStack::getItemInstance((ContainerItemStack *)&v7) + 14);
    else
      v6 = 1;
    ContainerItemStack::decreaseCount((ContainerItemStack *)&v7, v6);
    ContainerScreenController::setCursorSelectedItem(v3, (const ContainerItemStack *)&v7);
    if ( ptr )
      operator delete(ptr);
    if ( v9 )
      operator delete(v9);
    result = v8;
    if ( v8 )
      result = (*(int (**)(void))(*(_DWORD *)v8 + 4))();
  }
  return result;
}


int __fastcall ContainerScreenController::_handleTakeAllPlaceAll(int a1)
{
  int v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r1@7
  int v8; // r0@11
  ContainerManagerModel *v9; // r6@11
  unsigned int *v10; // r2@14
  unsigned int v11; // r1@16
  int v12; // r0@23
  int result; // r0@23
  const ItemInstance *v14; // r0@25
  const ItemInstance *v15; // r0@30
  unsigned int *v16; // r1@38
  unsigned int *v17; // r5@44
  int v18; // [sp+0h] [bp-B8h]@30
  int v19; // [sp+8h] [bp-B0h]@34
  void *v20; // [sp+24h] [bp-94h]@32
  void *v21; // [sp+34h] [bp-84h]@30
  char v22; // [sp+48h] [bp-70h]@25
  int v23; // [sp+50h] [bp-68h]@29
  void *v24; // [sp+6Ch] [bp-4Ch]@27
  void *ptr; // [sp+7Ch] [bp-3Ch]@25
  ContainerManagerModel *v26; // [sp+94h] [bp-24h]@1
  int v27; // [sp+98h] [bp-20h]@1

  v1 = a1;
  ContainerManagerController::getContainerManagerModel((ContainerManagerController *)&v26, *(_DWORD *)(a1 + 448));
  v2 = v27;
  if ( !v27 )
  {
    v2 = 0;
LABEL_24:
    if ( ContainerScreenController::_selectionActive((ContainerScreenController *)v1) == 1 )
    {
      v14 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*(MinecraftScreenModel **)(v1 + 424));
      ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v22, v14);
      (*(void (**)(void))(**(_DWORD **)(v1 + 448) + 20))();
      ContainerScreenController::setCursorSelectedItem(
        (ContainerScreenController *)v1,
        (const ContainerItemStack *)&v22);
      if ( ptr )
        operator delete(ptr);
      if ( v24 )
        operator delete(v24);
      result = v23;
    }
    else
      v15 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*(MinecraftScreenModel **)(v1 + 424));
      ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v18, v15);
      (*(void (**)(void))(**(_DWORD **)(v1 + 448) + 16))();
        (const ContainerItemStack *)&v18);
      if ( v21 )
        operator delete(v21);
      if ( v20 )
        operator delete(v20);
      result = v19;
    if ( result )
      result = (*(int (**)(void))(*(_DWORD *)result + 4))();
    goto LABEL_37;
  }
  v3 = *(_DWORD *)(v27 + 4);
  v4 = (unsigned int *)(v27 + 4);
  do
    while ( 1 )
      if ( !v3 )
      {
        v7 = 1;
        v2 = 0;
        goto LABEL_11;
      }
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  while ( v6 );
  __dmb();
  v7 = 0;
  if ( !*v4 )
    v7 = 1;
LABEL_11:
  v8 = v27;
  v9 = v26;
  if ( v7 )
    v9 = 0;
  if ( v27 )
    v10 = (unsigned int *)(v27 + 8);
    if ( &pthread_create )
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  if ( !v9 )
    goto LABEL_24;
  v12 = ContainerManagerModel::getPlayer(v9);
  result = Player::canUseAbility(v12, &Abilities::DOORS_AND_SWITCHES);
  if ( result )
LABEL_37:
  if ( v2 )
    v16 = (unsigned int *)(v2 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
    if ( result == 1 )
      v17 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
      else
        result = (*v17)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


int __fastcall ContainerScreenController::setAssociatedEntityUniqueID(int result, int a2, __int64 a3)
{
  *(_QWORD *)(result + 504) = a3;
  *(_DWORD *)(result + 512) = 2;
  return result;
}


signed int __fastcall ContainerScreenController::_updateHeldButtonStackTaken(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r0@3
  signed int result; // r0@4

  v1 = this;
  if ( !*((_BYTE *)this + 548) )
  {
    *((_DWORD *)this + 136) = getTimeMs();
    *((_BYTE *)v1 + 548) = 1;
  }
  v2 = getTimeMs() - *((_DWORD *)v1 + 136);
  *((_DWORD *)v1 + 135) = v2;
  if ( v2 >= 300 )
    _R0 = v2 - 300;
    __asm
    {
      VLDR            S2, =0.001
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
    }
    result = *((_DWORD *)v1 + 132);
      VMOV            S4, R0
      VCVT.F32.S32    S4, S4
      VMUL.F32        S0, S0, S2
      VMUL.F32        S0, S0, S4
      VCVTR.S32.F32   S0, S0
      VMOV            R1, S0
    if ( result < _R1 )
      _R1 = *((_DWORD *)v1 + 132);
  else
    _R1 = 0;
  if ( _R1 == result )
    result = *((_BYTE *)v1 + 549);
    if ( *((_BYTE *)v1 + 549) )
      ContainerScreenController::_handleHeldButton(v1, *((_DWORD *)v1 + 133));
      ContainerManagerController::resetSplitStack(*((ContainerManagerController **)v1 + 112));
      *((_BYTE *)v1 + 468) &= 0xFCu;
      *((_DWORD *)v1 + 130) = 0;
      sub_119CAD8((void **)v1 + 131, (char *)&unk_257BC67, 0);
      result = -1;
      *((_DWORD *)v1 + 132) = 0;
      *((_DWORD *)v1 + 133) = -1;
      *((_BYTE *)v1 + 548) = 0;
      *((_DWORD *)v1 + 136) = 0;
      *((_DWORD *)v1 + 134) = 0;
      *((_DWORD *)v1 + 135) = 0;
      *((_WORD *)v1 + 276) = 0;
  return result;
}


void __fastcall ContainerScreenController::_registerEventHandlers(ContainerScreenController *this)
{
  ContainerScreenController::_registerEventHandlers(this);
}


int __fastcall ContainerScreenController::_hasSelectedSlotByController(ContainerScreenController *this)
{
  int v1; // r1@1
  bool v2; // zf@1
  int result; // r0@4

  v1 = *((_DWORD *)this + 141);
  v2 = v1 == -1;
  if ( v1 != -1 )
    v2 = *(_DWORD *)(*((_DWORD *)this + 140) - 12) == 0;
  if ( v2 )
    result = 0;
  else
    result = *((_BYTE *)this + 568) != 0;
  return result;
}


int __fastcall ContainerScreenController::_getCoalesceOrder(int a1, int **a2)
{
  return std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
           (unsigned __int64 *)(a1 + 572),
           a2);
}


int __fastcall ContainerScreenController::_handleTakeHalfPlaceOne(ContainerScreenController *a1)
{
  ContainerScreenController *v1; // r4@1
  const ItemInstance *v2; // r0@2
  int result; // r0@6
  const ItemInstance *v4; // r0@7
  int v5; // [sp+0h] [bp-A8h]@7
  int v6; // [sp+8h] [bp-A0h]@11
  void *v7; // [sp+24h] [bp-84h]@9
  void *v8; // [sp+34h] [bp-74h]@7
  char v9; // [sp+48h] [bp-60h]@2
  int v10; // [sp+50h] [bp-58h]@6
  void *v11; // [sp+6Ch] [bp-3Ch]@4
  void *ptr; // [sp+7Ch] [bp-2Ch]@2

  v1 = a1;
  if ( ContainerScreenController::_selectionActive(a1) == 1 )
  {
    v2 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*((MinecraftScreenModel **)v1 + 106));
    ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v9, v2);
    (*(void (**)(void))(**((_DWORD **)v1 + 112) + 28))();
    ContainerScreenController::setCursorSelectedItem(v1, (const ContainerItemStack *)&v9);
    if ( ptr )
      operator delete(ptr);
    if ( v11 )
      operator delete(v11);
    result = v10;
  }
  else
    v4 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*((MinecraftScreenModel **)v1 + 106));
    ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v5, v4);
    (*(void (**)(void))(**((_DWORD **)v1 + 112) + 24))();
    ContainerScreenController::setCursorSelectedItem(v1, (const ContainerItemStack *)&v5);
    if ( v8 )
      operator delete(v8);
    if ( v7 )
      operator delete(v7);
    result = v6;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


signed int __fastcall ContainerScreenController::_clearSelectedSlot(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  sub_119CA68((const void **)this + 140, 0, *(_BYTE **)(*((_DWORD *)this + 140) - 12), 0);
  result = -1;
  *((_DWORD *)v1 + 141) = -1;
  *((_BYTE *)v1 + 568) = 0;
  return result;
}


void __fastcall ContainerScreenController::~ContainerScreenController(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r0@1

  v1 = ContainerScreenController::~ContainerScreenController(this);
  j_j_j__ZdlPv_4((void *)v1);
}


signed int __fastcall ContainerScreenController::isInventoryPanelFocused(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  signed int result; // r0@2

  v1 = this;
  if ( MinecraftScreenController::getInputMode(this) == 3 )
  {
    result = *((_BYTE *)v1 + 568);
    if ( *((_BYTE *)v1 + 568) )
      result = 1;
  }
  else
    result = 0;
  return result;
}


    || ContainerScreenController::_getInteractionModel(v1) )
{
    result = 0;
  }
  else
  {
    result = ContainerScreenController::isSlotsPanelFocused(v1) ^ 1;
  return result;
}


void __fastcall ContainerScreenController::~ContainerScreenController(ContainerScreenController *this)
{
  ContainerScreenController::~ContainerScreenController(this);
}


signed int __fastcall ContainerScreenController::_getShouldSelectedItemStackProgressBarBeVisible(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  const ItemInstance *v2; // r0@1
  ContainerItemStack *v3; // r0@1
  int v4; // r0@1
  int v5; // r5@1
  int v6; // r0@1
  signed int v8; // r4@6
  signed int v10; // r1@8
  int v17; // [sp+0h] [bp-58h]@1
  int v18; // [sp+8h] [bp-50h]@19
  void *v19; // [sp+24h] [bp-34h]@17
  void *ptr; // [sp+34h] [bp-24h]@15

  v1 = this;
  v2 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*((MinecraftScreenModel **)this + 106));
  v3 = (ContainerItemStack *)ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v17, v2);
  v4 = ContainerItemStack::getItemInstance(v3);
  v5 = v4;
  v6 = *(_BYTE *)(v4 + 15);
  _ZF = v6 == 0;
  if ( v6 )
    _ZF = *(_DWORD *)v5 == 0;
  if ( _ZF || ItemInstance::isNull((ItemInstance *)v5) || !*(_BYTE *)(v5 + 14) )
  {
    _R0 = *((_DWORD *)v1 + 132);
    if ( _R0 < 2 )
    {
      v8 = 0;
    }
    else
      v10 = *((_DWORD *)v1 + 135);
      if ( v10 >= 300 )
      {
        __asm { VMOV            S0, R0 }
        _R1 = v10 - 300;
        __asm
        {
          VLDR            S2, =0.001
          VCVT.F32.S32    S0, S0
          VMOV            S4, R1
          VCVT.F32.S32    S4, S4
          VMUL.F32        S0, S0, S2
          VMUL.F32        S0, S0, S4
          VCVTR.S32.F32   S0, S0
          VMOV            R1, S0
        }
        if ( _R0 < _R1 )
          _R1 = _R0;
        if ( _R1 > 0 )
          v8 = 1;
      }
  }
  else
    v8 = 0;
  if ( ptr )
    operator delete(ptr);
  if ( v19 )
    operator delete(v19);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  return v8;
}


_BOOL4 __fastcall ContainerScreenController::_canShowHoveredInventorySlot(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1

  v1 = this;
  return MinecraftScreenController::getInputMode(this) == 3 && (!*((_BYTE *)v1 + 569) || *((_BYTE *)v1 + 568));
}


int __fastcall ContainerScreenController::_onContainerSlotHovered(MinecraftScreenController *a1, const void **a2, int a3)
{
  int v3; // r6@1
  const void **v4; // r4@1
  MinecraftScreenController *v5; // r5@1
  int v6; // r0@2
  bool v7; // zf@2
  _DWORD *v8; // r0@6
  int v9; // r7@6
  size_t v10; // r2@6
  int v11; // r0@7
  bool v12; // zf@7

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( MinecraftScreenController::getInputMode(a1) == 3 )
  {
    v6 = MinecraftScreenController::getInputMode(v5);
    v7 = v6 == 3;
    if ( v6 == 3 )
      v7 = *((_BYTE *)v5 + 568) == 0;
    if ( v7 )
    {
      v8 = (_DWORD *)*((_DWORD *)v5 + 140);
      v9 = *((_DWORD *)*v4 - 3);
      v10 = *(v8 - 3);
      if ( v10 != v9 )
        goto LABEL_17;
      v11 = memcmp(v8, *v4, v10);
      v12 = v11 == 0;
      if ( !v11 )
        v12 = *((_DWORD *)v5 + 141) == v3;
      if ( !v12 )
      {
LABEL_17:
        if ( v3 != -1 )
          *((_DWORD *)v5 + 141) = v3;
        if ( v9 )
          EntityInteraction::setInteractText((int *)v5 + 140, (int *)v4);
      }
    }
  }
  return 0;
}


int __fastcall ContainerScreenController::setAssociatedBlockPos(int result, const BlockPos *a2)
{
  *(_DWORD *)(result + 488) = *(_DWORD *)a2;
  *(_DWORD *)(result + 492) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 496) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(result + 512) = 1;
  return result;
}


signed int __fastcall ContainerScreenController::_handleHeldButton(ContainerScreenController *this, int a2)
{
  int v2; // r3@1
  ContainerScreenController *v3; // r4@1
  int v4; // r0@3
  const ItemInstance *v5; // r0@5
  signed int v6; // r1@5
  signed int v7; // r0@7
  int v16; // ST00_4@10
  char v20; // [sp+8h] [bp-50h]@5
  int v21; // [sp+10h] [bp-48h]@14
  void *v22; // [sp+2Ch] [bp-2Ch]@12
  void *ptr; // [sp+3Ch] [bp-1Ch]@10

  v2 = a2;
  v3 = this;
  if ( a2 != -1 && *((_DWORD *)this + 133) == a2 )
  {
    v4 = *((_DWORD *)this + 130);
    if ( v4 == 2 )
    {
      v7 = *((_DWORD *)v3 + 135);
      if ( v7 >= 300 )
      {
        _R0 = v7 - 300;
        __asm
        {
          VLDR            S2, =0.001
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
        }
        _R0 = *((_DWORD *)v3 + 132);
          VMOV            S4, R0
          VCVT.F32.S32    S4, S4
          VMUL.F32        S0, S0, S2
          VMUL.F32        S0, S0, S4
          VCVTR.S32.F32   S0, S0
          VMOV            R1, S0
        if ( _R0 < _R1 )
          _R1 = *((_DWORD *)v3 + 132);
      }
      else
        _R1 = 0;
      ContainerScreenController::_handleAutoPlace((int)v3, _R1, (const void **)v3 + 131, v2);
    }
    else if ( v4 == 1 )
      v5 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*((MinecraftScreenModel **)v3 + 106));
      ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v20, v5);
      v6 = *((_DWORD *)v3 + 135);
      if ( v6 >= 300 )
        _R1 = v6 - 300;
          VMOV            S0, R1
        _R1 = *((_DWORD *)v3 + 132);
          VMOV            S4, R1
          VMOV            R2, S0
      v16 = *((_DWORD *)v3 + 133);
      (*(void (__cdecl **)(_DWORD))(**((_DWORD **)v3 + 112) + 8))(*((_DWORD *)v3 + 112));
      ContainerScreenController::setCursorSelectedItem(v3, (const ContainerItemStack *)&v20);
      if ( ptr )
        operator delete(ptr);
      if ( v22 )
        operator delete(v22);
      if ( v21 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v21 + 4))(v21);
  }
  return 1;
}


int __fastcall ContainerScreenController::_getInventorySelectedItemId(ContainerScreenController *this)
{
  int v1; // r4@1
  int v2; // r4@10
  int v4; // [sp+0h] [bp-A8h]@1
  int v5; // [sp+8h] [bp-A0h]@5
  void *v6; // [sp+24h] [bp-84h]@3
  void *ptr; // [sp+34h] [bp-74h]@1
  int v8; // [sp+48h] [bp-60h]@1
  int v9; // [sp+50h] [bp-58h]@1
  int v10; // [sp+58h] [bp-50h]@20
  char v11; // [sp+5Eh] [bp-4Ah]@13
  char v12; // [sp+5Fh] [bp-49h]@7
  void *v13; // [sp+74h] [bp-34h]@18
  void *v14; // [sp+84h] [bp-24h]@16

  v1 = MinecraftScreenModel::getCursorSelectedItemGroup(*((MinecraftScreenModel **)this + 106));
  ItemInstance::ItemInstance((ItemInstance *)&v4, v1);
  v8 = *(_DWORD *)(v1 + 72);
  ItemGroup::getItemType((ItemGroup *)&v9, (int)&v4);
  if ( ptr )
    operator delete(ptr);
  if ( v6 )
    operator delete(v6);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  v5 = 0;
  if ( v12 )
  {
    if ( v9 )
    {
      if ( ItemInstance::isNull((ItemInstance *)&v9) )
      {
        v2 = -1;
      }
      else if ( v11 )
        v2 = ItemInstance::getIdAuxEnchanted((ItemInstance *)&v9);
      else
    }
    else
      v2 = -1;
  }
  else
    v2 = -1;
  if ( v14 )
    operator delete(v14);
  if ( v13 )
    operator delete(v13);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  return v2;
}


int __fastcall ContainerScreenController::_getStackItemColor(ContainerScreenController *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r4@1
  bool v3; // zf@1
  int result; // r0@6
  int v5; // [sp+0h] [bp-20h]@6

  v2 = a2;
  v3 = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    v3 = *(_DWORD *)a2 == 0;
  if ( v3 || ItemInstance::isNull(a2) || !*((_BYTE *)v2 + 14) )
  {
    result = -1;
  }
  else
    (*(void (__fastcall **)(int *))(**(_DWORD **)v2 + 156))(&v5);
    result = Color::toARGB((Color *)&v5);
  return result;
}


int *__fastcall ContainerScreenController::onOpen(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r1@1
  __int64 v3; // r2@1

  v1 = this;
  MinecraftScreenModel::linkPlayerToScreen(*((MinecraftScreenModel **)this + 106));
  MinecraftScreenModel::linkScreenToPlayer(*((MinecraftScreenModel **)v1 + 106));
  return j_j_j__ZN16ScreenController6onOpenEv(v1, v2, v3);
}


int __fastcall ContainerScreenController::_canStartSplit(ContainerScreenController *a1, const void **a2, int a3)
{
  int v3; // r6@1
  const void **v4; // r4@1
  ContainerScreenController *v5; // r5@1
  int result; // r0@3
  bool v7; // zf@4

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( ContainerScreenController::_selectionActive(a1) == 1 && *((_BYTE *)v5 + 468) & 2 )
  {
    v7 = v3 == -1;
    result = 0;
    if ( v3 != -1 )
      v7 = *((_DWORD *)v5 + 115) == -1;
    if ( !v7 )
      result = sub_119C9E8(v4, (const char *)&unk_257BC67) != 0;
  }
  else
  return result;
}


signed int __fastcall ContainerScreenController::_needsModal(ContainerScreenController *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = MinecraftScreenController::getInputMode(this);
  v2 = 0;
  if ( v1 == 3 )
    v2 = 1;
  return v2;
}


void __fastcall ContainerScreenController::_registerBindings(ContainerScreenController *this)
{
  ContainerScreenController::_registerBindings(this);
}


void __fastcall ContainerScreenController::_handleCoalesceToIndex(int a1, int **a2)
{
  int v2; // r6@1
  unsigned __int64 *v3; // r0@1
  unsigned __int64 *v4; // r4@1
  char *v5; // r7@1
  unsigned __int64 v6; // r0@1
  signed int v7; // r0@1
  unsigned int v8; // r5@1
  char *v9; // r4@4
  int v10; // r6@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  int *v13; // r0@14
  char *v14; // [sp+4h] [bp-34h]@1
  char *v15; // [sp+8h] [bp-30h]@1
  char *v16; // [sp+Ch] [bp-2Ch]@1

  v2 = a1;
  v3 = (unsigned __int64 *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                             (unsigned __int64 *)(a1 + 572),
                             a2);
  v4 = v3;
  v5 = 0;
  v6 = *v3;
  v14 = 0;
  v15 = 0;
  v7 = HIDWORD(v6) - v6;
  v16 = 0;
  v8 = v7 >> 2;
  if ( v7 >> 2 )
  {
    if ( v8 >= 0x40000000 )
      sub_119C874();
    v5 = (char *)operator new(v7);
  }
  v14 = v5;
  v15 = v5;
  v16 = &v5[4 * v8];
  v15 = (char *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                  *v4,
                  *v4 >> 32,
                  (int)v5);
  (*(void (**)(void))(**(_DWORD **)(v2 + 448) + 44))();
  v10 = (int)v15;
  v9 = v14;
  if ( v14 != v15 )
    do
    {
      v13 = (int *)(*(_DWORD *)v9 - 12);
      if ( v13 != &dword_28898C0 )
      {
        v11 = (unsigned int *)(*(_DWORD *)v9 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v13);
      }
      v9 += 4;
    }
    while ( v9 != (char *)v10 );
    v9 = v14;
  if ( v9 )
    operator delete(v9);
}


int __fastcall ContainerScreenController::setCursorSelectedItem(ContainerScreenController *this, const ContainerItemStack *a2)
{
  ContainerItemStack *v2; // r4@1
  ContainerScreenController *v3; // r5@1
  MinecraftScreenModel *v4; // r6@1
  const ItemInstance *v5; // r0@1
  MinecraftScreenModel *v6; // r5@2
  const ItemInstance *v7; // r0@2
  int result; // r0@8
  int v9; // r6@9
  MinecraftScreenModel *v10; // r5@9
  int v11; // r0@9
  int v12; // [sp+0h] [bp-150h]@9
  int v13; // [sp+8h] [bp-148h]@19
  void *v14; // [sp+24h] [bp-12Ch]@17
  void *v15; // [sp+34h] [bp-11Ch]@15
  char v16; // [sp+48h] [bp-108h]@9
  int v17; // [sp+50h] [bp-100h]@13
  void *v18; // [sp+6Ch] [bp-E4h]@11
  void *v19; // [sp+7Ch] [bp-D4h]@9
  char v20; // [sp+98h] [bp-B8h]@9
  int v21; // [sp+A0h] [bp-B0h]@25
  void *v22; // [sp+BCh] [bp-94h]@23
  void *v23; // [sp+CCh] [bp-84h]@21
  int v24; // [sp+E0h] [bp-70h]@9
  char v25; // [sp+E8h] [bp-68h]@2
  int v26; // [sp+F0h] [bp-60h]@6
  void *v27; // [sp+10Ch] [bp-44h]@4
  void *ptr; // [sp+11Ch] [bp-34h]@2

  v2 = a2;
  v3 = this;
  v4 = (MinecraftScreenModel *)*((_DWORD *)this + 106);
  v5 = (const ItemInstance *)ContainerItemStack::getItemInstance(a2);
  MinecraftScreenModel::setCursorSelectedItem(v4, v5);
  if ( *((_BYTE *)v3 + 468) & 1 )
  {
    v9 = MinecraftScreenModel::getCursorSelectedItemGroup(*((MinecraftScreenModel **)v3 + 106));
    ItemInstance::ItemInstance((ItemInstance *)&v20, v9);
    v24 = *(_DWORD *)(v9 + 72);
    v10 = (MinecraftScreenModel *)*((_DWORD *)v3 + 106);
    ItemGroup::getItemType((ItemGroup *)&v12, (int)&v20);
    v11 = ContainerItemStack::getCount(v2);
    ItemGroup::ItemGroup((ItemInstance *)&v16, (int)&v12, v11);
    MinecraftScreenModel::setCursorSelectedItemGroup(v10, (const ItemGroup *)&v16);
    if ( v19 )
      operator delete(v19);
    if ( v18 )
      operator delete(v18);
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
    v17 = 0;
    if ( v15 )
      operator delete(v15);
    if ( v14 )
      operator delete(v14);
    if ( v13 )
      (*(void (**)(void))(*(_DWORD *)v13 + 4))();
    v13 = 0;
    if ( v23 )
      operator delete(v23);
    if ( v22 )
      operator delete(v22);
    result = v21;
    if ( v21 )
      result = (*(int (**)(void))(*(_DWORD *)v21 + 4))();
  }
  else
    v6 = (MinecraftScreenModel *)*((_DWORD *)v3 + 106);
    v7 = (const ItemInstance *)ContainerItemStack::getItemInstance(v2);
    ItemGroup::ItemGroup((ItemGroup *)&v25, v7);
    MinecraftScreenModel::setCursorSelectedItemGroup(v6, (const ItemGroup *)&v25);
    if ( ptr )
      operator delete(ptr);
    if ( v27 )
      operator delete(v27);
    if ( v26 )
      (*(void (**)(void))(*(_DWORD *)v26 + 4))();
    result = 0;
    v26 = 0;
  return result;
}


int __fastcall ContainerScreenController::_handleSplit(int a1)
{
  int v1; // r4@1
  int v2; // r7@1
  unsigned int v3; // ST00_4@1
  int result; // r0@17
  char v5; // [sp+8h] [bp-F8h]@1
  int v6; // [sp+10h] [bp-F0h]@11
  void *v7; // [sp+2Ch] [bp-D4h]@9
  void *v8; // [sp+3Ch] [bp-C4h]@7
  char v9; // [sp+50h] [bp-B0h]@1
  int v10; // [sp+58h] [bp-A8h]@5
  void *v11; // [sp+74h] [bp-8Ch]@3
  void *ptr; // [sp+84h] [bp-7Ch]@1
  char v13; // [sp+98h] [bp-68h]@1
  int v14; // [sp+A0h] [bp-60h]@17
  void *v15; // [sp+BCh] [bp-44h]@15
  void *v16; // [sp+CCh] [bp-34h]@13
  int v17; // [sp+E0h] [bp-20h]@1

  v1 = a1;
  v2 = MinecraftScreenModel::getCursorSelectedItemGroup(*(MinecraftScreenModel **)(a1 + 424));
  ItemInstance::ItemInstance((ItemInstance *)&v13, v2);
  v17 = *(_DWORD *)(v2 + 72);
  v3 = (*(_BYTE *)(v1 + 468) & 4u) >> 2;
  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v1 + 448) + 36))(*(_DWORD *)(v1 + 448));
  ItemGroup::getItemStack((ItemGroup *)&v5, (int)&v13);
  ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v9, (const ItemInstance *)&v5);
  ContainerScreenController::setCursorSelectedItem((ContainerScreenController *)v1, (const ContainerItemStack *)&v9);
  if ( ptr )
    operator delete(ptr);
  if ( v11 )
    operator delete(v11);
  if ( v10 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v10 + 4))(v10);
  v10 = 0;
  if ( v8 )
    operator delete(v8);
  if ( v7 )
    operator delete(v7);
  if ( v6 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v6 + 4))(v6);
  v6 = 0;
  if ( v16 )
    operator delete(v16);
  if ( v15 )
    operator delete(v15);
  result = v14;
  if ( v14 )
    result = (*(int (__cdecl **)(int))(*(_DWORD *)v14 + 4))(v14);
  return result;
}


void __fastcall ContainerScreenController::_getCollectionName(ContainerScreenController *this, UIPropertyBag *a2, int a3)
{
  int v3; // r5@1
  int *v4; // r4@1
  Json::Value *v5; // r5@1
  Json::Value *v6; // r5@3
  char *v7; // r1@4
  char *v8; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  char *v11; // [sp+8h] [bp-20h]@1
  char v12; // [sp+14h] [bp-14h]@4

  v3 = a3;
  v4 = (int *)this;
  sub_119C884((void **)&v11, (const char *)&unk_257BC67);
  v5 = (Json::Value *)(v3 + 8);
  if ( Json::Value::isNull(v5)
    || Json::Value::isObject(v5) != 1
    || (v6 = (Json::Value *)Json::Value::operator[]((int)v5, "#collection_name"), Json::Value::isString(v6) != 1) )
  {
    *v4 = (int)v11;
    v7 = (char *)&unk_28898CC;
    v11 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as(v4, (int)&v12, (int)v6);
    v7 = v11;
  v8 = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v7 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v8);
}


int __fastcall ContainerScreenController::_getAutoPlaceOrder(int a1, int **a2)
{
  return std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
           (unsigned __int64 *)(a1 + 600),
           a2);
}


    || ContainerScreenController::_getInteractionModel(v1) )
{
    result = 0;
  }
  else
  {
    result = ContainerScreenController::isSlotsPanelFocused(v1);
  return result;
}


void __fastcall ContainerScreenController::_registerEventHandlers(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r6@1
  void *v3; // r0@1
  int v4; // r11@2
  void *v5; // r0@2
  int v6; // r9@3
  void *v7; // r0@3
  int v8; // r5@4
  void *v9; // r0@4
  int v10; // r8@5
  void *v11; // r0@5
  int v12; // r10@6
  void *v13; // r0@6
  int v14; // r7@7
  void *v15; // r0@7
  int v16; // r7@8
  void *v17; // r0@8
  void *v18; // r0@9
  int v19; // r5@10
  void *v20; // r0@10
  _DWORD *v21; // r0@11
  __int64 v22; // r1@11
  unsigned int v23; // r6@13
  _DWORD *v24; // r0@13
  unsigned int v25; // r6@15
  _DWORD *v26; // r0@15
  unsigned int v27; // r6@17
  _DWORD *v28; // r0@17
  unsigned int v29; // r6@19
  _DWORD *v30; // r0@19
  _DWORD *v31; // r0@21
  __int64 v32; // r1@21
  _DWORD *v33; // r0@23
  __int64 v34; // r1@23
  _DWORD *v35; // r0@25
  __int64 v36; // r1@25
  _DWORD *v37; // r0@27
  __int64 v38; // r1@27
  _DWORD *v39; // r0@29
  __int64 v40; // r1@29
  _DWORD *v41; // r0@31
  __int64 v42; // r1@31
  _DWORD *v43; // r0@33
  __int64 v44; // r1@33
  unsigned int v45; // r6@35
  _DWORD *v46; // r0@35
  unsigned int v47; // r6@37
  _DWORD *v48; // r0@37
  unsigned int v49; // r6@39
  _DWORD *v50; // r0@39
  unsigned int v51; // r6@41
  _DWORD *v52; // r0@41
  unsigned int v53; // r6@43
  _DWORD *v54; // r0@43
  int v55; // r0@45
  int v56; // r0@45
  void *v57; // r0@45
  __int64 v58; // kr00_8@45
  int v59; // r6@45
  _DWORD *v60; // r0@45
  __int64 v61; // r1@45
  _DWORD *v62; // r0@47
  __int64 v63; // r1@47
  _DWORD *v64; // r0@49
  __int64 v65; // r1@49
  _DWORD *v66; // r0@51
  __int64 v67; // r1@51
  _DWORD *v68; // r0@53
  __int64 v69; // r1@53
  unsigned int *v70; // r2@58
  signed int v71; // r1@60
  unsigned int *v72; // r2@62
  signed int v73; // r1@64
  unsigned int *v74; // r2@66
  signed int v75; // r1@68
  unsigned int *v76; // r2@70
  signed int v77; // r1@72
  unsigned int *v78; // r2@74
  signed int v79; // r1@76
  unsigned int *v80; // r2@78
  signed int v81; // r1@80
  unsigned int *v82; // r2@82
  signed int v83; // r1@84
  unsigned int *v84; // r2@86
  signed int v85; // r1@88
  unsigned int *v86; // r2@90
  signed int v87; // r1@92
  unsigned int *v88; // r2@94
  signed int v89; // r1@96
  __int16 v90; // [sp+8h] [bp-208h]@9
  unsigned int v91; // [sp+10h] [bp-200h]@8
  unsigned int v92; // [sp+14h] [bp-1FCh]@8
  _DWORD *v93; // [sp+18h] [bp-1F8h]@53
  __int64 v94; // [sp+20h] [bp-1F0h]@53
  _DWORD *v95; // [sp+28h] [bp-1E8h]@51
  __int64 v96; // [sp+30h] [bp-1E0h]@51
  _DWORD *v97; // [sp+38h] [bp-1D8h]@49
  __int64 v98; // [sp+40h] [bp-1D0h]@49
  _DWORD *v99; // [sp+48h] [bp-1C8h]@47
  __int64 v100; // [sp+50h] [bp-1C0h]@47
  _DWORD *v101; // [sp+58h] [bp-1B8h]@45
  __int64 v102; // [sp+60h] [bp-1B0h]@45
  __int16 v103; // [sp+68h] [bp-1A8h]@45
  __int16 v104; // [sp+6Ah] [bp-1A6h]@45
  __int16 v105; // [sp+6Ch] [bp-1A4h]@45
  __int16 v106; // [sp+6Eh] [bp-1A2h]@45
  int v107; // [sp+70h] [bp-1A0h]@45
  __int16 v108; // [sp+74h] [bp-19Ch]@45
  void *ptr; // [sp+7Ch] [bp-194h]@45
  char *v110; // [sp+80h] [bp-190h]@45
  char *v111; // [sp+84h] [bp-18Ch]@45
  _DWORD *v112; // [sp+88h] [bp-188h]@43
  void (*v113)(void); // [sp+90h] [bp-180h]@43
  int (__fastcall *v114)(int **, UIPropertyBag *); // [sp+94h] [bp-17Ch]@43
  _DWORD *v115; // [sp+98h] [bp-178h]@41
  void (*v116)(void); // [sp+A0h] [bp-170h]@41
  int (__fastcall *v117)(int **, UIPropertyBag *); // [sp+A4h] [bp-16Ch]@41
  _DWORD *v118; // [sp+A8h] [bp-168h]@39
  void (*v119)(void); // [sp+B0h] [bp-160h]@39
  int (__fastcall *v120)(int **, UIPropertyBag *); // [sp+B4h] [bp-15Ch]@39
  _DWORD *v121; // [sp+B8h] [bp-158h]@37
  void (*v122)(void); // [sp+C0h] [bp-150h]@37
  int (__fastcall *v123)(int **, UIPropertyBag *); // [sp+C4h] [bp-14Ch]@37
  _DWORD *v124; // [sp+C8h] [bp-148h]@35
  void (*v125)(void); // [sp+D0h] [bp-140h]@35
  int (__fastcall *v126)(int **, UIPropertyBag *); // [sp+D4h] [bp-13Ch]@35
  _DWORD *v127; // [sp+D8h] [bp-138h]@33
  __int64 v128; // [sp+E0h] [bp-130h]@33
  _DWORD *v129; // [sp+E8h] [bp-128h]@31
  __int64 v130; // [sp+F0h] [bp-120h]@31
  _DWORD *v131; // [sp+F8h] [bp-118h]@29
  __int64 v132; // [sp+100h] [bp-110h]@29
  _DWORD *v133; // [sp+108h] [bp-108h]@27
  __int64 v134; // [sp+110h] [bp-100h]@27
  _DWORD *v135; // [sp+118h] [bp-F8h]@25
  __int64 v136; // [sp+120h] [bp-F0h]@25
  _DWORD *v137; // [sp+128h] [bp-E8h]@23
  __int64 v138; // [sp+130h] [bp-E0h]@23
  _DWORD *v139; // [sp+138h] [bp-D8h]@21
  __int64 v140; // [sp+140h] [bp-D0h]@21
  _DWORD *v141; // [sp+148h] [bp-C8h]@19
  void (*v142)(void); // [sp+150h] [bp-C0h]@19
  signed int (__fastcall *v143)(MinecraftScreenController ***, int); // [sp+154h] [bp-BCh]@19
  _DWORD *v144; // [sp+158h] [bp-B8h]@17
  void (*v145)(void); // [sp+160h] [bp-B0h]@17
  int (__fastcall *v146)(MinecraftScreenController ***, int); // [sp+164h] [bp-ACh]@17
  _DWORD *v147; // [sp+168h] [bp-A8h]@15
  void (*v148)(void); // [sp+170h] [bp-A0h]@15
  signed int (__fastcall *v149)(int **, UIPropertyBag *); // [sp+174h] [bp-9Ch]@15
  _DWORD *v150; // [sp+178h] [bp-98h]@13
  void (*v151)(void); // [sp+180h] [bp-90h]@13
  signed int (__fastcall *v152)(int **, UIPropertyBag *); // [sp+184h] [bp-8Ch]@13
  _DWORD *v153; // [sp+188h] [bp-88h]@11
  __int64 v154; // [sp+190h] [bp-80h]@11
  int v155; // [sp+19Ch] [bp-74h]@10
  int v156; // [sp+1A4h] [bp-6Ch]@9
  int v157; // [sp+1ACh] [bp-64h]@8
  int v158; // [sp+1B4h] [bp-5Ch]@7
  int v159; // [sp+1BCh] [bp-54h]@6
  int v160; // [sp+1C4h] [bp-4Ch]@5
  int v161; // [sp+1CCh] [bp-44h]@4
  int v162; // [sp+1D4h] [bp-3Ch]@3
  int v163; // [sp+1DCh] [bp-34h]@2
  int v164; // [sp+1E4h] [bp-2Ch]@1

  v1 = this;
  sub_119C884((void **)&v164, "button.shape_drawing");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v164);
  v3 = (void *)(v164 - 12);
  if ( (int *)(v164 - 12) != &dword_28898C0 )
  {
    v70 = (unsigned int *)(v164 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
    }
    else
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  sub_119C884((void **)&v163, "button.coalesce_stack");
  v4 = MinecraftScreenController::_getNameId(v1, (int **)&v163);
  v5 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v163 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C884((void **)&v162, "button.drop_all");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v162);
  v7 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v162 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v161, "button.drop_one");
  v8 = MinecraftScreenController::_getNameId(v1, (int **)&v161);
  v9 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v161 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v160, "button.cursor_drop_all");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v160);
  v11 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v160 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v159, "button.cursor_drop_one");
  v12 = MinecraftScreenController::_getNameId(v1, (int **)&v159);
  v13 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v159 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v158, "button.cursor_destroy_one");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v158);
  v15 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v158 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v91 = v8;
  v92 = v14;
  sub_119C884((void **)&v157, "button.cursor_destroy_all");
  v16 = MinecraftScreenController::_getNameId(v1, (int **)&v157);
  v17 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v157 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v156, "button.container_reset_held");
  v90 = MinecraftScreenController::_getNameId(v1, (int **)&v156);
  v18 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v156 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  sub_119C884((void **)&v155, "button.container_slot_hovered");
  v19 = MinecraftScreenController::_getNameId(v1, (int **)&v155);
  v20 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v155 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = operator new(4u);
  LODWORD(v22) = sub_11601A8;
  *v21 = v1;
  HIDWORD(v22) = sub_1160064;
  v153 = v21;
  v154 = v22;
  ScreenController::registerButtonEventHandler((int)v1, v2, 1, 0, (int)&v153);
  if ( (_DWORD)v154 )
    ((void (*)(void))v154)();
  v23 = *((_WORD *)v1 + 218);
  v24 = operator new(4u);
  *v24 = v1;
  v150 = v24;
  v151 = (void (*)(void))sub_11602FC;
  v152 = sub_11601E0;
  ScreenController::registerButtonEventHandler((int)v1, v23, 1, 0, (int)&v150);
  if ( v151 )
    v151();
  v25 = *((_WORD *)v1 + 219);
  v26 = operator new(4u);
  *v26 = v1;
  v147 = v26;
  v148 = (void (*)(void))sub_1160450;
  v149 = sub_1160334;
  ScreenController::registerButtonEventHandler((int)v1, v25, 1, 0, (int)&v147);
  if ( v148 )
    v148();
  v27 = *((_WORD *)v1 + 220);
  v28 = operator new(4u);
  *v28 = v1;
  v144 = v28;
  v145 = (void (*)(void))sub_1160630;
  v146 = sub_1160488;
  ScreenController::registerButtonEventHandler((int)v1, v27, 1, 3, (int)&v144);
  if ( v145 )
    v145();
  v29 = *((_WORD *)v1 + 221);
  v30 = operator new(4u);
  *v30 = v1;
  v141 = v30;
  v142 = (void (*)(void))sub_11607FC;
  v143 = sub_1160668;
  ScreenController::registerButtonEventHandler((int)v1, v29, 1, 0, (int)&v141);
  if ( v142 )
    v142();
  v31 = operator new(4u);
  LODWORD(v32) = sub_1160842;
  *v31 = v1;
  HIDWORD(v32) = sub_1160832;
  v139 = v31;
  v140 = v32;
  ScreenController::registerButtonClickHandler((int)v1, v12, (int)&v139);
  if ( (_DWORD)v140 )
    ((void (*)(void))v140)();
  v33 = operator new(4u);
  LODWORD(v34) = sub_1160888;
  *v33 = v1;
  HIDWORD(v34) = sub_1160878;
  v137 = v33;
  v138 = v34;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v137);
  if ( (_DWORD)v138 )
    ((void (*)(void))v138)();
  v35 = operator new(4u);
  LODWORD(v36) = sub_11608CE;
  *v35 = v1;
  HIDWORD(v36) = sub_11608BE;
  v135 = v35;
  v136 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v92, (int)&v135);
  if ( (_DWORD)v136 )
    ((void (*)(void))v136)();
  v37 = operator new(4u);
  LODWORD(v38) = sub_1160914;
  *v37 = v1;
  HIDWORD(v38) = sub_1160904;
  v133 = v37;
  v134 = v38;
  ScreenController::registerButtonClickHandler((int)v1, v16, (int)&v133);
  if ( (_DWORD)v134 )
    ((void (*)(void))v134)();
  v39 = operator new(4u);
  LODWORD(v40) = sub_1160A68;
  *v39 = v1;
  HIDWORD(v40) = sub_116094C;
  v131 = v39;
  v132 = v40;
  ScreenController::registerButtonClickHandler((int)v1, v91, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  v41 = operator new(4u);
  LODWORD(v42) = sub_1160BBC;
  *v41 = v1;
  HIDWORD(v42) = sub_1160AA0;
  v129 = v41;
  v130 = v42;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v129);
  if ( (_DWORD)v130 )
    ((void (*)(void))v130)();
  v43 = operator new(4u);
  LODWORD(v44) = sub_1160D28;
  *v43 = v1;
  HIDWORD(v44) = sub_1160BF4;
  v127 = v43;
  v128 = v44;
  ScreenController::registerButtonClickHandler((int)v1, v4, (int)&v127);
  if ( (_DWORD)v128 )
    ((void (*)(void))v128)();
  v45 = *((_WORD *)v1 + 218);
  v46 = operator new(4u);
  *v46 = v1;
  v124 = v46;
  v125 = (void (*)(void))sub_1160E7C;
  v126 = sub_1160D60;
  ScreenController::registerButtonClickHandler((int)v1, v45, (int)&v124);
  if ( v125 )
    v125();
  v47 = *((_WORD *)v1 + 219);
  v48 = operator new(4u);
  *v48 = v1;
  v121 = v48;
  v122 = (void (*)(void))sub_1160FD0;
  v123 = sub_1160EB4;
  ScreenController::registerButtonClickHandler((int)v1, v47, (int)&v121);
  if ( v122 )
    v122();
  v49 = *((_WORD *)v1 + 221);
  v50 = operator new(4u);
  *v50 = v1;
  v118 = v50;
  v119 = (void (*)(void))sub_1161124;
  v120 = sub_1161008;
  ScreenController::registerButtonClickHandler((int)v1, v49, (int)&v118);
  if ( v119 )
    v119();
  v51 = *((_WORD *)v1 + 222);
  v52 = operator new(4u);
  *v52 = v1;
  v115 = v52;
  v116 = (void (*)(void))sub_116128C;
  v117 = sub_116115C;
  ScreenController::registerButtonClickHandler((int)v1, v51, (int)&v115);
  if ( v116 )
    v116();
  v53 = *((_WORD *)v1 + 223);
  v54 = operator new(4u);
  *v54 = v1;
  v112 = v54;
  v113 = (void (*)(void))sub_11613E4;
  v114 = sub_11612C4;
  ScreenController::registerButtonClickHandler((int)v1, v53, (int)&v112);
  if ( v113 )
    v113();
  v103 = v10;
  v104 = v12;
  v105 = v90;
  v55 = *((_DWORD *)v1 + 109);
  v106 = *((_DWORD *)v1 + 109);
  LOWORD(v107) = HIWORD(v55);
  v56 = *((_DWORD *)v1 + 110);
  HIWORD(v107) = *((_DWORD *)v1 + 110);
  v108 = HIWORD(v56);
  v57 = operator new(0xEu);
  ptr = v57;
  v111 = (char *)v57 + 14;
  v58 = *(_QWORD *)&v103;
  v59 = v107;
  *((_WORD *)v57 + 6) = v108;
  *((_DWORD *)v57 + 2) = v59;
  *(_QWORD *)v57 = v58;
  v110 = (char *)v57 + 14;
  v60 = operator new(4u);
  LODWORD(v61) = sub_116154C;
  *v60 = v1;
  HIDWORD(v61) = sub_116141C;
  v101 = v60;
  v102 = v61;
  ScreenController::registerButtonEventHandler((int)v1, &ptr, 1, 0, (int)&v101);
  if ( (_DWORD)v102 )
    ((void (*)(void))v102)();
  v62 = operator new(4u);
  LODWORD(v63) = sub_1161590;
  *v62 = v1;
  HIDWORD(v63) = sub_1161582;
  v99 = v62;
  v100 = v63;
  ScreenController::registerButtonEventHandler((int)v1, &ptr, 0, 3, (int)&v99);
  if ( (_DWORD)v100 )
    ((void (*)(void))v100)();
  v64 = operator new(4u);
  LODWORD(v65) = sub_1161610;
  *v64 = v1;
  HIDWORD(v65) = sub_11615C8;
  v97 = v64;
  v98 = v65;
  ScreenController::registerFocusMovedEventHandler((int)v1, (int)&v97);
  if ( (_DWORD)v98 )
    ((void (*)(void))v98)();
  v66 = operator new(4u);
  LODWORD(v67) = sub_11616B0;
  *v66 = v1;
  HIDWORD(v67) = sub_1161648;
  v95 = v66;
  v96 = v67;
  ScreenController::registerPointerHeldEventHandler((int)v1, (int)&v95);
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  v68 = operator new(4u);
  LODWORD(v69) = sub_1161804;
  *v68 = v1;
  HIDWORD(v69) = sub_11616E8;
  v93 = v68;
  v94 = v69;
  ScreenController::registerButtonEventHandler((int)v1, v19, 1, 0, (int)&v93);
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  if ( ptr )
    operator delete(ptr);
}


int __fastcall ContainerScreenController::_handleDropSelectedItem(ContainerScreenController *a1, int a2)
{
  int v2; // r5@1
  ContainerScreenController *v3; // r4@1
  int result; // r0@1
  const ItemInstance *v5; // r0@2
  int v6; // r5@3
  MinecraftScreenModel *v7; // r6@5
  const ItemInstance *v8; // r0@5
  int v9; // [sp+0h] [bp-58h]@2
  int v10; // [sp+8h] [bp-50h]@9
  void *v11; // [sp+24h] [bp-34h]@7
  void *ptr; // [sp+34h] [bp-24h]@5

  v2 = a2;
  v3 = a1;
  result = ContainerScreenController::_selectionActive(a1);
  if ( result == 1 )
  {
    v5 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*((MinecraftScreenModel **)v3 + 106));
    ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v9, v5);
    if ( v2 )
      v6 = *(_BYTE *)(ContainerItemStack::getItemInstance((ContainerItemStack *)&v9) + 14);
    else
      v6 = 1;
    v7 = (MinecraftScreenModel *)*((_DWORD *)v3 + 106);
    v8 = (const ItemInstance *)ContainerItemStack::getItemInstance((ContainerItemStack *)&v9);
    MinecraftScreenModel::dropItemsFromPlayer(v7, v8, v6);
    ContainerItemStack::decreaseCount((ContainerItemStack *)&v9, v6);
    ContainerScreenController::setCursorSelectedItem(v3, (const ContainerItemStack *)&v9);
    if ( ptr )
      operator delete(ptr);
    if ( v11 )
      operator delete(v11);
    result = v10;
    if ( v10 )
      result = (*(int (**)(void))(*(_DWORD *)v10 + 4))();
  }
  return result;
}


signed int __fastcall ContainerScreenController::isSlotsPanelFocused(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r1@1
  signed int result; // r0@1

  v1 = this;
  v2 = MinecraftScreenController::getInputMode(this);
  result = 0;
  if ( v2 == 3 && !*((_BYTE *)v1 + 568) )
    result = 1;
  return result;
}


    || ContainerScreenController::_getInteractionModel(v1) )
{
    result = 0;
  }
  else
  {
    result = ContainerScreenController::isSlotsPanelFocused(v1) ^ 1;
  return result;
}


int __fastcall ContainerScreenController::tick(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r5@1
  int v2; // r4@1
  ContainerManagerController *v3; // r0@2

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  if ( (*(int (__fastcall **)(ContainerScreenController *))(*(_DWORD *)v1 + 100))(v1) == 1 )
  {
    if ( (v3 = (ContainerManagerController *)*((_DWORD *)v1 + 112)) != 0
      && ContainerManagerController::getAndResetContainerDirty(v3) == 1
      || *((_BYTE *)v1 + 456) )
    {
      v2 |= 1u;
      *((_BYTE *)v1 + 456) = 0;
    }
  }
  return v2;
}


int __fastcall ContainerScreenController::setViewCommand(ContainerScreenController *this, ScreenViewCommand *a2)
{
  int v2; // r12@0
  int v3; // lr@0
  ContainerScreenController *v4; // r4@1
  int result; // r0@1
  ScreenViewCommand *v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = this;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = (void (__fastcall *)(int *))*((_DWORD *)a2 + 2);
  if ( v7 )
  {
    v7(&v11);
    result = *((_DWORD *)v6 + 3);
    v14 = *((_DWORD *)v6 + 3);
    v8 = *((_DWORD *)v6 + 2);
    v13 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 2);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = (int)v4 + 472;
  *(_QWORD *)&v11 = *((_QWORD *)v4 + 59);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 120);
  v10 = v13;
  *((_DWORD *)v4 + 120) = v8;
  v14 = *((_DWORD *)v4 + 121);
  *((_DWORD *)v4 + 121) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall ContainerScreenController::_getStackItemCount(ContainerScreenController *this, int a2)
{
  void **v2; // r4@1
  int v3; // r5@1
  bool v4; // zf@1
  int result; // r0@19
  char *v6; // r0@22
  int v7; // r2@22
  char v8; // [sp+4h] [bp-ACh]@22
  int v9; // [sp+8h] [bp-A8h]@1
  int v10; // [sp+10h] [bp-A0h]@13
  char v11; // [sp+16h] [bp-9Ah]@5
  char v12; // [sp+17h] [bp-99h]@1
  void *v13; // [sp+2Ch] [bp-84h]@11
  void *ptr; // [sp+3Ch] [bp-74h]@9
  char v15; // [sp+50h] [bp-60h]@1
  int v16; // [sp+58h] [bp-58h]@19
  void *v17; // [sp+74h] [bp-3Ch]@17
  void *v18; // [sp+84h] [bp-2Ch]@15
  int v19; // [sp+98h] [bp-18h]@1

  v2 = (void **)this;
  v3 = MinecraftScreenModel::getCursorSelectedItemGroup(*(MinecraftScreenModel **)(a2 + 424));
  ItemInstance::ItemInstance((ItemInstance *)&v15, v3);
  v19 = *(_DWORD *)(v3 + 72);
  ItemGroup::getItemType((ItemGroup *)&v9, (int)&v15);
  v4 = v12 == 0;
  if ( v12 )
    v4 = v9 == 0;
  if ( v4
    || ItemInstance::isNull((ItemInstance *)&v9)
    || !v11
    || ItemInstance::isStackable((ItemInstance *)&v9) != 1
    || ItemGroup::getCount((ItemGroup *)&v15) == 1 )
  {
    *v2 = &unk_28898CC;
  }
  else
    v6 = (char *)ItemGroup::getCount((ItemGroup *)&v15);
    GuiData::itemCountItoa((GuiData *)&v8, v6, v7);
    sub_119C884(v2, &v8);
  if ( ptr )
    operator delete(ptr);
  if ( v13 )
    operator delete(v13);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  if ( v18 )
    operator delete(v18);
  if ( v17 )
    operator delete(v17);
  result = v16;
  if ( v16 )
    result = (*(int (**)(void))(*(_DWORD *)v16 + 4))();
  return result;
}


char *__fastcall ContainerScreenController::getSelectedSlotData(ContainerScreenController *this)
{
  return (char *)this + 560;
}


ItemInstance *__fastcall ContainerScreenController::getItemInstance(int a1, int **a2, int a3)
{
  int v3; // r4@1
  int v4; // r9@1
  const void **v5; // r10@1
  int v6; // r0@1
  ItemInstance *v7; // r7@1
  int v8; // r0@1
  bool v9; // zf@1
  int v10; // r11@6
  int v11; // r0@6
  int v12; // r4@7
  int v13; // r5@7
  bool v14; // zf@8
  int v15; // r7@11
  bool v16; // zf@14
  _DWORD *v17; // r0@18
  const void *v18; // r11@19
  _DWORD *v19; // r1@19
  size_t v20; // r4@19
  int v21; // r6@21
  int v22; // r0@21
  int v23; // r9@22
  int v24; // r7@22
  bool v25; // zf@23
  int v26; // r8@26
  bool v27; // zf@29
  _DWORD *v28; // r0@33
  _DWORD *v29; // r1@34
  int v30; // r4@38
  void *v31; // r0@38
  int v32; // r4@39
  int v33; // r0@39
  int v34; // r0@39
  bool v35; // zf@39
  int v36; // r4@45
  unsigned int *v37; // r1@46
  unsigned int v38; // r0@48
  unsigned int *v39; // r5@52
  unsigned int v40; // r0@54
  unsigned int *v42; // r2@60
  signed int v43; // r1@62
  int v44; // [sp+0h] [bp-40h]@21
  int v45; // [sp+4h] [bp-3Ch]@6
  int v46; // [sp+8h] [bp-38h]@38
  int v47; // [sp+Ch] [bp-34h]@38
  int v48; // [sp+10h] [bp-30h]@45

  v3 = a1;
  v4 = a3;
  v5 = (const void **)a2;
  v6 = ContainerManagerController::getItemInstance(*(_DWORD *)(a1 + 448), a2, a3);
  v7 = (ItemInstance *)v6;
  v8 = *(_BYTE *)(v6 + 15);
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)v7 == 0;
  if ( v9 || ItemInstance::isNull(v7) || !*((_BYTE *)v7 + 14) )
  {
    v45 = v3;
    v10 = 0xAu % dword_27DAA28;
    v11 = *(_DWORD *)(dword_27DAA24 + 4 * (0xAu % dword_27DAA28));
    if ( !v11 )
      goto LABEL_18;
    v12 = *(_DWORD *)v11;
    v13 = *(_DWORD *)(*(_DWORD *)v11 + 12);
    while ( 1 )
    {
      v14 = v13 == 10;
      if ( v13 == 10 )
        v14 = *(_DWORD *)(v12 + 4) == 10;
      if ( v14 )
        break;
      v15 = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 )
      {
        v13 = *(_DWORD *)(v15 + 12);
        v11 = v12;
        v12 = *(_DWORD *)v12;
        if ( *(_DWORD *)(v15 + 12) % (unsigned int)dword_27DAA28 == v10 )
          continue;
      }
    }
    v16 = v11 == 0;
    if ( v11 )
      v11 = *(_DWORD *)v11;
      v16 = v11 == 0;
    if ( v16 )
LABEL_18:
      v17 = operator new(0x10u);
      *v17 = 0;
      v17[1] = 10;
      v17[2] = &unk_28898CC;
      v11 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DAA24,
              v10,
              0xAu,
              (int)v17);
    v18 = *v5;
    v19 = *(_DWORD **)(v11 + 8);
    v20 = *((_DWORD *)*v5 - 3);
    if ( v20 == *(v19 - 3) && !memcmp(*v5, v19, *((_DWORD *)*v5 - 3)) )
      goto LABEL_70;
    v44 = v4;
    v21 = 0xBu % dword_27DAA28;
    v22 = *(_DWORD *)(dword_27DAA24 + 4 * (0xBu % dword_27DAA28));
    if ( !v22 )
      goto LABEL_33;
    v23 = *(_DWORD *)v22;
    v24 = *(_DWORD *)(*(_DWORD *)v22 + 12);
      v25 = v24 == 11;
      if ( v24 == 11 )
        v25 = *(_DWORD *)(v23 + 4) == 11;
      if ( v25 )
      v26 = *(_DWORD *)v23;
      if ( *(_DWORD *)v23 )
        v24 = *(_DWORD *)(v26 + 12);
        v22 = v23;
        v23 = *(_DWORD *)v23;
        if ( *(_DWORD *)(v26 + 12) % (unsigned int)dword_27DAA28 == v21 )
    v27 = v22 == 0;
    if ( v22 )
      v22 = *(_DWORD *)v22;
      v27 = v22 == 0;
    if ( v27 )
LABEL_33:
      v28 = operator new(0x10u);
      *v28 = 0;
      v28[1] = 11;
      v28[2] = &unk_28898CC;
      v22 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v21,
              0xBu,
              (int)v28);
      v18 = *v5;
      v20 = *((_DWORD *)*v5 - 3);
    v29 = *(_DWORD **)(v22 + 8);
    if ( v20 != *(v29 - 3) )
      return (ItemInstance *)&ItemInstance::EMPTY_ITEM;
    v4 = v44;
    if ( !memcmp(v18, v29, v20) )
LABEL_70:
      v30 = *(_DWORD *)(v45 + 448);
      sub_119C854(&v46, (int *)v5);
      ContainerManagerController::getContainerController((int)&v47, v30, (int **)&v46);
      v31 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v46 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v31);
      v32 = v47;
      v33 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v47 + 64))(v47, v4);
      v7 = (ItemInstance *)v33;
      v34 = *(_BYTE *)(v33 + 15);
      v35 = v34 == 0;
      if ( v34 )
        v35 = *(_DWORD *)v7 == 0;
      if ( v35 || ItemInstance::isNull(v7) || !*((_BYTE *)v7 + 14) )
        v7 = (ItemInstance *)(*(int (__fastcall **)(int, int))(*(_DWORD *)v32 + 48))(v32, v4);
      v36 = v48;
      if ( v48 )
        v37 = (unsigned int *)(v48 + 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 == 1 )
          v39 = (unsigned int *)(v36 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 8))(v36);
          if ( &pthread_create )
          {
            __dmb();
            do
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
          }
          else
            v40 = (*v39)--;
          if ( v40 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 12))(v36);
    else
      v7 = (ItemInstance *)&ItemInstance::EMPTY_ITEM;
  }
  return v7;
}


signed int __fastcall ContainerScreenController::_stopSplitting(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r5@1
  signed int v3; // r5@4
  const ItemInstance *v4; // r0@22
  ContainerItemStack *v5; // r0@22
  int v6; // r5@22
  const ItemInstance *v7; // r0@29
  ContainerItemStack *v8; // r0@29
  signed int result; // r0@43
  int v10; // [sp+0h] [bp-180h]@29
  int v11; // [sp+8h] [bp-178h]@33
  void *v12; // [sp+24h] [bp-15Ch]@31
  void *v13; // [sp+34h] [bp-14Ch]@29
  char v14; // [sp+48h] [bp-138h]@36
  int v15; // [sp+50h] [bp-130h]@40
  void *v16; // [sp+6Ch] [bp-114h]@38
  void *v17; // [sp+7Ch] [bp-104h]@36
  char v18; // [sp+90h] [bp-F0h]@22
  int v19; // [sp+98h] [bp-E8h]@26
  void *v20; // [sp+B4h] [bp-CCh]@24
  void *v21; // [sp+C4h] [bp-BCh]@22
  char v22; // [sp+D8h] [bp-A8h]@1
  int v23; // [sp+E0h] [bp-A0h]@19
  void *v24; // [sp+FCh] [bp-84h]@17
  void *v25; // [sp+10Ch] [bp-74h]@15
  int v26; // [sp+120h] [bp-60h]@1
  int v27; // [sp+128h] [bp-58h]@1
  int v28; // [sp+130h] [bp-50h]@13
  unsigned __int8 v29; // [sp+136h] [bp-4Ah]@7
  char v30; // [sp+137h] [bp-49h]@1
  void *v31; // [sp+14Ch] [bp-34h]@11
  void *ptr; // [sp+15Ch] [bp-24h]@9

  v1 = this;
  ContainerManagerController::resetSplitStack(*((ContainerManagerController **)this + 112));
  *((_BYTE *)v1 + 468) &= 0xFCu;
  *((_DWORD *)v1 + 116) = 0;
  v2 = MinecraftScreenModel::getCursorSelectedItemGroup(*((MinecraftScreenModel **)v1 + 106));
  ItemInstance::ItemInstance((ItemInstance *)&v22, v2);
  v26 = *(_DWORD *)(v2 + 72);
  ItemGroup::getItemType((ItemGroup *)&v27, (int)&v22);
  if ( v30 )
  {
    if ( v27 )
    {
      if ( ItemInstance::isNull((ItemInstance *)&v27) )
      {
        v3 = 0;
      }
      else
        v3 = v29;
        if ( v29 )
          v3 = 1;
    }
    else
      v3 = 0;
  }
  else
    v3 = 0;
  if ( ptr )
    operator delete(ptr);
  if ( v31 )
    operator delete(v31);
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  v28 = 0;
  if ( v25 )
    operator delete(v25);
  if ( v24 )
    operator delete(v24);
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  v23 = 0;
  if ( v3 == 1 )
    v4 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*((MinecraftScreenModel **)v1 + 106));
    v5 = (ContainerItemStack *)ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v18, v4);
    v6 = *(_BYTE *)(ContainerItemStack::getItemInstance(v5) + 14);
    if ( v21 )
      operator delete(v21);
    if ( v20 )
      operator delete(v20);
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 4))();
    v19 = 0;
    if ( v6 )
      v7 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*((MinecraftScreenModel **)v1 + 106));
      v8 = (ContainerItemStack *)ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v10, v7);
      *((_DWORD *)v1 + 116) = *(_BYTE *)(ContainerItemStack::getItemInstance(v8) + 14);
      if ( v13 )
        operator delete(v13);
      if ( v12 )
        operator delete(v12);
      if ( v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      v11 = 0;
      ContainerItemStack::ContainerItemStack((int)&v14);
      ContainerScreenController::setCursorSelectedItem(v1, (const ContainerItemStack *)&v14);
      if ( v17 )
        operator delete(v17);
      if ( v16 )
        operator delete(v16);
      if ( v15 )
        (*(void (**)(void))(*(_DWORD *)v15 + 4))();
      v15 = 0;
  *((_DWORD *)v1 + 130) = 0;
  sub_119CAD8((void **)v1 + 131, (char *)&unk_257BC67, 0);
  result = -1;
  *((_DWORD *)v1 + 132) = 0;
  *((_DWORD *)v1 + 133) = -1;
  *((_BYTE *)v1 + 548) = 0;
  *((_DWORD *)v1 + 136) = 0;
  *((_DWORD *)v1 + 134) = 0;
  *((_DWORD *)v1 + 135) = 0;
  *((_WORD *)v1 + 276) = 0;
  return result;
}


void __fastcall ContainerScreenController::_registerBindings(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r0@5
  _DWORD *v4; // r0@9
  _DWORD *v5; // r0@13
  _DWORD *v6; // r0@17
  __int64 v7; // r1@17
  __int64 v8; // r1@17
  _DWORD *v9; // r0@21
  __int64 v10; // r1@21
  __int64 v11; // r1@21
  _DWORD *v12; // r0@25
  __int64 v13; // r1@25
  __int64 v14; // r1@25
  _DWORD *v15; // r0@29
  __int64 v16; // r1@29
  __int64 v17; // r1@29
  _DWORD *v18; // r0@33
  __int64 v19; // r1@33
  __int64 v20; // r1@33
  _DWORD *v21; // r0@37
  __int64 v22; // r1@37
  __int64 v23; // r1@37
  __int64 v24; // r1@41
  __int64 v25; // r1@45
  _DWORD *v26; // r0@49
  __int64 v27; // r1@49
  __int64 v28; // r1@49
  _DWORD *v29; // r0@53
  __int64 v30; // r1@53
  __int64 v31; // r1@53
  _DWORD *v32; // r0@57
  __int64 v33; // r1@57
  __int64 v34; // r1@57
  _DWORD *v35; // r0@61
  __int64 v36; // r1@61
  __int64 v37; // r1@61
  _DWORD *v38; // r0@65
  __int64 v39; // r1@65
  __int64 v40; // r1@65
  _DWORD *v41; // r0@69
  __int64 v42; // r1@69
  _DWORD *v43; // r0@71
  __int64 v44; // r1@71
  __int64 v45; // r1@71
  _DWORD *v46; // r0@75
  __int64 v47; // r1@75
  __int64 v48; // r1@75
  _DWORD *v49; // r0@79
  __int64 v50; // r1@79
  __int64 v51; // r1@79
  _DWORD *v52; // r0@83
  __int64 v53; // r1@83
  __int64 v54; // r1@83
  _DWORD *v55; // r0@87
  __int64 v56; // r1@87
  __int64 v57; // r1@87
  _DWORD *v58; // r0@91
  __int64 v59; // r1@91
  __int64 v60; // r1@91
  _DWORD *v61; // r0@95
  __int64 v62; // r1@95
  __int64 v63; // r1@95
  _DWORD *v64; // r0@99
  __int64 v65; // r1@99
  __int64 v66; // r1@99
  _DWORD *v67; // r0@103
  __int64 v68; // r1@103
  __int64 v69; // r1@103
  _DWORD *v70; // r0@107
  __int64 v71; // r1@107
  __int64 v72; // r1@107
  _DWORD *v73; // r0@111
  __int64 v74; // r1@111
  __int64 v75; // r1@111
  _DWORD *v76; // r0@115
  __int64 v77; // r1@115
  __int64 v78; // r1@115
  _DWORD *v79; // r0@119
  __int64 v80; // r1@119
  __int64 v81; // r1@119
  _DWORD *v82; // r0@123
  __int64 v83; // r1@123
  __int64 v84; // r1@123
  _DWORD *v85; // r0@127
  __int64 v86; // r1@127
  __int64 v87; // r1@127
  void *v88; // [sp+4h] [bp-4A4h]@127
  __int64 v89; // [sp+Ch] [bp-49Ch]@127
  _DWORD *v90; // [sp+14h] [bp-494h]@127
  __int64 v91; // [sp+1Ch] [bp-48Ch]@127
  int v92; // [sp+24h] [bp-484h]@127
  void *v93; // [sp+28h] [bp-480h]@123
  __int64 v94; // [sp+30h] [bp-478h]@123
  _DWORD *v95; // [sp+38h] [bp-470h]@123
  __int64 v96; // [sp+40h] [bp-468h]@123
  int v97; // [sp+48h] [bp-460h]@123
  void *v98; // [sp+4Ch] [bp-45Ch]@119
  __int64 v99; // [sp+54h] [bp-454h]@119
  _DWORD *v100; // [sp+5Ch] [bp-44Ch]@119
  __int64 v101; // [sp+64h] [bp-444h]@119
  int v102; // [sp+6Ch] [bp-43Ch]@119
  void *v103; // [sp+70h] [bp-438h]@115
  __int64 v104; // [sp+78h] [bp-430h]@115
  _DWORD *v105; // [sp+80h] [bp-428h]@115
  __int64 v106; // [sp+88h] [bp-420h]@115
  int v107; // [sp+90h] [bp-418h]@115
  void *v108; // [sp+94h] [bp-414h]@111
  __int64 v109; // [sp+9Ch] [bp-40Ch]@111
  _DWORD *v110; // [sp+A4h] [bp-404h]@111
  __int64 v111; // [sp+ACh] [bp-3FCh]@111
  int v112; // [sp+B4h] [bp-3F4h]@111
  void *v113; // [sp+B8h] [bp-3F0h]@107
  __int64 v114; // [sp+C0h] [bp-3E8h]@107
  _DWORD *v115; // [sp+C8h] [bp-3E0h]@107
  __int64 v116; // [sp+D0h] [bp-3D8h]@107
  int v117; // [sp+D8h] [bp-3D0h]@107
  void *v118; // [sp+DCh] [bp-3CCh]@103
  __int64 v119; // [sp+E4h] [bp-3C4h]@103
  _DWORD *v120; // [sp+ECh] [bp-3BCh]@103
  __int64 v121; // [sp+F4h] [bp-3B4h]@103
  int v122; // [sp+FCh] [bp-3ACh]@103
  void *v123; // [sp+100h] [bp-3A8h]@99
  __int64 v124; // [sp+108h] [bp-3A0h]@99
  _DWORD *v125; // [sp+110h] [bp-398h]@99
  __int64 v126; // [sp+118h] [bp-390h]@99
  int v127; // [sp+120h] [bp-388h]@99
  void *v128; // [sp+124h] [bp-384h]@95
  __int64 v129; // [sp+12Ch] [bp-37Ch]@95
  _DWORD *v130; // [sp+134h] [bp-374h]@95
  __int64 v131; // [sp+13Ch] [bp-36Ch]@95
  int v132; // [sp+144h] [bp-364h]@95
  void *v133; // [sp+148h] [bp-360h]@91
  __int64 v134; // [sp+150h] [bp-358h]@91
  _DWORD *v135; // [sp+158h] [bp-350h]@91
  __int64 v136; // [sp+160h] [bp-348h]@91
  int v137; // [sp+168h] [bp-340h]@91
  void *v138; // [sp+16Ch] [bp-33Ch]@87
  __int64 v139; // [sp+174h] [bp-334h]@87
  _DWORD *v140; // [sp+17Ch] [bp-32Ch]@87
  __int64 v141; // [sp+184h] [bp-324h]@87
  int v142; // [sp+18Ch] [bp-31Ch]@87
  void *v143; // [sp+190h] [bp-318h]@83
  __int64 v144; // [sp+198h] [bp-310h]@83
  _DWORD *v145; // [sp+1A0h] [bp-308h]@83
  __int64 v146; // [sp+1A8h] [bp-300h]@83
  int v147; // [sp+1B0h] [bp-2F8h]@83
  void *v148; // [sp+1B4h] [bp-2F4h]@79
  __int64 v149; // [sp+1BCh] [bp-2ECh]@79
  _DWORD *v150; // [sp+1C4h] [bp-2E4h]@79
  __int64 v151; // [sp+1CCh] [bp-2DCh]@79
  int v152; // [sp+1D4h] [bp-2D4h]@79
  void *v153; // [sp+1D8h] [bp-2D0h]@75
  __int64 v154; // [sp+1E0h] [bp-2C8h]@75
  _DWORD *v155; // [sp+1E8h] [bp-2C0h]@75
  __int64 v156; // [sp+1F0h] [bp-2B8h]@75
  int v157; // [sp+1F8h] [bp-2B0h]@75
  void *v158; // [sp+1FCh] [bp-2ACh]@71
  __int64 v159; // [sp+204h] [bp-2A4h]@71
  _DWORD *v160; // [sp+20Ch] [bp-29Ch]@71
  __int64 v161; // [sp+214h] [bp-294h]@71
  int v162; // [sp+21Ch] [bp-28Ch]@71
  _DWORD *v163; // [sp+220h] [bp-288h]@69
  __int64 v164; // [sp+228h] [bp-280h]@69
  int v165; // [sp+230h] [bp-278h]@69
  void *v166; // [sp+234h] [bp-274h]@65
  __int64 v167; // [sp+23Ch] [bp-26Ch]@65
  _DWORD *v168; // [sp+244h] [bp-264h]@65
  __int64 v169; // [sp+24Ch] [bp-25Ch]@65
  int v170; // [sp+254h] [bp-254h]@65
  void *v171; // [sp+258h] [bp-250h]@61
  __int64 v172; // [sp+260h] [bp-248h]@61
  _DWORD *v173; // [sp+268h] [bp-240h]@61
  __int64 v174; // [sp+270h] [bp-238h]@61
  int v175; // [sp+278h] [bp-230h]@61
  void *v176; // [sp+27Ch] [bp-22Ch]@57
  __int64 v177; // [sp+284h] [bp-224h]@57
  _DWORD *v178; // [sp+28Ch] [bp-21Ch]@57
  __int64 v179; // [sp+294h] [bp-214h]@57
  int v180; // [sp+29Ch] [bp-20Ch]@57
  void *v181; // [sp+2A0h] [bp-208h]@53
  __int64 v182; // [sp+2A8h] [bp-200h]@53
  _DWORD *v183; // [sp+2B0h] [bp-1F8h]@53
  __int64 v184; // [sp+2B8h] [bp-1F0h]@53
  int v185; // [sp+2C0h] [bp-1E8h]@53
  void *v186; // [sp+2C4h] [bp-1E4h]@49
  __int64 v187; // [sp+2CCh] [bp-1DCh]@49
  _DWORD *v188; // [sp+2D4h] [bp-1D4h]@49
  __int64 v189; // [sp+2DCh] [bp-1CCh]@49
  int v190; // [sp+2E4h] [bp-1C4h]@49
  void *v191; // [sp+2E8h] [bp-1C0h]@45
  __int64 v192; // [sp+2F0h] [bp-1B8h]@45
  void *v193; // [sp+2F8h] [bp-1B0h]@45
  void (*v194)(void); // [sp+300h] [bp-1A8h]@45
  void (__fastcall *v195)(const void **, int, unsigned int *, signed int); // [sp+304h] [bp-1A4h]@45
  int v196; // [sp+308h] [bp-1A0h]@45
  void *v197; // [sp+30Ch] [bp-19Ch]@41
  __int64 v198; // [sp+314h] [bp-194h]@41
  void *v199; // [sp+31Ch] [bp-18Ch]@41
  void (*v200)(void); // [sp+324h] [bp-184h]@41
  int (*v201)(); // [sp+328h] [bp-180h]@41
  int v202; // [sp+32Ch] [bp-17Ch]@41
  void *v203; // [sp+330h] [bp-178h]@37
  __int64 v204; // [sp+338h] [bp-170h]@37
  _DWORD *v205; // [sp+340h] [bp-168h]@37
  __int64 v206; // [sp+348h] [bp-160h]@37
  int v207; // [sp+350h] [bp-158h]@37
  void *v208; // [sp+354h] [bp-154h]@33
  __int64 v209; // [sp+35Ch] [bp-14Ch]@33
  _DWORD *v210; // [sp+364h] [bp-144h]@33
  __int64 v211; // [sp+36Ch] [bp-13Ch]@33
  int v212; // [sp+374h] [bp-134h]@33
  void *v213; // [sp+378h] [bp-130h]@29
  __int64 v214; // [sp+380h] [bp-128h]@29
  _DWORD *v215; // [sp+388h] [bp-120h]@29
  __int64 v216; // [sp+390h] [bp-118h]@29
  int v217; // [sp+398h] [bp-110h]@29
  void *v218; // [sp+39Ch] [bp-10Ch]@25
  __int64 v219; // [sp+3A4h] [bp-104h]@25
  _DWORD *v220; // [sp+3ACh] [bp-FCh]@25
  __int64 v221; // [sp+3B4h] [bp-F4h]@25
  int v222; // [sp+3BCh] [bp-ECh]@25
  void *v223; // [sp+3C0h] [bp-E8h]@21
  __int64 v224; // [sp+3C8h] [bp-E0h]@21
  _DWORD *v225; // [sp+3D0h] [bp-D8h]@21
  __int64 v226; // [sp+3D8h] [bp-D0h]@21
  int v227; // [sp+3E0h] [bp-C8h]@21
  void *v228; // [sp+3E4h] [bp-C4h]@17
  __int64 v229; // [sp+3ECh] [bp-BCh]@17
  _DWORD *v230; // [sp+3F4h] [bp-B4h]@17
  __int64 v231; // [sp+3FCh] [bp-ACh]@17
  int v232; // [sp+404h] [bp-A4h]@17
  void *v233; // [sp+408h] [bp-A0h]@13
  void (*v234)(void); // [sp+410h] [bp-98h]@13
  signed int (*v235)(); // [sp+414h] [bp-94h]@13
  _DWORD *v236; // [sp+418h] [bp-90h]@13
  void (*v237)(void); // [sp+420h] [bp-88h]@13
  int (__fastcall *v238)(ContainerScreenController ***); // [sp+424h] [bp-84h]@13
  int v239; // [sp+428h] [bp-80h]@13
  void *v240; // [sp+42Ch] [bp-7Ch]@9
  void (*v241)(void); // [sp+434h] [bp-74h]@9
  signed int (*v242)(); // [sp+438h] [bp-70h]@9
  _DWORD *v243; // [sp+43Ch] [bp-6Ch]@9
  void (*v244)(void); // [sp+444h] [bp-64h]@9
  int (__fastcall *v245)(int **); // [sp+448h] [bp-60h]@9
  int v246; // [sp+44Ch] [bp-5Ch]@9
  void *v247; // [sp+450h] [bp-58h]@5
  void (*v248)(void); // [sp+458h] [bp-50h]@5
  signed int (*v249)(); // [sp+45Ch] [bp-4Ch]@5
  _DWORD *v250; // [sp+460h] [bp-48h]@5
  void (*v251)(void); // [sp+468h] [bp-40h]@5
  int (__fastcall *v252)(int **); // [sp+46Ch] [bp-3Ch]@5
  int v253; // [sp+470h] [bp-38h]@5
  void *v254; // [sp+474h] [bp-34h]@1
  void (*v255)(void); // [sp+47Ch] [bp-2Ch]@1
  signed int (*v256)(); // [sp+480h] [bp-28h]@1
  _DWORD *v257; // [sp+484h] [bp-24h]@1
  void (*v258)(void); // [sp+48Ch] [bp-1Ch]@1
  signed int (__fastcall *v259)(ContainerScreenController ***); // [sp+490h] [bp-18h]@1
  int v260; // [sp+494h] [bp-14h]@1

  v1 = this;
  v260 = 1048331506;
  v2 = operator new(4u);
  *v2 = v1;
  v257 = v2;
  v259 = sub_116183A;
  v258 = (void (*)(void))sub_1161842;
  v254 = operator new(1u);
  v256 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v255 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v260, (int)&v257, (int)&v254);
  if ( v255 )
    v255();
  if ( v258 )
    v258();
  StringHash::StringHash<char [29]>(&v253, (int)"#progress_bar_current_amount");
  v3 = operator new(4u);
  *v3 = v1;
  v250 = v3;
  v252 = sub_1161878;
  v251 = (void (*)(void))sub_11618D8;
  v247 = operator new(1u);
  v249 = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v248 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindFloat((int)v1, &v253, (int)&v250, (int)&v247);
  if ( v248 )
    v248();
  if ( v251 )
    v251();
  StringHash::StringHash<char [27]>(&v246, (int)"#progress_bar_total_amount");
  v4 = operator new(4u);
  *v4 = v1;
  v243 = v4;
  v245 = sub_116190E;
  v244 = (void (*)(void))sub_1161920;
  v240 = operator new(1u);
  v242 = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v241 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindFloat((int)v1, &v246, (int)&v243, (int)&v240);
  if ( v241 )
    v241();
  if ( v244 )
    v244();
  StringHash::StringHash<char [25]>(&v239, (int)"#inventory_selected_item");
  v5 = operator new(4u);
  *v5 = v1;
  v236 = v5;
  v238 = sub_1161956;
  v237 = (void (*)(void))sub_116195E;
  v233 = operator new(1u);
  v235 = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v234 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindInt((int)v1, &v239, (int)&v236, (int)&v233);
  if ( v234 )
    v234();
  if ( v237 )
    v237();
  StringHash::StringHash<char [37]>(&v232, (int)"#inventory_selected_item_stack_count");
  v6 = operator new(4u);
  LODWORD(v7) = sub_11619A0;
  *v6 = v1;
  HIDWORD(v7) = sub_1161994;
  v230 = v6;
  v231 = v7;
  v228 = operator new(1u);
  LODWORD(v8) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v8) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v229 = v8;
  ScreenController::bindString((int)v1, &v232, (int)&v230, (int)&v228);
  if ( (_DWORD)v229 )
    ((void (*)(void))v229)();
  if ( (_DWORD)v231 )
    ((void (*)(void))v231)();
  StringHash::StringHash<char [31]>(&v227, (int)"#inventory_selected_item_color");
  v9 = operator new(4u);
  LODWORD(v10) = sub_1161ADA;
  *v9 = v1;
  HIDWORD(v10) = sub_11619D6;
  v225 = v9;
  v226 = v10;
  v223 = operator new(1u);
  LODWORD(v11) = ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v11) = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v224 = v11;
  ScreenController::bindInt((int)v1, &v227, (int)&v225, (int)&v223);
  if ( (_DWORD)v224 )
    ((void (*)(void))v224)();
  if ( (_DWORD)v226 )
    ((void (*)(void))v226)();
  StringHash::StringHash<char [34]>(&v222, (int)"#selected_item_durability_visible");
  v12 = operator new(4u);
  LODWORD(v13) = sub_1161BEC;
  *v12 = v1;
  HIDWORD(v13) = sub_1161B10;
  v220 = v12;
  v221 = v13;
  v218 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v219 = v14;
  ScreenController::bindBool((int)v1, &v222, (int)&v220, (int)&v218);
  if ( (_DWORD)v219 )
    ((void (*)(void))v219)();
  if ( (_DWORD)v221 )
    ((void (*)(void))v221)();
  StringHash::StringHash<char [39]>(&v217, (int)"#selected_item_durability_total_amount");
  v15 = operator new(4u);
  LODWORD(v16) = sub_1161CFA;
  *v15 = v1;
  HIDWORD(v16) = sub_1161C22;
  v215 = v15;
  v216 = v16;
  v213 = operator new(1u);
  LODWORD(v17) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v17) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v214 = v17;
  ScreenController::bindFloat((int)v1, &v217, (int)&v215, (int)&v213);
  if ( (_DWORD)v214 )
    ((void (*)(void))v214)();
  if ( (_DWORD)v216 )
    ((void (*)(void))v216)();
  StringHash::StringHash<char [41]>(&v212, (int)"#selected_item_durability_current_amount");
  v18 = operator new(4u);
  LODWORD(v19) = sub_1161E12;
  *v18 = v1;
  HIDWORD(v19) = sub_1161D30;
  v210 = v18;
  v211 = v19;
  v208 = operator new(1u);
  LODWORD(v20) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v20) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v209 = v20;
  ScreenController::bindFloat((int)v1, &v212, (int)&v210, (int)&v208);
  if ( (_DWORD)v209 )
    ((void (*)(void))v209)();
  if ( (_DWORD)v211 )
    ((void (*)(void))v211)();
  v207 = -706505024;
  v21 = operator new(4u);
  LODWORD(v22) = sub_1161E7E;
  *v21 = v1;
  HIDWORD(v22) = sub_1161E48;
  v205 = v21;
  v206 = v22;
  v203 = operator new(1u);
  LODWORD(v23) = ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  HIDWORD(v23) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v204 = v23;
  ScreenController::bindBoolForAnyCollection((int)v1, &v207, (int)&v205, (int)&v203);
  if ( (_DWORD)v204 )
    ((void (*)(void))v204)();
  if ( (_DWORD)v206 )
    ((void (*)(void))v206)();
  StringHash::StringHash<char [27]>(&v202, (int)"#show_selected_slot_border");
  v199 = operator new(1u);
  v200 = (void (*)(void))sub_1161EB8;
  v201 = sub_1161EB4;
  v197 = operator new(1u);
  LODWORD(v24) = ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  HIDWORD(v24) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v198 = v24;
  ScreenController::bindBoolForAnyCollection((int)v1, &v202, (int)&v199, (int)&v197);
  if ( (_DWORD)v198 )
    ((void (*)(void))v198)();
  if ( v200 )
    v200();
  v196 = 1420571696;
  v193 = operator new(1u);
  v194 = (void (*)(void))sub_1161FB8;
  v195 = sub_1161EE8;
  v191 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v192 = v25;
  ScreenController::bindStringForAnyCollection((int)v1, &v196, (int)&v193, (int)&v191);
  if ( (_DWORD)v192 )
    ((void (*)(void))v192)();
  if ( v194 )
    v194();
  v190 = 1483771070;
  v26 = operator new(4u);
  LODWORD(v27) = sub_116202A;
  *v26 = v1;
  HIDWORD(v27) = sub_1161FE6;
  v188 = v26;
  v189 = v27;
  v186 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v187 = v28;
  ScreenController::bindBoolForAnyCollection((int)v1, &v190, (int)&v188, (int)&v186);
  if ( (_DWORD)v187 )
    ((void (*)(void))v187)();
  if ( (_DWORD)v189 )
    ((void (*)(void))v189)();
  StringHash::StringHash<char [28]>(&v185, (int)"#show_hovered_selected_slot");
  v29 = operator new(4u);
  LODWORD(v30) = sub_1162080;
  *v29 = v1;
  HIDWORD(v30) = sub_1162060;
  v183 = v29;
  v184 = v30;
  v181 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v182 = v31;
  ScreenController::bindBool((int)v1, &v185, (int)&v183, (int)&v181);
  if ( (_DWORD)v182 )
    ((void (*)(void))v182)();
  if ( (_DWORD)v184 )
    ((void (*)(void))v184)();
  StringHash::StringHash<char [38]>(&v180, (int)"#show_hovered_selected_inventory_slot");
  v32 = operator new(4u);
  LODWORD(v33) = sub_11620DA;
  *v32 = v1;
  HIDWORD(v33) = sub_11620B6;
  v178 = v32;
  v179 = v33;
  v176 = operator new(1u);
  LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v34) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v177 = v34;
  ScreenController::bindBool((int)v1, &v180, (int)&v178, (int)&v176);
  if ( (_DWORD)v177 )
    ((void (*)(void))v177)();
  if ( (_DWORD)v179 )
    ((void (*)(void))v179)();
  v175 = -597010055;
  v35 = operator new(4u);
  LODWORD(v36) = sub_1162132;
  *v35 = v1;
  HIDWORD(v36) = sub_1162110;
  v173 = v35;
  v174 = v36;
  v171 = operator new(1u);
  LODWORD(v37) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v37) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v172 = v37;
  ScreenController::bindBool((int)v1, &v175, (int)&v173, (int)&v171);
  if ( (_DWORD)v172 )
    ((void (*)(void))v172)();
  if ( (_DWORD)v174 )
    ((void (*)(void))v174)();
  v170 = -1556809628;
  v38 = operator new(4u);
  LODWORD(v39) = sub_1162188;
  *v38 = v1;
  HIDWORD(v39) = sub_1162168;
  v168 = v38;
  v169 = v39;
  v166 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v167 = v40;
  ScreenController::bindBool((int)v1, &v170, (int)&v168, (int)&v166);
  if ( (_DWORD)v167 )
    ((void (*)(void))v167)();
  if ( (_DWORD)v169 )
    ((void (*)(void))v169)();
  v165 = -348309794;
  v41 = operator new(4u);
  LODWORD(v42) = sub_1162314;
  *v41 = v1;
  HIDWORD(v42) = sub_11621C0;
  v163 = v41;
  v164 = v42;
  ScreenController::bindForGlobal((int)v1, &v165, (int)&v163);
  if ( (_DWORD)v164 )
    ((void (*)(void))v164)();
  StringHash::StringHash<char [24]>(&v162, (int)"#collection_total_items");
  v43 = operator new(4u);
  LODWORD(v44) = sub_11625A0;
  *v43 = v1;
  HIDWORD(v44) = sub_116234C;
  v160 = v43;
  v161 = v44;
  v158 = operator new(1u);
  LODWORD(v45) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindIntForAnyCollectionERK10StringHashRKSt8functionIFiRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v45) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController23bindIntForAnyCollectionERK10StringHashRKSt8functionIFiS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v159 = v45;
  ScreenController::bindIntForAnyCollection((int)v1, &v162, (int)&v160, (int)&v158);
  if ( (_DWORD)v159 )
    ((void (*)(void))v159)();
  if ( (_DWORD)v161 )
    ((void (*)(void))v161)();
  StringHash::StringHash<char [23]>(&v157, (int)"#inventory_stack_count");
  v46 = operator new(4u);
  LODWORD(v47) = sub_1162644;
  *v46 = v1;
  HIDWORD(v47) = sub_11625D6;
  v155 = v46;
  v156 = v47;
  v153 = operator new(1u);
  LODWORD(v48) = ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v48) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v154 = v48;
  ScreenController::bindStringForAnyCollection((int)v1, &v157, (int)&v155, (int)&v153);
  if ( (_DWORD)v154 )
    ((void (*)(void))v154)();
  if ( (_DWORD)v156 )
    ((void (*)(void))v156)();
  v152 = 423569454;
  v49 = operator new(4u);
  LODWORD(v50) = sub_11626AE;
  *v49 = v1;
  HIDWORD(v50) = sub_116267A;
  v150 = v49;
  v151 = v50;
  v148 = operator new(1u);
  LODWORD(v51) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindIntForAnyCollectionERK10StringHashRKSt8functionIFiRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v51) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController23bindIntForAnyCollectionERK10StringHashRKSt8functionIFiS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v149 = v51;
  ScreenController::bindIntForAnyCollection((int)v1, &v152, (int)&v150, (int)&v148);
  if ( (_DWORD)v149 )
    ((void (*)(void))v149)();
  if ( (_DWORD)v151 )
    ((void (*)(void))v151)();
  v147 = -495754686;
  v52 = operator new(4u);
  LODWORD(v53) = sub_1162744;
  *v52 = v1;
  HIDWORD(v53) = sub_11626E4;
  v145 = v52;
  v146 = v53;
  v143 = operator new(1u);
  LODWORD(v54) = ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v54) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v144 = v54;
  ScreenController::bindStringForAnyCollection((int)v1, &v147, (int)&v145, (int)&v143);
  if ( (_DWORD)v144 )
    ((void (*)(void))v144)();
  if ( (_DWORD)v146 )
    ((void (*)(void))v146)();
  v142 = -495754686;
  v55 = operator new(4u);
  LODWORD(v56) = sub_116288C;
  *v55 = v1;
  HIDWORD(v56) = sub_116277C;
  v140 = v55;
  v141 = v56;
  v138 = operator new(1u);
  LODWORD(v57) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v57) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v139 = v57;
  ScreenController::bindString((int)v1, &v142, (int)&v140, (int)&v138);
  if ( (_DWORD)v139 )
    ((void (*)(void))v139)();
  if ( (_DWORD)v141 )
    ((void (*)(void))v141)();
  StringHash::StringHash<char [25]>(&v137, (int)"#item_durability_visible");
  v58 = operator new(4u);
  LODWORD(v59) = sub_116290E;
  *v58 = v1;
  HIDWORD(v59) = sub_11628C2;
  v135 = v58;
  v136 = v59;
  v133 = operator new(1u);
  LODWORD(v60) = ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  HIDWORD(v60) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v134 = v60;
  ScreenController::bindBoolForAnyCollection((int)v1, &v137, (int)&v135, (int)&v133);
  if ( (_DWORD)v134 )
    ((void (*)(void))v134)();
  if ( (_DWORD)v136 )
    ((void (*)(void))v136)();
  StringHash::StringHash<char [30]>(&v132, (int)"#item_durability_total_amount");
  v61 = operator new(4u);
  LODWORD(v62) = sub_116298C;
  *v61 = v1;
  HIDWORD(v62) = sub_1162944;
  v130 = v61;
  v131 = v62;
  v128 = operator new(1u);
  LODWORD(v63) = ZNSt14_Function_base13_Base_managerIZN16ScreenController25bindFloatForAnyCollectionERK10StringHashRKSt8functionIFfRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v63) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController25bindFloatForAnyCollectionERK10StringHashRKSt8functionIFfS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v129 = v63;
  ScreenController::bindFloatForAnyCollection((int)v1, &v132, (int)&v130, (int)&v128);
  if ( (_DWORD)v129 )
    ((void (*)(void))v129)();
  if ( (_DWORD)v131 )
    ((void (*)(void))v131)();
  StringHash::StringHash<char [32]>(&v127, (int)"#item_durability_current_amount");
  v64 = operator new(4u);
  LODWORD(v65) = sub_1162A18;
  *v64 = v1;
  HIDWORD(v65) = sub_11629C4;
  v125 = v64;
  v126 = v65;
  v123 = operator new(1u);
  LODWORD(v66) = ZNSt14_Function_base13_Base_managerIZN16ScreenController25bindFloatForAnyCollectionERK10StringHashRKSt8functionIFfRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v66) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController25bindFloatForAnyCollectionERK10StringHashRKSt8functionIFfS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v124 = v66;
  ScreenController::bindFloatForAnyCollection((int)v1, &v127, (int)&v125, (int)&v123);
  if ( (_DWORD)v124 )
    ((void (*)(void))v124)();
  if ( (_DWORD)v126 )
    ((void (*)(void))v126)();
  v122 = 1271584501;
  v67 = operator new(4u);
  LODWORD(v68) = sub_1162A90;
  *v67 = v1;
  HIDWORD(v68) = sub_1162A4E;
  v120 = v67;
  v121 = v68;
  v118 = operator new(1u);
  LODWORD(v69) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindIntForAnyCollectionERK10StringHashRKSt8functionIFiRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v69) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController23bindIntForAnyCollectionERK10StringHashRKSt8functionIFiS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v119 = v69;
  ScreenController::bindIntForAnyCollection((int)v1, &v122, (int)&v120, (int)&v118);
  if ( (_DWORD)v119 )
    ((void (*)(void))v119)();
  if ( (_DWORD)v121 )
    ((void (*)(void))v121)();
  v117 = 1279202290;
  v70 = operator new(4u);
  LODWORD(v71) = sub_1162B00;
  *v70 = v1;
  HIDWORD(v71) = sub_1162AC6;
  v115 = v70;
  v116 = v71;
  v113 = operator new(1u);
  LODWORD(v72) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindIntForAnyCollectionERK10StringHashRKSt8functionIFiRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v72) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController23bindIntForAnyCollectionERK10StringHashRKSt8functionIFiS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v114 = v72;
  ScreenController::bindIntForAnyCollection((int)v1, &v117, (int)&v115, (int)&v113);
  if ( (_DWORD)v114 )
    ((void (*)(void))v114)();
  if ( (_DWORD)v116 )
    ((void (*)(void))v116)();
  StringHash::StringHash<char [25]>(&v112, (int)"#disabled_filter_visible");
  v73 = operator new(4u);
  LODWORD(v74) = sub_1162D4C;
  *v73 = v1;
  HIDWORD(v74) = sub_1162B38;
  v110 = v73;
  v111 = v74;
  v108 = operator new(1u);
  LODWORD(v75) = ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  HIDWORD(v75) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v109 = v75;
  ScreenController::bindBoolForAnyCollection((int)v1, &v112, (int)&v110, (int)&v108);
  if ( (_DWORD)v109 )
    ((void (*)(void))v109)();
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  v107 = -1186607922;
  v76 = operator new(4u);
  LODWORD(v77) = sub_1162D9C;
  *v76 = v1;
  HIDWORD(v77) = sub_1162D82;
  v105 = v76;
  v106 = v77;
  v103 = operator new(1u);
  LODWORD(v78) = ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v78) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v104 = v78;
  ScreenController::bindStringForAnyCollection((int)v1, &v107, (int)&v105, (int)&v103);
  if ( (_DWORD)v104 )
    ((void (*)(void))v104)();
  if ( (_DWORD)v106 )
    ((void (*)(void))v106)();
  v102 = -2124982575;
  v79 = operator new(4u);
  LODWORD(v80) = sub_1162DEC;
  *v79 = v1;
  HIDWORD(v80) = sub_1162DD2;
  v100 = v79;
  v101 = v80;
  v98 = operator new(1u);
  LODWORD(v81) = ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v81) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v99 = v81;
  ScreenController::bindStringForAnyCollection((int)v1, &v102, (int)&v100, (int)&v98);
  if ( (_DWORD)v99 )
    ((void (*)(void))v99)();
  if ( (_DWORD)v101 )
    ((void (*)(void))v101)();
  StringHash::StringHash<char [36]>(&v97, (int)"#inventory_selected_banner_patterns");
  v82 = operator new(4u);
  LODWORD(v83) = sub_1162F10;
  *v82 = v1;
  HIDWORD(v83) = sub_1162E24;
  v95 = v82;
  v96 = v83;
  v93 = operator new(1u);
  LODWORD(v84) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v84) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v94 = v84;
  ScreenController::bindString((int)v1, &v97, (int)&v95, (int)&v93);
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  StringHash::StringHash<char [34]>(&v92, (int)"#inventory_selected_banner_colors");
  v85 = operator new(4u);
  LODWORD(v86) = sub_1163034;
  *v85 = v1;
  HIDWORD(v86) = sub_1162F48;
  v90 = v85;
  v91 = v86;
  v88 = operator new(1u);
  LODWORD(v87) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v87) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v89 = v87;
  ScreenController::bindString((int)v1, &v92, (int)&v90, (int)&v88);
  if ( (_DWORD)v89 )
    ((void (*)(void))v89)();
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
}


int __fastcall ContainerScreenController::handleGameEventNotification(ContainerScreenController *a1, int a2)
{
  ContainerScreenController *v2; // r5@1

  v2 = a1;
  if ( a2 == 1 )
  {
    ContainerScreenController::_handleDropSelectedItem(a1, 1);
    *((_BYTE *)v2 + 400) = 1;
  }
  return j_j_j__ZN16ScreenController27handleGameEventNotificationEN2ui21GameEventNotificationE((int)v2);
}


void **__fastcall ContainerScreenController::_getButtonADescription(ContainerScreenController *this, ContainerScreenController *a2)
{
  void **v2; // r4@1
  bool v3; // zf@1
  const char *v4; // r1@1

  v2 = (void **)this;
  v3 = ContainerScreenController::_selectionActive(a2) == 0;
  v4 = "controller.buttonTip.place";
  if ( v3 )
    v4 = "controller.buttonTip.take";
  return sub_119C884(v2, v4);
}


int *__fastcall ContainerScreenController::getDisplayName(ContainerScreenController *this, int a2)
{
  int v2; // r2@1
  int *result; // r0@3

  v2 = *(_DWORD *)(a2 + 512);
  if ( v2 == 2 )
  {
    result = ContainerManagerController::getEntityName(
               (const void **)this,
               *(_DWORD *)(a2 + 448),
               (unsigned __int64 *)(a2 + 504));
  }
  else if ( v2 == 1 )
    result = ContainerManagerController::getBlockName(
               this,
               *(const BlockPos **)(a2 + 448),
               (const BlockPos *)(a2 + 488));
  else
    result = sub_119C854((int *)this, (int *)&Util::EMPTY_STRING);
  return result;
}


int __fastcall ContainerScreenController::_resetSplitStack(ContainerScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int result; // r0@1

  v1 = this;
  ContainerManagerController::resetSplitStack(*((ContainerManagerController **)this + 112));
  result = *((_BYTE *)v1 + 468) & 0xFC;
  *((_BYTE *)v1 + 468) = result;
  return result;
}
