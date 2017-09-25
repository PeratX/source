

int __fastcall RealmsCreateScreenController::RealmsCreateScreenController(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r10@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r5@14
  unsigned int v12; // r0@16
  int v13; // r6@23
  char *v14; // r7@23
  char *v15; // r1@24
  unsigned int *v16; // r2@25
  signed int v17; // r5@27
  char *v18; // r4@31
  int *v19; // r0@32
  void *v20; // r0@37
  void *v21; // r0@38
  int v22; // r0@39
  unsigned int *v24; // r2@42
  signed int v25; // r1@44
  unsigned int *v26; // r2@46
  signed int v27; // r1@48
  int v28; // [sp+8h] [bp-50h]@23
  char *v29; // [sp+Ch] [bp-4Ch]@23
  char *v30; // [sp+10h] [bp-48h]@23
  char *v31; // [sp+14h] [bp-44h]@23
  int v32; // [sp+1Ch] [bp-3Ch]@23
  char v33; // [sp+23h] [bp-35h]@21
  int v34; // [sp+24h] [bp-34h]@1
  int v35; // [sp+28h] [bp-30h]@1
  char v36; // [sp+2Ch] [bp-2Ch]@21
  char v37; // [sp+30h] [bp-28h]@24

  v3 = a1;
  v34 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v35 = v5;
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
  MainMenuScreenController::MainMenuScreenController(v3, (int)&v34);
  v8 = v35;
  if ( v35 )
    v9 = (unsigned int *)(v35 + 4);
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
  *(_DWORD *)v3 = &off_26E2E88;
  v33 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(v3 + 432, (int)&v36, &v33);
  *(_BYTE *)(v3 + 446) = 0;
  *(_WORD *)(v3 + 444) = 0;
  *(_DWORD *)(v3 + 440) = 0;
  *(_WORD *)(v3 + 447) = 1;
  *(_DWORD *)(v3 + 452) = *(_DWORD *)v4;
  if ( *(_DWORD *)(*(_DWORD *)(v4 + 4) - 12) )
    sub_21E8AF4((int *)(v3 + 456), (int *)(v4 + 4));
  else
    sub_21E94B4((void **)&v32, "realmsCreateScreen.defaultRealm");
    MinecraftScreenModel::getCurrentGamertag((MinecraftScreenModel *)&v28, *(_DWORD *)(v3 + 424));
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v29 = (char *)operator new(4u);
    v31 = v29 + 4;
    v30 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v28,
                    (int)&v29,
                    (int)v29);
    I18n::get((int *)(v3 + 456), &v32, (unsigned __int64 *)&v29);
    v13 = (int)v30;
    v14 = v29;
    if ( v29 != v30 )
      v15 = &v37;
        v19 = (int *)(*(_DWORD *)v14 - 12);
        if ( v19 != &dword_28898C0 )
        {
          v16 = (unsigned int *)(*(_DWORD *)v14 - 4);
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
            v18 = v15;
            j_j_j_j__ZdlPv_9(v19);
            v15 = v18;
        }
        v14 += 4;
      while ( v14 != (char *)v13 );
      v14 = v29;
    if ( v14 )
      operator delete(v14);
    v20 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v28 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v32 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
  sub_21E8AF4((int *)(v3 + 460), (int *)(v4 + 8));
  v22 = MainMenuScreenModel::getStoreSupportsSubscriptions(*(MainMenuScreenModel **)(v3 + 424));
  *(_DWORD *)(v3 + 464) = v22;
  if ( v22 )
    v22 = 2;
  *(_DWORD *)(v3 + 468) = v22;
  *(_DWORD *)(v3 + 472) = *(_DWORD *)(v4 + 12);
  *(_BYTE *)(v3 + 476) = *(_BYTE *)(v4 + 17);
  *(_DWORD *)(v3 + 492) = &unk_28898CC;
  *(_DWORD *)(v3 + 496) = &unk_28898CC;
  *(_DWORD *)(v3 + 500) = &unk_28898CC;
  *(_DWORD *)(v3 + 504) = &unk_28898CC;
  *(_BYTE *)(v3 + 520) = 0;
  *(_DWORD *)(v3 + 524) = 0;
  *(_DWORD *)(v3 + 528) = 2;
  *(_BYTE *)(v3 + 532) = 0;
  *(_BYTE *)(v3 + 533) = 0;
  *(_BYTE *)(v3 + 534) = 0;
  *(_DWORD *)(v3 + 536) = 0;
  *(_DWORD *)(v3 + 540) = 0;
  *(_DWORD *)(v3 + 544) = 0;
  RealmsCreateScreenController::_registerEventHandlers((RealmsCreateScreenController *)v3);
  RealmsCreateScreenController::_registerBindings((RealmsCreateScreenController *)v3);
  return v3;
}


_DWORD *__fastcall RealmsCreateScreenController::_fulfillPriorRealmPurchase(int a1, int a2)
{
  int v2; // r5@1 OVERLAPPED
  int v3; // r8@1
  int v4; // r4@1
  int v5; // r6@1 OVERLAPPED
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  void *v8; // r7@7
  void *v9; // r0@7
  int v10; // r7@8
  unsigned int *v11; // r0@9
  unsigned int v12; // r1@11
  unsigned int v13; // r1@16
  _DWORD *v14; // r0@19
  unsigned int *v15; // r1@20
  unsigned int v16; // r2@22
  int v17; // r3@25
  void (*v18)(void); // r3@25
  unsigned int *v19; // r6@28
  unsigned int v20; // r0@30
  unsigned int v21; // r0@37
  int v22; // r0@42
  int v23; // r1@42
  unsigned int *v24; // r1@43
  unsigned int v25; // r2@45
  int v26; // r1@48
  int v27; // r6@48
  int v28; // r0@48
  unsigned int *v29; // r2@49
  unsigned int v30; // r1@51
  _DWORD *result; // r0@58
  unsigned int *v32; // r1@59
  unsigned int *v33; // r2@67
  signed int v34; // r1@69
  int v35; // [sp+4h] [bp-44h]@48
  int v36; // [sp+8h] [bp-40h]@42
  int v37; // [sp+Ch] [bp-3Ch]@42
  int v38; // [sp+10h] [bp-38h]@7
  int v39; // [sp+14h] [bp-34h]@7
  _DWORD *v40; // [sp+18h] [bp-30h]@25
  int v41; // [sp+1Ch] [bp-2Ch]@25
  void (*v42)(void); // [sp+20h] [bp-28h]@19
  int v43; // [sp+24h] [bp-24h]@25

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 432) >> 32;
  v5 = *(_QWORD *)(a1 + 432);
  if ( v4 )
  {
    v6 = (unsigned int *)(v4 + 8);
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
  MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&v38, *(_DWORD *)(v2 + 424));
  v8 = operator new(0x70u);
  RealmsTransactionContext::RealmsTransactionContext((int)v8, &v38, (int *)(v2 + 456), (int *)(v2 + 460), 0);
  v39 = (int)v8;
  v9 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v38 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = v39;
    v11 = (unsigned int *)(v4 + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
        v13 = __ldrex(v11);
      while ( __strex(v13 + 1, v11) );
  v42 = 0;
  v14 = operator new(0xCu);
  *(_QWORD *)v14 = *(_QWORD *)&v2;
  v14[2] = v4;
    v15 = (unsigned int *)(v4 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 + 1, v15) );
      ++*v15;
  v40 = v14;
  v17 = v41;
  *(_QWORD *)&v40 = *(_QWORD *)v10;
  *(_DWORD *)v10 = v14;
  *(_DWORD *)(v10 + 4) = v17;
  v42 = *(void (**)(void))(v10 + 8);
  v18 = v42;
  *(_DWORD *)(v10 + 8) = sub_1203CCC;
  v43 = *(_DWORD *)(v10 + 12);
  *(_DWORD *)(v10 + 12) = sub_1203A04;
  if ( v18 )
    v18();
    v19 = (unsigned int *)(v4 + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
        v21 = __ldrex(v19);
      while ( __strex(v21 - 1, v19) );
      v21 = (*v19)--;
    if ( v21 == 1 )
  v22 = *(_DWORD *)(v2 + 424);
  v36 = *(_DWORD *)v3;
  v23 = *(_DWORD *)(v3 + 4);
  v37 = v23;
  if ( v23 )
    v24 = (unsigned int *)(v23 + 8);
        v25 = __ldrex(v24);
      while ( __strex(v25 + 1, v24) );
      ++*v24;
  v26 = v39;
  v39 = 0;
  v35 = v26;
  v27 = MainMenuScreenModel::fulfillPriorRealmsPurchase(v22, (int)&v36, &v35);
  std::unique_ptr<RealmsTransactionContext,std::default_delete<RealmsTransactionContext>>::~unique_ptr(&v35);
  v28 = v37;
  if ( v37 )
    v29 = (unsigned int *)(v37 + 8);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 == 1 )
      (*(void (**)(void))(*(_DWORD *)v28 + 12))();
  if ( !v27 )
    RealmsCreateScreenController::_errorDialogCreateRealmFail((RealmsCreateScreenController *)v2);
  result = std::unique_ptr<RealmsTransactionContext,std::default_delete<RealmsTransactionContext>>::~unique_ptr(&v39);
    v32 = (unsigned int *)(v4 + 8);
        result = (_DWORD *)__ldrex(v32);
      while ( __strex((unsigned int)result - 1, v32) );
      result = (_DWORD *)(*v32)--;
    if ( result == (_DWORD *)1 )
      result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return result;
}


ModalScreenData *__fastcall RealmsCreateScreenController::_errorDialogPurchaseFailed(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController *v1; // r4@1
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
  sub_21E8190(&v6, "realmsCreateScreen.createFailed.title", (_BYTE *)0x25);
  sub_21E8190(&v10, "realmsCreateScreen.purchaseFailed", (_BYTE *)0x21);
  sub_21E8190(&v16, "realmsCreateScreen.goBack", (_BYTE *)0x19);
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


ModalScreenData *__fastcall RealmsCreateScreenController::_errorDialogCreateRealmFail(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController *v1; // r4@1
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
  sub_21E8190(&v6, "realmsCreateScreen.createFailed.title", (_BYTE *)0x25);
  sub_21E8190(&v10, "realmsCreateScreen.createFailed.content", (_BYTE *)0x27);
  sub_21E8190(&v16, "realmsCreateScreen.goBack", (_BYTE *)0x19);
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


ModalScreenData *__fastcall RealmsCreateScreenController::_promptPrepareAppStore(int a1, int a2)
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
  sub_21E8190(&v15, "realmsCreateScreen.prepare.store.title", (_BYTE *)0x26);
  sub_21E8190(&v19, "realmsCreateScreen.prepare.store.body", (_BYTE *)0x25);
  sub_21E8190(&v25, "realmsCreateScreen.prepare.store.button", (_BYTE *)0x27);
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
  HIDWORD(v7) = sub_1204CA4;
  *(_QWORD *)((char *)v6 + 4) = *(_QWORD *)&v9;
  *(_QWORD *)((char *)v6 + 12) = v2;
  v12 = v6;
  v13 = (void (*)(void))sub_1204CB6;
  v14 = sub_1204CA4;
  LODWORD(v7) = &v12;
  MinecraftScreenController::_displayCustomModalPopup(v3, (int)&v15, v7);
  if ( v13 )
    v13();
  if ( v10 )
    v10(&v9, &v9, 3);
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v15);
}


ModalScreenData *__fastcall RealmsCreateScreenController::_promptForUnknownIntentOverrideAndFulfillment(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1 OVERLAPPED
  unsigned __int64 *v3; // r4@1
  char *v4; // r1@1
  _BYTE *v5; // r2@1
  int v6; // r4@4
  int v7; // r6@4 OVERLAPPED
  unsigned __int64 v8; // kr00_8@4
  unsigned int *v9; // r0@5
  unsigned int v10; // r1@7
  _DWORD *v11; // r0@10
  __int64 v12; // r2@10 OVERLAPPED
  unsigned int *v13; // r1@11
  int (__fastcall *v14)(_DWORD *, void **, int); // r1@16
  unsigned int *v15; // r1@19
  unsigned int v16; // r0@21
  _DWORD *v18; // [sp+0h] [bp-58h]@16
  void (*v19)(void); // [sp+8h] [bp-50h]@10
  void *v20; // [sp+10h] [bp-48h]@1
  int v21; // [sp+14h] [bp-44h]@1
  int v22; // [sp+18h] [bp-40h]@1
  int v23; // [sp+1Ch] [bp-3Ch]@1
  void *v24; // [sp+20h] [bp-38h]@1
  int v25; // [sp+24h] [bp-34h]@1
  int v26; // [sp+28h] [bp-30h]@1
  int v27; // [sp+2Ch] [bp-2Ch]@1
  void *v28; // [sp+30h] [bp-28h]@1
  void *v29; // [sp+34h] [bp-24h]@1
  void *v30; // [sp+38h] [bp-20h]@1
  void *v31; // [sp+3Ch] [bp-1Ch]@1
  int v32; // [sp+40h] [bp-18h]@1
  char v33; // [sp+44h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v20 = &unk_28898CC;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = &unk_28898CC;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = &unk_28898CC;
  v29 = &unk_28898CC;
  v30 = &unk_28898CC;
  v31 = &unk_28898CC;
  v32 = 1;
  v33 = 0;
  sub_21E8190(&v20, "realmsCreateScreen.incomplete", (_BYTE *)0x1D);
  v4 = "realmsCreateScreen.incomplete.create.c";
  v5 = (_BYTE *)37;
  if ( *(_DWORD *)(v2 + 452) )
    v4 = "realmsCreateScreen.incomplete.renew.c";
  else
    v5 = (_BYTE *)38;
  sub_21E8190(&v24, v4, v5);
  sub_21E8190(&v29, "gui.yes", (_BYTE *)7);
  sub_21E8190(&v31, "gui.no", (_BYTE *)6);
  v8 = *v3;
  v6 = *v3 >> 32;
  v7 = v8;
  if ( v6 )
  {
    v9 = (unsigned int *)(v6 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
  }
  v19 = 0;
  v11 = operator new(0xCu);
  *(_QWORD *)v11 = *(_QWORD *)&v2;
  v11[2] = v6;
    v13 = (unsigned int *)(v6 + 8);
      {
        LODWORD(v12) = __ldrex(v13);
        HIDWORD(v12) = __strex(v12 + 1, v13);
      }
      while ( HIDWORD(v12) );
      ++*v13;
  v14 = sub_1205164;
  v18 = v11;
  LODWORD(v12) = sub_1205088;
  *(_QWORD *)&v19 = *(__int64 *)((char *)&v12 - 4);
  LODWORD(v12) = &v18;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v20, v12);
  if ( v19 )
    v19();
    v15 = (unsigned int *)(v6 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v20);
}


void __fastcall RealmsCreateScreenController::_promptForAutoFulfillment(int a1, unsigned __int64 *a2)
{
  RealmsCreateScreenController::_promptForAutoFulfillment(a1, a2);
}


void __fastcall RealmsCreateScreenController::_openPurchaseInProgress(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController *v1; // r4@1
  void *v2; // r5@1
  int v3; // r4@3
  void **v4; // r0@3
  void *v5; // r0@3
  void *v6; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  int v11; // [sp+Ch] [bp-34h]@3
  void *v12; // [sp+10h] [bp-30h]@3
  int v13; // [sp+18h] [bp-28h]@3
  char v14; // [sp+1Ch] [bp-24h]@1
  void (*v15)(void); // [sp+24h] [bp-1Ch]@1

  v1 = this;
  v2 = operator new(0x20u);
  v15 = 0;
  PurchaseProgressHandler::PurchaseProgressHandler((int)v2, (int)&v14, 1);
  if ( v15 )
    v15();
  v3 = *((_DWORD *)v1 + 106);
  sub_21E94B4((void **)&v13, "purchase_in_progress");
  v12 = v2;
  v4 = sub_21E94B4((void **)&v11, (const char *)&unk_257BC67);
  MainMenuScreenModel::navigateToModalProgressScreen(v3, (int)&v13, (int)&v12, 1, (int)v4);
  v5 = (void *)(v11 - 12);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  v12 = 0;
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v13 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


ModalScreenData *__fastcall RealmsCreateScreenController::_errorDialogMaxRealms(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController *v1; // r4@1
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
  sub_21E8190(&v6, "realmsCreateScreen.maxRealms.title", (_BYTE *)0x22);
  sub_21E8190(&v10, "realmsCreateScreen.maxRealms.content", (_BYTE *)0x24);
  sub_21E8190(&v16, "realmsCreateScreen.goBack", (_BYTE *)0x19);
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


ModalScreenData *__fastcall RealmsCreateScreenController::_promptForXuidOverrideAndFulfillment(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1 OVERLAPPED
  unsigned __int64 *v3; // r4@1
  char *v4; // r1@1
  _BYTE *v5; // r2@1
  int v6; // r4@4
  int v7; // r6@4 OVERLAPPED
  unsigned __int64 v8; // kr00_8@4
  unsigned int *v9; // r0@5
  unsigned int v10; // r1@7
  _DWORD *v11; // r0@10
  __int64 v12; // r2@10 OVERLAPPED
  unsigned int *v13; // r1@11
  int (__fastcall *v14)(_DWORD *, void **, int); // r1@16
  unsigned int *v15; // r1@19
  unsigned int v16; // r0@21
  _DWORD *v18; // [sp+0h] [bp-58h]@16
  void (*v19)(void); // [sp+8h] [bp-50h]@10
  void *v20; // [sp+10h] [bp-48h]@1
  int v21; // [sp+14h] [bp-44h]@1
  int v22; // [sp+18h] [bp-40h]@1
  int v23; // [sp+1Ch] [bp-3Ch]@1
  void *v24; // [sp+20h] [bp-38h]@1
  int v25; // [sp+24h] [bp-34h]@1
  int v26; // [sp+28h] [bp-30h]@1
  int v27; // [sp+2Ch] [bp-2Ch]@1
  void *v28; // [sp+30h] [bp-28h]@1
  void *v29; // [sp+34h] [bp-24h]@1
  void *v30; // [sp+38h] [bp-20h]@1
  void *v31; // [sp+3Ch] [bp-1Ch]@1
  int v32; // [sp+40h] [bp-18h]@1
  char v33; // [sp+44h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v20 = &unk_28898CC;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = &unk_28898CC;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = &unk_28898CC;
  v29 = &unk_28898CC;
  v30 = &unk_28898CC;
  v31 = &unk_28898CC;
  v32 = 1;
  v33 = 0;
  sub_21E8190(&v20, "realmsCreateScreen.incomplete", (_BYTE *)0x1D);
  v4 = "realmsCreateScreen.incomplete.create.b";
  v5 = (_BYTE *)37;
  if ( *(_DWORD *)(v2 + 452) )
    v4 = "realmsCreateScreen.incomplete.renew.b";
  else
    v5 = (_BYTE *)38;
  sub_21E8190(&v24, v4, v5);
  sub_21E8190(&v29, "gui.yes", (_BYTE *)7);
  sub_21E8190(&v31, "gui.no", (_BYTE *)6);
  v8 = *v3;
  v6 = *v3 >> 32;
  v7 = v8;
  if ( v6 )
  {
    v9 = (unsigned int *)(v6 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
  }
  v19 = 0;
  v11 = operator new(0xCu);
  *(_QWORD *)v11 = *(_QWORD *)&v2;
  v11[2] = v6;
    v13 = (unsigned int *)(v6 + 8);
      {
        LODWORD(v12) = __ldrex(v13);
        HIDWORD(v12) = __strex(v12 + 1, v13);
      }
      while ( HIDWORD(v12) );
      ++*v13;
  v14 = sub_1204FDC;
  v18 = v11;
  LODWORD(v12) = sub_1204F00;
  *(_QWORD *)&v19 = *(__int64 *)((char *)&v12 - 4);
  LODWORD(v12) = &v18;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v20, v12);
  if ( v19 )
    v19();
    v15 = (unsigned int *)(v6 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v20);
}


int __fastcall RealmsCreateScreenController::tick(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController *v1; // r4@1
  int result; // r0@4

  v1 = this;
  if ( *((_BYTE *)this + 447) )
  {
    RealmsCreateScreenController::_checkUnfulfilledPurchase(this);
    *((_BYTE *)v1 + 447) = 0;
  }
  if ( *((_BYTE *)v1 + 444) )
    *((_BYTE *)v1 + 444) = 0;
    result = 1;
  else
    result = j_j_j__ZN25MinecraftScreenController4tickEv_0(v1);
  return result;
}


void __fastcall RealmsCreateScreenController::_registerBindings(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController::_registerBindings(this);
}


void __fastcall RealmsCreateScreenController::_errorDialogFailedConditions(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController::_errorDialogFailedConditions(this);
}


int __fastcall RealmsCreateScreenController::addStaticScreenVars(RealmsCreateScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r8@1
  RealmsCreateScreenController *v3; // r9@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r4@1
  int v7; // r0@3
  int v8; // r1@3
  int v9; // r4@3
  int v10; // r0@5
  int v11; // r1@5
  int v12; // r4@5
  int v13; // r0@7
  int v14; // r1@7
  int v15; // r4@7
  int v16; // r4@9
  bool v17; // r1@9
  int v18; // r0@11
  int v19; // r1@11
  int v20; // r4@11
  int v21; // r4@13
  char v22; // r0@13
  double v23; // r0@14
  unsigned int v24; // r0@15
  int v25; // r5@17
  int *v26; // r4@17
  int v27; // r0@20
  _DWORD *v28; // r6@21
  int v29; // r5@21
  _DWORD *v30; // r7@23
  bool v31; // zf@26
  _DWORD *v32; // r0@30
  int v33; // r11@31
  int v34; // r0@33
  _DWORD *v35; // r4@34
  int v36; // r6@34
  _DWORD *v37; // r7@36
  bool v38; // zf@39
  _DWORD *v39; // r0@43
  int v40; // r11@44
  int v41; // r0@44
  _DWORD *v42; // r4@45
  int v43; // r6@45
  _DWORD *v44; // r7@47
  bool v45; // zf@50
  _DWORD *v46; // r0@54
  int v47; // r10@56
  unsigned int v48; // r7@56
  int v49; // r11@56
  int v50; // r0@56
  _DWORD *v51; // r8@57
  int v52; // r6@57
  _DWORD *v53; // r4@59
  bool v54; // zf@62
  _DWORD *v55; // r0@66
  Json::Value *v57; // [sp+4h] [bp-ACh]@56
  char v58; // [sp+8h] [bp-A8h]@67
  char v59; // [sp+18h] [bp-98h]@13
  char v60; // [sp+28h] [bp-88h]@13
  char v61; // [sp+38h] [bp-78h]@11
  char v62; // [sp+48h] [bp-68h]@9
  char v63; // [sp+58h] [bp-58h]@7
  char v64; // [sp+68h] [bp-48h]@5
  char v65; // [sp+78h] [bp-38h]@3

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$allow_subscriptions");
  v5 = *((_DWORD *)v3 + 116);
  v6 = v4;
  if ( v5 != 1 )
    LOBYTE(v5) = 0;
  Json::Value::Value((Json::Value *)&v65, v5);
  Json::Value::operator=(v6, (const Json::Value *)&v65);
  Json::Value::~Value((Json::Value *)&v65);
  v7 = Json::Value::operator[](v2, "$hide_duration");
  v8 = *((_DWORD *)v3 + 116);
  v9 = v7;
  if ( v8 != 1 )
    LOBYTE(v8) = 0;
  Json::Value::Value((Json::Value *)&v64, v8);
  Json::Value::operator=(v9, (const Json::Value *)&v64);
  Json::Value::~Value((Json::Value *)&v64);
  v10 = Json::Value::operator[](v2, "$hide_tier");
  v11 = *((_DWORD *)v3 + 113);
  v12 = v10;
  if ( v11 != 1 )
    LOBYTE(v11) = 0;
  Json::Value::Value((Json::Value *)&v63, v11);
  Json::Value::operator=(v12, (const Json::Value *)&v63);
  Json::Value::~Value((Json::Value *)&v63);
  v13 = Json::Value::operator[](v2, "$hide_terms_and_conditions");
  v14 = *((_DWORD *)v3 + 113);
  v15 = v13;
  if ( v14 )
    LOBYTE(v14) = 1;
  Json::Value::Value((Json::Value *)&v62, v14);
  Json::Value::operator=(v15, (const Json::Value *)&v62);
  Json::Value::~Value((Json::Value *)&v62);
  v16 = Json::Value::operator[](v2, "$hide_name_as_label");
  v17 = 0;
  if ( !*((_DWORD *)v3 + 113) )
    v17 = 1;
  Json::Value::Value((Json::Value *)&v61, v17);
  Json::Value::operator=(v16, (const Json::Value *)&v61);
  Json::Value::~Value((Json::Value *)&v61);
  v18 = Json::Value::operator[](v2, "$hide_name_as_edit");
  v19 = *((_DWORD *)v3 + 113);
  v20 = v18;
  if ( v19 )
    LOBYTE(v19) = 1;
  Json::Value::Value((Json::Value *)&v60, v19);
  Json::Value::operator=(v20, (const Json::Value *)&v60);
  Json::Value::~Value((Json::Value *)&v60);
  v21 = Json::Value::operator[](v2, "$realm_name_label_text");
  Json::Value::Value((int)&v59, (const char **)v3 + 114);
  Json::Value::operator=(v21, (const Json::Value *)&v59);
  Json::Value::~Value((Json::Value *)&v59);
  v22 = byte_27DCB24;
  __dmb();
  if ( !(v22 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27DCB24) )
  {
    unk_27DCB38 = 0;
    dword_27DCB3C = 0;
    dword_27DCB40 = 1065353216;
    LODWORD(v23) = &dword_27DCB40;
    *(_DWORD *)algn_27DCB44 = 0;
    v24 = sub_21E6254(v23);
    dword_27DCB34 = v24;
    if ( v24 == 1 )
    {
      dword_27DCB48 = 0;
      v26 = &dword_27DCB48;
    }
    else
      if ( v24 >= 0x40000000 )
        sub_21E57F4();
      v25 = 4 * v24;
      v26 = (int *)operator new(4 * v24);
      _aeabi_memclr4(v26, v25);
    dword_27DCB30 = (int)v26;
    _cxa_atexit(std::unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,std::string>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_27DCB24);
  }
  if ( !dword_27DCB3C )
    v27 = *(_DWORD *)dword_27DCB30;
    if ( !*(_DWORD *)dword_27DCB30 )
      goto LABEL_30;
    v28 = *(_DWORD **)v27;
    v29 = *(_DWORD *)(*(_DWORD *)v27 + 4);
    while ( v29 )
      v30 = (_DWORD *)*v28;
      if ( *v28 )
      {
        v29 = v30[1];
        v27 = (int)v28;
        v28 = (_DWORD *)*v28;
        if ( !(v30[1] % (unsigned int)dword_27DCB34) )
          continue;
      }
    v31 = v27 == 0;
    if ( v27 )
      v27 = *(_DWORD *)v27;
      v31 = v27 == 0;
    if ( v31 )
LABEL_30:
      v32 = operator new(0xCu);
      *v32 = 0;
      v32[1] = 0;
      v32[2] = &unk_28898CC;
      v27 = std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              (int)&dword_27DCB30,
              0,
              (int)v32);
    sub_21E8190((void **)(v27 + 8), "realmsCreateScreen.title.create", (_BYTE *)0x1F);
    v33 = 0;
    if ( dword_27DCB34 != 1 )
      v33 = 1;
    v34 = *(_DWORD *)(dword_27DCB30 + 4 * v33);
    if ( !v34 )
      goto LABEL_43;
    v35 = *(_DWORD **)v34;
    v36 = *(_DWORD *)(*(_DWORD *)v34 + 4);
    while ( v36 != 1 )
      v37 = (_DWORD *)*v35;
      if ( *v35 )
        v36 = v37[1];
        v34 = (int)v35;
        v35 = (_DWORD *)*v35;
        if ( v37[1] % (unsigned int)dword_27DCB34 == v33 )
    v38 = v34 == 0;
    if ( v34 )
      v34 = *(_DWORD *)v34;
      v38 = v34 == 0;
    if ( v38 )
LABEL_43:
      v39 = operator new(0xCu);
      *v39 = 0;
      v39[1] = 1;
      v39[2] = &unk_28898CC;
      v34 = std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              v33,
              1u,
              (int)v39);
    sub_21E8190((void **)(v34 + 8), "realmsCreateScreen.title.extend", (_BYTE *)0x1F);
    v40 = 2u % dword_27DCB34;
    v41 = *(_DWORD *)(dword_27DCB30 + 4 * (2u % dword_27DCB34));
    if ( !v41 )
      goto LABEL_54;
    v42 = *(_DWORD **)v41;
    v43 = *(_DWORD *)(*(_DWORD *)v41 + 4);
    while ( v43 != 2 )
      v44 = (_DWORD *)*v42;
      if ( *v42 )
        v43 = v44[1];
        v41 = (int)v42;
        v42 = (_DWORD *)*v42;
        if ( v44[1] % (unsigned int)dword_27DCB34 == v40 )
    v45 = v41 == 0;
    if ( v41 )
      v41 = *(_DWORD *)v41;
      v45 = v41 == 0;
    if ( v45 )
LABEL_54:
      v46 = operator new(0xCu);
      *v46 = 0;
      v46[1] = 2;
      v46[2] = &unk_28898CC;
      v41 = std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              v40,
              2u,
              (int)v46);
    sub_21E8190((void **)(v41 + 8), "realmsCreateScreen.title.renew", (_BYTE *)0x1E);
  v57 = v2;
  v47 = Json::Value::operator[](v2, "$title_text");
  v48 = *((_DWORD *)v3 + 113);
  v49 = *((_DWORD *)v3 + 113) % (unsigned int)dword_27DCB34;
  v50 = *(_DWORD *)(dword_27DCB30 + 4 * v49);
  if ( !v50 )
    goto LABEL_66;
  v51 = *(_DWORD **)v50;
  v52 = *(_DWORD *)(*(_DWORD *)v50 + 4);
  while ( v48 != v52 )
    v53 = (_DWORD *)*v51;
    if ( *v51 )
      v52 = v53[1];
      v50 = (int)v51;
      v51 = (_DWORD *)*v51;
      if ( v53[1] % (unsigned int)dword_27DCB34 == v49 )
        continue;
  v54 = v50 == 0;
  if ( v50 )
    v50 = *(_DWORD *)v50;
    v54 = v50 == 0;
  if ( v54 )
LABEL_66:
    v55 = operator new(0xCu);
    *v55 = 0;
    v55[1] = v48;
    v55[2] = &unk_28898CC;
    v50 = std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
            (int)&dword_27DCB30,
            v49,
            v48,
            (int)v55);
  Json::Value::Value((int)&v58, (const char **)(v50 + 8));
  Json::Value::operator=(v47, (const Json::Value *)&v58);
  Json::Value::~Value((Json::Value *)&v58);
  return ScreenController::addStaticScreenVars(v3, v57);
}


void __fastcall RealmsCreateScreenController::~RealmsCreateScreenController(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController *v1; // r0@1

  v1 = RealmsCreateScreenController::~RealmsCreateScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


ModalScreenData *__fastcall RealmsCreateScreenController::_errorDialogPaymentServiceDown(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController *v1; // r4@1
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
  sub_21E8190(&v6, "realmsCreateScreen.paymentFailed.title", (_BYTE *)0x26);
  sub_21E8190(&v10, "realmsCreateScreen.paymentFailed.body", (_BYTE *)0x25);
  sub_21E8190(&v16, "realmsCreateScreen.goBack", (_BYTE *)0x19);
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


void __fastcall RealmsCreateScreenController::_promptForAutoFulfillment(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1 OVERLAPPED
  unsigned __int64 *v3; // r4@1
  const char *v4; // r1@1
  int v5; // r4@3
  int v6; // r6@3 OVERLAPPED
  unsigned __int64 v7; // kr00_8@3
  unsigned int *v8; // r0@4
  unsigned int v9; // r1@6
  _DWORD *v10; // r0@9
  unsigned int *v11; // r1@10
  unsigned int v12; // r2@12
  __int64 v13; // r1@15
  unsigned int *v14; // r1@18
  unsigned int v15; // r0@20
  void *v16; // r0@25
  void *v17; // r0@26
  unsigned int *v18; // r2@28
  signed int v19; // r1@30
  unsigned int *v20; // r2@32
  signed int v21; // r1@34
  _DWORD *v22; // [sp+4h] [bp-34h]@15
  void (*v23)(void); // [sp+Ch] [bp-2Ch]@9
  int v24; // [sp+18h] [bp-20h]@3
  int v25; // [sp+20h] [bp-18h]@3

  v2 = a1;
  v3 = a2;
  v4 = "realmsCreateScreen.incomplete.create.a";
  if ( *(_DWORD *)(a1 + 452) )
    v4 = "realmsCreateScreen.incomplete.renew.a";
  sub_21E94B4((void **)&v25, v4);
  sub_21E94B4((void **)&v24, "realmsCreateScreen.incomplete");
  v7 = *v3;
  v5 = *v3 >> 32;
  v6 = v7;
  if ( v5 )
  {
    v8 = (unsigned int *)(v5 + 8);
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
  v23 = 0;
  v10 = operator new(0xCu);
  *(_QWORD *)v10 = *(_QWORD *)&v2;
  v10[2] = v5;
    v11 = (unsigned int *)(v5 + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
  LODWORD(v13) = sub_1204E54;
  v22 = v10;
  HIDWORD(v13) = sub_1204D8C;
  *(_QWORD *)&v23 = v13;
  MinecraftScreenController::_displayStandardModalPopup(v2, &v24, &v25, 2, (int)&v22);
  if ( v23 )
    v23();
    v14 = (unsigned int *)(v5 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  v16 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v24 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
}


int __fastcall RealmsCreateScreenController::_purchaseRealm(RealmsCreateScreenController *this)
{
  int v1; // r4@1
  __int64 v2; // r6@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  int v5; // r5@6
  unsigned int v6; // r1@10
  _DWORD *v7; // r0@13
  unsigned int *v8; // r1@14
  unsigned int v9; // r2@16
  __int64 v10; // r1@19
  int result; // r0@19
  unsigned int *v12; // r5@22
  unsigned int v13; // r0@24
  _DWORD *v14; // [sp+4h] [bp-24h]@19
  int (*v15)(void); // [sp+Ch] [bp-1Ch]@13

  LODWORD(v2) = this;
  v1 = *((_QWORD *)this + 54) >> 32;
  HIDWORD(v2) = *((_QWORD *)this + 54);
  if ( v1 )
  {
    v3 = (unsigned int *)(v1 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
    v5 = *(_DWORD *)(v2 + 424);
        v6 = __ldrex(v3);
      while ( __strex(v6 + 1, v3) );
  }
  else
    v5 = *((_DWORD *)this + 106);
  v15 = 0;
  v7 = operator new(0xCu);
  *(_QWORD *)v7 = v2;
  v7[2] = v1;
    v8 = (unsigned int *)(v1 + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  LODWORD(v10) = sub_1204860;
  v14 = v7;
  HIDWORD(v10) = sub_120439C;
  *(_QWORD *)&v15 = v10;
  result = MinecraftScreenModel::checkRealmsPaymentService(v5, (int)&v14);
  if ( v15 )
    result = v15();
    v12 = (unsigned int *)(v1 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return result;
}


ModalScreenData *__fastcall RealmsCreateScreenController::_verifyAppStoreReady(int a1, int a2)
{
  __int64 v2; // r6@0
  RealmsCreateScreenController *v3; // r5@1
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

  v3 = (RealmsCreateScreenController *)a1;
  v4 = a2;
  if ( MainMenuScreenModel::isAppStoreReady(*(MainMenuScreenModel **)(a1 + 424)) == 1 )
  {
    RealmsCreateScreenController::_openPurchaseInProgress(v3);
    if ( !*(_DWORD *)(v4 + 8) )
      sub_21E5F48();
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
    v12 = (int (*)(void))sub_12041B0;
    v13 = sub_1203ED0;
    result = RealmsCreateScreenController::_promptPrepareAppStore((int)v3, (int)&v11);
    if ( v12 )
      result = (ModalScreenData *)v12();
    if ( v9 )
      result = (ModalScreenData *)v9(&v8, &v8, 3);
  return result;
}


RealmsCreateScreenController *__fastcall RealmsCreateScreenController::~RealmsCreateScreenController(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r5@3
  unsigned int *v7; // r1@4
  unsigned int v8; // r0@6
  unsigned int *v9; // r6@10
  unsigned int v10; // r0@12
  unsigned int *v12; // r2@18
  signed int v13; // r1@20
  unsigned int *v14; // r2@22
  signed int v15; // r1@24

  v1 = this;
  *(_DWORD *)this = &off_26E2E88;
  MinecraftScreenModel::abortAllRealmsRequests(*((MinecraftScreenModel **)this + 106));
  Realms::World::~World((RealmsCreateScreenController *)((char *)v1 + 480));
  v2 = *((_DWORD *)v1 + 115);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 114);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v4 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 109);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 4);
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
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


void __fastcall RealmsCreateScreenController::_errorDialogFailedConditions(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController *v1; // r4@1
  __int64 v2; // r1@6 OVERLAPPED
  char *v3; // r0@8
  unsigned int *v4; // r2@10
  signed int v5; // r1@12
  void *v6; // [sp+0h] [bp-60h]@6
  __int64 v7; // [sp+8h] [bp-58h]@6
  void *v8; // [sp+10h] [bp-50h]@6
  int v9; // [sp+14h] [bp-4Ch]@6
  int v10; // [sp+18h] [bp-48h]@6
  int v11; // [sp+1Ch] [bp-44h]@6
  void *v12; // [sp+20h] [bp-40h]@6
  int v13; // [sp+24h] [bp-3Ch]@6
  int v14; // [sp+28h] [bp-38h]@6
  int v15; // [sp+2Ch] [bp-34h]@6
  void *v16; // [sp+30h] [bp-30h]@6
  void *v17; // [sp+34h] [bp-2Ch]@6
  void *v18; // [sp+38h] [bp-28h]@6
  void *v19; // [sp+3Ch] [bp-24h]@6
  int v20; // [sp+40h] [bp-20h]@6
  char v21; // [sp+44h] [bp-1Ch]@6
  char *v22; // [sp+48h] [bp-18h]@1

  v1 = this;
  v22 = (char *)&unk_28898CC;
  if ( *((_BYTE *)this + 446) )
  {
    sub_21E8190((void **)&v22, "realmsCreateScreen.errorTOS", (_BYTE *)0x1B);
  }
  else if ( *((_BYTE *)this + 445) )
    sub_21E8190((void **)&v22, "realmsCreateScreen.errorRealmName", (_BYTE *)0x21);
  else
    sub_21E8190((void **)&v22, "realmsCreateScreen.errorRealmNameAndTOS", (_BYTE *)0x27);
  v8 = &unk_28898CC;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = &unk_28898CC;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = &unk_28898CC;
  v17 = &unk_28898CC;
  v18 = &unk_28898CC;
  v19 = &unk_28898CC;
  v20 = 1;
  v21 = 0;
  sub_21E8190(&v8, "playscreen.realms", (_BYTE *)0x11);
  EntityInteraction::setInteractText((int *)&v12, (int *)&v22);
  sub_21E8190(&v18, "realmsCreateScreen.goBack", (_BYTE *)0x19);
  v20 = 2;
  v6 = operator new(1u);
  LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIFv19ModalScreenButtonIdEEEd_UlS6_E_E10_M_managerERSt9_Any_dataRKSB_St18_Manager_operation;
  HIDWORD(v2) = ZNSt17_Function_handlerIFv19ModalScreenButtonIdEZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIS1_EEd_UlS0_E_E9_M_invokeERKSt9_Any_dataS0_;
  v7 = v2;
  HIDWORD(v2) = &v6;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v8, *(__int64 *)((char *)&v2 + 4));
  if ( (_DWORD)v7 )
    ((void (*)(void))v7)();
  ModalScreenData::~ModalScreenData((ModalScreenData *)&v8);
  v3 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v4 = (unsigned int *)(v22 - 4);
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


_DWORD *__fastcall RealmsCreateScreenController::_getProgressHandler(RealmsCreateScreenController *this, int a2)
{
  RealmsCreateScreenController *v2; // r5@1
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
    *((_DWORD *)v2 + 2) = sub_1203958;
    *((_DWORD *)v2 + 3) = sub_12038FA;
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
    HIDWORD(v11) = sub_12038FA;
    LODWORD(v11) = sub_1203958;
    *((_QWORD *)v2 + 1) = v11;
  return result;
}


void __fastcall RealmsCreateScreenController::_registerBindings(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController *v1; // r4@1
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
  void *v20; // [sp+0h] [bp-E0h]@21
  __int64 v21; // [sp+8h] [bp-D8h]@21
  _DWORD *v22; // [sp+10h] [bp-D0h]@21
  __int64 v23; // [sp+18h] [bp-C8h]@21
  int v24; // [sp+20h] [bp-C0h]@21
  void *v25; // [sp+24h] [bp-BCh]@17
  __int64 v26; // [sp+2Ch] [bp-B4h]@17
  _DWORD *v27; // [sp+34h] [bp-ACh]@17
  __int64 v28; // [sp+3Ch] [bp-A4h]@17
  int v29; // [sp+44h] [bp-9Ch]@17
  void *v30; // [sp+48h] [bp-98h]@13
  __int64 v31; // [sp+50h] [bp-90h]@13
  _DWORD *v32; // [sp+58h] [bp-88h]@13
  __int64 v33; // [sp+60h] [bp-80h]@13
  int v34; // [sp+68h] [bp-78h]@13
  void *v35; // [sp+6Ch] [bp-74h]@9
  __int64 v36; // [sp+74h] [bp-6Ch]@9
  _DWORD *v37; // [sp+7Ch] [bp-64h]@9
  __int64 v38; // [sp+84h] [bp-5Ch]@9
  int v39; // [sp+8Ch] [bp-54h]@9
  void *v40; // [sp+90h] [bp-50h]@5
  __int64 v41; // [sp+98h] [bp-48h]@5
  _DWORD *v42; // [sp+A0h] [bp-40h]@5
  __int64 v43; // [sp+A8h] [bp-38h]@5
  int v44; // [sp+B0h] [bp-30h]@5
  void *v45; // [sp+B4h] [bp-2Ch]@1
  __int64 v46; // [sp+BCh] [bp-24h]@1
  _DWORD *v47; // [sp+C4h] [bp-1Ch]@1
  __int64 v48; // [sp+CCh] [bp-14h]@1
  int v49; // [sp+D4h] [bp-Ch]@1

  v1 = this;
  v49 = -632615177;
  v2 = operator new(4u);
  LODWORD(v3) = sub_12026C4;
  *v2 = v1;
  HIDWORD(v3) = sub_12026B4;
  v47 = v2;
  v48 = v3;
  v45 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v46 = v4;
  ScreenController::bindString((int)v1, &v49, (int)&v47, (int)&v45);
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v44 = -704890670;
  v5 = operator new(4u);
  LODWORD(v6) = sub_120270C;
  *v5 = v1;
  HIDWORD(v6) = sub_12026FA;
  v42 = v5;
  v43 = v6;
  v40 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v41 = v7;
  ScreenController::bindBool((int)v1, &v44, (int)&v42, (int)&v40);
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
  v39 = 1477094557;
  v8 = operator new(4u);
  LODWORD(v9) = sub_1202752;
  *v8 = v1;
  HIDWORD(v9) = sub_1202742;
  v37 = v8;
  v38 = v9;
  v35 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v36 = v10;
  ScreenController::bindBool((int)v1, &v39, (int)&v37, (int)&v35);
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  if ( (_DWORD)v38 )
    ((void (*)(void))v38)();
  StringHash::StringHash<char [25]>(&v34, (int)"#selected_duration_short");
  v11 = operator new(4u);
  LODWORD(v12) = sub_120279A;
  *v11 = v1;
  HIDWORD(v12) = sub_1202788;
  v32 = v11;
  v33 = v12;
  v30 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v31 = v13;
  ScreenController::bindBool((int)v1, &v34, (int)&v32, (int)&v30);
  if ( (_DWORD)v31 )
    ((void (*)(void))v31)();
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  StringHash::StringHash<char [24]>(&v29, (int)"#selected_duration_long");
  v14 = operator new(4u);
  LODWORD(v15) = sub_12027E0;
  *v14 = v1;
  HIDWORD(v15) = sub_12027D0;
  v27 = v14;
  v28 = v15;
  v25 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v26 = v16;
  ScreenController::bindBool((int)v1, &v29, (int)&v27, (int)&v25);
  if ( (_DWORD)v26 )
    ((void (*)(void))v26)();
  if ( (_DWORD)v28 )
    ((void (*)(void))v28)();
  StringHash::StringHash<char [26]>(&v24, (int)"#confirmation_button_text");
  v17 = operator new(4u);
  LODWORD(v18) = sub_12038C4;
  *v17 = v1;
  HIDWORD(v18) = sub_1202818;
  v22 = v17;
  v23 = v18;
  v20 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v21 = v19;
  ScreenController::bindString((int)v1, &v24, (int)&v22, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  if ( (_DWORD)v23 )
    ((void (*)(void))v23)();
}


void __fastcall RealmsCreateScreenController::_openPurchaseInProgress(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController::_openPurchaseInProgress(this);
}


void __fastcall RealmsCreateScreenController::_registerEventHandlers(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController::_registerEventHandlers(this);
}


ModalScreenData *__fastcall RealmsCreateScreenController::_promptForIntentMismatchOverride(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1 OVERLAPPED
  _DWORD *v7; // [sp+0h] [bp-58h]@1
  __int64 v8; // [sp+8h] [bp-50h]@1
  void *v9; // [sp+10h] [bp-48h]@1
  int v10; // [sp+14h] [bp-44h]@1
  int v11; // [sp+18h] [bp-40h]@1
  int v12; // [sp+1Ch] [bp-3Ch]@1
  void *v13; // [sp+20h] [bp-38h]@1
  int v14; // [sp+24h] [bp-34h]@1
  int v15; // [sp+28h] [bp-30h]@1
  int v16; // [sp+2Ch] [bp-2Ch]@1
  void *v17; // [sp+30h] [bp-28h]@1
  void *v18; // [sp+34h] [bp-24h]@1
  void *v19; // [sp+38h] [bp-20h]@1
  void *v20; // [sp+3Ch] [bp-1Ch]@1
  int v21; // [sp+40h] [bp-18h]@1
  char v22; // [sp+44h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v9 = &unk_28898CC;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = &unk_28898CC;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = &unk_28898CC;
  v18 = &unk_28898CC;
  v19 = &unk_28898CC;
  v20 = &unk_28898CC;
  v21 = 1;
  v22 = 0;
  sub_21E8190(&v9, "realmsCreateScreen.incomplete", (_BYTE *)0x1D);
  EntityInteraction::setInteractText((int *)&v13, v3);
  sub_21E8190(&v18, "gui.yes", (_BYTE *)7);
  sub_21E8190(&v20, "gui.no", (_BYTE *)6);
  v4 = operator new(4u);
  LODWORD(v5) = sub_1204D54;
  *v4 = v2;
  HIDWORD(v5) = sub_1204D3A;
  v7 = v4;
  v8 = v5;
  HIDWORD(v5) = &v7;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v9, *(__int64 *)((char *)&v5 + 4));
  if ( (_DWORD)v8 )
    ((void (*)(void))v8)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v9);
}


void __fastcall RealmsCreateScreenController::~RealmsCreateScreenController(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController::~RealmsCreateScreenController(this);
}


RealmsPurchaseDetails *__fastcall RealmsCreateScreenController::_checkUnfulfilledPurchase(RealmsCreateScreenController *this)
{
  RealmsCreateScreenController *v1; // r4@1
  int v2; // r1@2
  size_t v3; // r2@6
  _DWORD *v4; // r1@8
  void *v5; // r0@10
  unsigned int *v6; // r2@11
  signed int v7; // r1@13
  char *v8; // r7@22
  signed int v9; // r8@22
  char *v10; // r6@22
  size_t v11; // r2@22
  unsigned int *v13; // r1@31
  signed int v14; // r0@33
  void *s2; // [sp+0h] [bp-58h]@22
  int v16; // [sp+8h] [bp-50h]@10
  int v17; // [sp+10h] [bp-48h]@29
  int v18; // [sp+18h] [bp-40h]@17
  char v19; // [sp+1Ch] [bp-3Ch]@1
  int v20; // [sp+20h] [bp-38h]@3
  void *v21; // [sp+24h] [bp-34h]@1
  void *v22; // [sp+28h] [bp-30h]@1
  void *v23; // [sp+2Ch] [bp-2Ch]@1
  void *s1; // [sp+30h] [bp-28h]@1
  int v25; // [sp+34h] [bp-24h]@1
  int v26; // [sp+38h] [bp-20h]@1

  v1 = this;
  v21 = &unk_28898CC;
  v22 = &unk_28898CC;
  v23 = &unk_28898CC;
  s1 = &unk_28898CC;
  v25 = 0;
  v26 = 0;
  if ( !MainMenuScreenModel::getUnfulfilledRealmsPurchase(
          *((MainMenuScreenModel **)this + 106),
          (RealmsPurchaseDetails *)&v19) )
    return RealmsPurchaseDetails::~RealmsPurchaseDetails((RealmsPurchaseDetails *)&v19);
  v2 = *((_DWORD *)v1 + 113);
  if ( v2 == 1 && v20 != *((_DWORD *)v1 + 118) )
  if ( !v19 )
  {
    RealmsCreateScreenController::_promptForUnknownIntentOverrideAndFulfillment((int)v1, (unsigned __int64 *)&v25);
  }
  if ( *((_BYTE *)v1 + 448) )
    goto LABEL_22;
  v3 = *((_DWORD *)s1 - 3);
  if ( !v2 )
    if ( !v3 )
      goto LABEL_22;
    sub_21E94B4((void **)&v18, "realmsCreateScreen.incomplete.override.renew");
    RealmsCreateScreenController::_promptForIntentMismatchOverride((int)v1, &v18);
    v5 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) == &dword_28898C0 )
      return RealmsPurchaseDetails::~RealmsPurchaseDetails((RealmsPurchaseDetails *)&v19);
    v6 = (unsigned int *)(v18 - 4);
    if ( !&pthread_create )
      goto LABEL_42;
    __dmb();
    do
      v7 = __ldrex(v6);
    while ( __strex(v7 - 1, v6) );
LABEL_43:
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  if ( !v3 )
    sub_21E94B4((void **)&v17, "realmsCreateScreen.incomplete.override.create");
    RealmsCreateScreenController::_promptForIntentMismatchOverride((int)v1, &v17);
    v5 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) == &dword_28898C0 )
    v6 = (unsigned int *)(v17 - 4);
    goto LABEL_43;
  v4 = (_DWORD *)*((_DWORD *)v1 + 115);
  if ( v3 != *(v4 - 3) || memcmp(s1, v4, v3) )
    sub_21E94B4((void **)&v16, "realmsCreateScreen.incomplete.override.realm");
    RealmsCreateScreenController::_promptForIntentMismatchOverride((int)v1, &v16);
    v5 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) == &dword_28898C0 )
    v6 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      goto LABEL_43;
    }
LABEL_42:
    v7 = (*v6)--;
LABEL_22:
  MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&s2, *((_DWORD *)v1 + 106));
  v8 = (char *)s2;
  v9 = 0;
  v10 = (char *)s2 - 12;
  v11 = *((_DWORD *)v22 - 3);
  if ( v11 == *((_DWORD *)s2 - 3) && !memcmp(v22, s2, v11) )
    v9 = 1;
  if ( (int *)v10 != &dword_28898C0 )
    v13 = (unsigned int *)(v8 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( v9 == 1 )
    RealmsCreateScreenController::_promptForAutoFulfillment((int)v1, (unsigned __int64 *)&v25);
  else
    RealmsCreateScreenController::_promptForXuidOverrideAndFulfillment((int)v1, (unsigned __int64 *)&v25);
  return RealmsPurchaseDetails::~RealmsPurchaseDetails((RealmsPurchaseDetails *)&v19);
}


void __fastcall RealmsCreateScreenController::_registerEventHandlers(RealmsCreateScreenController *this)
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
  int v14; // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  void *v17; // r0@12
  int v18; // r5@13
  _DWORD *v19; // r0@13
  __int64 v20; // r1@13
  void *v21; // r0@15
  int v22; // r5@16
  void *v23; // r0@16
  __int64 v24; // r1@16
  void *v25; // r0@18
  int v26; // r5@19
  void *v27; // r0@19
  __int64 v28; // r1@19
  void *v29; // r0@21
  int v30; // r5@22
  _DWORD *v31; // r0@22
  __int64 v32; // r1@22
  void *v33; // r0@24
  int v34; // r5@25
  _DWORD *v35; // r0@25
  __int64 v36; // r1@25
  void *v37; // r0@27
  int v38; // r5@28
  _DWORD *v39; // r0@28
  __int64 v40; // r1@28
  void *v41; // r0@30
  int v42; // r5@31
  _DWORD *v43; // r0@31
  __int64 v44; // r1@31
  void *v45; // r0@33
  int v46; // r5@34
  _DWORD *v47; // r0@34
  __int64 v48; // r1@34
  void *v49; // r0@36
  unsigned int *v50; // r2@38
  signed int v51; // r1@40
  unsigned int *v52; // r2@42
  signed int v53; // r1@44
  unsigned int *v54; // r2@46
  signed int v55; // r1@48
  unsigned int *v56; // r2@50
  signed int v57; // r1@52
  unsigned int *v58; // r2@54
  signed int v59; // r1@56
  unsigned int *v60; // r2@58
  signed int v61; // r1@60
  unsigned int *v62; // r2@62
  signed int v63; // r1@64
  unsigned int *v64; // r2@66
  signed int v65; // r1@68
  unsigned int *v66; // r2@70
  signed int v67; // r1@72
  unsigned int *v68; // r2@74
  signed int v69; // r1@76
  unsigned int *v70; // r2@78
  signed int v71; // r1@80
  unsigned int *v72; // r2@82
  signed int v73; // r1@84
  _DWORD *v74; // [sp+4h] [bp-134h]@34
  __int64 v75; // [sp+Ch] [bp-12Ch]@34
  int v76; // [sp+18h] [bp-120h]@34
  _DWORD *v77; // [sp+1Ch] [bp-11Ch]@31
  __int64 v78; // [sp+24h] [bp-114h]@31
  int v79; // [sp+30h] [bp-108h]@31
  _DWORD *v80; // [sp+34h] [bp-104h]@28
  __int64 v81; // [sp+3Ch] [bp-FCh]@28
  int v82; // [sp+48h] [bp-F0h]@28
  _DWORD *v83; // [sp+4Ch] [bp-ECh]@25
  __int64 v84; // [sp+54h] [bp-E4h]@25
  int v85; // [sp+60h] [bp-D8h]@25
  _DWORD *v86; // [sp+64h] [bp-D4h]@22
  __int64 v87; // [sp+6Ch] [bp-CCh]@22
  int v88; // [sp+78h] [bp-C0h]@22
  void *v89; // [sp+7Ch] [bp-BCh]@19
  __int64 v90; // [sp+84h] [bp-B4h]@19
  int v91; // [sp+90h] [bp-A8h]@19
  void *v92; // [sp+94h] [bp-A4h]@16
  __int64 v93; // [sp+9Ch] [bp-9Ch]@16
  int v94; // [sp+A8h] [bp-90h]@16
  _DWORD *v95; // [sp+ACh] [bp-8Ch]@13
  __int64 v96; // [sp+B4h] [bp-84h]@13
  int v97; // [sp+C0h] [bp-78h]@13
  _DWORD *v98; // [sp+C4h] [bp-74h]@10
  __int64 v99; // [sp+CCh] [bp-6Ch]@10
  int v100; // [sp+D8h] [bp-60h]@10
  _DWORD *v101; // [sp+DCh] [bp-5Ch]@7
  __int64 v102; // [sp+E4h] [bp-54h]@7
  int v103; // [sp+F0h] [bp-48h]@7
  _DWORD *v104; // [sp+F4h] [bp-44h]@4
  __int64 v105; // [sp+FCh] [bp-3Ch]@4
  int v106; // [sp+108h] [bp-30h]@4
  _DWORD *v107; // [sp+10Ch] [bp-2Ch]@1
  __int64 v108; // [sp+114h] [bp-24h]@1
  int v109; // [sp+120h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v109, "#realms_name_box");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v109);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1202034;
  *v3 = v1;
  HIDWORD(v4) = sub_1201CDC;
  v107 = v3;
  v108 = v4;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v2, (int)&v107);
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  v5 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
  {
    v50 = (unsigned int *)(v109 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
    }
    else
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v106, "button.tos_hyperlink");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v106);
  v7 = operator new(4u);
  LODWORD(v8) = sub_120213C;
  *v7 = v1;
  HIDWORD(v8) = sub_120206C;
  v104 = v7;
  v105 = v8;
  ScreenController::registerButtonEventHandler((int)v1, v6, 0, 1, (int)&v104);
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  v9 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v106 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v103, "button.tos_ios_appletv");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v103);
  v11 = operator new(4u);
  LODWORD(v12) = sub_1202184;
  *v11 = v1;
  HIDWORD(v12) = sub_1202172;
  v101 = v11;
  v102 = v12;
  ScreenController::registerButtonEventHandler((int)v1, v10, 0, 1, (int)&v101);
  if ( (_DWORD)v102 )
    ((void (*)(void))v102)();
  v13 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v103 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v100, "button.tos_popup");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v100);
  v15 = operator new(4u);
  LODWORD(v16) = sub_120227C;
  *v15 = v1;
  HIDWORD(v16) = sub_12021BC;
  v98 = v15;
  v99 = v16;
  ScreenController::registerButtonEventHandler((int)v1, v14, 0, 1, (int)&v98);
  if ( (_DWORD)v99 )
    ((void (*)(void))v99)();
  v17 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v100 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v97, "button.create_realm");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v97);
  v19 = operator new(4u);
  LODWORD(v20) = sub_1202488;
  *v19 = v1;
  HIDWORD(v20) = sub_12022B4;
  v95 = v19;
  v96 = v20;
  ScreenController::registerButtonEventHandler((int)v1, v18, 0, 1, (int)&v95);
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  v21 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v97 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v94, "button.two_users");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v94);
  v23 = operator new(1u);
  LODWORD(v24) = sub_1202500;
  v92 = v23;
  HIDWORD(v24) = sub_12024FC;
  v93 = v24;
  ScreenController::registerButtonEventHandler((int)v1, v22, 0, 1, (int)&v92);
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  v25 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v94 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v91, "button.ten_users");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v91);
  v27 = operator new(1u);
  LODWORD(v28) = sub_1202532;
  v89 = v27;
  HIDWORD(v28) = sub_120252E;
  v90 = v28;
  ScreenController::registerButtonEventHandler((int)v1, v26, 0, 1, (int)&v89);
  if ( (_DWORD)v90 )
    ((void (*)(void))v90)();
  v29 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v91 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v88, "#agree_terms_and_conditions");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v88);
  v31 = operator new(4u);
  LODWORD(v32) = sub_120256E;
  *v31 = v1;
  HIDWORD(v32) = sub_1202560;
  v86 = v31;
  v87 = v32;
  ScreenController::registerToggleChangeEventHandler((int)v1, v30, (int)&v86);
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  v33 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v88 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v85, "button.realms_duration_short");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v85);
  v35 = operator new(4u);
  LODWORD(v36) = sub_12025B2;
  *v35 = v1;
  HIDWORD(v36) = sub_12025A4;
  v83 = v35;
  v84 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v83);
  if ( (_DWORD)v84 )
    ((void (*)(void))v84)();
  v37 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v85 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v82, "button.realms_duration_long");
  v38 = MinecraftScreenController::_getNameId(v1, (int **)&v82);
  v39 = operator new(4u);
  LODWORD(v40) = sub_12025F6;
  *v39 = v1;
  HIDWORD(v40) = sub_12025E8;
  v80 = v39;
  v81 = v40;
  ScreenController::registerButtonClickHandler((int)v1, v38, (int)&v80);
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  v41 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v82 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  sub_21E94B4((void **)&v79, "button.realms_player_count_2");
  v42 = MinecraftScreenController::_getNameId(v1, (int **)&v79);
  v43 = operator new(4u);
  LODWORD(v44) = sub_120263A;
  *v43 = v1;
  HIDWORD(v44) = sub_120262C;
  v77 = v43;
  v78 = v44;
  ScreenController::registerButtonClickHandler((int)v1, v42, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  v45 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v79 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  sub_21E94B4((void **)&v76, "button.realms_player_count_10");
  v46 = MinecraftScreenController::_getNameId(v1, (int **)&v76);
  v47 = operator new(4u);
  LODWORD(v48) = sub_120267E;
  *v47 = v1;
  HIDWORD(v48) = sub_1202670;
  v74 = v47;
  v75 = v48;
  ScreenController::registerButtonClickHandler((int)v1, v46, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  v49 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v76 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
}
