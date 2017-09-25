

int __fastcall DlcProgressScreenController::_getDownloadProgress(DlcProgressScreenController *this)
{
  DlcBatchModel *v1; // r0@1

  v1 = (DlcBatchModel *)MainMenuScreenModel::getDlcBatchModel(*((_DWORD *)this + 106), (unsigned __int64 *)this + 54);
  return j_j_j__ZNK13DlcBatchModel19getDownloadProgressEv(v1);
}


void *__fastcall DlcProgressScreenController::getTitleLabel(DlcProgressScreenController *this, int a2)
{
  void **v2; // r4@1
  DlcBatchModel *v3; // r5@1
  void *result; // r0@2

  v2 = (void **)this;
  v3 = (DlcBatchModel *)MainMenuScreenModel::getDlcBatchModel(*(_DWORD *)(a2 + 424), (unsigned __int64 *)(a2 + 432));
  if ( DlcBatchModel::isDownloading(v3) == 1 )
  {
    result = sub_119C884(v2, "progressScreen.message.downloadingContent");
  }
  else if ( DlcBatchModel::isImporting(v3) == 1 )
    result = sub_119C884(v2, "progressScreen.message.importingContent");
  else
    result = sub_119C854((int *)v2, (int *)&Util::EMPTY_STRING);
  return result;
}


__int64 __fastcall DlcProgressScreenController::_getDownloadedBytes(DlcProgressScreenController *this)
{
  DlcBatchModel *v1; // r0@1

  v1 = (DlcBatchModel *)MainMenuScreenModel::getDlcBatchModel(*((_DWORD *)this + 106), (unsigned __int64 *)this + 54);
  return j_j_j__ZNK13DlcBatchModel18getDownloadedBytesEv(v1);
}


void __fastcall DlcProgressScreenController::~DlcProgressScreenController(DlcProgressScreenController *this)
{
  DlcProgressScreenController::~DlcProgressScreenController(this);
}


int __fastcall DlcProgressScreenController::_canCancelDownload(DlcProgressScreenController *this)
{
  DlcBatchModel *v1; // r0@1

  v1 = (DlcBatchModel *)MainMenuScreenModel::getDlcBatchModel(*((_DWORD *)this + 106), (unsigned __int64 *)this + 54);
  return DlcBatchModel::isImporting(v1) ^ 1;
}


void __fastcall DlcProgressScreenController::~DlcProgressScreenController(DlcProgressScreenController *this)
{
  DlcProgressScreenController *v1; // r0@1

  v1 = DlcProgressScreenController::~DlcProgressScreenController(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall DlcProgressScreenController::tick(DlcProgressScreenController *this)
{
  DlcProgressScreenController *v1; // r5@1
  int v2; // r4@1
  DlcBatchModel *v3; // r0@1
  DlcBatchModel *v4; // r6@1
  signed int v5; // r0@1
  bool v6; // zf@1
  signed int v7; // r0@6

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  v3 = (DlcBatchModel *)MainMenuScreenModel::getDlcBatchModel(*((_DWORD *)v1 + 106), (unsigned __int64 *)v1 + 54);
  v4 = v3;
  v5 = DlcBatchModel::isDownloadActive(v3);
  v6 = v5 == 0;
  if ( !v5 )
    v6 = *((_BYTE *)v1 + 460) == 0;
  if ( v6 )
  {
    *((_BYTE *)v1 + 460) = 1;
    (*(void (__fastcall **)(DlcProgressScreenController *))(*(_DWORD *)v1 + 92))(v1);
    if ( *((_DWORD *)v1 + 113) )
    {
      v7 = DlcBatchModel::isFailed(v4);
      if ( !*((_DWORD *)v1 + 113) )
        sub_119C8E4();
      (*((void (__fastcall **)(_DWORD, _DWORD))v1 + 114))((char *)v1 + 444, v7 ^ 1);
    }
  }
  return v2 | 1;
}


void __fastcall DlcProgressScreenController::_registerBindings(DlcProgressScreenController *this)
{
  DlcProgressScreenController::_registerBindings(this);
}


void __fastcall DlcProgressScreenController::_registerEventHandlers(DlcProgressScreenController *this)
{
  DlcProgressScreenController::_registerEventHandlers(this);
}


unsigned int __fastcall DlcProgressScreenController::_getDownloadSize(DlcProgressScreenController *this)
{
  DlcBatchModel *v1; // r0@1

  v1 = (DlcBatchModel *)MainMenuScreenModel::getDlcBatchModel(*((_DWORD *)this + 106), (unsigned __int64 *)this + 54);
  return j_j_j__ZNK13DlcBatchModel15getDownloadSizeEv(v1);
}


void __fastcall DlcProgressScreenController::_registerEventHandlers(DlcProgressScreenController *this)
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
  sub_119C884((void **)&v10, "button.file_upload_cancel");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_118F77A;
  *v3 = v1;
  HIDWORD(v4) = sub_118F758;
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
}


void __fastcall DlcProgressScreenController::_registerBindings(DlcProgressScreenController *this)
{
  DlcProgressScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  __int64 v5; // r1@5
  __int64 v6; // r1@9
  _DWORD *v7; // r0@13
  __int64 v8; // r1@13
  __int64 v9; // r1@13
  __int64 v10; // r1@17
  _DWORD *v11; // r0@21
  __int64 v12; // r1@21
  __int64 v13; // r1@21
  __int64 v14; // r1@25
  __int64 v15; // r1@29
  __int64 v16; // r1@33
  _DWORD *v17; // r0@37
  __int64 v18; // r1@37
  __int64 v19; // r1@37
  _DWORD *v20; // r0@41
  __int64 v21; // r1@41
  __int64 v22; // r1@41
  void *v23; // [sp+4h] [bp-194h]@41
  __int64 v24; // [sp+Ch] [bp-18Ch]@41
  _DWORD *v25; // [sp+14h] [bp-184h]@41
  __int64 v26; // [sp+1Ch] [bp-17Ch]@41
  int v27; // [sp+24h] [bp-174h]@41
  void *v28; // [sp+28h] [bp-170h]@37
  __int64 v29; // [sp+30h] [bp-168h]@37
  _DWORD *v30; // [sp+38h] [bp-160h]@37
  __int64 v31; // [sp+40h] [bp-158h]@37
  int v32; // [sp+48h] [bp-150h]@37
  void *v33; // [sp+4Ch] [bp-14Ch]@33
  __int64 v34; // [sp+54h] [bp-144h]@33
  void *v35; // [sp+5Ch] [bp-13Ch]@33
  void (*v36)(void); // [sp+64h] [bp-134h]@33
  int (*v37)(); // [sp+68h] [bp-130h]@33
  int v38; // [sp+6Ch] [bp-12Ch]@33
  void *v39; // [sp+70h] [bp-128h]@29
  __int64 v40; // [sp+78h] [bp-120h]@29
  void *v41; // [sp+80h] [bp-118h]@29
  void (*v42)(void); // [sp+88h] [bp-110h]@29
  signed int (*v43)(); // [sp+8Ch] [bp-10Ch]@29
  int v44; // [sp+90h] [bp-108h]@29
  void *v45; // [sp+94h] [bp-104h]@25
  __int64 v46; // [sp+9Ch] [bp-FCh]@25
  void *v47; // [sp+A4h] [bp-F4h]@25
  void (*v48)(void); // [sp+ACh] [bp-ECh]@25
  int (*v49)(); // [sp+B0h] [bp-E8h]@25
  int v50; // [sp+B4h] [bp-E4h]@25
  void *v51; // [sp+B8h] [bp-E0h]@21
  __int64 v52; // [sp+C0h] [bp-D8h]@21
  _DWORD *v53; // [sp+C8h] [bp-D0h]@21
  __int64 v54; // [sp+D0h] [bp-C8h]@21
  int v55; // [sp+D8h] [bp-C0h]@21
  void *v56; // [sp+DCh] [bp-BCh]@17
  __int64 v57; // [sp+E4h] [bp-B4h]@17
  void *v58; // [sp+ECh] [bp-ACh]@17
  void (*v59)(void); // [sp+F4h] [bp-A4h]@17
  int (*v60)(); // [sp+F8h] [bp-A0h]@17
  int v61; // [sp+FCh] [bp-9Ch]@17
  void *v62; // [sp+100h] [bp-98h]@13
  __int64 v63; // [sp+108h] [bp-90h]@13
  _DWORD *v64; // [sp+110h] [bp-88h]@13
  __int64 v65; // [sp+118h] [bp-80h]@13
  int v66; // [sp+120h] [bp-78h]@13
  void *v67; // [sp+124h] [bp-74h]@9
  __int64 v68; // [sp+12Ch] [bp-6Ch]@9
  void *v69; // [sp+134h] [bp-64h]@9
  void (*v70)(void); // [sp+13Ch] [bp-5Ch]@9
  int (*v71)(); // [sp+140h] [bp-58h]@9
  int v72; // [sp+144h] [bp-54h]@9
  void *v73; // [sp+148h] [bp-50h]@5
  __int64 v74; // [sp+150h] [bp-48h]@5
  void *v75; // [sp+158h] [bp-40h]@5
  void (*v76)(void); // [sp+160h] [bp-38h]@5
  signed int (*v77)(); // [sp+164h] [bp-34h]@5
  int v78; // [sp+168h] [bp-30h]@5
  void *v79; // [sp+16Ch] [bp-2Ch]@1
  __int64 v80; // [sp+174h] [bp-24h]@1
  _DWORD *v81; // [sp+17Ch] [bp-1Ch]@1
  __int64 v82; // [sp+184h] [bp-14h]@1
  int v83; // [sp+18Ch] [bp-Ch]@1

  v1 = this;
  v83 = -562286346;
  v2 = operator new(4u);
  LODWORD(v3) = sub_118F7D8;
  *v2 = v1;
  HIDWORD(v3) = sub_118F7B0;
  v81 = v2;
  v82 = v3;
  v79 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v80 = v4;
  ScreenController::bindFloat((int)v1, &v83, (int)&v81, (int)&v79);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  if ( (_DWORD)v82 )
    ((void (*)(void))v82)();
  v78 = 885503002;
  v75 = operator new(1u);
  v76 = (void (*)(void))sub_118F812;
  v77 = sub_118F80E;
  v73 = operator new(1u);
  LODWORD(v5) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v5) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v74 = v5;
  ScreenController::bindBool((int)v1, &v78, (int)&v75, (int)&v73);
  if ( (_DWORD)v74 )
    ((void (*)(void))v74)();
  if ( v76 )
    v76();
  v72 = 33923360;
  v69 = operator new(1u);
  v70 = (void (*)(void))sub_118F844;
  v71 = sub_118F840;
  v67 = operator new(1u);
  LODWORD(v6) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v6) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v68 = v6;
  ScreenController::bindBool((int)v1, &v72, (int)&v69, (int)&v67);
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  if ( v70 )
    v70();
  v66 = -378600938;
  v7 = operator new(4u);
  LODWORD(v8) = sub_118F98C;
  *v7 = v1;
  HIDWORD(v8) = sub_118F874;
  v64 = v7;
  v65 = v8;
  v62 = operator new(1u);
  LODWORD(v9) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v9) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v63 = v9;
  ScreenController::bindString((int)v1, &v66, (int)&v64, (int)&v62);
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  v61 = 1339174216;
  v58 = operator new(1u);
  v59 = (void (*)(void))sub_118F9C6;
  v60 = sub_118F9C2;
  v56 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v57 = v10;
  ScreenController::bindBool((int)v1, &v61, (int)&v58, (int)&v56);
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  if ( v59 )
    v59();
  StringHash::StringHash<char [23]>(&v55, (int)"#cancel_button_visible");
  v11 = operator new(4u);
  LODWORD(v12) = sub_118FA10;
  *v11 = v1;
  HIDWORD(v12) = sub_118F9F4;
  v53 = v11;
  v54 = v12;
  v51 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v52 = v13;
  ScreenController::bindBool((int)v1, &v55, (int)&v53, (int)&v51);
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  StringHash::StringHash<char [25]>(&v50, (int)"#warning_button2_visible");
  v47 = operator new(1u);
  v48 = (void (*)(void))sub_118FA4A;
  v49 = sub_118FA46;
  v45 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v46 = v14;
  ScreenController::bindBool((int)v1, &v50, (int)&v47, (int)&v45);
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  if ( v48 )
    v48();
  StringHash::StringHash<char [24]>(&v44, (int)"#upload_content_visible");
  v41 = operator new(1u);
  v42 = (void (*)(void))sub_118FA7C;
  v43 = sub_118FA78;
  v39 = operator new(1u);
  LODWORD(v15) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v15) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v40 = v15;
  ScreenController::bindBool((int)v1, &v44, (int)&v41, (int)&v39);
  if ( (_DWORD)v40 )
    ((void (*)(void))v40)();
  if ( v42 )
    v42();
  StringHash::StringHash<char [25]>(&v38, (int)"#warning_content_visible");
  v35 = operator new(1u);
  v36 = (void (*)(void))sub_118FAAE;
  v37 = sub_118FAAA;
  v33 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v34 = v16;
  ScreenController::bindBool((int)v1, &v38, (int)&v35, (int)&v33);
  if ( (_DWORD)v34 )
    ((void (*)(void))v34)();
  if ( v36 )
    v36();
  v32 = 1566351654;
  v17 = operator new(4u);
  LODWORD(v18) = sub_118FB00;
  *v17 = v1;
  HIDWORD(v18) = sub_118FADC;
  v30 = v17;
  v31 = v18;
  v28 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v29 = v19;
  ScreenController::bindString((int)v1, &v32, (int)&v30, (int)&v28);
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
  if ( (_DWORD)v31 )
    ((void (*)(void))v31)();
  v27 = -625024179;
  v20 = operator new(4u);
  LODWORD(v21) = sub_118FB5A;
  *v20 = v1;
  HIDWORD(v21) = sub_118FB36;
  v25 = v20;
  v26 = v21;
  v23 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v24 = v22;
  ScreenController::bindString((int)v1, &v27, (int)&v25, (int)&v23);
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  if ( (_DWORD)v26 )
    ((void (*)(void))v26)();
}


signed int __fastcall DlcProgressScreenController::_isImporting(DlcProgressScreenController *this)
{
  DlcBatchModel *v1; // r0@1

  v1 = (DlcBatchModel *)MainMenuScreenModel::getDlcBatchModel(*((_DWORD *)this + 106), (unsigned __int64 *)this + 54);
  return j_j_j__ZNK13DlcBatchModel11isImportingEv(v1);
}


int __fastcall DlcProgressScreenController::DlcProgressScreenController(int a1, int a2, unsigned __int64 *a3, int a4, char a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r0@1
  unsigned __int64 *v8; // r8@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r7@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r6@14
  unsigned int v15; // r0@16
  void (__fastcall *v16)(int, int, signed int); // r3@21
  int v18; // [sp+8h] [bp-30h]@1
  int v19; // [sp+Ch] [bp-2Ch]@1

  v5 = a1;
  v18 = *(_DWORD *)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = a3;
  v19 = v7;
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
  MainMenuScreenController::MainMenuScreenController(v5, (int)&v18);
  v11 = v19;
  if ( v19 )
    v12 = (unsigned int *)(v19 + 4);
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
  *(_DWORD *)v5 = &off_26E1B90;
  std::vector<std::string,std::allocator<std::string>>::vector(v5 + 432, v8);
  *(_DWORD *)(v5 + 452) = 0;
  v16 = *(void (__fastcall **)(int, int, signed int))(v6 + 8);
  if ( v16 )
    v16(v5 + 444, v6, 2);
    *(_DWORD *)(v5 + 456) = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v5 + 452) = *(_DWORD *)(v6 + 8);
  *(_BYTE *)(v5 + 460) = 0;
  *(_BYTE *)(v5 + 461) = a5;
  DlcProgressScreenController::_registerEventHandlers((DlcProgressScreenController *)v5);
  DlcProgressScreenController::_registerBindings((DlcProgressScreenController *)v5);
  return v5;
}


DlcProgressScreenController *__fastcall DlcProgressScreenController::~DlcProgressScreenController(DlcProgressScreenController *this)
{
  DlcProgressScreenController *v1; // r10@1
  void (*v2)(void); // r3@1
  void *v3; // r5@3
  void *v4; // r7@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int *v7; // r0@13

  v1 = this;
  *(_DWORD *)this = &off_26E1B90;
  v2 = (void (*)(void))*((_DWORD *)this + 113);
  if ( v2 )
    v2();
  v4 = (void *)(*((_QWORD *)v1 + 54) >> 32);
  v3 = (void *)*((_QWORD *)v1 + 54);
  if ( v3 != v4 )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      v3 = (char *)v3 + 4;
    }
    while ( v3 != v4 );
    v3 = (void *)*((_DWORD *)v1 + 108);
  }
  if ( v3 )
    operator delete(v3);
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


int __fastcall DlcProgressScreenController::addStaticScreenVars(DlcProgressScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  DlcProgressScreenController *v3; // r5@1
  int v4; // r6@1
  int v6; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$show_close_button");
  Json::Value::Value((Json::Value *)&v6, *((_BYTE *)v3 + 461));
  Json::Value::operator=(v4, (const Json::Value *)&v6);
  Json::Value::~Value((Json::Value *)&v6);
  return ScreenController::addStaticScreenVars(v3, v2);
}
