

void __fastcall ConvertPurchasesToXBLScreenController::~ConvertPurchasesToXBLScreenController(ConvertPurchasesToXBLScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26E16AC;
  v2 = (void (*)(void))*((_DWORD *)this + 108);
  if ( v2 )
    v2();
  MinecraftScreenController::~MinecraftScreenController(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall ConvertPurchasesToXBLScreenController::_registerEventHandlers(ConvertPurchasesToXBLScreenController *this)
{
  ConvertPurchasesToXBLScreenController::_registerEventHandlers(this);
}


int __fastcall ConvertPurchasesToXBLScreenController::_exitScreen(ConvertPurchasesToXBLScreenController *this, int a2)
{
  ConvertPurchasesToXBLScreenController *v2; // r5@1
  int v3; // r4@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  (*(void (**)(void))(*(_DWORD *)this + 92))();
  result = *((_DWORD *)v2 + 108);
  if ( result )
    result = (*((int (__fastcall **)(_DWORD, _DWORD))v2 + 109))((char *)v2 + 424, v3);
  return result;
}


void __fastcall ConvertPurchasesToXBLScreenController::~ConvertPurchasesToXBLScreenController(ConvertPurchasesToXBLScreenController *this)
{
  ConvertPurchasesToXBLScreenController::~ConvertPurchasesToXBLScreenController(this);
}


int __fastcall ConvertPurchasesToXBLScreenController::_convertEntitlementsToXBL(ConvertPurchasesToXBLScreenController *this)
{
  ConvertPurchasesToXBLScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  int v5; // r5@6
  unsigned int v6; // r1@10
  _QWORD *v7; // r0@13
  unsigned int *v8; // r1@14
  unsigned int v9; // r2@16
  __int64 v10; // r1@19
  unsigned int *v11; // r5@22
  unsigned int v12; // r0@24
  unsigned int v13; // r0@31
  int result; // r0@36
  unsigned int *v15; // r2@37
  unsigned int v16; // r1@39
  _QWORD *v17; // [sp+0h] [bp-28h]@19
  void (*v18)(void); // [sp+8h] [bp-20h]@13
  char v19; // [sp+10h] [bp-18h]@1
  int v20; // [sp+14h] [bp-14h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<ConvertPurchasesToXBLScreenController>((int)&v19, (int)this);
  v2 = *(_QWORD *)&v19;
  if ( v20 )
  {
    v3 = (unsigned int *)(v20 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
    v5 = *((_DWORD *)v1 + 95);
        v6 = __ldrex(v3);
      while ( __strex(v6 + 1, v3) );
  }
  else
  v18 = 0;
  v7 = operator new(8u);
  *v7 = v2;
  if ( HIDWORD(v2) )
    v8 = (unsigned int *)(HIDWORD(v2) + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  LODWORD(v10) = sub_1164E30;
  v17 = v7;
  HIDWORD(v10) = sub_116460C;
  *(_QWORD *)&v18 = v10;
  MinecraftScreenModel::convertLocalEntitlementsToXBL(v5, (int)&v17);
  if ( v18 )
    v18();
    v11 = (unsigned int *)(HIDWORD(v2) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
        v13 = __ldrex(v11);
      while ( __strex(v13 - 1, v11) );
      v13 = (*v11)--;
    if ( v13 == 1 )
  result = v20;
    v15 = (unsigned int *)(v20 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall ConvertPurchasesToXBLScreenController::tick(ConvertPurchasesToXBLScreenController *this)
{
  ConvertPurchasesToXBLScreenController *v1; // r4@1
  int v2; // r5@1

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  if ( *((_BYTE *)v1 + 440) )
  {
    *((_BYTE *)v1 + 440) = 0;
    ConvertPurchasesToXBLScreenController::_convertEntitlementsToXBL(v1);
  }
  return v2;
}


int __fastcall ConvertPurchasesToXBLScreenController::ConvertPurchasesToXBLScreenController(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  void (__fastcall *v13)(int, int, signed int); // r3@21
  int v15; // [sp+4h] [bp-1Ch]@1
  int v16; // [sp+8h] [bp-18h]@1

  v3 = a1;
  v15 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v16 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  MinecraftScreenController::MinecraftScreenController(v3, (MinecraftScreenModel **)&v15);
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  *(_DWORD *)v3 = &off_26E16AC;
  *(_DWORD *)(v3 + 432) = 0;
  v13 = *(void (__fastcall **)(int, int, signed int))(v4 + 8);
  if ( v13 )
    v13(v3 + 424, v4, 2);
    *(_DWORD *)(v3 + 436) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v3 + 432) = *(_DWORD *)(v4 + 8);
  *(_BYTE *)(v3 + 440) = 0;
  ConvertPurchasesToXBLScreenController::_registerEventHandlers((ConvertPurchasesToXBLScreenController *)v3);
  *(_DWORD *)(v3 + 388) = 3;
  return v3;
}


void __fastcall ConvertPurchasesToXBLScreenController::_registerEventHandlers(ConvertPurchasesToXBLScreenController *this)
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
  sub_119C884((void **)&v19, "button.save_to_xbl");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v19);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1163E6C;
  *v3 = v1;
  HIDWORD(v4) = sub_1163ABC;
  v17 = v3;
  v18 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v17);
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
  sub_119C884((void **)&v16, "button.leave_on_device");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v16);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11643A8;
  *v7 = v1;
  HIDWORD(v8) = sub_1164094;
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


ScreenController *__fastcall ConvertPurchasesToXBLScreenController::~ConvertPurchasesToXBLScreenController(ConvertPurchasesToXBLScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26E16AC;
  v2 = (void (*)(void))*((_DWORD *)this + 108);
  if ( v2 )
    v2();
  return j_j_j__ZN25MinecraftScreenControllerD2Ev(v1);
}
