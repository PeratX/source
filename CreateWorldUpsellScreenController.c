

const void **__fastcall CreateWorldUpsellScreenController::getAdditionalScreenInfo(CreateWorldUpsellScreenController *this, int a2)
{
  const void **v2; // r5@1
  int v3; // r4@1

  v2 = (const void **)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  sub_119CAF8((const void **)this, *(_DWORD *)(*(_DWORD *)(a2 + 472) - 12) + 3);
  sub_119C894(v2, " - ", 3u);
  return sub_119C8A4(v2, (const void **)(v3 + 472));
}


void __fastcall CreateWorldUpsellScreenController::~CreateWorldUpsellScreenController(CreateWorldUpsellScreenController *this)
{
  CreateWorldUpsellScreenController *v1; // r0@1

  v1 = CreateWorldUpsellScreenController::~CreateWorldUpsellScreenController(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall CreateWorldUpsellScreenController::_createWorldSellingPointList(CreateWorldUpsellScreenController *this)
{
  CreateWorldUpsellScreenController *v1; // r4@1
  __int64 v2; // r0@1
  int v3; // r1@2
  void *v4; // r0@4
  __int64 v5; // r0@5
  int v6; // r1@6
  void *v7; // r0@8
  __int64 v8; // r0@9
  int v9; // r1@10
  void *v10; // r0@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  void *v17; // [sp+8h] [bp-28h]@9
  void *v18; // [sp+10h] [bp-20h]@5
  void *v19; // [sp+18h] [bp-18h]@1

  v1 = this;
  sub_119C884(&v19, "createWorldUpsell.world.sellPoint1");
  v2 = *(_QWORD *)((char *)v1 + 436);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
      (unsigned __int64 *)v1 + 54,
      &v19);
    v3 = (int)v19;
  }
  else
    *(_DWORD *)v2 = v19;
    HIDWORD(v2) = &unk_28898CC;
    v19 = &unk_28898CC;
    *((_DWORD *)v1 + 109) = v2 + 4;
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v3 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  sub_119C884(&v18, "createWorldUpsell.world.sellPoint2");
  v5 = *(_QWORD *)((char *)v1 + 436);
  if ( (_DWORD)v5 == HIDWORD(v5) )
      &v18);
    v6 = (int)v18;
    *(_DWORD *)v5 = v18;
    HIDWORD(v5) = &unk_28898CC;
    v18 = &unk_28898CC;
    *((_DWORD *)v1 + 109) = v5 + 4;
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884(&v17, "createWorldUpsell.world.sellPoint3");
  v8 = *(_QWORD *)((char *)v1 + 436);
  if ( (_DWORD)v8 == HIDWORD(v8) )
      &v17);
    v9 = (int)v17;
    *(_DWORD *)v8 = v17;
    HIDWORD(v8) = &unk_28898CC;
    v17 = &unk_28898CC;
    *((_DWORD *)v1 + 109) = v8 + 4;
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v9 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
}


CreateWorldUpsellScreenController *__fastcall CreateWorldUpsellScreenController::~CreateWorldUpsellScreenController(CreateWorldUpsellScreenController *this)
{
  CreateWorldUpsellScreenController *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r5@2
  void *v5; // r7@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int *v8; // r0@12
  void *v9; // r5@17
  void *v10; // r7@17
  unsigned int *v11; // r2@19
  signed int v12; // r1@21
  int *v13; // r0@27
  unsigned int *v15; // r2@33
  signed int v16; // r1@35

  v1 = this;
  *(_DWORD *)this = &off_26E181C;
  v2 = *((_DWORD *)this + 118);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v5 = (void *)(*(_QWORD *)((char *)v1 + 444) >> 32);
  v4 = (void *)*(_QWORD *)((char *)v1 + 444);
  if ( v4 != v5 )
    do
      v8 = (int *)(*(_DWORD *)v4 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v8);
      }
      v4 = (char *)v4 + 4;
    while ( v4 != v5 );
    v4 = (void *)*((_DWORD *)v1 + 111);
  if ( v4 )
    operator delete(v4);
  v10 = (void *)(*((_QWORD *)v1 + 54) >> 32);
  v9 = (void *)*((_QWORD *)v1 + 54);
  if ( v9 != v10 )
      v13 = (int *)(*(_DWORD *)v9 - 12);
      if ( v13 != &dword_28898C0 )
        v11 = (unsigned int *)(*(_DWORD *)v9 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v13);
      v9 = (char *)v9 + 4;
    while ( v9 != v10 );
    v9 = (void *)*((_DWORD *)v1 + 108);
  if ( v9 )
    operator delete(v9);
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


void __fastcall CreateWorldUpsellScreenController::_createRealmSellingPointList(CreateWorldUpsellScreenController *this)
{
  CreateWorldUpsellScreenController::_createRealmSellingPointList(this);
}


void __fastcall CreateWorldUpsellScreenController::_registerEventHandlers(CreateWorldUpsellScreenController *this)
{
  CreateWorldUpsellScreenController::_registerEventHandlers(this);
}


void __fastcall CreateWorldUpsellScreenController::_createWorldSellingPointList(CreateWorldUpsellScreenController *this)
{
  CreateWorldUpsellScreenController::_createWorldSellingPointList(this);
}


void __fastcall CreateWorldUpsellScreenController::_registerEventHandlers(CreateWorldUpsellScreenController *this)
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
  unsigned int *v18; // r2@14
  signed int v19; // r1@16
  unsigned int *v20; // r2@18
  signed int v21; // r1@20
  unsigned int *v22; // r2@22
  signed int v23; // r1@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  _DWORD *v26; // [sp+4h] [bp-74h]@10
  __int64 v27; // [sp+Ch] [bp-6Ch]@10
  int v28; // [sp+18h] [bp-60h]@10
  _DWORD *v29; // [sp+1Ch] [bp-5Ch]@7
  __int64 v30; // [sp+24h] [bp-54h]@7
  int v31; // [sp+30h] [bp-48h]@7
  _DWORD *v32; // [sp+34h] [bp-44h]@4
  __int64 v33; // [sp+3Ch] [bp-3Ch]@4
  int v34; // [sp+48h] [bp-30h]@4
  _DWORD *v35; // [sp+4Ch] [bp-2Ch]@1
  __int64 v36; // [sp+54h] [bp-24h]@1
  int v37; // [sp+60h] [bp-18h]@1

  v1 = this;
  sub_119C884((void **)&v37, "button.new_world");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v37);
  v3 = operator new(4u);
  LODWORD(v4) = sub_117EA24;
  *v3 = v1;
  HIDWORD(v4) = sub_117E9F8;
  v35 = v3;
  v36 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v35);
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  v5 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  sub_119C884((void **)&v34, "button.new_realm");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v34);
  v7 = operator new(4u);
  LODWORD(v8) = sub_117F1C0;
  *v7 = v1;
  HIDWORD(v8) = sub_117EA5C;
  v32 = v7;
  v33 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v32);
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  v9 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v34 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v31, "button.menu_exit");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v31);
  v11 = operator new(4u);
  LODWORD(v12) = sub_117FACA;
  *v11 = v1;
  HIDWORD(v12) = sub_117FAAC;
  v29 = v11;
  v30 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  v13 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v31 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v28, "button.remove_trial");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v15 = operator new(4u);
  LODWORD(v16) = sub_117FB2E;
  *v15 = v1;
  HIDWORD(v16) = sub_117FB00;
  v26 = v15;
  v27 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  v17 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v28 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
}


void __fastcall CreateWorldUpsellScreenController::_createRealmSellingPointList(CreateWorldUpsellScreenController *this)
{
  CreateWorldUpsellScreenController *v1; // r11@1
  signed int v2; // r1@1
  char *v3; // r0@3
  __int64 v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@6
  int v7; // r5@7
  char *v8; // r6@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  int *v11; // r0@17
  void *v12; // r0@22
  void *v13; // r0@23
  __int64 v14; // r0@24
  int v15; // r1@25
  void *v16; // r0@27
  __int64 v17; // r0@28
  int v18; // r1@29
  void *v19; // r0@31
  __int64 v20; // r0@32
  int v21; // r1@33
  void *v22; // r0@35
  unsigned int *v23; // r2@37
  signed int v24; // r1@39
  unsigned int *v25; // r2@41
  signed int v26; // r1@43
  unsigned int *v27; // r2@45
  signed int v28; // r1@47
  unsigned int *v29; // r2@49
  signed int v30; // r1@51
  unsigned int *v31; // r2@53
  signed int v32; // r1@55
  unsigned int *v33; // r2@57
  signed int v34; // r1@59
  void *v35; // [sp+8h] [bp-58h]@32
  void *v36; // [sp+10h] [bp-50h]@28
  void *v37; // [sp+18h] [bp-48h]@24
  int v38; // [sp+1Ch] [bp-44h]@3
  char *v39; // [sp+20h] [bp-40h]@3
  char *v40; // [sp+24h] [bp-3Ch]@3
  char *v41; // [sp+28h] [bp-38h]@3
  int v42; // [sp+30h] [bp-30h]@1
  void *v43; // [sp+34h] [bp-2Ch]@3

  v1 = this;
  sub_119C884((void **)&v42, "createWorldUpsell.realm.sellPoint1");
  v2 = 2;
  if ( *((_DWORD *)v1 + 116) == 1 )
    v2 = 10;
  Util::toString<int,(void *)0,(void *)0>((void **)&v38, v2);
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v3 = (char *)operator new(4u);
  v39 = v3;
  v41 = v3 + 4;
  v40 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v38,
                  (int)&v39,
                  (int)v3);
  I18n::get((int *)&v43, &v42, (unsigned __int64 *)&v39);
  v4 = *((_QWORD *)v1 + 56);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
      (unsigned __int64 *)((char *)v1 + 444),
      &v43);
    v5 = (int)v43;
  }
  else
    *(_DWORD *)v4 = v43;
    HIDWORD(v4) = &unk_28898CC;
    v43 = &unk_28898CC;
    *((_DWORD *)v1 + 112) = v4 + 4;
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = (int)v40;
  v8 = v39;
  if ( v39 != v40 )
    do
      v11 = (int *)(*(_DWORD *)v8 - 12);
      if ( v11 != &dword_28898C0 )
      {
        v9 = (unsigned int *)(*(_DWORD *)v8 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v11);
      }
      v8 += 4;
    while ( v8 != (char *)v7 );
    v8 = v39;
  if ( v8 )
    operator delete(v8);
  v12 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v38 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v42 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884(&v37, "createWorldUpsell.realm.sellPoint2");
  v14 = *((_QWORD *)v1 + 56);
  if ( (_DWORD)v14 == HIDWORD(v14) )
      &v37);
    v15 = (int)v37;
    *(_DWORD *)v14 = v37;
    HIDWORD(v14) = &unk_28898CC;
    v37 = &unk_28898CC;
    *((_DWORD *)v1 + 112) = v14 + 4;
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v15 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  sub_119C884(&v36, "createWorldUpsell.realm.sellPoint3");
  v17 = *((_QWORD *)v1 + 56);
  if ( (_DWORD)v17 == HIDWORD(v17) )
      &v36);
    v18 = (int)v36;
    *(_DWORD *)v17 = v36;
    HIDWORD(v17) = &unk_28898CC;
    v36 = &unk_28898CC;
    *((_DWORD *)v1 + 112) = v17 + 4;
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v18 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  sub_119C884(&v35, "createWorldUpsell.realm.sellPoint4");
  v20 = *((_QWORD *)v1 + 56);
  if ( (_DWORD)v20 == HIDWORD(v20) )
      &v35);
    v21 = (int)v35;
    *(_DWORD *)v20 = v35;
    HIDWORD(v20) = &unk_28898CC;
    v35 = &unk_28898CC;
    *((_DWORD *)v1 + 112) = v20 + 4;
  v22 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v21 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
}


void __fastcall CreateWorldUpsellScreenController::_registerBindings(CreateWorldUpsellScreenController *this)
{
  CreateWorldUpsellScreenController::_registerBindings(this);
}


void __fastcall CreateWorldUpsellScreenController::_registerBindings(CreateWorldUpsellScreenController *this)
{
  CreateWorldUpsellScreenController *v1; // r4@1
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
  __int64 v17; // r1@21
  __int64 v18; // r1@25
  __int64 v19; // r1@29
  __int64 v20; // r1@33
  __int64 v21; // r1@37
  _DWORD *v22; // r0@41
  __int64 v23; // r1@41
  __int64 v24; // r1@41
  _DWORD *v25; // r0@45
  __int64 v26; // r1@45
  __int64 v27; // r1@45
  __int64 v28; // r1@49
  __int64 v29; // r1@53
  __int64 v30; // r1@57
  __int64 v31; // r1@61
  __int64 v32; // r1@65
  void *v33; // [sp+8h] [bp-2B8h]@65
  __int64 v34; // [sp+10h] [bp-2B0h]@65
  void *v35; // [sp+18h] [bp-2A8h]@65
  void (*v36)(void); // [sp+20h] [bp-2A0h]@65
  int (__fastcall *v37)(int); // [sp+24h] [bp-29Ch]@65
  int v38; // [sp+28h] [bp-298h]@65
  int v39; // [sp+2Ch] [bp-294h]@65
  void *v40; // [sp+30h] [bp-290h]@61
  __int64 v41; // [sp+38h] [bp-288h]@61
  void *v42; // [sp+40h] [bp-280h]@61
  void (*v43)(void); // [sp+48h] [bp-278h]@61
  int (*v44)(); // [sp+4Ch] [bp-274h]@61
  int v45; // [sp+50h] [bp-270h]@61
  int v46; // [sp+54h] [bp-26Ch]@61
  void *v47; // [sp+58h] [bp-268h]@57
  __int64 v48; // [sp+60h] [bp-260h]@57
  void *v49; // [sp+68h] [bp-258h]@57
  void (*v50)(void); // [sp+70h] [bp-250h]@57
  signed int (*v51)(); // [sp+74h] [bp-24Ch]@57
  int v52; // [sp+78h] [bp-248h]@57
  int v53; // [sp+7Ch] [bp-244h]@57
  void *v54; // [sp+80h] [bp-240h]@53
  __int64 v55; // [sp+88h] [bp-238h]@53
  void *v56; // [sp+90h] [bp-230h]@53
  void (*v57)(void); // [sp+98h] [bp-228h]@53
  signed int (__fastcall *v58)(int, char); // [sp+9Ch] [bp-224h]@53
  int v59; // [sp+A0h] [bp-220h]@53
  int v60; // [sp+A4h] [bp-21Ch]@53
  void *v61; // [sp+A8h] [bp-218h]@49
  __int64 v62; // [sp+B0h] [bp-210h]@49
  void *v63; // [sp+B8h] [bp-208h]@49
  void (*v64)(void); // [sp+C0h] [bp-200h]@49
  int (__fastcall *v65)(int, signed int); // [sp+C4h] [bp-1FCh]@49
  int v66; // [sp+C8h] [bp-1F8h]@49
  int v67; // [sp+CCh] [bp-1F4h]@49
  void *v68; // [sp+D0h] [bp-1F0h]@45
  __int64 v69; // [sp+D8h] [bp-1E8h]@45
  _DWORD *v70; // [sp+E0h] [bp-1E0h]@45
  __int64 v71; // [sp+E8h] [bp-1D8h]@45
  int v72; // [sp+F0h] [bp-1D0h]@45
  int v73; // [sp+F4h] [bp-1CCh]@45
  void *v74; // [sp+F8h] [bp-1C8h]@41
  __int64 v75; // [sp+100h] [bp-1C0h]@41
  _DWORD *v76; // [sp+108h] [bp-1B8h]@41
  __int64 v77; // [sp+110h] [bp-1B0h]@41
  int v78; // [sp+118h] [bp-1A8h]@41
  void *v79; // [sp+11Ch] [bp-1A4h]@37
  __int64 v80; // [sp+124h] [bp-19Ch]@37
  void *v81; // [sp+12Ch] [bp-194h]@37
  void (*v82)(void); // [sp+134h] [bp-18Ch]@37
  int (__fastcall *v83)(int); // [sp+138h] [bp-188h]@37
  int v84; // [sp+13Ch] [bp-184h]@37
  int v85; // [sp+140h] [bp-180h]@37
  void *v86; // [sp+144h] [bp-17Ch]@33
  __int64 v87; // [sp+14Ch] [bp-174h]@33
  void *v88; // [sp+154h] [bp-16Ch]@33
  void (*v89)(void); // [sp+15Ch] [bp-164h]@33
  int (*v90)(); // [sp+160h] [bp-160h]@33
  int v91; // [sp+164h] [bp-15Ch]@33
  int v92; // [sp+168h] [bp-158h]@33
  void *v93; // [sp+16Ch] [bp-154h]@29
  __int64 v94; // [sp+174h] [bp-14Ch]@29
  void *v95; // [sp+17Ch] [bp-144h]@29
  void (*v96)(void); // [sp+184h] [bp-13Ch]@29
  signed int (__fastcall *v97)(int, int); // [sp+188h] [bp-138h]@29
  int v98; // [sp+18Ch] [bp-134h]@29
  int v99; // [sp+190h] [bp-130h]@29
  void *v100; // [sp+194h] [bp-12Ch]@25
  __int64 v101; // [sp+19Ch] [bp-124h]@25
  void *v102; // [sp+1A4h] [bp-11Ch]@25
  void (*v103)(void); // [sp+1ACh] [bp-114h]@25
  signed int (__fastcall *v104)(int, char); // [sp+1B0h] [bp-110h]@25
  int v105; // [sp+1B4h] [bp-10Ch]@25
  int v106; // [sp+1B8h] [bp-108h]@25
  void *v107; // [sp+1BCh] [bp-104h]@21
  __int64 v108; // [sp+1C4h] [bp-FCh]@21
  void *v109; // [sp+1CCh] [bp-F4h]@21
  void (*v110)(void); // [sp+1D4h] [bp-ECh]@21
  int (__fastcall *v111)(int, signed int); // [sp+1D8h] [bp-E8h]@21
  int v112; // [sp+1DCh] [bp-E4h]@21
  int v113; // [sp+1E0h] [bp-E0h]@21
  void *v114; // [sp+1E4h] [bp-DCh]@17
  __int64 v115; // [sp+1ECh] [bp-D4h]@17
  _DWORD *v116; // [sp+1F4h] [bp-CCh]@17
  __int64 v117; // [sp+1FCh] [bp-C4h]@17
  int v118; // [sp+204h] [bp-BCh]@17
  int v119; // [sp+208h] [bp-B8h]@17
  void *v120; // [sp+20Ch] [bp-B4h]@13
  __int64 v121; // [sp+214h] [bp-ACh]@13
  _DWORD *v122; // [sp+21Ch] [bp-A4h]@13
  __int64 v123; // [sp+224h] [bp-9Ch]@13
  int v124; // [sp+22Ch] [bp-94h]@13
  void *v125; // [sp+230h] [bp-90h]@9
  __int64 v126; // [sp+238h] [bp-88h]@9
  _DWORD *v127; // [sp+240h] [bp-80h]@9
  __int64 v128; // [sp+248h] [bp-78h]@9
  int v129; // [sp+250h] [bp-70h]@9
  void *v130; // [sp+254h] [bp-6Ch]@5
  __int64 v131; // [sp+25Ch] [bp-64h]@5
  _DWORD *v132; // [sp+264h] [bp-5Ch]@5
  __int64 v133; // [sp+26Ch] [bp-54h]@5
  int v134; // [sp+274h] [bp-4Ch]@5
  void *v135; // [sp+278h] [bp-48h]@1
  __int64 v136; // [sp+280h] [bp-40h]@1
  _DWORD *v137; // [sp+288h] [bp-38h]@1
  __int64 v138; // [sp+290h] [bp-30h]@1
  int v139; // [sp+298h] [bp-28h]@1

  v1 = this;
  v139 = 1259317911;
  v2 = operator new(4u);
  LODWORD(v3) = sub_117FE00;
  *v2 = v1;
  HIDWORD(v3) = sub_117FB64;
  v137 = v2;
  v138 = v3;
  v135 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v136 = v4;
  ScreenController::bindString((int)v1, &v139, (int)&v137, (int)&v135);
  if ( (_DWORD)v136 )
    ((void (*)(void))v136)();
  if ( (_DWORD)v138 )
    ((void (*)(void))v138)();
  v134 = 1861689516;
  v5 = operator new(4u);
  LODWORD(v6) = sub_117FE6C;
  *v5 = v1;
  HIDWORD(v6) = sub_117FE38;
  v132 = v5;
  v133 = v6;
  v130 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v131 = v7;
  ScreenController::bindString((int)v1, &v134, (int)&v132, (int)&v130);
  if ( (_DWORD)v131 )
    ((void (*)(void))v131)();
  if ( (_DWORD)v133 )
    ((void (*)(void))v133)();
  StringHash::StringHash<char [23]>(&v129, (int)"#realm_trial_available");
  v8 = operator new(4u);
  LODWORD(v9) = sub_117FED8;
  *v8 = v1;
  HIDWORD(v9) = sub_117FEA2;
  v127 = v8;
  v128 = v9;
  v125 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v126 = v10;
  ScreenController::bindBool((int)v1, &v129, (int)&v127, (int)&v125);
  if ( (_DWORD)v126 )
    ((void (*)(void))v126)();
  if ( (_DWORD)v128 )
    ((void (*)(void))v128)();
  v124 = -2136277180;
  v11 = operator new(4u);
  LODWORD(v12) = sub_117FF22;
  *v11 = v1;
  HIDWORD(v12) = sub_117FF0E;
  v122 = v11;
  v123 = v12;
  v120 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v121 = v13;
  ScreenController::bindGridSize((int)v1, &v124, (int)&v122, (int)&v120);
  if ( (_DWORD)v121 )
    ((void (*)(void))v121)();
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  v119 = 1879134156;
  v118 = 926825219;
  v14 = operator new(4u);
  LODWORD(v15) = sub_117FF6C;
  *v14 = v1;
  HIDWORD(v15) = sub_117FF58;
  v116 = v14;
  v117 = v15;
  v114 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v115 = v16;
  ScreenController::bindStringForCollection((int)v1, &v119, &v118, (int)&v116, (int)&v114);
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  if ( (_DWORD)v117 )
    ((void (*)(void))v117)();
  v113 = 1879134156;
  v112 = 321233952;
  v109 = operator new(1u);
  v110 = (void (*)(void))sub_117FFB4;
  v111 = sub_117FFA2;
  v107 = operator new(1u);
  LODWORD(v17) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v17) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v108 = v17;
  ScreenController::bindBoolForCollection((int)v1, &v113, &v112, (int)&v109, (int)&v107);
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  if ( v110 )
    v110();
  v106 = 1879134156;
  v105 = -1822530787;
  v102 = operator new(1u);
  v103 = (void (*)(void))sub_117FFEE;
  v104 = sub_117FFE2;
  v100 = operator new(1u);
  LODWORD(v18) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v18) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v101 = v18;
  ScreenController::bindBoolForCollection((int)v1, &v106, &v105, (int)&v102, (int)&v100);
  if ( (_DWORD)v101 )
    ((void (*)(void))v101)();
  if ( v103 )
    v103();
  v99 = 1879134156;
  v98 = -1504087554;
  v95 = operator new(1u);
  v96 = (void (*)(void))sub_1180026;
  v97 = sub_118001C;
  v93 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v94 = v19;
  ScreenController::bindBoolForCollection((int)v1, &v99, &v98, (int)&v95, (int)&v93);
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  if ( v96 )
    v96();
  v92 = 1879134156;
  v91 = 85344642;
  v88 = operator new(1u);
  v89 = (void (*)(void))sub_1180058;
  v90 = sub_1180054;
  v86 = operator new(1u);
  LODWORD(v20) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v20) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v87 = v20;
  ScreenController::bindBoolForCollection((int)v1, &v92, &v91, (int)&v88, (int)&v86);
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  if ( v89 )
    v89();
  v85 = 1879134156;
  v84 = 1369007845;
  v81 = operator new(1u);
  v82 = (void (*)(void))sub_1180094;
  v83 = sub_1180086;
  v79 = operator new(1u);
  LODWORD(v21) = ZNSt14_Function_base13_Base_managerIZN16ScreenController22bindColorForCollectionERK10StringHashS4_RKSt8functionIF5ColoriEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSH_St18_Manager_operation;
  HIDWORD(v21) = ZNSt17_Function_handlerIFbiEZN16ScreenController22bindColorForCollectionERK10StringHashS4_RKSt8functionIF5ColoriEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v80 = v21;
  ScreenController::bindColorForCollection((int)v1, &v85, &v84, (int)&v81, (int)&v79);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  if ( v82 )
    v82();
  v78 = 25373637;
  v22 = operator new(4u);
  LODWORD(v23) = sub_1180108;
  *v22 = v1;
  HIDWORD(v23) = sub_11800F4;
  v76 = v22;
  v77 = v23;
  v74 = operator new(1u);
  LODWORD(v24) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v24) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v75 = v24;
  ScreenController::bindGridSize((int)v1, &v78, (int)&v76, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  v72 = 926825219;
  v73 = -2011360711;
  v25 = operator new(4u);
  LODWORD(v26) = sub_1180152;
  *v25 = v1;
  HIDWORD(v26) = sub_118013E;
  v70 = v25;
  v71 = v26;
  v68 = operator new(1u);
  LODWORD(v27) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v27) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v69 = v27;
  ScreenController::bindStringForCollection((int)v1, &v73, &v72, (int)&v70, (int)&v68);
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  if ( (_DWORD)v71 )
    ((void (*)(void))v71)();
  v66 = 321233952;
  v67 = -2011360711;
  v63 = operator new(1u);
  v64 = (void (*)(void))sub_118019A;
  v65 = sub_1180188;
  v61 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v62 = v28;
  ScreenController::bindBoolForCollection((int)v1, &v67, &v66, (int)&v63, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  if ( v64 )
    v64();
  v59 = -1822530787;
  v60 = -2011360711;
  v56 = operator new(1u);
  v57 = (void (*)(void))sub_11801D4;
  v58 = sub_11801C8;
  v54 = operator new(1u);
  LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v29) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v55 = v29;
  ScreenController::bindBoolForCollection((int)v1, &v60, &v59, (int)&v56, (int)&v54);
  if ( (_DWORD)v55 )
    ((void (*)(void))v55)();
  if ( v57 )
    v57();
  v52 = -1504087554;
  v53 = -2011360711;
  v49 = operator new(1u);
  v50 = (void (*)(void))sub_1180206;
  v51 = sub_1180202;
  v47 = operator new(1u);
  LODWORD(v30) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v30) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v48 = v30;
  ScreenController::bindBoolForCollection((int)v1, &v53, &v52, (int)&v49, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  if ( v50 )
    v50();
  v45 = 85344642;
  v46 = -2011360711;
  v42 = operator new(1u);
  v43 = (void (*)(void))sub_1180238;
  v44 = sub_1180234;
  v40 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v41 = v31;
  ScreenController::bindBoolForCollection((int)v1, &v46, &v45, (int)&v42, (int)&v40);
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  if ( v43 )
    v43();
  v38 = 1369007845;
  v39 = -2011360711;
  v35 = operator new(1u);
  v36 = (void (*)(void))sub_1180274;
  v37 = sub_1180266;
  v33 = operator new(1u);
  LODWORD(v32) = ZNSt14_Function_base13_Base_managerIZN16ScreenController22bindColorForCollectionERK10StringHashS4_RKSt8functionIF5ColoriEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSH_St18_Manager_operation;
  HIDWORD(v32) = ZNSt17_Function_handlerIFbiEZN16ScreenController22bindColorForCollectionERK10StringHashS4_RKSt8functionIF5ColoriEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v34 = v32;
  ScreenController::bindColorForCollection((int)v1, &v39, &v38, (int)&v35, (int)&v33);
  if ( (_DWORD)v34 )
    ((void (*)(void))v34)();
  if ( v36 )
    v36();
}


void __fastcall CreateWorldUpsellScreenController::~CreateWorldUpsellScreenController(CreateWorldUpsellScreenController *this)
{
  CreateWorldUpsellScreenController::~CreateWorldUpsellScreenController(this);
}


unsigned int __fastcall CreateWorldUpsellScreenController::_equalizeSellingPointListSize(CreateWorldUpsellScreenController *this)
{
  CreateWorldUpsellScreenController *v1; // r4@1
  __int64 v2; // r2@1
  unsigned int result; // r0@1
  unsigned int v4; // r1@1
  unsigned int v5; // r2@1
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  __int64 v8; // r0@15
  int v9; // r1@16
  void *v10; // r0@18
  unsigned int *v11; // r2@21
  signed int v12; // r1@23
  __int64 v13; // r0@29
  int v14; // r1@30
  void *v15; // r0@32
  void *v16; // [sp+8h] [bp-40h]@29
  void *v17; // [sp+10h] [bp-38h]@15

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 444);
  result = (*((_QWORD *)this + 54) >> 32) - *((_QWORD *)this + 54);
  v4 = HIDWORD(v2) - v2;
  v5 = (HIDWORD(v2) - (signed int)v2) >> 2;
  if ( v5 != (signed int)result >> 2 )
  {
    if ( v5 <= (signed int)result >> 2 )
    {
      if ( v4 < result )
      {
        do
        {
          sub_119C884(&v16, (const char *)&unk_257BC67);
          v13 = *((_QWORD *)v1 + 56);
          if ( (_DWORD)v13 == HIDWORD(v13) )
          {
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
              (unsigned __int64 *)((char *)v1 + 444),
              &v16);
            v14 = (int)v16;
          }
          else
            *(_DWORD *)v13 = v16;
            HIDWORD(v13) = &unk_28898CC;
            v16 = &unk_28898CC;
            *((_DWORD *)v1 + 112) = v13 + 4;
          v15 = (void *)(v14 - 12);
          if ( (int *)(v14 - 12) != &dword_28898C0 )
            v11 = (unsigned int *)(v14 - 4);
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
              j_j_j_j_j__ZdlPv_9_1(v15);
          result = (*((_QWORD *)v1 + 54) >> 32) - *((_QWORD *)v1 + 54);
        }
        while ( (unsigned int)((*(_QWORD *)((char *)v1 + 444) >> 32) - *(_QWORD *)((char *)v1 + 444)) < result );
      }
    }
    else if ( result < v4 )
      do
        sub_119C884(&v17, (const char *)&unk_257BC67);
        v8 = *(_QWORD *)((char *)v1 + 436);
        if ( (_DWORD)v8 == HIDWORD(v8) )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
            (unsigned __int64 *)v1 + 54,
            &v17);
          v9 = (int)v17;
        else
          *(_DWORD *)v8 = v17;
          HIDWORD(v8) = &unk_28898CC;
          v17 = &unk_28898CC;
          *((_DWORD *)v1 + 109) = v8 + 4;
        v10 = (void *)(v9 - 12);
        if ( (int *)(v9 - 12) != &dword_28898C0 )
          v6 = (unsigned int *)(v9 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v7 = __ldrex(v6);
            while ( __strex(v7 - 1, v6) );
            v7 = (*v6)--;
          if ( v7 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v10);
        result = (*((_QWORD *)v1 + 54) >> 32) - *((_QWORD *)v1 + 54);
      while ( result < (unsigned int)((*(_QWORD *)((char *)v1 + 444) >> 32) - *(_QWORD *)((char *)v1 + 444)) );
  }
  return result;
}


Json::Value *__fastcall CreateWorldUpsellScreenController::addStaticScreenVars(CreateWorldUpsellScreenController *this, Json::Value *a2)
{
  CreateWorldUpsellScreenController *v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+0h] [bp-20h]@1

  v2 = this;
  v3 = Json::Value::operator[](a2, "$show_button");
  Json::Value::Value((Json::Value *)&v5, *((_BYTE *)v2 + 469));
  Json::Value::operator=(v3, (const Json::Value *)&v5);
  return Json::Value::~Value((Json::Value *)&v5);
}


int __fastcall CreateWorldUpsellScreenController::CreateWorldUpsellScreenController(int a1, int a2, int a3, char a4, char a5, int *a6)
{
  int v6; // r9@1
  char v7; // r8@1
  int v8; // r0@1
  int v9; // r6@1
  unsigned int *v10; // r0@2
  unsigned int v11; // r1@4
  int v12; // r5@7
  unsigned int *v13; // r1@8
  unsigned int v14; // r0@10
  unsigned int *v15; // r7@14
  unsigned int v16; // r0@16
  int v17; // r0@21
  int v19; // [sp+8h] [bp-38h]@1
  int v20; // [sp+Ch] [bp-34h]@1

  v6 = a1;
  v19 = *(_DWORD *)a2;
  v7 = a4;
  v8 = *(_DWORD *)(a2 + 4);
  v9 = a3;
  v20 = v8;
  if ( v8 )
  {
    v10 = (unsigned int *)(v8 + 4);
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
  MainMenuScreenController::MainMenuScreenController(v6, (int)&v19);
  v12 = v20;
  if ( v20 )
    v13 = (unsigned int *)(v20 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  *(_DWORD *)v6 = &off_26E181C;
  *(_DWORD *)(v6 + 432) = 0;
  *(_DWORD *)(v6 + 436) = 0;
  *(_DWORD *)(v6 + 440) = 0;
  *(_DWORD *)(v6 + 444) = 0;
  *(_DWORD *)(v6 + 448) = 0;
  *(_DWORD *)(v6 + 452) = 0;
  *(_DWORD *)(v6 + 456) = MainMenuScreenModel::getStoreSupportsSubscriptions(*(MainMenuScreenModel **)(v6 + 424));
  v17 = MainMenuScreenModel::getStoreSupportsSubscriptions(*(MainMenuScreenModel **)(v6 + 424));
  if ( v17 )
    v17 = 2;
  *(_DWORD *)(v6 + 460) = v17;
  *(_DWORD *)(v6 + 464) = v9;
  *(_BYTE *)(v6 + 468) = v7;
  *(_BYTE *)(v6 + 469) = a5;
  sub_119C854((int *)(v6 + 472), a6);
  CreateWorldUpsellScreenController::_createWorldSellingPointList((CreateWorldUpsellScreenController *)v6);
  CreateWorldUpsellScreenController::_createRealmSellingPointList((CreateWorldUpsellScreenController *)v6);
  CreateWorldUpsellScreenController::_equalizeSellingPointListSize((CreateWorldUpsellScreenController *)v6);
  CreateWorldUpsellScreenController::_registerEventHandlers((CreateWorldUpsellScreenController *)v6);
  CreateWorldUpsellScreenController::_registerBindings((CreateWorldUpsellScreenController *)v6);
  return v6;
}
