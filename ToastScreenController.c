

int __fastcall ToastScreenController::_destroyToast(ToastScreenController *this)
{
  ToastScreenController *v1; // r5@1
  void *v2; // r0@2
  void *v3; // r0@3
  int result; // r0@4
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  int v9; // [sp+4h] [bp-2Ch]@1
  int v10; // [sp+Ch] [bp-24h]@1

  v1 = this;
  sub_21E94B4((void **)&v10, "toast_factory");
  sub_21E94B4((void **)&v9, "popup");
  if ( !*((_DWORD *)v1 + 7) )
    sub_21E5F48();
  (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 8))((char *)v1 + 20, &v10, &v9);
  v2 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  v3 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v10 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  result = 0;
  *((_BYTE *)v1 + 421) = 0;
  return result;
}


UIPropertyBag *__fastcall ToastScreenController::_spawnSplitscreenJoinPopup(int a1, const void **a2)
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
  UIPropertyBag::set<char [23]>(v4, 4, "name", "splitscreen_join_popup");
  UIPropertyBag::set<char [23]>((int)&v11, 10, "control_id", "splitscreen_join_popup");
  v10 = 1;
  UIPropertyBag::set<bool>((int)&v11, 9, "exclusive", &v10);
  UIPropertyBag::set<std::string>((int)&v11, 17, "$player_join_text", v3);
  sub_21E94B4((void **)&v9, "toast_factory");
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
  *(_BYTE *)(v2 + 422) = 1;
  return UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v11);
}


int __fastcall ToastScreenController::ToastScreenController(int a1, int a2)
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
  int v12; // [sp+0h] [bp-18h]@1
  int v13; // [sp+4h] [bp-14h]@1

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
  MinecraftScreenController::MinecraftScreenController(v2, (MinecraftScreenModel **)&v12);
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
  *(_DWORD *)v2 = &off_26E3B40;
  *(_WORD *)(v2 + 421) = 0;
  ToastScreenController::_registerBindings((ToastScreenController *)v2);
  ToastScreenController::_registerEvents((ToastScreenController *)v2);
  return v2;
}


void __fastcall ToastScreenController::_registerBindings(ToastScreenController *this)
{
  ToastScreenController::_registerBindings(this);
}


void __fastcall ToastScreenController::_registerEvents(ToastScreenController *this)
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
  sub_21E94B4((void **)&v10, "toast_end");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_12701F0;
  *v3 = v1;
  HIDWORD(v4) = sub_12701E2;
  v8 = v3;
  v9 = v4;
  ScreenController::registerAnimationEventHandler((int)v1, v2, (int)&v8);
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


int __fastcall ToastScreenController::tick(ToastScreenController *this)
{
  ToastScreenController *v1; // r4@1
  int v2; // r5@7
  void *v3; // r0@10
  unsigned int *v5; // r2@12
  signed int v6; // r1@14
  int v7; // [sp+4h] [bp-1Ch]@10

  v1 = this;
  if ( *((_BYTE *)this + 421) )
    goto LABEL_21;
  if ( MinecraftScreenModel::getNextToast(*((MinecraftScreenModel **)this + 95)) )
    ToastScreenController::_spawnToast((int)v1);
  if ( *((_BYTE *)v1 + 421) )
  {
LABEL_21:
    if ( MinecraftScreenModel::isLevelLoadingProgressScreen(*((MinecraftScreenModel **)v1 + 95)) == 1 )
      ToastScreenController::_destroyToast(v1);
  }
  v2 = *((_BYTE *)v1 + 422);
  if ( v2 != MinecraftScreenModel::getSplitscreenJoinPromptVisible(*((MinecraftScreenModel **)v1 + 95)) )
    if ( *((_BYTE *)v1 + 422) )
    {
      ToastScreenController::_destroySplitscreenJoinPopup(v1);
    }
    else
      MinecraftScreenModel::getSplitscreenJoinText((MinecraftScreenModel *)&v7, *((_DWORD *)v1 + 95));
      ToastScreenController::_spawnSplitscreenJoinPopup((int)v1, (const void **)&v7);
      v3 = (void *)(v7 - 12);
      if ( (int *)(v7 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v7 - 4);
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
          j_j_j_j__ZdlPv_9(v3);
      }
  return MinecraftScreenController::tick(v1);
}


void __fastcall ToastScreenController::~ToastScreenController(ToastScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MinecraftScreenController::~MinecraftScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall ToastScreenController::~ToastScreenController(ToastScreenController *this)
{
  ToastScreenController::~ToastScreenController(this);
}


UIPropertyBag *__fastcall ToastScreenController::_spawnToast(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  void *v3; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int v7; // [sp+8h] [bp-48h]@1
  char v8; // [sp+Fh] [bp-41h]@1
  char v9; // [sp+10h] [bp-40h]@1

  v1 = a1;
  v2 = UIPropertyBag::UIPropertyBag((int)&v9);
  UIPropertyBag::set<char [6]>(v2, 4, "name", "popup");
  UIPropertyBag::set<char [6]>((int)&v9, 10, "control_id", "popup");
  v8 = 1;
  UIPropertyBag::set<bool>((int)&v9, 9, "exclusive", &v8);
  sub_21E94B4((void **)&v7, "toast_factory");
  if ( !*(_DWORD *)(v1 + 12) )
    sub_21E5F48();
  (*(void (__fastcall **)(int, int *, char *))(v1 + 16))(v1 + 4, &v7, &v9);
  v3 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_BYTE *)(v1 + 421) = 1;
  return UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v9);
}


void __fastcall ToastScreenController::_registerEvents(ToastScreenController *this)
{
  ToastScreenController::_registerEvents(this);
}


Json::Value *__fastcall ToastScreenController::addStaticScreenVars(ToastScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  ScreenController *v3; // r5@1
  int v4; // r6@1
  int v11; // r1@1
  int v12; // r6@1
  int v15; // r1@1
  int v16; // r6@1
  int v19; // r1@1
  int v20; // r0@1
  int v21; // r0@1
  int v23; // [sp+0h] [bp-A8h]@1
  char v24; // [sp+10h] [bp-98h]@1
  char v25; // [sp+20h] [bp-88h]@1
  char v26; // [sp+30h] [bp-78h]@1
  char v27; // [sp+40h] [bp-68h]@1
  char v28; // [sp+50h] [bp-58h]@1
  char v29; // [sp+60h] [bp-48h]@1
  char v30; // [sp+70h] [bp-38h]@1
  char v31; // [sp+80h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$display_time");
  _R0 = &ToastMessage::DisplaySeconds;
  __asm
  {
    VLDR            S0, [R0]
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  }
  Json::Value::Value((Json::Value *)&v31, v11, _R2);
  Json::Value::operator=(v4, (const Json::Value *)&v31);
  Json::Value::~Value((Json::Value *)&v31);
  v12 = Json::Value::operator[](v2, "$transition_in_time");
  _R0 = &ToastMessage::TransitionInSeconds;
  Json::Value::Value((Json::Value *)&v30, v15, _R2);
  Json::Value::operator=(v12, (const Json::Value *)&v30);
  Json::Value::~Value((Json::Value *)&v30);
  v16 = Json::Value::operator[](v2, "$transition_out_time");
  _R0 = &ToastMessage::TransitionOutSeconds;
  Json::Value::Value((Json::Value *)&v29, v19, _R2);
  Json::Value::operator=(v16, (const Json::Value *)&v29);
  Json::Value::~Value((Json::Value *)&v29);
  Json::Value::Value(&v28, 0);
  Json::Value::Value((Json::Value *)&v27, "100%");
  Json::Value::append((Json::Value *)&v28, (const Json::Value *)&v27);
  Json::Value::~Value((Json::Value *)&v27);
  Json::Value::Value((Json::Value *)&v26, 26);
  Json::Value::append((Json::Value *)&v28, (const Json::Value *)&v26);
  Json::Value::~Value((Json::Value *)&v26);
  v20 = Json::Value::operator[](v2, "$popup_size");
  Json::Value::operator=(v20, (const Json::Value *)&v28);
  Json::Value::Value(&v25, 0);
  Json::Value::Value((Json::Value *)&v24, 0);
  Json::Value::append((Json::Value *)&v25, (const Json::Value *)&v24);
  Json::Value::~Value((Json::Value *)&v24);
  Json::Value::Value((Json::Value *)&v23, 26);
  Json::Value::append((Json::Value *)&v25, (const Json::Value *)&v23);
  Json::Value::~Value((Json::Value *)&v23);
  v21 = Json::Value::operator[](v2, "$popup_distance");
  Json::Value::operator=(v21, (const Json::Value *)&v25);
  ScreenController::addStaticScreenVars(v3, v2);
  Json::Value::~Value((Json::Value *)&v25);
  return Json::Value::~Value((Json::Value *)&v28);
}


int __fastcall ToastScreenController::_destroySplitscreenJoinPopup(ToastScreenController *this)
{
  ToastScreenController *v1; // r5@1
  void *v2; // r0@2
  void *v3; // r0@3
  int result; // r0@4
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  int v9; // [sp+4h] [bp-2Ch]@1
  int v10; // [sp+Ch] [bp-24h]@1

  v1 = this;
  sub_21E94B4((void **)&v10, "toast_factory");
  sub_21E94B4((void **)&v9, "splitscreen_join_popup");
  if ( !*((_DWORD *)v1 + 7) )
    sub_21E5F48();
  (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 8))((char *)v1 + 20, &v10, &v9);
  v2 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  v3 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v10 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  result = 0;
  *((_BYTE *)v1 + 422) = 0;
  return result;
}


void __fastcall ToastScreenController::_registerBindings(ToastScreenController *this)
{
  ToastScreenController *v1; // r4@1
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
  void *v26; // [sp+0h] [bp-128h]@29
  __int64 v27; // [sp+8h] [bp-120h]@29
  _DWORD *v28; // [sp+10h] [bp-118h]@29
  __int64 v29; // [sp+18h] [bp-110h]@29
  int v30; // [sp+20h] [bp-108h]@29
  void *v31; // [sp+24h] [bp-104h]@25
  __int64 v32; // [sp+2Ch] [bp-FCh]@25
  _DWORD *v33; // [sp+34h] [bp-F4h]@25
  __int64 v34; // [sp+3Ch] [bp-ECh]@25
  int v35; // [sp+44h] [bp-E4h]@25
  void *v36; // [sp+48h] [bp-E0h]@21
  __int64 v37; // [sp+50h] [bp-D8h]@21
  _DWORD *v38; // [sp+58h] [bp-D0h]@21
  __int64 v39; // [sp+60h] [bp-C8h]@21
  int v40; // [sp+68h] [bp-C0h]@21
  void *v41; // [sp+6Ch] [bp-BCh]@17
  __int64 v42; // [sp+74h] [bp-B4h]@17
  _DWORD *v43; // [sp+7Ch] [bp-ACh]@17
  __int64 v44; // [sp+84h] [bp-A4h]@17
  int v45; // [sp+8Ch] [bp-9Ch]@17
  void *v46; // [sp+90h] [bp-98h]@13
  __int64 v47; // [sp+98h] [bp-90h]@13
  _DWORD *v48; // [sp+A0h] [bp-88h]@13
  __int64 v49; // [sp+A8h] [bp-80h]@13
  int v50; // [sp+B0h] [bp-78h]@13
  void *v51; // [sp+B4h] [bp-74h]@9
  __int64 v52; // [sp+BCh] [bp-6Ch]@9
  _DWORD *v53; // [sp+C4h] [bp-64h]@9
  __int64 v54; // [sp+CCh] [bp-5Ch]@9
  int v55; // [sp+D4h] [bp-54h]@9
  void *v56; // [sp+D8h] [bp-50h]@5
  __int64 v57; // [sp+E0h] [bp-48h]@5
  _DWORD *v58; // [sp+E8h] [bp-40h]@5
  __int64 v59; // [sp+F0h] [bp-38h]@5
  int v60; // [sp+F8h] [bp-30h]@5
  void *v61; // [sp+FCh] [bp-2Ch]@1
  __int64 v62; // [sp+104h] [bp-24h]@1
  _DWORD *v63; // [sp+10Ch] [bp-1Ch]@1
  __int64 v64; // [sp+114h] [bp-14h]@1
  int v65; // [sp+11Ch] [bp-Ch]@1

  v1 = this;
  v65 = -685761624;
  v2 = operator new(4u);
  LODWORD(v3) = sub_126FB40;
  *v2 = v1;
  HIDWORD(v3) = sub_126FB18;
  v63 = v2;
  v64 = v3;
  v61 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v62 = v4;
  ScreenController::bindString((int)v1, &v65, (int)&v63, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  v60 = 812963770;
  v5 = operator new(4u);
  LODWORD(v6) = sub_126FBA4;
  *v5 = v1;
  HIDWORD(v6) = sub_126FB78;
  v58 = v5;
  v59 = v6;
  v56 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v57 = v7;
  ScreenController::bindString((int)v1, &v60, (int)&v58, (int)&v56);
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  if ( (_DWORD)v59 )
    ((void (*)(void))v59)();
  v55 = 1484653558;
  v8 = operator new(4u);
  LODWORD(v9) = sub_126FBFC;
  *v8 = v1;
  HIDWORD(v9) = sub_126FBDA;
  v53 = v8;
  v54 = v9;
  v51 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v52 = v10;
  ScreenController::bindBool((int)v1, &v55, (int)&v53, (int)&v51);
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  v50 = -1581452513;
  v11 = operator new(4u);
  LODWORD(v12) = sub_126FC5A;
  *v11 = v1;
  HIDWORD(v12) = sub_126FC32;
  v48 = v11;
  v49 = v12;
  v46 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v47 = v13;
  ScreenController::bindBool((int)v1, &v50, (int)&v48, (int)&v46);
  if ( (_DWORD)v47 )
    ((void (*)(void))v47)();
  if ( (_DWORD)v49 )
    ((void (*)(void))v49)();
  v45 = 1242476094;
  v14 = operator new(4u);
  LODWORD(v15) = sub_126FD08;
  *v14 = v1;
  HIDWORD(v15) = sub_126FC90;
  v43 = v14;
  v44 = v15;
  v41 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v42 = v16;
  ScreenController::bindBool((int)v1, &v45, (int)&v43, (int)&v41);
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  v40 = -983422617;
  v17 = operator new(4u);
  LODWORD(v18) = sub_126FE94;
  *v17 = v1;
  HIDWORD(v18) = sub_126FD40;
  v38 = v17;
  v39 = v18;
  v36 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v37 = v19;
  ScreenController::bindString((int)v1, &v40, (int)&v38, (int)&v36);
  if ( (_DWORD)v37 )
    ((void (*)(void))v37)();
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  v35 = 1659133967;
  v20 = operator new(4u);
  LODWORD(v21) = sub_1270020;
  *v20 = v1;
  HIDWORD(v21) = sub_126FECC;
  v33 = v20;
  v34 = v21;
  v31 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v32 = v22;
  ScreenController::bindString((int)v1, &v35, (int)&v33, (int)&v31);
  if ( (_DWORD)v32 )
    ((void (*)(void))v32)();
  if ( (_DWORD)v34 )
    ((void (*)(void))v34)();
  v30 = -1417655854;
  v23 = operator new(4u);
  LODWORD(v24) = sub_12701AC;
  *v23 = v1;
  HIDWORD(v24) = sub_1270058;
  v28 = v23;
  v29 = v24;
  v26 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v27 = v25;
  ScreenController::bindString((int)v1, &v30, (int)&v28, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
}
