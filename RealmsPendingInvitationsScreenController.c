

int __fastcall RealmsPendingInvitationsScreenController::_handleInvitationAccept(RealmsPendingInvitationsScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r5@1
  RealmsPendingInvitationsScreenController *v3; // r4@1
  Json::Value *v4; // r5@3
  __int64 v5; // r6@5
  int v6; // r5@7
  int v7; // r4@7
  unsigned int *v8; // r0@8
  unsigned int v9; // r1@10
  _DWORD *v10; // r0@13
  unsigned int *v11; // r1@14
  unsigned int v12; // r2@16
  __int64 v13; // r1@19
  unsigned int *v14; // r1@22
  unsigned int v15; // r0@24
  void *v16; // r0@29
  int v17; // r0@30
  unsigned int *v18; // r2@31
  unsigned int v19; // r1@33
  unsigned int *v21; // r2@39
  signed int v22; // r1@41
  _DWORD *v23; // [sp+4h] [bp-34h]@19
  void (*v24)(void); // [sp+Ch] [bp-2Ch]@13
  int v25; // [sp+14h] [bp-24h]@7
  int v26; // [sp+18h] [bp-20h]@7
  int v27; // [sp+1Ch] [bp-1Ch]@7

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  v3 = this;
  if ( !Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8)) && Json::Value::isObject(v2) == 1 )
  {
    v4 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v4) || Json::Value::isUInt(v4) == 1 )
    {
      LODWORD(v5) = Json::Value::asInt(v4, 0);
      if ( (signed int)v5 >= 0
        && (signed int)v5 < -1227133513
                          * ((signed int)((*(_QWORD *)((char *)v3 + 436) >> 32) - *(_QWORD *)((char *)v3 + 436)) >> 2) )
      {
        MinecraftScreenController::_getWeakPtrToThis<RealmsPendingInvitationsScreenController>((int)&v26, (int)v3);
        v6 = *((_DWORD *)v3 + 106);
        sub_21E8AF4(&v25, (int *)(*((_DWORD *)v3 + 109) + 28 * v5));
        v7 = v27;
        HIDWORD(v5) = v26;
        if ( v27 )
        {
          v8 = (unsigned int *)(v27 + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 + 1, v8) );
          }
          else
            ++*v8;
        }
        v24 = 0;
        v10 = operator new(0xCu);
        *(_QWORD *)v10 = v5;
        v10[2] = v7;
        if ( v7 )
          v11 = (unsigned int *)(v7 + 8);
              v12 = __ldrex(v11);
            while ( __strex(v12 + 1, v11) );
            ++*v11;
        LODWORD(v13) = sub_1208F20;
        v23 = v10;
        HIDWORD(v13) = sub_1208DB8;
        *(_QWORD *)&v24 = v13;
        MinecraftScreenModel::acceptRealmsInvite(v6, &v25, (int)&v23);
        if ( v24 )
          v24();
          v14 = (unsigned int *)(v7 + 8);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
        v16 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v25 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        v17 = v27;
          v18 = (unsigned int *)(v27 + 8);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 == 1 )
            (*(void (**)(void))(*(_DWORD *)v17 + 12))();
      }
    }
  }
  return 0;
}


void __fastcall RealmsPendingInvitationsScreenController::_registerEventHandlers(RealmsPendingInvitationsScreenController *this)
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
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  _DWORD *v20; // [sp+4h] [bp-5Ch]@7
  __int64 v21; // [sp+Ch] [bp-54h]@7
  int v22; // [sp+18h] [bp-48h]@7
  _DWORD *v23; // [sp+1Ch] [bp-44h]@4
  __int64 v24; // [sp+24h] [bp-3Ch]@4
  int v25; // [sp+30h] [bp-30h]@4
  _DWORD *v26; // [sp+34h] [bp-2Ch]@1
  __int64 v27; // [sp+3Ch] [bp-24h]@1
  int v28; // [sp+48h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v28, "button.realm_invitation_accept");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1208A0A;
  *v3 = v1;
  HIDWORD(v4) = sub_12089FC;
  v26 = v3;
  v27 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  v5 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v25, "button.realm_invitation_decline");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v25);
  v7 = operator new(4u);
  LODWORD(v8) = sub_1208A4E;
  *v7 = v1;
  HIDWORD(v8) = sub_1208A40;
  v23 = v7;
  v24 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v23);
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  v9 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v25 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v22, "#hide_invites");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v22);
  v11 = operator new(4u);
  LODWORD(v12) = sub_1208AA8;
  *v11 = v1;
  HIDWORD(v12) = sub_1208A84;
  v20 = v11;
  v21 = v12;
  ScreenController::registerToggleChangeEventHandler((int)v1, v10, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  v13 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v22 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall RealmsPendingInvitationsScreenController::_registerEventHandlers(RealmsPendingInvitationsScreenController *this)
{
  RealmsPendingInvitationsScreenController::_registerEventHandlers(this);
}


void __fastcall RealmsPendingInvitationsScreenController::~RealmsPendingInvitationsScreenController(RealmsPendingInvitationsScreenController *this)
{
  RealmsPendingInvitationsScreenController::~RealmsPendingInvitationsScreenController(this);
}


void __fastcall RealmsPendingInvitationsScreenController::_registerBindings(RealmsPendingInvitationsScreenController *this)
{
  RealmsPendingInvitationsScreenController *v1; // r4@1
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
  __int64 v22; // r1@25
  _DWORD *v23; // r0@29
  __int64 v24; // r1@29
  __int64 v25; // r1@29
  void *v26; // [sp+4h] [bp-13Ch]@29
  __int64 v27; // [sp+Ch] [bp-134h]@29
  _DWORD *v28; // [sp+14h] [bp-12Ch]@29
  __int64 v29; // [sp+1Ch] [bp-124h]@29
  int v30; // [sp+24h] [bp-11Ch]@29
  void *v31; // [sp+28h] [bp-118h]@25
  __int64 v32; // [sp+30h] [bp-110h]@25
  _DWORD *v33; // [sp+38h] [bp-108h]@25
  __int64 v34; // [sp+40h] [bp-100h]@25
  int v35; // [sp+48h] [bp-F8h]@25
  int v36; // [sp+4Ch] [bp-F4h]@25
  void *v37; // [sp+50h] [bp-F0h]@21
  __int64 v38; // [sp+58h] [bp-E8h]@21
  _DWORD *v39; // [sp+60h] [bp-E0h]@21
  __int64 v40; // [sp+68h] [bp-D8h]@21
  int v41; // [sp+70h] [bp-D0h]@21
  int v42; // [sp+74h] [bp-CCh]@21
  void *v43; // [sp+78h] [bp-C8h]@17
  __int64 v44; // [sp+80h] [bp-C0h]@17
  _DWORD *v45; // [sp+88h] [bp-B8h]@17
  __int64 v46; // [sp+90h] [bp-B0h]@17
  int v47; // [sp+98h] [bp-A8h]@17
  int v48; // [sp+9Ch] [bp-A4h]@17
  void *v49; // [sp+A0h] [bp-A0h]@13
  __int64 v50; // [sp+A8h] [bp-98h]@13
  _DWORD *v51; // [sp+B0h] [bp-90h]@13
  __int64 v52; // [sp+B8h] [bp-88h]@13
  int v53; // [sp+C0h] [bp-80h]@13
  int v54; // [sp+C4h] [bp-7Ch]@13
  void *v55; // [sp+C8h] [bp-78h]@9
  __int64 v56; // [sp+D0h] [bp-70h]@9
  _DWORD *v57; // [sp+D8h] [bp-68h]@9
  __int64 v58; // [sp+E0h] [bp-60h]@9
  int v59; // [sp+E8h] [bp-58h]@9
  int v60; // [sp+ECh] [bp-54h]@9
  void *v61; // [sp+F0h] [bp-50h]@5
  __int64 v62; // [sp+F8h] [bp-48h]@5
  _DWORD *v63; // [sp+100h] [bp-40h]@5
  __int64 v64; // [sp+108h] [bp-38h]@5
  int v65; // [sp+110h] [bp-30h]@5
  void *v66; // [sp+114h] [bp-2Ch]@1
  __int64 v67; // [sp+11Ch] [bp-24h]@1
  _DWORD *v68; // [sp+124h] [bp-1Ch]@1
  __int64 v69; // [sp+12Ch] [bp-14h]@1
  char v70; // [sp+134h] [bp-Ch]@1

  v1 = this;
  StringHash::StringHash<char [30]>(&v70, (int)"#gamertag_item_grid_dimension");
  v2 = operator new(4u);
  LODWORD(v3) = sub_1208B08;
  *v2 = v1;
  HIDWORD(v3) = sub_1208ADE;
  v68 = v2;
  v69 = v3;
  v66 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v67 = v4;
  ScreenController::bindGridSize((int)v1, (int *)&v70, (int)&v68, (int)&v66);
  if ( (_DWORD)v67 )
    ((void (*)(void))v67)();
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  v65 = 64814913;
  v5 = operator new(4u);
  LODWORD(v6) = sub_1208B6E;
  *v5 = v1;
  HIDWORD(v6) = sub_1208B3E;
  v63 = v5;
  v64 = v6;
  v61 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v62 = v7;
  ScreenController::bindBool((int)v1, &v65, (int)&v63, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  StringHash::StringHash<char [27]>(&v60, (int)"pending_invites_collection");
  v59 = 749337442;
  v8 = operator new(4u);
  LODWORD(v9) = sub_1208BBE;
  *v8 = v1;
  HIDWORD(v9) = sub_1208BA4;
  v57 = v8;
  v58 = v9;
  v55 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v56 = v10;
  ScreenController::bindBoolForCollection((int)v1, &v60, &v59, (int)&v57, (int)&v55);
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  StringHash::StringHash<char [27]>(&v54, (int)"pending_invites_collection");
  StringHash::StringHash<char [26]>(&v53, (int)"#response_buttons_visible");
  v11 = operator new(4u);
  LODWORD(v12) = sub_1208C10;
  *v11 = v1;
  HIDWORD(v12) = sub_1208BF4;
  v51 = v11;
  v52 = v12;
  v49 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v50 = v13;
  ScreenController::bindBoolForCollection((int)v1, &v54, &v53, (int)&v51, (int)&v49);
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  StringHash::StringHash<char [27]>(&v48, (int)"pending_invites_collection");
  v47 = -1491708802;
  v14 = operator new(4u);
  LODWORD(v15) = sub_1208C90;
  *v14 = v1;
  HIDWORD(v15) = sub_1208C48;
  v45 = v14;
  v46 = v15;
  v43 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v44 = v16;
  ScreenController::bindStringForCollection((int)v1, &v48, &v47, (int)&v45, (int)&v43);
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  StringHash::StringHash<char [27]>(&v42, (int)"pending_invites_collection");
  v41 = -1894883879;
  v17 = operator new(4u);
  LODWORD(v18) = sub_1208CE6;
  *v17 = v1;
  HIDWORD(v18) = sub_1208CC6;
  v39 = v17;
  v40 = v18;
  v37 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v38 = v19;
  ScreenController::bindStringForCollection((int)v1, &v42, &v41, (int)&v39, (int)&v37);
  if ( (_DWORD)v38 )
    ((void (*)(void))v38)();
  if ( (_DWORD)v40 )
    ((void (*)(void))v40)();
  StringHash::StringHash<char [27]>(&v36, (int)"pending_invites_collection");
  v35 = 1166352037;
  v20 = operator new(4u);
  LODWORD(v21) = sub_1208D3C;
  *v20 = v1;
  HIDWORD(v21) = sub_1208D1C;
  v33 = v20;
  v34 = v21;
  v31 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v32 = v22;
  ScreenController::bindStringForCollection((int)v1, &v36, &v35, (int)&v33, (int)&v31);
  if ( (_DWORD)v32 )
    ((void (*)(void))v32)();
  if ( (_DWORD)v34 )
    ((void (*)(void))v34)();
  v30 = 1729588782;
  v23 = operator new(4u);
  LODWORD(v24) = sub_1208D82;
  *v23 = v1;
  HIDWORD(v24) = sub_1208D72;
  v28 = v23;
  v29 = v24;
  v26 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v27 = v25;
  ScreenController::bindBool((int)v1, &v30, (int)&v28, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
}


int __fastcall RealmsPendingInvitationsScreenController::_handleHideInvitation(int a1, int a2)
{
  int v2; // r1@1

  v2 = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a1 + 465) = v2;
  *(_BYTE *)(a1 + 432) = 1;
  MinecraftScreenModel::setRealmsShowFriendInvitesOnly(*(MinecraftScreenModel **)(a1 + 424), v2);
  return 0;
}


void __fastcall RealmsPendingInvitationsScreenController::~RealmsPendingInvitationsScreenController(RealmsPendingInvitationsScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = RealmsPendingInvitationsScreenController::~RealmsPendingInvitationsScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall RealmsPendingInvitationsScreenController::_initialize(RealmsPendingInvitationsScreenController *this)
{
  RealmsPendingInvitationsScreenController *v1; // r4@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _QWORD *v5; // r0@7
  unsigned int *v6; // r1@8
  unsigned int v7; // r2@10
  __int64 v8; // r1@12
  unsigned int v9; // r0@16
  __int64 v10; // kr08_8@21
  unsigned int *v11; // r0@22
  unsigned int v12; // r1@24
  _QWORD *v13; // r0@27
  unsigned int *v14; // r1@28
  unsigned int v15; // r2@30
  __int64 v16; // r1@32
  unsigned int v17; // r0@36
  int v18; // r6@41
  int v19; // r5@41
  void **v20; // r0@41
  void *v21; // r0@41
  void *v22; // r0@44
  int result; // r0@49
  unsigned int *v24; // r2@50
  unsigned int v25; // r1@52
  unsigned int *v26; // r2@58
  signed int v27; // r1@60
  unsigned int *v28; // r2@62
  signed int v29; // r1@64
  int v30; // [sp+Ch] [bp-54h]@41
  int v31; // [sp+10h] [bp-50h]@41
  int v32; // [sp+18h] [bp-48h]@41
  int v33; // [sp+1Ch] [bp-44h]@41
  int v34; // [sp+20h] [bp-40h]@41
  _QWORD *v35; // [sp+24h] [bp-3Ch]@32
  void (*v36)(void); // [sp+2Ch] [bp-34h]@27
  int (__fastcall *v37)(int *); // [sp+30h] [bp-30h]@34
  _QWORD *v38; // [sp+34h] [bp-2Ch]@12
  void (*v39)(void); // [sp+3Ch] [bp-24h]@7
  int (__fastcall *v40)(int *); // [sp+40h] [bp-20h]@14
  char v41; // [sp+44h] [bp-1Ch]@1
  int v42; // [sp+48h] [bp-18h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<RealmsPendingInvitationsScreenController>((int)&v41, (int)this);
  v2 = *(_QWORD *)&v41;
  if ( v42 )
  {
    v3 = (unsigned int *)(v42 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  v39 = 0;
  v5 = operator new(8u);
  *v5 = v2;
  if ( HIDWORD(v2) )
    v6 = (unsigned int *)(HIDWORD(v2) + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      ++*v6;
    v38 = v5;
    v39 = (void (*)(void))sub_1207038;
    v40 = sub_1206EF4;
        v9 = __ldrex(v6);
      while ( __strex(v9 - 1, v6) );
      v9 = (*v6)--;
    if ( v9 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  else
    HIDWORD(v8) = sub_1206EF4;
    LODWORD(v8) = sub_1207038;
    *(_QWORD *)&v39 = v8;
  v10 = *(_QWORD *)&v41;
    v11 = (unsigned int *)(v42 + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
  v36 = 0;
  v13 = operator new(8u);
  *v13 = v10;
  if ( HIDWORD(v10) )
    v14 = (unsigned int *)(HIDWORD(v10) + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
    v35 = v13;
    v36 = (void (*)(void))sub_1207218;
    v37 = sub_12070DC;
        v17 = __ldrex(v14);
      while ( __strex(v17 - 1, v14) );
      v17 = (*v14)--;
    if ( v17 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 12))(HIDWORD(v10));
    HIDWORD(v16) = sub_12070DC;
    LODWORD(v16) = sub_1207218;
    *(_QWORD *)&v36 = v16;
  v33 = 0;
  j__ZSt11make_uniqueI21RealmsProgressHandlerJRA47_KcDnRSt8functionIFvvEES7_EENSt9_MakeUniqIT_E15__single_objectEDpOT0_(
    &v34,
    "realmsPendingInvitationsScreen.fetchingInvites",
    (int)&v33,
    (int)&v38,
    (int)&v35);
  v18 = v34;
  v34 = 0;
  v19 = *((_DWORD *)v1 + 106);
  sub_21E94B4((void **)&v32, "realms_fetching_pending_invites");
  v31 = v18;
  v20 = sub_21E94B4((void **)&v30, (const char *)&unk_257BC67);
  MainMenuScreenModel::navigateToModalProgressScreen(v19, (int)&v32, (int)&v31, 0, (int)v20);
  v21 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v30 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  v31 = 0;
  v22 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v32 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  RealmsPendingInvitationsScreenController::_fetchPendingInvites(v1);
  if ( v36 )
    v36();
  if ( v39 )
    v39();
  result = v42;
    v24 = (unsigned int *)(v42 + 8);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall RealmsPendingInvitationsScreenController::_fetchPendingInvites(RealmsPendingInvitationsScreenController *this)
{
  RealmsPendingInvitationsScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  int v3; // r5@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  _QWORD *v6; // r0@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r2@10
  __int64 v9; // r1@13
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  int result; // r0@23
  unsigned int *v13; // r2@24
  unsigned int v14; // r1@26
  _QWORD *v15; // [sp+0h] [bp-28h]@13
  void (*v16)(void); // [sp+8h] [bp-20h]@7
  char v17; // [sp+10h] [bp-18h]@1
  int v18; // [sp+14h] [bp-14h]@1

  v1 = this;
  *((_BYTE *)this + 448) = 1;
  MinecraftScreenController::_getWeakPtrToThis<RealmsPendingInvitationsScreenController>((int)&v17, (int)this);
  v2 = *(_QWORD *)&v17;
  v3 = *((_DWORD *)v1 + 106);
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  v16 = 0;
  v6 = operator new(8u);
  *v6 = v2;
  if ( HIDWORD(v2) )
    v7 = (unsigned int *)(HIDWORD(v2) + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
      ++*v7;
  LODWORD(v9) = sub_1207C0C;
  v15 = v6;
  HIDWORD(v9) = sub_12072BC;
  *(_QWORD *)&v16 = v9;
  MinecraftScreenModel::listRealmsInvites(v3, (int)&v15);
  if ( v16 )
    v16();
    v10 = (unsigned int *)(HIDWORD(v2) + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  result = v18;
    v13 = (unsigned int *)(v18 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall RealmsPendingInvitationsScreenController::tick(RealmsPendingInvitationsScreenController *this)
{
  RealmsPendingInvitationsScreenController *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  signed int v4; // r3@5
  bool v5; // cf@5
  signed __int64 v6; // r0@5
  int result; // r0@15
  unsigned int v8; // [sp+0h] [bp-10h]@4
  int v9; // [sp+4h] [bp-Ch]@7

  v1 = this;
  v2 = *((_BYTE *)this + 448);
  v3 = v2 == 0;
  if ( !v2 )
    v3 = *((_QWORD *)v1 + 57) == 0LL;
  if ( v3 )
  {
    RealmsPendingInvitationsScreenController::_initialize(v1);
    result = 0;
  }
  else
    sub_21E034C(&v8);
    if ( !*((_BYTE *)v1 + 448) )
    {
      v4 = 0;
      v6 = *((_QWORD *)v1 + 57) + 15000000000LL;
      v5 = (unsigned int)v6 >= v8;
      LODWORD(v6) = 0;
      if ( !v5 )
        LODWORD(v6) = 1;
      if ( SHIDWORD(v6) < v9 )
        v4 = 1;
      if ( HIDWORD(v6) == v9 )
        v4 = v6;
      if ( v4 || MinecraftScreenModel::needToRefreshPendingInvites(*((MinecraftScreenModel **)v1 + 106)) == 1 )
      {
        MinecraftScreenModel::setRefreshPendingInvites(*((MinecraftScreenModel **)v1 + 106), 0);
        RealmsPendingInvitationsScreenController::_fetchPendingInvites(v1);
      }
    }
    if ( *((_BYTE *)v1 + 432) )
      *((_BYTE *)v1 + 432) = 0;
      result = 1;
    else
      result = MinecraftScreenController::tick(v1);
  return result;
}


void __fastcall RealmsPendingInvitationsScreenController::_registerBindings(RealmsPendingInvitationsScreenController *this)
{
  RealmsPendingInvitationsScreenController::_registerBindings(this);
}


int __fastcall RealmsPendingInvitationsScreenController::RealmsPendingInvitationsScreenController(int a1, int a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  char v13; // r0@21
  int v14; // r1@21
  int v16; // [sp+4h] [bp-1Ch]@1
  int v17; // [sp+8h] [bp-18h]@1

  v3 = a1;
  v16 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v17 = v5;
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
  MainMenuScreenController::MainMenuScreenController(v3, (int)&v16);
  v8 = v17;
  if ( v17 )
    v9 = (unsigned int *)(v17 + 4);
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
  *(_DWORD *)v3 = &off_26E2F14;
  *(_BYTE *)(v3 + 432) = 0;
  *(_DWORD *)(v3 + 456) = 0;
  *(_DWORD *)(v3 + 460) = 0;
  *(_BYTE *)(v3 + 448) = 0;
  *(_DWORD *)(v3 + 444) = 0;
  *(_DWORD *)(v3 + 436) = 0;
  *(_DWORD *)(v3 + 440) = 0;
  *(_BYTE *)(v3 + 464) = v4;
  *(_BYTE *)(v3 + 465) = 0;
  *(_DWORD *)(v3 + 468) = 0;
  RealmsPendingInvitationsScreenController::_registerEventHandlers((RealmsPendingInvitationsScreenController *)v3);
  RealmsPendingInvitationsScreenController::_registerBindings((RealmsPendingInvitationsScreenController *)v3);
  v13 = MinecraftScreenModel::getRealmsShowFriendInvitesOnly(*(MinecraftScreenModel **)(v3 + 424));
  v14 = v3 + 456;
  *(_BYTE *)(v3 + 465) = v13;
  *(_DWORD *)v14 = 0;
  *(_DWORD *)(v14 + 4) = 0;
  return v3;
}


int __fastcall RealmsPendingInvitationsScreenController::_handleInvitationDecline(RealmsPendingInvitationsScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r5@1
  RealmsPendingInvitationsScreenController *v3; // r4@1
  Json::Value *v4; // r5@3
  __int64 v5; // r6@5
  int v6; // r5@7
  int v7; // r4@7
  unsigned int *v8; // r0@8
  unsigned int v9; // r1@10
  _DWORD *v10; // r0@13
  unsigned int *v11; // r1@14
  unsigned int v12; // r2@16
  __int64 v13; // r1@19
  unsigned int *v14; // r1@22
  unsigned int v15; // r0@24
  void *v16; // r0@29
  int v17; // r0@30
  unsigned int *v18; // r2@31
  unsigned int v19; // r1@33
  unsigned int *v21; // r2@39
  signed int v22; // r1@41
  _DWORD *v23; // [sp+4h] [bp-34h]@19
  void (*v24)(void); // [sp+Ch] [bp-2Ch]@13
  int v25; // [sp+14h] [bp-24h]@7
  int v26; // [sp+18h] [bp-20h]@7
  int v27; // [sp+1Ch] [bp-1Ch]@7

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  v3 = this;
  if ( !Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8)) && Json::Value::isObject(v2) == 1 )
  {
    v4 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v4) || Json::Value::isUInt(v4) == 1 )
    {
      LODWORD(v5) = Json::Value::asInt(v4, 0);
      if ( (signed int)v5 >= 0
        && (signed int)v5 < -1227133513
                          * ((signed int)((*(_QWORD *)((char *)v3 + 436) >> 32) - *(_QWORD *)((char *)v3 + 436)) >> 2) )
      {
        MinecraftScreenController::_getWeakPtrToThis<RealmsPendingInvitationsScreenController>((int)&v26, (int)v3);
        v6 = *((_DWORD *)v3 + 106);
        sub_21E8AF4(&v25, (int *)(*((_DWORD *)v3 + 109) + 28 * v5));
        v7 = v27;
        HIDWORD(v5) = v26;
        if ( v27 )
        {
          v8 = (unsigned int *)(v27 + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 + 1, v8) );
          }
          else
            ++*v8;
        }
        v24 = 0;
        v10 = operator new(0xCu);
        *(_QWORD *)v10 = v5;
        v10[2] = v7;
        if ( v7 )
          v11 = (unsigned int *)(v7 + 8);
              v12 = __ldrex(v11);
            while ( __strex(v12 + 1, v11) );
            ++*v11;
        LODWORD(v13) = sub_12090B8;
        v23 = v10;
        HIDWORD(v13) = sub_1208FCC;
        *(_QWORD *)&v24 = v13;
        MinecraftScreenModel::rejectRealmsInvite(v6, &v25, (int)&v23);
        if ( v24 )
          v24();
          v14 = (unsigned int *)(v7 + 8);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
        v16 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v25 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        v17 = v27;
          v18 = (unsigned int *)(v27 + 8);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 == 1 )
            (*(void (**)(void))(*(_DWORD *)v17 + 12))();
      }
    }
  }
  return 0;
}


ScreenController *__fastcall RealmsPendingInvitationsScreenController::~RealmsPendingInvitationsScreenController(RealmsPendingInvitationsScreenController *this)
{
  RealmsPendingInvitationsScreenController *v1; // r4@1
  Realms::Invite *v2; // r0@1
  Realms::Invite *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E2F14;
  MinecraftScreenModel::abortAllRealmsRequests(*((MinecraftScreenModel **)this + 106));
  v3 = (Realms::Invite *)(*(_QWORD *)((char *)v1 + 436) >> 32);
  v2 = (Realms::Invite *)*(_QWORD *)((char *)v1 + 436);
  if ( v2 != v3 )
  {
    do
      v2 = (Realms::Invite *)((char *)Realms::Invite::~Invite(v2) + 28);
    while ( v3 != v2 );
    v2 = (Realms::Invite *)*((_DWORD *)v1 + 109);
  }
  if ( v2 )
    operator delete((void *)v2);
  return j_j_j__ZN24MainMenuScreenControllerD2Ev(v1);
}
