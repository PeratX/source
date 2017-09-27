

void __fastcall PauseScreenController::addStaticScreenVars(PauseScreenController *this, Json::Value *a2)
{
  ScreenController *v2; // r9@1
  Json::Value *v3; // r8@1
  int *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  int v7; // r6@4
  char *v8; // r0@4
  void *v9; // r0@4
  int v10; // r4@5
  char *v11; // r6@5
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  int *v14; // r0@15
  void *v15; // r0@20
  void *v16; // r0@21
  void *v17; // r0@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  unsigned int *v22; // r2@32
  signed int v23; // r1@34
  unsigned int *v24; // r2@36
  signed int v25; // r1@38
  unsigned int *v26; // r2@56
  signed int v27; // r1@58
  unsigned int *v28; // r2@60
  signed int v29; // r1@62
  int v30; // [sp+4h] [bp-64h]@4
  char *v31; // [sp+8h] [bp-60h]@4
  char *v32; // [sp+Ch] [bp-5Ch]@4
  char *v33; // [sp+10h] [bp-58h]@4
  int v34; // [sp+18h] [bp-50h]@4
  int v35; // [sp+1Ch] [bp-4Ch]@4
  char v36; // [sp+20h] [bp-48h]@4
  int v37; // [sp+34h] [bp-34h]@2
  int v38; // [sp+38h] [bp-30h]@2
  int v39; // [sp+3Ch] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  v4 = (int *)ClientInstanceScreenModel::getThirdPartyServerName(*((ClientInstanceScreenModel **)this + 106));
  sub_15901A4(&v39, v4);
  if ( !*(_DWORD *)(v39 - 12) )
  {
    sub_1590164((void **)&v37, "menu.serverGenericName");
    I18n::get(&v38, (int **)&v37);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v39, &v38);
    v5 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
    {
      v26 = (unsigned int *)(v38 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      }
      else
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v5);
    }
    v6 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v37 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v6);
  }
  v7 = Json::Value::operator[](v3, "$server_store_button_text");
  sub_1590164((void **)&v34, "menu.serverStore");
  sub_15901A4(&v30, &v39);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v8 = (char *)operator new(4u);
  v31 = v8;
  v33 = v8 + 4;
  v32 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v30,
                  (int)&v31,
                  (int)v8);
  I18n::get(&v35, &v34, (unsigned __int64 *)&v31);
  Json::Value::Value((int)&v36, (const char **)&v35);
  Json::Value::operator=(v7, (const Json::Value *)&v36);
  Json::Value::~Value((Json::Value *)&v36);
  v9 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  v10 = (int)v32;
  v11 = v31;
  if ( v31 != v32 )
    do
      v14 = (int *)(*(_DWORD *)v11 - 12);
      if ( v14 != &dword_28898C0 )
        v12 = (unsigned int *)(*(_DWORD *)v11 - 4);
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
          j_j_j_j_j__ZdlPv_9_2(v14);
      v11 += 4;
    while ( v11 != (char *)v10 );
    v11 = v31;
  if ( v11 )
    operator delete(v11);
  v15 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v30 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v15);
  v16 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v34 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v16);
  ScreenController::addStaticScreenVars(v2, v3);
  v17 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v39 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v17);
}


int __fastcall PauseScreenController::tick(PauseScreenController *this)
{
  PauseScreenController *v1; // r5@1
  int v2; // r4@1

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  if ( !*((_BYTE *)v1 + 444) )
  {
    *((_BYTE *)v1 + 444) = 1;
    PauseScreenController::_populateClientIds(v1);
    v2 |= 1u;
  }
  return v2;
}


char *__fastcall PauseScreenController::_populateClientIds(PauseScreenController *this)
{
  PauseScreenController *v1; // r5@1
  char *result; // r0@1
  int v3; // r9@1
  unsigned int *v4; // r6@2
  unsigned int v5; // r1@5
  unsigned int v6; // r2@6
  UserDataScreenController *v7; // r0@7
  bool v8; // zf@7
  __int64 v9; // kr00_8@10
  char *v10; // r7@11
  __int64 v11; // r0@12
  unsigned int *v12; // r4@23

  v1 = this;
  result = (char *)*((_DWORD *)this + 108);
  *((_DWORD *)v1 + 109) = result;
  v3 = *((_DWORD *)v1 + 113);
  if ( v3 )
  {
    result = *(char **)(v3 + 4);
    v4 = (unsigned int *)(v3 + 4);
    while ( result )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( (char *)v5 == result )
      {
        v6 = __strex((unsigned int)(result + 1), v4);
        result = (char *)v5;
        if ( !v6 )
        {
          __dmb();
          v7 = (UserDataScreenController *)*v4;
          v8 = *v4 == 0;
          if ( *v4 )
          {
            v7 = (UserDataScreenController *)*((_DWORD *)v1 + 112);
            v8 = v7 == 0;
          }
          if ( v8 )
            goto LABEL_32;
          v9 = *(_QWORD *)UserDataScreenController::getPlayerList(v7);
          if ( (_DWORD)v9 == HIDWORD(v9) )
          v10 = (char *)(v9 + 8);
          do
            v11 = *(_QWORD *)((char *)v1 + 436);
            if ( (_DWORD)v11 == HIDWORD(v11) )
            {
              std::vector<EntityUniqueID,std::allocator<EntityUniqueID>>::_M_emplace_back_aux<EntityUniqueID const&>(
                (unsigned __int64 *)v1 + 54,
                v10);
            }
            else
              *(_QWORD *)v11 = *(_QWORD *)v10;
              *((_DWORD *)v1 + 109) = v11 + 8;
            v10 += 48;
            result = &v10[-HIDWORD(v9)];
          while ( &v10[-HIDWORD(v9)] != (char *)8 );
          if ( v3 )
LABEL_32:
            if ( &pthread_create )
              __dmb();
              do
                result = (char *)__ldrex(v4);
              while ( __strex((unsigned int)(result - 1), v4) );
              result = (char *)(*v4)--;
            if ( result == (char *)1 )
              v12 = (unsigned int *)(v3 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
              if ( &pthread_create )
              {
                __dmb();
                do
                  result = (char *)__ldrex(v12);
                while ( __strex((unsigned int)(result - 1), v12) );
              }
              else
                result = (char *)(*v12)--;
              if ( result == (char *)1 )
                result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


void __fastcall PauseScreenController::_getButtonKeyboardDescription(PauseScreenController *this)
{
  int *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int v5; // [sp+4h] [bp-1Ch]@1

  v1 = (int *)this;
  sub_1590164((void **)&v5, "vr.pausescreen.recenterDeviceKeyboard");
  I18n::get(v1, (int **)&v5);
  v2 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v3 = (unsigned int *)(v5 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v2);
  }
}


void __fastcall PauseScreenController::_registerBindings(PauseScreenController *this)
{
  PauseScreenController *v1; // r4@1
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
  void *v29; // [sp+8h] [bp-150h]@33
  __int64 v30; // [sp+10h] [bp-148h]@33
  _DWORD *v31; // [sp+18h] [bp-140h]@33
  __int64 v32; // [sp+20h] [bp-138h]@33
  int v33; // [sp+28h] [bp-130h]@33
  int v34; // [sp+2Ch] [bp-12Ch]@33
  void *v35; // [sp+30h] [bp-128h]@29
  __int64 v36; // [sp+38h] [bp-120h]@29
  _DWORD *v37; // [sp+40h] [bp-118h]@29
  __int64 v38; // [sp+48h] [bp-110h]@29
  int v39; // [sp+50h] [bp-108h]@29
  void *v40; // [sp+54h] [bp-104h]@25
  __int64 v41; // [sp+5Ch] [bp-FCh]@25
  _DWORD *v42; // [sp+64h] [bp-F4h]@25
  __int64 v43; // [sp+6Ch] [bp-ECh]@25
  int v44; // [sp+74h] [bp-E4h]@25
  void *v45; // [sp+78h] [bp-E0h]@21
  __int64 v46; // [sp+80h] [bp-D8h]@21
  _DWORD *v47; // [sp+88h] [bp-D0h]@21
  __int64 v48; // [sp+90h] [bp-C8h]@21
  int v49; // [sp+98h] [bp-C0h]@21
  void *v50; // [sp+9Ch] [bp-BCh]@17
  __int64 v51; // [sp+A4h] [bp-B4h]@17
  _DWORD *v52; // [sp+ACh] [bp-ACh]@17
  __int64 v53; // [sp+B4h] [bp-A4h]@17
  int v54; // [sp+BCh] [bp-9Ch]@17
  void *v55; // [sp+C0h] [bp-98h]@13
  __int64 v56; // [sp+C8h] [bp-90h]@13
  _DWORD *v57; // [sp+D0h] [bp-88h]@13
  __int64 v58; // [sp+D8h] [bp-80h]@13
  int v59; // [sp+E0h] [bp-78h]@13
  void *v60; // [sp+E4h] [bp-74h]@9
  __int64 v61; // [sp+ECh] [bp-6Ch]@9
  _DWORD *v62; // [sp+F4h] [bp-64h]@9
  __int64 v63; // [sp+FCh] [bp-5Ch]@9
  int v64; // [sp+104h] [bp-54h]@9
  void *v65; // [sp+108h] [bp-50h]@5
  __int64 v66; // [sp+110h] [bp-48h]@5
  _DWORD *v67; // [sp+118h] [bp-40h]@5
  __int64 v68; // [sp+120h] [bp-38h]@5
  int v69; // [sp+128h] [bp-30h]@5
  void *v70; // [sp+12Ch] [bp-2Ch]@1
  __int64 v71; // [sp+134h] [bp-24h]@1
  _DWORD *v72; // [sp+13Ch] [bp-1Ch]@1
  __int64 v73; // [sp+144h] [bp-14h]@1
  int v74; // [sp+14Ch] [bp-Ch]@1

  v1 = this;
  v74 = -784046875;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11D88C2;
  *v2 = v1;
  HIDWORD(v3) = sub_11D88AE;
  v72 = v2;
  v73 = v3;
  v70 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v71 = v4;
  ScreenController::bindBool((int)v1, &v74, (int)&v72, (int)&v70);
  if ( (_DWORD)v71 )
    ((void (*)(void))v71)();
  if ( (_DWORD)v73 )
    ((void (*)(void))v73)();
  v69 = -1797705594;
  v5 = operator new(4u);
  LODWORD(v6) = sub_11D8904;
  *v5 = v1;
  HIDWORD(v6) = sub_11D88F8;
  v67 = v5;
  v68 = v6;
  v65 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v66 = v7;
  ScreenController::bindBool((int)v1, &v69, (int)&v67, (int)&v65);
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  v64 = 372551559;
  v8 = operator new(4u);
  LODWORD(v9) = sub_11D895E;
  *v8 = v1;
  HIDWORD(v9) = sub_11D893A;
  v62 = v8;
  v63 = v9;
  v60 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v61 = v10;
  ScreenController::bindBool((int)v1, &v64, (int)&v62, (int)&v60);
  if ( (_DWORD)v61 )
    ((void (*)(void))v61)();
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  StringHash::StringHash<char [29]>(&v59, (int)"#server_store_button_visible");
  v11 = operator new(4u);
  LODWORD(v12) = sub_11D89A0;
  *v11 = v1;
  HIDWORD(v12) = sub_11D8994;
  v57 = v11;
  v58 = v12;
  v55 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v56 = v13;
  ScreenController::bindBool((int)v1, &v59, (int)&v57, (int)&v55);
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  StringHash::StringHash<char [43]>(&v54, (int)"#disconnected_from_xbox_live_label_visible");
  v14 = operator new(4u);
  LODWORD(v15) = sub_11D8A12;
  *v14 = v1;
  HIDWORD(v15) = sub_11D89D6;
  v52 = v14;
  v53 = v15;
  v50 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v51 = v16;
  ScreenController::bindBool((int)v1, &v54, (int)&v52, (int)&v50);
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  if ( (_DWORD)v53 )
    ((void (*)(void))v53)();
  StringHash::StringHash<char [23]>(&v49, (int)"#invite_button_visible");
  v17 = operator new(4u);
  LODWORD(v18) = sub_11D8A54;
  *v17 = v1;
  HIDWORD(v18) = sub_11D8A48;
  v47 = v17;
  v48 = v18;
  v45 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v46 = v19;
  ScreenController::bindBool((int)v1, &v49, (int)&v47, (int)&v45);
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v44 = 2031204656;
  v20 = operator new(4u);
  LODWORD(v21) = sub_11D8A9A;
  *v20 = v1;
  HIDWORD(v21) = sub_11D8A8A;
  v42 = v20;
  v43 = v21;
  v40 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v41 = v22;
  ScreenController::bindString((int)v1, &v44, (int)&v42, (int)&v40);
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
  v39 = -705496309;
  v23 = operator new(4u);
  LODWORD(v24) = sub_11D8AEA;
  *v23 = v1;
  HIDWORD(v24) = sub_11D8AD0;
  v37 = v23;
  v38 = v24;
  v35 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v36 = v25;
  ScreenController::bindBool((int)v1, &v39, (int)&v37, (int)&v35);
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  if ( (_DWORD)v38 )
    ((void (*)(void))v38)();
  v34 = 1793510322;
  StringHash::StringHash<char [38]>(&v33, (int)"#player_permission_level_icon_texture");
  v26 = operator new(4u);
  LODWORD(v27) = sub_11D8C0C;
  *v26 = v1;
  HIDWORD(v27) = sub_11D8B20;
  v31 = v26;
  v32 = v27;
  v29 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v30 = v28;
  ScreenController::bindStringForCollection((int)v1, &v34, &v33, (int)&v31, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  if ( (_DWORD)v32 )
    ((void (*)(void))v32)();
}


void __fastcall PauseScreenController::~PauseScreenController(PauseScreenController *this)
{
  PauseScreenController::~PauseScreenController(this);
}


void __fastcall PauseScreenController::_registerEventHandlers(PauseScreenController *this)
{
  PauseScreenController::_registerEventHandlers(this);
}


void __fastcall PauseScreenController::~PauseScreenController(PauseScreenController *this)
{
  PauseScreenController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  void *v5; // r0@9

  v1 = this;
  *(_DWORD *)this = &off_26E2B14;
  v2 = *((_DWORD *)this + 113);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  v5 = (void *)*((_DWORD *)v1 + 108);
  if ( v5 )
    operator delete(v5);
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall PauseScreenController::_getButtonXDescription(PauseScreenController *this)
{
  PauseScreenController::_getButtonXDescription(this);
}


void __fastcall PauseScreenController::_registerEventHandlers(PauseScreenController *this)
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
  int v34; // r5@25
  _DWORD *v35; // r0@25
  __int64 v36; // r1@25
  void *v37; // r0@27
  int v38; // r5@28
  _DWORD *v39; // r0@28
  __int64 v40; // r1@28
  void *v41; // r0@30
  int v42; // r5@31
  _DWORD *v43; // r0@31
  __int64 v44; // r1@31
  void *v45; // r0@33
  unsigned int *v46; // r2@35
  signed int v47; // r1@37
  unsigned int *v48; // r2@39
  signed int v49; // r1@41
  unsigned int *v50; // r2@43
  signed int v51; // r1@45
  unsigned int *v52; // r2@47
  signed int v53; // r1@49
  unsigned int *v54; // r2@51
  signed int v55; // r1@53
  unsigned int *v56; // r2@55
  signed int v57; // r1@57
  unsigned int *v58; // r2@59
  signed int v59; // r1@61
  unsigned int *v60; // r2@63
  signed int v61; // r1@65
  unsigned int *v62; // r2@67
  signed int v63; // r1@69
  unsigned int *v64; // r2@71
  signed int v65; // r1@73
  unsigned int *v66; // r2@75
  signed int v67; // r1@77
  _DWORD *v68; // [sp+4h] [bp-11Ch]@31
  __int64 v69; // [sp+Ch] [bp-114h]@31
  int v70; // [sp+18h] [bp-108h]@31
  _DWORD *v71; // [sp+1Ch] [bp-104h]@28
  __int64 v72; // [sp+24h] [bp-FCh]@28
  int v73; // [sp+30h] [bp-F0h]@28
  _DWORD *v74; // [sp+34h] [bp-ECh]@25
  __int64 v75; // [sp+3Ch] [bp-E4h]@25
  int v76; // [sp+48h] [bp-D8h]@25
  _DWORD *v77; // [sp+4Ch] [bp-D4h]@22
  __int64 v78; // [sp+54h] [bp-CCh]@22
  int v79; // [sp+60h] [bp-C0h]@22
  _DWORD *v80; // [sp+64h] [bp-BCh]@19
  __int64 v81; // [sp+6Ch] [bp-B4h]@19
  int v82; // [sp+78h] [bp-A8h]@19
  _DWORD *v83; // [sp+7Ch] [bp-A4h]@16
  __int64 v84; // [sp+84h] [bp-9Ch]@16
  int v85; // [sp+90h] [bp-90h]@16
  _DWORD *v86; // [sp+94h] [bp-8Ch]@13
  __int64 v87; // [sp+9Ch] [bp-84h]@13
  int v88; // [sp+A8h] [bp-78h]@13
  _DWORD *v89; // [sp+ACh] [bp-74h]@10
  __int64 v90; // [sp+B4h] [bp-6Ch]@10
  int v91; // [sp+C0h] [bp-60h]@10
  _DWORD *v92; // [sp+C4h] [bp-5Ch]@7
  __int64 v93; // [sp+CCh] [bp-54h]@7
  int v94; // [sp+D8h] [bp-48h]@7
  _DWORD *v95; // [sp+DCh] [bp-44h]@4
  __int64 v96; // [sp+E4h] [bp-3Ch]@4
  int v97; // [sp+F0h] [bp-30h]@4
  _DWORD *v98; // [sp+F4h] [bp-2Ch]@1
  __int64 v99; // [sp+FCh] [bp-24h]@1
  int v100; // [sp+108h] [bp-18h]@1

  v1 = this;
  sub_1590164((void **)&v100, "button.menu_continue");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v100);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11D854E;
  *v3 = v1;
  HIDWORD(v4) = sub_11D853C;
  v98 = v3;
  v99 = v4;
  ScreenController::registerButtonEventHandler((int)v1, v2, 0, 1, (int)&v98);
  if ( (_DWORD)v99 )
    ((void (*)(void))v99)();
  v5 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
  {
    v46 = (unsigned int *)(v100 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
    }
    else
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  sub_1590164((void **)&v97, "button.menu_server_store");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v97);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11D8596;
  *v7 = v1;
  HIDWORD(v8) = sub_11D8584;
  v95 = v7;
  v96 = v8;
  ScreenController::registerButtonEventHandler((int)v1, v6, 0, 1, (int)&v95);
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  v9 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v97 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  sub_1590164((void **)&v94, "button.menu_settings");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v94);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11D85E2;
  *v11 = v1;
  HIDWORD(v12) = sub_11D85CC;
  v92 = v11;
  v93 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v92);
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  v13 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v94 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
  sub_1590164((void **)&v91, "button.menu_how_to_play");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v91);
  v15 = operator new(4u);
  LODWORD(v16) = sub_11D862C;
  *v15 = v1;
  HIDWORD(v16) = sub_11D8618;
  v89 = v15;
  v90 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v89);
  if ( (_DWORD)v90 )
    ((void (*)(void))v90)();
  v17 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v91 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v17);
  sub_1590164((void **)&v88, "button.menu_quit");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v88);
  v19 = operator new(4u);
  LODWORD(v20) = sub_11D8676;
  *v19 = v1;
  HIDWORD(v20) = sub_11D8662;
  v86 = v19;
  v87 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v86);
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  v21 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v88 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v21);
  sub_1590164((void **)&v85, "button.menu_buy_game");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v85);
  v23 = operator new(4u);
  LODWORD(v24) = sub_11D86BE;
  *v23 = v1;
  HIDWORD(v24) = sub_11D86AC;
  v83 = v23;
  v84 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v83);
  if ( (_DWORD)v84 )
    ((void (*)(void))v84)();
  v25 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v85 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v25);
  sub_1590164((void **)&v82, "button.menu_invite_players");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v82);
  v27 = operator new(4u);
  LODWORD(v28) = sub_11D8706;
  *v27 = v1;
  HIDWORD(v28) = sub_11D86F4;
  v80 = v27;
  v81 = v28;
  ScreenController::registerButtonClickHandler((int)v1, v26, (int)&v80);
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  v29 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v82 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v29);
  sub_1590164((void **)&v79, "button.menu_vr_realign");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v79);
  v31 = operator new(4u);
  LODWORD(v32) = sub_11D874E;
  *v31 = v1;
  HIDWORD(v32) = sub_11D873C;
  v77 = v31;
  v78 = v32;
  ScreenController::registerButtonClickHandler((int)v1, v30, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  v33 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v79 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v33);
  sub_1590164((void **)&v76, "button.menu_skins");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v76);
  v35 = operator new(4u);
  LODWORD(v36) = sub_11D8796;
  *v35 = v1;
  HIDWORD(v36) = sub_11D8784;
  v74 = v35;
  v75 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  v37 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v76 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v37);
  sub_1590164((void **)&v73, "button.menu_achievements");
  v38 = MinecraftScreenController::_getNameId(v1, (int **)&v73);
  v39 = operator new(4u);
  LODWORD(v40) = sub_11D87DE;
  *v39 = v1;
  HIDWORD(v40) = sub_11D87CC;
  v71 = v39;
  v72 = v40;
  ScreenController::registerButtonClickHandler((int)v1, v38, (int)&v71);
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  v41 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v73 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v41);
  sub_1590164((void **)&v70, "button.menu_permission");
  v42 = MinecraftScreenController::_getNameId(v1, (int **)&v70);
  v43 = operator new(4u);
  LODWORD(v44) = sub_11D8878;
  *v43 = v1;
  HIDWORD(v44) = sub_11D8814;
  v68 = v43;
  v69 = v44;
  ScreenController::registerButtonClickHandler((int)v1, v42, (int)&v68);
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  v45 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v70 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v45);
}


void __fastcall PauseScreenController::_registerBindings(PauseScreenController *this)
{
  PauseScreenController::_registerBindings(this);
}


int __fastcall PauseScreenController::handleGameEventNotification(int a1, int a2)
{
  int v2; // r6@1
  PauseScreenController *v3; // r5@1
  int v4; // r4@1

  v2 = a2;
  v3 = (PauseScreenController *)a1;
  v4 = ScreenController::handleGameEventNotification(a1);
  if ( (v2 | 1) == 3 )
  {
    PauseScreenController::_populateClientIds(v3);
    v4 |= 1u;
  }
  return v4;
}


void __fastcall PauseScreenController::_registerSubControllers(PauseScreenController *this)
{
  PauseScreenController::_registerSubControllers(this);
}


void __fastcall PauseScreenController::_getButtonKeyboardDescription(PauseScreenController *this)
{
  PauseScreenController::_getButtonKeyboardDescription(this);
}


void __fastcall PauseScreenController::_getButtonXDescription(PauseScreenController *this)
{
  int *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int v5; // [sp+4h] [bp-1Ch]@1

  v1 = (int *)this;
  sub_1590164((void **)&v5, "vr.pausescreen.recenterDevice");
  I18n::get(v1, (int **)&v5);
  v2 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v3 = (unsigned int *)(v5 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v2);
  }
}


void __fastcall PauseScreenController::_registerSubControllers(PauseScreenController *this)
{
  PauseScreenController *v1; // r4@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r2@4
  unsigned int v5; // r1@10
  int v6; // r0@13
  unsigned int *v7; // r2@14
  unsigned int v8; // r1@16
  unsigned int *v9; // r1@22
  unsigned int v10; // r0@24
  unsigned int *v11; // r0@30
  unsigned int v12; // r1@32
  int v13; // r4@35
  unsigned int *v14; // r1@36
  unsigned int v15; // r0@38
  unsigned int *v16; // r5@42
  unsigned int v17; // r0@44
  int v18; // r4@49
  unsigned int *v19; // r1@50
  unsigned int v20; // r0@52
  unsigned int *v21; // r5@56
  unsigned int v22; // r0@58
  int v23; // [sp+4h] [bp-24h]@29
  int v24; // [sp+8h] [bp-20h]@29
  int v25; // [sp+Ch] [bp-1Ch]@1
  int v26; // [sp+10h] [bp-18h]@1
  char v27; // [sp+14h] [bp-14h]@1

  v1 = this;
  std::__shared_ptr<UserDataScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<UserDataScreenController>,std::shared_ptr<ClientInstanceScreenModel> &>(
    (int)&v25,
    (int)&v27,
    (int)this + 424);
  v2 = *(_QWORD *)&v25;
  if ( v26 )
  {
    v3 = (unsigned int *)(v26 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
    *((_DWORD *)v1 + 112) = v2;
        v5 = __ldrex(v3);
      while ( __strex(v5 + 1, v3) );
  }
  else
    *((_DWORD *)v1 + 112) = v25;
  v6 = *((_DWORD *)v1 + 113);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  *((_DWORD *)v1 + 113) = HIDWORD(v2);
  if ( HIDWORD(v2) )
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  v23 = v25;
  v24 = v26;
    v11 = (unsigned int *)(v26 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
  ScreenController::_registerSubController((int)v1, (int)&v23);
  v13 = v24;
  if ( v24 )
    v14 = (unsigned int *)(v24 + 4);
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
  v18 = v26;
    v19 = (unsigned int *)(v26 + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      v21 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
}


ScreenController *__fastcall PauseScreenController::~PauseScreenController(PauseScreenController *this)
{
  PauseScreenController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  void *v5; // r0@9

  v1 = this;
  *(_DWORD *)this = &off_26E2B14;
  v2 = *((_DWORD *)this + 113);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  v5 = (void *)*((_DWORD *)v1 + 108);
  if ( v5 )
    operator delete(v5);
  return j_j_j__ZN30ClientInstanceScreenControllerD2Ev(v1);
}


void __fastcall PauseScreenController::addStaticScreenVars(PauseScreenController *this, Json::Value *a2)
{
  PauseScreenController::addStaticScreenVars(this, a2);
}


int __fastcall PauseScreenController::PauseScreenController(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r5@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@16
  int v12; // [sp+4h] [bp-1Ch]@1
  int v13; // [sp+8h] [bp-18h]@1

  v2 = a1;
  v12 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v13 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
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
  ClientInstanceScreenController::ClientInstanceScreenController(v2, (int)&v12);
  v6 = v13;
  if ( v13 )
    v7 = (unsigned int *)(v13 + 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
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
  *(_DWORD *)v2 = &off_26E2B14;
  *(_DWORD *)(v2 + 448) = 0;
  *(_DWORD *)(v2 + 452) = 0;
  *(_BYTE *)(v2 + 444) = 0;
  *(_DWORD *)(v2 + 440) = 0;
  *(_DWORD *)(v2 + 432) = 0;
  *(_DWORD *)(v2 + 436) = 0;
  PauseScreenController::_registerEventHandlers((PauseScreenController *)v2);
  PauseScreenController::_registerBindings((PauseScreenController *)v2);
  PauseScreenController::_registerSubControllers((PauseScreenController *)v2);
  return v2;
}
