

void __fastcall XblFriendFinderScreenController::_registerBindings(XblFriendFinderScreenController *this)
{
  XblFriendFinderScreenController::_registerBindings(this);
}


void __fastcall XblFriendFinderScreenController::~XblFriendFinderScreenController(XblFriendFinderScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E4424;
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
      j_j_j_j__ZdlPv_9(v3);
  }
  MinecraftScreenController::~MinecraftScreenController(v1);
  operator delete((void *)v1);
}


void __fastcall XblFriendFinderScreenController::_registerBindings(XblFriendFinderScreenController *this)
{
  XblFriendFinderScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  void *v8; // [sp+0h] [bp-50h]@5
  __int64 v9; // [sp+8h] [bp-48h]@5
  _DWORD *v10; // [sp+10h] [bp-40h]@5
  __int64 v11; // [sp+18h] [bp-38h]@5
  int v12; // [sp+20h] [bp-30h]@5
  void *v13; // [sp+24h] [bp-2Ch]@1
  __int64 v14; // [sp+2Ch] [bp-24h]@1
  _DWORD *v15; // [sp+34h] [bp-1Ch]@1
  __int64 v16; // [sp+3Ch] [bp-14h]@1
  int v17; // [sp+44h] [bp-Ch]@1

  v1 = this;
  v17 = 486579846;
  v2 = operator new(4u);
  LODWORD(v3) = sub_12A5BA0;
  *v2 = v1;
  HIDWORD(v3) = sub_12A5B90;
  v15 = v2;
  v16 = v3;
  v13 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v14 = v4;
  ScreenController::bindString((int)v1, &v17, (int)&v15, (int)&v13);
  if ( (_DWORD)v14 )
    ((void (*)(void))v14)();
  if ( (_DWORD)v16 )
    ((void (*)(void))v16)();
  v12 = 608347821;
  v5 = operator new(4u);
  LODWORD(v6) = sub_12A5BE6;
  *v5 = v1;
  HIDWORD(v6) = sub_12A5BD6;
  v10 = v5;
  v11 = v6;
  v8 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v9 = v7;
  ScreenController::bindBool((int)v1, &v12, (int)&v10, (int)&v8);
  if ( (_DWORD)v9 )
    ((void (*)(void))v9)();
  if ( (_DWORD)v11 )
    ((void (*)(void))v11)();
}


MinecraftScreenController *__fastcall XblFriendFinderScreenController::~XblFriendFinderScreenController(XblFriendFinderScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E4424;
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
      j_j_j_j__ZdlPv_9(v3);
  }
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


int __fastcall XblFriendFinderScreenController::tick(XblFriendFinderScreenController *this)
{
  XblFriendFinderScreenController *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = MinecraftScreenController::tick(this);
  if ( *((_BYTE *)v1 + 429) )
  {
    *((_BYTE *)v1 + 429) = 0;
    result |= 1u;
  }
  return result;
}


unsigned int __fastcall XblFriendFinderScreenController::onOpen(XblFriendFinderScreenController *this)
{
  int v1; // r4@1
  unsigned int result; // r0@1
  void *v3; // [sp+0h] [bp-18h]@1
  int (__fastcall *v4)(void **, void **, int); // [sp+8h] [bp-10h]@1
  int (*v5)(); // [sp+Ch] [bp-Ch]@1

  v1 = *((_DWORD *)this + 95);
  v3 = operator new(1u);
  v4 = sub_12A5206;
  v5 = nullsub_59;
  result = MinecraftScreenModel::refreshUserProfileData(v1, (int)&v3);
  if ( v4 )
    result = ((int (__cdecl *)(void **))v4)(&v3);
  return result;
}


void __fastcall XblFriendFinderScreenController::_registerEventHandlers(XblFriendFinderScreenController *this)
{
  XblFriendFinderScreenController::_registerEventHandlers(this);
}


void __fastcall XblFriendFinderScreenController::_registerEventHandlers(XblFriendFinderScreenController *this)
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
  sub_21E94B4((void **)&v19, "gamertag_search_box");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v19);
  v3 = operator new(4u);
  LODWORD(v4) = sub_12A5578;
  *v3 = v1;
  HIDWORD(v4) = sub_12A5234;
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v16, "gamertag_search_box");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v16);
  v7 = operator new(4u);
  LODWORD(v8) = sub_12A578C;
  *v7 = v1;
  HIDWORD(v8) = sub_12A55B0;
  v14 = v7;
  v15 = v8;
  ScreenController::registerTextEditFinishedEventHandler((int)v1, v6, (int)&v14);
  if ( (_DWORD)v15 )
    ((void (*)(void))v15)();
  v9 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


int __fastcall XblFriendFinderScreenController::XblFriendFinderScreenController(int a1, int a2)
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
  *(_DWORD *)v2 = &off_26E4424;
  *(_DWORD *)(v2 + 424) = &unk_28898CC;
  *(_WORD *)(v2 + 428) = 1;
  XblFriendFinderScreenController::_registerEventHandlers((XblFriendFinderScreenController *)v2);
  XblFriendFinderScreenController::_registerBindings((XblFriendFinderScreenController *)v2);
  return v2;
}


void __fastcall XblFriendFinderScreenController::~XblFriendFinderScreenController(XblFriendFinderScreenController *this)
{
  XblFriendFinderScreenController::~XblFriendFinderScreenController(this);
}
