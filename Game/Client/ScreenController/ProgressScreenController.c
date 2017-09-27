

int __fastcall ProgressScreenController::_getGamepadHelperVisible(ProgressScreenController *this)
{
  ProgressScreenController *v1; // r4@1
  signed int v2; // r0@1
  bool v3; // zf@1
  int result; // r0@4
  int v5; // r1@5
  int v6; // r5@5
  __int64 v7; // r2@6
  __int64 v8; // r0@6
  bool v9; // zf@8
  bool v10; // nf@8
  unsigned __int8 v11; // vf@8
  signed int v12; // r1@8
  signed int v13; // r3@8
  __int64 v14; // [sp+0h] [bp-18h]@5

  v1 = this;
  v2 = MinecraftScreenController::_getGamepadHelperVisible(this);
  v3 = v2 == 1;
  if ( v2 == 1 )
    v3 = *((_BYTE *)v1 + 569) == 0;
  if ( v3 )
  {
    v5 = *((_DWORD *)v1 + 95);
    v6 = (*(int (**)(void))(**((_DWORD **)v1 + 112) + 24))();
    sub_21E034C(&v14);
    if ( v6 & 0x40000000 )
    {
      result = 1;
    }
    else
      v7 = *((_QWORD *)v1 + 54);
      v8 = v14 - v7;
      LODWORD(v8) = 0;
      if ( (unsigned int)(v14 - v7) > 0x2A05F1FF )
        LODWORD(v8) = 1;
      v11 = __OFSUB__(HIDWORD(v8), 1);
      v9 = HIDWORD(v8) == 1;
      v10 = HIDWORD(v8) - 1 < 0;
      v12 = 0;
      v13 = 0;
      if ( !((unsigned __int8)(v10 ^ v11) | v9) )
        v12 = 1;
      if ( v9 )
        v12 = v8;
      if ( v6 < 0 )
        v13 = 1;
      result = v13 & v12;
  }
  else
    result = 0;
  return result;
}


int __fastcall ProgressScreenController::handleGameEventNotification(int a1, int a2)
{
  int v2; // r5@1

  v2 = a1;
  switch ( a2 )
  {
    case 5:
      (*(void (**)(void))(*(_DWORD *)a1 + 92))();
      break;
    case 9:
      MinecraftScreenModel::confirmResourcePackDownload(
        *(_DWORD *)(a1 + 380),
        (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))3,
        0);
    case 8:
      *(_BYTE *)(a1 + 520) = 1;
  }
  return j_j_j__ZN16ScreenController27handleGameEventNotificationEN2ui21GameEventNotificationE_0(v2);
}


void __fastcall ProgressScreenController::_registerProgressBindings(ProgressScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  _DWORD *v6; // r0@4
  __int64 v7; // r1@4
  __int64 v8; // r1@4
  _DWORD *v9; // r0@8
  __int64 v10; // r1@8
  __int64 v11; // r1@8
  __int64 v12; // r1@12
  _DWORD *v13; // r0@16
  __int64 v14; // r1@16
  __int64 v15; // r1@16
  _DWORD *v16; // r0@20
  __int64 v17; // r1@20
  __int64 v18; // r1@20
  _DWORD *v19; // r0@24
  __int64 v20; // r1@24
  __int64 v21; // r1@24
  _DWORD *v22; // r0@28
  __int64 v23; // r1@28
  __int64 v24; // r1@28
  __int64 v25; // r1@32
  _DWORD *v26; // r0@36
  __int64 v27; // r1@36
  __int64 v28; // r1@36
  _DWORD *v29; // r0@40
  __int64 v30; // r1@40
  __int64 v31; // r1@40
  unsigned int *v32; // r2@45
  signed int v33; // r1@47
  void *v34; // [sp+4h] [bp-194h]@40
  __int64 v35; // [sp+Ch] [bp-18Ch]@40
  _DWORD *v36; // [sp+14h] [bp-184h]@40
  __int64 v37; // [sp+1Ch] [bp-17Ch]@40
  int v38; // [sp+24h] [bp-174h]@40
  void *v39; // [sp+28h] [bp-170h]@36
  __int64 v40; // [sp+30h] [bp-168h]@36
  _DWORD *v41; // [sp+38h] [bp-160h]@36
  __int64 v42; // [sp+40h] [bp-158h]@36
  int v43; // [sp+48h] [bp-150h]@36
  void *v44; // [sp+4Ch] [bp-14Ch]@32
  __int64 v45; // [sp+54h] [bp-144h]@32
  void *v46; // [sp+5Ch] [bp-13Ch]@32
  void (*v47)(void); // [sp+64h] [bp-134h]@32
  signed int (*v48)(); // [sp+68h] [bp-130h]@32
  int v49; // [sp+6Ch] [bp-12Ch]@32
  void *v50; // [sp+70h] [bp-128h]@28
  __int64 v51; // [sp+78h] [bp-120h]@28
  _DWORD *v52; // [sp+80h] [bp-118h]@28
  __int64 v53; // [sp+88h] [bp-110h]@28
  int v54; // [sp+90h] [bp-108h]@28
  void *v55; // [sp+94h] [bp-104h]@24
  __int64 v56; // [sp+9Ch] [bp-FCh]@24
  _DWORD *v57; // [sp+A4h] [bp-F4h]@24
  __int64 v58; // [sp+ACh] [bp-ECh]@24
  int v59; // [sp+B4h] [bp-E4h]@24
  void *v60; // [sp+B8h] [bp-E0h]@20
  __int64 v61; // [sp+C0h] [bp-D8h]@20
  _DWORD *v62; // [sp+C8h] [bp-D0h]@20
  __int64 v63; // [sp+D0h] [bp-C8h]@20
  int v64; // [sp+D8h] [bp-C0h]@20
  void *v65; // [sp+DCh] [bp-BCh]@16
  __int64 v66; // [sp+E4h] [bp-B4h]@16
  _DWORD *v67; // [sp+ECh] [bp-ACh]@16
  __int64 v68; // [sp+F4h] [bp-A4h]@16
  int v69; // [sp+FCh] [bp-9Ch]@16
  void *v70; // [sp+100h] [bp-98h]@12
  __int64 v71; // [sp+108h] [bp-90h]@12
  void *v72; // [sp+110h] [bp-88h]@12
  void (*v73)(void); // [sp+118h] [bp-80h]@12
  void **(__fastcall *v74)(void **); // [sp+11Ch] [bp-7Ch]@12
  int v75; // [sp+120h] [bp-78h]@12
  void *v76; // [sp+124h] [bp-74h]@8
  __int64 v77; // [sp+12Ch] [bp-6Ch]@8
  _DWORD *v78; // [sp+134h] [bp-64h]@8
  __int64 v79; // [sp+13Ch] [bp-5Ch]@8
  int v80; // [sp+144h] [bp-54h]@8
  void *v81; // [sp+148h] [bp-50h]@4
  __int64 v82; // [sp+150h] [bp-48h]@4
  _DWORD *v83; // [sp+158h] [bp-40h]@4
  __int64 v84; // [sp+160h] [bp-38h]@4
  int v85; // [sp+168h] [bp-30h]@4
  _DWORD *v86; // [sp+16Ch] [bp-2Ch]@1
  __int64 v87; // [sp+174h] [bp-24h]@1
  int v88; // [sp+180h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v88, "button.close_dialog");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v88);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11F991A;
  *v3 = v1;
  HIDWORD(v4) = sub_11F990C;
  v86 = v3;
  v87 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v86);
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  v5 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
  {
    v32 = (unsigned int *)(v88 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v85 = -900593982;
  v6 = operator new(4u);
  LODWORD(v7) = sub_11F9962;
  *v6 = v1;
  HIDWORD(v7) = sub_11F9950;
  v83 = v6;
  v84 = v7;
  v81 = operator new(1u);
  LODWORD(v8) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v8) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v82 = v8;
  ScreenController::bindString((int)v1, &v85, (int)&v83, (int)&v81);
  if ( (_DWORD)v82 )
    ((void (*)(void))v82)();
  if ( (_DWORD)v84 )
    ((void (*)(void))v84)();
  v80 = -2098303291;
  v9 = operator new(4u);
  LODWORD(v10) = sub_11F99E4;
  *v9 = v1;
  HIDWORD(v10) = sub_11F9998;
  v78 = v9;
  v79 = v10;
  v76 = operator new(1u);
  LODWORD(v11) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v11) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v77 = v11;
  ScreenController::bindString((int)v1, &v80, (int)&v78, (int)&v76);
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  if ( (_DWORD)v79 )
    ((void (*)(void))v79)();
  v75 = -172010765;
  v72 = operator new(1u);
  v73 = (void (*)(void))sub_11F9A34;
  v74 = sub_11F9A1C;
  v70 = operator new(1u);
  LODWORD(v12) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v12) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v71 = v12;
  ScreenController::bindString((int)v1, &v75, (int)&v72, (int)&v70);
  if ( (_DWORD)v71 )
    ((void (*)(void))v71)();
  if ( v73 )
    v73();
  v69 = 919585993;
  v13 = operator new(4u);
  LODWORD(v14) = sub_11F9AD8;
  *v13 = v1;
  HIDWORD(v14) = sub_11F9A62;
  v67 = v13;
  v68 = v14;
  v65 = operator new(1u);
  LODWORD(v15) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v15) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v66 = v15;
  ScreenController::bindBool((int)v1, &v69, (int)&v67, (int)&v65);
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  v64 = -465161749;
  v16 = operator new(4u);
  LODWORD(v17) = sub_11F9B82;
  *v16 = v1;
  HIDWORD(v17) = sub_11F9B0E;
  v62 = v16;
  v63 = v17;
  v60 = operator new(1u);
  LODWORD(v18) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v18) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v61 = v18;
  ScreenController::bindBool((int)v1, &v64, (int)&v62, (int)&v60);
  if ( (_DWORD)v61 )
    ((void (*)(void))v61)();
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  StringHash::StringHash<char [23]>(&v59, (int)"#bar_animation_visible");
  v19 = operator new(4u);
  LODWORD(v20) = sub_11F9C3C;
  *v19 = v1;
  HIDWORD(v20) = sub_11F9BB8;
  v57 = v19;
  v58 = v20;
  v55 = operator new(1u);
  LODWORD(v21) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v21) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v56 = v21;
  ScreenController::bindBool((int)v1, &v59, (int)&v57, (int)&v55);
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  v54 = 1545586701;
  v22 = operator new(4u);
  LODWORD(v23) = sub_11F9C8E;
  *v22 = v1;
  HIDWORD(v23) = sub_11F9C72;
  v52 = v22;
  v53 = v23;
  v50 = operator new(1u);
  LODWORD(v24) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v24) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v51 = v24;
  ScreenController::bindBool((int)v1, &v54, (int)&v52, (int)&v50);
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  if ( (_DWORD)v53 )
    ((void (*)(void))v53)();
  StringHash::StringHash<char [26]>(&v49, (int)"#loading_bar_total_amount");
  v46 = operator new(1u);
  v47 = (void (*)(void))sub_11F9CCC;
  v48 = sub_11F9CC4;
  v44 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v45 = v25;
  ScreenController::bindFloat((int)v1, &v49, (int)&v46, (int)&v44);
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  if ( v47 )
    v47();
  StringHash::StringHash<char [28]>(&v43, (int)"#loading_bar_current_amount");
  v26 = operator new(4u);
  LODWORD(v27) = sub_11F9D2C;
  *v26 = v1;
  HIDWORD(v27) = sub_11F9CFA;
  v41 = v26;
  v42 = v27;
  v39 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v40 = v28;
  ScreenController::bindFloat((int)v1, &v43, (int)&v41, (int)&v39);
  if ( (_DWORD)v40 )
    ((void (*)(void))v40)();
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
  StringHash::StringHash<char [24]>(&v38, (int)"#loading_bar_percentage");
  v29 = operator new(4u);
  LODWORD(v30) = sub_11F9DB4;
  *v29 = v1;
  HIDWORD(v30) = sub_11F9D64;
  v36 = v29;
  v37 = v30;
  v34 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v35 = v31;
  ScreenController::bindFloat((int)v1, &v38, (int)&v36, (int)&v34);
  if ( (_DWORD)v35 )
    ((void (*)(void))v35)();
  if ( (_DWORD)v37 )
    ((void (*)(void))v37)();
}


int __fastcall ProgressScreenController::_isInCancellableState(ProgressScreenController *this)
{
  ProgressScreenController *v1; // r4@1
  int result; // r0@2
  int v3; // r1@3
  int v4; // r5@3
  __int64 v5; // r2@4
  __int64 v6; // r0@4
  bool v7; // zf@6
  bool v8; // nf@6
  unsigned __int8 v9; // vf@6
  signed int v10; // r1@6
  signed int v11; // r3@6
  __int64 v12; // [sp+0h] [bp-18h]@3

  v1 = this;
  if ( *((_BYTE *)this + 569) )
  {
    result = 0;
  }
  else
    v3 = *((_DWORD *)this + 95);
    v4 = (*(int (**)(void))(**((_DWORD **)this + 112) + 24))();
    sub_21E034C(&v12);
    if ( v4 & 0x40000000 )
    {
      result = 1;
    }
    else
      v5 = *((_QWORD *)v1 + 54);
      v6 = v12 - v5;
      LODWORD(v6) = 0;
      if ( (unsigned int)(v12 - v5) > 0x2A05F1FF )
        LODWORD(v6) = 1;
      v9 = __OFSUB__(HIDWORD(v6), 1);
      v7 = HIDWORD(v6) == 1;
      v8 = HIDWORD(v6) - 1 < 0;
      v10 = 0;
      v11 = 0;
      if ( !((unsigned __int8)(v8 ^ v9) | v7) )
        v10 = 1;
      if ( v7 )
        v10 = v6;
      if ( v4 < 0 )
        v11 = 1;
      result = v11 & v10;
  return result;
}


ProgressScreenController *__fastcall ProgressScreenController::~ProgressScreenController(ProgressScreenController *this)
{
  ProgressScreenController *v1; // r11@1
  Scheduler *v2; // r5@1
  int v3; // r0@1
  unsigned int v4; // r0@1
  void *v5; // r0@1
  void *v6; // r5@3
  void *v7; // r7@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int *v10; // r0@13
  void *v11; // r5@18
  void *v12; // r7@18
  unsigned int *v13; // r2@20
  signed int v14; // r1@22
  int *v15; // r0@28
  void *v16; // r5@33
  void *v17; // r7@33
  unsigned int *v18; // r2@35
  signed int v19; // r1@37
  int *v20; // r0@43
  int v21; // r0@48
  int v22; // r1@50
  void *v23; // r0@50
  unsigned int *v25; // r2@52
  signed int v26; // r1@54

  v1 = this;
  *(_DWORD *)this = &off_26E2D60;
  v2 = (Scheduler *)Scheduler::singleton((Scheduler *)&off_26E2D60);
  v3 = MinecraftScreenModel::getHoloInput(*((MinecraftScreenModel **)v1 + 95));
  v4 = (*(int (**)(void))(*(_DWORD *)v3 + 48))();
  Scheduler::setTargetFPS(v2, v4);
  v5 = (void *)*((_DWORD *)v1 + 137);
  if ( v5 )
    operator delete(v5);
  v7 = (void *)(*((_QWORD *)v1 + 67) >> 32);
  v6 = (void *)*((_QWORD *)v1 + 67);
  if ( v6 != v7 )
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v6 = (char *)v6 + 4;
    }
    while ( v6 != v7 );
    v6 = (void *)*((_DWORD *)v1 + 134);
  }
  if ( v6 )
    operator delete(v6);
  v12 = (void *)(*(_QWORD *)((char *)v1 + 524) >> 32);
  v11 = (void *)*(_QWORD *)((char *)v1 + 524);
  if ( v11 != v12 )
      v15 = (int *)(*(_DWORD *)v11 - 12);
      if ( v15 != &dword_28898C0 )
        v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v11 = (char *)v11 + 4;
    while ( v11 != v12 );
    v11 = (void *)*((_DWORD *)v1 + 131);
  if ( v11 )
    operator delete(v11);
  v17 = (void *)(*((_QWORD *)v1 + 62) >> 32);
  v16 = (void *)*((_QWORD *)v1 + 62);
  if ( v16 != v17 )
      v20 = (int *)(*(_DWORD *)v16 - 12);
      if ( v20 != &dword_28898C0 )
        v18 = (unsigned int *)(*(_DWORD *)v16 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v16 = (char *)v16 + 4;
    while ( v16 != v17 );
    v16 = (void *)*((_DWORD *)v1 + 124);
  if ( v16 )
    operator delete(v16);
  std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::~deque((int)v1 + 452);
  v21 = *((_DWORD *)v1 + 112);
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  *((_DWORD *)v1 + 112) = 0;
  v22 = *((_DWORD *)v1 + 111);
  v23 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


int __fastcall ProgressScreenController::_setupProgressScreen(ProgressScreenController *this, bool a2)
{
  ProgressScreenController *v2; // r4@1
  int v3; // r0@1
  Scheduler *v4; // r0@1
  Scheduler *v5; // r6@1
  Scheduler *v6; // r0@1
  Scheduler *v7; // r5@1
  int v8; // r0@2
  unsigned int v9; // r1@2

  v2 = this;
  MinecraftScreenController::_setExitBehavior((int)this, 3);
  v3 = MinecraftScreenModel::getHoloInput(*((MinecraftScreenModel **)v2 + 95));
  v4 = (Scheduler *)(*(int (**)(void))(*(_DWORD *)v3 + 76))();
  v5 = v4;
  v6 = (Scheduler *)Scheduler::singleton(v4);
  v7 = v6;
  if ( v5 == (Scheduler *)1 )
  {
    v8 = MinecraftScreenModel::getHoloInput(*((MinecraftScreenModel **)v2 + 95));
    v9 = (*(int (**)(void))(*(_DWORD *)v8 + 48))();
    v6 = v7;
  }
  else
    v9 = 5;
  Scheduler::setTargetFPS(v6, v9);
  ProgressScreenController::_registerEventHandlers(v2);
  ProgressScreenController::_registerProgressBindings(v2);
  return j_j_j__ZN20MinecraftScreenModel30waitingResourcePackConfimationEv(*((MinecraftScreenModel **)v2 + 95));
}


void __fastcall ProgressScreenController::_registerProgressBindings(ProgressScreenController *this)
{
  ProgressScreenController::_registerProgressBindings(this);
}


const void **__fastcall ProgressScreenController::getAdditionalScreenInfo(ProgressScreenController *this, int a2)
{
  const void **v2; // r5@1
  int v3; // r4@1

  v2 = (const void **)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  sub_21E6FCC((const void **)this, *(_DWORD *)(*(_DWORD *)(a2 + 444) - 12) + 3);
  sub_21E7408(v2, " - ", 3u);
  return sub_21E72F0(v2, (const void **)(v3 + 444));
}


int __fastcall ProgressScreenController::ProgressScreenController(int a1, int a2, int *a3, int a4, int a5, char a6, char a7)
{
  int v7; // r4@1
  int v8; // r6@1
  int v9; // r0@1
  int *v10; // r8@1
  unsigned int *v11; // r0@2
  unsigned int v12; // r1@4
  int v13; // r5@7
  unsigned int *v14; // r1@8
  unsigned int v15; // r0@10
  unsigned int *v16; // r7@14
  unsigned int v17; // r0@16
  __int64 v18; // kr00_8@21
  __int64 v19; // r2@21
  __int64 v20; // kr08_8@21
  __int64 v21; // kr10_8@21
  __int64 v22; // r2@21
  __int64 v23; // kr18_8@21
  int v24; // r0@21
  int v25; // r0@21
  int *v26; // r0@21
  int v27; // r1@21
  int v28; // r0@21
  int *v29; // r5@23
  int v30; // r0@23
  int v31; // r0@26
  int v32; // r0@29
  int v34; // [sp+Ch] [bp-3Ch]@1
  int v35; // [sp+10h] [bp-38h]@1

  v7 = a1;
  v34 = *(_DWORD *)a2;
  v8 = a4;
  v9 = *(_DWORD *)(a2 + 4);
  v10 = a3;
  v35 = v9;
  if ( v9 )
  {
    v11 = (unsigned int *)(v9 + 4);
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
  MinecraftScreenController::MinecraftScreenController(v7, (MinecraftScreenModel **)&v34);
  v13 = v35;
  if ( v35 )
    v14 = (unsigned int *)(v35 + 4);
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
  *(_DWORD *)v7 = &off_26E2D60;
  *(_BYTE *)(v7 + 421) = 0;
  *(_BYTE *)(v7 + 422) = 0;
  *(_BYTE *)(v7 + 423) = 0;
  *(_DWORD *)(v7 + 424) = 1061997773;
  *(_DWORD *)(v7 + 432) = 0;
  *(_DWORD *)(v7 + 436) = 0;
  *(_BYTE *)(v7 + 440) = 0;
  sub_21E8AF4((int *)(v7 + 444), v10);
  _aeabi_memclr4(v7 + 448, 44);
  std::_Deque_base<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::_M_initialize_map(
    v7 + 452,
    0);
  *(_BYTE *)(v7 + 492) = a6;
  *(_BYTE *)(v7 + 493) = 0;
  *(_DWORD *)(v7 + 496) = 0;
  *(_DWORD *)(v7 + 500) = 0;
  *(_DWORD *)(v7 + 504) = 0;
  *(_DWORD *)(v7 + 508) = -1;
  *(_DWORD *)(v7 + 512) = 0;
  *(_DWORD *)(v7 + 516) = 0;
  *(_BYTE *)(v7 + 520) = 0;
  _aeabi_memclr4(v7 + 524, 45);
  *(_BYTE *)(v7 + 569) = a7;
  std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::clear(v7 + 452);
  v18 = *(_QWORD *)(v7 + 460);
  v19 = *(_QWORD *)(v7 + 468);
  v20 = *(_QWORD *)(v8 + 8);
  *(_QWORD *)(v7 + 468) = *(_QWORD *)(v8 + 16);
  *(_QWORD *)(v7 + 460) = v20;
  *(_QWORD *)(v8 + 8) = v18;
  *(_QWORD *)(v8 + 16) = v19;
  v21 = *(_QWORD *)(v7 + 476);
  v22 = *(_QWORD *)(v7 + 484);
  v23 = *(_QWORD *)(v8 + 24);
  *(_QWORD *)(v7 + 484) = *(_QWORD *)(v8 + 32);
  *(_QWORD *)(v7 + 476) = v23;
  *(_QWORD *)(v8 + 24) = v21;
  *(_QWORD *)(v8 + 32) = v22;
  v24 = *(_DWORD *)(v7 + 452);
  *(_DWORD *)(v7 + 452) = *(_DWORD *)v8;
  *(_DWORD *)v8 = v24;
  v25 = *(_DWORD *)(v7 + 456);
  *(_DWORD *)(v7 + 456) = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(v8 + 4) = v25;
  v26 = *(int **)(v7 + 460);
  v27 = *v26;
  *v26 = 0;
  v28 = *(_DWORD *)(v7 + 448);
  *(_DWORD *)(v7 + 448) = v27;
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  v29 = *(int **)(v7 + 460);
  v30 = *v29;
  if ( v29 == (int *)(*(_DWORD *)(v7 + 468) - 4) )
    if ( v30 )
      (*(void (**)(void))(*(_DWORD *)v30 + 4))();
    *v29 = 0;
    operator delete(*(void **)(v7 + 464));
    v32 = *(_DWORD *)(v7 + 472);
    *(_DWORD *)(v7 + 472) = v32 + 4;
    v31 = *(_DWORD *)(v32 + 4);
    *(_DWORD *)(v7 + 464) = v31;
    *(_DWORD *)(v7 + 468) = v31 + 512;
  else
    v31 = *(_DWORD *)(v7 + 460) + 4;
  *(_DWORD *)(v7 + 460) = v31;
  ProgressScreenController::_setupProgressScreen((ProgressScreenController *)v7, 0);
  return v7;
}


__int64 __fastcall ProgressScreenController::_updateCurrentRandomProgressMessage(ProgressScreenController *this)
{
  ProgressScreenController *v1; // r4@1
  __int64 result; // r0@1
  unsigned int v3; // r0@2
  int v4; // r1@2
  signed int v5; // r2@2
  int v6; // r0@3
  int *v7; // r5@3
  int v8; // r6@3
  signed int v9; // r0@5
  unsigned int v10; // r1@5
  int v11; // [sp+0h] [bp-9F0h]@8
  unsigned int v12; // [sp+Ch] [bp-9E4h]@2
  unsigned int v13; // [sp+10h] [bp-9E0h]@2
  int v14; // [sp+9D0h] [bp-20h]@2
  char v15; // [sp+9D4h] [bp-1Ch]@2
  int v16; // [sp+9D8h] [bp-18h]@2
  int v17; // [sp+9DCh] [bp-14h]@4

  v1 = this;
  result = *((_QWORD *)this + 62);
  if ( (_DWORD)result != HIDWORD(result) )
  {
    v3 = sub_21E67AC((int)&Random::mRandomDevice);
    v12 = v3;
    v14 = 625;
    v4 = 0;
    v5 = 1;
    v15 = 0;
    v16 = 0;
    v13 = v3;
    do
    {
      v6 = v3 ^ (v3 >> 30);
      v7 = (int *)(&v12 + v4);
      v8 = v4++ + 1812433253 * v6;
      v3 = v5++ + 1812433253 * v6;
      v7[2] = v8 + 1;
    }
    while ( v4 != 397 );
    v14 = 624;
    v17 = 398;
      v9 = (*((_QWORD *)v1 + 62) >> 32) - *((_QWORD *)v1 + 62);
      v10 = 0;
      if ( v9 >> 2 )
        v10 = Random::_genRandInt32((Random *)&v12) % (v9 >> 2);
    while ( *((_DWORD *)v1 + 127) == v10 );
    *((_DWORD *)v1 + 127) = v10;
    sub_21E034C(&v11);
    result = *(_QWORD *)&v11;
    *((_QWORD *)v1 + 64) = *(_QWORD *)&v11;
  }
  return result;
}


void __fastcall ProgressScreenController::_registerEventHandlers(ProgressScreenController *this)
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
  sub_21E94B4((void **)&v10, "button.menu_exit");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11F98D6;
  *v3 = v1;
  HIDWORD(v4) = sub_11F982E;
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


void __fastcall ProgressScreenController::~ProgressScreenController(ProgressScreenController *this)
{
  ProgressScreenController *v1; // r0@1

  v1 = ProgressScreenController::~ProgressScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall ProgressScreenController::_getProgressMessage(ProgressScreenController *this, int a2)
{
  unsigned int v2; // r2@2
  __int64 v3; // kr00_8@3
  int v4; // r2@6

  if ( *(_BYTE *)(a2 + 492) )
  {
    v2 = *(_DWORD *)(a2 + 508);
    if ( (v2 & 0x80000000) != 0 || (v3 = *(_QWORD *)(a2 + 496), v2 >= (HIDWORD(v3) - (signed int)v3) >> 2) )
      sub_21E8AF4((int *)this, (int *)&Util::EMPTY_STRING);
    else
      I18n::get((int *)this, (int **)(v3 + 4 * v2));
  }
  else
    v4 = *(_DWORD *)(a2 + 380);
    (*(void (__fastcall **)(ProgressScreenController *))(**(_DWORD **)(a2 + 448) + 32))(this);
}


int __fastcall ProgressScreenController::tick(ProgressScreenController *this)
{
  ProgressScreenController *v1; // r11@1
  int v2; // r1@4
  unsigned int v3; // r0@5
  __int64 v4; // kr00_8@7
  _DWORD *v5; // r5@8
  int v6; // r5@9
  unsigned int *v7; // r2@10
  signed int v8; // r1@12
  int *v9; // r0@18
  void *v10; // r5@22
  int v11; // r7@22
  unsigned int *v12; // r2@24
  signed int v13; // r1@26
  int *v14; // r0@32
  unsigned int v15; // r0@38
  int v16; // r1@38
  signed int v17; // r2@38
  int v18; // r0@39
  int *v19; // r4@39
  int v20; // r5@39
  signed int v21; // r0@41
  unsigned int v22; // r1@41
  __int64 v23; // r2@45
  signed __int64 v24; // r0@45
  signed int v25; // r7@47
  unsigned int v26; // r0@53
  int v27; // r1@53
  signed int v28; // r2@53
  int v29; // r0@54
  int *v30; // r7@54
  int v31; // r4@54
  signed int v32; // r0@56
  unsigned int v33; // r1@56
  int v34; // r1@60
  int v35; // r0@60
  int v36; // r5@62
  void *v37; // r0@62
  void *v38; // r0@63
  unsigned int *v39; // r2@64
  signed int v40; // r1@66
  int v41; // r0@68
  int v42; // r1@69
  unsigned int *v43; // r2@79
  signed int v44; // r1@81
  int v45; // r5@86
  int v46; // r1@86
  int *v47; // r1@87
  int v48; // r2@87
  int v49; // r0@87
  int v50; // r6@89
  int v51; // r0@92
  int v52; // r0@95
  char *v53; // r0@99
  __int64 v54; // r1@99
  bool v55; // zf@99
  int v57; // [sp+4h] [bp-A34h]@62
  int v58; // [sp+Ch] [bp-A2Ch]@62
  __int64 v59; // [sp+10h] [bp-A28h]@45
  void *v60; // [sp+1Ch] [bp-A1Ch]@7
  void *v61; // [sp+20h] [bp-A18h]@7
  int v62; // [sp+24h] [bp-A14h]@7
  char v63; // [sp+28h] [bp-A10h]@4
  char v64; // [sp+30h] [bp-A08h]@9
  char v65; // [sp+38h] [bp-A00h]@44
  unsigned int v66; // [sp+40h] [bp-9F8h]@38
  unsigned int v67; // [sp+44h] [bp-9F4h]@38
  int v68; // [sp+A04h] [bp-34h]@38
  char v69; // [sp+A08h] [bp-30h]@38
  int v70; // [sp+A0Ch] [bp-2Ch]@38
  int v71; // [sp+A10h] [bp-28h]@40

  v1 = this;
  if ( *((_BYTE *)this + 568) )
  {
    if ( !*((_BYTE *)this + 421) && !MinecraftScreenModel::signinInProgress(*((MinecraftScreenModel **)this + 95)) )
    {
      v2 = *((_DWORD *)v1 + 95);
      (*(void (**)(void))(**((_DWORD **)v1 + 112) + 8))();
      *((_BYTE *)v1 + 421) = 1;
      sub_21E034C(&v63);
      *((_QWORD *)v1 + 54) = *(_QWORD *)&v63;
    }
    v3 = *((_WORD *)v1 + 246);
    if ( (_BYTE)v3 )
      if ( v3 > 0xFF )
      {
        sub_21E034C(&v59);
        v24 = 1000000000LL * ProgressScreenController::mRandomProgressMessageUpdateInterval;
        v23 = v59 - *((_QWORD *)v1 + 64);
        LODWORD(v24) = 0;
        if ( 1000000000 * (signed int)ProgressScreenController::mRandomProgressMessageUpdateInterval >= (unsigned int)v23 )
          LODWORD(v24) = 1;
        v25 = 0;
        if ( SHIDWORD(v24) >= SHIDWORD(v23) )
          v25 = 1;
        if ( HIDWORD(v24) == HIDWORD(v23) )
          v25 = v24;
        if ( !v25 && (unsigned int)*((_QWORD *)v1 + 62) != *((_QWORD *)v1 + 62) >> 32 )
        {
          v26 = sub_21E67AC((int)&Random::mRandomDevice);
          v66 = v26;
          v68 = 625;
          v27 = 0;
          v28 = 1;
          v69 = 0;
          v70 = 0;
          v67 = v26;
          do
          {
            v29 = v26 ^ (v26 >> 30);
            v30 = (int *)(&v66 + v27);
            v31 = v27++ + 1812433253 * v29;
            v26 = v28++ + 1812433253 * v29;
            v30[2] = v31 + 1;
          }
          while ( v27 != 397 );
          v68 = 624;
          v71 = 398;
            v32 = (*((_QWORD *)v1 + 62) >> 32) - *((_QWORD *)v1 + 62);
            v33 = 0;
            if ( v32 >> 2 )
              v33 = Random::_genRandInt32((Random *)&v66) % (v32 >> 2);
          while ( *((_DWORD *)v1 + 127) == v33 );
          *((_DWORD *)v1 + 127) = v33;
          sub_21E034C(&v65);
          *((_QWORD *)v1 + 64) = *(_QWORD *)&v65;
        }
      }
      else
        MinecraftScreenModel::readLoadingMessages((MinecraftScreenModel *)&v60, *((_DWORD *)v1 + 95));
        v4 = *((_QWORD *)v1 + 62);
        *((_DWORD *)v1 + 124) = v60;
        v60 = 0;
        *((_DWORD *)v1 + 125) = v61;
        v61 = 0;
        *((_DWORD *)v1 + 126) = v62;
        v62 = 0;
        if ( (_DWORD)v4 != HIDWORD(v4) )
          v5 = (_DWORD *)v4;
            v9 = (int *)(*v5 - 12);
            if ( v9 != &dword_28898C0 )
            {
              v7 = (unsigned int *)(*v5 - 4);
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
                j_j_j_j__ZdlPv_9(v9);
            }
            ++v5;
          while ( v5 != (_DWORD *)HIDWORD(v4) );
        if ( (_DWORD)v4 )
          operator delete((void *)v4);
        v11 = (int)v61;
        v10 = v60;
        if ( v60 != v61 )
            v14 = (int *)(*(_DWORD *)v10 - 12);
            if ( v14 != &dword_28898C0 )
              v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
                  v13 = __ldrex(v12);
                while ( __strex(v13 - 1, v12) );
                v13 = (*v12)--;
              if ( v13 <= 0 )
                j_j_j_j__ZdlPv_9(v14);
            v10 = (char *)v10 + 4;
          while ( v10 != (void *)v11 );
          v10 = v60;
        if ( v10 )
          operator delete(v10);
        *((_BYTE *)v1 + 493) = 1;
        if ( (unsigned int)*((_QWORD *)v1 + 62) != *((_QWORD *)v1 + 62) >> 32 )
          v15 = sub_21E67AC((int)&Random::mRandomDevice);
          v66 = v15;
          v16 = 0;
          v17 = 1;
          v67 = v15;
            v18 = v15 ^ (v15 >> 30);
            v19 = (int *)(&v66 + v16);
            v20 = v16++ + 1812433253 * v18;
            v15 = v17++ + 1812433253 * v18;
            v19[2] = v20 + 1;
          while ( v16 != 397 );
            v21 = (*((_QWORD *)v1 + 62) >> 32) - *((_QWORD *)v1 + 62);
            v22 = 0;
            if ( v21 >> 2 )
              v22 = Random::_genRandInt32((Random *)&v66) % (v21 >> 2);
          while ( *((_DWORD *)v1 + 127) == v22 );
          *((_DWORD *)v1 + 127) = v22;
    v34 = *((_DWORD *)v1 + 95);
    v35 = (*(int (**)(void))(**((_DWORD **)v1 + 112) + 24))() & 0x3FFFFFFF;
    if ( v35 == 16 )
      v41 = *((_DWORD *)v1 + 112);
      if ( *(_DWORD *)(v41 + 4) == 15 )
        v42 = *((_DWORD *)v1 + 95);
        (*(void (**)(void))(*(_DWORD *)v41 + 20))();
      else if ( *((_DWORD *)v1 + 119) == *((_DWORD *)v1 + 115) )
        if ( !*((_BYTE *)v1 + 440) )
          *((_BYTE *)v1 + 440) = 1;
        MinecraftScreenModel::setScreenFadeAlpha(*((MinecraftScreenModel **)v1 + 95), 1.0, 0.0);
        MinecraftScreenModel::navigateToGamePlayScreen(*((MinecraftScreenModel **)v1 + 95));
        if ( !MinecraftScreenModel::getVRShowComfortSelectScreen(*((MinecraftScreenModel **)v1 + 95)) )
          LOBYTE(ProgressScreenController::mHasShownVRControlScreen) = 1;
        if ( MinecraftScreenModel::shouldPushVRControlScreen(*((MinecraftScreenModel **)v1 + 95)) == 1
          && !(_BYTE)ProgressScreenController::mHasShownVRControlScreen )
          MinecraftScreenModel::navigateToVRSchemeScreen(*((MinecraftScreenModel **)v1 + 95), 1);
        *((_BYTE *)v1 + 422) = 1;
    else if ( v35 == 32 )
      v36 = *((_DWORD *)v1 + 95);
      sub_21E94B4((void **)&v58, (const char *)&unk_257BC67);
      sub_21E94B4((void **)&v57, "progressScreen.cantConnect");
      MinecraftScreenModel::navigateToDisconnectScreen(v36, &v58, &v57);
      v37 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v57 - 4);
        if ( &pthread_create )
          __dmb();
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
        else
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j__ZdlPv_9(v37);
      v38 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v58 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
    v45 = MinecraftScreenController::tick(v1);
    v46 = *((_DWORD *)v1 + 95);
    (*(void (**)(void))(**((_DWORD **)v1 + 112) + 12))();
    v6 = v45 | 1;
    if ( *((_BYTE *)v1 + 422) )
      *(_WORD *)((char *)v1 + 421) = 0;
      v47 = (int *)*((_DWORD *)v1 + 115);
      v48 = *v47;
      *v47 = 0;
      v49 = *((_DWORD *)v1 + 112);
      *((_DWORD *)v1 + 112) = v48;
      if ( v49 )
        (*(void (**)(void))(*(_DWORD *)v49 + 4))();
      v50 = *((_DWORD *)v1 + 115);
      if ( v50 == *((_DWORD *)v1 + 117) - 4 )
        if ( *(_DWORD *)v50 )
          (*(void (**)(void))(**(_DWORD **)v50 + 4))();
        *(_DWORD *)v50 = 0;
        operator delete(*((void **)v1 + 116));
        v52 = *((_DWORD *)v1 + 118);
        *((_DWORD *)v1 + 118) = v52 + 4;
        v51 = *(_DWORD *)(v52 + 4);
        *((_DWORD *)v1 + 116) = v51;
        *((_DWORD *)v1 + 117) = v51 + 512;
        v51 = *((_DWORD *)v1 + 115) + 4;
      *((_DWORD *)v1 + 115) = v51;
    if ( *((_BYTE *)v1 + 520) && *(_DWORD *)(*((_DWORD *)v1 + 112) + 4) == 3 )
      v53 = MinecraftScreenModel::getResourcePacksInfoData(*((MinecraftScreenModel **)v1 + 95));
      v54 = *(_QWORD *)(v53 + 4);
      v55 = (_DWORD)v54 == HIDWORD(v54);
      if ( (_DWORD)v54 == HIDWORD(v54) )
        v55 = (unsigned int)*((_QWORD *)v53 + 2) == *((_QWORD *)v53 + 2) >> 32;
      if ( v55 )
        MinecraftScreenModel::confirmResourcePackDownload(
          *((_DWORD *)v1 + 95),
          (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))3,
          0);
        ProgressScreenController::_openConfimationdDialog(v1);
      *((_BYTE *)v1 + 520) = 0;
  }
  else
    *((_BYTE *)this + 568) = 1;
    sub_21E034C(&v64);
    v6 = 0;
    *((_QWORD *)v1 + 54) = *(_QWORD *)&v64;
  return v6;
}


void __fastcall ProgressScreenController::_openConfimationdDialog(ProgressScreenController *this)
{
  ProgressScreenController *v1; // r8@1
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
  __int64 v14; // r1@10
  char *v15; // r9@14
  __int64 v16; // r6@14
  __int64 v17; // kr00_8@14
  int v18; // r2@15
  __int64 v19; // kr08_8@16
  __int64 v20; // kr10_8@17
  __int64 v21; // r4@17
  int v22; // r2@18
  __int64 v23; // r0@19
  bool v24; // zf@21
  int v25; // r9@24
  _DWORD *v26; // r0@24
  __int64 v27; // r1@24
  void *v28; // r0@26
  _QWORD *v29; // r0@27
  __int64 v30; // r1@27
  __int64 v31; // r1@27
  _QWORD *v32; // r0@31
  __int64 v33; // r1@31
  __int64 v34; // r1@31
  void *v35; // r0@35
  unsigned int *v36; // r2@36
  signed int v37; // r1@38
  _QWORD *v38; // r0@41
  __int64 v39; // r1@41
  __int64 v40; // r1@41
  _QWORD *v41; // r0@50
  __int64 v42; // r1@50
  __int64 v43; // r1@50
  _QWORD *v44; // r0@60
  __int64 v45; // r1@60
  __int64 v46; // r1@60
  unsigned int *v47; // r2@74
  signed int v48; // r1@76
  unsigned int *v49; // r2@78
  signed int v50; // r1@80
  unsigned int *v51; // r2@82
  signed int v52; // r1@84
  unsigned int *v53; // r12@102
  signed int v54; // r1@104
  int v55; // [sp+8h] [bp-180h]@64
  void *v56; // [sp+Ch] [bp-17Ch]@60
  __int64 v57; // [sp+14h] [bp-174h]@60
  _QWORD *v58; // [sp+1Ch] [bp-16Ch]@60
  __int64 v59; // [sp+24h] [bp-164h]@60
  int v60; // [sp+2Ch] [bp-15Ch]@60
  int v61; // [sp+34h] [bp-154h]@45
  void *v62; // [sp+38h] [bp-150h]@41
  __int64 v63; // [sp+40h] [bp-148h]@41
  _QWORD *v64; // [sp+48h] [bp-140h]@41
  __int64 v65; // [sp+50h] [bp-138h]@41
  int v66; // [sp+58h] [bp-130h]@41
  int v67; // [sp+60h] [bp-128h]@69
  int v68; // [sp+68h] [bp-120h]@55
  void *v69; // [sp+6Ch] [bp-11Ch]@50
  __int64 v70; // [sp+74h] [bp-114h]@50
  _QWORD *v71; // [sp+7Ch] [bp-10Ch]@50
  __int64 v72; // [sp+84h] [bp-104h]@50
  int v73; // [sp+8Ch] [bp-FCh]@50
  int v74; // [sp+94h] [bp-F4h]@35
  void *v75; // [sp+98h] [bp-F0h]@31
  __int64 v76; // [sp+A0h] [bp-E8h]@31
  _QWORD *v77; // [sp+A8h] [bp-E0h]@31
  __int64 v78; // [sp+B0h] [bp-D8h]@31
  int v79; // [sp+B8h] [bp-D0h]@31
  void *v80; // [sp+BCh] [bp-CCh]@27
  __int64 v81; // [sp+C4h] [bp-C4h]@27
  _QWORD *v82; // [sp+CCh] [bp-BCh]@27
  __int64 v83; // [sp+D4h] [bp-B4h]@27
  int v84; // [sp+DCh] [bp-ACh]@27
  _DWORD *v85; // [sp+E0h] [bp-A8h]@24
  __int64 v86; // [sp+E8h] [bp-A0h]@24
  int v87; // [sp+F4h] [bp-94h]@24
  void *v88; // [sp+F8h] [bp-90h]@10
  __int64 v89; // [sp+100h] [bp-88h]@10
  void *v90; // [sp+108h] [bp-80h]@10
  void (*v91)(void); // [sp+110h] [bp-78h]@10
  void **(__fastcall *v92)(void **); // [sp+114h] [bp-74h]@10
  int v93; // [sp+118h] [bp-70h]@10
  _DWORD *v94; // [sp+11Ch] [bp-6Ch]@7
  __int64 v95; // [sp+124h] [bp-64h]@7
  int v96; // [sp+130h] [bp-58h]@7
  _DWORD *v97; // [sp+134h] [bp-54h]@4
  __int64 v98; // [sp+13Ch] [bp-4Ch]@4
  int v99; // [sp+148h] [bp-40h]@4
  _DWORD *v100; // [sp+14Ch] [bp-3Ch]@1
  __int64 v101; // [sp+154h] [bp-34h]@1
  int v102; // [sp+160h] [bp-28h]@1

  v1 = this;
  sub_21E94B4((void **)&v102, "button.join_and_download_all");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v102);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11F9E06;
  *v3 = v1;
  HIDWORD(v4) = sub_11F9DEA;
  v100 = v3;
  v101 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v100);
  if ( (_DWORD)v101 )
    ((void (*)(void))v101)();
  v5 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
  {
    v47 = (unsigned int *)(v102 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
    }
    else
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v99, "button.leave");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v99);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11F9E7E;
  *v7 = v1;
  HIDWORD(v8) = sub_11F9E3C;
  v97 = v7;
  v98 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v97);
  if ( (_DWORD)v98 )
    ((void (*)(void))v98)();
  v9 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v99 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v96, "button.join");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v96);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11F9ED0;
  *v11 = v1;
  HIDWORD(v12) = sub_11F9EB4;
  v94 = v11;
  v95 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v94);
  if ( (_DWORD)v95 )
    ((void (*)(void))v95)();
  v13 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v96 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v93 = 1468804201;
  v90 = operator new(1u);
  v91 = (void (*)(void))sub_11F9F20;
  v92 = sub_11F9F08;
  v88 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v89 = v14;
  ScreenController::bindString((int)v1, &v93, (int)&v90, (int)&v88);
  if ( (_DWORD)v89 )
    ((void (*)(void))v89)();
  if ( v91 )
    v91();
  v15 = MinecraftScreenModel::getResourcePacksInfoData(*((MinecraftScreenModel **)v1 + 95));
  v16 = 0LL;
  v17 = *(_QWORD *)(v15 + 4);
  if ( (_DWORD)v17 != HIDWORD(v17) )
    v18 = v17;
    do
      v19 = *(_QWORD *)(v18 + 48);
      v18 += 64;
      v16 += v19;
    while ( HIDWORD(v17) != v18 );
  v20 = *((_QWORD *)v15 + 2);
  v21 = 0LL;
  if ( (_DWORD)v20 != HIDWORD(v20) )
    v22 = v20;
      v23 = *(_QWORD *)(v22 + 48);
      v22 += 64;
      v21 += v23;
    while ( HIDWORD(v20) != v22 );
  if ( (_DWORD)v17 == HIDWORD(v17) )
    if ( *v15 )
      v66 = 1120952141;
      v38 = operator new(8u);
      LODWORD(v39) = sub_11FAAAC;
      *v38 = v21;
      HIDWORD(v39) = sub_11FA81C;
      v64 = v38;
      v65 = v39;
      v62 = operator new(1u);
      LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
      v63 = v40;
      ScreenController::bindString((int)v1, &v66, (int)&v64, (int)&v62);
      if ( (_DWORD)v63 )
        ((void (*)(void))v63)();
      if ( (_DWORD)v65 )
        ((void (*)(void))v65)();
      sub_21E94B4((void **)&v61, "texture_pack_required");
      ProgressScreenController::_openModalDialog((int)v1, (const void **)&v61);
      v35 = (void *)(v61 - 12);
      if ( (int *)(v61 - 12) != &dword_28898C0 )
      {
        v36 = (unsigned int *)(v61 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          goto LABEL_99;
        }
        goto LABEL_98;
      }
      v60 = 1120952141;
      v44 = operator new(8u);
      LODWORD(v45) = sub_11FAD78;
      *v44 = v21;
      HIDWORD(v45) = sub_11FAAE8;
      v58 = v44;
      v59 = v45;
      v56 = operator new(1u);
      LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      HIDWORD(v46) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
      v57 = v46;
      ScreenController::bindString((int)v1, &v60, (int)&v58, (int)&v56);
      if ( (_DWORD)v57 )
        ((void (*)(void))v57)();
      if ( (_DWORD)v59 )
        ((void (*)(void))v59)();
      sub_21E94B4((void **)&v55, "texture_pack_optional");
      ProgressScreenController::_openModalDialog((int)v1, (const void **)&v55);
      v35 = (void *)(v55 - 12);
      if ( (int *)(v55 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v55 - 4);
  else
    v24 = (_DWORD)v20 == HIDWORD(v20);
    if ( (_DWORD)v20 != HIDWORD(v20) )
      v24 = *v15 == 0;
    if ( v24 )
      v73 = 1120952141;
      v41 = operator new(0x10u);
      LODWORD(v42) = sub_11FA7DC;
      *v41 = v16;
      HIDWORD(v42) = sub_11FA544;
      v41[1] = v21;
      v71 = v41;
      v72 = v42;
      v69 = operator new(1u);
      LODWORD(v43) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      HIDWORD(v43) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
      v70 = v43;
      ScreenController::bindString((int)v1, &v73, (int)&v71, (int)&v69);
      if ( (_DWORD)v70 )
        ((void (*)(void))v70)();
      if ( (_DWORD)v72 )
        ((void (*)(void))v72)();
      if ( (unsigned int)*((_QWORD *)v15 + 2) == *((_QWORD *)v15 + 2) >> 32 )
        sub_21E94B4((void **)&v67, "add_on_only");
        ProgressScreenController::_openModalDialog((int)v1, (const void **)&v67);
        v35 = (void *)(v67 - 12);
        if ( (int *)(v67 - 12) == &dword_28898C0 )
          return;
        v36 = (unsigned int *)(v67 - 4);
      else
        sub_21E94B4((void **)&v68, "add_on_with_texture_pack");
        ProgressScreenController::_openModalDialog((int)v1, (const void **)&v68);
        v35 = (void *)(v68 - 12);
        if ( (int *)(v68 - 12) == &dword_28898C0 )
        v36 = (unsigned int *)(v68 - 4);
      goto LABEL_98;
    sub_21E94B4((void **)&v87, "button.join_and_download_needed");
    v25 = MinecraftScreenController::_getNameId(v1, (int **)&v87);
    v26 = operator new(4u);
    LODWORD(v27) = sub_11F9F6A;
    *v26 = v1;
    HIDWORD(v27) = sub_11F9F4E;
    v85 = v26;
    v86 = v27;
    ScreenController::registerButtonClickHandler((int)v1, v25, (int)&v85);
    if ( (_DWORD)v86 )
      ((void (*)(void))v86)();
    v28 = (void *)(v87 - 12);
    if ( (int *)(v87 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v87 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    StringHash::StringHash<char [30]>(&v84, (int)"#join_and_download_everything");
    v29 = operator new(0x10u);
    LODWORD(v30) = sub_11FA238;
    *v29 = v16;
    HIDWORD(v30) = sub_11F9FA0;
    v29[1] = v21;
    v82 = v29;
    v83 = v30;
    v80 = operator new(1u);
    LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
    HIDWORD(v31) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v81 = v31;
    ScreenController::bindString((int)v1, &v84, (int)&v82, (int)&v80);
    if ( (_DWORD)v81 )
      ((void (*)(void))v81)();
    if ( (_DWORD)v83 )
      ((void (*)(void))v83)();
    StringHash::StringHash<char [31]>(&v79, (int)"#join_and_download_only_add_on");
    v32 = operator new(8u);
    LODWORD(v33) = sub_11FA508;
    *v32 = v16;
    HIDWORD(v33) = sub_11FA278;
    v77 = v32;
    v78 = v33;
    v75 = operator new(1u);
    LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
    HIDWORD(v34) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v76 = v34;
    ScreenController::bindString((int)v1, &v79, (int)&v77, (int)&v75);
    if ( (_DWORD)v76 )
      ((void (*)(void))v76)();
    if ( (_DWORD)v78 )
      ((void (*)(void))v78)();
    sub_21E94B4((void **)&v74, "add_on_with_optional_texture_pack");
    ProgressScreenController::_openModalDialog((int)v1, (const void **)&v74);
    v35 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v74 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        goto LABEL_99;
LABEL_98:
      v37 = (*v36)--;
LABEL_99:
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
      return;
}


int __fastcall ProgressScreenController::addStaticScreenVars(ProgressScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  int v4; // r6@1
  int v5; // r0@1
  int v10; // r6@1
  int v12; // r1@1
  int v14; // [sp+0h] [bp-38h]@1
  char v15; // [sp+10h] [bp-28h]@1

  v2 = a2;
  _R5 = this;
  v4 = Json::Value::operator[](a2, "$force_render_below");
  Json::Value::Value((Json::Value *)&v15, *((_BYTE *)_R5 + 423));
  Json::Value::operator=(v4, (const Json::Value *)&v15);
  Json::Value::~Value((Json::Value *)&v15);
  v5 = Json::Value::operator[](v2, "$background_fill_alpha");
  __asm { VLDR            S0, [R5,#0x1A8] }
  v10 = v5;
  __asm
  {
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  }
  Json::Value::Value((Json::Value *)&v14, v12, _R2);
  Json::Value::operator=(v10, (const Json::Value *)&v14);
  Json::Value::~Value((Json::Value *)&v14);
  return ScreenController::addStaticScreenVars(_R5, v2);
}


void __fastcall ProgressScreenController::_openConfimationdDialog(ProgressScreenController *this)
{
  ProgressScreenController::_openConfimationdDialog(this);
}


void __fastcall ProgressScreenController::_registerEventHandlers(ProgressScreenController *this)
{
  ProgressScreenController::_registerEventHandlers(this);
}


UIPropertyBag *__fastcall ProgressScreenController::_openModalDialog(int a1, const void **a2)
{
  int v2; // r4@1
  const void **v3; // r5@1
  int v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+8h] [bp-48h]@1
  char v10; // [sp+Fh] [bp-41h]@1
  char v11; // [sp+10h] [bp-40h]@1

  v2 = a1;
  v3 = a2;
  v4 = UIPropertyBag::UIPropertyBag((int)&v11);
  UIPropertyBag::set<char [13]>(v4, 4, "name", "popup_dialog");
  v10 = 1;
  UIPropertyBag::set<bool>((int)&v11, 9, "exclusive", &v10);
  UIPropertyBag::set<std::string>((int)&v11, 10, "control_id", v3);
  sub_21E94B4((void **)&v9, "popup_dialog_factory");
  if ( !*(_DWORD *)(v2 + 12) )
    sub_21E5F48();
  (*(void (__fastcall **)(int, int *, char *))(v2 + 16))(v2 + 4, &v9, &v11);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  return UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v11);
}


int __fastcall ProgressScreenController::ProgressScreenController(int a1, int a2, float a3, int *a4, int a5, char a6, int a7)
{
  int v7; // r4@1
  int *v8; // r7@1
  int v9; // r0@1
  int *v10; // r10@1
  unsigned int *v11; // r0@2
  unsigned int v12; // r1@4
  int v13; // r5@7
  unsigned int *v18; // r1@8
  unsigned int v19; // r0@10
  unsigned int *v20; // r6@14
  unsigned int v21; // r0@16
  int v22; // r1@21
  int v23; // r0@21
  int v25; // [sp+10h] [bp-48h]@1
  int v26; // [sp+14h] [bp-44h]@1

  v7 = a1;
  v25 = *(_DWORD *)a2;
  v8 = a4;
  v9 = *(_DWORD *)(a2 + 4);
  v10 = (int *)LODWORD(a3);
  v26 = v9;
  if ( v9 )
  {
    v11 = (unsigned int *)(v9 + 4);
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
  MinecraftScreenController::MinecraftScreenController(v7, (MinecraftScreenModel **)&v25);
  v13 = v26;
  __asm { VLDR            S16, [SP,#0x58+arg_8] }
  if ( v26 )
    v18 = (unsigned int *)(v26 + 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      v20 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  *(_DWORD *)v7 = &off_26E2D60;
  *(_BYTE *)(v7 + 421) = 0;
  *(_BYTE *)(v7 + 422) = 0;
  *(_BYTE *)(v7 + 423) = a6;
  __asm { VSTR            S16, [R4,#0x1A8] }
  *(_DWORD *)(v7 + 432) = 0;
  *(_DWORD *)(v7 + 436) = 0;
  *(_BYTE *)(v7 + 440) = 0;
  sub_21E8AF4((int *)(v7 + 444), v10);
  _aeabi_memclr4(v7 + 448, 44);
  std::_Deque_base<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::_M_initialize_map(
    v7 + 452,
    0);
  *(_BYTE *)(v7 + 492) = 0;
  *(_BYTE *)(v7 + 493) = 0;
  *(_DWORD *)(v7 + 496) = 0;
  *(_DWORD *)(v7 + 500) = 0;
  *(_DWORD *)(v7 + 504) = 0;
  *(_DWORD *)(v7 + 508) = -1;
  *(_DWORD *)(v7 + 512) = 0;
  *(_DWORD *)(v7 + 516) = 0;
  *(_BYTE *)(v7 + 520) = 0;
  _aeabi_memclr4(v7 + 524, 46);
  v22 = *v8;
  *v8 = 0;
  v23 = *(_DWORD *)(v7 + 448);
  *(_DWORD *)(v7 + 448) = v22;
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  ProgressScreenController::_setupProgressScreen((ProgressScreenController *)v7, 0);
  return v7;
}


int __fastcall ProgressScreenController::_getLoadingState(ProgressScreenController *this)
{
  int v1; // r1@1

  v1 = *((_DWORD *)this + 95);
  return (*(int (**)(void))(**((_DWORD **)this + 112) + 24))();
}


void __fastcall ProgressScreenController::_getCurrentRandomProgressMessage(ProgressScreenController *this, int a2)
{
  unsigned int v2; // r2@1
  __int64 v3; // kr00_8@2

  v2 = *(_DWORD *)(a2 + 508);
  if ( (v2 & 0x80000000) != 0 || (v3 = *(_QWORD *)(a2 + 496), v2 >= (HIDWORD(v3) - (signed int)v3) >> 2) )
    sub_21E8AF4((int *)this, (int *)&Util::EMPTY_STRING);
  else
    I18n::get((int *)this, (int **)(v3 + 4 * v2));
}


void __fastcall ProgressScreenController::~ProgressScreenController(ProgressScreenController *this)
{
  ProgressScreenController::~ProgressScreenController(this);
}
