

int __fastcall LeaveLevelProgressScreenController::_getSavingState(LeaveLevelProgressScreenController *this)
{
  int v1; // r1@1

  v1 = *((_DWORD *)this + 95);
  return (*(int (**)(void))(**((_DWORD **)this + 109) + 24))();
}


int __fastcall LeaveLevelProgressScreenController::tick(LeaveLevelProgressScreenController *this)
{
  LeaveLevelProgressScreenController *v1; // r4@1
  int v2; // r1@2
  int v3; // r5@5
  int v4; // r5@7
  int v5; // r1@7
  int *v6; // r1@8
  int v7; // r2@8
  int v8; // r0@8
  int v9; // r6@10
  int v10; // r0@13
  int v11; // r0@16
  int v13; // [sp+0h] [bp-18h]@5

  v1 = this;
  if ( *((_BYTE *)this + 480) )
  {
    v2 = *((_DWORD *)this + 95);
    if ( (*(int (**)(void))(**((_DWORD **)this + 109) + 24))() == 16 )
    {
      if ( *((_DWORD *)v1 + 116) == *((_DWORD *)v1 + 112) )
      {
        MinecraftScreenModel::setScreenFadeAlpha(*((MinecraftScreenModel **)v1 + 95), 1.0, 0.0);
        MinecraftScreenModel::leaveScreen(*((MinecraftScreenModel **)v1 + 95));
        MinecraftScreenModel::destroyGame(*((MinecraftScreenModel **)v1 + 95));
      }
      else
        *((_BYTE *)v1 + 422) = 1;
    }
    v4 = MinecraftScreenController::tick(v1);
    v5 = *((_DWORD *)v1 + 95);
    (*(void (**)(void))(**((_DWORD **)v1 + 109) + 12))();
    v3 = v4 | 1;
    if ( *((_BYTE *)v1 + 422) )
      *(_WORD *)((char *)v1 + 421) = 0;
      v6 = (int *)*((_DWORD *)v1 + 112);
      v7 = *v6;
      *v6 = 0;
      v8 = *((_DWORD *)v1 + 109);
      *((_DWORD *)v1 + 109) = v7;
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 4))();
      v9 = *((_DWORD *)v1 + 112);
      if ( v9 == *((_DWORD *)v1 + 114) - 4 )
        if ( *(_DWORD *)v9 )
          (*(void (**)(void))(**(_DWORD **)v9 + 4))();
        *(_DWORD *)v9 = 0;
        operator delete(*((void **)v1 + 113));
        v11 = *((_DWORD *)v1 + 115);
        *((_DWORD *)v1 + 115) = v11 + 4;
        v10 = *(_DWORD *)(v11 + 4);
        *((_DWORD *)v1 + 113) = v10;
        *((_DWORD *)v1 + 114) = v10 + 512;
        v10 = *((_DWORD *)v1 + 112) + 4;
      *((_DWORD *)v1 + 112) = v10;
  }
  else
    *((_BYTE *)this + 480) = 1;
    sub_1590414(&v13);
    v3 = 0;
    *((_QWORD *)v1 + 53) = *(_QWORD *)&v13;
  return v3;
}


void __fastcall LeaveLevelProgressScreenController::_setupProgressScreen(LeaveLevelProgressScreenController *this, bool a2)
{
  LeaveLevelProgressScreenController *v2; // r4@1
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
  j_j_j__ZN34LeaveLevelProgressScreenController25_registerProgressBindingsEv(v2);
}


UIPropertyBag *__fastcall LeaveLevelProgressScreenController::_openModalDialog(int a1, const void **a2)
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
  sub_1590164((void **)&v9, "popup_dialog_factory");
  if ( !*(_DWORD *)(v2 + 12) )
    sub_1590214();
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
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  return UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v11);
}


void __fastcall LeaveLevelProgressScreenController::~LeaveLevelProgressScreenController(LeaveLevelProgressScreenController *this)
{
  LeaveLevelProgressScreenController *v1; // r0@1

  v1 = LeaveLevelProgressScreenController::~LeaveLevelProgressScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall LeaveLevelProgressScreenController::_registerProgressBindings(LeaveLevelProgressScreenController *this)
{
  LeaveLevelProgressScreenController *v1; // r4@1
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
  __int64 v15; // r1@21
  void *v16; // [sp+0h] [bp-E0h]@21
  __int64 v17; // [sp+8h] [bp-D8h]@21
  void *v18; // [sp+10h] [bp-D0h]@21
  void (*v19)(void); // [sp+18h] [bp-C8h]@21
  void **(__fastcall *v20)(void **); // [sp+1Ch] [bp-C4h]@21
  int v21; // [sp+20h] [bp-C0h]@21
  void *v22; // [sp+24h] [bp-BCh]@17
  __int64 v23; // [sp+2Ch] [bp-B4h]@17
  _DWORD *v24; // [sp+34h] [bp-ACh]@17
  __int64 v25; // [sp+3Ch] [bp-A4h]@17
  int v26; // [sp+44h] [bp-9Ch]@17
  void *v27; // [sp+48h] [bp-98h]@13
  __int64 v28; // [sp+50h] [bp-90h]@13
  _DWORD *v29; // [sp+58h] [bp-88h]@13
  __int64 v30; // [sp+60h] [bp-80h]@13
  int v31; // [sp+68h] [bp-78h]@13
  void *v32; // [sp+6Ch] [bp-74h]@9
  __int64 v33; // [sp+74h] [bp-6Ch]@9
  void *v34; // [sp+7Ch] [bp-64h]@9
  void (*v35)(void); // [sp+84h] [bp-5Ch]@9
  int (*v36)(); // [sp+88h] [bp-58h]@9
  int v37; // [sp+8Ch] [bp-54h]@9
  void *v38; // [sp+90h] [bp-50h]@5
  __int64 v39; // [sp+98h] [bp-48h]@5
  _DWORD *v40; // [sp+A0h] [bp-40h]@5
  __int64 v41; // [sp+A8h] [bp-38h]@5
  int v42; // [sp+B0h] [bp-30h]@5
  void *v43; // [sp+B4h] [bp-2Ch]@1
  __int64 v44; // [sp+BCh] [bp-24h]@1
  _DWORD *v45; // [sp+C4h] [bp-1Ch]@1
  __int64 v46; // [sp+CCh] [bp-14h]@1
  int v47; // [sp+D4h] [bp-Ch]@1

  v1 = this;
  v47 = 1545586701;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11BB562;
  *v2 = v1;
  HIDWORD(v3) = sub_11BB546;
  v45 = v2;
  v46 = v3;
  v43 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v44 = v4;
  ScreenController::bindBool((int)v1, &v47, (int)&v45, (int)&v43);
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  StringHash::StringHash<char [23]>(&v42, (int)"#bar_animation_visible");
  v5 = operator new(4u);
  LODWORD(v6) = sub_11BB5B0;
  *v5 = v1;
  HIDWORD(v6) = sub_11BB598;
  v40 = v5;
  v41 = v6;
  v38 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v39 = v7;
  ScreenController::bindBool((int)v1, &v42, (int)&v40, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  v37 = 919585993;
  v34 = operator new(1u);
  v35 = (void (*)(void))sub_11BB5EA;
  v36 = sub_11BB5E6;
  v32 = operator new(1u);
  LODWORD(v8) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v8) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v33 = v8;
  ScreenController::bindBool((int)v1, &v37, (int)&v34, (int)&v32);
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  if ( v35 )
    v35();
  v31 = -900593982;
  v9 = operator new(4u);
  LODWORD(v10) = sub_11BB62A;
  *v9 = v1;
  HIDWORD(v10) = sub_11BB618;
  v29 = v9;
  v30 = v10;
  v27 = operator new(1u);
  LODWORD(v11) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v11) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v28 = v11;
  ScreenController::bindString((int)v1, &v31, (int)&v29, (int)&v27);
  if ( (_DWORD)v28 )
    ((void (*)(void))v28)();
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  v26 = -2098303291;
  v12 = operator new(4u);
  LODWORD(v13) = sub_11BB676;
  *v12 = v1;
  HIDWORD(v13) = sub_11BB660;
  v24 = v12;
  v25 = v13;
  v22 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v23 = v14;
  ScreenController::bindString((int)v1, &v26, (int)&v24, (int)&v22);
  if ( (_DWORD)v23 )
    ((void (*)(void))v23)();
  if ( (_DWORD)v25 )
    ((void (*)(void))v25)();
  v21 = -172010765;
  v18 = operator new(1u);
  v19 = (void (*)(void))sub_11BB6C4;
  v20 = sub_11BB6AC;
  v16 = operator new(1u);
  LODWORD(v15) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v15) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v17 = v15;
  ScreenController::bindString((int)v1, &v21, (int)&v18, (int)&v16);
  if ( (_DWORD)v17 )
    ((void (*)(void))v17)();
  if ( v19 )
    v19();
}


const void **__fastcall LeaveLevelProgressScreenController::getAdditionalScreenInfo(LeaveLevelProgressScreenController *this, int a2)
{
  const void **v2; // r5@1
  int v3; // r4@1

  v2 = (const void **)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  sub_1590424((const void **)this, *(_DWORD *)(*(_DWORD *)(a2 + 432) - 12) + 3);
  sub_1590224(v2, " - ", 3u);
  return sub_1590394(v2, (const void **)(v3 + 432));
}


void __fastcall LeaveLevelProgressScreenController::_setupProgressScreen(LeaveLevelProgressScreenController *this, bool a2)
{
  LeaveLevelProgressScreenController::_setupProgressScreen(this, a2);
}


void __fastcall LeaveLevelProgressScreenController::~LeaveLevelProgressScreenController(LeaveLevelProgressScreenController *this)
{
  LeaveLevelProgressScreenController::~LeaveLevelProgressScreenController(this);
}


int __fastcall LeaveLevelProgressScreenController::addStaticScreenVars(LeaveLevelProgressScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  LeaveLevelProgressScreenController *v3; // r5@1
  int v4; // r6@1
  int v6; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$force_render_below");
  Json::Value::Value((Json::Value *)&v6, *((_BYTE *)v3 + 423));
  Json::Value::operator=(v4, (const Json::Value *)&v6);
  Json::Value::~Value((Json::Value *)&v6);
  return ScreenController::addStaticScreenVars(v3, v2);
}


void __fastcall LeaveLevelProgressScreenController::_registerProgressBindings(LeaveLevelProgressScreenController *this)
{
  LeaveLevelProgressScreenController::_registerProgressBindings(this);
}


int __fastcall LeaveLevelProgressScreenController::_getProgressMessage(LeaveLevelProgressScreenController *this, int a2)
{
  int v2; // r2@1

  v2 = *(_DWORD *)(a2 + 380);
  return (*(int (__fastcall **)(LeaveLevelProgressScreenController *))(**(_DWORD **)(a2 + 436) + 32))(this);
}


int __fastcall LeaveLevelProgressScreenController::LeaveLevelProgressScreenController(int a1, int a2, int *a3, int *a4, int a5, char a6)
{
  int v6; // r4@1
  int *v7; // r8@1
  int v8; // r0@1
  int *v9; // r6@1
  unsigned int *v10; // r0@2
  unsigned int v11; // r1@4
  int v12; // r5@7
  unsigned int *v13; // r1@8
  unsigned int v14; // r0@10
  unsigned int *v15; // r7@14
  unsigned int v16; // r0@16
  int v17; // r1@21
  int v18; // r0@21
  int v20; // [sp+0h] [bp-28h]@1
  int v21; // [sp+4h] [bp-24h]@1

  v6 = a1;
  v20 = *(_DWORD *)a2;
  v7 = a4;
  v8 = *(_DWORD *)(a2 + 4);
  v9 = a3;
  v21 = v8;
  if ( v8 )
  {
    v10 = (unsigned int *)(v8 + 4);
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
  MinecraftScreenController::MinecraftScreenController(v6, (MinecraftScreenModel **)&v20);
  v12 = v21;
  if ( v21 )
    v13 = (unsigned int *)(v21 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  *(_DWORD *)v6 = &off_26E2458;
  *(_BYTE *)(v6 + 421) = 0;
  *(_BYTE *)(v6 + 422) = 0;
  *(_BYTE *)(v6 + 423) = a6;
  *(_DWORD *)(v6 + 424) = 0;
  *(_DWORD *)(v6 + 428) = 0;
  sub_15901A4((int *)(v6 + 432), v9);
  _aeabi_memclr4(v6 + 436, 44);
  std::_Deque_base<std::unique_ptr<LeaveLevelProgressHandler,std::default_delete<LeaveLevelProgressHandler>>,std::allocator<std::unique_ptr<LeaveLevelProgressHandler,std::default_delete<LeaveLevelProgressHandler>>>>::_M_initialize_map(
    v6 + 440,
    0);
  *(_BYTE *)(v6 + 480) = 0;
  v17 = *v7;
  *v7 = 0;
  v18 = *(_DWORD *)(v6 + 436);
  *(_DWORD *)(v6 + 436) = v17;
  if ( v18 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v18 + 4))(v18);
  LeaveLevelProgressScreenController::_setupProgressScreen((LeaveLevelProgressScreenController *)v6, 0);
  return v6;
}


LeaveLevelProgressScreenController *__fastcall LeaveLevelProgressScreenController::~LeaveLevelProgressScreenController(LeaveLevelProgressScreenController *this)
{
  LeaveLevelProgressScreenController *v1; // r4@1
  Scheduler *v2; // r5@1
  int v3; // r0@1
  unsigned int v4; // r0@1
  int v5; // r0@1
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E2458;
  v2 = (Scheduler *)Scheduler::singleton((Scheduler *)&off_26E2458);
  v3 = MinecraftScreenModel::getHoloInput(*((MinecraftScreenModel **)v1 + 95));
  v4 = (*(int (**)(void))(*(_DWORD *)v3 + 48))();
  Scheduler::setTargetFPS(v2, v4);
  std::deque<std::unique_ptr<LeaveLevelProgressHandler,std::default_delete<LeaveLevelProgressHandler>>,std::allocator<std::unique_ptr<LeaveLevelProgressHandler,std::default_delete<LeaveLevelProgressHandler>>>>::~deque((int)v1 + 440);
  v5 = *((_DWORD *)v1 + 109);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  *((_DWORD *)v1 + 109) = 0;
  v6 = *((_DWORD *)v1 + 108);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v6 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v7);
  }
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}
