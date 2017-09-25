

void __fastcall DebugScreenController::_registerBindings(DebugScreenController *this)
{
  DebugScreenController::_registerBindings(this);
}


int __fastcall DebugScreenController::onOpen(DebugScreenController *this)
{
  *((_BYTE *)this + 424) = 0;
  return j_j_j__ZN11BasicToggle7setIsOnEb((DebugScreenController *)((char *)this + 421), 0);
}


void __fastcall DebugScreenController::_registerEventHandlers(DebugScreenController *this)
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
  sub_119C884((void **)&v10, "button.access");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1182526;
  *v3 = v1;
  HIDWORD(v4) = sub_1182514;
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


void __fastcall DebugScreenController::~DebugScreenController(DebugScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MinecraftScreenController::~MinecraftScreenController(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall DebugScreenController::_registerEventHandlers(DebugScreenController *this)
{
  DebugScreenController::_registerEventHandlers(this);
}


void __fastcall DebugScreenController::~DebugScreenController(DebugScreenController *this)
{
  DebugScreenController::~DebugScreenController(this);
}


int __fastcall DebugScreenController::handleGameEventNotification(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@2
  int v4; // r6@2
  void *v5; // r0@2
  signed int v6; // r7@6
  unsigned int *v8; // r2@13
  signed int v9; // r1@15
  int v10; // [sp+8h] [bp-20h]@2

  v2 = a1;
  if ( (a2 | 1) == 17 )
  {
    v3 = *(_DWORD *)(a1 + 380);
    sub_119C884((void **)&v10, "dev_console_screen");
    v4 = MinecraftScreenModel::isOnSceneStack(v3, (const void **)&v10);
    v5 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v10 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    BasicToggle::setIsOn((BasicToggle *)(v2 + 425), v4);
    if ( BasicToggle::getStateChange((BasicToggle *)(v2 + 425)) == 1 )
      if ( *(_BYTE *)(v2 + 424) && !BasicToggle::peek((BasicToggle *)(v2 + 425)) )
        BasicToggle::setIsOn((BasicToggle *)(v2 + 421), 1);
        v6 = BasicToggle::getStateChange((BasicToggle *)(v2 + 421)) != 0;
        v6 = 0;
        BasicToggle::setIsOn((BasicToggle *)(v2 + 421), 0);
        if ( BasicToggle::getStateChange((BasicToggle *)(v2 + 421)) == 1 )
          v6 = 1;
    else
      v6 = 0;
  }
  else
    v6 = 0;
  return ScreenController::handleGameEventNotification(v2) | v6;
}


int __fastcall DebugScreenController::DebugScreenController(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r5@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r6@8
  unsigned int v8; // r0@10
  int v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@1

  v2 = a1;
  v10 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = 0;
  v11 = v3;
  *(_DWORD *)a2 = 0;
  MinecraftScreenController::MinecraftScreenController(v2, (MinecraftScreenModel **)&v10);
  v4 = v11;
  if ( v11 )
  {
    v5 = (unsigned int *)(v11 + 4);
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
  *(_DWORD *)v2 = &off_26E19C0;
  BasicToggle::BasicToggle(v2 + 421, 0);
  *(_BYTE *)(v2 + 424) = 0;
  BasicToggle::BasicToggle(v2 + 425, 0);
  *(_BYTE *)(v2 + 428) = 1;
  DebugScreenController::_registerEventHandlers((DebugScreenController *)v2);
  DebugScreenController::_registerBindings((DebugScreenController *)v2);
  return v2;
}


signed int __fastcall DebugScreenController::tick(DebugScreenController *this)
{
  DebugScreenController *v1; // r1@1
  signed int result; // r0@1

  v1 = this;
  result = 0;
  if ( *((_BYTE *)v1 + 428) )
  {
    *((_BYTE *)v1 + 428) = 0;
    result = 1;
  }
  return result;
}


void __fastcall DebugScreenController::_registerBindings(DebugScreenController *this)
{
  DebugScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  void *v5; // [sp+4h] [bp-2Ch]@1
  __int64 v6; // [sp+Ch] [bp-24h]@1
  _DWORD *v7; // [sp+14h] [bp-1Ch]@1
  __int64 v8; // [sp+1Ch] [bp-14h]@1
  char v9; // [sp+24h] [bp-Ch]@1

  v1 = this;
  StringHash::StringHash<char [23]>(&v9, (int)"#access_screen_visible");
  v2 = operator new(4u);
  LODWORD(v3) = sub_1182568;
  *v2 = v1;
  HIDWORD(v3) = sub_118255C;
  v7 = v2;
  v8 = v3;
  v5 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v6 = v4;
  ScreenController::bindBool((int)v1, (int *)&v9, (int)&v7, (int)&v5);
  if ( (_DWORD)v6 )
    ((void (*)(void))v6)();
  if ( (_DWORD)v8 )
    ((void (*)(void))v8)();
}


signed int __fastcall DebugScreenController::_evaluateIfDirty(DebugScreenController *this)
{
  DebugScreenController *v1; // r4@1
  BasicToggle *v2; // r4@3

  v1 = this;
  if ( *((_BYTE *)this + 424) && !BasicToggle::peek((DebugScreenController *)((char *)this + 425)) )
  {
    BasicToggle::setIsOn((DebugScreenController *)((char *)v1 + 421), 1);
    if ( BasicToggle::getStateChange((DebugScreenController *)((char *)v1 + 421)) )
      return 1;
  }
  else
    v2 = (DebugScreenController *)((char *)v1 + 421);
    BasicToggle::setIsOn(v2, 0);
    if ( BasicToggle::getStateChange(v2) )
  return 0;
}
