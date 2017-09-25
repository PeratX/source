

void __fastcall WorldSeedCatalogScreenController::_registerEventHandlers(WorldSeedCatalogScreenController *this)
{
  WorldSeedCatalogScreenController::_registerEventHandlers(this);
}


int __fastcall WorldSeedCatalogScreenController::WorldSeedCatalogScreenController(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  int v6; // r6@1
  unsigned int *v7; // r1@2
  unsigned int v8; // r0@4
  unsigned int *v9; // r7@8
  unsigned int v10; // r0@10
  void (__fastcall *v11)(int, int, signed int); // r3@15
  WorldSeedCatalogModel *v12; // r0@17
  int v14; // [sp+0h] [bp-20h]@1
  int v15; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v14 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = 0;
  v15 = v5;
  *(_DWORD *)a2 = 0;
  MainMenuScreenController::MainMenuScreenController(v3, (int)&v14);
  v6 = v15;
  if ( v15 )
  {
    v7 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  *(_DWORD *)v3 = &off_26E4084;
  *(_DWORD *)(v3 + 440) = 0;
  v11 = *(void (__fastcall **)(int, int, signed int))(v4 + 8);
  if ( v11 )
    v11(v3 + 432, v4, 2);
    *(_DWORD *)(v3 + 444) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v3 + 440) = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v3 + 448) = &unk_28898CC;
  *(_DWORD *)(v3 + 460) = 0;
  *(_DWORD *)(v3 + 476) = 0;
  WorldSeedCatalogScreenController::_registerBindings((WorldSeedCatalogScreenController *)v3);
  WorldSeedCatalogScreenController::_registerEventHandlers((WorldSeedCatalogScreenController *)v3);
  v12 = (WorldSeedCatalogModel *)MainMenuScreenModel::getWorldSeedCatalogModel(*(MainMenuScreenModel **)(v3 + 424));
  WorldSeedCatalogModel::fetch(v12);
  return v3;
}


WorldSeedCatalogScreenController *__fastcall WorldSeedCatalogScreenController::~WorldSeedCatalogScreenController(WorldSeedCatalogScreenController *this)
{
  WorldSeedCatalogScreenController *v1; // r4@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  int v4; // r1@5
  void *v5; // r0@5
  void (*v6)(void); // r3@6
  unsigned int *v8; // r12@9
  signed int v9; // r1@11

  v1 = this;
  *(_DWORD *)this = &off_26E4084;
  v2 = (void (*)(void))*((_DWORD *)this + 119);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 115);
  if ( v3 )
    v3();
  v4 = *((_DWORD *)v1 + 112);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v4 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void (*)(void))*((_DWORD *)v1 + 110);
  if ( v6 )
    v6();
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


int __fastcall WorldSeedCatalogScreenController::setViewCommand(WorldSeedCatalogScreenController *this, ScreenViewCommand *a2)
{
  int v2; // r12@0
  int v3; // lr@0
  WorldSeedCatalogScreenController *v4; // r4@1
  int v5; // r0@1
  ScreenViewCommand *v6; // r5@1
  void (__fastcall *v7)(__int64 *, char *, signed int); // r3@1
  int v8; // r1@2
  int v9; // r2@4
  void (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int result; // r0@6
  void (__fastcall *v12)(__int64 *, char *, signed int); // r3@6
  int v13; // r1@7
  int v14; // r6@9
  int (__cdecl *v15)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@9
  __int64 v16; // [sp+0h] [bp-30h]@2
  void (__cdecl *v17)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-28h]@1
  int v18; // [sp+Ch] [bp-24h]@2
  __int64 v19; // [sp+10h] [bp-20h]@7
  int (__cdecl *v20)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+18h] [bp-18h]@6
  int v21; // [sp+1Ch] [bp-14h]@7

  v4 = this;
  v5 = 0;
  v6 = a2;
  v17 = 0;
  v7 = (void (__fastcall *)(__int64 *, char *, signed int))*((_DWORD *)a2 + 18);
  if ( v7 )
  {
    v7(&v16, (char *)a2 + 64, 2);
    v5 = *((_DWORD *)v6 + 19);
    v18 = *((_DWORD *)v6 + 19);
    v8 = *((_DWORD *)v6 + 18);
    v17 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 18);
    v3 = HIDWORD(v16);
    v2 = v16;
  }
  else
    v8 = 0;
  v9 = (int)v4 + 452;
  v16 = *(_QWORD *)((char *)v4 + 452);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v17 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 115);
  v10 = v17;
  *((_DWORD *)v4 + 115) = v8;
  v18 = *((_DWORD *)v4 + 116);
  *((_DWORD *)v4 + 116) = v5;
  if ( v10 )
    v10(&v16, &v16, 3, v10);
  result = 0;
  v20 = 0;
  v12 = (void (__fastcall *)(__int64 *, char *, signed int))*((_DWORD *)v6 + 22);
  if ( v12 )
    v12(&v19, (char *)v6 + 80, 2);
    result = *((_DWORD *)v6 + 23);
    v21 = *((_DWORD *)v6 + 23);
    v13 = *((_DWORD *)v6 + 22);
    v20 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v6 + 22);
    v12 = (void (__fastcall *)(__int64 *, char *, signed int))HIDWORD(v19);
    v2 = v19;
    v13 = 0;
  v14 = (int)v4 + 468;
  v19 = *(_QWORD *)((char *)v4 + 468);
  *(_DWORD *)v14 = v2;
  *(_DWORD *)(v14 + 4) = v12;
  v20 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 119);
  v15 = v20;
  *((_DWORD *)v4 + 119) = v13;
  v21 = *((_DWORD *)v4 + 120);
  *((_DWORD *)v4 + 120) = result;
  if ( v15 )
    result = v15(&v19, &v19, 3, v15, v16, HIDWORD(v16), v17, v18);
  return result;
}


void __fastcall WorldSeedCatalogScreenController::_registerEventHandlers(WorldSeedCatalogScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  _DWORD *v10; // r0@7
  __int64 v11; // r1@7
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  _DWORD *v16; // [sp+4h] [bp-54h]@7
  __int64 v17; // [sp+Ch] [bp-4Ch]@7
  _DWORD *v18; // [sp+14h] [bp-44h]@4
  __int64 v19; // [sp+1Ch] [bp-3Ch]@4
  int v20; // [sp+28h] [bp-30h]@4
  _DWORD *v21; // [sp+2Ch] [bp-2Ch]@1
  __int64 v22; // [sp+34h] [bp-24h]@1
  int v23; // [sp+40h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v23, "#search_box_name");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v23);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1284C9C;
  *v3 = v1;
  HIDWORD(v4) = sub_1284934;
  v21 = v3;
  v22 = v4;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v2, (int)&v21);
  if ( (_DWORD)v22 )
    ((void (*)(void))v22)();
  v5 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v20, "button.ugc_item");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v20);
  v7 = operator new(4u);
  LODWORD(v8) = sub_1284D8C;
  *v7 = v1;
  HIDWORD(v8) = sub_1284CD4;
  v18 = v7;
  v19 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v18);
  if ( (_DWORD)v19 )
    ((void (*)(void))v19)();
  v9 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v20 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = operator new(4u);
  LODWORD(v11) = sub_1284EE0;
  *v10 = v1;
  HIDWORD(v11) = sub_1284DC4;
  v16 = v10;
  v17 = v11;
  ScreenController::registerTextEventHandler((int)v1, (int)&v16);
  if ( (_DWORD)v17 )
    ((void (*)(void))v17)();
}


int __fastcall WorldSeedCatalogScreenController::tick(WorldSeedCatalogScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  WorldSeedCatalogModel *v2; // r0@1
  int result; // r0@2

  v1 = this;
  v2 = (WorldSeedCatalogModel *)MainMenuScreenModel::getWorldSeedCatalogModel(*((MainMenuScreenModel **)this + 106));
  if ( WorldSeedCatalogModel::update(v2) )
    result = 1;
  else
    result = j_j_j__ZN25MinecraftScreenController4tickEv_0(v1);
  return result;
}


void __fastcall WorldSeedCatalogScreenController::_registerBindings(WorldSeedCatalogScreenController *this)
{
  WorldSeedCatalogScreenController::_registerBindings(this);
}


void __fastcall WorldSeedCatalogScreenController::~WorldSeedCatalogScreenController(WorldSeedCatalogScreenController *this)
{
  WorldSeedCatalogScreenController *v1; // r0@1

  v1 = WorldSeedCatalogScreenController::~WorldSeedCatalogScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall WorldSeedCatalogScreenController::_registerBindings(WorldSeedCatalogScreenController *this)
{
  WorldSeedCatalogScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  __int64 v8; // r1@9
  _DWORD *v9; // r0@13
  __int64 v10; // r1@13
  __int64 v11; // r1@13
  _DWORD *v12; // r0@17
  __int64 v13; // r1@17
  __int64 v14; // r1@17
  void *v15; // [sp+8h] [bp-D0h]@17
  __int64 v16; // [sp+10h] [bp-C8h]@17
  _DWORD *v17; // [sp+18h] [bp-C0h]@17
  __int64 v18; // [sp+20h] [bp-B8h]@17
  int v19; // [sp+28h] [bp-B0h]@17
  void *v20; // [sp+2Ch] [bp-ACh]@13
  __int64 v21; // [sp+34h] [bp-A4h]@13
  _DWORD *v22; // [sp+3Ch] [bp-9Ch]@13
  __int64 v23; // [sp+44h] [bp-94h]@13
  int v24; // [sp+4Ch] [bp-8Ch]@13
  void *v25; // [sp+50h] [bp-88h]@9
  __int64 v26; // [sp+58h] [bp-80h]@9
  void *v27; // [sp+60h] [bp-78h]@9
  void (*v28)(void); // [sp+68h] [bp-70h]@9
  void **(__fastcall *v29)(void **); // [sp+6Ch] [bp-6Ch]@9
  int v30; // [sp+70h] [bp-68h]@9
  int v31; // [sp+74h] [bp-64h]@9
  void *v32; // [sp+78h] [bp-60h]@5
  __int64 v33; // [sp+80h] [bp-58h]@5
  _DWORD *v34; // [sp+88h] [bp-50h]@5
  __int64 v35; // [sp+90h] [bp-48h]@5
  int v36; // [sp+98h] [bp-40h]@5
  int v37; // [sp+9Ch] [bp-3Ch]@5
  void *v38; // [sp+A0h] [bp-38h]@1
  __int64 v39; // [sp+A8h] [bp-30h]@1
  _DWORD *v40; // [sp+B0h] [bp-28h]@1
  __int64 v41; // [sp+B8h] [bp-20h]@1
  int v42; // [sp+C0h] [bp-18h]@1
  int v43; // [sp+C4h] [bp-14h]@1

  v1 = this;
  v42 = 684133401;
  v43 = -485322551;
  v2 = operator new(4u);
  LODWORD(v3) = sub_12847C4;
  *v2 = v1;
  HIDWORD(v3) = sub_128479E;
  v40 = v2;
  v41 = v3;
  v38 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v39 = v4;
  ScreenController::bindStringForCollection((int)v1, &v43, &v42, (int)&v40, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  v37 = -485322551;
  v36 = -343735763;
  v5 = operator new(4u);
  LODWORD(v6) = sub_1284820;
  *v5 = v1;
  HIDWORD(v6) = sub_12847FA;
  v34 = v5;
  v35 = v6;
  v32 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v33 = v7;
  ScreenController::bindStringForCollection((int)v1, &v37, &v36, (int)&v34, (int)&v32);
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  if ( (_DWORD)v35 )
    ((void (*)(void))v35)();
  v31 = -485322551;
  v30 = -1000351731;
  v27 = operator new(1u);
  v28 = (void (*)(void))sub_1284874;
  v29 = sub_1284856;
  v25 = operator new(1u);
  LODWORD(v8) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v8) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v26 = v8;
  ScreenController::bindStringForCollection((int)v1, &v31, &v30, (int)&v27, (int)&v25);
  if ( (_DWORD)v26 )
    ((void (*)(void))v26)();
  if ( v28 )
    v28();
  v24 = 1301274140;
  v9 = operator new(4u);
  LODWORD(v10) = sub_12848B8;
  *v9 = v1;
  HIDWORD(v10) = sub_12848A2;
  v22 = v9;
  v23 = v10;
  v20 = operator new(1u);
  LODWORD(v11) = ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v11) = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v21 = v11;
  ScreenController::bindInt((int)v1, &v24, (int)&v22, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  if ( (_DWORD)v23 )
    ((void (*)(void))v23)();
  v19 = -78956806;
  v12 = operator new(4u);
  LODWORD(v13) = sub_12848FE;
  *v12 = v1;
  HIDWORD(v13) = sub_12848EE;
  v17 = v12;
  v18 = v13;
  v15 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v16 = v14;
  ScreenController::bindString((int)v1, &v19, (int)&v17, (int)&v15);
  if ( (_DWORD)v16 )
    ((void (*)(void))v16)();
  if ( (_DWORD)v18 )
    ((void (*)(void))v18)();
}


void __fastcall WorldSeedCatalogScreenController::~WorldSeedCatalogScreenController(WorldSeedCatalogScreenController *this)
{
  WorldSeedCatalogScreenController::~WorldSeedCatalogScreenController(this);
}


int __fastcall WorldSeedCatalogScreenController::_getCollectionIndex(WorldSeedCatalogScreenController *this, UIPropertyBag *a2)
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
    result = j_j_j__ZNK4Json5Value5asIntEi_2(v3, 0);
  return result;
}
