

void __fastcall MinecoinPurchaseScreenController::~MinecoinPurchaseScreenController(MinecoinPurchaseScreenController *this)
{
  MinecoinPurchaseScreenController *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r5@3
  unsigned int *v4; // r1@4
  unsigned int v5; // r0@6
  unsigned int *v6; // r6@10
  unsigned int v7; // r0@12

  v1 = this;
  *(_DWORD *)this = &off_26E2740;
  v2 = (void (*)(void))*((_DWORD *)this + 115);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 109);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  MainMenuScreenController::~MainMenuScreenController(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall MinecoinPurchaseScreenController::_registerEvents(MinecoinPurchaseScreenController *this)
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
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  _DWORD *v20; // [sp+4h] [bp-5Ch]@7
  __int64 v21; // [sp+Ch] [bp-54h]@7
  int v22; // [sp+18h] [bp-48h]@7
  _DWORD *v23; // [sp+1Ch] [bp-44h]@4
  __int64 v24; // [sp+24h] [bp-3Ch]@4
  int v25; // [sp+30h] [bp-30h]@4
  _DWORD *v26; // [sp+34h] [bp-2Ch]@1
  __int64 v27; // [sp+3Ch] [bp-24h]@1
  int v28; // [sp+48h] [bp-18h]@1

  v1 = this;
  sub_1590164((void **)&v28, "button.purchase_coins");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11CB934;
  *v3 = v1;
  HIDWORD(v4) = sub_11CB3A4;
  v26 = v3;
  v27 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  v5 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  sub_1590164((void **)&v25, "button.close_dialog");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v25);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11CBD4E;
  *v7 = v1;
  HIDWORD(v8) = sub_11CBD40;
  v23 = v7;
  v24 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v23);
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  v9 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v25 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  sub_1590164((void **)&v22, "modal.escape");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v22);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11CBD92;
  *v11 = v1;
  HIDWORD(v12) = sub_11CBD84;
  v20 = v11;
  v21 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  v13 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v22 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
}


ModalScreenData *__fastcall MinecoinPurchaseScreenController::_dialogFulfillmentFailed(MinecoinPurchaseScreenController *this)
{
  MinecoinPurchaseScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1 OVERLAPPED
  _DWORD *v5; // [sp+0h] [bp-58h]@1
  __int64 v6; // [sp+8h] [bp-50h]@1
  void *v7; // [sp+10h] [bp-48h]@1
  int v8; // [sp+14h] [bp-44h]@1
  int v9; // [sp+18h] [bp-40h]@1
  int v10; // [sp+1Ch] [bp-3Ch]@1
  void *v11; // [sp+20h] [bp-38h]@1
  int v12; // [sp+24h] [bp-34h]@1
  int v13; // [sp+28h] [bp-30h]@1
  int v14; // [sp+2Ch] [bp-2Ch]@1
  void *v15; // [sp+30h] [bp-28h]@1
  void *v16; // [sp+34h] [bp-24h]@1
  void *v17; // [sp+38h] [bp-20h]@1
  void *v18; // [sp+3Ch] [bp-1Ch]@1
  int v19; // [sp+40h] [bp-18h]@1
  char v20; // [sp+44h] [bp-14h]@1

  v1 = this;
  v7 = &unk_28898CC;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = &unk_28898CC;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = &unk_28898CC;
  v16 = &unk_28898CC;
  v17 = &unk_28898CC;
  v18 = &unk_28898CC;
  v19 = 1;
  v20 = 0;
  sub_15903F4(&v7, "store.popup.purchaseFailed.title", (_BYTE *)0x20);
  sub_15903F4(&v11, "store.popup.purchaseFailed.msg", (_BYTE *)0x1E);
  sub_15903F4(&v17, "gui.close", (_BYTE *)9);
  v19 = 2;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11CCCDA;
  *v2 = v1;
  HIDWORD(v3) = sub_11CCCCE;
  v5 = v2;
  v6 = v3;
  HIDWORD(v3) = &v5;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v7, *(__int64 *)((char *)&v3 + 4));
  if ( (_DWORD)v6 )
    ((void (*)(void))v6)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v7);
}


ModalScreenData *__fastcall MinecoinPurchaseScreenController::_dialogNoCoinOffersFound(MinecoinPurchaseScreenController *this)
{
  MinecoinPurchaseScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1 OVERLAPPED
  _DWORD *v5; // [sp+0h] [bp-58h]@1
  __int64 v6; // [sp+8h] [bp-50h]@1
  void *v7; // [sp+10h] [bp-48h]@1
  int v8; // [sp+14h] [bp-44h]@1
  int v9; // [sp+18h] [bp-40h]@1
  int v10; // [sp+1Ch] [bp-3Ch]@1
  void *v11; // [sp+20h] [bp-38h]@1
  int v12; // [sp+24h] [bp-34h]@1
  int v13; // [sp+28h] [bp-30h]@1
  int v14; // [sp+2Ch] [bp-2Ch]@1
  void *v15; // [sp+30h] [bp-28h]@1
  void *v16; // [sp+34h] [bp-24h]@1
  void *v17; // [sp+38h] [bp-20h]@1
  void *v18; // [sp+3Ch] [bp-1Ch]@1
  int v19; // [sp+40h] [bp-18h]@1
  char v20; // [sp+44h] [bp-14h]@1

  v1 = this;
  v7 = &unk_28898CC;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = &unk_28898CC;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = &unk_28898CC;
  v16 = &unk_28898CC;
  v17 = &unk_28898CC;
  v18 = &unk_28898CC;
  v19 = 1;
  v20 = 0;
  sub_15903F4(&v7, "store.connection.failed.title", (_BYTE *)0x1D);
  sub_15903F4(&v11, "store.connection.failed.body", (_BYTE *)0x1C);
  sub_15903F4(&v17, "gui.close", (_BYTE *)9);
  v19 = 2;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11CCC98;
  *v2 = v1;
  HIDWORD(v3) = sub_11CCC8C;
  v5 = v2;
  v6 = v3;
  HIDWORD(v3) = &v5;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v7, *(__int64 *)((char *)&v3 + 4));
  if ( (_DWORD)v6 )
    ((void (*)(void))v6)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v7);
}


_DWORD *__fastcall MinecoinPurchaseScreenController::_getProgressHandlerCallback(MinecoinPurchaseScreenController *this, int a2)
{
  MinecoinPurchaseScreenController *v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r6@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  unsigned int v7; // r1@9
  _DWORD *result; // r0@12
  unsigned int *v9; // r6@13
  unsigned int v10; // r1@15
  __int64 v11; // r1@17
  unsigned int v12; // r0@21

  LODWORD(v4) = a2;
  v2 = this;
  v3 = *(_QWORD *)(a2 + 432) >> 32;
  HIDWORD(v4) = *(_QWORD *)(a2 + 432);
  if ( v3 )
  {
    v5 = (unsigned int *)(v3 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
        v7 = __ldrex(v5);
      while ( __strex(v7 + 1, v5) );
  }
  *((_DWORD *)v2 + 2) = 0;
  result = operator new(0xCu);
  *(_QWORD *)result = v4;
  result[2] = v3;
    v9 = (unsigned int *)(v3 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
    *(_DWORD *)v2 = result;
    *((_DWORD *)v2 + 2) = sub_11CBDF4;
    *((_DWORD *)v2 + 3) = sub_11CBDC8;
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
        result = (_DWORD *)__ldrex(v9);
      while ( __strex((unsigned int)result - 1, v9) );
      result = (_DWORD *)(*v9)--;
    if ( result == (_DWORD *)1 )
      result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  else
    HIDWORD(v11) = sub_11CBDC8;
    LODWORD(v11) = sub_11CBDF4;
    *((_QWORD *)v2 + 1) = v11;
  return result;
}


void __fastcall MinecoinPurchaseScreenController::_registerBindings(MinecoinPurchaseScreenController *this)
{
  MinecoinPurchaseScreenController::_registerBindings(this);
}


ModalScreenData *__fastcall MinecoinPurchaseScreenController::_promptForXuidOverrideAndFulfillment(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1 OVERLAPPED
  unsigned __int64 *v3; // r4@1
  int v4; // r4@1
  int v5; // r6@1 OVERLAPPED
  unsigned __int64 v6; // kr00_8@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  _DWORD *v9; // r0@7
  __int64 v10; // r2@7 OVERLAPPED
  unsigned int *v11; // r1@8
  int (__fastcall *v12)(_DWORD *, void **, int); // r1@13
  unsigned int *v13; // r1@16
  unsigned int v14; // r0@18
  _DWORD *v16; // [sp+0h] [bp-58h]@13
  void (*v17)(void); // [sp+8h] [bp-50h]@7
  void *v18; // [sp+10h] [bp-48h]@1
  int v19; // [sp+14h] [bp-44h]@1
  int v20; // [sp+18h] [bp-40h]@1
  int v21; // [sp+1Ch] [bp-3Ch]@1
  void *v22; // [sp+20h] [bp-38h]@1
  int v23; // [sp+24h] [bp-34h]@1
  int v24; // [sp+28h] [bp-30h]@1
  int v25; // [sp+2Ch] [bp-2Ch]@1
  void *v26; // [sp+30h] [bp-28h]@1
  void *v27; // [sp+34h] [bp-24h]@1
  void *v28; // [sp+38h] [bp-20h]@1
  void *v29; // [sp+3Ch] [bp-1Ch]@1
  int v30; // [sp+40h] [bp-18h]@1
  char v31; // [sp+44h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v18 = &unk_28898CC;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = &unk_28898CC;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = &unk_28898CC;
  v27 = &unk_28898CC;
  v28 = &unk_28898CC;
  v29 = &unk_28898CC;
  v30 = 1;
  v31 = 0;
  sub_15903F4(&v18, "store.coins.incomplete.title", (_BYTE *)0x1C);
  sub_15903F4(&v22, "store.coins.incomplete.fulfill.b", (_BYTE *)0x20);
  sub_15903F4(&v27, "gui.yes", (_BYTE *)7);
  sub_15903F4(&v29, "gui.no", (_BYTE *)6);
  v6 = *v3;
  v4 = *v3 >> 32;
  v5 = v6;
  if ( v4 )
  {
    v7 = (unsigned int *)(v4 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  v17 = 0;
  v9 = operator new(0xCu);
  *(_QWORD *)v9 = *(_QWORD *)&v2;
  v9[2] = v4;
    v11 = (unsigned int *)(v4 + 8);
      {
        LODWORD(v10) = __ldrex(v11);
        HIDWORD(v10) = __strex(v10 + 1, v11);
      }
      while ( HIDWORD(v10) );
      ++*v11;
  v12 = sub_11CD3B8;
  v16 = v9;
  LODWORD(v10) = sub_11CD1C0;
  *(_QWORD *)&v17 = *(__int64 *)((char *)&v10 - 4);
  LODWORD(v10) = &v16;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v18, v10);
  if ( v17 )
    v17();
    v13 = (unsigned int *)(v4 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v18);
}


ModalScreenData *__fastcall MinecoinPurchaseScreenController::_promptPrepareAppStore(int a1, int a2)
{
  __int64 v2; // r6@0
  int v3; // r8@1
  int v4; // r6@1
  void (__fastcall *v5)(int *, int, signed int); // r3@1
  void *v6; // r0@4
  __int64 v7; // r2@4
  int v9; // [sp+8h] [bp-70h]@2
  void (__fastcall *v10)(int *, int *, signed int); // [sp+10h] [bp-68h]@1
  int v11; // [sp+14h] [bp-64h]@2
  void *v12; // [sp+18h] [bp-60h]@4
  void (*v13)(void); // [sp+20h] [bp-58h]@4
  int (__fastcall *v14)(int *); // [sp+24h] [bp-54h]@4
  void *v15; // [sp+28h] [bp-50h]@1
  int v16; // [sp+2Ch] [bp-4Ch]@1
  int v17; // [sp+30h] [bp-48h]@1
  int v18; // [sp+34h] [bp-44h]@1
  void *v19; // [sp+38h] [bp-40h]@1
  int v20; // [sp+3Ch] [bp-3Ch]@1
  int v21; // [sp+40h] [bp-38h]@1
  int v22; // [sp+44h] [bp-34h]@1
  void *v23; // [sp+48h] [bp-30h]@1
  void *v24; // [sp+4Ch] [bp-2Ch]@1
  void *v25; // [sp+50h] [bp-28h]@1
  void *v26; // [sp+54h] [bp-24h]@1
  int v27; // [sp+58h] [bp-20h]@1
  char v28; // [sp+5Ch] [bp-1Ch]@1

  v3 = a1;
  v4 = a2;
  v15 = &unk_28898CC;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = &unk_28898CC;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = &unk_28898CC;
  v24 = &unk_28898CC;
  v25 = &unk_28898CC;
  v26 = &unk_28898CC;
  v27 = 1;
  v28 = 0;
  sub_15903F4(&v15, "realmsCreateScreen.prepare.store.title", (_BYTE *)0x26);
  sub_15903F4(&v19, "realmsCreateScreen.prepare.store.body", (_BYTE *)0x25);
  sub_15903F4(&v25, "realmsCreateScreen.prepare.store.button", (_BYTE *)0x27);
  v27 = 2;
  v10 = 0;
  v5 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v5 )
  {
    v5(&v9, v4, 2);
    HIDWORD(v2) = *(_DWORD *)(v4 + 12);
    v11 = *(_DWORD *)(v2 + 12);
    LODWORD(v2) = *(_DWORD *)(v2 + 8);
    v10 = (void (__fastcall *)(int *, int *, signed int))v2;
  }
  else
    LODWORD(v2) = 0;
  v13 = 0;
  v6 = operator new(0x14u);
  *(_DWORD *)v6 = v3;
  HIDWORD(v7) = sub_11CCD10;
  *(_QWORD *)((char *)v6 + 4) = *(_QWORD *)&v9;
  *(_QWORD *)((char *)v6 + 12) = v2;
  v12 = v6;
  v13 = (void (*)(void))sub_11CCD22;
  v14 = sub_11CCD10;
  LODWORD(v7) = &v12;
  MinecraftScreenController::_displayCustomModalPopup(v3, (int)&v15, v7);
  if ( v13 )
    v13();
  if ( v10 )
    v10(&v9, &v9, 3);
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v15);
}


_DWORD *__fastcall MinecoinPurchaseScreenController::_fulfillPriorMinecoinPurchase(unsigned int a1, int a2)
{
  const void **v2; // r5@0
  int v3; // r10@1
  unsigned int v4; // r8@1
  int v5; // r9@1
  unsigned int v6; // r1@2
  unsigned int *v7; // r0@2
  unsigned int v8; // r2@5
  unsigned int v9; // r3@6
  unsigned int v10; // r0@7
  bool v11; // zf@7
  void *v12; // r0@10
  MinecoinModel *v13; // r0@10
  int *v14; // r4@10
  int v15; // r7@11
  void *v16; // r5@15
  void *v17; // r0@15
  int v18; // r5@16
  void (*v19)(void); // r2@16
  __int64 v20; // kr00_8@16
  int v21; // r6@16
  void (*v22)(void); // r3@16
  int v23; // r0@20
  int v24; // r1@20
  unsigned int *v25; // r1@21
  unsigned int v26; // r2@23
  int v27; // r1@26
  int v28; // r6@26
  int v29; // r0@26
  unsigned int *v30; // r2@27
  unsigned int v31; // r1@29
  _DWORD *result; // r0@36
  unsigned int *v33; // r1@37
  unsigned int *v34; // r4@43
  unsigned int *v35; // r2@51
  signed int v36; // r1@53
  int v37; // [sp+4h] [bp-54h]@26
  const void **v38; // [sp+8h] [bp-50h]@20
  int v39; // [sp+Ch] [bp-4Ch]@20
  __int64 v40; // [sp+10h] [bp-48h]@16
  void (*v41)(void); // [sp+18h] [bp-40h]@16
  int v42; // [sp+1Ch] [bp-3Ch]@16
  int v43; // [sp+20h] [bp-38h]@15
  int v44; // [sp+24h] [bp-34h]@15
  int v45; // [sp+28h] [bp-30h]@16
  int v46; // [sp+2Ch] [bp-2Ch]@16
  void (*v47)(void); // [sp+30h] [bp-28h]@16
  int v48; // [sp+34h] [bp-24h]@16

  v3 = a2;
  v4 = a1;
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 4);
    v7 = (unsigned int *)(v5 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v6 )
        {
          v5 = 0;
          goto LABEL_14;
        }
        __dmb();
        v8 = __ldrex(v7);
        if ( v8 == v6 )
          break;
        __clrex();
        v6 = v8;
      }
      v9 = __strex(v6 + 1, v7);
      v6 = v8;
    }
    while ( v9 );
    __dmb();
    v10 = *v7;
    v11 = v10 == 0;
    if ( v10 )
      v2 = *(const void ***)v3;
      v11 = *(_DWORD *)v3 == 0;
    if ( !v11 )
      v12 = MainMenuScreenModel::getMinecoinCatalogModel(*(MainMenuScreenModel **)(v4 + 424));
      v13 = (MinecoinModel *)MinecoinCatalogModel::findMinecoinModelBySku((int)v12, v2);
      v14 = (int *)(v4 + 424);
      if ( v13 )
        v15 = MinecoinModel::getCoinCount(v13);
      else
        v15 = 0;
      goto LABEL_15;
  }
  else
    v5 = 0;
LABEL_14:
  v14 = (int *)(v4 + 424);
  v15 = 0;
LABEL_15:
  MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&v43, *v14);
  v16 = operator new(0x18u);
  MinecoinTransactionContext::MinecoinTransactionContext((int)v16, &v43);
  v44 = (int)v16;
  v17 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v17);
  v18 = v44;
  MinecoinPurchaseScreenController::_getTransactionCallback((MinecoinPurchaseScreenController *)&v40, v4, v15);
  v19 = v41;
  v41 = 0;
  v20 = *(_QWORD *)v18;
  v21 = v42;
  v45 = *(_QWORD *)v18;
  v46 = HIDWORD(v20);
  *(_QWORD *)v18 = v40;
  v47 = *(void (**)(void))(v18 + 8);
  v22 = v47;
  *(_DWORD *)(v18 + 8) = v19;
  v48 = *(_DWORD *)(v18 + 12);
  *(_DWORD *)(v18 + 12) = v21;
  if ( v22 )
    v22();
  if ( v41 )
    v41();
  v23 = *v14;
  v38 = *(const void ***)v3;
  v24 = *(_DWORD *)(v3 + 4);
  v39 = v24;
  if ( v24 )
    v25 = (unsigned int *)(v24 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 + 1, v25) );
      ++*v25;
  v27 = v44;
  v44 = 0;
  v37 = v27;
  v28 = MainMenuScreenModel::fulfillPriorMinecoinPurchase(v23, (int)&v38, &v37);
  std::unique_ptr<MinecoinTransactionContext,std::default_delete<MinecoinTransactionContext>>::~unique_ptr(&v37);
  v29 = v39;
  if ( v39 )
    v30 = (unsigned int *)(v39 + 8);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 == 1 )
      (*(void (**)(void))(*(_DWORD *)v29 + 12))();
  if ( !v28 )
    MinecoinPurchaseScreenController::_dialogFulfillmentFailed((MinecoinPurchaseScreenController *)v4);
  result = std::unique_ptr<MinecoinTransactionContext,std::default_delete<MinecoinTransactionContext>>::~unique_ptr(&v44);
    v33 = (unsigned int *)(v5 + 4);
        result = (_DWORD *)__ldrex(v33);
      while ( __strex((unsigned int)result - 1, v33) );
      result = (_DWORD *)(*v33)--;
    if ( result == (_DWORD *)1 )
      v34 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
        do
          result = (_DWORD *)__ldrex(v34);
        while ( __strex((unsigned int)result - 1, v34) );
        result = (_DWORD *)(*v34)--;
      if ( result == (_DWORD *)1 )
        result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}


ModalScreenData *__fastcall MinecoinPurchaseScreenController::_promptForUnknownXuidOverrideAndFulfillment(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1 OVERLAPPED
  unsigned __int64 *v3; // r4@1
  int v4; // r4@1
  int v5; // r6@1 OVERLAPPED
  unsigned __int64 v6; // kr00_8@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  _DWORD *v9; // r0@7
  __int64 v10; // r2@7 OVERLAPPED
  unsigned int *v11; // r1@8
  int (__fastcall *v12)(_DWORD *, void **, int); // r1@13
  unsigned int *v13; // r1@16
  unsigned int v14; // r0@18
  _DWORD *v16; // [sp+0h] [bp-58h]@13
  void (*v17)(void); // [sp+8h] [bp-50h]@7
  void *v18; // [sp+10h] [bp-48h]@1
  int v19; // [sp+14h] [bp-44h]@1
  int v20; // [sp+18h] [bp-40h]@1
  int v21; // [sp+1Ch] [bp-3Ch]@1
  void *v22; // [sp+20h] [bp-38h]@1
  int v23; // [sp+24h] [bp-34h]@1
  int v24; // [sp+28h] [bp-30h]@1
  int v25; // [sp+2Ch] [bp-2Ch]@1
  void *v26; // [sp+30h] [bp-28h]@1
  void *v27; // [sp+34h] [bp-24h]@1
  void *v28; // [sp+38h] [bp-20h]@1
  void *v29; // [sp+3Ch] [bp-1Ch]@1
  int v30; // [sp+40h] [bp-18h]@1
  char v31; // [sp+44h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v18 = &unk_28898CC;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = &unk_28898CC;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = &unk_28898CC;
  v27 = &unk_28898CC;
  v28 = &unk_28898CC;
  v29 = &unk_28898CC;
  v30 = 1;
  v31 = 0;
  sub_15903F4(&v18, "store.coins.incomplete.title", (_BYTE *)0x1C);
  sub_15903F4(&v22, "store.coins.incomplete.fulfill.c", (_BYTE *)0x20);
  sub_15903F4(&v27, "gui.yes", (_BYTE *)7);
  sub_15903F4(&v29, "gui.no", (_BYTE *)6);
  v6 = *v3;
  v4 = *v3 >> 32;
  v5 = v6;
  if ( v4 )
  {
    v7 = (unsigned int *)(v4 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  v17 = 0;
  v9 = operator new(0xCu);
  *(_QWORD *)v9 = *(_QWORD *)&v2;
  v9[2] = v4;
    v11 = (unsigned int *)(v4 + 8);
      {
        LODWORD(v10) = __ldrex(v11);
        HIDWORD(v10) = __strex(v10 + 1, v11);
      }
      while ( HIDWORD(v10) );
      ++*v11;
  v12 = sub_11CD7D0;
  v16 = v9;
  LODWORD(v10) = sub_11CD5D8;
  *(_QWORD *)&v17 = *(__int64 *)((char *)&v10 - 4);
  LODWORD(v10) = &v16;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v18, v10);
  if ( v17 )
    v17();
    v13 = (unsigned int *)(v4 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v18);
}


int __fastcall MinecoinPurchaseScreenController::addStaticScreenVars(MinecoinPurchaseScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  ScreenController *v3; // r5@1
  int v4; // r6@1
  int v6; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$add_coin_not_visible");
  Json::Value::Value((Json::Value *)&v6, 1);
  Json::Value::operator=(v4, (const Json::Value *)&v6);
  Json::Value::~Value((Json::Value *)&v6);
  return ScreenController::addStaticScreenVars(v3, v2);
}


int __fastcall MinecoinPurchaseScreenController::MinecoinPurchaseScreenController(int a1, int a2)
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
  char v12; // [sp+7h] [bp-21h]@21
  int v13; // [sp+8h] [bp-20h]@1
  int v14; // [sp+Ch] [bp-1Ch]@1
  char v15; // [sp+10h] [bp-18h]@21

  v2 = a1;
  v13 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v14 = v3;
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
  MainMenuScreenController::MainMenuScreenController(v2, (int)&v13);
  v6 = v14;
  if ( v14 )
    v7 = (unsigned int *)(v14 + 4);
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
  *(_DWORD *)v2 = &off_26E2740;
  v12 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(v2 + 432, (int)&v15, &v12);
  *(_DWORD *)(v2 + 440) = 0;
  *(_DWORD *)(v2 + 444) = 0;
  *(_BYTE *)(v2 + 448) = 0;
  *(_DWORD *)(v2 + 460) = 0;
  MinecoinPurchaseScreenController::_registerBindings((MinecoinPurchaseScreenController *)v2);
  MinecoinPurchaseScreenController::_registerEvents((MinecoinPurchaseScreenController *)v2);
  return v2;
}


int __fastcall MinecoinPurchaseScreenController::_closeProgressDialog(int result)
{
  if ( *(_DWORD *)(result + 440) )
    *(_DWORD *)(result + 440) = 2;
  return result;
}


ScreenController *__fastcall MinecoinPurchaseScreenController::~MinecoinPurchaseScreenController(MinecoinPurchaseScreenController *this)
{
  MinecoinPurchaseScreenController *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r5@3
  unsigned int *v4; // r1@4
  unsigned int v5; // r0@6
  unsigned int *v6; // r6@10
  unsigned int v7; // r0@12

  v1 = this;
  *(_DWORD *)this = &off_26E2740;
  v2 = (void (*)(void))*((_DWORD *)this + 115);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 109);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return j_j_j__ZN24MainMenuScreenControllerD2Ev(v1);
}


ModalScreenData *__fastcall MinecoinPurchaseScreenController::_checkUnfulfilledPurchase(MinecoinPurchaseScreenController *this)
{
  MinecoinPurchaseScreenController *v1; // r4@1
  ModalScreenData *result; // r0@1
  _DWORD *v3; // r0@2
  __int64 v4; // r1@2
  _DWORD *v5; // [sp+0h] [bp-18h]@2
  __int64 v6; // [sp+8h] [bp-10h]@2

  v1 = this;
  result = (ModalScreenData *)MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 106), 0);
  if ( result == (ModalScreenData *)1 )
  {
    v3 = operator new(4u);
    LODWORD(v4) = sub_11CC770;
    *v3 = v1;
    HIDWORD(v4) = sub_11CC4E4;
    v5 = v3;
    v6 = v4;
    result = MinecoinPurchaseScreenController::_verifyAppStoreReady((int)v1, (int)&v5);
    if ( (_DWORD)v6 )
      result = (ModalScreenData *)((int (__cdecl *)(_DWORD **))v6)(&v5);
  }
  return result;
}


void *__fastcall MinecoinPurchaseScreenController::_getTransactionCallback(MinecoinPurchaseScreenController *this, unsigned int a2, int a3)
{
  unsigned int v3; // r7@1
  int v4; // r8@1
  __int64 v5; // kr00_8@1
  MinecoinPurchaseScreenController *v6; // r5@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  unsigned int v9; // r1@9
  unsigned int v10; // r1@14
  void *result; // r0@17
  unsigned int *v12; // r7@18
  unsigned int v13; // r1@20
  __int64 v14; // r1@22
  __int64 v15; // r2@24
  unsigned int v16; // r0@26
  unsigned int v17; // r0@33

  v3 = a2;
  v4 = a3;
  v5 = *(_QWORD *)(a2 + 432);
  v6 = this;
  if ( HIDWORD(v5) )
  {
    v7 = (unsigned int *)(HIDWORD(v5) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
        v9 = __ldrex(v7);
      while ( __strex(v9 + 1, v7) );
        v10 = __ldrex(v7);
      while ( __strex(v10 + 1, v7) );
  }
  *((_DWORD *)v6 + 2) = 0;
  result = operator new(0x10u);
  *(_DWORD *)result = v3;
  *(_QWORD *)((char *)result + 4) = v5;
    v12 = (unsigned int *)(HIDWORD(v5) + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
    HIDWORD(v15) = sub_11CBEA0;
    *((_DWORD *)result + 3) = v4;
    LODWORD(v15) = sub_11CC434;
    *(_DWORD *)v6 = result;
    *((_QWORD *)v6 + 1) = v15;
        v16 = __ldrex(v12);
      while ( __strex(v16 - 1, v12) );
      v16 = (*v12)--;
    if ( v16 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 12))(HIDWORD(v5));
        v17 = __ldrex(v12);
      while ( __strex(v17 - 1, v12) );
      v17 = (*v12)--;
    if ( v17 == 1 )
        result = (void *)__ldrex(v12);
      while ( __strex((unsigned int)result - 1, v12) );
      result = (void *)(*v12)--;
    if ( result == (void *)1 )
      result = (void *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 12))(HIDWORD(v5));
  else
    HIDWORD(v14) = sub_11CBEA0;
    LODWORD(v14) = sub_11CC434;
    *((_QWORD *)v6 + 1) = v14;
  return result;
}


ModalScreenData *__fastcall MinecoinPurchaseScreenController::_verifyAppStoreReady(int a1, int a2)
{
  __int64 v2; // r6@0
  int v3; // r5@1
  int v4; // r6@1
  ModalScreenData *result; // r0@3
  void (__fastcall *v6)(int *, int, signed int); // r3@4
  void *v7; // r0@7
  int v8; // [sp+4h] [bp-3Ch]@5
  int (__fastcall *v9)(int *, int *, signed int); // [sp+Ch] [bp-34h]@4
  int v10; // [sp+10h] [bp-30h]@5
  void *v11; // [sp+14h] [bp-2Ch]@7
  int (*v12)(void); // [sp+1Ch] [bp-24h]@7
  int (__fastcall *v13)(int **); // [sp+20h] [bp-20h]@7

  v3 = a1;
  v4 = a2;
  if ( MainMenuScreenModel::isAppStoreReady(*(MainMenuScreenModel **)(a1 + 424)) == 1 )
  {
    if ( !*(_DWORD *)(v4 + 8) )
      sub_1590214();
    result = (ModalScreenData *)(*(int (__fastcall **)(int))(v4 + 12))(v4);
  }
  else
    v9 = 0;
    v6 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
    if ( v6 )
    {
      v6(&v8, v4, 2);
      HIDWORD(v2) = *(_DWORD *)(v4 + 12);
      v10 = *(_DWORD *)(v2 + 12);
      LODWORD(v2) = *(_DWORD *)(v2 + 8);
      v9 = (int (__fastcall *)(int *, int *, signed int))v2;
    }
    else
      LODWORD(v2) = 0;
    v12 = 0;
    v7 = operator new(0x14u);
    *(_DWORD *)v7 = v3;
    *(_QWORD *)((char *)v7 + 4) = *(_QWORD *)&v8;
    *(_QWORD *)((char *)v7 + 12) = v2;
    v11 = v7;
    v12 = (int (*)(void))sub_11CCA84;
    v13 = sub_11CC7A8;
    result = MinecoinPurchaseScreenController::_promptPrepareAppStore(v3, (int)&v11);
    if ( v12 )
      result = (ModalScreenData *)v12();
    if ( v9 )
      result = (ModalScreenData *)v9(&v8, &v8, 3);
  return result;
}


int __fastcall MinecoinPurchaseScreenController::tick(MinecoinPurchaseScreenController *this)
{
  MinecoinPurchaseScreenController *v1; // r4@1
  int v2; // r5@1
  MinecoinCatalogModel *v3; // r0@1
  int v4; // r0@1
  void (__fastcall *v5)(char *, char *, signed int); // r3@7

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  v3 = (MinecoinCatalogModel *)MainMenuScreenModel::getMinecoinCatalogModel(*((MainMenuScreenModel **)v1 + 106));
  v4 = MinecoinCatalogModel::update(v3);
  if ( v4 != *((_DWORD *)v1 + 111) )
  {
    v2 |= 1u;
    *((_DWORD *)v1 + 111) = v4;
    if ( v4 == 2 )
    {
      MinecoinPurchaseScreenController::_checkUnfulfilledPurchase(v1);
    }
    else if ( v4 == 3 )
      MinecoinPurchaseScreenController::_dialogNoCoinOffersFound(v1);
  }
  if ( *((_DWORD *)v1 + 115) )
    (*((void (__fastcall **)(_DWORD))v1 + 116))((char *)v1 + 452);
    v5 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 115);
    if ( v5 )
      v5((char *)v1 + 452, (char *)v1 + 452, 3);
      *((_DWORD *)v1 + 115) = 0;
      *((_DWORD *)v1 + 116) = 0;
  return v2;
}


ModalScreenData *__fastcall MinecoinPurchaseScreenController::_dialogNoInternet(MinecoinPurchaseScreenController *this)
{
  MinecoinPurchaseScreenController *v1; // r4@1
  __int64 v2; // r1@1 OVERLAPPED
  void *v4; // [sp+0h] [bp-58h]@1
  __int64 v5; // [sp+8h] [bp-50h]@1
  void *v6; // [sp+10h] [bp-48h]@1
  int v7; // [sp+14h] [bp-44h]@1
  int v8; // [sp+18h] [bp-40h]@1
  int v9; // [sp+1Ch] [bp-3Ch]@1
  void *v10; // [sp+20h] [bp-38h]@1
  int v11; // [sp+24h] [bp-34h]@1
  int v12; // [sp+28h] [bp-30h]@1
  int v13; // [sp+2Ch] [bp-2Ch]@1
  void *v14; // [sp+30h] [bp-28h]@1
  void *v15; // [sp+34h] [bp-24h]@1
  void *v16; // [sp+38h] [bp-20h]@1
  void *v17; // [sp+3Ch] [bp-1Ch]@1
  int v18; // [sp+40h] [bp-18h]@1
  char v19; // [sp+44h] [bp-14h]@1

  v1 = this;
  v6 = &unk_28898CC;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = &unk_28898CC;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = &unk_28898CC;
  v15 = &unk_28898CC;
  v16 = &unk_28898CC;
  v17 = &unk_28898CC;
  v18 = 1;
  v19 = 0;
  sub_15903F4(&v6, "store.connection.failed.title", (_BYTE *)0x1D);
  sub_15903F4(&v10, "store.connection.failed.body", (_BYTE *)0x1C);
  sub_15903F4(&v16, "gui.close", (_BYTE *)9);
  v18 = 2;
  v4 = operator new(1u);
  LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIFv19ModalScreenButtonIdEEEd_UlS6_E_E10_M_managerERSt9_Any_dataRKSB_St18_Manager_operation;
  HIDWORD(v2) = ZNSt17_Function_handlerIFv19ModalScreenButtonIdEZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIS1_EEd_UlS0_E_E9_M_invokeERKSt9_Any_dataS0_;
  v5 = v2;
  HIDWORD(v2) = &v4;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v6, *(__int64 *)((char *)&v2 + 4));
  if ( (_DWORD)v5 )
    ((void (*)(void))v5)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v6);
}


void __fastcall MinecoinPurchaseScreenController::_openProgressDialog(MinecoinPurchaseScreenController *this, bool a2)
{
  MinecoinPurchaseScreenController::_openProgressDialog(this, a2);
}


ModalScreenData *__fastcall MinecoinPurchaseScreenController::_dialogTooManyCoins(MinecoinPurchaseScreenController *this)
{
  MinecoinPurchaseScreenController *v1; // r4@1
  __int64 v2; // r1@1 OVERLAPPED
  void *v4; // [sp+0h] [bp-58h]@1
  __int64 v5; // [sp+8h] [bp-50h]@1
  void *v6; // [sp+10h] [bp-48h]@1
  int v7; // [sp+14h] [bp-44h]@1
  int v8; // [sp+18h] [bp-40h]@1
  int v9; // [sp+1Ch] [bp-3Ch]@1
  void *v10; // [sp+20h] [bp-38h]@1
  int v11; // [sp+24h] [bp-34h]@1
  int v12; // [sp+28h] [bp-30h]@1
  int v13; // [sp+2Ch] [bp-2Ch]@1
  void *v14; // [sp+30h] [bp-28h]@1
  void *v15; // [sp+34h] [bp-24h]@1
  void *v16; // [sp+38h] [bp-20h]@1
  void *v17; // [sp+3Ch] [bp-1Ch]@1
  int v18; // [sp+40h] [bp-18h]@1
  char v19; // [sp+44h] [bp-14h]@1

  v1 = this;
  v6 = &unk_28898CC;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = &unk_28898CC;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = &unk_28898CC;
  v15 = &unk_28898CC;
  v16 = &unk_28898CC;
  v17 = &unk_28898CC;
  v18 = 1;
  v19 = 0;
  sub_15903F4(&v10, "store.coins.tooManyCoins", (_BYTE *)0x18);
  sub_15903F4(&v16, "gui.ok", (_BYTE *)6);
  v18 = 2;
  v4 = operator new(1u);
  LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIFv19ModalScreenButtonIdEEEd_UlS6_E_E10_M_managerERSt9_Any_dataRKSB_St18_Manager_operation;
  HIDWORD(v2) = ZNSt17_Function_handlerIFv19ModalScreenButtonIdEZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIS1_EEd_UlS0_E_E9_M_invokeERKSt9_Any_dataS0_;
  v5 = v2;
  HIDWORD(v2) = &v4;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v6, *(__int64 *)((char *)&v2 + 4));
  if ( (_DWORD)v5 )
    ((void (*)(void))v5)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v6);
}


void __fastcall MinecoinPurchaseScreenController::_registerEvents(MinecoinPurchaseScreenController *this)
{
  MinecoinPurchaseScreenController::_registerEvents(this);
}


void __fastcall MinecoinPurchaseScreenController::~MinecoinPurchaseScreenController(MinecoinPurchaseScreenController *this)
{
  MinecoinPurchaseScreenController::~MinecoinPurchaseScreenController(this);
}


ModalScreenData *__fastcall MinecoinPurchaseScreenController::_promptForAutoFulfillment(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1 OVERLAPPED
  unsigned __int64 *v3; // r4@1
  int v4; // r4@1
  int v5; // r6@1 OVERLAPPED
  unsigned __int64 v6; // kr00_8@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  _DWORD *v9; // r0@7
  __int64 v10; // r2@7 OVERLAPPED
  unsigned int *v11; // r1@8
  int (__fastcall *v12)(_DWORD *, void **, int); // r1@13
  unsigned int *v13; // r1@16
  unsigned int v14; // r0@18
  _DWORD *v16; // [sp+0h] [bp-58h]@13
  void (*v17)(void); // [sp+8h] [bp-50h]@7
  void *v18; // [sp+10h] [bp-48h]@1
  int v19; // [sp+14h] [bp-44h]@1
  int v20; // [sp+18h] [bp-40h]@1
  int v21; // [sp+1Ch] [bp-3Ch]@1
  void *v22; // [sp+20h] [bp-38h]@1
  int v23; // [sp+24h] [bp-34h]@1
  int v24; // [sp+28h] [bp-30h]@1
  int v25; // [sp+2Ch] [bp-2Ch]@1
  void *v26; // [sp+30h] [bp-28h]@1
  void *v27; // [sp+34h] [bp-24h]@1
  void *v28; // [sp+38h] [bp-20h]@1
  void *v29; // [sp+3Ch] [bp-1Ch]@1
  int v30; // [sp+40h] [bp-18h]@1
  char v31; // [sp+44h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v18 = &unk_28898CC;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = &unk_28898CC;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = &unk_28898CC;
  v27 = &unk_28898CC;
  v28 = &unk_28898CC;
  v29 = &unk_28898CC;
  v30 = 1;
  v31 = 0;
  sub_15903F4(&v18, "store.coins.incomplete.title", (_BYTE *)0x1C);
  sub_15903F4(&v22, "store.coins.incomplete.fulfill.a", (_BYTE *)0x20);
  sub_15903F4(&v28, "gui.ok", (_BYTE *)6);
  v30 = 2;
  v6 = *v3;
  v4 = *v3 >> 32;
  v5 = v6;
  if ( v4 )
  {
    v7 = (unsigned int *)(v4 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  v17 = 0;
  v9 = operator new(0xCu);
  *(_QWORD *)v9 = *(_QWORD *)&v2;
  v9[2] = v4;
    v11 = (unsigned int *)(v4 + 8);
      {
        LODWORD(v10) = __ldrex(v11);
        HIDWORD(v10) = __strex(v10 + 1, v11);
      }
      while ( HIDWORD(v10) );
      ++*v11;
  v12 = sub_11CCFA0;
  v16 = v9;
  LODWORD(v10) = sub_11CCDA8;
  *(_QWORD *)&v17 = *(__int64 *)((char *)&v10 - 4);
  LODWORD(v10) = &v16;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v18, v10);
  if ( v17 )
    v17();
    v13 = (unsigned int *)(v4 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v18);
}


void __fastcall MinecoinPurchaseScreenController::_openProgressDialog(MinecoinPurchaseScreenController *this, bool a2)
{
  MinecoinPurchaseScreenController *v2; // r4@1
  bool v3; // r6@1
  int v4; // r0@1
  void *v5; // r5@5
  void (*v6)(void); // r0@5
  int v7; // r4@9
  void **v8; // r0@9
  void *v9; // r0@9
  void *v10; // r0@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  int v15; // [sp+8h] [bp-48h]@9
  void *v16; // [sp+Ch] [bp-44h]@9
  int v17; // [sp+14h] [bp-3Ch]@9
  char v18; // [sp+18h] [bp-38h]@5
  void (*v19)(void); // [sp+20h] [bp-30h]@5
  int v20; // [sp+24h] [bp-2Ch]@5
  __int64 v21; // [sp+28h] [bp-28h]@5
  void (*v22)(void); // [sp+30h] [bp-20h]@5
  int v23; // [sp+34h] [bp-1Ch]@5

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 110);
  if ( v4 )
  {
    if ( v4 == 2 )
      *((_DWORD *)v2 + 110) = 1;
  }
  else
    *((_DWORD *)v2 + 110) = 1;
    MinecoinPurchaseScreenController::_getProgressHandlerCallback((MinecoinPurchaseScreenController *)&v18, (int)v2);
    v5 = operator new(0x20u);
    v21 = *(_QWORD *)&v18;
    v6 = v19;
    v19 = 0;
    v22 = v6;
    v23 = v20;
    PurchaseProgressHandler::PurchaseProgressHandler((int)v5, (int)&v21, v3);
    if ( v22 )
      v22();
    if ( v19 )
      v19();
    v7 = *((_DWORD *)v2 + 106);
    sub_1590164((void **)&v17, "purchase_in_progress");
    v16 = v5;
    v8 = sub_1590164((void **)&v15, (const char *)&unk_257BC67);
    MainMenuScreenModel::navigateToModalProgressScreen(v7, (int)&v17, (int)&v16, 1, (int)v8);
    v9 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v9);
    }
    if ( v16 )
      (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    v16 = 0;
    v10 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v17 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v10);
}


ModalScreenData *__fastcall MinecoinPurchaseScreenController::_dialogPurchaseFailed(MinecoinPurchaseScreenController *this)
{
  MinecoinPurchaseScreenController *v1; // r4@1
  __int64 v2; // r1@1 OVERLAPPED
  void *v4; // [sp+0h] [bp-58h]@1
  __int64 v5; // [sp+8h] [bp-50h]@1
  void *v6; // [sp+10h] [bp-48h]@1
  int v7; // [sp+14h] [bp-44h]@1
  int v8; // [sp+18h] [bp-40h]@1
  int v9; // [sp+1Ch] [bp-3Ch]@1
  void *v10; // [sp+20h] [bp-38h]@1
  int v11; // [sp+24h] [bp-34h]@1
  int v12; // [sp+28h] [bp-30h]@1
  int v13; // [sp+2Ch] [bp-2Ch]@1
  void *v14; // [sp+30h] [bp-28h]@1
  void *v15; // [sp+34h] [bp-24h]@1
  void *v16; // [sp+38h] [bp-20h]@1
  void *v17; // [sp+3Ch] [bp-1Ch]@1
  int v18; // [sp+40h] [bp-18h]@1
  char v19; // [sp+44h] [bp-14h]@1

  v1 = this;
  v6 = &unk_28898CC;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = &unk_28898CC;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = &unk_28898CC;
  v15 = &unk_28898CC;
  v16 = &unk_28898CC;
  v17 = &unk_28898CC;
  v18 = 1;
  v19 = 0;
  sub_15903F4(&v6, "store.popup.purchaseFailed.title", (_BYTE *)0x20);
  sub_15903F4(&v10, "store.popup.purchaseFailed.msg", (_BYTE *)0x1E);
  sub_15903F4(&v16, "gui.close", (_BYTE *)9);
  v18 = 2;
  v4 = operator new(1u);
  LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIFv19ModalScreenButtonIdEEEd_UlS6_E_E10_M_managerERSt9_Any_dataRKSB_St18_Manager_operation;
  HIDWORD(v2) = ZNSt17_Function_handlerIFv19ModalScreenButtonIdEZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIS1_EEd_UlS0_E_E9_M_invokeERKSt9_Any_dataS0_;
  v5 = v2;
  HIDWORD(v2) = &v4;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v6, *(__int64 *)((char *)&v2 + 4));
  if ( (_DWORD)v5 )
    ((void (*)(void))v5)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v6);
}


void *__fastcall MinecoinPurchaseScreenController::_purchaseCoinOffer(MinecoinPurchaseScreenController *this, int a2)
{
  MinecoinPurchaseScreenController *v2; // r4@1
  int v3; // r5@1
  MinecoinCatalogModel *v4; // r0@2
  char *v5; // r8@2
  void *v6; // r6@2
  void *v7; // r0@2
  int v8; // r6@3
  int v9; // r0@3
  void (*v10)(void); // r2@3
  __int64 v11; // kr00_8@3
  int v12; // r7@3
  void (*v13)(void); // r3@3
  void *v14; // r1@7
  int v15; // r0@7
  signed int v16; // r5@7
  _DWORD *v17; // r6@7
  int v18; // r1@8
  void *v19; // r0@8
  int v20; // r1@9
  void *v21; // r0@9
  void (__fastcall *v22)(_DWORD *, _DWORD *, signed int); // r3@10
  void *result; // r0@15
  unsigned int *v24; // r2@17
  signed int v25; // r1@19
  unsigned int *v26; // r2@21
  signed int v27; // r1@23
  unsigned int *v28; // r2@25
  signed int v29; // r1@27
  void *ptr; // [sp+4h] [bp-44h]@7
  __int64 v31; // [sp+8h] [bp-40h]@3
  void (*v32)(void); // [sp+10h] [bp-38h]@3
  int v33; // [sp+14h] [bp-34h]@3
  int v34; // [sp+18h] [bp-30h]@2
  void *v35; // [sp+1Ch] [bp-2Ch]@2
  int v36; // [sp+20h] [bp-28h]@3
  int v37; // [sp+24h] [bp-24h]@3
  void (*v38)(void); // [sp+28h] [bp-20h]@3
  int v39; // [sp+2Ch] [bp-1Ch]@3

  v2 = this;
  v3 = a2;
  if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 106), 0) )
  {
    v4 = (MinecoinCatalogModel *)MainMenuScreenModel::getMinecoinCatalogModel(*((MainMenuScreenModel **)v2 + 106));
    v5 = MinecoinCatalogModel::getMinecoinModel(v4, v3);
    MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&v34, *((_DWORD *)v2 + 106));
    v6 = operator new(0x18u);
    MinecoinTransactionContext::MinecoinTransactionContext((int)v6, &v34);
    v35 = v6;
    v7 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
    {
      v24 = (unsigned int *)(v34 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v7);
    }
    v8 = (int)v35;
    v9 = MinecoinModel::getCoinCount((MinecoinModel *)v5);
    MinecoinPurchaseScreenController::_getTransactionCallback(
      (MinecoinPurchaseScreenController *)&v31,
      (unsigned int)v2,
      v9);
    v10 = v32;
    v32 = 0;
    v11 = *(_QWORD *)v8;
    v12 = v33;
    v36 = *(_QWORD *)v8;
    v37 = HIDWORD(v11);
    *(_QWORD *)v8 = v31;
    v38 = *(void (**)(void))(v8 + 8);
    v13 = v38;
    *(_DWORD *)(v8 + 8) = v10;
    v39 = *(_DWORD *)(v8 + 12);
    *(_DWORD *)(v8 + 12) = v12;
    if ( v13 )
      v13();
    if ( v32 )
      v32();
    v14 = v35;
    v15 = *((_DWORD *)v2 + 106);
    v35 = 0;
    ptr = v14;
    v16 = MainMenuScreenModel::purchaseMinecoinOffer(v15, (MinecoinModel *)v5, (int *)&ptr);
    v17 = ptr;
    if ( ptr )
      v18 = *((_DWORD *)ptr + 5);
      v19 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v18 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
        }
        else
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v19);
      v20 = v17[4];
      v21 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v20 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v21);
      v22 = (void (__fastcall *)(_DWORD *, _DWORD *, signed int))v17[2];
      if ( v22 )
        v22(v17, v17, 3);
      operator delete(v17);
    ptr = 0;
    if ( !v16 )
      MinecoinPurchaseScreenController::_dialogPurchaseFailed(v2);
    result = std::unique_ptr<MinecoinTransactionContext,std::default_delete<MinecoinTransactionContext>>::~unique_ptr(&v35);
  }
  else
    result = (void *)j_j_j__ZN32MinecoinPurchaseScreenController17_dialogNoInternetEv(v2);
  return result;
}


void __fastcall MinecoinPurchaseScreenController::_registerBindings(MinecoinPurchaseScreenController *this)
{
  MinecoinPurchaseScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  __int64 v11; // r1@13
  _DWORD *v12; // r0@17
  __int64 v13; // r1@17
  __int64 v14; // r1@17
  _DWORD *v15; // r0@21
  __int64 v16; // r1@21
  _DWORD *v17; // r0@23
  __int64 v18; // r1@23
  _DWORD *v19; // r0@25
  __int64 v20; // r1@25
  __int64 v21; // r1@25
  _DWORD *v22; // r0@29
  __int64 v23; // r1@29
  __int64 v24; // r1@29
  _DWORD *v25; // r0@33
  __int64 v26; // r1@33
  __int64 v27; // r1@33
  void *v28; // [sp+4h] [bp-16Ch]@33
  __int64 v29; // [sp+Ch] [bp-164h]@33
  _DWORD *v30; // [sp+14h] [bp-15Ch]@33
  __int64 v31; // [sp+1Ch] [bp-154h]@33
  int v32; // [sp+24h] [bp-14Ch]@33
  void *v33; // [sp+28h] [bp-148h]@29
  __int64 v34; // [sp+30h] [bp-140h]@29
  _DWORD *v35; // [sp+38h] [bp-138h]@29
  __int64 v36; // [sp+40h] [bp-130h]@29
  int v37; // [sp+48h] [bp-128h]@29
  void *v38; // [sp+4Ch] [bp-124h]@25
  __int64 v39; // [sp+54h] [bp-11Ch]@25
  _DWORD *v40; // [sp+5Ch] [bp-114h]@25
  __int64 v41; // [sp+64h] [bp-10Ch]@25
  int v42; // [sp+6Ch] [bp-104h]@25
  _DWORD *v43; // [sp+70h] [bp-100h]@23
  __int64 v44; // [sp+78h] [bp-F8h]@23
  char v45; // [sp+80h] [bp-F0h]@23
  int v46; // [sp+84h] [bp-ECh]@23
  _DWORD *v47; // [sp+88h] [bp-E8h]@21
  __int64 v48; // [sp+90h] [bp-E0h]@21
  char v49; // [sp+98h] [bp-D8h]@21
  int v50; // [sp+9Ch] [bp-D4h]@21
  void *v51; // [sp+A0h] [bp-D0h]@17
  __int64 v52; // [sp+A8h] [bp-C8h]@17
  _DWORD *v53; // [sp+B0h] [bp-C0h]@17
  __int64 v54; // [sp+B8h] [bp-B8h]@17
  int v55; // [sp+C0h] [bp-B0h]@17
  int v56; // [sp+C4h] [bp-ACh]@17
  void *v57; // [sp+C8h] [bp-A8h]@13
  __int64 v58; // [sp+D0h] [bp-A0h]@13
  void *v59; // [sp+D8h] [bp-98h]@13
  void (*v60)(void); // [sp+E0h] [bp-90h]@13
  void (__fastcall *v61)(int *, int, signed int); // [sp+E4h] [bp-8Ch]@13
  int v62; // [sp+E8h] [bp-88h]@13
  int v63; // [sp+ECh] [bp-84h]@13
  void *v64; // [sp+F0h] [bp-80h]@9
  __int64 v65; // [sp+F8h] [bp-78h]@9
  _DWORD *v66; // [sp+100h] [bp-70h]@9
  __int64 v67; // [sp+108h] [bp-68h]@9
  int v68; // [sp+110h] [bp-60h]@9
  int v69; // [sp+114h] [bp-5Ch]@9
  void *v70; // [sp+118h] [bp-58h]@5
  __int64 v71; // [sp+120h] [bp-50h]@5
  _DWORD *v72; // [sp+128h] [bp-48h]@5
  __int64 v73; // [sp+130h] [bp-40h]@5
  int v74; // [sp+138h] [bp-38h]@5
  void *v75; // [sp+13Ch] [bp-34h]@1
  __int64 v76; // [sp+144h] [bp-2Ch]@1
  _DWORD *v77; // [sp+14Ch] [bp-24h]@1
  __int64 v78; // [sp+154h] [bp-1Ch]@1
  int v79; // [sp+15Ch] [bp-14h]@1

  v1 = this;
  v79 = -1625518656;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11CAAF6;
  *v2 = v1;
  HIDWORD(v3) = sub_11CAAD8;
  v77 = v2;
  v78 = v3;
  v75 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v76 = v4;
  ScreenController::bindBool((int)v1, &v79, (int)&v77, (int)&v75);
  if ( (_DWORD)v76 )
    ((void (*)(void))v76)();
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  v74 = -1878889018;
  v5 = operator new(4u);
  LODWORD(v6) = sub_11CAB48;
  *v5 = v1;
  HIDWORD(v6) = sub_11CAB2C;
  v72 = v5;
  v73 = v6;
  v70 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v71 = v7;
  ScreenController::bindGridSize((int)v1, &v74, (int)&v72, (int)&v70);
  if ( (_DWORD)v71 )
    ((void (*)(void))v71)();
  if ( (_DWORD)v73 )
    ((void (*)(void))v73)();
  v68 = 200482419;
  v69 = 1533683071;
  v8 = operator new(4u);
  LODWORD(v9) = sub_11CABA4;
  *v8 = v1;
  HIDWORD(v9) = sub_11CAB7E;
  v66 = v8;
  v67 = v9;
  v64 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v65 = v10;
  ScreenController::bindStringForCollection((int)v1, &v69, &v68, (int)&v66, (int)&v64);
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  if ( (_DWORD)v67 )
    ((void (*)(void))v67)();
  v63 = 1533683071;
  v62 = -1375697592;
  v59 = operator new(1u);
  v60 = (void (*)(void))sub_11CAD60;
  v61 = sub_11CABDC;
  v57 = operator new(1u);
  LODWORD(v11) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v11) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v58 = v11;
  ScreenController::bindStringForCollection((int)v1, &v63, &v62, (int)&v59, (int)&v57);
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  if ( v60 )
    v60();
  v56 = 1533683071;
  v55 = 1627770875;
  v12 = operator new(4u);
  LODWORD(v13) = sub_11CAE80;
  *v12 = v1;
  HIDWORD(v13) = sub_11CAD90;
  v53 = v12;
  v54 = v13;
  v51 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v52 = v14;
  ScreenController::bindStringForCollection((int)v1, &v56, &v55, (int)&v53, (int)&v51);
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  v50 = 1533683071;
  StringHash::StringHash<char [25]>(&v49, (int)"#coin_offer_texture_name");
  v15 = operator new(4u);
  LODWORD(v16) = sub_11CAEEC;
  *v15 = v1;
  HIDWORD(v16) = sub_11CAEB6;
  v47 = v15;
  v48 = v16;
  ScreenController::bindForCollection((int)v1, &v50, &v49, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v46 = 1533683071;
  StringHash::StringHash<char [32]>(&v45, (int)"#coin_offer_texture_file_system");
  v17 = operator new(4u);
  LODWORD(v18) = sub_11CB010;
  *v17 = v1;
  HIDWORD(v18) = sub_11CAF24;
  v43 = v17;
  v44 = v18;
  ScreenController::bindForCollection((int)v1, &v46, &v45, (int)&v43);
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  v42 = -901195050;
  v19 = operator new(4u);
  LODWORD(v20) = sub_11CB2D8;
  *v19 = v1;
  HIDWORD(v20) = sub_11CB048;
  v40 = v19;
  v41 = v20;
  v38 = operator new(1u);
  LODWORD(v21) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v21) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v39 = v21;
  ScreenController::bindString((int)v1, &v42, (int)&v40, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  v37 = 1684717857;
  v22 = operator new(4u);
  LODWORD(v23) = sub_11CB324;
  *v22 = v1;
  HIDWORD(v23) = sub_11CB30E;
  v35 = v22;
  v36 = v23;
  v33 = operator new(1u);
  LODWORD(v24) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v24) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v34 = v24;
  ScreenController::bindBool((int)v1, &v37, (int)&v35, (int)&v33);
  if ( (_DWORD)v34 )
    ((void (*)(void))v34)();
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  v32 = 1462639854;
  v25 = operator new(4u);
  LODWORD(v26) = sub_11CB36C;
  *v25 = v1;
  HIDWORD(v26) = sub_11CB35A;
  v30 = v25;
  v31 = v26;
  v28 = operator new(1u);
  LODWORD(v27) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v27) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v29 = v27;
  ScreenController::bindBool((int)v1, &v32, (int)&v30, (int)&v28);
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
  if ( (_DWORD)v31 )
    ((void (*)(void))v31)();
}


int __fastcall MinecoinPurchaseScreenController::onOpen(int result)
{
  MinecoinCatalogModel *v1; // r0@2

  if ( !*(_BYTE *)(result + 448) )
  {
    *(_BYTE *)(result + 448) = 1;
    v1 = (MinecoinCatalogModel *)MainMenuScreenModel::getMinecoinCatalogModel(*(MainMenuScreenModel **)(result + 424));
    result = (int)j_j_j__ZN20MinecoinCatalogModel5fetchEv(v1);
  }
  return result;
}
