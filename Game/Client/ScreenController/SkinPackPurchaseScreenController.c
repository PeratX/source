

const void **__fastcall SkinPackPurchaseScreenController::getAdditionalScreenInfo(SkinPackPurchaseScreenController *this, int a2)
{
  const void **v2; // r5@1
  int v3; // r4@1

  v2 = (const void **)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  sub_DA7404((const void **)this, *(_DWORD *)(*(_DWORD *)(a2 + 444) - 12) + 3);
  sub_DA73D4(v2, " - ", 3u);
  return sub_DA7564(v2, (const void **)(v3 + 444));
}


void __fastcall SkinPackPurchaseScreenController::~SkinPackPurchaseScreenController(SkinPackPurchaseScreenController *this)
{
  SkinPackPurchaseScreenController::~SkinPackPurchaseScreenController(this);
}


int __fastcall SkinPackPurchaseScreenController::tick(SkinPackPurchaseScreenController *this)
{
  SkinPackPurchaseScreenController *v1; // r5@1
  const StoreCatalogItemModel *v2; // r4@1
  int v3; // r0@1
  bool v4; // zf@1
  int v5; // r0@4
  int v6; // r6@6
  SkinPackCollectionModel *v7; // r0@9

  v1 = this;
  v2 = (SkinPackPurchaseScreenController *)((char *)this + 456);
  v3 = StoreCatalogItemModel::getStoreCategory((SkinPackPurchaseScreenController *)((char *)this + 456));
  v4 = v3 == 2;
  if ( v3 != 2 )
    v4 = v3 == 5;
  if ( v4 )
    v5 = MinecraftScreenController::tick(v1);
  else
    v5 = PurchaseEnabledScreenController::tick(v1);
  v6 = v5;
  if ( SkinPackCollectionModel::getCollectionChanged(*((SkinPackCollectionModel **)v1 + 113)) )
    v6 |= 1u;
  if ( *((_BYTE *)v1 + 516) )
  {
    *((_BYTE *)v1 + 516) = 0;
    v7 = (SkinPackCollectionModel *)MainMenuScreenModel::getSkinPackCollection(*((MainMenuScreenModel **)v1 + 106));
    SkinPackCollectionModel::collectionFromStoreCatalogItem(v7, v2);
  }
  return v6;
}


int __fastcall SkinPackPurchaseScreenController::SkinPackPurchaseScreenController(int a1, int a2, StoreCatalogItemModel *this, int a4, int a5)
{
  MainMenuScreenModel **v5; // r7@1
  int v6; // r4@1
  int v7; // r8@1
  int *v8; // r9@1
  int v9; // r0@1
  unsigned int *v10; // r0@2
  unsigned int v11; // r1@4
  int *v12; // r0@7
  int v13; // r6@7
  unsigned int *v14; // r1@8
  unsigned int v15; // r0@10
  unsigned int *v16; // r5@14
  unsigned int v17; // r0@16
  double v18; // r0@21
  unsigned int v19; // r0@23
  int v20; // r6@25
  void *v21; // r5@25
  int v22; // r0@26
  int v23; // r2@26
  __int64 v24; // kr00_8@26
  __int64 v25; // kr08_8@26
  char *v26; // r0@26
  unsigned int *v28; // r2@31
  signed int v29; // r1@33
  __int64 v30; // [sp+0h] [bp-40h]@26
  int v31; // [sp+8h] [bp-38h]@26
  int v32; // [sp+Ch] [bp-34h]@26
  int v33; // [sp+10h] [bp-30h]@26
  char *v34; // [sp+14h] [bp-2Ch]@26
  int v35; // [sp+18h] [bp-28h]@1
  int v36; // [sp+1Ch] [bp-24h]@1

  v5 = (MainMenuScreenModel **)a2;
  v6 = a1;
  v7 = a4;
  v35 = *(_DWORD *)a2;
  v8 = (int *)this;
  v9 = *(_DWORD *)(a2 + 4);
  v36 = v9;
  if ( v9 )
  {
    v10 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  }
  v12 = (int *)StoreCatalogItemModel::getProductId(this);
  PurchaseEnabledScreenController::PurchaseEnabledScreenController(v6, (int)&v35, v12);
  v13 = v36;
  if ( v36 )
    v14 = (unsigned int *)(v36 + 4);
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
  *(_DWORD *)v6 = &off_26D7D18;
  *(_DWORD *)(v6 + 452) = MainMenuScreenModel::getSkinPackCollection(*v5);
  *(_DWORD *)(v6 + 456) = *v8;
  StoreCatalogItemModel::getSkinPackIdentity((StoreCatalogItemModel *)(v6 + 464), v8);
  *(_DWORD *)(v6 + 512) = a5;
  *(_BYTE *)(v6 + 516) = 1;
  HIDWORD(v18) = 5;
  if ( a5 == 1 )
    HIDWORD(v18) = 4;
  *(_DWORD *)(v6 + 520) = HIDWORD(v18);
  *(_DWORD *)(v6 + 524) = v7;
  *(_DWORD *)(v6 + 528) = 0;
  *(_DWORD *)(v6 + 532) = -1;
  *(_DWORD *)(v6 + 544) = 0;
  *(_DWORD *)(v6 + 548) = 0;
  *(_DWORD *)(v6 + 552) = 1065353216;
  *(_DWORD *)(v6 + 556) = 0;
  LODWORD(v18) = v6 + 552;
  v19 = sub_DA7744(v18);
  *(_DWORD *)(v6 + 540) = v19;
  if ( v19 == 1 )
    v21 = (void *)(v6 + 560);
    *(_DWORD *)(v6 + 560) = 0;
  else
    if ( v19 >= 0x40000000 )
      sub_DA7414();
    v20 = 4 * v19;
    v21 = operator new(4 * v19);
    _aeabi_memclr4(v21, v20);
  *(_DWORD *)(v6 + 536) = v21;
  v22 = *(_DWORD *)(v6 + 452);
  v23 = *(_DWORD *)(v6 + 528);
  v24 = *(_QWORD *)(v6 + 464);
  v25 = *(_QWORD *)(v6 + 472);
  v31 = *(_QWORD *)(v6 + 472);
  v32 = HIDWORD(v25);
  v30 = v24;
  v33 = v23;
  v34 = (char *)&unk_28898CC;
  SkinPackCollectionModel::setPreviewSkin(v22, (int)&v30);
  v26 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v34 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  MainMenuScreenModel::setStoreCatalogItemViewed(
    *(MainMenuScreenModel **)(v6 + 424),
    (const StoreCatalogItemModel *)(v6 + 456));
  SkinPackPurchaseScreenController::_registerEventHandlers((SkinPackPurchaseScreenController *)v6);
  SkinPackPurchaseScreenController::_registerBindings((SkinPackPurchaseScreenController *)v6);
  if ( StoreCatalogItemModel::getStoreCategory((StoreCatalogItemModel *)(v6 + 456)) != 2 )
    PurchaseEnabledScreenController::_registerDownloadProgressBinds(v6, (int *)(v6 + 444));
  SkinPackPurchaseScreenController::_setEventProperties((SkinPackPurchaseScreenController *)v6);
  return v6;
}


void __fastcall SkinPackPurchaseScreenController::~SkinPackPurchaseScreenController(SkinPackPurchaseScreenController *this)
{
  SkinPackPurchaseScreenController *v1; // r0@1

  v1 = SkinPackPurchaseScreenController::~SkinPackPurchaseScreenController(this);
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall SkinPackPurchaseScreenController::_onPurchaseSuccess(int a1)
{
  SkinPackPurchaseScreenController::_onPurchaseSuccess(a1);
}


char *__fastcall SkinPackPurchaseScreenController::getEventProperties(SkinPackPurchaseScreenController *this)
{
  return (char *)this + 536;
}


void __fastcall SkinPackPurchaseScreenController::_registerEventHandlers(SkinPackPurchaseScreenController *this)
{
  SkinPackPurchaseScreenController::_registerEventHandlers(this);
}


SkinPackPurchaseScreenController *__fastcall SkinPackPurchaseScreenController::~SkinPackPurchaseScreenController(SkinPackPurchaseScreenController *this)
{
  SkinPackPurchaseScreenController *v1; // r4@1
  char *v2; // r0@1
  int v3; // r1@4
  void *v4; // r0@4
  int v5; // r1@5
  void *v6; // r0@5
  int v7; // r1@6
  void *v8; // r0@6
  unsigned int *v10; // r12@8
  signed int v11; // r1@10
  unsigned int *v12; // r12@12
  signed int v13; // r1@14
  unsigned int *v14; // r12@16
  signed int v15; // r1@18

  v1 = this;
  *(_DWORD *)this = &off_26D7D18;
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)this + 536);
  v2 = (char *)*((_DWORD *)v1 + 134);
  if ( v2 && (char *)v1 + 560 != v2 )
    operator delete(v2);
  v3 = *((_DWORD *)v1 + 124);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v3 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 123);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v5 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  v7 = *((_DWORD *)v1 + 122);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v7 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  PurchaseEnabledScreenController::~PurchaseEnabledScreenController(v1);
  return v1;
}


int __fastcall SkinPackPurchaseScreenController::_registerBindings(SkinPackPurchaseScreenController *this)
{
  SkinPackPurchaseScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  _DWORD *v11; // r0@13
  __int64 v12; // r1@13
  __int64 v13; // r1@13
  _DWORD *v14; // r0@17
  __int64 v15; // r1@17
  __int64 v16; // r1@17
  _DWORD *v17; // r0@21
  __int64 v18; // r1@21
  __int64 v19; // r1@21
  _DWORD *v20; // r0@25
  __int64 v21; // r1@25
  _DWORD *v22; // r0@27
  __int64 v23; // r1@27
  _DWORD *v24; // r0@29
  __int64 v25; // r1@29
  _DWORD *v26; // r0@31
  __int64 v27; // r1@31
  _DWORD *v28; // r0@33
  __int64 v29; // r1@33
  __int64 v30; // r1@33
  _DWORD *v31; // r0@37
  __int64 v32; // r1@37
  __int64 v33; // r1@37
  _DWORD *v34; // r0@41
  __int64 v35; // r1@41
  __int64 v36; // r1@41
  _DWORD *v37; // r0@45
  __int64 v38; // r1@45
  __int64 v39; // r1@45
  _DWORD *v40; // r0@51
  __int64 v41; // r1@51
  int result; // r0@53
  void *v43; // [sp+0h] [bp-230h]@56
  int (__fastcall *v44)(void **, void **, int); // [sp+8h] [bp-228h]@56
  void (__fastcall *v45)(int, unsigned int, const char **, int); // [sp+Ch] [bp-224h]@56
  char v46; // [sp+10h] [bp-220h]@56
  int v47; // [sp+14h] [bp-21Ch]@56
  void *v48; // [sp+18h] [bp-218h]@54
  void (*v49)(void); // [sp+20h] [bp-210h]@54
  void (__fastcall *v50)(int, int, const char **, int); // [sp+24h] [bp-20Ch]@54
  char v51; // [sp+28h] [bp-208h]@54
  int v52; // [sp+2Ch] [bp-204h]@54
  _DWORD *v53; // [sp+30h] [bp-200h]@51
  __int64 v54; // [sp+38h] [bp-1F8h]@51
  char v55; // [sp+40h] [bp-1F0h]@51
  int v56; // [sp+44h] [bp-1ECh]@51
  void *v57; // [sp+48h] [bp-1E8h]@49
  void (*v58)(void); // [sp+50h] [bp-1E0h]@49
  void (__fastcall *v59)(int, unsigned int, const char **, int); // [sp+54h] [bp-1DCh]@49
  int v60; // [sp+58h] [bp-1D8h]@49
  int v61; // [sp+5Ch] [bp-1D4h]@49
  void *v62; // [sp+60h] [bp-1D0h]@45
  __int64 v63; // [sp+68h] [bp-1C8h]@45
  _DWORD *v64; // [sp+70h] [bp-1C0h]@45
  __int64 v65; // [sp+78h] [bp-1B8h]@45
  int v66; // [sp+80h] [bp-1B0h]@45
  void *v67; // [sp+84h] [bp-1ACh]@41
  __int64 v68; // [sp+8Ch] [bp-1A4h]@41
  _DWORD *v69; // [sp+94h] [bp-19Ch]@41
  __int64 v70; // [sp+9Ch] [bp-194h]@41
  int v71; // [sp+A4h] [bp-18Ch]@41
  void *v72; // [sp+A8h] [bp-188h]@37
  __int64 v73; // [sp+B0h] [bp-180h]@37
  _DWORD *v74; // [sp+B8h] [bp-178h]@37
  __int64 v75; // [sp+C0h] [bp-170h]@37
  int v76; // [sp+C8h] [bp-168h]@37
  void *v77; // [sp+CCh] [bp-164h]@33
  __int64 v78; // [sp+D4h] [bp-15Ch]@33
  _DWORD *v79; // [sp+DCh] [bp-154h]@33
  __int64 v80; // [sp+E4h] [bp-14Ch]@33
  int v81; // [sp+ECh] [bp-144h]@33
  _DWORD *v82; // [sp+F0h] [bp-140h]@31
  __int64 v83; // [sp+F8h] [bp-138h]@31
  int v84; // [sp+100h] [bp-130h]@31
  int v85; // [sp+104h] [bp-12Ch]@31
  _DWORD *v86; // [sp+108h] [bp-128h]@29
  __int64 v87; // [sp+110h] [bp-120h]@29
  int v88; // [sp+118h] [bp-118h]@29
  int v89; // [sp+11Ch] [bp-114h]@29
  _DWORD *v90; // [sp+120h] [bp-110h]@27
  __int64 v91; // [sp+128h] [bp-108h]@27
  int v92; // [sp+130h] [bp-100h]@27
  _DWORD *v93; // [sp+134h] [bp-FCh]@25
  __int64 v94; // [sp+13Ch] [bp-F4h]@25
  int v95; // [sp+144h] [bp-ECh]@25
  void *v96; // [sp+148h] [bp-E8h]@21
  __int64 v97; // [sp+150h] [bp-E0h]@21
  _DWORD *v98; // [sp+158h] [bp-D8h]@21
  __int64 v99; // [sp+160h] [bp-D0h]@21
  int v100; // [sp+168h] [bp-C8h]@21
  void *v101; // [sp+16Ch] [bp-C4h]@17
  __int64 v102; // [sp+174h] [bp-BCh]@17
  _DWORD *v103; // [sp+17Ch] [bp-B4h]@17
  __int64 v104; // [sp+184h] [bp-ACh]@17
  int v105; // [sp+18Ch] [bp-A4h]@17
  void *v106; // [sp+190h] [bp-A0h]@13
  __int64 v107; // [sp+198h] [bp-98h]@13
  _DWORD *v108; // [sp+1A0h] [bp-90h]@13
  __int64 v109; // [sp+1A8h] [bp-88h]@13
  int v110; // [sp+1B0h] [bp-80h]@13
  void *v111; // [sp+1B4h] [bp-7Ch]@9
  __int64 v112; // [sp+1BCh] [bp-74h]@9
  _DWORD *v113; // [sp+1C4h] [bp-6Ch]@9
  __int64 v114; // [sp+1CCh] [bp-64h]@9
  int v115; // [sp+1D4h] [bp-5Ch]@9
  void *v116; // [sp+1D8h] [bp-58h]@5
  __int64 v117; // [sp+1E0h] [bp-50h]@5
  _DWORD *v118; // [sp+1E8h] [bp-48h]@5
  __int64 v119; // [sp+1F0h] [bp-40h]@5
  int v120; // [sp+1F8h] [bp-38h]@5
  void *v121; // [sp+1FCh] [bp-34h]@1
  __int64 v122; // [sp+204h] [bp-2Ch]@1
  _DWORD *v123; // [sp+20Ch] [bp-24h]@1
  __int64 v124; // [sp+214h] [bp-1Ch]@1
  int v125; // [sp+21Ch] [bp-14h]@1

  v1 = this;
  v125 = -309112757;
  v2 = operator new(4u);
  LODWORD(v3) = sub_CBBB4C;
  *v2 = v1;
  HIDWORD(v3) = sub_CBBB26;
  v123 = v2;
  v124 = v3;
  v121 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v122 = v4;
  ScreenController::bindString((int)v1, &v125, (int)&v123, (int)&v121);
  if ( (_DWORD)v122 )
    ((void (*)(void))v122)();
  if ( (_DWORD)v124 )
    ((void (*)(void))v124)();
  StringHash::StringHash<char [23]>(&v120, (int)"#skins_grid_dimensions");
  v5 = operator new(4u);
  LODWORD(v6) = sub_CBBB92;
  *v5 = v1;
  HIDWORD(v6) = sub_CBBB82;
  v118 = v5;
  v119 = v6;
  v116 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v117 = v7;
  ScreenController::bindGridSize((int)v1, &v120, (int)&v118, (int)&v116);
  if ( (_DWORD)v117 )
    ((void (*)(void))v117)();
  if ( (_DWORD)v119 )
    ((void (*)(void))v119)();
  v115 = -415523923;
  v8 = operator new(4u);
  LODWORD(v9) = sub_CBBECC;
  *v8 = v1;
  HIDWORD(v9) = sub_CBBBC8;
  v113 = v8;
  v114 = v9;
  v111 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v112 = v10;
  ScreenController::bindString((int)v1, &v115, (int)&v113, (int)&v111);
  if ( (_DWORD)v112 )
    ((void (*)(void))v112)();
  if ( (_DWORD)v114 )
    ((void (*)(void))v114)();
  v110 = 2140919715;
  v11 = operator new(4u);
  LODWORD(v12) = sub_CBBFC0;
  *v11 = v1;
  HIDWORD(v12) = sub_CBBF04;
  v108 = v11;
  v109 = v12;
  v106 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v107 = v13;
  ScreenController::bindString((int)v1, &v110, (int)&v108, (int)&v106);
  if ( (_DWORD)v107 )
    ((void (*)(void))v107)();
  if ( (_DWORD)v109 )
    ((void (*)(void))v109)();
  v105 = 1638595445;
  v14 = operator new(4u);
  LODWORD(v15) = sub_CBC012;
  *v14 = v1;
  HIDWORD(v15) = sub_CBBFF6;
  v103 = v14;
  v104 = v15;
  v101 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v102 = v16;
  ScreenController::bindString((int)v1, &v105, (int)&v103, (int)&v101);
  if ( (_DWORD)v102 )
    ((void (*)(void))v102)();
  if ( (_DWORD)v104 )
    ((void (*)(void))v104)();
  v100 = 1776199042;
  v17 = operator new(4u);
  LODWORD(v18) = sub_CBC074;
  *v17 = v1;
  HIDWORD(v18) = sub_CBC048;
  v98 = v17;
  v99 = v18;
  v96 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v97 = v19;
  ScreenController::bindString((int)v1, &v100, (int)&v98, (int)&v96);
  if ( (_DWORD)v97 )
    ((void (*)(void))v97)();
  if ( (_DWORD)v99 )
    ((void (*)(void))v99)();
  v95 = 578608258;
  v20 = operator new(4u);
  LODWORD(v21) = sub_CBC108;
  *v20 = v1;
  HIDWORD(v21) = sub_CBC0AC;
  v93 = v20;
  v94 = v21;
  ScreenController::bindForGlobal((int)v1, &v95, (int)&v93);
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  StringHash::StringHash<char [31]>(&v92, (int)"#pack_loading_progress_visible");
  v22 = operator new(4u);
  LODWORD(v23) = sub_CBC1F0;
  *v22 = v1;
  HIDWORD(v23) = sub_CBC1BC;
  v90 = v22;
  v91 = v23;
  ScreenController::bindForGlobal((int)v1, &v92, (int)&v90);
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
  v88 = 579206884;
  v89 = 411527482;
  v24 = operator new(4u);
  LODWORD(v25) = sub_CBC2BC;
  *v24 = v1;
  HIDWORD(v25) = sub_CBC228;
  v86 = v24;
  v87 = v25;
  ScreenController::bindForCollection((int)v1, &v89, &v88, (int)&v86);
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  v85 = 411527482;
  v84 = -1345086622;
  v26 = operator new(4u);
  LODWORD(v27) = sub_CBC364;
  *v26 = v1;
  HIDWORD(v27) = sub_CBC2F4;
  v82 = v26;
  v83 = v27;
  ScreenController::bindForCollection((int)v1, &v85, &v84, (int)&v82);
  if ( (_DWORD)v83 )
    ((void (*)(void))v83)();
  v81 = 1376875312;
  v28 = operator new(4u);
  LODWORD(v29) = sub_CBC3AA;
  *v28 = v1;
  HIDWORD(v29) = sub_CBC39A;
  v79 = v28;
  v80 = v29;
  v77 = operator new(1u);
  LODWORD(v30) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v30) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v78 = v30;
  ScreenController::bindString((int)v1, &v81, (int)&v79, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  v76 = 1179966702;
  v31 = operator new(4u);
  LODWORD(v32) = sub_CBC41C;
  *v31 = v1;
  HIDWORD(v32) = sub_CBC3E0;
  v74 = v31;
  v75 = v32;
  v72 = operator new(1u);
  LODWORD(v33) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v33) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v73 = v33;
  ScreenController::bindBool((int)v1, &v76, (int)&v74, (int)&v72);
  if ( (_DWORD)v73 )
    ((void (*)(void))v73)();
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  StringHash::StringHash<char [37]>(&v71, (int)"#skin_cycle_pack_left_button_enabled");
  v34 = operator new(4u);
  LODWORD(v35) = sub_CBC474;
  *v34 = v1;
  HIDWORD(v35) = sub_CBC452;
  v69 = v34;
  v70 = v35;
  v67 = operator new(1u);
  LODWORD(v36) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v36) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v68 = v36;
  ScreenController::bindBool((int)v1, &v71, (int)&v69, (int)&v67);
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  if ( (_DWORD)v70 )
    ((void (*)(void))v70)();
  StringHash::StringHash<char [38]>(&v66, (int)"#skin_cycle_pack_right_button_enabled");
  v37 = operator new(4u);
  LODWORD(v38) = sub_CBC4DA;
  *v37 = v1;
  HIDWORD(v38) = sub_CBC4AA;
  v64 = v37;
  v65 = v38;
  v62 = operator new(1u);
  LODWORD(v39) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v39) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v63 = v39;
  ScreenController::bindBool((int)v1, &v66, (int)&v64, (int)&v62);
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  v61 = 411527482;
  v60 = -47630688;
  v57 = operator new(1u);
  v58 = (void (*)(void))sub_CBC5E4;
  v59 = sub_CBC510;
  ScreenController::bindForCollection((int)v1, &v61, &v60, (int)&v57);
  if ( v58 )
    v58();
  v56 = 411527482;
  StringHash::StringHash<char [28]>(&v55, (int)"#grid_button_override_right");
  v40 = operator new(4u);
  LODWORD(v41) = sub_CBC7AC;
  *v40 = v1;
  HIDWORD(v41) = sub_CBC614;
  v53 = v40;
  v54 = v41;
  ScreenController::bindForCollection((int)v1, &v56, &v55, (int)&v53);
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  result = StoreCatalogItemModel::getStoreCategory((SkinPackPurchaseScreenController *)((char *)v1 + 456));
  if ( result != 2 )
  {
    v52 = 411527482;
    StringHash::StringHash<char [27]>(&v51, (int)"#grid_button_override_left");
    v48 = operator new(1u);
    v49 = (void (*)(void))sub_CBC8C4;
    v50 = sub_CBC7E4;
    ScreenController::bindForCollection((int)v1, &v52, &v51, (int)&v48);
    if ( v49 )
      v49();
    v47 = 411527482;
    StringHash::StringHash<char [25]>(&v46, (int)"#grid_button_override_up");
    v43 = operator new(1u);
    v44 = sub_CBC9C8;
    v45 = sub_CBC8F4;
    result = ScreenController::bindForCollection((int)v1, &v47, &v46, (int)&v43);
    if ( v44 )
      result = ((int (__cdecl *)(void **))v44)(&v43);
  }
  return result;
}


void __fastcall SkinPackPurchaseScreenController::_onPurchaseSuccess(int a1)
{
  int v1; // r5@1
  int v2; // r4@1
  int *v3; // r0@1
  char *v4; // r0@1
  int *v5; // r0@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  char *v9; // r4@4
  int v10; // r6@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  int *v13; // r0@14
  void *v14; // r0@19
  void *v15; // r0@20
  unsigned int *v16; // r2@22
  signed int v17; // r1@24
  unsigned int *v18; // r2@26
  signed int v19; // r1@28
  unsigned int *v20; // r2@30
  signed int v21; // r1@32
  unsigned int *v22; // r2@34
  signed int v23; // r1@36
  unsigned int *v24; // r2@38
  signed int v25; // r1@40
  int v26; // [sp+Ch] [bp-4Ch]@1
  int v27; // [sp+14h] [bp-44h]@1
  int v28; // [sp+18h] [bp-40h]@1
  char *v29; // [sp+1Ch] [bp-3Ch]@1
  char *v30; // [sp+20h] [bp-38h]@1
  char *v31; // [sp+24h] [bp-34h]@1
  int v32; // [sp+2Ch] [bp-2Ch]@1
  int v33; // [sp+30h] [bp-28h]@1

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 424);
  sub_DA7364((void **)&v32, "store.purchase.success");
  v3 = (int *)StoreCatalogItemModel::getTitle((StoreCatalogItemModel *)(v1 + 456));
  sub_DA73B4(&v28, v3);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v4 = (char *)operator new(4u);
  v29 = v4;
  v31 = v4 + 4;
  v30 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v28,
                  (int)&v29,
                  (int)v4);
  I18n::get(&v33, &v32, (unsigned __int64 *)&v29);
  sub_DA7364((void **)&v27, (const char *)&unk_257BC67);
  v5 = (int *)sub_DA7364((void **)&v26, (const char *)&unk_257BC67);
  MinecraftScreenModel::pushToast(v2, 6, &v33, &v27, v5);
  v6 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v27 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v33 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  v10 = (int)v30;
  v9 = v29;
  if ( v29 != v30 )
    do
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
          j_j_j_j_j__ZdlPv_9(v13);
      }
      v9 += 4;
    while ( v9 != (char *)v10 );
    v9 = v29;
  if ( v9 )
    operator delete(v9);
  v14 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v28 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v32 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
}


void __fastcall SkinPackPurchaseScreenController::_registerEventHandlers(SkinPackPurchaseScreenController *this)
{
  SkinPackPurchaseScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  int v14; // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  void *v17; // r0@12
  int v18; // r5@13
  _DWORD *v19; // r0@13
  __int64 v20; // r1@13
  void *v21; // r0@15
  int v22; // r5@16
  _DWORD *v23; // r0@16
  __int64 v24; // r1@16
  void *v25; // r0@18
  int v26; // r5@19
  _DWORD *v27; // r0@19
  __int64 v28; // r1@19
  void *v29; // r0@21
  int v30; // r5@22
  _DWORD *v31; // r0@22
  __int64 v32; // r1@22
  void *v33; // r0@24
  int v34; // r0@25
  bool v35; // zf@25
  int v36; // r5@28
  _DWORD *v37; // r0@28
  __int64 v38; // r1@28
  void *v39; // r0@30
  unsigned int *v40; // r2@32
  signed int v41; // r1@34
  unsigned int *v42; // r2@36
  signed int v43; // r1@38
  unsigned int *v44; // r2@40
  signed int v45; // r1@42
  unsigned int *v46; // r2@44
  signed int v47; // r1@46
  unsigned int *v48; // r2@48
  signed int v49; // r1@50
  unsigned int *v50; // r2@52
  signed int v51; // r1@54
  unsigned int *v52; // r2@56
  signed int v53; // r1@58
  unsigned int *v54; // r2@60
  signed int v55; // r1@62
  unsigned int *v56; // r2@96
  signed int v57; // r1@98
  _DWORD *v58; // [sp+4h] [bp-ECh]@28
  __int64 v59; // [sp+Ch] [bp-E4h]@28
  int v60; // [sp+18h] [bp-D8h]@28
  _DWORD *v61; // [sp+1Ch] [bp-D4h]@22
  __int64 v62; // [sp+24h] [bp-CCh]@22
  int v63; // [sp+30h] [bp-C0h]@22
  _DWORD *v64; // [sp+34h] [bp-BCh]@19
  __int64 v65; // [sp+3Ch] [bp-B4h]@19
  int v66; // [sp+48h] [bp-A8h]@19
  _DWORD *v67; // [sp+4Ch] [bp-A4h]@16
  __int64 v68; // [sp+54h] [bp-9Ch]@16
  int v69; // [sp+60h] [bp-90h]@16
  _DWORD *v70; // [sp+64h] [bp-8Ch]@13
  __int64 v71; // [sp+6Ch] [bp-84h]@13
  int v72; // [sp+78h] [bp-78h]@13
  _DWORD *v73; // [sp+7Ch] [bp-74h]@10
  __int64 v74; // [sp+84h] [bp-6Ch]@10
  int v75; // [sp+90h] [bp-60h]@10
  _DWORD *v76; // [sp+94h] [bp-5Ch]@7
  __int64 v77; // [sp+9Ch] [bp-54h]@7
  int v78; // [sp+A8h] [bp-48h]@7
  _DWORD *v79; // [sp+ACh] [bp-44h]@4
  __int64 v80; // [sp+B4h] [bp-3Ch]@4
  int v81; // [sp+C0h] [bp-30h]@4
  _DWORD *v82; // [sp+C4h] [bp-2Ch]@1
  __int64 v83; // [sp+CCh] [bp-24h]@1
  int v84; // [sp+D8h] [bp-18h]@1

  v1 = this;
  sub_DA7364((void **)&v84, "button.close_dialog");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v84);
  v3 = operator new(4u);
  LODWORD(v4) = sub_CBB59C;
  *v3 = v1;
  HIDWORD(v4) = sub_CBB58E;
  v82 = v3;
  v83 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v82);
  if ( (_DWORD)v83 )
    ((void (*)(void))v83)();
  v5 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
  {
    v40 = (unsigned int *)(v84 - 4);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
  sub_DA7364((void **)&v81, "button.view_skin");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v81);
  v7 = operator new(4u);
  LODWORD(v8) = sub_CBB71C;
  *v7 = v1;
  HIDWORD(v8) = sub_CBB5D4;
  v79 = v7;
  v80 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v79);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  v9 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v81 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  sub_DA7364((void **)&v78, "button.buy_pack");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v78);
  v11 = operator new(4u);
  LODWORD(v12) = sub_CBB880;
  *v11 = v1;
  HIDWORD(v12) = sub_CBB754;
  v76 = v11;
  v77 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v76);
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  v13 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v78 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  sub_DA7364((void **)&v75, "button.cycle_pack_left");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v75);
  v15 = operator new(4u);
  LODWORD(v16) = sub_CBB8D4;
  *v15 = v1;
  HIDWORD(v16) = sub_CBB8B6;
  v73 = v15;
  v74 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v73);
  if ( (_DWORD)v74 )
    ((void (*)(void))v74)();
  v17 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v75 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  sub_DA7364((void **)&v72, "button.cycle_pack_right");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v72);
  v19 = operator new(4u);
  LODWORD(v20) = sub_CBB928;
  *v19 = v1;
  HIDWORD(v20) = sub_CBB90A;
  v70 = v19;
  v71 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v70);
  if ( (_DWORD)v71 )
    ((void (*)(void))v71)();
  v21 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v72 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  sub_DA7364((void **)&v69, "modal.escape");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v69);
  v23 = operator new(4u);
  LODWORD(v24) = sub_CBB96C;
  *v23 = v1;
  HIDWORD(v24) = sub_CBB95E;
  v67 = v23;
  v68 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v67);
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  v25 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v69 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
  sub_DA7364((void **)&v66, "button.skin_hovered");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v66);
  v27 = operator new(4u);
  LODWORD(v28) = sub_CBBA04;
  *v27 = v1;
  HIDWORD(v28) = sub_CBB9A4;
  v64 = v27;
  v65 = v28;
  ScreenController::registerButtonEventHandler((int)v1, v26, 1, 0, (int)&v64);
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  v29 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v66 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  sub_DA7364((void **)&v63, "button.skin_unhovered");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v63);
  v31 = operator new(4u);
  LODWORD(v32) = sub_CBBAA8;
  *v31 = v1;
  HIDWORD(v32) = sub_CBBA3C;
  v61 = v31;
  v62 = v32;
  ScreenController::registerButtonEventHandler((int)v1, v30, 0, 2, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  v33 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v63 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9(v33);
  v34 = StoreCatalogItemModel::getStoreCategory((SkinPackPurchaseScreenController *)((char *)v1 + 456));
  v35 = v34 == 2;
  if ( v34 != 2 )
    v35 = v34 == 5;
  if ( !v35 )
    sub_DA7364((void **)&v60, "button.coin_wallet");
    v36 = MinecraftScreenController::_getNameId(v1, (int **)&v60);
    v37 = operator new(4u);
    LODWORD(v38) = sub_CBBAF0;
    *v37 = v1;
    HIDWORD(v38) = sub_CBBADE;
    v58 = v37;
    v59 = v38;
    ScreenController::registerButtonClickHandler((int)v1, v36, (int)&v58);
    if ( (_DWORD)v59 )
      ((void (*)(void))v59)();
    v39 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v60 - 4);
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
        j_j_j_j_j__ZdlPv_9(v39);
}


int __fastcall SkinPackPurchaseScreenController::handleGameEventNotification(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = ScreenController::handleGameEventNotification(a1);
  if ( v2 == 14 )
    result |= 1u;
  return result;
}


void __fastcall SkinPackPurchaseScreenController::_setEventProperties(SkinPackPurchaseScreenController *this)
{
  SkinPackPurchaseScreenController *v1; // r4@1
  int *v2; // r5@2
  void *v3; // r0@2
  void *v4; // r0@3
  int *v5; // r5@4
  int *v6; // r0@4
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  int v14; // [sp+4h] [bp-24h]@4
  int v15; // [sp+8h] [bp-20h]@2
  int v16; // [sp+10h] [bp-18h]@2

  v1 = this;
  if ( *((_DWORD *)this + 128) == 1 )
  {
    sub_DA7364((void **)&v16, "ReferralSkinId");
    v2 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                  (int)v1 + 536,
                  (int **)&v16);
    Util::toString<int,(void *)0,(void *)0>((void **)&v15, *((_DWORD *)v1 + 131));
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v15);
    v3 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v15 - 4);
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
        j_j_j_j_j__ZdlPv_9(v3);
    }
    v4 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v16 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9(v4);
  }
  sub_DA7364((void **)&v14, "ReferralPackName");
  v5 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (int)v1 + 536,
                (int **)&v14);
  v6 = (int *)StoreCatalogItemModel::getTitle((SkinPackPurchaseScreenController *)((char *)v1 + 456));
  EntityInteraction::setInteractText(v5, v6);
  v7 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
}


void __fastcall SkinPackPurchaseScreenController::_setEventProperties(SkinPackPurchaseScreenController *this)
{
  SkinPackPurchaseScreenController::_setEventProperties(this);
}


int __fastcall SkinPackPurchaseScreenController::addStaticScreenVars(SkinPackPurchaseScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  SkinPackPurchaseScreenController *v3; // r5@1
  int v4; // r6@1
  const void **v5; // r0@1
  int v7; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$pack_name");
  v5 = StoreCatalogItemModel::getTitle((SkinPackPurchaseScreenController *)((char *)v3 + 456));
  Json::Value::Value((int)&v7, (const char **)v5);
  Json::Value::operator=(v4, (const Json::Value *)&v7);
  Json::Value::~Value((Json::Value *)&v7);
  return ScreenController::addStaticScreenVars(v3, v2);
}
