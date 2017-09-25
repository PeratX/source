

void __fastcall NoLicenseScreenController::~NoLicenseScreenController(NoLicenseScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MinecraftScreenController::~MinecraftScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall NoLicenseScreenController::onOpen(NoLicenseScreenController *this)
{
  NoLicenseScreenController *v1; // r4@1
  int v2; // r6@1
  __int64 v3; // kr00_8@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  _DWORD *v6; // r0@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r2@10
  __int64 v9; // r1@13
  __int64 v10; // r2@13
  unsigned int *v11; // r1@16
  unsigned int v12; // r0@18
  void *v13; // r0@23
  int v14; // r1@24
  void *v15; // r0@24
  int result; // r0@25
  unsigned int *v17; // r2@26
  unsigned int v18; // r1@28
  int v19; // r2@34
  signed int v20; // r1@36
  _DWORD *v21; // [sp+8h] [bp-40h]@13
  void (*v22)(void); // [sp+10h] [bp-38h]@7
  int v23; // [sp+1Ch] [bp-2Ch]@1
  int v24; // [sp+24h] [bp-24h]@1
  char v25; // [sp+28h] [bp-20h]@1
  int v26; // [sp+2Ch] [bp-1Ch]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<NoLicenseScreenController>((int)&v25, (int)this);
  v2 = *((_DWORD *)v1 + 95);
  sub_1590164((void **)&v24, (const char *)&unk_257BC67);
  sub_1590164((void **)&v23, "verification.nolicense");
  v3 = *(_QWORD *)&v25;
  if ( v26 )
  {
    v4 = (unsigned int *)(v26 + 8);
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
  v22 = 0;
  v6 = operator new(0xCu);
  *(_QWORD *)v6 = v3;
  if ( HIDWORD(v3) )
    v7 = (unsigned int *)(HIDWORD(v3) + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
      ++*v7;
  LODWORD(v9) = sub_11CFA74;
  v6[2] = v2;
  HIDWORD(v9) = sub_11CF934;
  v21 = v6;
  *(_QWORD *)&v22 = v9;
  MinecraftScreenController::_displayStandardModalPopup((int)v1, &v24, &v23, 2, (int)&v21);
  HIDWORD(v10) = v22;
  if ( v22 )
    v22();
    v11 = (unsigned int *)(HIDWORD(v3) + 8);
      {
        v12 = __ldrex(v11);
        HIDWORD(v10) = __strex(v12 - 1, v11);
      }
      while ( HIDWORD(v10) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
  v13 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v19 = v23 - 4;
        v20 = __ldrex((unsigned int *)v10);
        HIDWORD(v10) = v20 - 1;
      while ( __strex(v20 - 1, (unsigned int *)v10) );
      v20 = *(_DWORD *)v10;
      HIDWORD(v10) = *(_DWORD *)v10 - 1;
      *(_DWORD *)v10 = HIDWORD(v10);
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
  v14 = v24;
  LODWORD(v10) = &dword_28898C0;
  v15 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    LODWORD(v10) = v24 - 4;
        v14 = __ldrex((unsigned int *)v10);
        HIDWORD(v10) = v14 - 1;
      while ( __strex(v14 - 1, (unsigned int *)v10) );
      v14 = *(_DWORD *)v10;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v15);
  ScreenController::onOpen(v1, v14, v10);
  result = v26;
    v17 = (unsigned int *)(v26 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


NoLicenseScreenController *__fastcall NoLicenseScreenController::NoLicenseScreenController(NoLicenseScreenController *a1, int a2)
{
  NoLicenseScreenController *v2; // r4@1
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
  *(_DWORD *)v2 = &off_26E28E4;
  NoLicenseScreenController::_registerEventHandlers(v2);
  return v2;
}


void __fastcall NoLicenseScreenController::_registerEventHandlers(NoLicenseScreenController *this)
{
  NoLicenseScreenController::_registerEventHandlers(this);
}


void __fastcall NoLicenseScreenController::_registerEventHandlers(NoLicenseScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r6@1
  int v3; // r5@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1
  void *v6; // r0@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  _DWORD *v9; // [sp+4h] [bp-2Ch]@1
  __int64 v10; // [sp+Ch] [bp-24h]@1
  int v11; // [sp+18h] [bp-18h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 95);
  sub_1590164((void **)&v11, "button.menu_exit");
  v3 = MinecraftScreenController::_getNameId(v1, (int **)&v11);
  v4 = operator new(4u);
  LODWORD(v5) = sub_11CFB2E;
  *v4 = v2;
  HIDWORD(v5) = sub_11CFB20;
  v9 = v4;
  v10 = v5;
  ScreenController::registerButtonClickHandler((int)v1, v3, (int)&v9);
  if ( (_DWORD)v10 )
    ((void (*)(void))v10)();
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v11 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v6);
  }
}


void __fastcall NoLicenseScreenController::~NoLicenseScreenController(NoLicenseScreenController *this)
{
  NoLicenseScreenController::~NoLicenseScreenController(this);
}
