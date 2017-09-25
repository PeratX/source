

  if ( StoreCatalogItemModel::isValid((StoreCatalogItemModel *)v12) == 1 )
{
    v13 = *v9;
    v14 = *(_DWORD *)(v11 + 424);
    v15 = *((_DWORD *)v13 - 3);
    v16 = (int *)StoreCatalogItemModel::getProductId((StoreCatalogItemModel *)v12);
    sub_21E8AF4(&v27, v16);
    ptr = 0;
    v29 = 0;
    v30 = 0;
    ptr = operator new(4u);
    v30 = (char *)ptr + 4;
    v29 = (void *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v27,
                    (int)&ptr,
                    (int)ptr);
    v17 = (DlcBatchModel *)MainMenuScreenModel::getDlcBatchModel(v14, (unsigned __int64 *)&ptr);
    _R0 = DlcBatchModel::getDownloadProgress(v17);
    __asm
    {
      VMOV.F32        S2, #1.0
      VMOV            S0, R0
      VSUB.F32        S0, S2, S0
      VSTR            S0, [SP,#0x38+var_28]
    }
    UIPropertyBag::set<float>(v10, v15, v13, (int)&v31);
    v20 = v29;
    v19 = ptr;
    if ( ptr != v29 )
      do
      {
        v23 = (int *)(*(_DWORD *)v19 - 12);
        if ( v23 != &dword_28898C0 )
        {
          v21 = (unsigned int *)(*(_DWORD *)v19 - 4);
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
            j_j_j_j__ZdlPv_9(v23);
        }
        v19 = (char *)v19 + 4;
      }
      while ( v19 != v20 );
      v19 = ptr;
    if ( v19 )
      operator delete(v19);
    v24 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
  }
}


    && (v4 || StoreCatalogItemModel::getStoreCategory((StoreCatalogItemModel *)(v3 + 452)) == 2) )
{
    LODWORD(v5) = *(_DWORD *)(v3 + 456);
    Util::format((Util *)&v7, "mashup_tab_id_%d", v5);
    result = v7;
    *v2 = v7;
  }
  else
  {
    result = sub_1590164(v2, "grid_button_0");
  return result;
}


signed int __fastcall StoreCatalogItemModel::hasDedicatedUpsellScreen(StoreCatalogItemModel *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = StoreCatalogItem::getStoreCategory(*(StoreCatalogItem **)this);
  v2 = 0;
  if ( v1 != 4 )
    v2 = 1;
  return v2;
}


      if ( v7 <= StoreCatalogItemModel::getStorePriority(v3) )
{
        v18 = *(_DWORD *)v6;
        v13 = StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)&v18);
        v14 = StoreCatalogItemModel::getStorePriority(v5);
        v15 = v6;
        if ( v13 > v14 )
        {
          do
          {
            *(_DWORD *)v15 = *(_DWORD *)v5;
            v16 = StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)&v18);
            v17 = StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)((char *)v5 - 4));
            v15 = v5;
            v5 = (StoreCatalogItemModel *)((char *)v5 - 4);
          }
          while ( v16 > v17 );
        }
        *(_DWORD *)v15 = v18;
      }
      else
      {
        v8 = *(_DWORD *)v6;
        if ( v6 - v3 >= 1 )
          v9 = ((v6 - v3) >> 2) + 1;
          v10 = (StoreCatalogItemModel *)((char *)v6 - 4);
          v11 = (StoreCatalogItemModel *)((char *)v5 + 4);
            v12 = *(_DWORD *)v10;
            v10 = (StoreCatalogItemModel *)((char *)v10 - 4);
            --v9;
            *(_DWORD *)v11 = v12;
            v11 = (StoreCatalogItemModel *)((char *)v11 - 4);
          while ( v9 > 1 );
        *(_DWORD *)v3 = v8;
      result = (StoreCatalogItemModel *)((char *)v6 + 4);
      v5 = v6;
    }
    while ( (StoreCatalogItemModel *)((char *)v6 + 4) != v2 );
  }
  return result;
}


_DWORD *__fastcall StoreCatalogItemModel::StoreCatalogItemModel(_DWORD *result)
{
  *result = 0;
  return result;
}


_DWORD *__fastcall StoreCatalogItemModel::StoreCatalogItemModel(_DWORD *a1, void *a2)
{
  _DWORD *v2; // r4@1
  void *v3; // r5@1
  char v4; // r0@1
  void *v5; // r0@8
  int v7; // [sp+0h] [bp-30h]@3
  void (*v8)(void); // [sp+8h] [bp-28h]@3
  char v9; // [sp+10h] [bp-20h]@3
  void (*v10)(void); // [sp+18h] [bp-18h]@3

  v2 = a1;
  v3 = a2;
  v4 = byte_27C9A48;
  __dmb();
  if ( !(v4 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27C9A48) )
  {
    v10 = 0;
    v8 = 0;
    StoreCatalogItem::StoreCatalogItem((int)&unk_27C9938, (int)&v9, (int)&v7);
    if ( v8 )
      v8();
    if ( v10 )
      v10();
    _cxa_atexit(StoreCatalogItem::~StoreCatalogItem);
    j___cxa_guard_release((unsigned int *)&byte_27C9A48);
  }
  v5 = &unk_27C9938;
  if ( v3 )
    v5 = v3;
  *v2 = v5;
  return v2;
}


  if ( StoreCatalogItemModel::isValid((StoreCatalogItemModel *)(v1 + 456)) == 1 )
{
    if ( StoreCatalogItemModel::isOwned((StoreCatalogItemModel *)(v1 + 456)) )
    {
      if ( *(_DWORD *)(v1 + 512) != 1 )
      {
        v2 = *(_DWORD *)(v1 + 452);
        v3 = *(_DWORD *)(v1 + 528);
        v4 = *(_QWORD *)(v1 + 472);
        v5 = *(_QWORD *)(v1 + 464);
        v12 = *(_QWORD *)(v1 + 472);
        v13 = HIDWORD(v4);
        v11 = v5;
        v14 = v3;
        v15 = (char *)&unk_28898CC;
        SkinPackCollectionModel::setPreviewSkin(v2, (int)&v11);
        v6 = v15 - 12;
        if ( (int *)(v15 - 12) != &dword_28898C0 )
        {
          v9 = (unsigned int *)(v15 - 4);
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
            j_j_j_j_j__ZdlPv_9(v6);
        }
        SkinPackCollectionModel::equipPreviewSkin(*(SkinPackCollectionModel **)(v1 + 452), 1);
      }
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 92))(v1);
    }
    else
      v8 = (int *)StoreCatalogItemModel::getProductId((StoreCatalogItemModel *)(v1 + 456));
      PurchaseEnabledScreenController::_purchaseOffer(v1, v8);
    result = 1;
  }
  else
  {
    result = 0;
  return result;
}


  if ( StoreCatalogItemModel::isValid(v3) == 1 && StoreCatalogItemModel::isOwned(v3) != 1 )
{
    v5 = (int *)StoreCatalogItemModel::getPrice(v3);
    sub_DA73B4(v2, v5);
    result = (void *)sub_DA7374((const void **)v2, "0");
    if ( !result )
      result = sub_DA78A4((void **)v2, "store.free", (_BYTE *)0xA);
  }
  else
  {
    result = sub_DA73B4(v2, (int *)&Util::EMPTY_STRING);
  return result;
}


signed int __fastcall StoreCatalogItemModel::isConsumableItem(StoreCatalogItemModel *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = StoreCatalogItem::getStoreCategory(*(StoreCatalogItem **)this);
  v2 = 0;
  if ( v1 == 6 )
    v2 = 1;
  return v2;
}


int __fastcall StoreCatalogItemModel::fetchImages(__int64 this)
{
  LODWORD(this) = *(_DWORD *)this;
  return j_j_j__ZN16StoreCatalogItem11fetchImagesEP21ContentCatalogService(this);
}


  if ( StoreCatalogItemModel::isOwned((StoreCatalogItemModel *)(v6 + 456)) == 1 )
{
    v15 = 0;
    v7 = &v15;
    v8 = "#visible";
  }
  else
  {
    v9 = SkinPackCollectionModel::getSkinPackModelByUUID(
           *(SkinPackCollectionModel **)(v6 + 452),
           (const mce::UUID *)(v6 + 464));
    v10 = SkinPackModel::getFirstVisibleSkinIndex(v9);
    v11 = SkinPackCollectionModel::getSkinPackModelByUUID(
            *(SkinPackCollectionModel **)(v6 + 452),
            (const mce::UUID *)(v6 + 464));
    v12 = SkinPackModel::isSkinLocked(v11, v10 + v5);
    v7 = &v14;
    v14 = v12;
  return UIPropertyBag::set<bool>(v4, 8, v8, v7);
}


  if ( StoreCatalogItemModel::isValid((StoreCatalogItemModel *)(v3 + 456)) )
{
    if ( StoreCatalogItemModel::isOwned((StoreCatalogItemModel *)(v3 + 456)) == 1 )
    {
      if ( *(_DWORD *)(v3 + 512) == 1 )
        sub_DA7364(v2, "store.mashup.continue");
      else
        sub_DA7364(v2, "skins.store.upsell.equip.button");
    }
    else
      sub_DA7364((void **)&v21, "skins.store.upsell.buy.button");
      v4 = SkinPackCollectionModel::getSkinPackModelByUUID(
             *(SkinPackCollectionModel **)(v3 + 452),
             (const mce::UUID *)(v3 + 464));
      v5 = SkinPackModel::getNumSkins(v4);
      Util::toString<int,(void *)0,(void *)0>((void **)&v17, v5);
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v18 = (char *)operator new(4u);
      v20 = v18 + 4;
      v19 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                      (int)&v17,
                      (int)&v18,
                      (int)v18);
      I18n::get((int *)v2, &v21, (unsigned __int64 *)&v18);
      v7 = (int)v19;
      v6 = v18;
      if ( v18 != v19 )
      {
        do
        {
          v10 = (int *)(*(_DWORD *)v6 - 12);
          if ( v10 != &dword_28898C0 )
          {
            v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
              j_j_j_j_j__ZdlPv_9(v10);
          }
          v6 += 4;
        }
        while ( v6 != (char *)v7 );
        v6 = v18;
      }
      if ( v6 )
        operator delete(v6);
      v11 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v17 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        else
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j_j__ZdlPv_9(v11);
      v12 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v21 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j_j__ZdlPv_9(v12);
  }
  else
  {
    sub_DA73B4((int *)v2, (int *)&Util::EMPTY_STRING);
}


    && (v8 || StoreCatalogItemModel::getStoreCategory((StoreCatalogItemModel *)(v6 + 452)) == 2) )
{
    sub_1590164((void **)&v12, "content_action_button_id");
  }
  else
  {
    sub_1590164((void **)&v12, "grid_button_0");
  UIPropertyBag::set<std::string>(v4, v7, v5, (const void **)&v12);
  v9 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
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
      j_j_j_j_j__ZdlPv_9_2(v9);
}


void __fastcall StoreCatalogItemModel::hydrateItem(int *a1, ContentCatalogService *a2, int *a3)
{
  StoreCatalogItemModel::hydrateItem(a1, a2, a3);
}


void __fastcall StoreCatalogItemModel::hydrateItem(int *a1, ContentCatalogService *a2, int *a3)
{
  j_j_j__ZN16StoreCatalogItem11hydrateItemEP21ContentCatalogServiceRKSs(*a1, a2, a3);
}


  if ( StoreCatalogItemModel::getStoreCategory((StoreCatalogItemModel *)&v69) == 2 )
{
    sub_DA7364((void **)&v61, "store.mashup.unlockAll");
    Util::toString<unsigned int,(void *)0,(void *)0>((void **)&v57, *(_DWORD *)(v2 + 48));
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v58 = (char *)operator new(4u);
    v60 = v58 + 4;
    v59 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v57,
                    (int)&v58,
                    (int)v58);
    I18n::get(&v62, &v61, (unsigned __int64 *)&v58);
    v12 = 1;
  }
  else
  {
    sub_DA7364((void **)&v62, "store.world.unlock");
    v12 = 0;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v65, &v62);
  v17 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v62 - 4);
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
      j_j_j_j_j__ZdlPv_9(v17);
  if ( v12 == 1 )
    v54 = v1;
    v19 = (int)v59;
    v18 = v58;
    if ( v58 != v59 )
      v20 = &v70;
      v21 = &pthread_create;
      {
        v26 = (int *)(*(_DWORD *)v18 - 12);
        if ( v26 != &dword_28898C0 )
        {
          v22 = (unsigned int *)(*(_DWORD *)v18 - 4);
          if ( v21 )
          {
            __dmb();
            do
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
          }
          else
            v23 = (*v22)--;
          if ( v23 <= 0 )
            v24 = v21;
            v25 = v20;
            j_j_j_j_j__ZdlPv_9(v26);
            v20 = v25;
            v21 = v24;
        }
        v18 += 4;
      }
      while ( v18 != (char *)v19 );
      v18 = v58;
    v1 = v54;
    if ( v18 )
      operator delete(v18);
    v27 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v57 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
      else
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j_j__ZdlPv_9(v27);
    v28 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v61 - 4);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j_j__ZdlPv_9(v28);
  v29 = *(_QWORD *)(v1 + 20);
  SceneFactory::createMashupScreen((unsigned __int64 *)&v55, SHIDWORD(v29), (int)&v63, *(_DWORD *)(v2 + 40));
  SceneStack::pushScreen(v29, (int)&v55, 0);
  v30 = v56;
  if ( v56 )
    v31 = (unsigned int *)(v56 + 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      v33 = (unsigned int *)(v30 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
  v37 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v66 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v65 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9(v38);
  v39 = v64;
  v40 = v63;
  if ( v63 != v64 )
    do
      if ( *(_DWORD *)v40 )
        (*(void (**)(void))(**(_DWORD **)v40 + 4))();
      *(_DWORD *)v40 = 0;
      v40 += 4;
    while ( v39 != v40 );
    v40 = v63;
  if ( v40 )
    operator delete(v40);
  if ( v3 )
LABEL_71:
        v41 = __ldrex(v5);
      while ( __strex(v41 - 1, v5) );
      v41 = (*v5)--;
    if ( v41 == 1 )
      v42 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
}


  if ( StoreCatalogItemModel::isOwned((StoreCatalogItemModel *)&v5) )
{
    result = 0;
  }
  else
  {
    v4 = MainMenuScreenModel::getStoreCatalogItemByProductId(*(_DWORD *)(v1 + 424), (const void **)(v1 + 444));
    v3 = StoreCatalogItemModel::getPrice((StoreCatalogItemModel *)&v4);
    result = sub_1590284((const void **)v3, "0") != 0;
  return result;
}


signed int __fastcall StoreCatalogItemModel::isCategoryRealm(StoreCatalogItemModel *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = StoreCatalogItem::getStoreCategory(*(StoreCatalogItem **)this);
  v2 = 0;
  if ( v1 == 3 )
    v2 = 1;
  return v2;
}


    if ( v11 > StoreCatalogItemModel::getStorePriority(v10) )
{
      v13 = StoreCatalogItemModel::getStorePriority(v10);
      if ( v13 > StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)((char *)v5 - 4)) )
      {
        v14 = *(_DWORD *)v6;
        *(_DWORD *)v6 = *(_DWORD *)v10;
        *(_DWORD *)v10 = v14;
        goto LABEL_14;
      }
      v17 = StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)v9);
      LODWORD(v18) = StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)((char *)v5 - 4));
      HIDWORD(v18) = *(_DWORD *)v6;
      if ( v17 <= (signed int)v18 )
        LODWORD(v18) = *(_DWORD *)(v6 + 4);
        *(_QWORD *)v6 = v18;
LABEL_12:
      *(_DWORD *)v6 = *(_DWORD *)v12;
      *(_DWORD *)v12 = HIDWORD(v18);
      goto LABEL_14;
    }
    v15 = StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)v9);
    if ( v15 > StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)((char *)v5 - 4)) )
    {
      v16 = *(_QWORD *)v6;
      *(_DWORD *)v6 = *(_QWORD *)v6 >> 32;
      *(_DWORD *)(v6 + 4) = v16;
    v19 = StoreCatalogItemModel::getStorePriority(v10);
    LODWORD(v18) = StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)((char *)v5 - 4));
    HIDWORD(v18) = *(_DWORD *)v6;
    if ( v19 > (signed int)v18 )
      goto LABEL_12;
    *(_DWORD *)v6 = *(_DWORD *)v10;
    *(_DWORD *)v10 = HIDWORD(v18);
LABEL_14:
    v20 = v5;
    v21 = (StoreCatalogItemModel *)v9;
    v22 = v9;
    while ( 1 )
      while ( 1 )
        v23 = StoreCatalogItemModel::getStorePriority(v21);
        if ( v23 <= StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)v6) )
          break;
        v21 = (StoreCatalogItemModel *)((char *)v21 + 4);
      do
        v20 = (StoreCatalogItemModel *)((char *)v20 - 4);
        v24 = StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)v6);
      while ( v24 > StoreCatalogItemModel::getStorePriority(v20) );
      if ( v21 >= v20 )
        break;
      v25 = *(_DWORD *)v21;
      *(_DWORD *)v21 = *(_DWORD *)v20;
      v21 = (StoreCatalogItemModel *)((char *)v21 + 4);
      *(_DWORD *)v20 = v25;
    v8 = v29;
    v4 = v4 & 0xFFFFFF00 | v28;
    result = sub_10E8C24((int)v21, v5, v29, v4);
    v7 = (int)v21 - v6;
    v5 = v21;
    v9 = v22;
    if ( (signed int)v21 - v6 <= 64 )
      return result;
  }
  v26 = ((v7 >> 2) - 2) / 2;
  do
  {
    v9 = v9 & 0xFFFFFF00 | v28;
    result = sub_10E8DBA(v6, v26, v7 >> 2, *(_DWORD *)(v6 + 4 * v26));
    --v26;
  while ( v26 != -1 );
  if ( v7 >= 5 )
    do
      v27 = *((_DWORD *)v5 - 1);
      v5 = (StoreCatalogItemModel *)((char *)v5 - 4);
      *(_DWORD *)v5 = *(_DWORD *)v6;
      result = sub_10E8DBA(v6, 0, ((signed int)v5 - v6) >> 2, v27);
    while ( (signed int)v5 - v6 > 4 );
  return result;
}


  if ( StoreCatalogItemModel::isValid((StoreCatalogItemModel *)&v15) == 1 )
{
    if ( StoreCatalogItemModel::isOwned((StoreCatalogItemModel *)&v15)
      || StoreCatalogItemModel::isAvailableForPurchase((StoreCatalogItemModel *)&v15) )
    {
      MainMenuScreenModel::navigateToPurchaseOfferScreen(*(_DWORD *)(v1 + 424), (StoreCatalogItemModel *)&v15, 2);
    }
    else
      sub_21E94B4((void **)&v14, "store.connection.failed.title");
      sub_21E94B4((void **)&v13, "store.connection.failed.body");
      sub_21E94B4((void **)&v12, "gui.close");
      StoreBaseScreenController::_openModalDialog(v1, &v14, &v13, &v12);
      v2 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v12 - 4);
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
          j_j_j_j__ZdlPv_9(v2);
      }
      v3 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v13 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v3);
      v4 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v14 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v4);
  }
  return 0;
}


  if ( StoreCatalogItemModel::isValid(v1) != 1 || StoreCatalogItemModel::isOwned(v1) )
{
    result = 0;
  }
  else
  {
    v3 = StoreCatalogItemModel::getPrice(v1);
    result = sub_DA7374((const void **)v3, "0") != 0;
  return result;
}


          if ( v7 > StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)(v4 - 4)) )
{
            do
            {
              *v5 = *v6;
              v8 = StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)&v10);
              v9 = StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)(v6 - 1));
              v5 = v6;
              --v6;
            }
            while ( v8 > v9 );
          }
          v4 += 4;
          result = v10;
          *v5 = v10;
          v5 = (StoreCatalogItemModel **)v4;
        }
        while ( v4 != HIDWORD(v2) );
      }
    }
  }
  return result;
}


      if ( v8 > StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)(v4 + 4 * (2 * v7 | 1))) )
{
      *(_DWORD *)(v4 + 4 * v7) = *(_DWORD *)(v4 + 4 * v5);
      v7 = v5;
    }
    while ( v5 < v6 );
  }
  if ( v17 & 1 )
  {
    v11 = v5;
    v9 = v18;
    v10 = v16;
  else
    if ( v5 == (v17 - 2) / 2 )
    {
      v11 = 2 * v5 | 1;
      *(_DWORD *)(v4 + 4 * v5) = *(_DWORD *)(v4 + 4 * v11);
    else
      v11 = v5;
  v19 = v10;
  if ( v11 <= v9 )
    v12 = v11;
LABEL_16:
    v14 = (_DWORD *)(v4 + 4 * v12);
    while ( 1 )
      v12 = (v11 - 1) / 2;
      v13 = StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)(v4 + 4 * v12));
      v14 = (_DWORD *)(v4 + 4 * v11);
      if ( v13 <= StoreCatalogItemModel::getStorePriority((StoreCatalogItemModel *)&v19) )
        break;
      *v14 = *(_DWORD *)(v4 + 4 * v12);
      v11 = v12;
      if ( v12 <= v9 )
        goto LABEL_16;
  result = v19;
  *v14 = v19;
  return result;
}
