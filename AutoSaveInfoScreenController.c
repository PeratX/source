

void __fastcall AutoSaveInfoScreenController::~AutoSaveInfoScreenController(AutoSaveInfoScreenController *this)
{
  AutoSaveInfoScreenController::~AutoSaveInfoScreenController(this);
}


AutoSaveInfoScreenController *__fastcall AutoSaveInfoScreenController::AutoSaveInfoScreenController(AutoSaveInfoScreenController *a1, int a2)
{
  AutoSaveInfoScreenController *v2; // r4@1
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
  MinecraftScreenController::MinecraftScreenController((int)v2, (MinecraftScreenModel **)&v12);
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
  *(_DWORD *)v2 = &off_26E0E10;
  AutoSaveInfoScreenController::_registerEventHandlers(v2);
  AutoSaveInfoScreenController::_registerBindings(v2);
  return v2;
}


void __fastcall AutoSaveInfoScreenController::_registerBindings(AutoSaveInfoScreenController *this)
{
  AutoSaveInfoScreenController::_registerBindings(this);
}


void __fastcall AutoSaveInfoScreenController::_registerEventHandlers(AutoSaveInfoScreenController *this)
{
  AutoSaveInfoScreenController::_registerEventHandlers(this);
}


void __fastcall AutoSaveInfoScreenController::_registerBindings(AutoSaveInfoScreenController *this)
{
  AutoSaveInfoScreenController *v1; // r4@1
  __int64 v2; // r1@1
  void *v3; // [sp+4h] [bp-2Ch]@1
  __int64 v4; // [sp+Ch] [bp-24h]@1
  void *v5; // [sp+14h] [bp-1Ch]@1
  void (*v6)(void); // [sp+1Ch] [bp-14h]@1
  void (__fastcall *v7)(int *); // [sp+20h] [bp-10h]@1
  int v8; // [sp+24h] [bp-Ch]@1

  v1 = this;
  v8 = -883927847;
  v5 = operator new(1u);
  v6 = (void (*)(void))sub_112F220;
  v7 = sub_112F154;
  v3 = operator new(1u);
  LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v2) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v4 = v2;
  ScreenController::bindString((int)v1, &v8, (int)&v5, (int)&v3);
  if ( (_DWORD)v4 )
    ((void (*)(void))v4)();
  if ( v6 )
    v6();
}


void __fastcall AutoSaveInfoScreenController::~AutoSaveInfoScreenController(AutoSaveInfoScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MinecraftScreenController::~MinecraftScreenController(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall AutoSaveInfoScreenController::_registerEventHandlers(AutoSaveInfoScreenController *this)
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
  sub_119C884((void **)&v10, "button.info_accept");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_112EF9C;
  *v3 = v1;
  HIDWORD(v4) = sub_112EDD8;
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
