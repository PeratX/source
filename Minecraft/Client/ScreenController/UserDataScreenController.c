

int __fastcall UserDataScreenController::handleGameEventNotification(int a1, int a2)
{
  int v2; // r5@1
  char *v3; // r0@2

  v2 = a1;
  if ( (a2 | 1) == 3 )
  {
    v3 = MinecraftScreenModel::getLevelPlayerList(*(MinecraftScreenModel **)(a1 + 424));
    std::_Hashtable<mce::UUID,std::pair<mce::UUID const,PlayerListEntry>,std::allocator<std::pair<mce::UUID const,PlayerListEntry>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
      (unsigned __int64 *)(v2 + 524),
      (int)v3);
    UserDataScreenController::_populatePlayerList((UserDataScreenController *)v2);
    if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v2 + 424)) == 1 )
      UserDataScreenController::_requestPlayerProfiles((UserDataScreenController *)v2);
  }
  return ScreenController::handleGameEventNotification(v2) | 1;
}


void __fastcall UserDataScreenController::_registerBindings(UserDataScreenController *this)
{
  UserDataScreenController *v1; // r4@1
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
  _DWORD *v26; // r0@33
  __int64 v27; // r1@33
  __int64 v28; // r1@33
  void *v29; // [sp+8h] [bp-170h]@33
  __int64 v30; // [sp+10h] [bp-168h]@33
  _DWORD *v31; // [sp+18h] [bp-160h]@33
  __int64 v32; // [sp+20h] [bp-158h]@33
  int v33; // [sp+28h] [bp-150h]@33
  int v34; // [sp+2Ch] [bp-14Ch]@33
  void *v35; // [sp+30h] [bp-148h]@29
  __int64 v36; // [sp+38h] [bp-140h]@29
  _DWORD *v37; // [sp+40h] [bp-138h]@29
  __int64 v38; // [sp+48h] [bp-130h]@29
  int v39; // [sp+50h] [bp-128h]@29
  int v40; // [sp+54h] [bp-124h]@29
  void *v41; // [sp+58h] [bp-120h]@25
  __int64 v42; // [sp+60h] [bp-118h]@25
  _DWORD *v43; // [sp+68h] [bp-110h]@25
  __int64 v44; // [sp+70h] [bp-108h]@25
  int v45; // [sp+78h] [bp-100h]@25
  int v46; // [sp+7Ch] [bp-FCh]@25
  void *v47; // [sp+80h] [bp-F8h]@21
  __int64 v48; // [sp+88h] [bp-F0h]@21
  _DWORD *v49; // [sp+90h] [bp-E8h]@21
  __int64 v50; // [sp+98h] [bp-E0h]@21
  int v51; // [sp+A0h] [bp-D8h]@21
  int v52; // [sp+A4h] [bp-D4h]@21
  void *v53; // [sp+A8h] [bp-D0h]@17
  __int64 v54; // [sp+B0h] [bp-C8h]@17
  _DWORD *v55; // [sp+B8h] [bp-C0h]@17
  __int64 v56; // [sp+C0h] [bp-B8h]@17
  int v57; // [sp+C8h] [bp-B0h]@17
  int v58; // [sp+CCh] [bp-ACh]@17
  void *v59; // [sp+D0h] [bp-A8h]@13
  __int64 v60; // [sp+D8h] [bp-A0h]@13
  _DWORD *v61; // [sp+E0h] [bp-98h]@13
  __int64 v62; // [sp+E8h] [bp-90h]@13
  int v63; // [sp+F0h] [bp-88h]@13
  int v64; // [sp+F4h] [bp-84h]@13
  void *v65; // [sp+F8h] [bp-80h]@9
  __int64 v66; // [sp+100h] [bp-78h]@9
  _DWORD *v67; // [sp+108h] [bp-70h]@9
  __int64 v68; // [sp+110h] [bp-68h]@9
  int v69; // [sp+118h] [bp-60h]@9
  int v70; // [sp+11Ch] [bp-5Ch]@9
  void *v71; // [sp+120h] [bp-58h]@5
  __int64 v72; // [sp+128h] [bp-50h]@5
  _DWORD *v73; // [sp+130h] [bp-48h]@5
  __int64 v74; // [sp+138h] [bp-40h]@5
  int v75; // [sp+140h] [bp-38h]@5
  void *v76; // [sp+144h] [bp-34h]@1
  __int64 v77; // [sp+14Ch] [bp-2Ch]@1
  _DWORD *v78; // [sp+154h] [bp-24h]@1
  __int64 v79; // [sp+15Ch] [bp-1Ch]@1
  char v80; // [sp+164h] [bp-14h]@1

  v1 = this;
  StringHash::StringHash<char [23]>(&v80, (int)"#invite_button_visible");
  v2 = operator new(4u);
  LODWORD(v3) = sub_127AA46;
  *v2 = v1;
  HIDWORD(v3) = sub_127AA36;
  v78 = v2;
  v79 = v3;
  v76 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v77 = v4;
  ScreenController::bindBool((int)v1, (int *)&v80, (int)&v78, (int)&v76);
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  if ( (_DWORD)v79 )
    ((void (*)(void))v79)();
  StringHash::StringHash<char [24]>(&v75, (int)"#players_grid_dimension");
  v5 = operator new(4u);
  LODWORD(v6) = sub_127AA9A;
  *v5 = v1;
  HIDWORD(v6) = sub_127AA7C;
  v73 = v5;
  v74 = v6;
  v71 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v72 = v7;
  ScreenController::bindGridSize((int)v1, &v75, (int)&v73, (int)&v71);
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  if ( (_DWORD)v74 )
    ((void (*)(void))v74)();
  v69 = 486579846;
  v70 = 1793510322;
  v8 = operator new(4u);
  LODWORD(v9) = sub_127AAE8;
  *v8 = v1;
  HIDWORD(v9) = sub_127AAD0;
  v67 = v8;
  v68 = v9;
  v65 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v66 = v10;
  ScreenController::bindStringForCollection((int)v1, &v70, &v69, (int)&v67, (int)&v65);
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  v64 = 1793510322;
  v63 = 1126334437;
  v11 = operator new(4u);
  LODWORD(v12) = sub_127ABF0;
  *v11 = v1;
  HIDWORD(v12) = sub_127AB20;
  v61 = v11;
  v62 = v12;
  v59 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v60 = v13;
  ScreenController::bindStringForCollection((int)v1, &v64, &v63, (int)&v61, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  v58 = 1793510322;
  v57 = 1565420803;
  v14 = operator new(4u);
  LODWORD(v15) = sub_127AC5E;
  *v14 = v1;
  HIDWORD(v15) = sub_127AC26;
  v55 = v14;
  v56 = v15;
  v53 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v54 = v16;
  ScreenController::bindStringForCollection((int)v1, &v58, &v57, (int)&v55, (int)&v53);
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  v52 = 1793510322;
  v51 = -257010817;
  v17 = operator new(4u);
  LODWORD(v18) = sub_127ACC4;
  *v17 = v1;
  HIDWORD(v18) = sub_127AC94;
  v49 = v17;
  v50 = v18;
  v47 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v48 = v19;
  ScreenController::bindBoolForCollection((int)v1, &v52, &v51, (int)&v49, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  v46 = 1793510322;
  v45 = -1131753230;
  v20 = operator new(4u);
  LODWORD(v21) = sub_127AD2C;
  *v20 = v1;
  HIDWORD(v21) = sub_127ACFA;
  v43 = v20;
  v44 = v21;
  v41 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v42 = v22;
  ScreenController::bindBoolForCollection((int)v1, &v46, &v45, (int)&v43, (int)&v41);
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  v40 = 1793510322;
  v39 = 1145935343;
  v23 = operator new(4u);
  LODWORD(v24) = sub_127AD88;
  *v23 = v1;
  HIDWORD(v24) = sub_127AD62;
  v37 = v23;
  v38 = v24;
  v35 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v36 = v25;
  ScreenController::bindBoolForCollection((int)v1, &v40, &v39, (int)&v37, (int)&v35);
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  if ( (_DWORD)v38 )
    ((void (*)(void))v38)();
  v34 = 1793510322;
  v33 = 467395908;
  v26 = operator new(4u);
  LODWORD(v27) = sub_127ADE2;
  *v26 = v1;
  HIDWORD(v27) = sub_127ADBE;
  v31 = v26;
  v32 = v27;
  v29 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v30 = v28;
  ScreenController::bindBoolForCollection((int)v1, &v34, &v33, (int)&v31, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  if ( (_DWORD)v32 )
    ((void (*)(void))v32)();
}


char *__fastcall UserDataScreenController::getPlayerList(UserDataScreenController *this)
{
  return (char *)this + 436;
}


void __fastcall UserDataScreenController::_registerEventHandlers(UserDataScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  _DWORD *v8; // [sp+4h] [bp-2Ch]@1
  __int64 v9; // [sp+Ch] [bp-24h]@1
  int v10; // [sp+18h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v10, "button.player_profile_card");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_127AA00;
  *v3 = v1;
  HIDWORD(v4) = sub_127A8CC;
  v8 = v3;
  v9 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v8);
  if ( (_DWORD)v9 )
    ((void (*)(void))v9)();
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


UserDataScreenController *__fastcall UserDataScreenController::~UserDataScreenController(UserDataScreenController *this)
{
  UserDataScreenController *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r5@16
  int v8; // r4@17
  char *v9; // r0@18
  void *v10; // r5@21
  void *v11; // r4@22
  char *v12; // r0@23
  int v13; // r1@26
  void *v14; // r0@26
  int v15; // r1@27
  void *v16; // r0@27
  int v17; // r1@28
  void *v18; // r0@28
  int v19; // r5@29
  int v20; // r7@29
  unsigned int *v21; // r2@31
  signed int v22; // r1@33
  unsigned int *v23; // r2@35
  signed int v24; // r1@37
  unsigned int *v25; // r2@39
  signed int v26; // r1@41
  int v27; // r1@55
  void *v28; // r0@55
  int v29; // r1@56
  void *v30; // r0@56
  int *v31; // r0@57
  unsigned int *v33; // r2@63
  signed int v34; // r1@65
  unsigned int *v35; // r2@67
  signed int v36; // r1@69
  unsigned int *v37; // r2@71
  signed int v38; // r1@73
  char v39; // [sp+8h] [bp-40h]@22

  v1 = this;
  *(_DWORD *)this = &off_26E3D3C;
  v3 = (void *)(*((_QWORD *)this + 69) >> 32);
  v2 = (void *)*((_QWORD *)this + 69);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 138);
  }
  if ( v2 )
    operator delete(v2);
  v7 = *((_DWORD *)v1 + 133);
  if ( v7 )
      v8 = *(_DWORD *)v7;
      PlayerListEntry::~PlayerListEntry((PlayerListEntry *)(v7 + 24));
      operator delete((void *)v7);
      v7 = v8;
    while ( v8 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 524), 4 * (*(_QWORD *)((char *)v1 + 524) >> 32));
  *((_DWORD *)v1 + 133) = 0;
  *((_DWORD *)v1 + 134) = 0;
  v9 = (char *)*((_DWORD *)v1 + 131);
  if ( v9 && (char *)v1 + 548 != v9 )
    operator delete(v9);
  v10 = (void *)*((_DWORD *)v1 + 126);
  if ( v10 )
      v11 = *(void **)v10;
      __gnu_cxx::new_allocator<std::pair<std::string const,UserDataScreenController::ProfileData>>::destroy<std::pair<std::string const,UserDataScreenController::ProfileData>>(
        (int)&v39,
        (int)v10 + 4);
      operator delete(v10);
      v10 = v11;
    while ( v11 );
  _aeabi_memclr4(*((_QWORD *)v1 + 62), 4 * (*((_QWORD *)v1 + 62) >> 32));
  *((_DWORD *)v1 + 126) = 0;
  *((_DWORD *)v1 + 127) = 0;
  v12 = (char *)*((_DWORD *)v1 + 124);
  if ( v12 && (char *)v1 + 520 != v12 )
    operator delete(v12);
  v13 = *((_DWORD *)v1 + 121);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    else
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = *((_DWORD *)v1 + 120);
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v15 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = *((_DWORD *)v1 + 112);
  v18 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v17 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v20 = *(_QWORD *)((char *)v1 + 436) >> 32;
  v19 = *(_QWORD *)((char *)v1 + 436);
  if ( v19 != v20 )
      v27 = *(_DWORD *)(v19 + 36);
      v28 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v27 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      v29 = *(_DWORD *)(v19 + 32);
      v30 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v29 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v31 = (int *)(*(_DWORD *)v19 - 12);
      if ( v31 != &dword_28898C0 )
        v25 = (unsigned int *)(*(_DWORD *)v19 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      v19 += 48;
    while ( v19 != v20 );
    v19 = *((_DWORD *)v1 + 109);
  if ( v19 )
    operator delete((void *)v19);
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  return v1;
}


void __fastcall UserDataScreenController::~UserDataScreenController(UserDataScreenController *this)
{
  UserDataScreenController::~UserDataScreenController(this);
}


void __fastcall UserDataScreenController::_requestPlayerProfiles(UserDataScreenController *this)
{
  UserDataScreenController::_requestPlayerProfiles(this);
}


void __fastcall UserDataScreenController::_initializePlayerList(UserDataScreenController *this)
{
  UserDataScreenController *v1; // r4@1
  char *v2; // r0@1

  v1 = this;
  v2 = MinecraftScreenModel::getLevelPlayerList(*((MinecraftScreenModel **)this + 106));
  std::_Hashtable<mce::UUID,std::pair<mce::UUID const,PlayerListEntry>,std::allocator<std::pair<mce::UUID const,PlayerListEntry>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
    (unsigned __int64 *)((char *)v1 + 524),
    (int)v2);
  UserDataScreenController::_populatePlayerList(v1);
  if ( MinecraftScreenModel::isSignedInToXBL(*((MinecraftScreenModel **)v1 + 106)) == 1 )
    j_j_j__ZN24UserDataScreenController22_requestPlayerProfilesEv(v1);
}


void __fastcall UserDataScreenController::_populatePlayerList(UserDataScreenController *this)
{
  UserDataScreenController *v1; // r4@1
  int v2; // r8@1
  unsigned int *v3; // r2@4
  signed int v4; // r1@6
  unsigned int *v5; // r2@8
  signed int v6; // r1@10
  unsigned int *v7; // r2@12
  signed int v8; // r1@14
  int v9; // r1@30
  int v10; // r2@30
  int v11; // r3@30
  int v12; // r0@31
  bool v13; // zf@31
  int v14; // r0@34
  int v15; // r5@34
  __int64 v16; // r0@35
  __int64 v17; // r0@40
  void *v18; // r0@43
  void *v19; // r0@44
  void *v20; // r0@45
  int *v21; // [sp+10h] [bp-80h]@1
  __int64 v22; // [sp+20h] [bp-70h]@35
  int v23; // [sp+28h] [bp-68h]@12
  __int64 v24; // [sp+30h] [bp-60h]@30
  int v25; // [sp+38h] [bp-58h]@30
  int v26; // [sp+3Ch] [bp-54h]@30
  int v27; // [sp+40h] [bp-50h]@30
  int v28; // [sp+44h] [bp-4Ch]@30
  int v29; // [sp+48h] [bp-48h]@8
  int v30; // [sp+4Ch] [bp-44h]@3
  char v31; // [sp+50h] [bp-40h]@33
  char v32; // [sp+51h] [bp-3Fh]@35
  __int64 v33; // [sp+58h] [bp-38h]@1
  __int64 v34; // [sp+60h] [bp-30h]@29

  v1 = this;
  v21 = (int *)((char *)this + 436);
  std::vector<PlayerListInfo,std::allocator<PlayerListInfo>>::_M_erase_at_end((int)v21, *v21);
  MinecraftScreenModel::getLocalPlayerUUID((MinecraftScreenModel *)&v33, *((_DWORD *)v1 + 106));
  UserDataScreenController::_addUserToPlayerList(v1);
  v2 = *((_DWORD *)v1 + 133);
  if ( v2 )
  {
    while ( v33 == *(_QWORD *)(v2 + 32) && !(v34 ^ *(_QWORD *)(v2 + 40)) )
    {
LABEL_46:
      v2 = *(_DWORD *)v2;
      if ( !v2 )
        return;
    }
    PlayerListInfo::PlayerListInfo((PlayerListInfo *)&v23);
    EntityInteraction::setInteractText(&v23, (int *)(v2 + 48));
    v24 = *(_QWORD *)(v2 + 24);
    v9 = *(_DWORD *)(v2 + 36);
    v10 = *(_DWORD *)(v2 + 40);
    v11 = *(_DWORD *)(v2 + 44);
    v25 = *(_DWORD *)(v2 + 32);
    v26 = v9;
    v27 = v10;
    v28 = v11;
    EntityInteraction::setInteractText(&v29, (int *)(v2 + 88));
    if ( MinecraftScreenModel::isSignedInToXBL(*((MinecraftScreenModel **)v1 + 106)) )
      v12 = *(_DWORD *)(v29 - 12);
      v13 = v12 == 0;
      if ( v12 )
        LOBYTE(v12) = 1;
      v31 = v12;
      if ( !v13 )
      {
        v14 = std::_Hashtable<std::string,std::pair<std::string const,UserDataScreenController::ProfileData>,std::allocator<std::pair<std::string const,UserDataScreenController::ProfileData>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                (unsigned __int64 *)v1 + 62,
                (int **)(v2 + 48));
        v15 = v14;
        if ( v14 )
        {
          Core::PathBuffer<std::string>::operator=(&v30, (int *)(*(_DWORD *)(v14 + 8) + 8));
          v32 = 0;
          EntityInteraction::setInteractText((int *)(v15 + 16), (int *)(*(_DWORD *)(v15 + 8) + 8));
          LODWORD(v16) = v30;
          HIDWORD(v16) = *(_DWORD *)(v30 - 12);
          v22 = v16;
          if ( Core::FileSystem::fileExists(&v22) )
          {
LABEL_40:
            v17 = *((_QWORD *)v1 + 55);
            if ( (_DWORD)v17 == HIDWORD(v17) )
            {
              std::vector<PlayerListInfo,std::allocator<PlayerListInfo>>::_M_emplace_back_aux<PlayerListInfo&>(
                (unsigned __int64 *)v21,
                &v23);
            }
            else
              PlayerListInfo::PlayerListInfo((int *)v17, &v23);
              *((_DWORD *)v1 + 110) += 48;
            v18 = (void *)(v30 - 12);
            if ( (int *)(v30 - 12) != &dword_28898C0 )
              v3 = (unsigned int *)(v30 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v4 = __ldrex(v3);
                while ( __strex(v4 - 1, v3) );
              }
              else
                v4 = (*v3)--;
              if ( v4 <= 0 )
                j_j_j_j__ZdlPv_9(v18);
            v19 = (void *)(v29 - 12);
            if ( (int *)(v29 - 12) != &dword_28898C0 )
              v5 = (unsigned int *)(v29 - 4);
                  v6 = __ldrex(v5);
                while ( __strex(v6 - 1, v5) );
                v6 = (*v5)--;
              if ( v6 <= 0 )
                j_j_j_j__ZdlPv_9(v19);
            v20 = (void *)(v23 - 12);
            if ( (int *)(v23 - 12) != &dword_28898C0 )
              v7 = (unsigned int *)(v23 - 4);
                  v8 = __ldrex(v7);
                while ( __strex(v8 - 1, v7) );
                v8 = (*v7)--;
              if ( v8 <= 0 )
                j_j_j_j__ZdlPv_9(v20);
            goto LABEL_46;
          }
          Core::PathBuffer<std::string>::operator=(&v30, (int *)algn_27DDF34);
        }
        else
LABEL_39:
        v32 = 1;
        goto LABEL_40;
      }
    else
      v31 = 0;
    Core::PathBuffer<std::string>::operator=(&v30, (int *)&algn_27DDF34[4]);
    goto LABEL_39;
  }
}


void __fastcall UserDataScreenController::_requestPlayerProfiles(UserDataScreenController *this)
{
  UserDataScreenController *v1; // r8@1
  int v2; // r11@1
  unsigned __int64 *v3; // r9@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  unsigned int *v10; // r0@30
  unsigned int v11; // r1@32
  UserDataScreenController *v12; // r4@37
  char *v13; // r0@37
  int v14; // r8@38
  unsigned int *v15; // r1@39
  unsigned int v16; // r0@41
  unsigned int *v17; // r7@45
  unsigned int v18; // r0@47
  void *v19; // r0@53
  char *v20; // r0@54
  int v21; // r4@55
  unsigned int *v22; // r1@56
  unsigned int v23; // r0@58
  unsigned int *v24; // r7@62
  unsigned int v25; // r0@64
  int v26; // r7@69
  unsigned int *v27; // r1@70
  unsigned int v28; // r0@72
  unsigned int *v29; // r4@76
  unsigned int v30; // r0@78
  int *v31; // r5@84
  int *v32; // r6@84
  __int64 v33; // kr08_8@85
  int v34; // r4@85
  unsigned int *v35; // r0@86
  unsigned int v36; // r1@88
  _QWORD *v37; // r0@91
  unsigned int *v38; // r1@92
  unsigned int v39; // r2@94
  __int64 v40; // r1@97
  unsigned int *v41; // r1@100
  unsigned int v42; // r0@102
  int v43; // r0@107
  unsigned int *v44; // r2@108
  unsigned int v45; // r1@110
  unsigned int *v46; // r2@118
  signed int v47; // r1@120
  int *v48; // r0@126
  _QWORD *v49; // [sp+14h] [bp-7Ch]@97
  void (*v50)(void); // [sp+1Ch] [bp-74h]@91
  char v51; // [sp+24h] [bp-6Ch]@85
  int v52; // [sp+28h] [bp-68h]@85
  char v53; // [sp+2Ch] [bp-64h]@37
  int v54; // [sp+38h] [bp-58h]@29
  int v55; // [sp+3Ch] [bp-54h]@29
  char *v56; // [sp+40h] [bp-50h]@11
  int v57; // [sp+44h] [bp-4Ch]@7
  int v58; // [sp+48h] [bp-48h]@37
  int v59; // [sp+4Ch] [bp-44h]@37
  char *v60; // [sp+50h] [bp-40h]@3
  int v61; // [sp+54h] [bp-3Ch]@28
  int v62; // [sp+58h] [bp-38h]@29
  int *v63; // [sp+5Ch] [bp-34h]@1
  int *v64; // [sp+60h] [bp-30h]@1
  int *v65; // [sp+64h] [bp-2Ch]@1

  v1 = this;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v2 = *((_DWORD *)this + 133);
  if ( v2 )
  {
    v3 = (unsigned __int64 *)((char *)this + 496);
    do
    {
      if ( !std::_Hashtable<std::string,std::pair<std::string const,UserDataScreenController::ProfileData>,std::allocator<std::pair<std::string const,UserDataScreenController::ProfileData>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
              v3,
              (int **)(v2 + 88)) )
      {
        MinecraftScreenModel::getExistingXboxLiveProfile((int)&v61, *((_DWORD *)v1 + 106), (int **)(v2 + 88));
        if ( v61 )
        {
          v54 = v61;
          v55 = v62;
          if ( v62 )
          {
            v10 = (unsigned int *)(v62 + 4);
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
          sub_21E94B4((void **)&v56, (const char *)&unk_257BC67);
          sub_21E8AF4(&v57, (int *)(v2 + 48));
          v58 = v54;
          v59 = v55;
          v54 = 0;
          v55 = 0;
          v60 = v56;
          v56 = (char *)&unk_28898CC;
          std::_Hashtable<std::string,std::pair<std::string const,UserDataScreenController::ProfileData>,std::allocator<std::pair<std::string const,UserDataScreenController::ProfileData>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<std::string,UserDataScreenController::ProfileData>>(
            &v53,
            (int)v3,
            (int)&v57);
          v12 = v1;
          v13 = v60 - 12;
          if ( (int *)(v60 - 12) != &dword_28898C0 )
            v4 = (unsigned int *)(v60 - 4);
                v5 = __ldrex(v4);
              while ( __strex(v5 - 1, v4) );
              v5 = (*v4)--;
            if ( v5 <= 0 )
              j_j_j_j__ZdlPv_9(v13);
          v14 = v59;
          if ( v59 )
            v15 = (unsigned int *)(v59 + 4);
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
              v16 = (*v15)--;
            if ( v16 == 1 )
              v17 = (unsigned int *)(v14 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v18 = __ldrex(v17);
                while ( __strex(v18 - 1, v17) );
              }
              else
                v18 = (*v17)--;
              if ( v18 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
          v1 = v12;
          v19 = (void *)(v57 - 12);
          if ( (int *)(v57 - 12) != &dword_28898C0 )
            v6 = (unsigned int *)(v57 - 4);
                v7 = __ldrex(v6);
              while ( __strex(v7 - 1, v6) );
              v7 = (*v6)--;
            if ( v7 <= 0 )
              j_j_j_j__ZdlPv_9(v19);
          v20 = v56 - 12;
          if ( (int *)(v56 - 12) != &dword_28898C0 )
            v8 = (unsigned int *)(v56 - 4);
                v9 = __ldrex(v8);
              while ( __strex(v9 - 1, v8) );
              v9 = (*v8)--;
            if ( v9 <= 0 )
              j_j_j_j__ZdlPv_9(v20);
          v21 = v55;
          if ( v55 )
            v22 = (unsigned int *)(v55 + 4);
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
              v23 = (*v22)--;
            if ( v23 == 1 )
              v24 = (unsigned int *)(v21 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
                  v25 = __ldrex(v24);
                while ( __strex(v25 - 1, v24) );
                v25 = (*v24)--;
              if ( v25 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
        }
        else if ( v64 == v65 )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(
            (unsigned __int64 *)&v63,
            (int *)(v2 + 88));
        else
          sub_21E8AF4(v64, (int *)(v2 + 88));
          ++v64;
        v26 = v62;
        if ( v62 )
          v27 = (unsigned int *)(v62 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
          else
            v28 = (*v27)--;
          if ( v28 == 1 )
            v29 = (unsigned int *)(v26 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
                v30 = __ldrex(v29);
              while ( __strex(v30 - 1, v29) );
              v30 = (*v29)--;
            if ( v30 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
      }
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
    v31 = v64;
    v32 = v63;
    if ( v64 != v63 )
      MinecraftScreenController::_getWeakPtrToThis<UserDataScreenController>((int)&v51, (int)v1);
      v33 = *(_QWORD *)&v51;
      v34 = *((_DWORD *)v1 + 106);
      if ( v52 )
        v35 = (unsigned int *)(v52 + 8);
        if ( &pthread_create )
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 + 1, v35) );
          ++*v35;
      v50 = 0;
      v37 = operator new(8u);
      *v37 = v33;
      if ( HIDWORD(v33) )
        v38 = (unsigned int *)(HIDWORD(v33) + 8);
            v39 = __ldrex(v38);
          while ( __strex(v39 + 1, v38) );
          ++*v38;
      LODWORD(v40) = sub_127A828;
      v49 = v37;
      HIDWORD(v40) = sub_127A674;
      *(_QWORD *)&v50 = v40;
      MinecraftScreenModel::getProfiles(v34, (unsigned int)&v63, (int)&v49);
      if ( v50 )
        v50();
        v41 = (unsigned int *)(HIDWORD(v33) + 8);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v33) + 12))(HIDWORD(v33));
      v43 = v52;
        v44 = (unsigned int *)(v52 + 8);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 == 1 )
          (*(void (**)(void))(*(_DWORD *)v43 + 12))();
      v31 = v64;
      v32 = v63;
    if ( v32 != v31 )
      do
        v48 = (int *)(*v32 - 12);
        if ( v48 != &dword_28898C0 )
          v46 = (unsigned int *)(*v32 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v48);
        ++v32;
      while ( v32 != v31 );
      v31 = v63;
    if ( v31 )
      operator delete(v31);
  }
}


void __fastcall UserDataScreenController::_copyPlayerDataFromBuffer(UserDataScreenController *this)
{
  UserDataScreenController *v1; // r4@1
  int v2; // r9@1
  unsigned __int64 *v3; // r6@2
  int *v4; // r11@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  unsigned int *v11; // r0@30
  unsigned int v12; // r1@32
  UserDataScreenController *v13; // r5@35
  int *v14; // r4@35
  char *v15; // r0@35
  int v16; // r11@36
  unsigned int *v17; // r1@37
  unsigned int v18; // r0@39
  unsigned int *v19; // r7@43
  unsigned int v20; // r0@45
  void *v21; // r0@50
  char *v22; // r0@51
  int v23; // r5@52
  unsigned int *v24; // r1@53
  unsigned int v25; // r0@55
  unsigned int *v26; // r7@59
  unsigned int v27; // r0@61
  int v28; // r7@66
  unsigned int *v29; // r1@67
  unsigned int v30; // r0@69
  unsigned int *v31; // r5@73
  unsigned int v32; // r0@75
  char v33; // [sp+10h] [bp-58h]@35
  int v34; // [sp+1Ch] [bp-4Ch]@29
  int v35; // [sp+20h] [bp-48h]@29
  char *v36; // [sp+24h] [bp-44h]@11
  int v37; // [sp+28h] [bp-40h]@7
  int v38; // [sp+2Ch] [bp-3Ch]@35
  int v39; // [sp+30h] [bp-38h]@35
  char *v40; // [sp+34h] [bp-34h]@3
  int v41; // [sp+38h] [bp-30h]@2
  int v42; // [sp+3Ch] [bp-2Ch]@29

  v1 = this;
  v2 = *((_DWORD *)this + 133);
  if ( v2 )
  {
    v3 = (unsigned __int64 *)((char *)this + 496);
    v4 = &v41;
    do
    {
      if ( !std::_Hashtable<std::string,std::pair<std::string const,UserDataScreenController::ProfileData>,std::allocator<std::pair<std::string const,UserDataScreenController::ProfileData>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
              v3,
              (int **)(v2 + 88)) )
      {
        MinecraftScreenModel::getExistingXboxLiveProfile((int)v4, *((_DWORD *)v1 + 106), (int **)(v2 + 88));
        if ( v41 )
        {
          v34 = v41;
          v35 = v42;
          if ( v42 )
          {
            v11 = (unsigned int *)(v42 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v12 = __ldrex(v11);
              while ( __strex(v12 + 1, v11) );
            }
            else
              ++*v11;
          }
          sub_21E94B4((void **)&v36, (const char *)&unk_257BC67);
          sub_21E8AF4(&v37, (int *)(v2 + 48));
          v38 = v34;
          v39 = v35;
          v34 = 0;
          v35 = 0;
          v40 = v36;
          v36 = (char *)&unk_28898CC;
          std::_Hashtable<std::string,std::pair<std::string const,UserDataScreenController::ProfileData>,std::allocator<std::pair<std::string const,UserDataScreenController::ProfileData>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<std::string,UserDataScreenController::ProfileData>>(
            &v33,
            (int)v3,
            (int)&v37);
          v13 = v1;
          v14 = v4;
          v15 = v40 - 12;
          if ( (int *)(v40 - 12) != &dword_28898C0 )
            v5 = (unsigned int *)(v40 - 4);
                v6 = __ldrex(v5);
              while ( __strex(v6 - 1, v5) );
              v6 = (*v5)--;
            if ( v6 <= 0 )
              j_j_j_j__ZdlPv_9(v15);
          v16 = v39;
          if ( v39 )
            v17 = (unsigned int *)(v39 + 4);
                v18 = __ldrex(v17);
              while ( __strex(v18 - 1, v17) );
              v18 = (*v17)--;
            if ( v18 == 1 )
              v19 = (unsigned int *)(v16 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v20 = __ldrex(v19);
                while ( __strex(v20 - 1, v19) );
              }
              else
                v20 = (*v19)--;
              if ( v20 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
          v4 = v14;
          v1 = v13;
          v21 = (void *)(v37 - 12);
          if ( (int *)(v37 - 12) != &dword_28898C0 )
            v7 = (unsigned int *)(v37 - 4);
                v8 = __ldrex(v7);
              while ( __strex(v8 - 1, v7) );
              v8 = (*v7)--;
            if ( v8 <= 0 )
              j_j_j_j__ZdlPv_9(v21);
          v22 = v36 - 12;
          if ( (int *)(v36 - 12) != &dword_28898C0 )
            v9 = (unsigned int *)(v36 - 4);
                v10 = __ldrex(v9);
              while ( __strex(v10 - 1, v9) );
              v10 = (*v9)--;
            if ( v10 <= 0 )
              j_j_j_j__ZdlPv_9(v22);
          v23 = v35;
          if ( v35 )
            v24 = (unsigned int *)(v35 + 4);
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
              v25 = (*v24)--;
            if ( v25 == 1 )
              v26 = (unsigned int *)(v23 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
                  v27 = __ldrex(v26);
                while ( __strex(v27 - 1, v26) );
                v27 = (*v26)--;
              if ( v27 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
        }
        v28 = v42;
        if ( v42 )
          v29 = (unsigned int *)(v42 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
          else
            v30 = (*v29)--;
          if ( v30 == 1 )
            v31 = (unsigned int *)(v28 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
              v32 = (*v31)--;
            if ( v32 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
      }
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
  }
}


void __fastcall UserDataScreenController::_registerEventHandlers(UserDataScreenController *this)
{
  UserDataScreenController::_registerEventHandlers(this);
}


int __fastcall UserDataScreenController::UserDataScreenController(int a1, int a2)
{
  MinecraftScreenModel **v2; // r6@1
  int v3; // r8@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  int v7; // r5@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r0@10
  unsigned int *v10; // r7@14
  unsigned int v11; // r0@16
  double v12; // r0@21
  double v13; // r0@21
  int v14; // r7@23
  void *v15; // r5@23
  unsigned int v16; // r0@24
  int v17; // r7@26
  void *v18; // r5@26
  char v19; // r0@28
  int v21; // [sp+8h] [bp-30h]@1
  int v22; // [sp+Ch] [bp-2Ch]@1

  v2 = (MinecraftScreenModel **)a2;
  v3 = a1;
  v21 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v22 = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  ClientInstanceScreenController::ClientInstanceScreenController(v3, (int)&v21);
  v7 = v22;
  if ( v22 )
    v8 = (unsigned int *)(v22 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  *(_DWORD *)v3 = &off_26E3D3C;
  *(_WORD *)(v3 + 432) = 0;
  *(_BYTE *)(v3 + 434) = 0;
  _aeabi_memclr4(v3 + 436, 60);
  PlayerListInfo::PlayerListInfo((PlayerListInfo *)(v3 + 448));
  *(_DWORD *)(v3 + 504) = 0;
  *(_DWORD *)(v3 + 508) = 0;
  *(_DWORD *)(v3 + 512) = 1065353216;
  *(_DWORD *)(v3 + 516) = 0;
  LODWORD(v12) = v3 + 512;
  v13 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v12)));
  *(_DWORD *)(v3 + 500) = LODWORD(v13);
  if ( LODWORD(v13) == 1 )
    v15 = (void *)(v3 + 520);
    *(_DWORD *)(v3 + 520) = 0;
  else
    if ( LODWORD(v13) >= 0x40000000 )
      sub_21E57F4();
    v14 = 4 * LODWORD(v13);
    v15 = operator new(4 * LODWORD(v13));
    _aeabi_memclr4(v15, v14);
  *(_DWORD *)(v3 + 496) = v15;
  *(_DWORD *)(v3 + 532) = 0;
  *(_DWORD *)(v3 + 536) = 0;
  *(_DWORD *)(v3 + 540) = 1065353216;
  *(_DWORD *)(v3 + 544) = 0;
  LODWORD(v13) = v3 + 540;
  v16 = sub_21E6254(v13);
  *(_DWORD *)(v3 + 528) = v16;
  if ( v16 == 1 )
    v18 = (void *)(v3 + 548);
    *(_DWORD *)(v3 + 548) = 0;
    if ( v16 >= 0x40000000 )
    v17 = 4 * v16;
    v18 = operator new(4 * v16);
    _aeabi_memclr4(v18, v17);
  *(_DWORD *)(v3 + 524) = v18;
  *(_DWORD *)(v3 + 552) = 0;
  *(_DWORD *)(v3 + 556) = 0;
  *(_DWORD *)(v3 + 560) = 0;
  if ( MinecraftScreenModel::isXBLMultiplayerEnabled(*v2) == 1 )
    v19 = MinecraftScreenModel::isEduMode(*(MinecraftScreenModel **)(v3 + 424)) ^ 1;
    v19 = 0;
  *(_BYTE *)(v3 + 434) = v19;
  UserDataScreenController::_registerEventHandlers((UserDataScreenController *)v3);
  UserDataScreenController::_registerBindings((UserDataScreenController *)v3);
  return v3;
}


unsigned __int64 *__fastcall UserDataScreenController::_getPlayerLobby(UserDataScreenController *this)
{
  UserDataScreenController *v1; // r4@1
  char *v2; // r1@1

  v1 = this;
  v2 = MinecraftScreenModel::getLevelPlayerList(*((MinecraftScreenModel **)this + 106));
  return j_j_j__ZNSt10_HashtableIN3mce4UUIDESt4pairIKS1_15PlayerListEntryESaIS5_ENSt8__detail10_Select1stESt8equal_toIS1_ESt4hashIS1_ENS7_18_Mod_range_hashingENS7_20_Default_ranged_hashENS7_20_Prime_rehash_policyENS7_17_Hashtable_traitsILb1ELb0ELb1EEEEaSERKSI_(
           (unsigned __int64 *)((char *)v1 + 524),
           (int)v2);
}


char *__fastcall UserDataScreenController::_addUserToPlayerList(UserDataScreenController *this)
{
  UserDataScreenController *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  void *v4; // r0@4
  void *v5; // r0@5
  int v6; // r12@6
  int v7; // r1@6
  int v8; // r2@6
  int v9; // r3@6
  int v10; // r0@6
  bool v11; // zf@6
  int v12; // r0@9
  __int64 v13; // r0@10
  void *v14; // r0@11
  int *v15; // r0@12
  int *v16; // r1@12
  __int64 v17; // r0@16
  char *result; // r0@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  __int64 v23; // [sp+0h] [bp-38h]@10
  char v24; // [sp+8h] [bp-30h]@6
  int v25; // [sp+Ch] [bp-2Ch]@6
  int v26; // [sp+10h] [bp-28h]@6
  int v27; // [sp+14h] [bp-24h]@6
  int v28; // [sp+1Ch] [bp-1Ch]@5
  int v29; // [sp+20h] [bp-18h]@2

  v1 = this;
  v2 = MinecraftScreenModel::isSignedInToXBL(*((MinecraftScreenModel **)this + 106));
  v3 = *((_DWORD *)v1 + 106);
  if ( v2 == 1 )
    MinecraftScreenModel::getCurrentGamertag((MinecraftScreenModel *)&v29, v3);
  else
    MinecraftScreenModel::getPlayerName((MinecraftScreenModel *)&v29, v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 112,
    &v29);
  v4 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  *((_QWORD *)v1 + 57) = *(_QWORD *)MinecraftScreenModel::getLocalPlayerEntityID(*((MinecraftScreenModel **)v1 + 106));
  MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&v28, *((_DWORD *)v1 + 106));
    (int *)v1 + 120,
    &v28);
  v5 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v28 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  MinecraftScreenModel::getPrimaryLocalPlayerUUID((MinecraftScreenModel *)&v24, *((_DWORD *)v1 + 95));
  v6 = (int)v1 + 464;
  v7 = v25;
  v8 = v26;
  v9 = v27;
  *(_DWORD *)v6 = *(_DWORD *)&v24;
  *(_DWORD *)(v6 + 4) = v7;
  *(_DWORD *)(v6 + 8) = v8;
  *(_DWORD *)(v6 + 12) = v9;
  v10 = *(_DWORD *)(*((_DWORD *)v1 + 120) - 12);
  v11 = v10 == 0;
  if ( v10 )
    LOBYTE(v10) = 1;
  *((_BYTE *)v1 + 488) = v10;
  if ( v11 )
    v15 = (int *)((char *)v1 + 484);
    v16 = (int *)&algn_27DDF34[4];
    v12 = std::_Hashtable<std::string,std::pair<std::string const,UserDataScreenController::ProfileData>,std::allocator<std::pair<std::string const,UserDataScreenController::ProfileData>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
            (unsigned __int64 *)v1 + 62,
            (int **)v1 + 112);
    if ( v12 )
      Core::PathBuffer<std::string>::operator=((int *)v1 + 121, (int *)(*(_DWORD *)(v12 + 8) + 8));
      *((_BYTE *)v1 + 489) = 0;
      LODWORD(v13) = *((_DWORD *)v1 + 121);
      HIDWORD(v13) = *(_DWORD *)(v13 - 12);
      v23 = v13;
      if ( Core::FileSystem::fileExists(&v23) )
        goto LABEL_16;
      v14 = &unk_27DDF20;
    v16 = (int *)((char *)v14 + 20);
  Core::PathBuffer<std::string>::operator=(v15, v16);
  *((_BYTE *)v1 + 489) = 1;
LABEL_16:
  v17 = *((_QWORD *)v1 + 55);
  if ( (_DWORD)v17 == HIDWORD(v17) )
    result = std::vector<PlayerListInfo,std::allocator<PlayerListInfo>>::_M_emplace_back_aux<PlayerListInfo&>(
               (unsigned __int64 *)((char *)v1 + 436),
               (int *)v1 + 112);
    PlayerListInfo::PlayerListInfo((int *)v17, (int *)v1 + 112);
    result = (char *)(*((_DWORD *)v1 + 110) + 48);
    *((_DWORD *)v1 + 110) = result;
  return result;
}


void __fastcall UserDataScreenController::_copyPlayerDataFromBuffer(UserDataScreenController *this)
{
  UserDataScreenController::_copyPlayerDataFromBuffer(this);
}


void __fastcall UserDataScreenController::_registerBindings(UserDataScreenController *this)
{
  UserDataScreenController::_registerBindings(this);
}


int __fastcall UserDataScreenController::tick(UserDataScreenController *this)
{
  UserDataScreenController *v1; // r5@1
  int v2; // r4@1
  char *v3; // r0@3
  char v4; // r0@7
  int i; // r6@10
  _DWORD *v6; // r0@13
  _DWORD *v7; // r1@13
  size_t v8; // r2@13

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  if ( !MinecraftScreenModel::isTrial(*((MinecraftScreenModel **)v1 + 106)) )
  {
    if ( !*((_BYTE *)v1 + 432) )
    {
      *((_BYTE *)v1 + 432) = 1;
      v3 = MinecraftScreenModel::getLevelPlayerList(*((MinecraftScreenModel **)v1 + 106));
      std::_Hashtable<mce::UUID,std::pair<mce::UUID const,PlayerListEntry>,std::allocator<std::pair<mce::UUID const,PlayerListEntry>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
        (unsigned __int64 *)((char *)v1 + 524),
        (int)v3);
      UserDataScreenController::_populatePlayerList(v1);
      if ( MinecraftScreenModel::isSignedInToXBL(*((MinecraftScreenModel **)v1 + 106)) == 1 )
        UserDataScreenController::_requestPlayerProfiles(v1);
      if ( !v2 )
        v2 = 1;
    }
    v4 = *((_BYTE *)v1 + 433);
    __dmb();
    if ( v4 & 1 )
      UserDataScreenController::_copyPlayerDataFromBuffer(v1);
      __dmb();
      *((_BYTE *)v1 + 433) = 0;
    for ( i = *((_DWORD *)v1 + 126); i; i = *(_DWORD *)i )
      v6 = *(_DWORD **)(i + 16);
      v7 = *(_DWORD **)(*(_DWORD *)(i + 8) + 8);
      v8 = *(v6 - 3);
      if ( v8 != *(v7 - 3) || memcmp(v6, v7, v8) )
      {
        UserDataScreenController::_populatePlayerList(v1);
        if ( !v2 )
          v2 = 1;
        return v2;
      }
  }
  return v2;
}


void __fastcall UserDataScreenController::~UserDataScreenController(UserDataScreenController *this)
{
  UserDataScreenController *v1; // r0@1

  v1 = UserDataScreenController::~UserDataScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall UserDataScreenController::_populatePlayerList(UserDataScreenController *this)
{
  UserDataScreenController::_populatePlayerList(this);
}
