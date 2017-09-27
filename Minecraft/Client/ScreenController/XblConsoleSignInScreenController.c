

void __fastcall XblConsoleSignInScreenController::_registerEventHandlers(XblConsoleSignInScreenController *this)
{
  XblConsoleSignInScreenController::_registerEventHandlers(this);
}


void __fastcall XblConsoleSignInScreenController::_registerEventHandlers(XblConsoleSignInScreenController *this)
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
  LODWORD(v4) = sub_12A25BC;
  *v3 = v1;
  HIDWORD(v4) = sub_12A2400;
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


XblConsoleSignInScreenController *__fastcall XblConsoleSignInScreenController::~XblConsoleSignInScreenController(XblConsoleSignInScreenController *this)
{
  XblConsoleSignInScreenController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E4280;
  v2 = *((_DWORD *)this + 107);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 106);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


void __fastcall XblConsoleSignInScreenController::~XblConsoleSignInScreenController(XblConsoleSignInScreenController *this)
{
  XblConsoleSignInScreenController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E4280;
  v2 = *((_DWORD *)this + 107);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 106);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  MinecraftScreenController::~MinecraftScreenController(v1);
  operator delete((void *)v1);
}


void __fastcall XblConsoleSignInScreenController::_registerBindings(XblConsoleSignInScreenController *this)
{
  XblConsoleSignInScreenController *v1; // r4@1
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
  v17 = 430855935;
  v2 = operator new(4u);
  LODWORD(v3) = sub_12A2602;
  *v2 = v1;
  HIDWORD(v3) = sub_12A25F2;
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
  v12 = -1805716005;
  v5 = operator new(4u);
  LODWORD(v6) = sub_12A2648;
  *v5 = v1;
  HIDWORD(v6) = sub_12A2638;
  v10 = v5;
  v11 = v6;
  v8 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v9 = v7;
  ScreenController::bindString((int)v1, &v12, (int)&v10, (int)&v8);
  if ( (_DWORD)v9 )
    ((void (*)(void))v9)();
  if ( (_DWORD)v11 )
    ((void (*)(void))v11)();
}


int __fastcall XblConsoleSignInScreenController::tick(XblConsoleSignInScreenController *this)
{
  XblConsoleSignInScreenController *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = MinecraftScreenController::tick(this);
  if ( *((_BYTE *)v1 + 432) )
  {
    *((_BYTE *)v1 + 432) = 0;
    result |= 1u;
  }
  return result;
}


int __fastcall XblConsoleSignInScreenController::XblConsoleSignInScreenController(int a1, int a2, int *a3, int *a4)
{
  int v4; // r4@1
  int *v5; // r8@1
  int v6; // r0@1
  int *v7; // r6@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r7@14
  unsigned int v14; // r0@16
  int v16; // [sp+0h] [bp-28h]@1
  int v17; // [sp+4h] [bp-24h]@1

  v4 = a1;
  v16 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v17 = v6;
  if ( v6 )
  {
    v8 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  MinecraftScreenController::MinecraftScreenController(v4, (MinecraftScreenModel **)&v16);
  v10 = v17;
  if ( v17 )
    v11 = (unsigned int *)(v17 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  *(_DWORD *)v4 = &off_26E4280;
  *(_BYTE *)(v4 + 421) = 1;
  sub_21E8AF4((int *)(v4 + 424), v7);
  sub_21E8AF4((int *)(v4 + 428), v5);
  *(_BYTE *)(v4 + 432) = 0;
  XblConsoleSignInScreenController::_registerEventHandlers((XblConsoleSignInScreenController *)v4);
  XblConsoleSignInScreenController::_registerBindings((XblConsoleSignInScreenController *)v4);
  return v4;
}


void __fastcall XblConsoleSignInScreenController::~XblConsoleSignInScreenController(XblConsoleSignInScreenController *this)
{
  XblConsoleSignInScreenController::~XblConsoleSignInScreenController(this);
}


void __fastcall XblConsoleSignInScreenController::_registerBindings(XblConsoleSignInScreenController *this)
{
  XblConsoleSignInScreenController::_registerBindings(this);
}
