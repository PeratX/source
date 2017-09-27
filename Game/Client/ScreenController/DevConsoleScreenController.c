

UIPropertyBag *__fastcall DevConsoleScreenController::_handleChatMessage(int a1, const void **a2)
{
  int v2; // r4@1
  const void **v3; // r5@1
  int v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+4h] [bp-44h]@1
  char v10; // [sp+8h] [bp-40h]@1

  v2 = a1;
  v3 = a2;
  v4 = UIPropertyBag::UIPropertyBag((int)&v10);
  UIPropertyBag::set<char [8]>(v4, 4, "name", "message");
  UIPropertyBag::set<std::string>((int)&v10, 5, "#text", v3);
  sub_119C884((void **)&v9, "messages_factory");
  if ( !*(_DWORD *)(v2 + 12) )
    sub_119C8E4();
  (*(void (__fastcall **)(int, int *, char *))(v2 + 16))(v2 + 4, &v9, &v10);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  return UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v10);
}


void __fastcall DevConsoleScreenController::~DevConsoleScreenController(DevConsoleScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E1A4C;
  v2 = *((_DWORD *)this + 106);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  MinecraftScreenController::~MinecraftScreenController(v1);
  operator delete((void *)v1);
}


void __fastcall DevConsoleScreenController::~DevConsoleScreenController(DevConsoleScreenController *this)
{
  DevConsoleScreenController::~DevConsoleScreenController(this);
}


int __fastcall DevConsoleScreenController::handleGameEventNotification(int a1, int a2)
{
  int v2; // r5@1
  const void **v3; // r0@2

  v2 = a1;
  if ( a2 == 7 )
  {
    v3 = (const void **)MinecraftScreenModel::getLastDevConsoleMessage(*(MinecraftScreenModel **)(a1 + 380));
    DevConsoleScreenController::_handleChatMessage(v2, v3);
  }
  return j_j_j__ZN16ScreenController27handleGameEventNotificationEN2ui21GameEventNotificationE(v2);
}


void __fastcall DevConsoleScreenController::_registerEventHandlers(DevConsoleScreenController *this)
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
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  _DWORD *v14; // [sp+4h] [bp-44h]@4
  __int64 v15; // [sp+Ch] [bp-3Ch]@4
  int v16; // [sp+18h] [bp-30h]@4
  _DWORD *v17; // [sp+1Ch] [bp-2Ch]@1
  __int64 v18; // [sp+24h] [bp-24h]@1
  int v19; // [sp+30h] [bp-18h]@1

  v1 = this;
  sub_119C884((void **)&v19, "#message_text_box");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v19);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1183378;
  *v3 = v1;
  HIDWORD(v4) = sub_1183000;
  v17 = v3;
  v18 = v4;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v2, (int)&v17);
  if ( (_DWORD)v18 )
    ((void (*)(void))v18)();
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v19 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  sub_119C884((void **)&v16, "button.send");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v16);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11833BC;
  *v7 = v1;
  HIDWORD(v8) = sub_11833AE;
  v14 = v7;
  v15 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v14);
  if ( (_DWORD)v15 )
    ((void (*)(void))v15)();
  v9 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
}


int __fastcall DevConsoleScreenController::DevConsoleScreenController(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r5@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r6@8
  unsigned int v8; // r0@10
  __int64 v9; // r0@15
  int v11; // [sp+4h] [bp-1Ch]@1
  int v12; // [sp+8h] [bp-18h]@1

  v2 = a1;
  v11 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = 0;
  v12 = v3;
  *(_DWORD *)a2 = 0;
  MinecraftScreenController::MinecraftScreenController(v2, (MinecraftScreenModel **)&v11);
  v4 = v12;
  if ( v12 )
  {
    v5 = (unsigned int *)(v12 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  *(_DWORD *)v2 = &off_26E1A4C;
  LODWORD(v9) = &unk_28898CC;
  HIDWORD(v9) = 100;
  *(_QWORD *)(v2 + 424) = v9;
  DevConsoleScreenController::_registerEventHandlers((DevConsoleScreenController *)v2);
  DevConsoleScreenController::_registerBindings((DevConsoleScreenController *)v2);
  MinecraftScreenModel::setMaxDevConsoleMessages(*(MinecraftScreenModel **)(v2 + 380), *(_DWORD *)(v2 + 428));
  return v2;
}


void __fastcall DevConsoleScreenController::_registerEventHandlers(DevConsoleScreenController *this)
{
  DevConsoleScreenController::_registerEventHandlers(this);
}


void __fastcall DevConsoleScreenController::onOpen(DevConsoleScreenController *this)
{
  DevConsoleScreenController *v1; // r6@1
  void *v2; // r0@2
  char *v3; // r0@3
  char *v4; // r5@3
  const void **v5; // r9@3
  __int64 v6; // r0@3
  signed int v7; // r2@3
  int v8; // r1@6
  __int64 v9; // r2@6
  int v10; // r5@6
  const void **v11; // r7@7
  const void **v12; // r6@10
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  int *v15; // r0@19
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  int v18; // [sp+8h] [bp-38h]@1

  v1 = this;
  sub_119C884((void **)&v18, "messages_factory");
  if ( !*((_DWORD *)v1 + 11) )
    sub_119C8E4();
  (*((void (__fastcall **)(_DWORD, _DWORD))v1 + 12))((char *)v1 + 36, &v18);
  v2 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v18 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  MinecraftScreenModel::fireEventDevConsoleOpen(*((MinecraftScreenModel **)v1 + 95));
  v3 = MinecraftScreenModel::getDevConsoleScreenMessages(*((MinecraftScreenModel **)v1 + 95));
  v4 = v3;
  v5 = 0;
  v6 = *(_QWORD *)v3;
  v7 = HIDWORD(v6) - v6;
  if ( (HIDWORD(v6) - (signed int)v6) >> 2 )
    if ( (unsigned int)(v7 >> 2) >= 0x40000000 )
      sub_119C874();
    v5 = (const void **)operator new(v7);
    v6 = *(_QWORD *)v4;
  v10 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
          v6,
          SHIDWORD(v6),
          (int)v5);
  if ( v5 != (const void **)v10 )
    v11 = v5;
    do
      DevConsoleScreenController::_handleChatMessage((int)v1, v11);
      ++v11;
    while ( (const void **)v10 != v11 );
  ScreenController::onOpen(v1, v8, v9);
    v12 = v5;
      v15 = (int *)((char *)*v12 - 12);
      if ( v15 != &dword_28898C0 )
      {
        v13 = (unsigned int *)((char *)*v12 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
      }
      ++v12;
    while ( v12 != (const void **)v10 );
  if ( v5 )
    operator delete(v5);
}


void __fastcall DevConsoleScreenController::_registerBindings(DevConsoleScreenController *this)
{
  DevConsoleScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  void *v5; // [sp+4h] [bp-2Ch]@1
  __int64 v6; // [sp+Ch] [bp-24h]@1
  _DWORD *v7; // [sp+14h] [bp-1Ch]@1
  __int64 v8; // [sp+1Ch] [bp-14h]@1
  int v9; // [sp+24h] [bp-Ch]@1

  v1 = this;
  v9 = -290273689;
  v2 = operator new(4u);
  LODWORD(v3) = sub_1183402;
  *v2 = v1;
  HIDWORD(v3) = sub_11833F2;
  v7 = v2;
  v8 = v3;
  v5 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v6 = v4;
  ScreenController::bindString((int)v1, &v9, (int)&v7, (int)&v5);
  if ( (_DWORD)v6 )
    ((void (*)(void))v6)();
  if ( (_DWORD)v8 )
    ((void (*)(void))v8)();
}


void __fastcall DevConsoleScreenController::_registerBindings(DevConsoleScreenController *this)
{
  DevConsoleScreenController::_registerBindings(this);
}


MinecraftScreenController *__fastcall DevConsoleScreenController::~DevConsoleScreenController(DevConsoleScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E1A4C;
  v2 = *((_DWORD *)this + 106);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


int __fastcall DevConsoleScreenController::addStaticScreenVars(DevConsoleScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  DevConsoleScreenController *v3; // r5@1
  int v4; // r6@1
  int v6; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$max_messages");
  Json::Value::Value((Json::Value *)&v6, *((_DWORD *)v3 + 107));
  Json::Value::operator=(v4, (const Json::Value *)&v6);
  Json::Value::~Value((Json::Value *)&v6);
  return ScreenController::addStaticScreenVars(v3, v2);
}


int __fastcall DevConsoleScreenController::_sendMessage(DevConsoleScreenController *this)
{
  DevConsoleScreenController *v1; // r4@1
  int result; // r0@1
  _BYTE *v3; // r0@2
  void *v4; // r0@6
  int v5; // r0@7
  unsigned int *v6; // r12@9
  signed int v7; // r1@11
  int v8; // [sp+4h] [bp-1Ch]@6

  v1 = this;
  result = *(_DWORD *)(*((_DWORD *)this + 106) - 12);
  if ( result )
  {
    MinecraftScreenModel::sendDevConsoleMessage(*((_DWORD *)v1 + 95), (int *)v1 + 106);
    v3 = (_BYTE *)*((_DWORD *)v1 + 106);
    if ( *((_DWORD *)v3 - 1) >= 0 )
    {
      sub_119CB68((const void **)v1 + 106);
      v3 = (_BYTE *)*((_DWORD *)v1 + 106);
    }
    if ( *v3 == 47 )
      MinecraftScreenModel::devConsoleExecuteCommand(*((_DWORD *)v1 + 95), (int *)v1 + 106);
    else
      sub_119C884((void **)&v8, "/");
      sub_119C8A4((const void **)&v8, (const void **)v1 + 106);
      MinecraftScreenModel::devConsoleExecuteCommand(*((_DWORD *)v1 + 95), &v8);
      v4 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v8 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v4);
      }
    sub_119CA68((const void **)v1 + 106, 0, *(_BYTE **)(*((_DWORD *)v1 + 106) - 12), 0);
    v5 = *((_DWORD *)v1 + 95);
    result = MinecraftScreenModel::updateTextBoxText();
  }
  return result;
}


void __fastcall DevConsoleScreenController::onOpen(DevConsoleScreenController *this)
{
  DevConsoleScreenController::onOpen(this);
}
