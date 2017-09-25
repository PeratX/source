

void __fastcall StoreItemListScreenController::_registerEventHandlers(StoreItemListScreenController *this)
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
  sub_21E94B4((void **)&v10, "button.select_item");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1261ECC;
  *v3 = v1;
  HIDWORD(v4) = sub_1261BD4;
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


void __fastcall StoreItemListScreenController::_registerEventHandlers(StoreItemListScreenController *this)
{
  StoreItemListScreenController::_registerEventHandlers(this);
}


int __fastcall StoreItemListScreenController::addStaticScreenVars(StoreItemListScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  StoreItemListScreenController *v3; // r5@1
  int v4; // r6@1
  int v5; // r6@1
  int v7; // [sp+0h] [bp-38h]@1
  char v8; // [sp+10h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$item_list_title");
  Json::Value::Value((int)&v8, (const char **)v3 + 113);
  Json::Value::operator=(v4, (const Json::Value *)&v8);
  Json::Value::~Value((Json::Value *)&v8);
  v5 = Json::Value::operator[](v2, "$back_button_text");
  Json::Value::Value((int)&v7, (const char **)v3 + 112);
  Json::Value::operator=(v5, (const Json::Value *)&v7);
  Json::Value::~Value((Json::Value *)&v7);
  return StoreBaseScreenController::addStaticScreenVars(v3, v2);
}


char *__fastcall StoreItemListScreenController::getStoreCatalogItemModel(StoreItemListScreenController *this, int a2, unsigned int a3, int a4)
{
  bool v4; // cf@1
  bool v5; // zf@1
  bool v6; // nf@1
  unsigned __int8 v7; // vf@1
  char *result; // r0@5

  v7 = 0;
  v4 = 1;
  v5 = a2 == 0;
  v6 = a2 < 0;
  if ( a2 >= 0 )
  {
    a4 = *((_QWORD *)this + 57);
    a3 = (signed int)((*((_QWORD *)this + 57) >> 32) - a4) >> 2;
    v7 = __OFSUB__(a3, a2);
    v4 = a3 >= a2;
    v5 = a3 == a2;
    v6 = ((a3 - a2) & 0x80000000) != 0;
  }
  if ( (unsigned __int8)(v6 ^ v7) | v5 )
    result = j_j_j__ZN19MainMenuScreenModel19getInvalidItemModelEv(*((MainMenuScreenModel **)this + 106));
  else
    if ( v5 || !v4 )
      sub_21E5B04("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", a2, a3, a4);
    result = (char *)(a4 + 4 * a2);
  return result;
}


void __fastcall StoreItemListScreenController::_registerBindings(StoreItemListScreenController *this)
{
  StoreItemListScreenController *v1; // r4@1
  _DWORD *v2; // r0@3
  __int64 v3; // r1@3
  __int64 v4; // r1@3
  _DWORD *v5; // r0@7
  __int64 v6; // r1@7
  _DWORD *v7; // r0@9
  __int64 v8; // r1@9
  _DWORD *v9; // r0@11
  __int64 v10; // r1@11
  _DWORD *v11; // r0@13
  __int64 v12; // r1@13
  _DWORD *v13; // r0@15
  __int64 v14; // r1@15
  _DWORD *v15; // r0@17
  __int64 v16; // r1@17
  _DWORD *v17; // r0@19
  __int64 v18; // r1@19
  _DWORD *v19; // r0@21
  __int64 v20; // r1@21
  _DWORD *v21; // r0@23
  __int64 v22; // r1@23
  _DWORD *v23; // r0@25
  __int64 v24; // r1@25
  _DWORD *v25; // r0@27
  __int64 v26; // r1@27
  _DWORD *v27; // r0@29
  __int64 v28; // r1@29
  _DWORD *v29; // r0@31
  __int64 v30; // r1@31
  _DWORD *v31; // r0@33
  __int64 v32; // r1@33
  _DWORD *v33; // r0@35
  __int64 v34; // r1@35
  _DWORD *v35; // r0@37
  __int64 v36; // r1@37
  _DWORD *v37; // r0@39
  __int64 v38; // r1@39
  _DWORD *v39; // r0@41
  __int64 v40; // r1@41
  __int64 v41; // r1@41
  void *v42; // [sp+4h] [bp-204h]@41
  __int64 v43; // [sp+Ch] [bp-1FCh]@41
  _DWORD *v44; // [sp+14h] [bp-1F4h]@41
  __int64 v45; // [sp+1Ch] [bp-1ECh]@41
  int v46; // [sp+24h] [bp-1E4h]@41
  _DWORD *v47; // [sp+28h] [bp-1E0h]@39
  __int64 v48; // [sp+30h] [bp-1D8h]@39
  char v49; // [sp+38h] [bp-1D0h]@39
  int v50; // [sp+3Ch] [bp-1CCh]@39
  _DWORD *v51; // [sp+40h] [bp-1C8h]@37
  __int64 v52; // [sp+48h] [bp-1C0h]@37
  char v53; // [sp+50h] [bp-1B8h]@37
  int v54; // [sp+54h] [bp-1B4h]@37
  _DWORD *v55; // [sp+58h] [bp-1B0h]@35
  __int64 v56; // [sp+60h] [bp-1A8h]@35
  char v57; // [sp+68h] [bp-1A0h]@35
  int v58; // [sp+6Ch] [bp-19Ch]@35
  _DWORD *v59; // [sp+70h] [bp-198h]@33
  __int64 v60; // [sp+78h] [bp-190h]@33
  int v61; // [sp+80h] [bp-188h]@33
  int v62; // [sp+84h] [bp-184h]@33
  _DWORD *v63; // [sp+88h] [bp-180h]@31
  __int64 v64; // [sp+90h] [bp-178h]@31
  int v65; // [sp+98h] [bp-170h]@31
  int v66; // [sp+9Ch] [bp-16Ch]@31
  _DWORD *v67; // [sp+A0h] [bp-168h]@29
  __int64 v68; // [sp+A8h] [bp-160h]@29
  int v69; // [sp+B0h] [bp-158h]@29
  int v70; // [sp+B4h] [bp-154h]@29
  _DWORD *v71; // [sp+B8h] [bp-150h]@27
  __int64 v72; // [sp+C0h] [bp-148h]@27
  int v73; // [sp+C8h] [bp-140h]@27
  int v74; // [sp+CCh] [bp-13Ch]@27
  _DWORD *v75; // [sp+D0h] [bp-138h]@25
  __int64 v76; // [sp+D8h] [bp-130h]@25
  int v77; // [sp+E0h] [bp-128h]@25
  int v78; // [sp+E4h] [bp-124h]@25
  _DWORD *v79; // [sp+E8h] [bp-120h]@23
  __int64 v80; // [sp+F0h] [bp-118h]@23
  int v81; // [sp+F8h] [bp-110h]@23
  int v82; // [sp+FCh] [bp-10Ch]@23
  _DWORD *v83; // [sp+100h] [bp-108h]@21
  __int64 v84; // [sp+108h] [bp-100h]@21
  int v85; // [sp+110h] [bp-F8h]@21
  int v86; // [sp+114h] [bp-F4h]@21
  _DWORD *v87; // [sp+118h] [bp-F0h]@19
  __int64 v88; // [sp+120h] [bp-E8h]@19
  int v89; // [sp+128h] [bp-E0h]@19
  int v90; // [sp+12Ch] [bp-DCh]@19
  _DWORD *v91; // [sp+130h] [bp-D8h]@17
  __int64 v92; // [sp+138h] [bp-D0h]@17
  char v93; // [sp+140h] [bp-C8h]@17
  int v94; // [sp+144h] [bp-C4h]@17
  _DWORD *v95; // [sp+148h] [bp-C0h]@15
  __int64 v96; // [sp+150h] [bp-B8h]@15
  char v97; // [sp+158h] [bp-B0h]@15
  int v98; // [sp+15Ch] [bp-ACh]@15
  _DWORD *v99; // [sp+160h] [bp-A8h]@13
  __int64 v100; // [sp+168h] [bp-A0h]@13
  int v101; // [sp+170h] [bp-98h]@13
  int v102; // [sp+174h] [bp-94h]@13
  _DWORD *v103; // [sp+178h] [bp-90h]@11
  __int64 v104; // [sp+180h] [bp-88h]@11
  int v105; // [sp+188h] [bp-80h]@11
  int v106; // [sp+18Ch] [bp-7Ch]@11
  _DWORD *v107; // [sp+190h] [bp-78h]@9
  __int64 v108; // [sp+198h] [bp-70h]@9
  char v109; // [sp+1A0h] [bp-68h]@9
  int v110; // [sp+1A4h] [bp-64h]@9
  _DWORD *v111; // [sp+1A8h] [bp-60h]@7
  __int64 v112; // [sp+1B0h] [bp-58h]@7
  int v113; // [sp+1B8h] [bp-50h]@7
  int v114; // [sp+1BCh] [bp-4Ch]@7
  void *v115; // [sp+1C0h] [bp-48h]@3
  __int64 v116; // [sp+1C8h] [bp-40h]@3
  _DWORD *v117; // [sp+1D0h] [bp-38h]@3
  __int64 v118; // [sp+1D8h] [bp-30h]@3
  int v119; // [sp+1E0h] [bp-28h]@3
  void *v120; // [sp+1E4h] [bp-24h]@1
  void (*v121)(void); // [sp+1ECh] [bp-1Ch]@1
  void (__fastcall *v122)(int, const char **, int); // [sp+1F0h] [bp-18h]@1
  char v123; // [sp+1F4h] [bp-14h]@1

  v1 = this;
  StringHash::StringHash<char [25]>(&v123, (int)"#button_back_description");
  v120 = operator new(1u);
  v121 = (void (*)(void))sub_1261F1C;
  v122 = sub_1261F04;
  ScreenController::bindForGlobal((int)v1, (int *)&v123, (int)&v120);
  if ( v121 )
    v121();
  v119 = 257888693;
  v2 = operator new(4u);
  LODWORD(v3) = sub_1261F7A;
  *v2 = v1;
  HIDWORD(v3) = sub_1261F4A;
  v117 = v2;
  v118 = v3;
  v115 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v116 = v4;
  ScreenController::bindGridSize((int)v1, &v119, (int)&v117, (int)&v115);
  if ( (_DWORD)v116 )
    ((void (*)(void))v116)();
  if ( (_DWORD)v118 )
    ((void (*)(void))v118)();
  v113 = -1542016824;
  v114 = -1568594934;
  v5 = operator new(4u);
  LODWORD(v6) = sub_1262010;
  *v5 = v1;
  HIDWORD(v6) = sub_1261FB0;
  v111 = v5;
  v112 = v6;
  ScreenController::bindForCollection((int)v1, &v114, &v113, (int)&v111);
  if ( (_DWORD)v112 )
    ((void (*)(void))v112)();
  v110 = -1568594934;
  StringHash::StringHash<char [24]>(&v109, (int)"#new_offer_icon_visible");
  v7 = operator new(4u);
  LODWORD(v8) = sub_12620A8;
  *v7 = v1;
  HIDWORD(v8) = sub_1262048;
  v107 = v7;
  v108 = v8;
  ScreenController::bindForCollection((int)v1, &v110, &v109, (int)&v107);
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  v106 = -1568594934;
  v105 = -720512063;
  v9 = operator new(4u);
  LODWORD(v10) = sub_1262140;
  *v9 = v1;
  HIDWORD(v10) = sub_12620E0;
  v103 = v9;
  v104 = v10;
  ScreenController::bindForCollection((int)v1, &v106, &v105, (int)&v103);
  if ( (_DWORD)v104 )
    ((void (*)(void))v104)();
  v102 = -1568594934;
  v101 = -556378146;
  v11 = operator new(4u);
  LODWORD(v12) = sub_12621C8;
  *v11 = v1;
  HIDWORD(v12) = sub_1262178;
  v99 = v11;
  v100 = v12;
  ScreenController::bindForCollection((int)v1, &v102, &v101, (int)&v99);
  if ( (_DWORD)v100 )
    ((void (*)(void))v100)();
  v98 = -1568594934;
  StringHash::StringHash<char [27]>(&v97, (int)"#offer_texture_file_system");
  v13 = operator new(4u);
  LODWORD(v14) = sub_126230C;
  *v13 = v1;
  HIDWORD(v14) = sub_1262200;
  v95 = v13;
  v96 = v14;
  ScreenController::bindForCollection((int)v1, &v98, &v97, (int)&v95);
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  v94 = -1568594934;
  StringHash::StringHash<char [33]>(&v93, (int)"#item_does_not_meet_requirements");
  v15 = operator new(4u);
  LODWORD(v16) = sub_12623BC;
  *v15 = v1;
  HIDWORD(v16) = sub_1262344;
  v91 = v15;
  v92 = v16;
  ScreenController::bindForCollection((int)v1, &v94, &v93, (int)&v91);
  if ( (_DWORD)v92 )
    ((void (*)(void))v92)();
  v90 = -1568594934;
  v89 = 348026759;
  v17 = operator new(4u);
  LODWORD(v18) = sub_12624F8;
  *v17 = v1;
  HIDWORD(v18) = sub_12623F4;
  v87 = v17;
  v88 = v18;
  ScreenController::bindForCollection((int)v1, &v90, &v89, (int)&v87);
  if ( (_DWORD)v88 )
    ((void (*)(void))v88)();
  v86 = -1568594934;
  v85 = -1465380146;
  v19 = operator new(4u);
  LODWORD(v20) = sub_1262588;
  *v19 = v1;
  HIDWORD(v20) = sub_1262530;
  v83 = v19;
  v84 = v20;
  ScreenController::bindForCollection((int)v1, &v86, &v85, (int)&v83);
  if ( (_DWORD)v84 )
    ((void (*)(void))v84)();
  v82 = -1568594934;
  v81 = 2085089129;
  v21 = operator new(4u);
  LODWORD(v22) = sub_1262624;
  *v21 = v1;
  HIDWORD(v22) = sub_12625C0;
  v79 = v21;
  v80 = v22;
  ScreenController::bindForCollection((int)v1, &v82, &v81, (int)&v79);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  v78 = -1568594934;
  v77 = 472467656;
  v23 = operator new(4u);
  LODWORD(v24) = sub_12628B4;
  *v23 = v1;
  HIDWORD(v24) = sub_126265C;
  v75 = v23;
  v76 = v24;
  ScreenController::bindForCollection((int)v1, &v78, &v77, (int)&v75);
  if ( (_DWORD)v76 )
    ((void (*)(void))v76)();
  v74 = -1568594934;
  v73 = -562286346;
  v25 = operator new(4u);
  LODWORD(v26) = sub_1262B34;
  *v25 = v1;
  HIDWORD(v26) = sub_12628EC;
  v71 = v25;
  v72 = v26;
  ScreenController::bindForCollection((int)v1, &v74, &v73, (int)&v71);
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  v70 = -1568594934;
  v69 = 154761561;
  v27 = operator new(4u);
  LODWORD(v28) = sub_1262BBC;
  *v27 = v1;
  HIDWORD(v28) = sub_1262B6C;
  v67 = v27;
  v68 = v28;
  ScreenController::bindForCollection((int)v1, &v70, &v69, (int)&v67);
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  v66 = -1568594934;
  v65 = 290079817;
  v29 = operator new(4u);
  LODWORD(v30) = sub_1262C44;
  *v29 = v1;
  HIDWORD(v30) = sub_1262BF4;
  v63 = v29;
  v64 = v30;
  ScreenController::bindForCollection((int)v1, &v66, &v65, (int)&v63);
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  v62 = -1568594934;
  v61 = 1118127483;
  v31 = operator new(4u);
  LODWORD(v32) = sub_1262FF8;
  *v31 = v1;
  HIDWORD(v32) = sub_1262C7C;
  v59 = v31;
  v60 = v32;
  ScreenController::bindForCollection((int)v1, &v62, &v61, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  v58 = -1568594934;
  StringHash::StringHash<char [41]>(&v57, (int)"#left_most_grid_item_focus_override_left");
  v33 = operator new(4u);
  LODWORD(v34) = sub_12631C8;
  *v33 = v1;
  HIDWORD(v34) = sub_1263030;
  v55 = v33;
  v56 = v34;
  ScreenController::bindForCollection((int)v1, &v58, &v57, (int)&v55);
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  v54 = -1568594934;
  StringHash::StringHash<char [43]>(&v53, (int)"#right_most_grid_item_focus_override_right");
  v35 = operator new(4u);
  LODWORD(v36) = sub_12633BC;
  *v35 = v1;
  HIDWORD(v36) = sub_1263200;
  v51 = v35;
  v52 = v36;
  ScreenController::bindForCollection((int)v1, &v54, &v53, (int)&v51);
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  v50 = -1568594934;
  StringHash::StringHash<char [33]>(&v49, (int)"#offer_grid_item_button_focus_id");
  v37 = operator new(4u);
  LODWORD(v38) = sub_12634D4;
  *v37 = v1;
  HIDWORD(v38) = sub_12633F4;
  v47 = v37;
  v48 = v38;
  ScreenController::bindForCollection((int)v1, &v50, &v49, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v46 = -1792070993;
  v39 = operator new(4u);
  LODWORD(v40) = sub_126351C;
  *v39 = v1;
  HIDWORD(v40) = sub_126350A;
  v44 = v39;
  v45 = v40;
  v42 = operator new(1u);
  LODWORD(v41) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v41) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v43 = v41;
  ScreenController::bindBool((int)v1, &v46, (int)&v44, (int)&v42);
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
}


int __fastcall StoreItemListScreenController::_getRowIndex(StoreItemListScreenController *this, int a2)
{
  return a2 / 4;
}


void __fastcall StoreItemListScreenController::_registerBindings(StoreItemListScreenController *this)
{
  StoreItemListScreenController::_registerBindings(this);
}


int __fastcall StoreItemListScreenController::_getRemainderOffers(StoreItemListScreenController *this)
{
  return ((unsigned __int8)((unsigned int)((*((_QWORD *)this + 57) >> 32) - *((_QWORD *)this + 57)) >> 2) + 3) & 3;
}


int __fastcall StoreItemListScreenController::_getColIndex(StoreItemListScreenController *this, int a2)
{
  return a2 % 4;
}


unsigned int __fastcall StoreItemListScreenController::_getLastRowIndex(StoreItemListScreenController *this)
{
  return (unsigned int)((signed int)((*((_QWORD *)this + 57) >> 32) - *((_QWORD *)this + 57)) >> 2) >> 2;
}


int __fastcall StoreItemListScreenController::StoreItemListScreenController(int a1, int a2, int *a3, int *a4, int *a5)
{
  int v5; // r4@1
  int *v6; // r7@1
  int v7; // r0@1
  int *v8; // r8@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r6@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r5@14
  unsigned int v15; // r0@16
  int v17; // [sp+0h] [bp-28h]@1
  int v18; // [sp+4h] [bp-24h]@1

  v5 = a1;
  v17 = *(_DWORD *)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = a3;
  v18 = v7;
  if ( v7 )
  {
    v9 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
  }
  StoreBaseScreenController::StoreBaseScreenController(v5, (int)&v17);
  v11 = v18;
  if ( v18 )
    v12 = (unsigned int *)(v18 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  *(_DWORD *)v5 = &off_26E399C;
  *(_BYTE *)(v5 + 444) = 0;
  sub_21E8AF4((int *)(v5 + 448), v6);
  sub_21E8AF4((int *)(v5 + 452), a5);
  *(_DWORD *)(v5 + 456) = 0;
  *(_DWORD *)(v5 + 460) = 0;
  *(_DWORD *)(v5 + 464) = 0;
  StoreSearchQuery::StoreSearchQuery((int *)(v5 + 468), v8);
  StoreItemListScreenController::_registerEventHandlers((StoreItemListScreenController *)v5);
  StoreItemListScreenController::_registerBindings((StoreItemListScreenController *)v5);
  return v5;
}


int __fastcall StoreItemListScreenController::onOpen(StoreItemListScreenController *this)
{
  StoreItemListScreenController *v1; // r5@1
  int result; // r0@1
  __int64 v3; // kr00_8@2
  int v4; // r6@2
  unsigned int *v5; // r0@3
  unsigned int v6; // r1@5
  _QWORD *v7; // r0@8
  unsigned int *v8; // r1@9
  unsigned int v9; // r2@11
  __int64 v10; // r1@14
  unsigned int *v11; // r1@17
  unsigned int v12; // r0@19
  unsigned int *v13; // r2@25
  unsigned int v14; // r1@27
  _QWORD *v15; // [sp+4h] [bp-2Ch]@14
  void (*v16)(void); // [sp+Ch] [bp-24h]@8
  char v17; // [sp+14h] [bp-1Ch]@2
  int v18; // [sp+18h] [bp-18h]@2

  v1 = this;
  StoreBaseScreenController::onOpen(this);
  result = *((_BYTE *)v1 + 444);
  if ( !*((_BYTE *)v1 + 444) )
  {
    *((_BYTE *)v1 + 444) = 1;
    MinecraftScreenController::_getWeakPtrToThis<StoreItemListScreenController>((int)&v17, (int)v1);
    v3 = *(_QWORD *)&v17;
    v4 = *((_DWORD *)v1 + 106);
    if ( v18 )
    {
      v5 = (unsigned int *)(v18 + 8);
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
    v16 = 0;
    v7 = operator new(8u);
    *v7 = v3;
    if ( HIDWORD(v3) )
      v8 = (unsigned int *)(HIDWORD(v3) + 8);
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
        ++*v8;
    LODWORD(v10) = sub_1261A60;
    v15 = v7;
    HIDWORD(v10) = sub_12618FC;
    *(_QWORD *)&v16 = v10;
    MainMenuScreenModel::createItemListFromQuery(v4, (int *)v1 + 117, (int)&v15);
    if ( v16 )
      v16();
      v11 = (unsigned int *)(HIDWORD(v3) + 8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
    result = v18;
      v13 = (unsigned int *)(v18 + 8);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  }
  return result;
}


void __fastcall StoreItemListScreenController::~StoreItemListScreenController(StoreItemListScreenController *this)
{
  StoreItemListScreenController::~StoreItemListScreenController(this);
}


void __fastcall StoreItemListScreenController::~StoreItemListScreenController(StoreItemListScreenController *this)
{
  StoreItemListScreenController *v1; // r4@1
  void *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v7; // r12@6
  signed int v8; // r1@8
  unsigned int *v9; // r12@10
  signed int v10; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26E399C;
  StoreSearchQuery::~StoreSearchQuery((StoreItemListScreenController *)((char *)this + 468));
  v2 = (void *)*((_DWORD *)v1 + 114);
  if ( v2 )
    operator delete(v2);
  v3 = *((_DWORD *)v1 + 113);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 112);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v5 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  StoreBaseScreenController::~StoreBaseScreenController(v1);
  operator delete((void *)v1);
}


StoreItemListScreenController *__fastcall StoreItemListScreenController::~StoreItemListScreenController(StoreItemListScreenController *this)
{
  StoreItemListScreenController *v1; // r4@1
  void *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v8; // r12@6
  signed int v9; // r1@8
  unsigned int *v10; // r12@10
  signed int v11; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26E399C;
  StoreSearchQuery::~StoreSearchQuery((StoreItemListScreenController *)((char *)this + 468));
  v2 = (void *)*((_DWORD *)v1 + 114);
  if ( v2 )
    operator delete(v2);
  v3 = *((_DWORD *)v1 + 113);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 112);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  StoreBaseScreenController::~StoreBaseScreenController(v1);
  return v1;
}
