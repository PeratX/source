

int __fastcall MinecraftScreenController::_getButtonKeyboardDescription(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  return result;
}


int __fastcall MinecraftScreenController::_getButtonXDescription(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<GamepadDisconnectScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


int __fastcall MinecraftScreenController::_attemptXblGatedScreen(int a1, int *a2, int *a3, int *a4, int *a5, int a6)
{
  int v6; // r7@1
  int *v7; // r6@1
  int *v8; // r8@1
  int *v9; // r5@1
  int v10; // r7@1
  void (__fastcall *v11)(char *, int, signed int); // r3@1
  int result; // r0@5
  unsigned int *v13; // r2@6
  unsigned int v14; // r1@8
  char v15; // [sp+8h] [bp-30h]@2
  void (*v16)(void); // [sp+10h] [bp-28h]@1
  int v17; // [sp+14h] [bp-24h]@2
  char v18; // [sp+18h] [bp-20h]@1
  int v19; // [sp+1Ch] [bp-1Ch]@5

  v6 = a1;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  MinecraftScreenController::_getWeakPtrToThis<MinecraftScreenController>((int)&v18, a1);
  v10 = *(_DWORD *)(v6 + 380);
  v16 = 0;
  v11 = *(void (__fastcall **)(char *, int, signed int))(a6 + 8);
  if ( v11 )
  {
    v11(&v15, a6, 2);
    v17 = *(_DWORD *)(a6 + 12);
    v16 = *(void (**)(void))(a6 + 8);
  }
  MinecraftScreenModel::navigateToXblOptionalSignInScreen(v10, v7, v9, v8, a5, (int)&v15);
  if ( v16 )
    v16();
  result = v19;
  if ( v19 )
    v13 = (unsigned int *)(v19 + 8);
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
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<ResourcePacksScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


const void **__fastcall MinecraftScreenController::getItemStackSizeAsString(MinecraftScreenController *this, int a2, int a3)
{
  void **v3; // r5@1
  const void **result; // r0@1
  _BYTE *v5; // r0@2
  int v6; // [sp+0h] [bp-18h]@2

  v3 = (void **)this;
  result = (const void **)&unk_28898CC;
  *v3 = &unk_28898CC;
  if ( a2 >= 2 )
  {
    v6 = 0;
    GuiData::itemCountItoa((GuiData *)&v6, (char *)a2, a3);
    v5 = (_BYTE *)strlen((const char *)&v6);
    result = sub_DA78A4(v3, (char *)&v6, v5);
  }
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<PurchaseEnabledScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


UIPropertyBag *__fastcall MinecraftScreenController::_displayCustomModalPopup(int a1, int a2, __int64 a3)
{
  int v3; // r8@1
  int v4; // r6@1
  UIPropertyBag *result; // r0@1
  int v6; // r5@1
  bool v7; // zf@1
  int v8; // r0@4
  int v9; // r1@5
  void (*v10)(void); // r3@7
  int v11; // r0@9
  void *v12; // r0@10
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  void *v15; // r0@17
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  char v18; // r7@23
  char v19; // r0@23
  int v20; // r0@27
  char v21; // r1@29
  void *v22; // r0@32
  char *v23; // r0@36
  char *v24; // r0@37
  char *v25; // r0@38
  char *v26; // r0@39
  unsigned int *v27; // r2@42
  signed int v28; // r1@44
  unsigned int *v29; // r2@46
  signed int v30; // r1@48
  unsigned int *v31; // r2@50
  signed int v32; // r1@52
  unsigned int *v33; // r2@54
  signed int v34; // r1@56
  unsigned int *v35; // r2@80
  signed int v36; // r1@82
  char *v37; // [sp+0h] [bp-C0h]@36
  char *v38; // [sp+4h] [bp-BCh]@33
  int v39; // [sp+Ch] [bp-B4h]@31
  char v40; // [sp+12h] [bp-AEh]@31
  char v41; // [sp+13h] [bp-ADh]@31
  int v42; // [sp+14h] [bp-ACh]@29
  const char *v43; // [sp+18h] [bp-A8h]@31
  char v44; // [sp+1Fh] [bp-A1h]@29
  int v45; // [sp+20h] [bp-A0h]@27
  const char *v46; // [sp+24h] [bp-9Ch]@29
  char v47; // [sp+2Bh] [bp-95h]@27
  int v48; // [sp+2Ch] [bp-94h]@25
  const char *v49; // [sp+30h] [bp-90h]@27
  char v50; // [sp+37h] [bp-89h]@25
  int v51; // [sp+38h] [bp-88h]@23
  const char *v52; // [sp+3Ch] [bp-84h]@25
  int v53; // [sp+40h] [bp-80h]@23
  const char *v54; // [sp+44h] [bp-7Ch]@23
  int v55; // [sp+48h] [bp-78h]@23
  const char *v56; // [sp+4Ch] [bp-74h]@23
  int v57; // [sp+50h] [bp-70h]@23
  const char *v58; // [sp+54h] [bp-6Ch]@23
  int v59; // [sp+58h] [bp-68h]@17
  char *v60; // [sp+5Ch] [bp-64h]@16
  int v61; // [sp+60h] [bp-60h]@10
  char *v62; // [sp+64h] [bp-5Ch]@9
  char v63; // [sp+68h] [bp-58h]@9
  __int64 v64; // [sp+90h] [bp-30h]@5
  void (*v65)(void); // [sp+98h] [bp-28h]@4
  int v66; // [sp+9Ch] [bp-24h]@5

  v3 = a1;
  v4 = a3;
  result = *(UIPropertyBag **)(a1 + 12);
  v6 = a2;
  v7 = result == 0;
  if ( result )
  {
    result = *(UIPropertyBag **)(v3 + 28);
    v7 = result == 0;
  }
  if ( !v7 )
    v8 = 0;
    v65 = 0;
    HIDWORD(a3) = *(_DWORD *)(a3 + 8);
    if ( HIDWORD(a3) )
    {
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(a3))(&v64, a3, 2);
      v8 = *(_DWORD *)(v4 + 12);
      v66 = *(_DWORD *)(v4 + 12);
      v9 = *(_DWORD *)(v4 + 8);
      v65 = *(void (**)(void))(v4 + 8);
      a3 = v64;
    }
    else
      v9 = 0;
    v64 = *(_QWORD *)(v3 + 404);
    *(_QWORD *)(v3 + 404) = a3;
    v65 = *(void (**)(void))(v3 + 412);
    v10 = v65;
    *(_DWORD *)(v3 + 412) = v9;
    v66 = *(_DWORD *)(v3 + 416);
    *(_DWORD *)(v3 + 416) = v8;
    if ( v10 )
      v10();
    v11 = UIPropertyBag::UIPropertyBag((int)&v63);
    UIPropertyBag::set<char [13]>(v11, 4, "name", "popup_dialog");
    v62 = (char *)&unk_28898CC;
    if ( *(_DWORD *)(v6 + 4) == *(_DWORD *)(v6 + 8) )
      EntityInteraction::setInteractText((int *)&v62, (int *)v6);
      I18n::get(&v61, (int *)v6, (unsigned __int64 *)(v6 + 4));
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v62,
        &v61);
      v12 = (void *)(v61 - 12);
      if ( (int *)(v61 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v61 - 4);
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
          j_j_j_j_j__ZdlPv_9(v12);
      }
    UIPropertyBag::set<std::string>((int)&v63, 17, "#modal_title_text", (const void **)&v62);
    v60 = (char *)&unk_28898CC;
    if ( *(_DWORD *)(v6 + 20) == *(_DWORD *)(v6 + 24) )
      EntityInteraction::setInteractText((int *)&v60, (int *)(v6 + 16));
      I18n::get(&v59, (int *)(v6 + 16), (unsigned __int64 *)(v6 + 20));
        (int *)&v60,
        &v59);
      v15 = (void *)(v59 - 12);
      if ( (int *)(v59 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v59 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9(v15);
    UIPropertyBag::set<std::string>((int)&v63, 17, "#modal_label_text", (const void **)&v60);
    gsl::basic_string_span<char const,-1>::remove_z<24u>((int)&v57, (int)"#modal_left_button_text");
    UIPropertyBag::set<std::string>((int)&v63, v57, v58, (const void **)(v6 + 36));
    gsl::basic_string_span<char const,-1>::remove_z<26u>((int)&v55, (int)"#modal_middle_button_text");
    UIPropertyBag::set<std::string>((int)&v63, v55, v56, (const void **)(v6 + 40));
    gsl::basic_string_span<char const,-1>::remove_z<31u>((int)&v53, (int)"#modal_rightcancel_button_text");
    UIPropertyBag::set<std::string>((int)&v63, v53, v54, (const void **)(v6 + 44));
    gsl::basic_string_span<char const,-1>::remove_z<20u>((int)&v51, (int)"$no_buttons_visible");
    v18 = 0;
    v19 = 0;
    if ( *(_DWORD *)(v6 + 48) == 3 )
      v19 = 1;
    v50 = v19;
    UIPropertyBag::set<bool>((int)&v63, v51, v52, &v50);
    gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v48, (int)"$single_button_visible");
    if ( *(_DWORD *)(v6 + 48) == 2 )
      v18 = 1;
    v47 = v18;
    UIPropertyBag::set<bool>((int)&v63, v48, v49, &v47);
    gsl::basic_string_span<char const,-1>::remove_z<21u>((int)&v45, (int)"$two_buttons_visible");
    v20 = *(_DWORD *)(v6 + 48);
    if ( v20 != 1 )
      LOBYTE(v20) = 0;
    v44 = v20;
    UIPropertyBag::set<bool>((int)&v63, v45, v46, &v44);
    gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v42, (int)"$three_buttons_visible");
    v21 = 0;
    if ( !*(_DWORD *)(v6 + 48) )
      v21 = 1;
    v41 = v21;
    UIPropertyBag::set<bool>((int)&v63, v42, v43, &v41);
    v40 = 1;
    UIPropertyBag::set<bool>((int)&v63, 9, "exclusive", &v40);
    UIPropertyBag::set<char [19]>((int)&v63, 10, "control_id", "modal_dialog_popup");
    sub_DA7364((void **)&v39, "popup_dialog_factory");
    if ( !*(_DWORD *)(v3 + 12) )
      sub_DA7654();
    (*(void (__fastcall **)(int, int *, char *))(v3 + 16))(v3 + 4, &v39, &v63);
    v22 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9(v22);
    v38 = (char *)&unk_28898CC;
    sub_DA7404((const void **)&v38, *(_DWORD *)(*(_DWORD *)v6 - 12) + 3);
    sub_DA73D4((const void **)&v38, " - ", 3u);
    sub_DA7564((const void **)&v38, (const void **)v6);
    if ( *(_DWORD *)(*(_DWORD *)(v6 + 32) - 12) )
      EntityInteraction::setInteractText((int *)&v38, (int *)(v6 + 32));
    else if ( !*(_BYTE *)(v6 + 52) )
      v37 = (char *)&unk_28898CC;
      sub_DA7404((const void **)&v37, *(_DWORD *)(*(_DWORD *)(v6 + 16) - 12) + 3);
      sub_DA73D4((const void **)&v37, " - ", 3u);
      sub_DA7564((const void **)&v37, (const void **)(v6 + 16));
      sub_DA7564((const void **)&v38, (const void **)&v37);
      v23 = v37 - 12;
      if ( (int *)(v37 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v37 - 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j_j__ZdlPv_9(v23);
    MinecraftScreenModel::fireEventScreenChanged(*(_DWORD *)(v3 + 380), (int *)&v38);
    v24 = v38 - 12;
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v38 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j_j__ZdlPv_9(v24);
    v25 = v60 - 12;
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v60 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9(v25);
    v26 = v62 - 12;
    if ( (int *)(v62 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v62 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j_j__ZdlPv_9(v26);
    result = UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v63);
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<XblFirstLaunchScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


  if ( MinecraftScreenController::getInputMode((MinecraftScreenController *)v4)
{
    && !memcmp(*v3, v5, v6)
    && *(_DWORD *)(v4 + 784) == v42 )
  {
    v7 = 4;
  }
  else
    v8 = 0x18u % dword_27DABB0;
    v9 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
    if ( !v9 )
      goto LABEL_18;
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
    while ( 1 )
    {
      v12 = v11 == 24;
      if ( v11 == 24 )
        v12 = *(_DWORD *)(v10 + 4) == 24;
      if ( v12 )
        break;
      v13 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 )
      {
        v11 = *(_DWORD *)(v13 + 12);
        v9 = v10;
        v10 = *(_DWORD *)v10;
        if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27DABB0 == v8 )
          continue;
      }
    }
    v14 = v9 == 0;
    if ( v9 )
      v9 = *(_DWORD *)v9;
      v14 = v9 == 0;
    if ( v14 )
LABEL_18:
      v15 = operator new(0x10u);
      *v15 = 0;
      v15[1] = 24;
      v15[2] = &unk_28898CC;
      v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DABAC,
             v8,
             0x18u,
             (int)v15);
    v16 = (int *)*v3;
    v17 = *(_DWORD **)(v9 + 8);
    v18 = *((_DWORD *)*v3 - 3);
    if ( v18 == *(v17 - 3) && !memcmp(*v3, v17, *((_DWORD *)*v3 - 3)) )
      v7 = 0;
    else
      v43 = (int **)v3;
      v19 = 0x1Au % dword_27DABB0;
      v20 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
      if ( !v20 )
        goto LABEL_34;
      v21 = *(_DWORD *)v20;
      v22 = *(_DWORD *)(*(_DWORD *)v20 + 12);
      while ( 1 )
        v23 = v22 == 26;
        if ( v22 == 26 )
          v23 = *(_DWORD *)(v21 + 4) == 26;
        if ( v23 )
          break;
        v24 = *(_DWORD *)v21;
        if ( *(_DWORD *)v21 )
        {
          v22 = *(_DWORD *)(v24 + 12);
          v20 = v21;
          v21 = *(_DWORD *)v21;
          if ( *(_DWORD *)(v24 + 12) % (unsigned int)dword_27DABB0 == v19 )
            continue;
        }
      v25 = v20 == 0;
      if ( v20 )
        v20 = *(_DWORD *)v20;
        v25 = v20 == 0;
      if ( v25 )
LABEL_34:
        v26 = operator new(0x10u);
        *v26 = 0;
        v26[1] = 26;
        v26[2] = &unk_28898CC;
        v20 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                (int)&dword_27DABAC,
                v19,
                0x1Au,
                (int)v26);
        v16 = *v43;
        v18 = *(*v43 - 3);
      v27 = *(_DWORD **)(v20 + 8);
      if ( v18 == *(v27 - 3) && !memcmp(v16, v27, v18) )
        v7 = 0;
      else
        v41 = (ItemInstance *)ContainerManagerController::getItemInstance(*(_DWORD *)(v4 + 628), v43, v42);
        v28 = 0xBu % dword_27DABB0;
        v29 = *(_DWORD *)(v4 + 628);
        v30 = *(_DWORD *)(dword_27DABAC + 4 * (0xBu % dword_27DABB0));
        if ( !v30 )
          goto LABEL_50;
        v31 = *(_DWORD *)v30;
        v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
        while ( 1 )
          v33 = v32 == 11;
          if ( v32 == 11 )
            v33 = *(_DWORD *)(v31 + 4) == 11;
          if ( v33 )
            break;
          v34 = *(_DWORD *)v31;
          if ( *(_DWORD *)v31 )
          {
            v32 = *(_DWORD *)(v34 + 12);
            v30 = v31;
            v31 = *(_DWORD *)v31;
            if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27DABB0 == v28 )
              continue;
          }
        v35 = v30 == 0;
        if ( v30 )
          v30 = *(_DWORD *)v30;
          v35 = v30 == 0;
        if ( v35 )
LABEL_50:
          v36 = operator new(0x10u);
          *v36 = 0;
          v36[1] = 11;
          v36[2] = &unk_28898CC;
          v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27DABAC,
                  v28,
                  0xBu,
                  (int)v36);
        v37 = ContainerManagerController::getItemInstance(v29, (int **)(v30 + 8), 0);
        v38 = ItemInstance::ItemInstance((ItemInstance *)&v44, v37);
        if ( ItemInstance::isNull(v38) == 1 )
          v39 = CraftingContainerManagerController::getOutputGhostItemInstance(*(CraftingContainerManagerController **)(v4 + 628));
          ItemInstance::operator=((int)&v44, v39);
        if ( MinecraftScreenController::getInputMode((MinecraftScreenController *)v4) != 3
          && CraftingContainerManagerController::isCreativeContainer(*(_DWORD *)(v4 + 628), (const void **)v43) == 1
          && ItemInstance::matchesItem(v41, (const ItemInstance *)&v44) )
          v7 = 4;
        else if ( MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v4 + 424))
               || !CraftingContainerManagerController::isExpandableItemFiltered(*(_DWORD *)(v4 + 628), v43, v42) )
          v7 = CraftingContainerManagerController::getBackgroundStyle(*(_DWORD *)(v4 + 628), v43);
        else
          v7 = 5;
        if ( ptr )
          operator delete(ptr);
        if ( v46 )
          operator delete(v46);
        if ( v45 )
          (*(void (**)(void))(*(_DWORD *)v45 + 4))();
  return v7;
}


void __fastcall MinecraftScreenController::_closeModalDialog(MinecraftScreenController *this)
{
  MinecraftScreenController::_closeModalDialog(this);
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<CreateWorldUpsellScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<RealmsWhitelistScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


void __fastcall MinecraftScreenController::_showLiveMultiplayerModal(MinecraftScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  void *v2; // r0@2
  int v3; // r0@4
  const char *v4; // r1@4
  void *v5; // r0@6
  unsigned int *v6; // r2@8
  signed int v7; // r1@10
  int v8; // [sp+4h] [bp-1Ch]@6

  v1 = this;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  v3 = (*(int (**)(void))(**(_DWORD **)v2 + 644))();
  v4 = "permissions.MultiplayerSessionsOnConsole";
  if ( !v3 )
    v4 = "permissions.MultiplayerSessions";
  sub_DA7364((void **)&v8, v4);
  MinecraftScreenController::_showInvalidPermissionsModal((int)v1, &v8);
  v5 = (void *)(v8 - 12);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
}


ScreenController *__fastcall MinecraftScreenController::~MinecraftScreenController(MinecraftScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r5@3
  unsigned int *v4; // r1@4
  unsigned int v5; // r0@6
  unsigned int *v6; // r6@10
  unsigned int v7; // r0@12
  int v8; // r0@17
  unsigned int *v9; // r2@18
  unsigned int v10; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_26D7A04;
  v2 = (void (*)(void))*((_DWORD *)this + 103);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 96);
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
  v8 = *((_DWORD *)v1 + 94);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  return j_j_j__ZN16ScreenControllerD2Ev(v1);
}


  if ( MinecraftScreenController::getInputMode(**a1)
{
  {
    ContainerScreenController::_stopSplitting(v1);
  }
  return 0;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<CellularDataWarningScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


const void **__fastcall MinecraftScreenController::getItemStackSizeAsString(MinecraftScreenController *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r5@1
  void **v3; // r4@1
  bool v4; // zf@1
  int v5; // r2@4
  char *v6; // r1@5
  const void **result; // r0@6
  _BYTE *v8; // r0@7
  int v9; // [sp+0h] [bp-18h]@7

  v2 = a2;
  v3 = (void **)this;
  v4 = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    v4 = *(_DWORD *)a2 == 0;
  if ( v4 || ItemInstance::isNull(a2) || (v6 = (char *)*((_BYTE *)v2 + 14)) == 0 )
  {
    result = (const void **)&unk_28898CC;
    *v3 = &unk_28898CC;
  }
  else
    if ( (unsigned int)v6 >= 2 )
    {
      v9 = 0;
      GuiData::itemCountItoa((GuiData *)&v9, v6, v5);
      v8 = (_BYTE *)strlen((const char *)&v9);
      result = sub_DA78A4(v3, (char *)&v9, v8);
    }
  return result;
}


  if ( MinecraftScreenController::getInputMode((MinecraftScreenController *)v3)
{
  {
    v5 = 0;
  }
  else
    v5 = ContainerScreenController::_handleButtonIsHeld(v3, (int **)&v10, v4, 2, 0);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  return v5;
}


  if ( MinecraftScreenController::getHoloUIInputMode(v1) != 2 )
{
  return v2 & v3;
}


void __fastcall MinecraftScreenController::_showUserProfile(int a1, const char **a2, int a3)
{
  MinecraftScreenController::_showUserProfile(a1, a2, a3);
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<NoWifiWarningScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


  if ( v3 && *(_DWORD *)(v1 + 768) != 6 && MinecraftScreenController::getInputMode((MinecraftScreenController *)v1) == 3 )
{
    CraftingContainerManagerController::_clearCreativeHotbar(*(CraftingContainerManagerController **)(v1 + 628));
    result = 4;
  }
  else
  {
    result = 0;
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<LateJoinPreGameScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


  if ( MinecraftScreenController::_onModalEventReceived(**a1, 1) )
{
  return v1;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<ConnectGamepadScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


  if ( MinecraftScreenController::getInputMode((MinecraftScreenController *)v3) == 2 )
{
  v5 = ContainerItemStack::getItemInstance((ContainerItemStack *)&v266);
  v6 = v5;
  v7 = *(_BYTE *)(v5 + 15);
  v8 = v7 == 0;
  if ( v7 )
    v8 = *(_DWORD *)v6 == 0;
  if ( !v8 && !ItemInstance::isNull((ItemInstance *)v6) && *(_BYTE *)(v6 + 14) )
  {
    if ( MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v3 + 424)) == 1 )
    {
      sub_119C884((void **)&v265, "button.container_take_all_place_all");
      v9 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v265);
      v10 = ContainerScreenController::_releaseHeldButton((MinecraftScreenController *)v3, (const void **)&v270, v4, v9);
      v11 = (void *)(v265 - 12);
      if ( (int *)(v265 - 12) == &dword_28898C0 )
        goto LABEL_17;
      v12 = (unsigned int *)(v265 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        goto LABEL_353;
      }
      goto LABEL_352;
    }
    v38 = ContainerItemStack::getItemInstance((ContainerItemStack *)&v266);
    ItemInstance::ItemInstance((ItemInstance *)&v261, v38);
    v258 = 0;
    v259 = 0;
    v260 = 0;
    v39 = CraftingScreenController::_tryAutoPlaceItemIntoContainer(v3, (ContainerItemStack *)&v266, 9u, (int)&v258);
    ContainerScreenController::setCursorSelectedItem((ContainerScreenController *)v3, (const ContainerItemStack *)&v266);
    if ( v39 )
      v41 = v259;
      for ( i = (int)v258; (void *)i != v41; i += 8 )
        sub_119C854(&v257, &v270);
        sub_119C854(&v256, (int *)i);
        CraftingScreenController::_sendFlyingItem(
          v3,
          (ItemInstance *)&v261,
          (int)&v257,
          v4,
          (int)&v256,
          *(_DWORD *)(i + 4));
        v145 = (void *)(v256 - 12);
        if ( (int *)(v256 - 12) != &dword_28898C0 )
        {
          v141 = (unsigned int *)(v256 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v142 = __ldrex(v141);
            while ( __strex(v142 - 1, v141) );
          }
          else
            v142 = (*v141)--;
          if ( v142 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v145);
        }
        v146 = (void *)(v257 - 12);
        if ( (int *)(v257 - 12) != &dword_28898C0 )
          v143 = (unsigned int *)(v257 - 4);
              v144 = __ldrex(v143);
            while ( __strex(v144 - 1, v143) );
            v144 = (*v143)--;
          if ( v144 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v146);
    else
      ContainerScreenController::_handleDropSelectedItem((ContainerScreenController *)v3, 1);
    v52 = v259;
    v51 = v258;
    if ( v258 != v259 )
      do
        v55 = (int *)(*(_DWORD *)v51 - 12);
        if ( v55 != &dword_28898C0 )
          v53 = (unsigned int *)(*(_DWORD *)v51 - 4);
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
            v54 = (*v53)--;
          if ( v54 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v55);
        v51 = (char *)v51 + 8;
      while ( v51 != v52 );
      v51 = v258;
    if ( v51 )
      operator delete(v51);
    if ( v264 )
      operator delete(v264);
    if ( v263 )
      operator delete(v263);
    if ( v262 )
      v56 = *(void (**)(void))(*(_DWORD *)v262 + 4);
LABEL_101:
      v56();
LABEL_16:
    v10 = 1;
    goto LABEL_17;
  }
  if ( CraftingContainerManagerController::isExpandoItem(*(_DWORD *)(v3 + 628), &v270, v4) == 1 )
    CraftingContainerManagerController::switchExpandoItem(*(_DWORD *)(v3 + 628), &v270, v4);
    goto LABEL_16;
  v16 = MinecraftScreenController::getInputMode((MinecraftScreenController *)v3);
  v17 = *(MinecraftScreenModel **)(v3 + 424);
  if ( v16 != 3 )
    if ( MinecraftScreenModel::isCreative(v17) != 1 )
      CraftingContainerManagerController::getCurrentContainerStateList(
        (CraftingContainerManagerController *)&v199,
        *(_DWORD *)(v3 + 628));
      v31 = 0xAu % dword_27DABB0;
      v32 = *(_DWORD *)(v3 + 628);
      v33 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
      if ( !v33 )
        goto LABEL_135;
      v34 = *(_DWORD *)v33;
      v35 = *(_DWORD *)(*(_DWORD *)v33 + 12);
      while ( 1 )
        v36 = v35 == 10;
        if ( v35 == 10 )
          v36 = *(_DWORD *)(v34 + 4) == 10;
        if ( v36 )
          break;
        v37 = *(_DWORD *)v34;
        if ( *(_DWORD *)v34 )
          v35 = *(_DWORD *)(v37 + 12);
          v33 = v34;
          v34 = *(_DWORD *)v34;
          if ( *(_DWORD *)(v37 + 12) % (unsigned int)dword_27DABB0 == v31 )
            continue;
      v65 = v33 == 0;
      if ( v33 )
        v33 = *(_DWORD *)v33;
        v65 = v33 == 0;
      if ( v65 )
LABEL_135:
        v66 = operator new(0x10u);
        *v66 = 0;
        v66[1] = 10;
        v66[2] = &unk_28898CC;
        v33 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                (int)&dword_27DABAC,
                v31,
                0xAu,
                (int)v66);
      std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
        (unsigned __int64 *)(v3 + 600),
        (int **)(v33 + 8));
      CraftingContainerManagerController::handleRecipeSelected(__PAIR__(&v270, v32), v4, 0);
        (CraftingContainerManagerController *)&v197,
      v67 = HIDWORD(v199);
      v68 = *(_DWORD *)(v3 + 628);
      v69 = HIDWORD(v199);
      v70 = -1171354717 * ((HIDWORD(v199) - (signed int)v199) >> 3);
      v71 = 0;
      v191 = 0;
      v192 = 0;
      v193 = 0;
      if ( HIDWORD(v199) != (_DWORD)v199 )
        if ( v70 >= 0x2E8BA2F )
          sub_119C874();
        v71 = (char *)operator new(HIDWORD(v199) - v199);
        v67 = HIDWORD(v199);
        v69 = v199;
      v191 = v71;
      v193 = &v71[88 * v70];
      v192 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemStateData const*,std::vector<ItemStateData,std::allocator<ItemStateData>>>,ItemStateData*>(
               v69,
               v67,
               (int)v71);
      v72 = HIDWORD(v197);
      v73 = HIDWORD(v197);
      v74 = -1171354717 * ((HIDWORD(v197) - (signed int)v197) >> 3);
      v75 = 0;
      v188 = 0;
      v189 = 0;
      v190 = 0;
      if ( HIDWORD(v197) != (_DWORD)v197 )
        if ( v74 >= 0x2E8BA2F )
        v75 = operator new(HIDWORD(v197) - v197);
        v72 = HIDWORD(v197);
        v73 = v197;
      v188 = v75;
      v190 = (char *)v75 + 88 * v74;
      v189 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemStateData const*,std::vector<ItemStateData,std::allocator<ItemStateData>>>,ItemStateData*>(
               v73,
               v72,
               (int)v75);
      v76 = 0;
      CraftingContainerManagerController::compareStatesAndCollectTransfers(
        (int)&v194,
        v68,
        (unsigned __int64 *)&v191,
        &v188,
        0);
      std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v188);
      std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v191);
      v77 = v194;
      v183 = v195;
      if ( !*(_BYTE *)(v3 + 656) )
        v76 = 1;
      if ( v194 != v195 )
          if ( v76 & 1 )
            goto LABEL_397;
          v82 = 0x1Au % dword_27DABB0;
          v83 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
          if ( !v83 )
            goto LABEL_175;
          v84 = *(_DWORD *)v83;
          v85 = *(_DWORD *)(*(_DWORD *)v83 + 12);
          while ( 1 )
            v86 = v85 == 26;
            if ( v85 == 26 )
              v86 = *(_DWORD *)(v84 + 4) == 26;
            if ( v86 )
              break;
            v87 = *(_DWORD *)v84;
            if ( *(_DWORD *)v84 )
            {
              v85 = *(_DWORD *)(v87 + 12);
              v83 = v84;
              v84 = *(_DWORD *)v84;
              if ( *(_DWORD *)(v87 + 12) % (unsigned int)dword_27DABB0 == v82 )
                continue;
            }
          v88 = v83 == 0;
          if ( v83 )
            v83 = *(_DWORD *)v83;
            v88 = v83 == 0;
          if ( v88 )
LABEL_175:
            v89 = operator new(0x10u);
            *v89 = 0;
            v89[1] = 26;
            v89[2] = &unk_28898CC;
            v83 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    (int)&dword_27DABAC,
                    v82,
                    0x1Au,
                    (int)v89);
          v90 = *(_DWORD **)(v83 + 8);
          v91 = *(_DWORD *)(*((_DWORD *)v77 + 20) - 12);
          if ( v91 != *(v90 - 3) || memcmp(*((const void **)v77 + 20), v90, v91) )
            if ( *(_DWORD *)(v3 + 772) == 2 )
              goto LABEL_397;
            v92 = 0xAu % dword_27DABB0;
            v93 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
            if ( !v93 )
              goto LABEL_191;
            v94 = *(_DWORD *)v93;
            v95 = *(_DWORD *)(*(_DWORD *)v93 + 12);
            while ( 1 )
              v96 = v95 == 10;
              if ( v95 == 10 )
                v96 = *(_DWORD *)(v94 + 4) == 10;
              if ( v96 )
                break;
              v97 = *(_DWORD *)v94;
              if ( *(_DWORD *)v94 )
              {
                v95 = *(_DWORD *)(v97 + 12);
                v93 = v94;
                v94 = *(_DWORD *)v94;
                if ( *(_DWORD *)(v97 + 12) % (unsigned int)dword_27DABB0 == v92 )
                  continue;
              }
            v98 = v93 == 0;
            if ( v93 )
              v93 = *(_DWORD *)v93;
              v98 = v93 == 0;
            if ( v98 )
LABEL_191:
              v99 = operator new(0x10u);
              *v99 = 0;
              v99[1] = 10;
              v99[2] = &unk_28898CC;
              v93 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                      (int)&dword_27DABAC,
                      v92,
                      0xAu,
                      (int)v99);
            v100 = *(_DWORD **)(v93 + 8);
            v101 = *(_DWORD *)(*((_DWORD *)v77 + 18) - 12);
            if ( v101 != *(v100 - 3) || memcmp(*((const void **)v77 + 18), v100, v101) )
              v102 = 0xAu % dword_27DABB0;
              v103 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
              if ( !v103 )
                goto LABEL_206;
              v104 = *(_DWORD *)v103;
              v105 = *(_DWORD *)(*(_DWORD *)v103 + 12);
              while ( 1 )
                v106 = v105 == 10;
                if ( v105 == 10 )
                  v106 = *(_DWORD *)(v104 + 4) == 10;
                if ( v106 )
                  break;
                v107 = *(_DWORD *)v104;
                if ( *(_DWORD *)v104 )
                {
                  v105 = *(_DWORD *)(v107 + 12);
                  v103 = v104;
                  v104 = *(_DWORD *)v104;
                  if ( *(_DWORD *)(v107 + 12) % (unsigned int)dword_27DABB0 == v102 )
                    continue;
                }
              v108 = v103 == 0;
              if ( v103 )
                v103 = *(_DWORD *)v103;
                v108 = v103 == 0;
              if ( v108 )
LABEL_206:
                v109 = operator new(0x10u);
                *v109 = 0;
                v109[1] = 10;
                v109[2] = &unk_28898CC;
                v103 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                         (int)&dword_27DABAC,
                         v102,
                         0xAu,
                         (int)v109);
              v110 = *(_DWORD **)(v103 + 8);
              v111 = *(_DWORD *)(*((_DWORD *)v77 + 20) - 12);
              if ( v111 != *(v110 - 3) || memcmp(*((const void **)v77 + 20), v110, v111) )
                v112 = 0xBu % dword_27DABB0;
                v113 = *(_DWORD *)(dword_27DABAC + 4 * (0xBu % dword_27DABB0));
                if ( !v113 )
                  goto LABEL_221;
                v114 = *(_DWORD *)v113;
                v115 = *(_DWORD *)(*(_DWORD *)v113 + 12);
                while ( 1 )
                  v116 = v115 == 11;
                  if ( v115 == 11 )
                    v116 = *(_DWORD *)(v114 + 4) == 11;
                  if ( v116 )
                    break;
                  v117 = *(_DWORD *)v114;
                  if ( *(_DWORD *)v114 )
                  {
                    v115 = *(_DWORD *)(v117 + 12);
                    v113 = v114;
                    v114 = *(_DWORD *)v114;
                    if ( *(_DWORD *)(v117 + 12) % (unsigned int)dword_27DABB0 == v112 )
                      continue;
                  }
                v118 = v113 == 0;
                if ( v113 )
                  v113 = *(_DWORD *)v113;
                  v118 = v113 == 0;
                if ( v118 )
LABEL_221:
                  v119 = operator new(0x10u);
                  *v119 = 0;
                  v119[1] = 11;
                  v119[2] = &unk_28898CC;
                  v113 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                           (int)&dword_27DABAC,
                           v112,
                           0xBu,
                           (int)v119);
                v120 = *(_DWORD **)(v113 + 8);
                v121 = *(_DWORD *)(*((_DWORD *)v77 + 18) - 12);
                if ( v121 != *(v120 - 3) || memcmp(*((const void **)v77 + 18), v120, v121) )
                  v122 = 0xBu % dword_27DABB0;
                  v123 = *(_DWORD *)(dword_27DABAC + 4 * (0xBu % dword_27DABB0));
                  if ( !v123 )
                    goto LABEL_236;
                  v124 = *(_DWORD *)v123;
                  v125 = *(_DWORD *)(*(_DWORD *)v123 + 12);
                  while ( 1 )
                    v126 = v125 == 11;
                    if ( v125 == 11 )
                      v126 = *(_DWORD *)(v124 + 4) == 11;
                    if ( v126 )
                      break;
                    v127 = *(_DWORD *)v124;
                    if ( *(_DWORD *)v124 )
                    {
                      v125 = *(_DWORD *)(v127 + 12);
                      v123 = v124;
                      v124 = *(_DWORD *)v124;
                      if ( *(_DWORD *)(v127 + 12) % (unsigned int)dword_27DABB0 == v122 )
                        continue;
                    }
                  v128 = v123 == 0;
                  if ( v123 )
                    v123 = *(_DWORD *)v123;
                    v128 = v123 == 0;
                  if ( v128 )
LABEL_236:
                    v129 = operator new(0x10u);
                    *v129 = 0;
                    v129[1] = 11;
                    v129[2] = &unk_28898CC;
                    v123 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                             (int)&dword_27DABAC,
                             v122,
                             0xBu,
                             (int)v129);
                  v130 = *(_DWORD **)(v123 + 8);
                  v131 = *(_DWORD *)(*((_DWORD *)v77 + 20) - 12);
                  if ( v131 != *(v130 - 3) || memcmp(*((const void **)v77 + 20), v130, v131) )
LABEL_397:
                    sub_119C854(&v187, (int *)v77 + 18);
                    v132 = *((_DWORD *)v77 + 19);
                    v133 = sub_119C854(&v186, (int *)v77 + 20);
                    CraftingScreenController::_sendFlyingItem(
                      v3,
                      (ItemInstance *)v77,
                      (int)&v187,
                      v132,
                      (int)v133,
                      *((_DWORD *)v77 + 21));
                    v134 = (void *)(v186 - 12);
                    if ( (int *)(v186 - 12) != &dword_28898C0 )
                      v78 = (unsigned int *)(v186 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v79 = __ldrex(v78);
                        while ( __strex(v79 - 1, v78) );
                      }
                      else
                        v79 = (*v78)--;
                      if ( v79 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v134);
                    v135 = (void *)(v187 - 12);
                    if ( (int *)(v187 - 12) != &dword_28898C0 )
                      v80 = (unsigned int *)(v187 - 4);
                          v81 = __ldrex(v80);
                        while ( __strex(v81 - 1, v80) );
                        v81 = (*v80)--;
                      if ( v81 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v135);
          v76 = 0;
          v77 = (char *)v77 + 88;
          if ( !*(_BYTE *)(v3 + 656) )
            v76 = 1;
        while ( v77 != v183 );
      if ( !v76 && MinecraftScreenController::getInputMode((MinecraftScreenController *)v3) == 2 )
        CraftingScreenController::_changeRightSideInventoryTab(
          (CraftingScreenController *)v3,
          2 - *(_DWORD *)(v3 + 772));
      std::_Destroy_aux<false>::__destroy<ItemTransferData *>((int)v194, (int)v195);
      if ( v194 )
        operator delete(v194);
      std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector(&v197);
      std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector(&v199);
      goto LABEL_16;
    CraftingContainerManagerController::clearAllRecipes(*(CraftingContainerManagerController **)(v3 + 628));
    if ( MinecraftScreenController::getInputMode((MinecraftScreenController *)v3) != 2 || !*(_BYTE *)(v3 + 656) )
      sub_119C884((void **)&v202, "button.container_take_all_place_all");
      v42 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v202);
      v10 = ContainerScreenController::_releaseHeldButton(
              (MinecraftScreenController *)v3,
              (const void **)&v270,
              v4,
              v42);
      v11 = (void *)(v202 - 12);
      if ( (int *)(v202 - 12) == &dword_28898C0 )
      v12 = (unsigned int *)(v202 - 4);
LABEL_353:
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v11);
LABEL_352:
      v13 = (*v12)--;
      goto LABEL_353;
    v24 = *(_DWORD *)(v3 + 628);
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 780) - 12) )
      if ( CraftingContainerManagerController::isCreativeContainer(v24, (const void **)(v3 + 780)) != 1 )
        v147 = *(_DWORD *)(v3 + 628);
        sub_119C854(&v239, (int *)(v3 + 780));
        ContainerManagerController::getContainerController((int)&v240, v147, (int **)&v239);
        v148 = (void *)(v239 - 12);
        if ( (int *)(v239 - 12) != &dword_28898C0 )
          v171 = (unsigned int *)(v239 - 4);
              v172 = __ldrex(v171);
            while ( __strex(v172 - 1, v171) );
            v172 = (*v171)--;
          if ( v172 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v148);
        v149 = ContainerController::getItem(v240, *(_DWORD *)(v3 + 784));
        sub_119C854(&v238, (int *)(v3 + 780));
        v150 = *(_DWORD *)(v3 + 784);
        v151 = sub_119C854(&v237, &v270);
        CraftingScreenController::_sendFlyingItem(v3, (ItemInstance *)v149, (int)&v238, v150, (int)v151, v4);
        v152 = (void *)(v237 - 12);
        if ( (int *)(v237 - 12) != &dword_28898C0 )
          v173 = (unsigned int *)(v237 - 4);
              v174 = __ldrex(v173);
            while ( __strex(v174 - 1, v173) );
            v174 = (*v173)--;
          if ( v174 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v152);
        v153 = (void *)(v238 - 12);
        if ( (int *)(v238 - 12) != &dword_28898C0 )
          v175 = (unsigned int *)(v238 - 4);
              v176 = __ldrex(v175);
            while ( __strex(v176 - 1, v175) );
            v176 = (*v175)--;
          if ( v176 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v153);
        if ( *(_BYTE *)(v3 + 788)
          && ProgressiveTakeButtonData::getAmountTaken((ProgressiveTakeButtonData *)(v3 + 520)) >= 1 )
          v154 = v240;
          v155 = *(_DWORD *)(v3 + 784);
          v156 = ProgressiveTakeButtonData::getAmountTaken((ProgressiveTakeButtonData *)(v3 + 520));
          ContainerController::removeItem((ContainerController *)&v233, (int)v154, v155, v156);
          if ( v236 )
            operator delete(v236);
          if ( v235 )
            operator delete(v235);
          if ( v234 )
            (*(void (**)(void))(*(_DWORD *)v234 + 4))();
          v234 = 0;
        else
          ContainerController::removeItem(
            (ContainerController *)&v229,
            (int)v240,
            *(_DWORD *)(v3 + 784),
            *(_BYTE *)(v149 + 14));
          if ( v232 )
            operator delete(v232);
          if ( v231 )
            operator delete(v231);
          if ( v230 )
            (*(void (**)(void))(*(_DWORD *)v230 + 4))();
          v230 = 0;
        ContainerScreenController::_resetSplitStack((ContainerScreenController *)v3);
        ContainerScreenController::_resetHeldButton((ContainerScreenController *)v3);
        ContainerScreenController::_setPointerHeldEventsHandled((ContainerScreenController *)v3, 0);
        ProgressiveTakeButtonData::setAutoHandleAtMaxStackSize((ProgressiveTakeButtonData *)(v3 + 520), 1);
        *(_WORD *)(v3 + 788) = 0;
        EntityInteraction::setInteractText((int *)(v3 + 780), (int *)&Util::EMPTY_STRING);
        *(_DWORD *)(v3 + 784) = -1;
        v164 = v241;
        if ( !v241 )
          goto LABEL_16;
        v165 = (unsigned int *)(v241 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v166 = __ldrex(v165);
          while ( __strex(v166 - 1, v165) );
          v166 = (*v165)--;
        if ( v166 != 1 )
        v169 = (unsigned int *)(v164 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v164 + 8))(v164);
            v170 = __ldrex(v169);
          while ( __strex(v170 - 1, v169) );
          v170 = (*v169)--;
        if ( v170 != 1 )
        v56 = *(void (**)(void))(*(_DWORD *)v164 + 12);
        goto LABEL_101;
      EntityInteraction::setInteractText((int *)(v3 + 780), &v270);
      v136 = CraftingContainerManagerController::isCreativeContainer(v24, (const void **)&v270);
      v137 = v136 == 1;
      if ( v136 == 1 )
        v136 = *(_WORD *)(v3 + 788);
        v137 = (unsigned __int8)v136 == 0;
      if ( v137 && v136 <= 0xFF && !*(_DWORD *)(*(_DWORD *)(v3 + 780) - 12) )
        v138 = ContainerManagerController::getItemInstance(*(_DWORD *)(v3 + 628), (int **)&v270, v4);
        ItemInstance::ItemInstance((ItemInstance *)&v223, v138);
        v139 = v226 == 0;
        if ( v226 )
          v139 = v223 == 0;
        if ( !v139 && !ItemInstance::isNull((ItemInstance *)&v223) && v225 )
          v140 = ItemInstance::getMaxStackSize((ItemInstance *)&v223);
          ItemInstance::set((ItemInstance *)&v223, v140);
          ItemGroup::ItemGroup((ItemGroup *)&v203, (const ItemInstance *)&v223);
          ItemInstance::operator=(v3 + 792, (int)&v203);
          *(_DWORD *)(v3 + 864) = v221;
          if ( v216 )
            operator delete(v216);
          if ( v212 )
            operator delete(v212);
          if ( v205 )
            (*(void (**)(void))(*(_DWORD *)v205 + 4))();
          v205 = 0;
        if ( v228 )
          operator delete(v228);
        if ( v227 )
          operator delete(v227);
        if ( v224 )
          (*(void (**)(void))(*(_DWORD *)v224 + 4))();
    *(_DWORD *)(v3 + 784) = v4;
  if ( MinecraftScreenModel::isCreative(v17) == 1 )
    sub_119C884((void **)&v255, "button.container_take_all_place_all");
    v18 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v255);
    v10 = ContainerScreenController::_releaseHeldButton((MinecraftScreenController *)v3, (const void **)&v270, v4, v18);
    v19 = (void *)(v255 - 12);
    if ( (int *)(v255 - 12) != &dword_28898C0 )
      v167 = (unsigned int *)(v255 - 4);
          v168 = __ldrex(v167);
        while ( __strex(v168 - 1, v167) );
      else
        v168 = (*v167)--;
      if ( v168 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    ContainerScreenController::getCursorSelectedItem((ContainerScreenController *)&v251, v3);
    ItemInstance::operator=((int)&v266, (int)&v251);
    if ( v254 )
      operator delete(v254);
    if ( v253 )
      operator delete(v253);
    if ( v252 )
      (*(void (**)(void))(*(_DWORD *)v252 + 4))();
    v252 = 0;
    v20 = ContainerItemStack::getItemInstance((ContainerItemStack *)&v266);
    ItemInstance::ItemInstance((ItemInstance *)&v247, v20);
    v244 = 0;
    v245 = 0;
    v246 = 0;
    v21 = CraftingScreenController::_tryAutoPlaceItemIntoContainer(v3, (ContainerItemStack *)&v266, 0x18u, (int)&v244);
    if ( v21 )
      v22 = v245;
      for ( j = (int)v244; (void *)j != v22; j += 8 )
        sub_119C854(&v243, &v270);
        sub_119C854(&v242, (int *)j);
          (ItemInstance *)&v247,
          (int)&v243,
          (int)&v242,
          *(_DWORD *)(j + 4));
        v61 = (void *)(v242 - 12);
        if ( (int *)(v242 - 12) != &dword_28898C0 )
          v57 = (unsigned int *)(v242 - 4);
              v58 = __ldrex(v57);
            while ( __strex(v58 - 1, v57) );
            v58 = (*v57)--;
          if ( v58 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v61);
        v62 = (void *)(v243 - 12);
        if ( (int *)(v243 - 12) != &dword_28898C0 )
          v59 = (unsigned int *)(v243 - 4);
              v60 = __ldrex(v59);
            while ( __strex(v60 - 1, v59) );
            v60 = (*v59)--;
          if ( v60 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v62);
      v45 = 0x18u % dword_27DABB0;
      v46 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
      if ( !v46 )
        goto LABEL_312;
      v47 = *(_DWORD *)v46;
      v48 = *(_DWORD *)(*(_DWORD *)v46 + 12);
        v49 = v48 == 24;
        if ( v48 == 24 )
          v49 = *(_DWORD *)(v47 + 4) == 24;
        if ( v49 )
        v50 = *(_DWORD *)v47;
        if ( *(_DWORD *)v47 )
          v48 = *(_DWORD *)(v50 + 12);
          v46 = v47;
          v47 = *(_DWORD *)v47;
          if ( *(_DWORD *)(v50 + 12) % (unsigned int)dword_27DABB0 == v45 )
      v157 = v46 == 0;
      if ( v46 )
        v46 = *(_DWORD *)v46;
        v157 = v46 == 0;
      if ( v157 )
LABEL_312:
        v158 = operator new(0x10u);
        *v158 = 0;
        v158[1] = 24;
        v158[2] = &unk_28898CC;
        v46 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                v45,
                0x18u,
                (int)v158);
      if ( !*(_DWORD *)(v3 + 932) )
        sub_119C8E4();
      (*(void (__fastcall **)(int, int, _DWORD))(v3 + 936))(v3 + 924, v46 + 8, 0);
    v160 = v245;
    v159 = v244;
    if ( v244 != v245 )
        v163 = (int *)(*(_DWORD *)v159 - 12);
        if ( v163 != &dword_28898C0 )
          v161 = (unsigned int *)(*(_DWORD *)v159 - 4);
              v162 = __ldrex(v161);
            while ( __strex(v162 - 1, v161) );
            v162 = (*v161)--;
          if ( v162 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v163);
        v159 = (char *)v159 + 8;
      while ( v159 != v160 );
      v159 = v244;
    if ( v159 )
      operator delete(v159);
    if ( v250 )
      operator delete(v250);
    if ( v249 )
      operator delete(v249);
    if ( v248 )
      (*(void (**)(void))(*(_DWORD *)v248 + 4))();
  else
    v10 = CraftingScreenController::_recipeAutoCraft(
            v3,
            (int)&v270,
            v4,
            1,
            v177,
            v178,
            v179,
            v180,
            v181,
            v182,
            v184,
            v186,
            v187,
            v188,
            v189,
            (int)v190,
            (int)v191,
            v192,
            (char)v193,
            (int)v194,
            (int)v195,
            v196,
            v197,
            SHIDWORD(v197),
            v198,
            v199,
            SHIDWORD(v199),
            v200,
            v201,
            v202,
            v203,
            v204,
            v205,
            v206,
            v207,
            v208,
            v209,
            v210,
            v211,
            (int)v212,
            v213,
            v214,
            v215,
            (int)v216,
            v217,
            v218,
            v219,
            v220,
            v221,
            v222);
    v25 = 0xAu % dword_27DABB0;
    v185 = *(_DWORD *)(v3 + 628);
    v26 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
    if ( !v26 )
      goto LABEL_129;
    v27 = *(_DWORD *)v26;
    v28 = *(_DWORD *)(*(_DWORD *)v26 + 12);
    while ( 1 )
      v29 = v28 == 10;
      if ( v28 == 10 )
        v29 = *(_DWORD *)(v27 + 4) == 10;
      if ( v29 )
        break;
      v30 = *(_DWORD *)v27;
      if ( *(_DWORD *)v27 )
        v28 = *(_DWORD *)(v30 + 12);
        v26 = v27;
        v27 = *(_DWORD *)v27;
        if ( *(_DWORD *)(v30 + 12) % (unsigned int)dword_27DABB0 == v25 )
          continue;
    v63 = v26 == 0;
    if ( v26 )
      v26 = *(_DWORD *)v26;
      v63 = v26 == 0;
    if ( v63 )
LABEL_129:
      v64 = operator new(0x10u);
      *v64 = 0;
      v64[1] = 10;
      v64[2] = &unk_28898CC;
      v26 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DABAC,
              v25,
              0xAu,
              (int)v64);
    std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
      (unsigned __int64 *)(v3 + 600),
      (int **)(v26 + 8));
    CraftingContainerManagerController::handleRecipeSelected(__PAIR__(&v270, v185), v4, 1);
LABEL_17:
  if ( ptr )
    operator delete(ptr);
  if ( v268 )
    operator delete(v268);
  if ( v267 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v267 + 4))(v267);
  v14 = (void *)(v270 - 12);
  if ( (int *)(v270 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v270 - 4);
    if ( &pthread_create )
      __dmb();
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  return v10;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<XblConsoleSignInSucceededScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


  if ( v3 && *(_DWORD *)(v1 + 768) != 6 && MinecraftScreenController::getInputMode((MinecraftScreenController *)v1) == 3 )
{
    CraftingContainerManagerController::_clearCreativeHotbar(*(CraftingContainerManagerController **)(v1 + 628));
    result = 4;
  }
  else
  {
    result = 0;
  return result;
}


void __fastcall MinecraftScreenController::showRemoteStorageErrorModal(int a1, int *a2)
{
  MinecraftScreenController::showRemoteStorageErrorModal(a1, a2);
}


int __fastcall MinecraftScreenController::leaveScreen(int result)
{
  *(_BYTE *)(result + 420) = 1;
  return result;
}


int __fastcall MinecraftScreenController::tick(MinecraftScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  signed int v2; // r5@1
  int v3; // r0@3
  bool v4; // zf@3

  v1 = this;
  v2 = 0;
  if ( *((_BYTE *)this + 400) )
  {
    *((_BYTE *)this + 400) = 0;
    v2 = 1;
  }
  v3 = (*(int (__fastcall **)(MinecraftScreenController *))(*(_DWORD *)this + 100))(this);
  v4 = v3 == 1;
  if ( v3 == 1 )
    v4 = *((_BYTE *)v1 + 420) == 0;
  if ( !v4 )
    MinecraftScreenModel::leaveScreen(*((MinecraftScreenModel **)v1 + 95));
  return ScreenController::tick(v1) | v2;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<ConvertPurchasesToXBLScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<NoInvitesOrJoiningScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


ModalScreenData *__fastcall MinecraftScreenController::_attemptSigninOrSignup(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  __int64 v4; // kr00_8@3
  unsigned int *v5; // r0@4
  unsigned int v6; // r1@6
  _QWORD *v7; // r0@9
  __int64 v8; // r2@9 OVERLAPPED
  unsigned int *v9; // r1@10
  int (__fastcall *v10)(_DWORD *, void **, int); // r1@15
  unsigned int *v11; // r1@18
  unsigned int v12; // r0@20
  int v13; // r0@25
  int v14; // r9@26
  void (__fastcall *v15)(int, void **); // r8@26
  unsigned int *v16; // r0@27
  unsigned int v17; // r1@29
  void (__fastcall *v18)(char *, int, signed int); // r3@31
  void (__fastcall *v19)(int *, int, signed int); // r3@36
  void (__fastcall *v20)(_DWORD, _DWORD, _DWORD); // r7@36
  void *v21; // r0@38
  unsigned int *v22; // r1@38
  unsigned int v23; // r2@41
  __int64 v24; // r2@44
  int v25; // r0@48
  unsigned int *v26; // r2@49
  unsigned int v27; // r1@51
  int v28; // r0@56
  unsigned int *v29; // r2@57
  unsigned int v30; // r1@59
  char v32; // [sp+4h] [bp-A4h]@32
  void (*v33)(void); // [sp+Ch] [bp-9Ch]@31
  int v34; // [sp+10h] [bp-98h]@32
  int v35; // [sp+14h] [bp-94h]@26
  int v36; // [sp+18h] [bp-90h]@26
  int v37; // [sp+1Ch] [bp-8Ch]@37
  void (__fastcall *v38)(_DWORD, _DWORD, _DWORD); // [sp+24h] [bp-84h]@36
  unsigned int *v39; // [sp+28h] [bp-80h]@37
  void *v40; // [sp+2Ch] [bp-7Ch]@44
  void (*v41)(void); // [sp+34h] [bp-74h]@38
  int (__fastcall *v42)(int); // [sp+38h] [bp-70h]@44
  _QWORD *v43; // [sp+3Ch] [bp-6Ch]@15
  void (*v44)(void); // [sp+44h] [bp-64h]@9
  int v45; // [sp+4Ch] [bp-5Ch]@3
  int v46; // [sp+50h] [bp-58h]@3
  void *v47; // [sp+54h] [bp-54h]@1
  int v48; // [sp+58h] [bp-50h]@1
  int v49; // [sp+5Ch] [bp-4Ch]@1
  int v50; // [sp+60h] [bp-48h]@1
  void *v51; // [sp+64h] [bp-44h]@1
  int v52; // [sp+68h] [bp-40h]@1
  int v53; // [sp+6Ch] [bp-3Ch]@1
  int v54; // [sp+70h] [bp-38h]@1
  void *v55; // [sp+74h] [bp-34h]@1
  void *v56; // [sp+78h] [bp-30h]@1
  void *v57; // [sp+7Ch] [bp-2Ch]@1
  void *v58; // [sp+80h] [bp-28h]@1
  int v59; // [sp+84h] [bp-24h]@1
  char v60; // [sp+88h] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  v47 = &unk_28898CC;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = &unk_28898CC;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = &unk_28898CC;
  v56 = &unk_28898CC;
  v57 = &unk_28898CC;
  v58 = &unk_28898CC;
  v59 = 1;
  v60 = 0;
  sub_DA78A4(&v47, "xblLogin.LoginMessageTitle", (_BYTE *)0x1A);
  if ( !MinecraftScreenModel::deviceNeedsToBeRemovedForXblSignin(*(MinecraftScreenModel **)(v2 + 380)) )
    sub_DA78A4(&v51, "xblLogin.LoginMessage", (_BYTE *)0x15);
  v59 = 3;
  MinecraftScreenController::_getWeakPtrToThis<MinecraftScreenController>((int)&v45, v2);
  v4 = *(_QWORD *)&v45;
  if ( v46 )
  {
    v5 = (unsigned int *)(v46 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v44 = 0;
  v7 = operator new(8u);
  *v7 = v4;
  if ( HIDWORD(v4) )
    v9 = (unsigned int *)(HIDWORD(v4) + 8);
      {
        LODWORD(v8) = __ldrex(v9);
        HIDWORD(v8) = __strex(v8 + 1, v9);
      }
      while ( HIDWORD(v8) );
      ++*v9;
  v10 = sub_CADFE8;
  v43 = v7;
  LODWORD(v8) = sub_CADE80;
  *(_QWORD *)&v44 = *(__int64 *)((char *)&v8 - 4);
  LODWORD(v8) = &v43;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v47, v8);
  if ( v44 )
    v44();
    v11 = (unsigned int *)(HIDWORD(v4) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  v13 = MinecraftScreenModel::getHoloInput(*(MinecraftScreenModel **)(v2 + 380));
  if ( (*(int (**)(void))(*(_DWORD *)v13 + 88))() == 1 )
    v14 = MinecraftScreenModel::getHoloInput(*(MinecraftScreenModel **)(v2 + 380));
    v15 = *(void (__fastcall **)(int, void **))(*(_DWORD *)v14 + 100);
    v35 = v45;
    v36 = v46;
    if ( v46 )
      v16 = (unsigned int *)(v46 + 8);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 + 1, v16) );
      else
        ++*v16;
    v38 = 0;
    v19 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
    v20 = 0;
    if ( v19 )
      v19(&v37, v3, 2);
      v39 = *(unsigned int **)(v3 + 12);
      v20 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
      v38 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
    v41 = 0;
    v21 = operator new(0x18u);
    *(_DWORD *)v21 = v35;
    v22 = (unsigned int *)v36;
    *((_DWORD *)v21 + 1) = v36;
    if ( v22 )
      v22 += 2;
          v23 = __ldrex(v22);
        while ( __strex(v23 + 1, v22) );
        v22 = (unsigned int *)*((_DWORD *)v21 + 5);
        v20 = v38;
        ++*v22;
    v24 = *(_QWORD *)&v37;
    *(_QWORD *)&v37 = *((_QWORD *)v21 + 1);
    *((_QWORD *)v21 + 1) = v24;
    LODWORD(v24) = v39;
    *((_DWORD *)v21 + 4) = v20;
    v39 = v22;
    *((_DWORD *)v21 + 5) = v24;
    v40 = v21;
    v41 = (void (*)(void))sub_CAE214;
    v42 = sub_CAE08C;
    v15(v14, &v40);
    if ( v41 )
      v41();
    if ( v38 )
      v38(&v37, &v37, 3);
    v25 = v36;
    if ( v36 )
      v26 = (unsigned int *)(v36 + 8);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 == 1 )
        (*(void (**)(void))(*(_DWORD *)v25 + 12))();
  else
    v33 = 0;
    v18 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
    if ( v18 )
      v18(&v32, v3, 2);
      v34 = *(_DWORD *)(v3 + 12);
      v33 = *(void (**)(void))(v3 + 8);
    MinecraftScreenController::_handleSignIn(v2, (int)&v32);
    if ( v33 )
      v33();
  v28 = v46;
    v29 = (unsigned int *)(v46 + 8);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 == 1 )
      (*(void (**)(void))(*(_DWORD *)v28 + 12))();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v47);
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<NoLicenseScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


  if ( MinecraftScreenController::getInputMode((MinecraftScreenController *)v3) == 3 )
{
    sub_119C884((void **)&v23, "button.container_take_half_place_one");
    v5 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v23);
    v6 = ContainerScreenController::_releaseHeldButton((MinecraftScreenController *)v3, (const void **)&v24, v4, v5);
    v7 = (char *)(v23 - 12);
    if ( (int *)(v23 - 12) == &dword_28898C0 )
      goto LABEL_29;
    v8 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_27;
    }
LABEL_26:
    v9 = (*v8)--;
    goto LABEL_27;
  }
  if ( MinecraftScreenController::getInputMode((MinecraftScreenController *)v3) != 2 )
  {
    if ( *(_BYTE *)(v3 + 656) )
      sub_119C884(&v19, "button.container_auto_place_one");
      v6 = CraftingScreenController::_pocketCraftingOutputAutoPlace(
             v3,
             &v24,
             v4,
             (int)&v19,
             v16,
             v17,
             v18,
             v19,
             v20,
             v21,
             v22,
             v23,
             v24,
             v25,
             v26,
             v27,
             v28,
             v29);
      v7 = (char *)v19 - 12;
      if ( (int *)((char *)v19 - 12) == &dword_28898C0 )
        goto LABEL_29;
      v8 = (unsigned int *)((char *)v19 - 4);
      if ( !&pthread_create )
        goto LABEL_26;
    else
      sub_119C884((void **)&v17, "button.container_auto_place_one");
      v11 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v17);
      v6 = ContainerScreenController::_releaseHeldButton((MinecraftScreenController *)v3, (const void **)&v24, v4, v11);
      v7 = (char *)(v17 - 12);
      if ( (int *)(v17 - 12) == &dword_28898C0 )
      v8 = (unsigned int *)(v17 - 4);
  if ( *(_BYTE *)(v3 + 788) )
    ContainerScreenController::_resetHeldButton((ContainerScreenController *)v3);
    ContainerScreenController::_setPointerHeldEventsHandled((ContainerScreenController *)v3, 0);
    ProgressiveTakeButtonData::setAutoHandleAtMaxStackSize((ProgressiveTakeButtonData *)(v3 + 520), 1);
    *(_WORD *)(v3 + 788) = 0;
    EntityInteraction::setInteractText((int *)(v3 + 780), (int *)&Util::EMPTY_STRING);
    *(_DWORD *)(v3 + 784) = -1;
    v6 = 4;
    goto LABEL_29;
  sub_119C884((void **)&v21, "button.container_auto_place_one");
  v10 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v21);
  v6 = ContainerScreenController::_releaseHeldButton((MinecraftScreenController *)v3, (const void **)&v24, v4, v10);
  v7 = (char *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v21 - 4);
    if ( !&pthread_create )
      goto LABEL_26;
    __dmb();
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 - 1, v8) );
LABEL_27:
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
LABEL_29:
  v12 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v24 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  return v6;
}


void __fastcall MinecraftScreenController::_registerEventHandlers(MinecraftScreenController *this)
{
  MinecraftScreenController::_registerEventHandlers(this);
}


signed int __fastcall MinecraftScreenController::tryExit(MinecraftScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  int v2; // r0@2
  _DWORD *v4; // r0@7
  __int64 v5; // r1@7
  void *v6; // r0@9
  void *v7; // r0@10
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  unsigned int *v10; // r2@17
  signed int v11; // r1@19
  _DWORD *v12; // [sp+4h] [bp-34h]@7
  __int64 v13; // [sp+Ch] [bp-2Ch]@7
  int v14; // [sp+18h] [bp-20h]@7
  int v15; // [sp+20h] [bp-18h]@7

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 16))() != 1 )
    return 0;
  v2 = *((_DWORD *)v1 + 97);
  if ( v2 == 2 )
  {
    MinecraftScreenModel::navigateToStartScreen(*((MinecraftScreenModel **)v1 + 95));
    return 8;
  }
  if ( v2 == 1 )
    sub_DA7364((void **)&v15, (const char *)&unk_257BC67);
    sub_DA7364((void **)&v14, "gui.warning.exitGameWarning");
    v4 = operator new(4u);
    LODWORD(v5) = sub_CADB82;
    *v4 = v1;
    HIDWORD(v5) = sub_CADB70;
    v12 = v4;
    v13 = v5;
    MinecraftScreenController::_displayStandardModalPopup((int)v1, &v15, &v14, 1, (int)&v12);
    if ( (_DWORD)v13 )
      ((void (*)(void))v13)();
    v6 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9(v6);
    }
    v7 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v15 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j_j__ZdlPv_9(v7);
  if ( v2 )
  MinecraftScreenModel::leaveScreen(*((MinecraftScreenModel **)v1 + 95));
  return 8;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<XblFriendFinderScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<StartMenuScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<MainMenuScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<ManifestValidationScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


FilePickerSettings *__fastcall MinecraftScreenController::exportWorld(MinecraftScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+4h] [bp-6Ch]@1
  int v10; // [sp+Ch] [bp-64h]@1
  char v11; // [sp+10h] [bp-60h]@1

  v1 = this;
  MinecraftScreenModel::generateFilePickerSettingsForExport((MinecraftScreenModel *)&v11, *((_DWORD *)this + 95));
  sub_DA7364((void **)&v10, "FileBrowser.Rift.Export");
  sub_DA7364((void **)&v9, "FileBrowser.Rift.ExportWorld");
  MinecraftScreenController::showPickFileDialog((int)v1, (int)&v11, &v10, &v9);
  v2 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9(v2);
  }
  v3 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v10 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  return FilePickerSettings::~FilePickerSettings((FilePickerSettings *)&v11);
}


int __fastcall MinecraftScreenController::onGameEventNotification(int a1, int a2)
{
  return j_j_j__ZN20MinecraftScreenModel23onGameEventNotificationEN2ui21GameEventNotificationE(
           *(_DWORD *)(a1 + 380),
           a2);
}


void __fastcall MinecraftScreenController::_showLiveMultiplayerModal(MinecraftScreenController *this)
{
  MinecraftScreenController::_showLiveMultiplayerModal(this);
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<MinecraftScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


int __fastcall MinecraftScreenController::_getNameId(ScreenController *a1, int **a2)
{
  int **v2; // r4@1
  unsigned __int64 *v3; // r5@1

  v2 = a2;
  v3 = (unsigned __int64 *)ScreenController::_getNameRegistry(a1);
  if ( !NameRegistry::hasEntry(v3, v2) )
    NameRegistry::registerName(v3, v2);
  return j_j_j__ZN12NameRegistry9getNameIdERKSs(v3, v2);
}


int *__fastcall MinecraftScreenController::_getApprovedLinks(MinecraftScreenController *this)
{
  char v1; // r0@1
  char *v2; // r5@3
  unsigned int *v3; // r2@4
  signed int v4; // r1@6
  int v5; // r1@12
  int v6; // t1@12
  void *v7; // r0@12
  char v9; // [sp+30h] [bp-50h]@3
  int v10; // [sp+34h] [bp-4Ch]@3
  int v11; // [sp+38h] [bp-48h]@3
  int v12; // [sp+3Ch] [bp-44h]@3
  int v13; // [sp+40h] [bp-40h]@3
  int v14; // [sp+44h] [bp-3Ch]@3
  int v15; // [sp+48h] [bp-38h]@3
  int v16; // [sp+4Ch] [bp-34h]@3
  int v17; // [sp+50h] [bp-30h]@3
  int v18; // [sp+54h] [bp-2Ch]@3
  int v19; // [sp+58h] [bp-28h]@3
  char v20; // [sp+5Ch] [bp-24h]@3

  v1 = byte_27C8C44;
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27C8C44) )
  {
    sub_DA7364((void **)&v9, "http://aka.ms/minecraftfb");
    sub_DA7364((void **)&v10, "http://aka.ms/minecraftfbbeta");
    sub_DA7364((void **)&v11, "http://aka.ms/minecraftedubeta");
    sub_DA7364((void **)&v12, "http://aka.ms/minecraftedusupport");
    sub_DA7364((void **)&v13, "https://minecraft.net/attribution");
    sub_DA7364((void **)&v14, "https://aka.ms/blockxboxmessages");
    sub_DA7364((void **)&v15, "http://education.minecraft.net/eula");
    sub_DA7364((void **)&v16, "http://aka.ms/minecraftrealmsfb");
    sub_DA7364((void **)&v17, "http://aka.ms/minecraftrealmsterms");
    sub_DA7364((void **)&v18, "http://aka.ms/mcedulogs");
    sub_DA7364((void **)&v19, "http://aka.ms/meestore");
    dword_27C8C4C = 0;
    dword_27C8C50 = 0;
    dword_27C8C54 = 0;
    v2 = &v20;
    dword_27C8C4C = (int)operator new(0x2Cu);
    dword_27C8C54 = dword_27C8C4C + 44;
    dword_27C8C50 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                      (int)&v9,
                      (int)&v20,
                      dword_27C8C4C);
    do
    {
      v6 = *((_DWORD *)v2 - 1);
      v2 -= 4;
      v5 = v6;
      v7 = (void *)(v6 - 12);
      if ( (int *)(v6 - 12) != &dword_28898C0 )
      {
        v3 = (unsigned int *)(v5 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v4 = __ldrex(v3);
          while ( __strex(v4 - 1, v3) );
        }
        else
          v4 = (*v3)--;
        if ( v4 <= 0 )
          j_j_j_j_j__ZdlPv_9(v7);
      }
    }
    while ( v2 != &v9 );
    _cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector);
    j___cxa_guard_release((unsigned int *)&byte_27C8C44);
  }
  return &dword_27C8C4C;
}


unsigned int __fastcall MinecraftScreenController::_handleSignIn(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r10@1
  int v4; // r9@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  int v9; // r4@7
  unsigned int *v10; // r7@7
  unsigned int v11; // r1@9
  unsigned int v12; // r1@14
  unsigned int v13; // r0@20
  int v14; // r8@25
  unsigned int v15; // r0@27
  void (__fastcall *v16)(int *, int, signed int); // r3@30
  void (__fastcall *v17)(_DWORD, _DWORD, _DWORD); // r4@30
  void *v18; // r0@32
  int v19; // r12@32
  unsigned int *v20; // r1@33
  unsigned int v21; // r2@35
  __int64 v22; // r2@38
  __int64 v23; // kr00_8@38
  int v24; // r1@38
  unsigned int *v25; // r2@43
  unsigned int v26; // r1@45
  unsigned int result; // r0@52
  int v28; // [sp+0h] [bp-48h]@25
  int v29; // [sp+8h] [bp-40h]@31
  int v30; // [sp+Ch] [bp-3Ch]@38
  void (__fastcall *v31)(_DWORD, _DWORD, _DWORD); // [sp+10h] [bp-38h]@30
  int v32; // [sp+14h] [bp-34h]@31
  void *v33; // [sp+18h] [bp-30h]@38
  void (*v34)(void); // [sp+20h] [bp-28h]@32
  int (__fastcall *v35)(int, int, int); // [sp+24h] [bp-24h]@38

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 376);
  if ( !v4 )
    std::__throw_bad_weak_ptr();
  v5 = *(_DWORD *)(v4 + 4);
  v6 = (unsigned int *)(v4 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v5 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
        break;
      __clrex();
      v5 = v7;
    }
    v8 = __strex(v5 + 1, v6);
    v5 = v7;
  }
  while ( v8 );
  __dmb();
  v9 = *(_DWORD *)(v2 + 372);
  v10 = (unsigned int *)(v4 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v11 = __ldrex(v10);
    while ( __strex(v11 + 1, v10) );
  else
    ++*v10;
      v12 = __ldrex(v6);
    while ( __strex(v12 - 1, v6) );
    v12 = (*v6)--;
  if ( v12 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
    if ( &pthread_create )
      do
        v13 = __ldrex(v10);
      while ( __strex(v13 - 1, v10) );
    else
      v13 = (*v10)--;
    if ( v13 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  v14 = *(_DWORD *)(v2 + 380);
  v28 = v9;
      v15 = __ldrex(v10);
    while ( __strex(v15 + 1, v10) );
  v31 = 0;
  v16 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  v17 = 0;
  if ( v16 )
    v16(&v29, v3, 2);
    v32 = *(_DWORD *)(v3 + 12);
    v17 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
    v31 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
  v34 = 0;
  v18 = operator new(0x18u);
  *(_DWORD *)v18 = v28;
  *((_DWORD *)v18 + 1) = v4;
  if ( v4 )
    v20 = (unsigned int *)(v4 + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 + 1, v20) );
      v19 = *((_DWORD *)v18 + 5);
      v17 = v31;
      ++*v20;
  v22 = *(_QWORD *)&v29;
  v23 = *((_QWORD *)v18 + 1);
  v29 = *((_QWORD *)v18 + 1);
  v30 = HIDWORD(v23);
  *((_QWORD *)v18 + 1) = v22;
  v24 = v32;
  *((_DWORD *)v18 + 4) = v17;
  v32 = v19;
  *((_DWORD *)v18 + 5) = v24;
  v33 = v18;
  v34 = (void (*)(void))sub_CAE4E0;
  v35 = sub_CAE348;
  MinecraftScreenModel::signIn(v14, (int)&v33);
  if ( v34 )
    v34();
  if ( v31 )
    v31(&v29, &v29, 3);
    v25 = (unsigned int *)(v4 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      (*(void (**)(void))(*(_DWORD *)v4 + 12))();
      result = __ldrex(v10);
    while ( __strex(result - 1, v10) );
    result = (*v10)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return result;
}


ModalScreenData *__fastcall MinecraftScreenController::_displayStandardModalPopup(int a1, int *a2, int *a3, int a4, int a5)
{
  int v5; // r4@1
  int *v6; // r7@1
  int v7; // r6@1 OVERLAPPED
  void (__fastcall *v8)(int *, int, signed int); // r3@1
  int v9; // r5@2 OVERLAPPED
  _DWORD *v10; // r0@4
  int v11; // r7@4
  int v13; // [sp+0h] [bp-70h]@2
  int v14; // [sp+4h] [bp-6Ch]@4
  void (*v15)(void); // [sp+8h] [bp-68h]@1
  int v16; // [sp+Ch] [bp-64h]@2
  _DWORD *v17; // [sp+14h] [bp-5Ch]@4
  void (*v18)(void); // [sp+1Ch] [bp-54h]@4
  int (__fastcall *v19)(int *); // [sp+20h] [bp-50h]@4
  void *v20; // [sp+24h] [bp-4Ch]@1
  int v21; // [sp+28h] [bp-48h]@1
  int v22; // [sp+2Ch] [bp-44h]@1
  int v23; // [sp+30h] [bp-40h]@1
  void *v24; // [sp+34h] [bp-3Ch]@1
  int v25; // [sp+38h] [bp-38h]@1
  int v26; // [sp+3Ch] [bp-34h]@1
  int v27; // [sp+40h] [bp-30h]@1
  void *v28; // [sp+44h] [bp-2Ch]@1
  void *v29; // [sp+48h] [bp-28h]@1
  void *v30; // [sp+4Ch] [bp-24h]@1
  void *v31; // [sp+50h] [bp-20h]@1
  int v32; // [sp+54h] [bp-1Ch]@1
  char v33; // [sp+58h] [bp-18h]@1

  v5 = a1;
  v6 = a3;
  v7 = a4;
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
  EntityInteraction::setInteractText((int *)&v20, a2);
  EntityInteraction::setInteractText((int *)&v24, v6);
  v32 = v7;
  sub_DA78A4(&v29, "gui.ok", (_BYTE *)6);
  sub_DA78A4(&v30, "gui.ok", (_BYTE *)6);
  sub_DA78A4(&v31, "gui.cancel", (_BYTE *)0xA);
  v15 = 0;
  v8 = *(void (__fastcall **)(int *, int, signed int))(a5 + 8);
  if ( v8 )
  {
    v8(&v13, a5, 2);
    v7 = *(_DWORD *)(a5 + 12);
    v16 = *(_DWORD *)(a5 + 12);
    v9 = *(_DWORD *)(a5 + 8);
    v15 = *(void (**)(void))(a5 + 8);
  }
  else
    v9 = 0;
  v18 = 0;
  v10 = operator new(0x10u);
  v11 = v14;
  *v10 = v13;
  v10[1] = v11;
  *((_QWORD *)v10 + 1) = *(_QWORD *)(&v7 - 1);
  v17 = v10;
  v18 = (void (*)(void))sub_CADBD2;
  v19 = sub_CADBB8;
  MinecraftScreenController::_displayCustomModalPopup(v5, (int)&v20, (unsigned int)&v17);
  if ( v18 )
    v18();
  if ( v15 )
    v15();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v20);
}


signed int __fastcall MinecraftScreenController::_isStillValid(MinecraftScreenController *this)
{
  return 1;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<GeneralSettingsScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<MinecoinPurchaseScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


void __fastcall MinecraftScreenController::_registerBindings(MinecraftScreenController *this)
{
  MinecraftScreenController::_registerBindings(this);
}


ModalScreenData *__fastcall MinecraftScreenController::_showInvalidPermissionsModal(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  __int64 v4; // r1@1 OVERLAPPED
  void *v6; // [sp+0h] [bp-58h]@1
  __int64 v7; // [sp+8h] [bp-50h]@1
  void *v8; // [sp+10h] [bp-48h]@1
  int v9; // [sp+14h] [bp-44h]@1
  int v10; // [sp+18h] [bp-40h]@1
  int v11; // [sp+1Ch] [bp-3Ch]@1
  void *v12; // [sp+20h] [bp-38h]@1
  int v13; // [sp+24h] [bp-34h]@1
  int v14; // [sp+28h] [bp-30h]@1
  int v15; // [sp+2Ch] [bp-2Ch]@1
  void *v16; // [sp+30h] [bp-28h]@1
  void *v17; // [sp+34h] [bp-24h]@1
  void *v18; // [sp+38h] [bp-20h]@1
  void *v19; // [sp+3Ch] [bp-1Ch]@1
  int v20; // [sp+40h] [bp-18h]@1
  char v21; // [sp+44h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
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
  sub_DA78A4(&v8, "permissions.NeedPermission", (_BYTE *)0x1A);
  EntityInteraction::setInteractText((int *)&v12, v3);
  sub_DA78A4(&v18, "permissions.GoBack", (_BYTE *)0x12);
  v20 = 2;
  v6 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIFv19ModalScreenButtonIdEEEd_UlS6_E_E10_M_managerERSt9_Any_dataRKSB_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFv19ModalScreenButtonIdEZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIS1_EEd_UlS0_E_E9_M_invokeERKSt9_Any_dataS0_;
  v7 = v4;
  HIDWORD(v4) = &v6;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v8, *(__int64 *)((char *)&v4 + 4));
  if ( (_DWORD)v7 )
    ((void (*)(void))v7)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v8);
}


signed int __fastcall MinecraftScreenController::_getSafeZoneBuffersByPosition(int a1, int a2)
{
  signed int result; // r0@2

  if ( (unsigned int)(a2 - 1) <= 7 )
    result = *(_DWORD *)&asc_262C620[4 * (a2 - 1)];
  else
    result = 15;
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<AutoSaveInfoScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


int __fastcall MinecraftScreenController::_setExitBehavior(int result, int a2)
{
  *(_DWORD *)(result + 388) = a2;
  return result;
}


void __fastcall MinecraftScreenController::showPlayerProfile(int a1, int *a2, int a3, unsigned int a4, __int64 a5)
{
  int v5; // r7@1
  unsigned int v6; // r8@1
  int v7; // r11@1
  int *v8; // r6@1
  int v9; // r0@1
  __int64 v10; // kr00_8@2
  unsigned int *v11; // r0@3
  unsigned int v12; // r1@5
  _QWORD *v13; // r0@9
  __int64 v14; // r2@9 OVERLAPPED
  unsigned int *v15; // r1@10
  int (__fastcall *v16)(_DWORD *, void **, int); // r1@15
  unsigned int *v17; // r1@18
  unsigned int v18; // r0@20
  int v19; // r4@25
  void (__fastcall *v20)(int, void **); // r9@25
  unsigned int *v21; // r0@26
  unsigned int v22; // r1@28
  void *v23; // r6@31
  unsigned int *v24; // r0@32
  unsigned int v25; // r1@34
  unsigned int v26; // r1@37
  __int64 v27; // r2@37
  int v28; // r12@37
  void *v29; // r0@39
  unsigned int *v30; // r2@41
  unsigned int v31; // r1@43
  int v32; // r0@48
  unsigned int *v33; // r2@49
  unsigned int v34; // r1@51
  unsigned int *v35; // r2@57
  signed int v36; // r1@59
  int v37; // [sp+8h] [bp-A8h]@25
  int v38; // [sp+Ch] [bp-A4h]@25
  int v39; // [sp+10h] [bp-A0h]@31
  int v40; // [sp+18h] [bp-98h]@31
  unsigned int v41; // [sp+1Ch] [bp-94h]@31
  __int64 v42; // [sp+20h] [bp-90h]@31
  void *v43; // [sp+28h] [bp-88h]@37
  void (*v44)(void); // [sp+30h] [bp-80h]@31
  int (__fastcall *v45)(int); // [sp+34h] [bp-7Ch]@37
  _QWORD *v46; // [sp+38h] [bp-78h]@15
  void (*v47)(void); // [sp+40h] [bp-70h]@9
  int v48; // [sp+48h] [bp-68h]@2
  int v49; // [sp+4Ch] [bp-64h]@2
  void *v50; // [sp+50h] [bp-60h]@2
  int v51; // [sp+54h] [bp-5Ch]@2
  int v52; // [sp+58h] [bp-58h]@2
  int v53; // [sp+5Ch] [bp-54h]@2
  void *v54; // [sp+60h] [bp-50h]@2
  int v55; // [sp+64h] [bp-4Ch]@2
  int v56; // [sp+68h] [bp-48h]@2
  int v57; // [sp+6Ch] [bp-44h]@2
  void *v58; // [sp+70h] [bp-40h]@2
  void *v59; // [sp+74h] [bp-3Ch]@2
  void *v60; // [sp+78h] [bp-38h]@2
  void *v61; // [sp+7Ch] [bp-34h]@2
  int v62; // [sp+80h] [bp-30h]@2
  char v63; // [sp+84h] [bp-2Ch]@2

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = MinecraftScreenModel::getHoloInput(*(MinecraftScreenModel **)(a1 + 380));
  if ( (*(int (**)(void))(*(_DWORD *)v9 + 88))() == 1 )
  {
    v50 = &unk_28898CC;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = &unk_28898CC;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = &unk_28898CC;
    v59 = &unk_28898CC;
    v60 = &unk_28898CC;
    v61 = &unk_28898CC;
    v62 = 1;
    v63 = 0;
    sub_DA78A4(&v50, "xblLogin.LoginMessageTitle", (_BYTE *)0x1A);
    sub_DA78A4(&v54, "xblLogin.ShowGamerCardMessageRift", (_BYTE *)0x21);
    sub_DA78A4(&v60, "gui.back", (_BYTE *)8);
    v62 = 2;
    MinecraftScreenController::_getWeakPtrToThis<MinecraftScreenController>((int)&v48, v5);
    v10 = *(_QWORD *)&v48;
    if ( v49 )
    {
      v11 = (unsigned int *)(v49 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
      }
      else
        ++*v11;
    }
    v47 = 0;
    v13 = operator new(8u);
    *v13 = v10;
    if ( HIDWORD(v10) )
      v15 = (unsigned int *)(HIDWORD(v10) + 8);
        {
          LODWORD(v14) = __ldrex(v15);
          HIDWORD(v14) = __strex(v14 + 1, v15);
        }
        while ( HIDWORD(v14) );
        ++*v15;
    v16 = sub_CB4668;
    v46 = v13;
    LODWORD(v14) = sub_CB4500;
    *(_QWORD *)&v47 = *(__int64 *)((char *)&v14 - 4);
    LODWORD(v14) = &v46;
    MinecraftScreenController::_displayCustomModalPopup(v5, (int)&v50, v14);
    if ( v47 )
      v47();
      v17 = (unsigned int *)(HIDWORD(v10) + 8);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 12))(HIDWORD(v10));
    v19 = MinecraftScreenModel::getHoloInput(*(MinecraftScreenModel **)(v5 + 380));
    v20 = *(void (__fastcall **)(int, void **))(*(_DWORD *)v19 + 100);
    v37 = v48;
    v38 = v49;
      v21 = (unsigned int *)(v49 + 8);
          v22 = __ldrex(v21);
        while ( __strex(v22 + 1, v21) );
        ++*v21;
    sub_DA73B4(&v39, v8);
    v40 = v7;
    v41 = v6;
    v42 = a5;
    v44 = 0;
    v23 = operator new(0x20u);
    *(_DWORD *)v23 = v37;
    *((_DWORD *)v23 + 1) = v38;
    if ( v38 )
      v24 = (unsigned int *)(v38 + 8);
          v25 = __ldrex(v24);
        while ( __strex(v25 + 1, v24) );
        ++*v24;
    sub_DA73B4((int *)v23 + 2, &v39);
    v26 = v41;
    v27 = v42;
    v28 = (int)v23 + 16;
    *(_DWORD *)v28 = v40;
    *(_DWORD *)(v28 + 4) = v26;
    *(_QWORD *)(v28 + 8) = v27;
    v43 = v23;
    v44 = (void (*)(void))sub_CB4890;
    v45 = sub_CB470C;
    v20(v19, &v43);
    if ( v44 )
      v44();
    v29 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v39 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j_j__ZdlPv_9(v29);
      v30 = (unsigned int *)(v38 + 8);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (**)(void))(*(_DWORD *)v38 + 12))();
    v32 = v49;
      v33 = (unsigned int *)(v49 + 8);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (**)(void))(*(_DWORD *)v32 + 12))();
    ModalScreenData::~ModalScreenData((ModalScreenData *)&v50);
  }
  else
    MinecraftScreenModel::showPlayerProfile(*(_DWORD *)(v5 + 380), v8, __PAIR__(v6, v7), a5);
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<LocalWorldUploadScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


_BOOL4 __fastcall MinecraftScreenController::_resolveSafeZoneVisibility(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@3
  unsigned int v4; // r0@9
  signed int v5; // r0@13
  int v7; // [sp+4h] [bp-14h]@1
  int v8; // [sp+8h] [bp-10h]@1
  int v9; // [sp+Ch] [bp-Ch]@5

  v2 = a2;
  MinecraftScreenModel::getSplitScreenInfo((MinecraftScreenModel *)&v7, *(_DWORD *)(a1 + 380));
  if ( (unsigned int)(v8 - 3) >= 2 )
  {
    if ( v8 != 2 )
      goto LABEL_14;
    if ( v9 == 1 )
    {
      v3 = 3;
      if ( v7 )
        v3 = 4;
    }
    else
      v3 = 1;
        v3 = 2;
LABEL_12:
    v4 = v3 - 1;
    if ( v4 <= 7 )
      goto LABEL_13;
LABEL_14:
    v5 = 15;
    return (v5 & v2) != 0;
  }
  if ( (unsigned int)(v7 - 1) <= 2 )
    v3 = v7 + 5;
    goto LABEL_12;
  v4 = 4;
LABEL_13:
  v5 = *(_DWORD *)&asc_262C620[4 * v4];
  return (v5 & v2) != 0;
}


int __fastcall MinecraftScreenController::_attemptAddFriends(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r7@1
  int v4; // r9@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  void (__fastcall *v7)(int *, int, signed int); // r3@7
  void (__fastcall *v8)(_DWORD, _DWORD, _DWORD); // r6@7
  void *v9; // r0@9
  unsigned int *v10; // r1@9
  unsigned int v11; // r2@12
  __int64 v12; // r2@15
  unsigned int *v13; // r2@20
  unsigned int v14; // r1@22
  void *v15; // r0@27
  void *v16; // r0@28
  void *v17; // r0@29
  void *v18; // r0@30
  int result; // r0@31
  unsigned int *v20; // r2@32
  unsigned int v21; // r1@34
  unsigned int *v22; // r2@40
  signed int v23; // r1@42
  unsigned int *v24; // r2@44
  signed int v25; // r1@46
  unsigned int *v26; // r2@48
  signed int v27; // r1@50
  unsigned int *v28; // r2@52
  signed int v29; // r1@54
  int v30; // [sp+8h] [bp-70h]@1
  int v31; // [sp+Ch] [bp-6Ch]@1
  int v32; // [sp+10h] [bp-68h]@8
  void (__fastcall *v33)(_DWORD, _DWORD, _DWORD); // [sp+18h] [bp-60h]@7
  unsigned int *v34; // [sp+1Ch] [bp-5Ch]@8
  void *v35; // [sp+20h] [bp-58h]@15
  void (*v36)(void); // [sp+28h] [bp-50h]@9
  int (__fastcall *v37)(int); // [sp+2Ch] [bp-4Ch]@15
  int v38; // [sp+34h] [bp-44h]@1
  int v39; // [sp+3Ch] [bp-3Ch]@1
  int v40; // [sp+44h] [bp-34h]@1
  int v41; // [sp+4Ch] [bp-2Ch]@1
  int v42; // [sp+50h] [bp-28h]@1
  int v43; // [sp+54h] [bp-24h]@1

  v2 = a1;
  v3 = a2;
  MinecraftScreenController::_getWeakPtrToThis<MinecraftScreenController>((int)&v42, a1);
  v4 = *(_DWORD *)(v2 + 380);
  sub_DA7364((void **)&v41, "networkWorld.add_friend");
  sub_DA7364((void **)&v40, "xbox.addfriendsignin.line1");
  sub_DA7364((void **)&v39, "xbox.addfriendsignin.line2");
  sub_DA7364((void **)&v38, "textures/ui/lava");
  v30 = v42;
  v31 = v43;
  if ( v43 )
  {
    v5 = (unsigned int *)(v43 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v33 = 0;
  v7 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  v8 = 0;
  if ( v7 )
    v7(&v32, v3, 2);
    v34 = *(unsigned int **)(v3 + 12);
    v8 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
    v33 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
  v36 = 0;
  v9 = operator new(0x18u);
  *(_DWORD *)v9 = v30;
  v10 = (unsigned int *)v31;
  *((_DWORD *)v9 + 1) = v31;
  if ( v31 )
    v10 = (unsigned int *)(v31 + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      v10 = (unsigned int *)*((_DWORD *)v9 + 5);
      v8 = v33;
      ++*v10;
  v12 = *(_QWORD *)&v32;
  *(_QWORD *)&v32 = *((_QWORD *)v9 + 1);
  *((_QWORD *)v9 + 1) = v12;
  LODWORD(v12) = v34;
  *((_DWORD *)v9 + 4) = v8;
  v34 = v10;
  *((_DWORD *)v9 + 5) = v12;
  v35 = v9;
  v36 = (void (*)(void))sub_CAF4B4;
  v37 = sub_CAEE38;
  MinecraftScreenModel::navigateToXblOptionalSignInScreen(v4, &v41, &v40, &v39, &v38, (int)&v35);
  if ( v36 )
    v36();
  if ( v33 )
    v33(&v32, &v32, 3);
    v13 = (unsigned int *)(v31 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (**)(void))(*(_DWORD *)v31 + 12))();
  v15 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v38 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v39 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v40 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v41 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  result = v43;
    v20 = (unsigned int *)(v43 + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall MinecraftScreenController::_showNoWifiModal(MinecraftScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  __int64 v2; // r1@1
  void *v3; // r0@3
  void *v4; // r0@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  unsigned int *v7; // r2@10
  signed int v8; // r1@12
  void *v9; // [sp+4h] [bp-34h]@1
  __int64 v10; // [sp+Ch] [bp-2Ch]@1
  int v11; // [sp+18h] [bp-20h]@1
  int v12; // [sp+20h] [bp-18h]@1

  v1 = this;
  sub_DA7364((void **)&v12, (const char *)&unk_257BC67);
  sub_DA7364((void **)&v11, "disconnectionScreen.nowifi");
  v9 = operator new(1u);
  LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIFvbEEEd_UlbE_E10_M_managerERSt9_Any_dataRKSA_St18_Manager_operation;
  HIDWORD(v2) = ZNSt17_Function_handlerIFvbEZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIS0_EEd_UlbE_E9_M_invokeERKSt9_Any_datab;
  v10 = v2;
  MinecraftScreenController::_displayStandardModalPopup((int)v1, &v12, &v11, 2, (int)&v9);
  if ( (_DWORD)v10 )
    ((void (*)(void))v10)();
  v3 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v11 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v12 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9(v4);
}


void __fastcall MinecraftScreenController::_registerBindings(MinecraftScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r0@5
  _DWORD *v4; // r0@9
  _DWORD *v5; // r0@13
  _DWORD *v6; // r0@17
  _DWORD *v7; // r0@21
  __int64 v8; // r1@21
  _DWORD *v9; // r0@25
  __int64 v10; // r1@25
  __int64 v11; // r1@25
  _DWORD *v12; // r0@29
  __int64 v13; // r1@29
  __int64 v14; // r1@29
  _DWORD *v15; // r0@33
  __int64 v16; // r1@33
  __int64 v17; // r1@33
  _DWORD *v18; // r0@37
  __int64 v19; // r1@37
  __int64 v20; // r1@37
  _DWORD *v21; // r0@41
  __int64 v22; // r1@41
  __int64 v23; // r1@41
  _DWORD *v24; // r0@45
  __int64 v25; // r1@45
  __int64 v26; // r1@45
  _DWORD *v27; // r0@49
  __int64 v28; // r1@49
  __int64 v29; // r1@49
  _DWORD *v30; // r0@53
  __int64 v31; // r1@53
  __int64 v32; // r1@53
  _DWORD *v33; // r0@57
  __int64 v34; // r1@57
  __int64 v35; // r1@57
  _DWORD *v36; // r0@61
  __int64 v37; // r1@61
  __int64 v38; // r1@61
  _DWORD *v39; // r0@65
  __int64 v40; // r1@65
  __int64 v41; // r1@65
  _DWORD *v42; // r0@69
  __int64 v43; // r1@69
  __int64 v44; // r1@69
  _DWORD *v45; // r0@73
  __int64 v46; // r1@73
  __int64 v47; // r1@73
  _DWORD *v48; // r0@77
  __int64 v49; // r1@77
  __int64 v50; // r1@77
  _DWORD *v51; // r0@81
  __int64 v52; // r1@81
  __int64 v53; // r1@81
  _DWORD *v54; // r0@85
  __int64 v55; // r1@85
  __int64 v56; // r1@85
  _DWORD *v57; // r0@89
  __int64 v58; // r1@89
  __int64 v59; // r1@89
  _DWORD *v60; // r0@93
  __int64 v61; // r1@93
  __int64 v62; // r1@93
  _DWORD *v63; // r0@97
  __int64 v64; // r1@97
  __int64 v65; // r1@97
  _DWORD *v66; // r0@101
  __int64 v67; // r1@101
  __int64 v68; // r1@101
  _DWORD *v69; // r0@105
  __int64 v70; // r1@105
  __int64 v71; // r1@105
  _DWORD *v72; // r0@109
  __int64 v73; // r1@109
  __int64 v74; // r1@109
  _DWORD *v75; // r0@113
  __int64 v76; // r1@113
  __int64 v77; // r1@113
  _DWORD *v78; // r0@117
  __int64 v79; // r1@117
  __int64 v80; // r1@117
  _DWORD *v81; // r0@121
  __int64 v82; // r1@121
  __int64 v83; // r1@121
  _DWORD *v84; // r0@125
  __int64 v85; // r1@125
  __int64 v86; // r1@125
  _DWORD *v87; // r0@129
  __int64 v88; // r1@129
  __int64 v89; // r1@129
  _DWORD *v90; // r0@133
  __int64 v91; // r1@133
  __int64 v92; // r1@133
  void *v93; // [sp+0h] [bp-4D0h]@133
  __int64 v94; // [sp+8h] [bp-4C8h]@133
  _DWORD *v95; // [sp+10h] [bp-4C0h]@133
  __int64 v96; // [sp+18h] [bp-4B8h]@133
  int v97; // [sp+20h] [bp-4B0h]@133
  void *v98; // [sp+24h] [bp-4ACh]@129
  __int64 v99; // [sp+2Ch] [bp-4A4h]@129
  _DWORD *v100; // [sp+34h] [bp-49Ch]@129
  __int64 v101; // [sp+3Ch] [bp-494h]@129
  int v102; // [sp+44h] [bp-48Ch]@129
  void *v103; // [sp+48h] [bp-488h]@125
  __int64 v104; // [sp+50h] [bp-480h]@125
  _DWORD *v105; // [sp+58h] [bp-478h]@125
  __int64 v106; // [sp+60h] [bp-470h]@125
  int v107; // [sp+68h] [bp-468h]@125
  void *v108; // [sp+6Ch] [bp-464h]@121
  __int64 v109; // [sp+74h] [bp-45Ch]@121
  _DWORD *v110; // [sp+7Ch] [bp-454h]@121
  __int64 v111; // [sp+84h] [bp-44Ch]@121
  int v112; // [sp+8Ch] [bp-444h]@121
  void *v113; // [sp+90h] [bp-440h]@117
  __int64 v114; // [sp+98h] [bp-438h]@117
  _DWORD *v115; // [sp+A0h] [bp-430h]@117
  __int64 v116; // [sp+A8h] [bp-428h]@117
  int v117; // [sp+B0h] [bp-420h]@117
  void *v118; // [sp+B4h] [bp-41Ch]@113
  __int64 v119; // [sp+BCh] [bp-414h]@113
  _DWORD *v120; // [sp+C4h] [bp-40Ch]@113
  __int64 v121; // [sp+CCh] [bp-404h]@113
  int v122; // [sp+D4h] [bp-3FCh]@113
  void *v123; // [sp+D8h] [bp-3F8h]@109
  __int64 v124; // [sp+E0h] [bp-3F0h]@109
  _DWORD *v125; // [sp+E8h] [bp-3E8h]@109
  __int64 v126; // [sp+F0h] [bp-3E0h]@109
  int v127; // [sp+F8h] [bp-3D8h]@109
  void *v128; // [sp+FCh] [bp-3D4h]@105
  __int64 v129; // [sp+104h] [bp-3CCh]@105
  _DWORD *v130; // [sp+10Ch] [bp-3C4h]@105
  __int64 v131; // [sp+114h] [bp-3BCh]@105
  int v132; // [sp+11Ch] [bp-3B4h]@105
  void *v133; // [sp+120h] [bp-3B0h]@101
  __int64 v134; // [sp+128h] [bp-3A8h]@101
  _DWORD *v135; // [sp+130h] [bp-3A0h]@101
  __int64 v136; // [sp+138h] [bp-398h]@101
  int v137; // [sp+140h] [bp-390h]@101
  void *v138; // [sp+144h] [bp-38Ch]@97
  __int64 v139; // [sp+14Ch] [bp-384h]@97
  _DWORD *v140; // [sp+154h] [bp-37Ch]@97
  __int64 v141; // [sp+15Ch] [bp-374h]@97
  int v142; // [sp+164h] [bp-36Ch]@97
  void *v143; // [sp+168h] [bp-368h]@93
  __int64 v144; // [sp+170h] [bp-360h]@93
  _DWORD *v145; // [sp+178h] [bp-358h]@93
  __int64 v146; // [sp+180h] [bp-350h]@93
  int v147; // [sp+188h] [bp-348h]@93
  void *v148; // [sp+18Ch] [bp-344h]@89
  __int64 v149; // [sp+194h] [bp-33Ch]@89
  _DWORD *v150; // [sp+19Ch] [bp-334h]@89
  __int64 v151; // [sp+1A4h] [bp-32Ch]@89
  int v152; // [sp+1ACh] [bp-324h]@89
  void *v153; // [sp+1B0h] [bp-320h]@85
  __int64 v154; // [sp+1B8h] [bp-318h]@85
  _DWORD *v155; // [sp+1C0h] [bp-310h]@85
  __int64 v156; // [sp+1C8h] [bp-308h]@85
  int v157; // [sp+1D0h] [bp-300h]@85
  void *v158; // [sp+1D4h] [bp-2FCh]@81
  __int64 v159; // [sp+1DCh] [bp-2F4h]@81
  _DWORD *v160; // [sp+1E4h] [bp-2ECh]@81
  __int64 v161; // [sp+1ECh] [bp-2E4h]@81
  int v162; // [sp+1F4h] [bp-2DCh]@81
  void *v163; // [sp+1F8h] [bp-2D8h]@77
  __int64 v164; // [sp+200h] [bp-2D0h]@77
  _DWORD *v165; // [sp+208h] [bp-2C8h]@77
  __int64 v166; // [sp+210h] [bp-2C0h]@77
  int v167; // [sp+218h] [bp-2B8h]@77
  void *v168; // [sp+21Ch] [bp-2B4h]@73
  __int64 v169; // [sp+224h] [bp-2ACh]@73
  _DWORD *v170; // [sp+22Ch] [bp-2A4h]@73
  __int64 v171; // [sp+234h] [bp-29Ch]@73
  int v172; // [sp+23Ch] [bp-294h]@73
  void *v173; // [sp+240h] [bp-290h]@69
  __int64 v174; // [sp+248h] [bp-288h]@69
  _DWORD *v175; // [sp+250h] [bp-280h]@69
  __int64 v176; // [sp+258h] [bp-278h]@69
  int v177; // [sp+260h] [bp-270h]@69
  void *v178; // [sp+264h] [bp-26Ch]@65
  __int64 v179; // [sp+26Ch] [bp-264h]@65
  _DWORD *v180; // [sp+274h] [bp-25Ch]@65
  __int64 v181; // [sp+27Ch] [bp-254h]@65
  int v182; // [sp+284h] [bp-24Ch]@65
  void *v183; // [sp+288h] [bp-248h]@61
  __int64 v184; // [sp+290h] [bp-240h]@61
  _DWORD *v185; // [sp+298h] [bp-238h]@61
  __int64 v186; // [sp+2A0h] [bp-230h]@61
  int v187; // [sp+2A8h] [bp-228h]@61
  void *v188; // [sp+2ACh] [bp-224h]@57
  __int64 v189; // [sp+2B4h] [bp-21Ch]@57
  _DWORD *v190; // [sp+2BCh] [bp-214h]@57
  __int64 v191; // [sp+2C4h] [bp-20Ch]@57
  int v192; // [sp+2CCh] [bp-204h]@57
  void *v193; // [sp+2D0h] [bp-200h]@53
  __int64 v194; // [sp+2D8h] [bp-1F8h]@53
  _DWORD *v195; // [sp+2E0h] [bp-1F0h]@53
  __int64 v196; // [sp+2E8h] [bp-1E8h]@53
  int v197; // [sp+2F0h] [bp-1E0h]@53
  void *v198; // [sp+2F4h] [bp-1DCh]@49
  __int64 v199; // [sp+2FCh] [bp-1D4h]@49
  _DWORD *v200; // [sp+304h] [bp-1CCh]@49
  __int64 v201; // [sp+30Ch] [bp-1C4h]@49
  int v202; // [sp+314h] [bp-1BCh]@49
  void *v203; // [sp+318h] [bp-1B8h]@45
  __int64 v204; // [sp+320h] [bp-1B0h]@45
  _DWORD *v205; // [sp+328h] [bp-1A8h]@45
  __int64 v206; // [sp+330h] [bp-1A0h]@45
  int v207; // [sp+338h] [bp-198h]@45
  void *v208; // [sp+33Ch] [bp-194h]@41
  __int64 v209; // [sp+344h] [bp-18Ch]@41
  _DWORD *v210; // [sp+34Ch] [bp-184h]@41
  __int64 v211; // [sp+354h] [bp-17Ch]@41
  int v212; // [sp+35Ch] [bp-174h]@41
  void *v213; // [sp+360h] [bp-170h]@37
  __int64 v214; // [sp+368h] [bp-168h]@37
  _DWORD *v215; // [sp+370h] [bp-160h]@37
  __int64 v216; // [sp+378h] [bp-158h]@37
  int v217; // [sp+380h] [bp-150h]@37
  void *v218; // [sp+384h] [bp-14Ch]@33
  __int64 v219; // [sp+38Ch] [bp-144h]@33
  _DWORD *v220; // [sp+394h] [bp-13Ch]@33
  __int64 v221; // [sp+39Ch] [bp-134h]@33
  int v222; // [sp+3A4h] [bp-12Ch]@33
  void *v223; // [sp+3A8h] [bp-128h]@29
  __int64 v224; // [sp+3B0h] [bp-120h]@29
  _DWORD *v225; // [sp+3B8h] [bp-118h]@29
  __int64 v226; // [sp+3C0h] [bp-110h]@29
  int v227; // [sp+3C8h] [bp-108h]@29
  void *v228; // [sp+3CCh] [bp-104h]@25
  __int64 v229; // [sp+3D4h] [bp-FCh]@25
  _DWORD *v230; // [sp+3DCh] [bp-F4h]@25
  __int64 v231; // [sp+3E4h] [bp-ECh]@25
  int v232; // [sp+3ECh] [bp-E4h]@25
  void *v233; // [sp+3F0h] [bp-E0h]@21
  __int64 v234; // [sp+3F8h] [bp-D8h]@21
  _DWORD *v235; // [sp+400h] [bp-D0h]@21
  void (*v236)(void); // [sp+408h] [bp-C8h]@21
  int (__fastcall *v237)(int); // [sp+40Ch] [bp-C4h]@21
  int v238; // [sp+410h] [bp-C0h]@21
  void *v239; // [sp+414h] [bp-BCh]@17
  void (*v240)(void); // [sp+41Ch] [bp-B4h]@17
  signed int (*v241)(); // [sp+420h] [bp-B0h]@17
  _DWORD *v242; // [sp+424h] [bp-ACh]@17
  void (*v243)(void); // [sp+42Ch] [bp-A4h]@17
  int (__fastcall *v244)(int, int); // [sp+430h] [bp-A0h]@17
  int v245; // [sp+434h] [bp-9Ch]@17
  void *v246; // [sp+438h] [bp-98h]@13
  void (*v247)(void); // [sp+440h] [bp-90h]@13
  signed int (*v248)(); // [sp+444h] [bp-8Ch]@13
  _DWORD *v249; // [sp+448h] [bp-88h]@13
  void (*v250)(void); // [sp+450h] [bp-80h]@13
  int (__fastcall *v251)(int, int); // [sp+454h] [bp-7Ch]@13
  int v252; // [sp+458h] [bp-78h]@13
  void *v253; // [sp+45Ch] [bp-74h]@9
  void (*v254)(void); // [sp+464h] [bp-6Ch]@9
  signed int (*v255)(); // [sp+468h] [bp-68h]@9
  _DWORD *v256; // [sp+46Ch] [bp-64h]@9
  void (*v257)(void); // [sp+474h] [bp-5Ch]@9
  int (__fastcall *v258)(int, int); // [sp+478h] [bp-58h]@9
  int v259; // [sp+47Ch] [bp-54h]@9
  void *v260; // [sp+480h] [bp-50h]@5
  void (*v261)(void); // [sp+488h] [bp-48h]@5
  signed int (*v262)(); // [sp+48Ch] [bp-44h]@5
  _DWORD *v263; // [sp+490h] [bp-40h]@5
  void (*v264)(void); // [sp+498h] [bp-38h]@5
  int (__fastcall *v265)(int, int); // [sp+49Ch] [bp-34h]@5
  int v266; // [sp+4A0h] [bp-30h]@5
  void *v267; // [sp+4A4h] [bp-2Ch]@1
  void (*v268)(void); // [sp+4ACh] [bp-24h]@1
  signed int (*v269)(); // [sp+4B0h] [bp-20h]@1
  _DWORD *v270; // [sp+4B4h] [bp-1Ch]@1
  void (*v271)(void); // [sp+4BCh] [bp-14h]@1
  int (__fastcall *v272)(int, int); // [sp+4C0h] [bp-10h]@1
  int v273; // [sp+4C4h] [bp-Ch]@1

  v1 = this;
  v273 = -172010765;
  v2 = operator new(4u);
  *v2 = v1;
  v270 = v2;
  v272 = sub_CB58E2;
  v271 = (void (*)(void))sub_CB58F0;
  v267 = operator new(1u);
  v269 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v268 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v273, (int)&v270, (int)&v267);
  if ( v268 )
    v268();
  if ( v271 )
    v271();
  v266 = -341765246;
  v3 = operator new(4u);
  *v3 = v1;
  v263 = v3;
  v265 = sub_CB5926;
  v264 = (void (*)(void))sub_CB5934;
  v260 = operator new(1u);
  v262 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v261 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v266, (int)&v263, (int)&v260);
  if ( v261 )
    v261();
  if ( v264 )
    v264();
  v259 = 1797076816;
  v4 = operator new(4u);
  *v4 = v1;
  v256 = v4;
  v258 = sub_CB596A;
  v257 = (void (*)(void))sub_CB5978;
  v253 = operator new(1u);
  v255 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v254 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v259, (int)&v256, (int)&v253);
  if ( v254 )
    v254();
  if ( v257 )
    v257();
  v252 = -283964133;
  v5 = operator new(4u);
  *v5 = v1;
  v249 = v5;
  v251 = sub_CB59AE;
  v250 = (void (*)(void))sub_CB59BC;
  v246 = operator new(1u);
  v248 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v247 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v252, (int)&v249, (int)&v246);
  if ( v247 )
    v247();
  if ( v250 )
    v250();
  StringHash::StringHash<char [29]>(&v245, (int)"#button_keyboard_description");
  v6 = operator new(4u);
  *v6 = v1;
  v242 = v6;
  v244 = sub_CB59F2;
  v243 = (void (*)(void))sub_CB5A02;
  v239 = operator new(1u);
  v241 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v240 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v245, (int)&v242, (int)&v239);
  if ( v240 )
    v240();
  if ( v243 )
    v243();
  StringHash::StringHash<char [24]>(&v238, (int)"#gamepad_helper_visible");
  v7 = operator new(4u);
  *v7 = v1;
  v235 = v7;
  v237 = sub_CB5A38;
  v236 = (void (*)(void))sub_CB5A42;
  v233 = operator new(1u);
  LODWORD(v8) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v8) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v234 = v8;
  ScreenController::bindBool((int)v1, &v238, (int)&v235, (int)&v233);
  if ( (_DWORD)v234 )
    ((void (*)(void))v234)();
  if ( v236 )
    v236();
  StringHash::StringHash<char [25]>(&v232, (int)"#keyboard_helper_visible");
  v9 = operator new(4u);
  LODWORD(v10) = sub_CB5A82;
  *v9 = v1;
  HIDWORD(v10) = sub_CB5A78;
  v230 = v9;
  v231 = v10;
  v228 = operator new(1u);
  LODWORD(v11) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v11) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v229 = v11;
  ScreenController::bindBool((int)v1, &v232, (int)&v230, (int)&v228);
  if ( (_DWORD)v229 )
    ((void (*)(void))v229)();
  if ( (_DWORD)v231 )
    ((void (*)(void))v231)();
  StringHash::StringHash<char [25]>(&v227, (int)"#gesture_control_enabled");
  v12 = operator new(4u);
  LODWORD(v13) = sub_CB5AC4;
  *v12 = v1;
  HIDWORD(v13) = sub_CB5AB8;
  v225 = v12;
  v226 = v13;
  v223 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v224 = v14;
  ScreenController::bindBool((int)v1, &v227, (int)&v225, (int)&v223);
  if ( (_DWORD)v224 )
    ((void (*)(void))v224)();
  if ( (_DWORD)v226 )
    ((void (*)(void))v226)();
  v222 = -209040610;
  v15 = operator new(4u);
  LODWORD(v16) = sub_CB5B0C;
  *v15 = v1;
  HIDWORD(v16) = sub_CB5AFA;
  v220 = v15;
  v221 = v16;
  v218 = operator new(1u);
  LODWORD(v17) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v17) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v219 = v17;
  ScreenController::bindBool((int)v1, &v222, (int)&v220, (int)&v218);
  if ( (_DWORD)v219 )
    ((void (*)(void))v219)();
  if ( (_DWORD)v221 )
    ((void (*)(void))v221)();
  v217 = -1563919263;
  v18 = operator new(4u);
  LODWORD(v19) = sub_CB5B54;
  *v18 = v1;
  HIDWORD(v19) = sub_CB5B42;
  v215 = v18;
  v216 = v19;
  v213 = operator new(1u);
  LODWORD(v20) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v20) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v214 = v20;
  ScreenController::bindBool((int)v1, &v217, (int)&v215, (int)&v213);
  if ( (_DWORD)v214 )
    ((void (*)(void))v214)();
  if ( (_DWORD)v216 )
    ((void (*)(void))v216)();
  StringHash::StringHash<char [27]>(&v212, (int)"#controller_face_down_icon");
  v21 = operator new(4u);
  LODWORD(v22) = sub_CB5B9C;
  *v21 = v1;
  HIDWORD(v22) = sub_CB5B8A;
  v210 = v21;
  v211 = v22;
  v208 = operator new(1u);
  LODWORD(v23) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v23) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v209 = v23;
  ScreenController::bindString((int)v1, &v212, (int)&v210, (int)&v208);
  if ( (_DWORD)v209 )
    ((void (*)(void))v209)();
  if ( (_DWORD)v211 )
    ((void (*)(void))v211)();
  StringHash::StringHash<char [28]>(&v207, (int)"#controller_face_right_icon");
  v24 = operator new(4u);
  LODWORD(v25) = sub_CB5BE4;
  *v24 = v1;
  HIDWORD(v25) = sub_CB5BD2;
  v205 = v24;
  v206 = v25;
  v203 = operator new(1u);
  LODWORD(v26) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v26) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v204 = v26;
  ScreenController::bindString((int)v1, &v207, (int)&v205, (int)&v203);
  if ( (_DWORD)v204 )
    ((void (*)(void))v204)();
  if ( (_DWORD)v206 )
    ((void (*)(void))v206)();
  StringHash::StringHash<char [27]>(&v202, (int)"#controller_face_left_icon");
  v27 = operator new(4u);
  LODWORD(v28) = sub_CB5C2C;
  *v27 = v1;
  HIDWORD(v28) = sub_CB5C1A;
  v200 = v27;
  v201 = v28;
  v198 = operator new(1u);
  LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v29) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v199 = v29;
  ScreenController::bindString((int)v1, &v202, (int)&v200, (int)&v198);
  if ( (_DWORD)v199 )
    ((void (*)(void))v199)();
  if ( (_DWORD)v201 )
    ((void (*)(void))v201)();
  StringHash::StringHash<char [25]>(&v197, (int)"#controller_face_up_icon");
  v30 = operator new(4u);
  LODWORD(v31) = sub_CB5C74;
  *v30 = v1;
  HIDWORD(v31) = sub_CB5C62;
  v195 = v30;
  v196 = v31;
  v193 = operator new(1u);
  LODWORD(v32) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v32) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v194 = v32;
  ScreenController::bindString((int)v1, &v197, (int)&v195, (int)&v193);
  if ( (_DWORD)v194 )
    ((void (*)(void))v194)();
  if ( (_DWORD)v196 )
    ((void (*)(void))v196)();
  StringHash::StringHash<char [27]>(&v192, (int)"#controller_dpad_down_icon");
  v33 = operator new(4u);
  LODWORD(v34) = sub_CB5CBC;
  *v33 = v1;
  HIDWORD(v34) = sub_CB5CAA;
  v190 = v33;
  v191 = v34;
  v188 = operator new(1u);
  LODWORD(v35) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v35) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v189 = v35;
  ScreenController::bindString((int)v1, &v192, (int)&v190, (int)&v188);
  if ( (_DWORD)v189 )
    ((void (*)(void))v189)();
  if ( (_DWORD)v191 )
    ((void (*)(void))v191)();
  StringHash::StringHash<char [28]>(&v187, (int)"#controller_dpad_right_icon");
  v36 = operator new(4u);
  LODWORD(v37) = sub_CB5D04;
  *v36 = v1;
  HIDWORD(v37) = sub_CB5CF2;
  v185 = v36;
  v186 = v37;
  v183 = operator new(1u);
  LODWORD(v38) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v38) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v184 = v38;
  ScreenController::bindString((int)v1, &v187, (int)&v185, (int)&v183);
  if ( (_DWORD)v184 )
    ((void (*)(void))v184)();
  if ( (_DWORD)v186 )
    ((void (*)(void))v186)();
  StringHash::StringHash<char [27]>(&v182, (int)"#controller_dpad_left_icon");
  v39 = operator new(4u);
  LODWORD(v40) = sub_CB5D4C;
  *v39 = v1;
  HIDWORD(v40) = sub_CB5D3A;
  v180 = v39;
  v181 = v40;
  v178 = operator new(1u);
  LODWORD(v41) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v41) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v179 = v41;
  ScreenController::bindString((int)v1, &v182, (int)&v180, (int)&v178);
  if ( (_DWORD)v179 )
    ((void (*)(void))v179)();
  if ( (_DWORD)v181 )
    ((void (*)(void))v181)();
  StringHash::StringHash<char [25]>(&v177, (int)"#controller_dpad_up_icon");
  v42 = operator new(4u);
  LODWORD(v43) = sub_CB5D94;
  *v42 = v1;
  HIDWORD(v43) = sub_CB5D82;
  v175 = v42;
  v176 = v43;
  v173 = operator new(1u);
  LODWORD(v44) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v44) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v174 = v44;
  ScreenController::bindString((int)v1, &v177, (int)&v175, (int)&v173);
  if ( (_DWORD)v174 )
    ((void (*)(void))v174)();
  if ( (_DWORD)v176 )
    ((void (*)(void))v176)();
  StringHash::StringHash<char [29]>(&v172, (int)"#controller_left_bumper_icon");
  v45 = operator new(4u);
  LODWORD(v46) = sub_CB5DDC;
  *v45 = v1;
  HIDWORD(v46) = sub_CB5DCA;
  v170 = v45;
  v171 = v46;
  v168 = operator new(1u);
  LODWORD(v47) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v47) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v169 = v47;
  ScreenController::bindString((int)v1, &v172, (int)&v170, (int)&v168);
  if ( (_DWORD)v169 )
    ((void (*)(void))v169)();
  if ( (_DWORD)v171 )
    ((void (*)(void))v171)();
  StringHash::StringHash<char [30]>(&v167, (int)"#controller_right_bumper_icon");
  v48 = operator new(4u);
  LODWORD(v49) = sub_CB5E24;
  *v48 = v1;
  HIDWORD(v49) = sub_CB5E12;
  v165 = v48;
  v166 = v49;
  v163 = operator new(1u);
  LODWORD(v50) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v50) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v164 = v50;
  ScreenController::bindString((int)v1, &v167, (int)&v165, (int)&v163);
  if ( (_DWORD)v164 )
    ((void (*)(void))v164)();
  if ( (_DWORD)v166 )
    ((void (*)(void))v166)();
  StringHash::StringHash<char [28]>(&v162, (int)"#controller_left_stick_icon");
  v51 = operator new(4u);
  LODWORD(v52) = sub_CB5E6C;
  *v51 = v1;
  HIDWORD(v52) = sub_CB5E5A;
  v160 = v51;
  v161 = v52;
  v158 = operator new(1u);
  LODWORD(v53) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v53) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v159 = v53;
  ScreenController::bindString((int)v1, &v162, (int)&v160, (int)&v158);
  if ( (_DWORD)v159 )
    ((void (*)(void))v159)();
  if ( (_DWORD)v161 )
    ((void (*)(void))v161)();
  StringHash::StringHash<char [29]>(&v157, (int)"#controller_right_stick_icon");
  v54 = operator new(4u);
  LODWORD(v55) = sub_CB5EB4;
  *v54 = v1;
  HIDWORD(v55) = sub_CB5EA2;
  v155 = v54;
  v156 = v55;
  v153 = operator new(1u);
  LODWORD(v56) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v56) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v154 = v56;
  ScreenController::bindString((int)v1, &v157, (int)&v155, (int)&v153);
  if ( (_DWORD)v154 )
    ((void (*)(void))v154)();
  if ( (_DWORD)v156 )
    ((void (*)(void))v156)();
  StringHash::StringHash<char [23]>(&v152, (int)"#controller_start_icon");
  v57 = operator new(4u);
  LODWORD(v58) = sub_CB5EFC;
  *v57 = v1;
  HIDWORD(v58) = sub_CB5EEA;
  v150 = v57;
  v151 = v58;
  v148 = operator new(1u);
  LODWORD(v59) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v59) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v149 = v59;
  ScreenController::bindString((int)v1, &v152, (int)&v150, (int)&v148);
  if ( (_DWORD)v149 )
    ((void (*)(void))v149)();
  if ( (_DWORD)v151 )
    ((void (*)(void))v151)();
  StringHash::StringHash<char [24]>(&v147, (int)"#controller_select_icon");
  v60 = operator new(4u);
  LODWORD(v61) = sub_CB5F44;
  *v60 = v1;
  HIDWORD(v61) = sub_CB5F32;
  v145 = v60;
  v146 = v61;
  v143 = operator new(1u);
  LODWORD(v62) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v62) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v144 = v62;
  ScreenController::bindString((int)v1, &v147, (int)&v145, (int)&v143);
  if ( (_DWORD)v144 )
    ((void (*)(void))v144)();
  if ( (_DWORD)v146 )
    ((void (*)(void))v146)();
  StringHash::StringHash<char [26]>(&v142, (int)"#controller_right_trigger");
  v63 = operator new(4u);
  LODWORD(v64) = sub_CB5F8C;
  *v63 = v1;
  HIDWORD(v64) = sub_CB5F7A;
  v140 = v63;
  v141 = v64;
  v138 = operator new(1u);
  LODWORD(v65) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v65) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v139 = v65;
  ScreenController::bindString((int)v1, &v142, (int)&v140, (int)&v138);
  if ( (_DWORD)v139 )
    ((void (*)(void))v139)();
  if ( (_DWORD)v141 )
    ((void (*)(void))v141)();
  StringHash::StringHash<char [25]>(&v137, (int)"#controller_left_trigger");
  v66 = operator new(4u);
  LODWORD(v67) = sub_CB5FD4;
  *v66 = v1;
  HIDWORD(v67) = sub_CB5FC2;
  v135 = v66;
  v136 = v67;
  v133 = operator new(1u);
  LODWORD(v68) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v68) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v134 = v68;
  ScreenController::bindString((int)v1, &v137, (int)&v135, (int)&v133);
  if ( (_DWORD)v134 )
    ((void (*)(void))v134)();
  if ( (_DWORD)v136 )
    ((void (*)(void))v136)();
  v132 = -1139889615;
  v69 = operator new(4u);
  LODWORD(v70) = sub_CB606C;
  *v69 = v1;
  HIDWORD(v70) = sub_CB600A;
  v130 = v69;
  v131 = v70;
  v128 = operator new(1u);
  LODWORD(v71) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v71) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v129 = v71;
  ScreenController::bindBool((int)v1, &v132, (int)&v130, (int)&v128);
  if ( (_DWORD)v129 )
    ((void (*)(void))v129)();
  if ( (_DWORD)v131 )
    ((void (*)(void))v131)();
  v127 = -1716842004;
  v72 = operator new(4u);
  LODWORD(v73) = sub_CB6104;
  *v72 = v1;
  HIDWORD(v73) = sub_CB60A2;
  v125 = v72;
  v126 = v73;
  v123 = operator new(1u);
  LODWORD(v74) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v74) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v124 = v74;
  ScreenController::bindBool((int)v1, &v127, (int)&v125, (int)&v123);
  if ( (_DWORD)v124 )
    ((void (*)(void))v124)();
  if ( (_DWORD)v126 )
    ((void (*)(void))v126)();
  StringHash::StringHash<char [23]>(&v122, (int)"#safezone_outer_bottom");
  v75 = operator new(4u);
  LODWORD(v76) = sub_CB619C;
  *v75 = v1;
  HIDWORD(v76) = sub_CB613A;
  v120 = v75;
  v121 = v76;
  v118 = operator new(1u);
  LODWORD(v77) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v77) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v119 = v77;
  ScreenController::bindBool((int)v1, &v122, (int)&v120, (int)&v118);
  if ( (_DWORD)v119 )
    ((void (*)(void))v119)();
  if ( (_DWORD)v121 )
    ((void (*)(void))v121)();
  v117 = 714155619;
  v78 = operator new(4u);
  LODWORD(v79) = sub_CB6234;
  *v78 = v1;
  HIDWORD(v79) = sub_CB61D2;
  v115 = v78;
  v116 = v79;
  v113 = operator new(1u);
  LODWORD(v80) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v80) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v114 = v80;
  ScreenController::bindBool((int)v1, &v117, (int)&v115, (int)&v113);
  if ( (_DWORD)v114 )
    ((void (*)(void))v114)();
  if ( (_DWORD)v116 )
    ((void (*)(void))v116)();
  v112 = -1510180862;
  v81 = operator new(4u);
  LODWORD(v82) = sub_CB62CC;
  *v81 = v1;
  HIDWORD(v82) = sub_CB626A;
  v110 = v81;
  v111 = v82;
  v108 = operator new(1u);
  LODWORD(v83) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v83) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v109 = v83;
  ScreenController::bindBool((int)v1, &v112, (int)&v110, (int)&v108);
  if ( (_DWORD)v109 )
    ((void (*)(void))v109)();
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  v107 = 995760671;
  v84 = operator new(4u);
  LODWORD(v85) = sub_CB6364;
  *v84 = v1;
  HIDWORD(v85) = sub_CB6302;
  v105 = v84;
  v106 = v85;
  v103 = operator new(1u);
  LODWORD(v86) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v86) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v104 = v86;
  ScreenController::bindBool((int)v1, &v107, (int)&v105, (int)&v103);
  if ( (_DWORD)v104 )
    ((void (*)(void))v104)();
  if ( (_DWORD)v106 )
    ((void (*)(void))v106)();
  StringHash::StringHash<char [23]>(&v102, (int)"#safezone_inner_bottom");
  v87 = operator new(4u);
  LODWORD(v88) = sub_CB63FC;
  *v87 = v1;
  HIDWORD(v88) = sub_CB639A;
  v100 = v87;
  v101 = v88;
  v98 = operator new(1u);
  LODWORD(v89) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v89) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v99 = v89;
  ScreenController::bindBool((int)v1, &v102, (int)&v100, (int)&v98);
  if ( (_DWORD)v99 )
    ((void (*)(void))v99)();
  if ( (_DWORD)v101 )
    ((void (*)(void))v101)();
  v97 = 1738638194;
  v90 = operator new(4u);
  LODWORD(v91) = sub_CB6494;
  *v90 = v1;
  HIDWORD(v91) = sub_CB6432;
  v95 = v90;
  v96 = v91;
  v93 = operator new(1u);
  LODWORD(v92) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v92) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v94 = v92;
  ScreenController::bindBool((int)v1, &v97, (int)&v95, (int)&v93);
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<RealmsPendingInvitationsScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


signed int __fastcall MinecraftScreenController::_onModalEventReceived(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void *v4; // r0@3
  void *v5; // r0@4
  void (__fastcall *v6)(int, int, signed int); // r3@6
  signed int result; // r0@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  int v12; // [sp+4h] [bp-2Ch]@2
  int v13; // [sp+Ch] [bp-24h]@2

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 28) )
  {
    sub_DA7364((void **)&v13, "popup_dialog_factory");
    sub_DA7364((void **)&v12, "popup_dialog");
    if ( !*(_DWORD *)(v2 + 28) )
      sub_DA7654();
    (*(void (__fastcall **)(int, int *, int *))(v2 + 32))(v2 + 20, &v13, &v12);
    v4 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v12 - 4);
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
        j_j_j_j_j__ZdlPv_9(v4);
    }
    v5 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v13 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j_j__ZdlPv_9(v5);
  }
  if ( *(_DWORD *)(v2 + 412) )
    (*(void (__fastcall **)(int, int))(v2 + 416))(v2 + 404, v3);
    v6 = *(void (__fastcall **)(int, int, signed int))(v2 + 412);
    if ( v6 )
      v6(v2 + 404, v2 + 404, 3);
      *(_DWORD *)(v2 + 412) = 0;
      *(_DWORD *)(v2 + 416) = 0;
    result = 1;
  else
    result = 0;
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<StoreItemListScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


  if ( MinecraftScreenController::getInputMode(**a1) != 3 )
{
  v5 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*((MinecraftScreenModel **)v3 + 106));
  v6 = (ContainerItemStack *)ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v16, v5);
  v7 = ContainerItemStack::isEmpty(v6);
  if ( ptr )
    operator delete(ptr);
  if ( v18 )
    operator delete(v18);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  v17 = 0;
  if ( v7 )
  {
LABEL_29:
    ContainerScreenController::_getCollectionName((ContainerScreenController *)&v15, v4, v2);
    v8 = (Json::Value *)(v2 + 8);
    if ( Json::Value::isNull(v8) )
    {
      v9 = -1;
    }
    else if ( Json::Value::isObject(v8) == 1 )
      v10 = (Json::Value *)Json::Value::operator[]((int)v8, "#collection_index");
      if ( Json::Value::isInt(v10) || Json::Value::isUInt(v10) == 1 )
        v9 = Json::Value::asInt(v10, 0);
      else
        v9 = -1;
    else
    ContainerScreenController::_handleButtonIsHeld((int)v3, (int **)&v15, v9, 0, 2);
    v11 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
  }
  else
    ContainerScreenController::_handleDropSelectedItem(v3, 1);
  return 2;
}


ModalScreenData *__fastcall MinecraftScreenController::_showServerCapacityFullModal(MinecraftScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
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
  sub_DA78A4(&v6, "disconnectionScreen.serverFull.title", (_BYTE *)0x24);
  sub_DA78A4(&v10, "disconnectionScreen.serverFull", (_BYTE *)0x1E);
  sub_DA78A4(&v16, "gui.goBack", (_BYTE *)0xA);
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


int __fastcall MinecraftScreenController::_attemptShowUserProfile(int a1, int *a2, int a3)
{
  int v3; // r10@1
  int *v4; // r7@1
  int v5; // r4@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  void (__fastcall *v8)(int *, int, signed int); // r3@7
  unsigned int *v9; // r0@10
  unsigned int v10; // r1@12
  _DWORD *v11; // r0@17
  int v12; // r4@17
  int v13; // r0@17
  unsigned int *v14; // r0@18
  unsigned int v15; // r1@20
  __int64 v16; // r0@23
  void *v17; // r0@27
  int v18; // r0@28
  unsigned int *v19; // r2@29
  unsigned int v20; // r1@31
  void *v21; // r0@36
  void *v22; // r0@37
  void *v23; // r0@38
  void *v24; // r0@39
  void *v25; // r0@42
  int v26; // r0@43
  unsigned int *v27; // r2@44
  unsigned int v28; // r1@46
  int result; // r0@51
  unsigned int *v30; // r2@52
  unsigned int v31; // r1@54
  unsigned int *v32; // r2@60
  signed int v33; // r1@62
  unsigned int *v34; // r2@64
  signed int v35; // r1@66
  unsigned int *v36; // r2@68
  signed int v37; // r1@70
  unsigned int *v38; // r2@72
  signed int v39; // r1@74
  unsigned int *v40; // r2@76
  signed int v41; // r1@78
  unsigned int *v42; // r2@80
  signed int v43; // r1@82
  int v44; // [sp+Ch] [bp-94h]@9
  int v45; // [sp+10h] [bp-90h]@9
  int v46; // [sp+14h] [bp-8Ch]@15
  int v47; // [sp+18h] [bp-88h]@16
  void (__fastcall *v48)(int *, int *, signed int); // [sp+20h] [bp-80h]@15
  int v49; // [sp+24h] [bp-7Ch]@16
  int v50; // [sp+28h] [bp-78h]@23
  void (*v51)(void); // [sp+30h] [bp-70h]@17
  int (__fastcall *v52)(int); // [sp+34h] [bp-6Ch]@23
  int v53; // [sp+3Ch] [bp-64h]@9
  int v54; // [sp+44h] [bp-5Ch]@9
  int v55; // [sp+4Ch] [bp-54h]@9
  int v56; // [sp+54h] [bp-4Ch]@9
  int v57; // [sp+58h] [bp-48h]@1
  int v58; // [sp+5Ch] [bp-44h]@1
  int v59; // [sp+60h] [bp-40h]@7
  int v60; // [sp+64h] [bp-3Ch]@8
  void (__fastcall *v61)(int *, int *, signed int); // [sp+6Ch] [bp-34h]@7
  int v62; // [sp+70h] [bp-30h]@8
  int v63; // [sp+74h] [bp-2Ch]@1
  int v64; // [sp+78h] [bp-28h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  MinecraftScreenController::_getWeakPtrToThis<MinecraftScreenController>((int)&v63, a1);
  v57 = v63;
  v58 = v64;
  if ( v64 )
  {
    v6 = (unsigned int *)(v64 + 8);
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
  sub_DA73B4(&v59, v4);
  v61 = 0;
  v8 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v8 )
    v8(&v60, v5, 2);
    v62 = *(_DWORD *)(v5 + 12);
    v61 = *(void (__fastcall **)(int *, int *, signed int))(v5 + 8);
  sub_DA7364((void **)&v56, "networkWorld.add_friend");
  sub_DA7364((void **)&v55, "xbox.addfriendsignin.line1");
  sub_DA7364((void **)&v54, "xbox.addfriendsignin.line2");
  sub_DA7364((void **)&v53, "textures/ui/lava");
  v44 = v57;
  v45 = v58;
  if ( v58 )
    v9 = (unsigned int *)(v58 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  sub_DA73B4(&v46, &v59);
  v48 = 0;
  if ( v61 )
    v61(&v47, &v60, 2);
    v49 = v62;
    v48 = v61;
  v51 = 0;
  v11 = operator new(0x1Cu);
  v12 = (int)v11;
  *v11 = v44;
  v13 = v45;
  *(_DWORD *)(v12 + 4) = v45;
  if ( v13 )
    v14 = (unsigned int *)(v13 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  sub_DA73B4((int *)(v12 + 8), &v46);
  v16 = *(_QWORD *)&v47;
  *(_QWORD *)&v47 = *(_QWORD *)(v12 + 12);
  *(_QWORD *)(v12 + 12) = v16;
  LODWORD(v16) = v48;
  *(_DWORD *)(v12 + 20) = v16;
  HIDWORD(v16) = v49;
  v49 = *(_DWORD *)(v12 + 24);
  *(_DWORD *)(v12 + 24) = HIDWORD(v16);
  v50 = v12;
  v51 = (void (*)(void))sub_CB01C8;
  v52 = sub_CAF8E4;
  MinecraftScreenController::_attemptXblGatedScreen(v3, &v56, &v55, &v54, &v53, (int)&v50);
  if ( v51 )
    v51();
  if ( v48 )
    v48(&v47, &v47, 3);
  v17 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v46 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  v18 = v45;
  if ( v45 )
    v19 = (unsigned int *)(v45 + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      (*(void (**)(void))(*(_DWORD *)v18 + 12))();
  v21 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v53 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v54 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v55 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v56 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
    v61(&v60, &v60, 3);
  v25 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v59 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
  v26 = v58;
    v27 = (unsigned int *)(v58 + 8);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 == 1 )
      (*(void (**)(void))(*(_DWORD *)v26 + 12))();
  result = v64;
    v30 = (unsigned int *)(v64 + 8);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall MinecraftScreenController::_getSplitScreenPositionByInfo(int a1, int a2)
{
  int v2; // r0@1
  int result; // r0@3
  int v4; // r2@8

  v2 = *(_DWORD *)(a2 + 4);
  if ( (unsigned int)(v2 - 3) >= 2 )
  {
    if ( v2 == 2 )
    {
      v4 = *(_DWORD *)a2;
      if ( *(_DWORD *)(a2 + 8) == 1 )
      {
        result = 3;
        if ( v4 )
          result = 4;
      }
      else
        result = 1;
          result = 2;
    }
    else
      result = 0;
  }
  else if ( (unsigned int)(*(_DWORD *)a2 - 1) <= 2 )
    result = *(_DWORD *)a2 + 5;
  else
    result = 5;
  return result;
}


FilePickerSettings *__fastcall MinecraftScreenController::exportScreenshotsToZipFile(int a1, __int64 *a2, int *a3, int **a4, int a5)
{
  int v5; // r4@1
  int *v6; // r8@1
  int v7; // r0@1
  __int64 v8; // r2@1
  int v9; // r1@2
  void (*v10)(void); // r3@4
  void *v11; // r0@7
  void *v12; // r0@8
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  unsigned int *v16; // r2@14
  signed int v17; // r1@16
  int v18; // [sp+4h] [bp-84h]@7
  int v19; // [sp+8h] [bp-80h]@7
  char v20; // [sp+Ch] [bp-7Ch]@1
  __int64 v21; // [sp+1Ch] [bp-6Ch]@4
  void (*v22)(void); // [sp+24h] [bp-64h]@4
  int v23; // [sp+28h] [bp-60h]@4
  int v24; // [sp+34h] [bp-54h]@6
  __int64 v25; // [sp+58h] [bp-30h]@2
  void (*v26)(void); // [sp+60h] [bp-28h]@1
  int v27; // [sp+64h] [bp-24h]@2

  v5 = a1;
  v6 = a3;
  MinecraftScreenModel::generateFilePickerSettingsForScreenShots((int)&v20, *(_DWORD *)(a1 + 380), a2, a4);
  v7 = 0;
  v26 = 0;
  HIDWORD(v8) = *(_DWORD *)(a5 + 8);
  if ( HIDWORD(v8) )
  {
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(v8))(&v25, a5, 2);
    v7 = *(_DWORD *)(a5 + 12);
    v27 = *(_DWORD *)(a5 + 12);
    v9 = *(_DWORD *)(a5 + 8);
    v26 = *(void (**)(void))(a5 + 8);
    v8 = v25;
  }
  else
    v9 = 0;
  v25 = v21;
  v21 = v8;
  v10 = v22;
  v22 = (void (*)(void))v9;
  v26 = v10;
  v27 = v23;
  v23 = v7;
  if ( v10 )
    v10();
  if ( v24 )
    sub_DA73B4(&v19, v6);
    sub_DA7364((void **)&v18, "FileBrowser.Rift.FileChooser");
    MinecraftScreenController::showPickFileDialog(v5, (int)&v20, &v19, &v18);
    v11 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v18 - 4);
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
        j_j_j_j_j__ZdlPv_9(v11);
    }
    v12 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v19 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j_j__ZdlPv_9(v12);
  return FilePickerSettings::~FilePickerSettings((FilePickerSettings *)&v20);
}


void __fastcall MinecraftScreenController::_closeModalDialog(MinecraftScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  void *v2; // r0@3
  void *v3; // r0@4
  unsigned int *v4; // r2@6
  signed int v5; // r1@8
  unsigned int *v6; // r2@10
  signed int v7; // r1@12
  int v8; // [sp+4h] [bp-2Ch]@2
  int v9; // [sp+Ch] [bp-24h]@2

  v1 = this;
  if ( *((_DWORD *)this + 7) )
  {
    sub_DA7364((void **)&v9, "popup_dialog_factory");
    sub_DA7364((void **)&v8, "popup_dialog");
    if ( !*((_DWORD *)v1 + 7) )
      sub_DA7654();
    (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 8))((char *)v1 + 20, &v9, &v8);
    v2 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v8 - 4);
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
        j_j_j_j_j__ZdlPv_9(v2);
    }
    v3 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v9 - 4);
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j_j__ZdlPv_9(v3);
  }
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<WorldSettingsScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


  if ( MinecraftScreenController::getInputMode(**a1) != 3 )
{
  v5 = (const ItemInstance *)MinecraftScreenModel::getCursorSelectedItem(*((MinecraftScreenModel **)v3 + 106));
  v6 = (ContainerItemStack *)ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v17, v5);
  v7 = ContainerItemStack::isEmpty(v6);
  if ( ptr )
    operator delete(ptr);
  if ( v19 )
    operator delete(v19);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  v18 = 0;
  if ( v7 )
  {
LABEL_29:
    ContainerScreenController::_getCollectionName((ContainerScreenController *)&v16, v4, v2);
    v8 = (Json::Value *)(v2 + 8);
    if ( Json::Value::isNull(v8) )
    {
      v9 = -1;
    }
    else if ( Json::Value::isObject(v8) == 1 )
      v10 = (Json::Value *)Json::Value::operator[]((int)v8, "#collection_index");
      if ( Json::Value::isInt(v10) || Json::Value::isUInt(v10) == 1 )
        v9 = Json::Value::asInt(v10, 0);
      else
        v9 = -1;
    else
    ContainerScreenController::_handleButtonIsHeld((int)v3, (int **)&v16, v9, 0, 2);
    v11 = ContainerScreenController::_releaseHeldButton(v3, (const void **)&v16, v9, *((_WORD *)v3 + 220));
    v12 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v16 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
  }
  else
    ContainerScreenController::_handleDropSelectedItem(v3, 1);
    v11 = 2;
  return v11;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<WorldConversionErrorReportScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<PlayScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<WorldTemplatesScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


  if ( MinecraftScreenController::getInputMode((MinecraftScreenController *)v3) == 3 )
{
    if ( *(_BYTE *)(v3 + 656) )
    {
      sub_119C884((void **)&v25, "button.container_auto_place_one");
      v5 = CraftingScreenController::_pocketCraftingOutputAutoPlace(
             v3,
             &v26,
             v4,
             (int)&v25,
             v16,
             v17,
             v18,
             v19,
             v20,
             v21,
             v22,
             v23,
             v24,
             v25,
             v26,
             v27,
             v28,
             v29);
      v6 = (char *)(v25 - 12);
      if ( (int *)(v25 - 12) == &dword_28898C0 )
        goto LABEL_35;
      v7 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        goto LABEL_33;
      }
LABEL_32:
      v8 = (*v7)--;
      goto LABEL_33;
    }
    sub_119C884((void **)&v23, "button.container_auto_place_one");
    v10 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v23);
    v5 = ContainerScreenController::_releaseHeldButton((MinecraftScreenController *)v3, (const void **)&v26, v4, v10);
    v6 = (char *)(v23 - 12);
    if ( (int *)(v23 - 12) == &dword_28898C0 )
      goto LABEL_35;
    v7 = (unsigned int *)(v23 - 4);
    if ( !&pthread_create )
      goto LABEL_32;
    __dmb();
    do
      v8 = __ldrex(v7);
    while ( __strex(v8 - 1, v7) );
  }
  else if ( MinecraftScreenController::getInputMode((MinecraftScreenController *)v3) == 2 )
  {
    (*(void (__fastcall **)(int, int *, int))(*(_DWORD *)v3 + 136))(v3, &v26, v4);
    if ( *(_BYTE *)(v3 + 788) )
      ContainerScreenController::_resetHeldButton((ContainerScreenController *)v3);
      ContainerScreenController::_setPointerHeldEventsHandled((ContainerScreenController *)v3, 0);
      ProgressiveTakeButtonData::setAutoHandleAtMaxStackSize((ProgressiveTakeButtonData *)(v3 + 520), 1);
      *(_WORD *)(v3 + 788) = 0;
      EntityInteraction::setInteractText((int *)(v3 + 780), (int *)&Util::EMPTY_STRING);
      *(_DWORD *)(v3 + 784) = -1;
      v5 = 4;
      sub_119C884((void **)&v21, "button.container_auto_place_one");
             (int)&v21,
      v6 = (char *)(v21 - 12);
      if ( (int *)(v21 - 12) == &dword_28898C0 )
      v7 = (unsigned int *)(v21 - 4);
      if ( !&pthread_create )
        goto LABEL_32;
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    else
      sub_119C884(&v19, "button.container_auto_place_one");
      v11 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v19);
      v5 = ContainerScreenController::_releaseHeldButton((MinecraftScreenController *)v3, (const void **)&v26, v4, v11);
      v6 = (char *)v19 - 12;
      if ( (int *)((char *)v19 - 12) == &dword_28898C0 )
      v7 = (unsigned int *)((char *)v19 - 4);
  else
    sub_119C884((void **)&v17, "button.container_take_all_place_all");
    v9 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v17);
    v5 = ContainerScreenController::_releaseHeldButton((MinecraftScreenController *)v3, (const void **)&v26, v4, v9);
    v6 = (char *)(v17 - 12);
    if ( (int *)(v17 - 12) == &dword_28898C0 )
    v7 = (unsigned int *)(v17 - 4);
LABEL_33:
  if ( v8 <= 0 )
    j_j_j_j_j__ZdlPv_9_1(v6);
LABEL_35:
  v12 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  return v5;
}


  if ( MinecraftScreenController::getInputMode(**(MinecraftScreenController ***)a1)
{
  {
    ContainerScreenController::_getCollectionName((ContainerScreenController *)&v68, (UIPropertyBag *)v19, (int)v18);
    v21 = ContainerScreenController::_getCollectionIndex((ContainerScreenController *)v19, v18);
    if ( *(_BYTE *)(v19 + 656) )
    {
      CraftingContainerManagerController::getCurrentContainerStateList(
        (CraftingContainerManagerController *)&v67,
        *(_DWORD *)(v19 + 628));
      sub_119C884((void **)&v66, "button.container_auto_place");
      v22 = MinecraftScreenController::_getNameId((ScreenController *)v19, (int **)&v66);
      v23 = ContainerScreenController::_releaseHeldButton(
              (MinecraftScreenController *)v19,
              (const void **)&v68,
              v21,
              v22);
      v24 = (void *)(v66 - 12);
      if ( (int *)(v66 - 12) != &dword_28898C0 )
      {
        v52 = (unsigned int *)(v66 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
        }
        else
          v53 = (*v52)--;
        if ( v53 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v24);
      }
      v25 = v21;
        (CraftingContainerManagerController *)&v65,
      v26 = HIDWORD(v67);
      v27 = *(_DWORD *)(v19 + 628);
      v28 = HIDWORD(v67);
      v29 = -1171354717 * ((HIDWORD(v67) - (signed int)v67) >> 3);
      v30 = 0;
      v60 = 0;
      v61 = 0;
      v62 = 0;
      if ( HIDWORD(v67) != (_DWORD)v67 )
        if ( v29 >= 0x2E8BA2F )
          sub_119C874();
        v30 = (char *)operator new(HIDWORD(v67) - v67);
        v26 = HIDWORD(v67);
        v28 = v67;
      v60 = v30;
      v62 = &v30[88 * v29];
      v61 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemStateData const*,std::vector<ItemStateData,std::allocator<ItemStateData>>>,ItemStateData*>(
              v28,
              v26,
              (int)v30);
      v31 = HIDWORD(v65);
      v32 = HIDWORD(v65);
      v33 = -1171354717 * ((HIDWORD(v65) - (signed int)v65) >> 3);
      v34 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      if ( HIDWORD(v65) != (_DWORD)v65 )
        if ( v33 >= 0x2E8BA2F )
        v34 = operator new(HIDWORD(v65) - v65);
        v31 = HIDWORD(v65);
        v32 = v65;
      v57 = v34;
      v59 = (char *)v34 + 88 * v33;
      v58 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemStateData const*,std::vector<ItemStateData,std::allocator<ItemStateData>>>,ItemStateData*>(
              v32,
              v31,
              (int)v34);
      CraftingContainerManagerController::compareStatesAndCollectTransfers(
        (int)&ptr,
        v27,
        (unsigned __int64 *)&v60,
        &v57,
        0);
      std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v57);
      std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v60);
      v36 = v64;
      v35 = ptr;
      if ( ptr == v64 )
        v41 = ptr;
      else
        do
          sub_119C854(&v56, &v68);
          sub_119C854(&v55, (int *)v35 + 20);
          CraftingScreenController::_sendFlyingItem(
            v19,
            (ItemInstance *)v35,
            (int)&v56,
            v25,
            (int)&v55,
            *((_DWORD *)v35 + 21));
          v46 = (void *)(v55 - 12);
          if ( (int *)(v55 - 12) != &dword_28898C0 )
          {
            v42 = (unsigned int *)(v55 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v43 = __ldrex(v42);
              while ( __strex(v43 - 1, v42) );
            }
            else
              v43 = (*v42)--;
            if ( v43 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v46);
          }
          v47 = (void *)(v56 - 12);
          if ( (int *)(v56 - 12) != &dword_28898C0 )
            v44 = (unsigned int *)(v56 - 4);
                v45 = __ldrex(v44);
              while ( __strex(v45 - 1, v44) );
              v45 = (*v44)--;
            if ( v45 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v47);
          v35 = (char *)v35 + 88;
        while ( v35 != v36 );
        v35 = v64;
      std::_Destroy_aux<false>::__destroy<ItemTransferData *>((int)v41, (int)v35);
      v20 = v23;
      if ( ptr )
        operator delete(ptr);
      std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector(&v65);
      std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector(&v67);
    }
    else
      sub_119C884((void **)&v54, "button.container_auto_place");
      v37 = MinecraftScreenController::_getNameId((ScreenController *)v19, (int **)&v54);
      v20 = ContainerScreenController::_releaseHeldButton(
              v37);
      v38 = (void *)(v54 - 12);
      if ( (int *)(v54 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v54 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v38);
    v48 = (void *)(v68 - 12);
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v68 - 4);
      if ( &pthread_create )
        __dmb();
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v48);
  }
  else
    ContainerScreenController::_handleDropSelectedItem((ContainerScreenController *)v19, 1);
    v20 = 2;
  return v20;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<StoreBaseScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


FilePickerSettings *__fastcall MinecraftScreenController::showPickFileDialog(int a1, int a2, int *a3, int *a4)
{
  int v4; // r4@1
  int *v5; // r6@1
  int *v6; // r5@1
  int v7; // r0@1
  int *v8; // r7@2
  __int64 v9; // kr00_8@2
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  _QWORD *v12; // r0@9
  __int64 v13; // r2@9 OVERLAPPED
  unsigned int *v14; // r1@10
  int (__fastcall *v15)(_DWORD *, void **, int); // r1@15
  unsigned int *v16; // r1@18
  unsigned int v17; // r0@20
  int v18; // r9@25
  void (__fastcall *v19)(int, void **); // r8@25
  unsigned int *v20; // r0@26
  unsigned int v21; // r1@28
  void *v22; // r0@31
  int (**v23)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r3@31
  int v24; // r12@31
  unsigned int *v25; // r1@32
  unsigned int v26; // r2@34
  __int64 v27; // kr08_8@37
  __int64 v28; // kr10_8@37
  int v29; // r1@37
  int v30; // r1@37
  __int64 v31; // kr18_8@37
  __int64 v32; // kr20_8@37
  int v33; // r1@37
  int v34; // r1@37
  __int64 v35; // kr28_8@37
  __int64 v36; // kr30_8@37
  int v37; // r1@37
  int v38; // r1@37
  int v39; // r1@37
  int v40; // r1@37
  unsigned int *v41; // r2@40
  unsigned int v42; // r1@42
  int v43; // r0@47
  unsigned int *v44; // r2@48
  unsigned int v45; // r1@50
  int v47; // [sp+4h] [bp-11Ch]@25
  int v48; // [sp+8h] [bp-118h]@25
  int v49; // [sp+Ch] [bp-114h]@31
  int v50; // [sp+10h] [bp-110h]@37
  int v51; // [sp+14h] [bp-10Ch]@37
  int *v52; // [sp+18h] [bp-108h]@37
  __int64 v53; // [sp+1Ch] [bp-104h]@37
  int v54; // [sp+24h] [bp-FCh]@37
  int (**v55)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+28h] [bp-F8h]@37
  __int64 v56; // [sp+2Ch] [bp-F4h]@37
  int v57; // [sp+34h] [bp-ECh]@37
  int v58; // [sp+38h] [bp-E8h]@37
  int v59; // [sp+3Ch] [bp-E4h]@37
  int v60; // [sp+40h] [bp-E0h]@37
  int v61; // [sp+44h] [bp-DCh]@37
  __int64 v62; // [sp+48h] [bp-D8h]@37
  void *v63; // [sp+50h] [bp-D0h]@37
  void *v64; // [sp+54h] [bp-CCh]@37
  void *v65; // [sp+58h] [bp-C8h]@37
  void (*v66)(void); // [sp+60h] [bp-C0h]@31
  int (__fastcall *v67)(int *); // [sp+64h] [bp-BCh]@37
  _QWORD *v68; // [sp+68h] [bp-B8h]@15
  void (*v69)(void); // [sp+70h] [bp-B0h]@9
  int v70; // [sp+78h] [bp-A8h]@2
  int v71; // [sp+7Ch] [bp-A4h]@2
  void *v72; // [sp+80h] [bp-A0h]@2
  int v73; // [sp+84h] [bp-9Ch]@2
  int v74; // [sp+88h] [bp-98h]@2
  int v75; // [sp+8Ch] [bp-94h]@2
  void *v76; // [sp+90h] [bp-90h]@2
  int v77; // [sp+94h] [bp-8Ch]@2
  int v78; // [sp+98h] [bp-88h]@2
  int v79; // [sp+9Ch] [bp-84h]@2
  void *v80; // [sp+A0h] [bp-80h]@2
  void *v81; // [sp+A4h] [bp-7Ch]@2
  void *v82; // [sp+A8h] [bp-78h]@2
  void *v83; // [sp+ACh] [bp-74h]@2
  int v84; // [sp+B0h] [bp-70h]@2
  char v85; // [sp+B4h] [bp-6Ch]@2
  char v86; // [sp+B8h] [bp-68h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  FilePickerSettings::FilePickerSettings((int)&v86, a2);
  v7 = MinecraftScreenModel::getHoloInput(*(MinecraftScreenModel **)(v4 + 380));
  if ( (*(int (**)(void))(*(_DWORD *)v7 + 96))() == 1 )
  {
    v72 = &unk_28898CC;
    v73 = 0;
    v74 = 0;
    v75 = 0;
    v76 = &unk_28898CC;
    v77 = 0;
    v78 = 0;
    v79 = 0;
    v80 = &unk_28898CC;
    v81 = &unk_28898CC;
    v82 = &unk_28898CC;
    v83 = &unk_28898CC;
    v84 = 1;
    v85 = 0;
    v8 = (int *)&v72;
    EntityInteraction::setInteractText((int *)&v72, v5);
    EntityInteraction::setInteractText((int *)&v76, v6);
    sub_DA78A4(&v82, "gui.back", (_BYTE *)8);
    v84 = 2;
    MinecraftScreenController::_getWeakPtrToThis<MinecraftScreenController>((int)&v70, v4);
    v9 = *(_QWORD *)&v70;
    if ( v71 )
    {
      v10 = (unsigned int *)(v71 + 8);
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
    v69 = 0;
    v12 = operator new(8u);
    *v12 = v9;
    if ( HIDWORD(v9) )
      v14 = (unsigned int *)(HIDWORD(v9) + 8);
        {
          LODWORD(v13) = __ldrex(v14);
          HIDWORD(v13) = __strex(v13 + 1, v14);
        }
        while ( HIDWORD(v13) );
        ++*v14;
    v15 = sub_CB4B84;
    v68 = v12;
    LODWORD(v13) = sub_CB4A1C;
    *(_QWORD *)&v69 = *(__int64 *)((char *)&v13 - 4);
    LODWORD(v13) = &v68;
    MinecraftScreenController::_displayCustomModalPopup(v4, (int)&v72, v13);
    if ( v69 )
      v69();
      v16 = (unsigned int *)(HIDWORD(v9) + 8);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 12))(HIDWORD(v9));
    v18 = MinecraftScreenModel::getHoloInput(*(MinecraftScreenModel **)(v4 + 380));
    v19 = *(void (__fastcall **)(int, void **))(*(_DWORD *)v18 + 100);
    v47 = v70;
    v48 = v71;
      v20 = (unsigned int *)(v71 + 8);
          v21 = __ldrex(v20);
        while ( __strex(v21 + 1, v20) );
        ++*v20;
    FilePickerSettings::FilePickerSettings((int)&v49, (int)&v86);
    v66 = 0;
    v22 = operator new(0x54u);
    *(_DWORD *)v22 = v47;
    *((_DWORD *)v22 + 1) = v48;
    if ( v48 )
      v23 = &pthread_create;
      v25 = (unsigned int *)(v48 + 8);
          v26 = __ldrex(v25);
        while ( __strex(v26 + 1, v25) );
        v8 = (int *)*((_DWORD *)v22 + 5);
        v23 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))*((_DWORD *)v22 + 9);
        v24 = *((_DWORD *)v22 + 13);
        ++*v25;
    v27 = *(_QWORD *)&v49;
    v28 = *((_QWORD *)v22 + 1);
    v49 = *((_QWORD *)v22 + 1);
    v50 = HIDWORD(v28);
    *((_QWORD *)v22 + 1) = v27;
    v29 = v51;
    v51 = 0;
    *((_DWORD *)v22 + 4) = v29;
    v30 = (int)v52;
    v52 = v8;
    *((_DWORD *)v22 + 5) = v30;
    v31 = *((_QWORD *)v22 + 3);
    v32 = v53;
    v53 = *((_QWORD *)v22 + 3);
    *((_QWORD *)v22 + 3) = v32;
    v33 = v54;
    v54 = 0;
    *((_DWORD *)v22 + 8) = v33;
    v34 = (int)v55;
    v55 = v23;
    *((_DWORD *)v22 + 9) = v34;
    v35 = *((_QWORD *)v22 + 5);
    v36 = v56;
    v56 = *((_QWORD *)v22 + 5);
    *((_QWORD *)v22 + 5) = v36;
    v37 = v57;
    v57 = 0;
    *((_DWORD *)v22 + 12) = v37;
    v38 = v58;
    v58 = v24;
    *((_DWORD *)v22 + 13) = v38;
    v39 = v59;
    v59 = 0;
    *((_DWORD *)v22 + 14) = v39;
    v40 = v60;
    v60 = 0;
    *((_DWORD *)v22 + 15) = v40;
    *((_DWORD *)v22 + 16) = v61;
    v61 = 0;
    *(_QWORD *)((char *)v22 + 68) = v62;
    *((_DWORD *)v22 + 19) = v63;
    v63 = &unk_28898CC;
    *((_DWORD *)v22 + 20) = v64;
    v64 = &unk_28898CC;
    v65 = v22;
    v66 = (void (*)(void))sub_CB4DBC;
    v67 = sub_CB4C28;
    v19(v18, &v65);
    if ( v66 )
      v66();
    FilePickerSettings::~FilePickerSettings((FilePickerSettings *)&v49);
      v41 = (unsigned int *)(v48 + 8);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 == 1 )
        (*(void (**)(void))(*(_DWORD *)v48 + 12))();
    v43 = v71;
      v44 = (unsigned int *)(v71 + 8);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 == 1 )
        (*(void (**)(void))(*(_DWORD *)v43 + 12))();
    ModalScreenData::~ModalScreenData((ModalScreenData *)&v72);
  }
  else
    MinecraftScreenModel::pickFile(*(MinecraftScreenModel **)(v4 + 380), (FilePickerSettings *)&v86);
  return FilePickerSettings::~FilePickerSettings((FilePickerSettings *)&v86);
}


ModalScreenData *__fastcall MinecraftScreenController::_showEduUnownedContentModal(MinecraftScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  void *v2; // r0@1
  __int64 v3; // r1@1 OVERLAPPED
  void *v5; // [sp+0h] [bp-58h]@1
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
  sub_DA78A4(&v17, "gui.ok", (_BYTE *)6);
  v19 = 2;
  sub_DA78A4(&v7, "Content Not Supported", (_BYTE *)0x15);
  sub_DA78A4(&v11, "Content in this world is not supported by Minecraft: Education Edition.", (_BYTE *)0x47);
  v2 = operator new(1u);
  LODWORD(v3) = sub_CADDF2;
  v5 = v2;
  HIDWORD(v3) = nullsub_63;
  v6 = v3;
  HIDWORD(v3) = &v5;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v7, *(__int64 *)((char *)&v3 + 4));
  if ( (_DWORD)v6 )
    ((void (*)(void))v6)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v7);
}


int __fastcall MinecraftScreenController::_attemptSignIn(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r8@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  void (__fastcall *v7)(int *, int, signed int); // r3@7
  void (__fastcall *v8)(_DWORD, _DWORD, _DWORD); // r7@7
  void *v9; // r0@9
  unsigned int *v10; // r1@9
  unsigned int v11; // r2@12
  __int64 v12; // r2@15
  unsigned int *v13; // r2@20
  unsigned int v14; // r1@22
  int result; // r0@27
  unsigned int *v16; // r2@28
  unsigned int v17; // r1@30
  int v18; // [sp+0h] [bp-48h]@1
  int v19; // [sp+4h] [bp-44h]@1
  int v20; // [sp+8h] [bp-40h]@8
  void (__fastcall *v21)(_DWORD, _DWORD, _DWORD); // [sp+10h] [bp-38h]@7
  unsigned int *v22; // [sp+14h] [bp-34h]@8
  void *v23; // [sp+18h] [bp-30h]@15
  void (*v24)(void); // [sp+20h] [bp-28h]@9
  int (__fastcall *v25)(int, int); // [sp+24h] [bp-24h]@15
  int v26; // [sp+28h] [bp-20h]@1
  int v27; // [sp+2Ch] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  MinecraftScreenController::_getWeakPtrToThis<MinecraftScreenController>((int)&v26, a1);
  v4 = *(_DWORD *)(v2 + 380);
  v18 = v26;
  v19 = v27;
  if ( v27 )
  {
    v5 = (unsigned int *)(v27 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v21 = 0;
  v7 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  v8 = 0;
  if ( v7 )
    v7(&v20, v3, 2);
    v22 = *(unsigned int **)(v3 + 12);
    v8 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
    v21 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
  v24 = 0;
  v9 = operator new(0x18u);
  *(_DWORD *)v9 = v18;
  v10 = (unsigned int *)v19;
  *((_DWORD *)v9 + 1) = v19;
  if ( v19 )
    v10 = (unsigned int *)(v19 + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      v10 = (unsigned int *)*((_DWORD *)v9 + 5);
      v8 = v21;
      ++*v10;
  v12 = *(_QWORD *)&v20;
  *(_QWORD *)&v20 = *((_QWORD *)v9 + 1);
  *((_QWORD *)v9 + 1) = v12;
  LODWORD(v12) = v22;
  *((_DWORD *)v9 + 4) = v8;
  v22 = v10;
  *((_DWORD *)v9 + 5) = v12;
  v23 = v9;
  v24 = (void (*)(void))sub_CAE950;
  v25 = sub_CAE614;
  MinecraftScreenModel::silentSignin(v4, (int)&v23);
  if ( v24 )
    v24();
  if ( v21 )
    v21(&v20, &v20, 3);
    v13 = (unsigned int *)(v19 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (**)(void))(*(_DWORD *)v19 + 12))();
  result = v27;
    v16 = (unsigned int *)(v27 + 8);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


  if ( MinecraftScreenController::getInputMode(**a1) == 3 || *((_DWORD *)v5 + 141) != v3 )
{
    result = 0;
  }
  else
  {
    v6 = (_DWORD *)*((_DWORD *)v5 + 140);
    v7 = *v4;
    v8 = 0;
    v9 = *(v6 - 3);
    if ( v9 == *(v7 - 3) && !memcmp(v6, v7, v9) )
      v8 = 1;
    result = v8;
  return result;
}


FilePickerSettings *__fastcall MinecraftScreenController::exportWorld(int a1, int *a2, int *a3, int a4)
{
  int v4; // r5@1
  void *v5; // r0@1
  void *v6; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int v12; // [sp+Ch] [bp-6Ch]@1
  int v13; // [sp+14h] [bp-64h]@1
  char v14; // [sp+18h] [bp-60h]@1

  v4 = a1;
  MinecraftScreenModel::generateFilePickerSettingsForExport((int)&v14, *(_DWORD *)(a1 + 380), a2, a3, a4);
  sub_DA7364((void **)&v13, "FileBrowser.Rift.Export");
  sub_DA7364((void **)&v12, "FileBrowser.Rift.ExportWorld");
  MinecraftScreenController::showPickFileDialog(v4, (int)&v14, &v13, &v12);
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v12 - 4);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  return FilePickerSettings::~FilePickerSettings((FilePickerSettings *)&v14);
}


void __fastcall MinecraftScreenController::~MinecraftScreenController(MinecraftScreenController *this)
{
  MinecraftScreenController::~MinecraftScreenController(this);
}


void __fastcall MinecraftScreenController::showRemoteStorageErrorModal(int a1, int *a2)
{
  int v2; // r4@1
  void *v3; // r0@2
  void *v4; // r0@3
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  void *v7; // r0@8
  void *v8; // r0@10
  __int64 v9; // r1@10 OVERLAPPED
  char *v10; // r0@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  unsigned int *v15; // r2@26
  signed int v16; // r1@28
  void *v17; // [sp+4h] [bp-84h]@10
  __int64 v18; // [sp+Ch] [bp-7Ch]@10
  int v19; // [sp+18h] [bp-70h]@2
  int v20; // [sp+1Ch] [bp-6Ch]@2
  int v21; // [sp+24h] [bp-64h]@8
  int v22; // [sp+28h] [bp-60h]@8
  void *v23; // [sp+2Ch] [bp-5Ch]@1
  int v24; // [sp+30h] [bp-58h]@1
  int v25; // [sp+34h] [bp-54h]@1
  int v26; // [sp+38h] [bp-50h]@1
  void *v27; // [sp+3Ch] [bp-4Ch]@1
  int v28; // [sp+40h] [bp-48h]@1
  int v29; // [sp+44h] [bp-44h]@1
  int v30; // [sp+48h] [bp-40h]@1
  void *v31; // [sp+4Ch] [bp-3Ch]@1
  void *v32; // [sp+50h] [bp-38h]@1
  void *v33; // [sp+54h] [bp-34h]@1
  void *v34; // [sp+58h] [bp-30h]@1
  int v35; // [sp+5Ch] [bp-2Ch]@1
  char v36; // [sp+60h] [bp-28h]@1
  char v37; // [sp+67h] [bp-21h]@1
  char v38; // [sp+68h] [bp-20h]@1
  char *v39; // [sp+70h] [bp-18h]@1

  v2 = a1;
  v37 = 1;
  v39 = (char *)&unk_28898CC;
  ExternalFileLevelStorage::readSyncFileData(a2, (int *)&v39, (int)&v38, &v37);
  v23 = &unk_28898CC;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = &unk_28898CC;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = &unk_28898CC;
  v32 = &unk_28898CC;
  v33 = &unk_28898CC;
  v34 = &unk_28898CC;
  v35 = 1;
  v36 = 0;
  sub_DA78A4(&v23, "progressScreen.dialog.title.storageProviderError", (_BYTE *)0x30);
  if ( v37 )
  {
    sub_DA7364((void **)&v19, "progressScreen.dialog.message.storageProviderError");
    I18n::get(&v20, (int **)&v19);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v27,
      &v20);
    v3 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v20 - 4);
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
        j_j_j_j_j__ZdlPv_9(v3);
    }
    v4 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v5 = (unsigned int *)(v19 - 4);
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
        goto LABEL_35;
      goto LABEL_34;
  }
  else
    sub_DA7364((void **)&v21, "progressScreen.dialog.message.storageProviderUnusableError");
    I18n::get(&v22, (int **)&v21);
      &v22);
    v7 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v22 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9(v7);
    v4 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v5 = (unsigned int *)(v21 - 4);
LABEL_35:
        if ( v6 <= 0 )
          j_j_j_j_j__ZdlPv_9(v4);
        goto LABEL_10;
LABEL_34:
      v6 = (*v5)--;
      goto LABEL_35;
LABEL_10:
  sub_DA78A4(&v33, "options.goBack", (_BYTE *)0xE);
  v35 = 2;
  v8 = operator new(1u);
  LODWORD(v9) = sub_CB49EE;
  v17 = v8;
  HIDWORD(v9) = nullsub_62;
  v18 = v9;
  HIDWORD(v9) = &v17;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v23, *(__int64 *)((char *)&v9 + 4));
  if ( (_DWORD)v18 )
    ((void (*)(void))v18)();
  ModalScreenData::~ModalScreenData((ModalScreenData *)&v23);
  v10 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
}


void __fastcall MinecraftScreenController::showPlayerProfile(int a1, int *a2, int a3, unsigned int a4, __int64 a5)
{
  MinecraftScreenController::showPlayerProfile(a1, a2, a3, a4, a5);
}


signed int __fastcall MinecraftScreenController::_getGamepadHelperVisible(MinecraftScreenController *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 98);
  result = 0;
  if ( v1 == 3 )
    result = 1;
  return result;
}


void __fastcall MinecraftScreenController::_launchStore(MinecraftScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  char v2; // r0@1
  double v3; // r0@2
  unsigned int v4; // r0@3
  int v5; // r6@5
  int *v6; // r5@5
  void **v7; // r0@8
  void *v8; // r0@8
  void **v9; // r0@9
  void *v10; // r0@9
  void **v11; // r0@10
  void *v12; // r0@10
  void **v13; // r0@11
  void *v14; // r0@11
  void **v15; // r0@12
  void *v16; // r0@12
  void **v17; // r0@13
  void *v18; // r0@13
  int *v19; // r0@14
  void *v20; // r0@14
  int v21; // r0@15
  void *v22; // r0@15
  unsigned int *v23; // r2@17
  signed int v24; // r1@19
  unsigned int *v25; // r2@21
  signed int v26; // r1@23
  unsigned int *v27; // r2@33
  signed int v28; // r1@35
  unsigned int *v29; // r2@37
  signed int v30; // r1@39
  unsigned int *v31; // r2@41
  signed int v32; // r1@43
  unsigned int *v33; // r2@45
  signed int v34; // r1@47
  unsigned int *v35; // r2@49
  signed int v36; // r1@51
  unsigned int *v37; // r2@53
  signed int v38; // r1@55
  int v39; // [sp+4h] [bp-4Ch]@14
  int v40; // [sp+8h] [bp-48h]@14
  int v41; // [sp+10h] [bp-40h]@13
  int v42; // [sp+18h] [bp-38h]@12
  int v43; // [sp+20h] [bp-30h]@11
  int v44; // [sp+28h] [bp-28h]@10
  int v45; // [sp+30h] [bp-20h]@9
  int v46; // [sp+38h] [bp-18h]@8

  v1 = this;
  v2 = byte_27C8C48;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27C8C48) )
  {
    *(_DWORD *)algn_27C8C7C = 0;
    dword_27C8C80 = 0;
    dword_27C8C84 = 1065353216;
    LODWORD(v3) = &dword_27C8C84;
    unk_27C8C88 = 0;
    v4 = sub_DA7744(v3);
    dword_27C8C78 = v4;
    if ( v4 == 1 )
    {
      dword_27C8C8C = 0;
      v6 = &dword_27C8C8C;
    }
    else
      if ( v4 >= 0x40000000 )
        sub_DA7414();
      v5 = 4 * v4;
      v6 = (int *)operator new(4 * v4);
      _aeabi_memclr4(v6, v5);
    dword_27C8C74 = (int)v6;
    _cxa_atexit(std::unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_27C8C48);
  }
  if ( !dword_27C8C80 )
    sub_DA7364((void **)&v46, "ios.store");
    v7 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                    (int)&dword_27C8C74,
                    (int **)&v46);
    sub_DA78A4(v7, "https://itunes.apple.com/app/minecraft-pocket-edition/id479516143?mt=8", (_BYTE *)0x46);
    v8 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v46 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      }
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9(v8);
    sub_DA7364((void **)&v45, "android.googleplay");
    v9 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                    (int **)&v45);
    sub_DA78A4(v9, "https://play.google.com/store/apps/details?id=com.mojang.minecraftpe", (_BYTE *)0x44);
    v10 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v45 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j_j__ZdlPv_9(v10);
    sub_DA7364((void **)&v44, "android.amazonappstore");
    v11 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int)&dword_27C8C74,
                     (int **)&v44);
    sub_DA78A4(v11, "https://www.amazon.com/Mojang-Minecraft-Pocket-Edition/dp/B00992CF6W", (_BYTE *)0x44);
    v12 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v44 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9(v12);
    sub_DA7364((void **)&v43, "oculus.store");
    v13 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v43);
    sub_DA78A4(v13, "https://www.microsoft.com/store/apps/minecraft-pocket-edition/9wzdncrdzsbb", (_BYTE *)0x4A);
    v14 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v43 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    sub_DA7364((void **)&v42, "other");
    v15 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v42);
    sub_DA78A4(v15, "http://aka.ms/mcotherappstore", (_BYTE *)0x1D);
    v16 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v42 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j_j__ZdlPv_9(v16);
    sub_DA7364((void **)&v41, "uwp.store");
    v17 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v41);
    sub_DA78A4(v17, "ms-windows-store://pdp/?productid=9NBLGGH2JHXJ", (_BYTE *)0x2E);
    v18 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v41 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
  MinecraftScreenModel::getStoreId((MinecraftScreenModel *)&v39, *((_DWORD *)v1 + 95));
  v19 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 (int)&dword_27C8C74,
                 (int **)&v39);
  sub_DA73B4(&v40, v19);
  v20 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  v21 = *((_DWORD *)v1 + 95);
  MinecraftScreenModel::openUriLink();
  v22 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v40 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
}


void __fastcall MinecraftScreenController::_launchStore(MinecraftScreenController *this)
{
  MinecraftScreenController::_launchStore(this);
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<EncryptionWarningScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


  if ( MinecraftScreenController::getInputMode(**a2)
{
    && !memcmp(*v5, v7, v8)
    && *((_DWORD *)v6 + 196) == v45 )
  {
    result = sub_119C884(v4, "textures/ui/recipe_book_touch_cell_selected");
  }
  else
    v43 = v6;
    v44 = v4;
    v10 = 0x18u % dword_27DABB0;
    v11 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
    if ( !v11 )
      goto LABEL_18;
    v12 = *(_DWORD *)v11;
    v13 = *(_DWORD *)(*(_DWORD *)v11 + 12);
    while ( 1 )
    {
      v14 = v13 == 24;
      if ( v13 == 24 )
        v14 = *(_DWORD *)(v12 + 4) == 24;
      if ( v14 )
        break;
      v15 = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 )
      {
        v13 = *(_DWORD *)(v15 + 12);
        v11 = v12;
        v12 = *(_DWORD *)v12;
        if ( *(_DWORD *)(v15 + 12) % (unsigned int)dword_27DABB0 == v10 )
          continue;
      }
    }
    v16 = v11 == 0;
    if ( v11 )
      v11 = *(_DWORD *)v11;
      v16 = v11 == 0;
    if ( v16 )
LABEL_18:
      v17 = operator new(0x10u);
      *v17 = 0;
      v17[1] = 24;
      v17[2] = &unk_28898CC;
      v11 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DABAC,
              v10,
              0x18u,
              (int)v17);
    v18 = *v5;
    v19 = *(_DWORD **)(v11 + 8);
    v20 = *((_DWORD *)*v5 - 3);
    if ( v20 == *(v19 - 3) && !memcmp(*v5, v19, *((_DWORD *)*v5 - 3)) )
      goto LABEL_73;
    v21 = 0x1Au % dword_27DABB0;
    v22 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
    if ( !v22 )
      goto LABEL_33;
    v23 = *(_DWORD *)v22;
    v24 = *(_DWORD *)(*(_DWORD *)v22 + 12);
      v25 = v24 == 26;
      if ( v24 == 26 )
        v25 = *(_DWORD *)(v23 + 4) == 26;
      if ( v25 )
      v26 = *(_DWORD *)v23;
      if ( *(_DWORD *)v23 )
        v24 = *(_DWORD *)(v26 + 12);
        v22 = v23;
        v23 = *(_DWORD *)v23;
        if ( *(_DWORD *)(v26 + 12) % (unsigned int)dword_27DABB0 == v21 )
    v27 = v22 == 0;
    if ( v22 )
      v22 = *(_DWORD *)v22;
      v27 = v22 == 0;
    if ( v27 )
LABEL_33:
      v28 = operator new(0x10u);
      *v28 = 0;
      v28[1] = 26;
      v28[2] = &unk_28898CC;
      v22 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v21,
              0x1Au,
              (int)v28);
      v18 = *v5;
      v20 = *((_DWORD *)*v5 - 3);
    v29 = *(_DWORD **)(v22 + 8);
    if ( v20 == *(v29 - 3) && !memcmp(v18, v29, v20) )
LABEL_73:
      result = sub_119C884(v44, "textures/ui/recipe_book_item_bg");
    else
      v42 = (ItemInstance *)ContainerManagerController::getItemInstance(*((_DWORD *)v43 + 157), (int **)v5, v45);
      v30 = 0xBu % dword_27DABB0;
      v31 = *((_DWORD *)v43 + 157);
      v32 = *(_DWORD *)(dword_27DABAC + 4 * (0xBu % dword_27DABB0));
      if ( !v32 )
        goto LABEL_49;
      v33 = *(_DWORD *)v32;
      v34 = *(_DWORD *)(*(_DWORD *)v32 + 12);
      while ( 1 )
        v35 = v34 == 11;
        if ( v34 == 11 )
          v35 = *(_DWORD *)(v33 + 4) == 11;
        if ( v35 )
          break;
        v36 = *(_DWORD *)v33;
        if ( *(_DWORD *)v33 )
        {
          v34 = *(_DWORD *)(v36 + 12);
          v32 = v33;
          v33 = *(_DWORD *)v33;
          if ( *(_DWORD *)(v36 + 12) % (unsigned int)dword_27DABB0 == v30 )
            continue;
        }
      v37 = v32 == 0;
      if ( v32 )
        v32 = *(_DWORD *)v32;
        v37 = v32 == 0;
      if ( v37 )
LABEL_49:
        v38 = operator new(0x10u);
        *v38 = 0;
        v38[1] = 11;
        v38[2] = &unk_28898CC;
        v32 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                (int)&dword_27DABAC,
                v30,
                0xBu,
                (int)v38);
      v39 = ContainerManagerController::getItemInstance(v31, (int **)(v32 + 8), 0);
      v40 = ItemInstance::ItemInstance((ItemInstance *)&v46, v39);
      if ( ItemInstance::isNull(v40) == 1 )
        v41 = CraftingContainerManagerController::getOutputGhostItemInstance(*((CraftingContainerManagerController **)v43
                                                                             + 157));
        ItemInstance::operator=((int)&v46, v41);
      if ( MinecraftScreenController::getInputMode(v43) == 3
        || CraftingContainerManagerController::isCreativeContainer(*((_DWORD *)v43 + 157), v5) != 1
        || ItemInstance::matchesItem(v42, (const ItemInstance *)&v46) != 1 )
        if ( MinecraftScreenModel::isCreative(*((MinecraftScreenModel **)v43 + 106))
          || CraftingContainerManagerController::isExpandableItemFiltered(*((_DWORD *)v43 + 157), (int **)v5, v45) != 1 )
          switch ( CraftingContainerManagerController::getBackgroundStyle(*((_DWORD *)v43 + 157), (int **)v5) )
          {
            case 1:
              sub_119C884(v44, "textures/ui/recipe_book_light_button");
              break;
            case 2:
              sub_119C884(v44, "textures/ui/recipe_book_dark_button_pressed");
            case 3:
              sub_119C884(v44, "textures/ui/recipe_book_dark_button");
            case 4:
              sub_119C884(v44, "textures/ui/recipe_book_touch_cell_selected");
            default:
              sub_119C884(v44, "textures/ui/recipe_book_item_bg");
          }
        else
          sub_119C884(v44, "textures/ui/recipe_book_red_button");
      else
        sub_119C884(v44, "textures/ui/recipe_book_touch_cell_selected");
      if ( ptr )
        operator delete(ptr);
      if ( v48 )
        operator delete(v48);
      result = v47;
      if ( v47 )
        result = (void **)(*((int (**)(void))*v47 + 1))();
  return result;
}


  if ( v5 && *(_DWORD *)(v3 + 768) != 6 && MinecraftScreenController::getInputMode((MinecraftScreenController *)v3) == 3 )
{
    ContainerScreenController::_getCollectionName((ContainerScreenController *)&v10, (UIPropertyBag *)v3, (int)v2);
    ContainerScreenController::_getCollectionIndex((ContainerScreenController *)v3, v2);
    if ( ContainerScreenController::_selectionActive((ContainerScreenController *)v3) != 1
      || *(_DWORD *)(v3 + 956) == -1 )
    {
      ContainerScreenController::_handleTakeAllPlaceAll(v3);
    }
    else
      ContainerScreenController::_handleDestroySelectedItem((ContainerScreenController *)v3, 1);
      CraftingScreenController::_restoreFocusFromRestorationContext((CraftingScreenController *)v3);
    v7 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
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
        j_j_j_j_j__ZdlPv_9_1(v7);
    result = 4;
  }
  else
  {
    result = 0;
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<AcceptDeclineInvitationScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<XblOptionalSigninScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<UserDataScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


void __fastcall MinecraftScreenController::_registerEventHandlers(MinecraftScreenController *this)
{
  ScreenController *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  int v3; // r5@3
  _DWORD *v4; // r0@3
  __int64 v5; // r1@3
  void *v6; // r0@5
  unsigned __int64 *v7; // r5@6
  int v8; // r5@8
  _DWORD *v9; // r0@8
  __int64 v10; // r1@8
  void *v11; // r0@10
  _DWORD *v12; // r0@11
  __int64 v13; // r1@11
  _DWORD *v14; // r0@13
  __int64 v15; // r1@13
  unsigned __int64 *v16; // r5@15
  int v17; // r5@17
  _DWORD *v18; // r0@17
  __int64 v19; // r1@17
  void *v20; // r0@19
  unsigned __int64 *v21; // r5@20
  int v22; // r5@22
  _DWORD *v23; // r0@22
  __int64 v24; // r1@22
  void *v25; // r0@24
  unsigned __int64 *v26; // r5@25
  int v27; // r5@27
  _DWORD *v28; // r0@27
  __int64 v29; // r1@27
  void *v30; // r0@29
  unsigned __int64 *v31; // r5@30
  int v32; // r5@32
  _DWORD *v33; // r0@32
  __int64 v34; // r1@32
  void *v35; // r0@34
  unsigned int *v36; // r2@36
  signed int v37; // r1@38
  unsigned int *v38; // r2@40
  signed int v39; // r1@42
  unsigned int *v40; // r2@44
  signed int v41; // r1@46
  unsigned int *v42; // r2@48
  signed int v43; // r1@50
  unsigned int *v44; // r2@52
  signed int v45; // r1@54
  unsigned int *v46; // r2@56
  signed int v47; // r1@58
  _DWORD *v48; // [sp+4h] [bp-C4h]@32
  __int64 v49; // [sp+Ch] [bp-BCh]@32
  int v50; // [sp+18h] [bp-B0h]@30
  _DWORD *v51; // [sp+1Ch] [bp-ACh]@27
  __int64 v52; // [sp+24h] [bp-A4h]@27
  int v53; // [sp+30h] [bp-98h]@25
  _DWORD *v54; // [sp+34h] [bp-94h]@22
  __int64 v55; // [sp+3Ch] [bp-8Ch]@22
  int v56; // [sp+48h] [bp-80h]@20
  _DWORD *v57; // [sp+4Ch] [bp-7Ch]@17
  __int64 v58; // [sp+54h] [bp-74h]@17
  int v59; // [sp+60h] [bp-68h]@15
  _DWORD *v60; // [sp+64h] [bp-64h]@13
  __int64 v61; // [sp+6Ch] [bp-5Ch]@13
  _DWORD *v62; // [sp+74h] [bp-54h]@11
  __int64 v63; // [sp+7Ch] [bp-4Ch]@11
  _DWORD *v64; // [sp+84h] [bp-44h]@8
  __int64 v65; // [sp+8Ch] [bp-3Ch]@8
  int v66; // [sp+98h] [bp-30h]@6
  _DWORD *v67; // [sp+9Ch] [bp-2Ch]@3
  __int64 v68; // [sp+A4h] [bp-24h]@3
  int v69; // [sp+B0h] [bp-18h]@1

  v1 = this;
  sub_DA7364((void **)&v69, "button.menu_exit");
  v2 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v2, (int **)&v69) )
    NameRegistry::registerName(v2, (int **)&v69);
  v3 = NameRegistry::getNameId(v2, (int **)&v69);
  v4 = operator new(4u);
  LODWORD(v5) = sub_CB53DE;
  *v4 = v1;
  HIDWORD(v5) = sub_CB53D4;
  v67 = v4;
  v68 = v5;
  ScreenController::registerButtonClickHandler((int)v1, v3, (int)&v67);
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  v6 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
  {
    v36 = (unsigned int *)(v69 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
    }
    else
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  }
  sub_DA7364((void **)&v66, "button.menu_open_uri");
  v7 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v7, (int **)&v66) )
    NameRegistry::registerName(v7, (int **)&v66);
  v8 = NameRegistry::getNameId(v7, (int **)&v66);
  v9 = operator new(4u);
  LODWORD(v10) = sub_CB55E8;
  *v9 = v1;
  HIDWORD(v10) = sub_CB5414;
  v64 = v9;
  v65 = v10;
  ScreenController::registerButtonClickHandler((int)v1, v8, (int)&v64);
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  v11 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v66 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = operator new(4u);
  LODWORD(v13) = sub_CB5730;
  *v12 = v1;
  HIDWORD(v13) = sub_CB5722;
  v62 = v12;
  v63 = v13;
  ScreenController::registerInputModechangedEventHandler((int)v1, (int)&v62);
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  v14 = operator new(4u);
  LODWORD(v15) = sub_CB5774;
  *v14 = v1;
  HIDWORD(v15) = sub_CB5766;
  v60 = v14;
  v61 = v15;
  ScreenController::registerHoloInputModeChangedEventHandler((int)v1, (int)&v60);
  if ( (_DWORD)v61 )
    ((void (*)(void))v61)();
  sub_DA7364((void **)&v59, "popup_dialog.left_button");
  v16 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v16, (int **)&v59) )
    NameRegistry::registerName(v16, (int **)&v59);
  v17 = NameRegistry::getNameId(v16, (int **)&v59);
  v18 = operator new(4u);
  LODWORD(v19) = sub_CB57C2;
  *v18 = v1;
  HIDWORD(v19) = sub_CB57AA;
  v57 = v18;
  v58 = v19;
  ScreenController::registerButtonClickHandler((int)v1, v17, (int)&v57);
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  v20 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v59 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  sub_DA7364((void **)&v56, "popup_dialog.middle_button");
  v21 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v21, (int **)&v56) )
    NameRegistry::registerName(v21, (int **)&v56);
  v22 = NameRegistry::getNameId(v21, (int **)&v56);
  v23 = operator new(4u);
  LODWORD(v24) = sub_CB5810;
  *v23 = v1;
  HIDWORD(v24) = sub_CB57F8;
  v54 = v23;
  v55 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v54);
  if ( (_DWORD)v55 )
    ((void (*)(void))v55)();
  v25 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v56 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
  sub_DA7364((void **)&v53, "popup_dialog.rightcancel_button");
  v26 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v26, (int **)&v53) )
    NameRegistry::registerName(v26, (int **)&v53);
  v27 = NameRegistry::getNameId(v26, (int **)&v53);
  v28 = operator new(4u);
  LODWORD(v29) = sub_CB585E;
  *v28 = v1;
  HIDWORD(v29) = sub_CB5846;
  v51 = v28;
  v52 = v29;
  ScreenController::registerButtonClickHandler((int)v1, v27, (int)&v51);
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  v30 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v53 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9(v30);
  sub_DA7364((void **)&v50, "popup_dialog.escape");
  v31 = (unsigned __int64 *)ScreenController::_getNameRegistry(v1);
  if ( !NameRegistry::hasEntry(v31, (int **)&v50) )
    NameRegistry::registerName(v31, (int **)&v50);
  v32 = NameRegistry::getNameId(v31, (int **)&v50);
  v33 = operator new(4u);
  LODWORD(v34) = sub_CB58AC;
  *v33 = v1;
  HIDWORD(v34) = sub_CB5894;
  v48 = v33;
  v49 = v34;
  ScreenController::registerButtonClickHandler((int)v1, v32, (int)&v48);
  if ( (_DWORD)v49 )
    ((void (*)(void))v49)();
  v35 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v50 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9(v35);
}


  if ( MinecraftScreenController::getInputMode(**a1)
{
  {
    result = 0;
  }
  else
    v8 = memcmp(v6, *v4, v7);
    if ( !v8 && *((_DWORD *)v5 + 196) == v3 )
      result = 1;
  return result;
}


  if ( MinecraftScreenController::getInputMode((MinecraftScreenController *)v1) == 3 )
{
    result = *(_BYTE *)(v1 + 568);
    if ( *(_BYTE *)(v1 + 568) )
      result = 1;
  }
  else
  {
    result = 0;
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<XblGamerProfileCardScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


int __fastcall MinecraftScreenController::_attemptConnect(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r8@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  void (__fastcall *v7)(int *, int, signed int); // r3@7
  void (__fastcall *v8)(_DWORD, _DWORD, _DWORD); // r7@7
  void *v9; // r0@9
  unsigned int *v10; // r1@9
  unsigned int v11; // r2@12
  __int64 v12; // r2@15
  unsigned int *v13; // r2@20
  unsigned int v14; // r1@22
  int result; // r0@27
  unsigned int *v16; // r2@28
  unsigned int v17; // r1@30
  int v18; // [sp+0h] [bp-48h]@1
  int v19; // [sp+4h] [bp-44h]@1
  int v20; // [sp+8h] [bp-40h]@8
  void (__fastcall *v21)(_DWORD, _DWORD, _DWORD); // [sp+10h] [bp-38h]@7
  unsigned int *v22; // [sp+14h] [bp-34h]@8
  void *v23; // [sp+18h] [bp-30h]@15
  void (*v24)(void); // [sp+20h] [bp-28h]@9
  int (__fastcall *v25)(int *); // [sp+24h] [bp-24h]@15
  int v26; // [sp+28h] [bp-20h]@1
  int v27; // [sp+2Ch] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  MinecraftScreenController::_getWeakPtrToThis<MinecraftScreenController>((int)&v26, a1);
  v4 = *(_DWORD *)(v2 + 380);
  v18 = v26;
  v19 = v27;
  if ( v27 )
  {
    v5 = (unsigned int *)(v27 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v21 = 0;
  v7 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  v8 = 0;
  if ( v7 )
    v7(&v20, v3, 2);
    v22 = *(unsigned int **)(v3 + 12);
    v8 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
    v21 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
  v24 = 0;
  v9 = operator new(0x18u);
  *(_DWORD *)v9 = v18;
  v10 = (unsigned int *)v19;
  *((_DWORD *)v9 + 1) = v19;
  if ( v19 )
    v10 = (unsigned int *)(v19 + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      v10 = (unsigned int *)*((_DWORD *)v9 + 5);
      v8 = v21;
      ++*v10;
  v12 = *(_QWORD *)&v20;
  *(_QWORD *)&v20 = *((_QWORD *)v9 + 1);
  *((_QWORD *)v9 + 1) = v12;
  LODWORD(v12) = v22;
  *((_DWORD *)v9 + 4) = v8;
  v22 = v10;
  *((_DWORD *)v9 + 5) = v12;
  v23 = v9;
  v24 = (void (*)(void))sub_CAED04;
  v25 = sub_CAEBC8;
  MinecraftScreenModel::connectToPlatformNetwork(v4, (int)&v23);
  if ( v24 )
    v24();
  if ( v21 )
    v21(&v20, &v20, 3);
    v13 = (unsigned int *)(v19 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (**)(void))(*(_DWORD *)v19 + 12))();
  result = v27;
    v16 = (unsigned int *)(v27 + 8);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall MinecraftScreenController::_showFriendFinder(int a1, int a2)
{
  int v2; // r4@1
  void (__fastcall *v3)(void **, int, signed int); // r3@1
  int result; // r0@3
  int v5; // r4@3
  unsigned int *v6; // r1@4
  unsigned int *v7; // r5@10
  int v8; // r4@19
  unsigned int *v9; // r1@20
  unsigned int *v10; // r5@26
  void *v11; // [sp+0h] [bp-30h]@2
  int v12; // [sp+4h] [bp-2Ch]@3
  int v13; // [sp+8h] [bp-28h]@1
  int v14; // [sp+Ch] [bp-24h]@2
  int v15; // [sp+10h] [bp-20h]@1
  int v16; // [sp+14h] [bp-1Ch]@3
  char v17; // [sp+18h] [bp-18h]@3
  int v18; // [sp+1Ch] [bp-14h]@3
  void *v19; // [sp+20h] [bp-10h]@3

  v2 = a2;
  xbox::services::system::title_callable_ui::show_friend_finder_ui((xbox::services::system::title_callable_ui *)&v15);
  v13 = 0;
  v3 = *(void (__fastcall **)(void **, int, signed int))(v2 + 8);
  if ( v3 )
  {
    v3(&v11, v2, 2);
    v14 = *(_DWORD *)(v2 + 12);
    v13 = *(_DWORD *)(v2 + 8);
  }
  result = sub_CA9A50((int)&v17, (int)&v15, (int)&v11, (int)v3, v11, v12, v13, v14, v15, v16, *(int *)&v17, v18, v19);
  v5 = v18;
  if ( v18 )
    v6 = (unsigned int *)(v18 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v6);
      while ( __strex(result - 1, v6) );
    }
    else
      result = (*v6)--;
    if ( result == 1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v7);
        while ( __strex(result - 1, v7) );
      }
      else
        result = (*v7)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  if ( v13 )
    result = ((int (*)(void))v13)();
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
        result = (*v10)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<InviteScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


int __fastcall MinecraftScreenController::_getKeyboardHelperVisible(MinecraftScreenController *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 98);
  if ( result != 1 )
    result = 0;
  return result;
}


int __fastcall MinecraftScreenController::_displayVRRemoveDeviceWarning(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  _QWORD *v7; // r0@7
  __int64 v8; // r2@7 OVERLAPPED
  unsigned int *v9; // r1@8
  int (__fastcall *v10)(_DWORD *, void **, int); // r1@13
  unsigned int *v11; // r1@16
  unsigned int v12; // r0@18
  int v13; // r6@23
  void (__fastcall *v14)(int, char *); // r5@23
  void (__fastcall *v15)(char *, int, signed int); // r3@23
  int result; // r0@27
  unsigned int *v17; // r2@28
  unsigned int v18; // r1@30
  char v19; // [sp+4h] [bp-7Ch]@24
  void (*v20)(void); // [sp+Ch] [bp-74h]@23
  int v21; // [sp+10h] [bp-70h]@24
  _QWORD *v22; // [sp+14h] [bp-6Ch]@13
  void (*v23)(void); // [sp+1Ch] [bp-64h]@7
  void *v24; // [sp+24h] [bp-5Ch]@1
  int v25; // [sp+28h] [bp-58h]@1
  int v26; // [sp+2Ch] [bp-54h]@1
  int v27; // [sp+30h] [bp-50h]@1
  void *v28; // [sp+34h] [bp-4Ch]@1
  int v29; // [sp+38h] [bp-48h]@1
  int v30; // [sp+3Ch] [bp-44h]@1
  int v31; // [sp+40h] [bp-40h]@1
  void *v32; // [sp+44h] [bp-3Ch]@1
  void *v33; // [sp+48h] [bp-38h]@1
  void *v34; // [sp+4Ch] [bp-34h]@1
  void *v35; // [sp+50h] [bp-30h]@1
  int v36; // [sp+54h] [bp-2Ch]@1
  char v37; // [sp+58h] [bp-28h]@1
  char v38; // [sp+5Ch] [bp-24h]@1
  int v39; // [sp+60h] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  MinecraftScreenController::_getWeakPtrToThis<MinecraftScreenController>((int)&v38, a1);
  v24 = &unk_28898CC;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = &unk_28898CC;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = &unk_28898CC;
  v33 = &unk_28898CC;
  v34 = &unk_28898CC;
  v35 = &unk_28898CC;
  v36 = 1;
  v37 = 0;
  sub_DA78A4(&v24, "xblLogin.LoginMessageTitle", (_BYTE *)0x1A);
  sub_DA78A4(&v28, "xblLogin.AddFriendMessageRift", (_BYTE *)0x1D);
  sub_DA78A4(&v34, "gui.back", (_BYTE *)8);
  v36 = 2;
  v4 = *(_QWORD *)&v38;
  if ( v39 )
  {
    v5 = (unsigned int *)(v39 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v23 = 0;
  v7 = operator new(8u);
  *v7 = v4;
  if ( HIDWORD(v4) )
    v9 = (unsigned int *)(HIDWORD(v4) + 8);
      {
        LODWORD(v8) = __ldrex(v9);
        HIDWORD(v8) = __strex(v8 + 1, v9);
      }
      while ( HIDWORD(v8) );
      ++*v9;
  v10 = sub_CB445C;
  v22 = v7;
  LODWORD(v8) = sub_CB42F4;
  *(_QWORD *)&v23 = *(__int64 *)((char *)&v8 - 4);
  LODWORD(v8) = &v22;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v24, v8);
  if ( v23 )
    v23();
    v11 = (unsigned int *)(HIDWORD(v4) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  v13 = MinecraftScreenModel::getHoloInput(*(MinecraftScreenModel **)(v2 + 380));
  v14 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v13 + 100);
  v20 = 0;
  v15 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
  if ( v15 )
    v15(&v19, v3, 2);
    v21 = *(_DWORD *)(v3 + 12);
    v20 = *(void (**)(void))(v3 + 8);
  v14(v13, &v19);
  if ( v20 )
    v20();
  ModalScreenData::~ModalScreenData((ModalScreenData *)&v24);
  result = v39;
    v17 = (unsigned int *)(v39 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<SkinPickerScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


  if ( MinecraftScreenController::getInputMode(**a1) == 3 )
{
  return 1;
}


ModalScreenData *__fastcall MinecraftScreenController::showPickCustomSkinDialog(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  __int64 v5; // kr00_8@2
  unsigned int *v6; // r0@3
  unsigned int v7; // r1@5
  int v8; // r5@7
  void (__fastcall *v9)(char *, int, signed int); // r3@7
  ModalScreenData *result; // r0@9
  _QWORD *v11; // r0@13
  __int64 v12; // r2@13 OVERLAPPED
  unsigned int *v13; // r1@14
  int (__fastcall *v14)(_DWORD *, void **, int); // r1@19
  unsigned int *v15; // r1@22
  unsigned int v16; // r0@24
  int v17; // r9@29
  void (__fastcall *v18)(int, void **); // r8@29
  unsigned int *v19; // r0@30
  unsigned int v20; // r1@32
  void (__fastcall *v21)(int *, int, signed int); // r3@35
  void (__fastcall *v22)(_DWORD, _DWORD, _DWORD); // r7@35
  void *v23; // r0@37
  unsigned int *v24; // r1@37
  unsigned int v25; // r2@40
  __int64 v26; // r2@43
  int v27; // r0@47
  unsigned int *v28; // r2@48
  unsigned int v29; // r1@50
  int v30; // r0@55
  unsigned int *v31; // r2@56
  unsigned int v32; // r1@58
  char v33; // [sp+4h] [bp-A4h]@8
  int (*v34)(void); // [sp+Ch] [bp-9Ch]@7
  int v35; // [sp+10h] [bp-98h]@8
  int v36; // [sp+14h] [bp-94h]@29
  int v37; // [sp+18h] [bp-90h]@29
  int v38; // [sp+1Ch] [bp-8Ch]@36
  void (__fastcall *v39)(_DWORD, _DWORD, _DWORD); // [sp+24h] [bp-84h]@35
  unsigned int *v40; // [sp+28h] [bp-80h]@36
  void *v41; // [sp+2Ch] [bp-7Ch]@43
  void (*v42)(void); // [sp+34h] [bp-74h]@37
  int (__fastcall *v43)(int); // [sp+38h] [bp-70h]@43
  _QWORD *v44; // [sp+3Ch] [bp-6Ch]@19
  void (*v45)(void); // [sp+44h] [bp-64h]@13
  int v46; // [sp+4Ch] [bp-5Ch]@2
  int v47; // [sp+50h] [bp-58h]@2
  void *v48; // [sp+54h] [bp-54h]@2
  int v49; // [sp+58h] [bp-50h]@2
  int v50; // [sp+5Ch] [bp-4Ch]@2
  int v51; // [sp+60h] [bp-48h]@2
  void *v52; // [sp+64h] [bp-44h]@2
  int v53; // [sp+68h] [bp-40h]@2
  int v54; // [sp+6Ch] [bp-3Ch]@2
  int v55; // [sp+70h] [bp-38h]@2
  void *v56; // [sp+74h] [bp-34h]@2
  void *v57; // [sp+78h] [bp-30h]@2
  void *v58; // [sp+7Ch] [bp-2Ch]@2
  void *v59; // [sp+80h] [bp-28h]@2
  int v60; // [sp+84h] [bp-24h]@2
  char v61; // [sp+88h] [bp-20h]@2

  v2 = a1;
  v3 = a2;
  v4 = MinecraftScreenModel::getHoloInput(*(MinecraftScreenModel **)(a1 + 380));
  if ( (*(int (**)(void))(*(_DWORD *)v4 + 92))() == 1 )
  {
    v48 = &unk_28898CC;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = &unk_28898CC;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &unk_28898CC;
    v57 = &unk_28898CC;
    v58 = &unk_28898CC;
    v59 = &unk_28898CC;
    v60 = 1;
    v61 = 0;
    sub_DA78A4(&v48, "FileBrowser.Rift.SkinChooser", (_BYTE *)0x1C);
    sub_DA78A4(&v52, "FileBrowser.Rift.Skin", (_BYTE *)0x15);
    sub_DA78A4(&v58, "gui.back", (_BYTE *)8);
    v60 = 2;
    MinecraftScreenController::_getWeakPtrToThis<MinecraftScreenController>((int)&v46, v2);
    v5 = *(_QWORD *)&v46;
    if ( v47 )
    {
      v6 = (unsigned int *)(v47 + 8);
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
    v45 = 0;
    v11 = operator new(8u);
    *v11 = v5;
    if ( HIDWORD(v5) )
      v13 = (unsigned int *)(HIDWORD(v5) + 8);
        {
          LODWORD(v12) = __ldrex(v13);
          HIDWORD(v12) = __strex(v12 + 1, v13);
        }
        while ( HIDWORD(v12) );
        ++*v13;
    v14 = sub_CB502C;
    v44 = v11;
    LODWORD(v12) = sub_CB4EC4;
    *(_QWORD *)&v45 = *(__int64 *)((char *)&v12 - 4);
    LODWORD(v12) = &v44;
    MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v48, v12);
    if ( v45 )
      v45();
      v15 = (unsigned int *)(HIDWORD(v5) + 8);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 12))(HIDWORD(v5));
    v17 = MinecraftScreenModel::getHoloInput(*(MinecraftScreenModel **)(v2 + 380));
    v18 = *(void (__fastcall **)(int, void **))(*(_DWORD *)v17 + 100);
    v36 = v46;
    v37 = v47;
      v19 = (unsigned int *)(v47 + 8);
          v20 = __ldrex(v19);
        while ( __strex(v20 + 1, v19) );
        ++*v19;
    v39 = 0;
    v21 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
    v22 = 0;
    if ( v21 )
      v21(&v38, v3, 2);
      v40 = *(unsigned int **)(v3 + 12);
      v22 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
      v39 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 8);
    v42 = 0;
    v23 = operator new(0x18u);
    *(_DWORD *)v23 = v36;
    v24 = (unsigned int *)v37;
    *((_DWORD *)v23 + 1) = v37;
    if ( v24 )
      v24 += 2;
          v25 = __ldrex(v24);
        while ( __strex(v25 + 1, v24) );
        v24 = (unsigned int *)*((_DWORD *)v23 + 5);
        v22 = v39;
        ++*v24;
    v26 = *(_QWORD *)&v38;
    *(_QWORD *)&v38 = *((_QWORD *)v23 + 1);
    *((_QWORD *)v23 + 1) = v26;
    LODWORD(v26) = v40;
    *((_DWORD *)v23 + 4) = v22;
    v40 = v24;
    *((_DWORD *)v23 + 5) = v26;
    v41 = v23;
    v42 = (void (*)(void))sub_CB52A0;
    v43 = sub_CB50D0;
    v18(v17, &v41);
    if ( v42 )
      v42();
    if ( v39 )
      v39(&v38, &v38, 3);
    v27 = v37;
    if ( v37 )
      v28 = (unsigned int *)(v37 + 8);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (**)(void))(*(_DWORD *)v27 + 12))();
    v30 = v47;
      v31 = (unsigned int *)(v47 + 8);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 == 1 )
        (*(void (**)(void))(*(_DWORD *)v30 + 12))();
    result = ModalScreenData::~ModalScreenData((ModalScreenData *)&v48);
  }
  else
    v8 = *(_DWORD *)(v2 + 380);
    v34 = 0;
    v9 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
    if ( v9 )
      v9(&v33, v3, 2);
      v35 = *(_DWORD *)(v3 + 12);
      v34 = *(int (**)(void))(v3 + 8);
    result = (ModalScreenData *)MinecraftScreenModel::pickCustomSkin(v8, (int)&v33);
    if ( v34 )
      result = (ModalScreenData *)v34();
  return result;
}


void __fastcall MinecraftScreenController::_showNoWifiModal(MinecraftScreenController *this)
{
  MinecraftScreenController::_showNoWifiModal(this);
}


int __fastcall MinecraftScreenController::MinecraftScreenController(int a1, MinecraftScreenModel **a2)
{
  MinecraftScreenModel **v2; // r5@1
  int v3; // r4@1
  double v4; // r0@1
  MinecraftScreenModel *v5; // r1@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r2@4

  v2 = a2;
  v3 = a1;
  HIDWORD(v4) = MinecraftScreenModel::getNameRegistry(*a2);
  LODWORD(v4) = v3;
  ScreenController::ScreenController(v4);
  *(_DWORD *)(v3 + 372) = 0;
  *(_DWORD *)(v3 + 376) = 0;
  *(_DWORD *)v3 = &off_26D7A04;
  *(_DWORD *)(v3 + 380) = *v2;
  v5 = v2[1];
  *(_DWORD *)(v3 + 384) = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)((char *)v5 + 4);
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
  *(_DWORD *)(v3 + 412) = 0;
  *(_BYTE *)(v3 + 420) = 0;
  *(_BYTE *)(v3 + 400) = 0;
  *(_DWORD *)(v3 + 396) = 0;
  *(_DWORD *)(v3 + 388) = 0;
  *(_DWORD *)(v3 + 392) = 0;
  MinecraftScreenController::_registerEventHandlers((MinecraftScreenController *)v3);
  MinecraftScreenController::_registerBindings((MinecraftScreenController *)v3);
  return v3;
}


  if ( MinecraftScreenController::getInputMode((MinecraftScreenController *)v3)
{
  {
    v5 = ContainerScreenController::_getCollectionIndex((ContainerScreenController *)v3, v2);
    sub_119C884((void **)&v14, "button.container_take_half_place_one");
    v6 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v14);
    v4 = ContainerScreenController::_releaseHeldButton((MinecraftScreenController *)v3, (const void **)&v15, v5, v6);
    v7 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v7);
    }
  }
  else
    CraftingContainerManagerController::_clearCreativeHotbar(*(CraftingContainerManagerController **)(v3 + 628));
    v4 = 1;
  v8 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v4;
}


void __fastcall MinecraftScreenController::_showUserProfile(int a1, const char **a2, int a3)
{
  const char *v3; // r4@1
  int v4; // r8@1
  int v5; // r5@1
  _DWORD *v6; // r0@2
  int *v7; // r7@2
  char *v8; // r6@2
  void (__fastcall *v9)(char *, int, signed int); // r3@8
  void *v10; // r4@10
  unsigned int *v11; // r1@11
  unsigned int v12; // r0@13
  unsigned int *v13; // r5@17
  unsigned int v14; // r0@19
  int v15; // r4@26
  unsigned int *v16; // r1@27
  unsigned int v17; // r0@29
  unsigned int *v18; // r5@33
  unsigned int v19; // r0@35
  char *v20; // r0@40
  unsigned int *v21; // r2@42
  signed int v22; // r1@44
  void *v23; // [sp+0h] [bp-48h]@0
  char v24; // [sp+4h] [bp-44h]@9
  int v25; // [sp+8h] [bp-40h]@10
  int v26; // [sp+Ch] [bp-3Ch]@8
  int v27; // [sp+10h] [bp-38h]@9
  char v28; // [sp+14h] [bp-34h]@8
  int v29; // [sp+18h] [bp-30h]@10
  char v30; // [sp+1Ch] [bp-2Ch]@10
  void *v31; // [sp+20h] [bp-28h]@10
  char *v32; // [sp+28h] [bp-20h]@8

  v3 = *a2;
  v4 = a3;
  v5 = *((_DWORD *)*a2 - 3);
  if ( v5 )
  {
    v6 = sub_DA8BD4(*((_DWORD *)*a2 - 3), 0);
    v7 = v6;
    v8 = (char *)(v6 + 3);
    if ( v5 == 1 )
      *v8 = *v3;
    else
      _aeabi_memcpy(v6 + 3, v3, v5);
    if ( v7 != &dword_28898C0 )
    {
      v7[2] = 0;
      *v7 = v5;
      v8[v5] = byte_26C67B8[0];
    }
  }
  else
    v8 = (char *)&unk_28898CC;
  v32 = v8;
  xbox::services::system::title_callable_ui::show_user_profile_ui((int)&v28, (int *)&v32);
  v26 = 0;
  v9 = *(void (__fastcall **)(char *, int, signed int))(v4 + 8);
  if ( v9 )
    v9(&v24, v4, 2);
    v27 = *(_DWORD *)(v4 + 12);
    v26 = *(_DWORD *)(v4 + 8);
  sub_CA8E08(
    (int)&v30,
    (int)&v28,
    (int)&v24,
    (int)v9,
    v23,
    *(int *)&v24,
    v25,
    v26,
    v27,
    *(int *)&v28,
    v29,
    *(int *)&v30,
    v31);
  v10 = v31;
  if ( v31 )
    v11 = (unsigned int *)((char *)v31 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)((char *)v10 + 8);
      (*(void (__fastcall **)(void *))(*(_DWORD *)v10 + 8))(v10);
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
        (*(void (__fastcall **)(void *))(*(_DWORD *)v10 + 12))(v10);
  if ( v26 )
    ((void (*)(void))v26)();
  v15 = v29;
  if ( v29 )
    v16 = (unsigned int *)(v29 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v20 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v32 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
}


void __fastcall MinecraftScreenController::~MinecraftScreenController(MinecraftScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MinecraftScreenController::~MinecraftScreenController(this);
  j_j_j__ZdlPv_3((void *)v1);
}


unsigned int __fastcall MinecraftScreenController::_getWeakPtrToThis<PermissionsScreenController>(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 376);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 372);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}
