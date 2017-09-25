

void __fastcall PortfolioScreenController::_registerBindings(PortfolioScreenController *this)
{
  PortfolioScreenController::_registerBindings(this);
}


void __fastcall PortfolioScreenController::_deletePhoto(PortfolioScreenController *this, unsigned int a2)
{
  PortfolioScreenController::_deletePhoto(this, a2);
}


int __fastcall PortfolioScreenController::_buildLastPage(int result)
{
  unsigned int v1; // r1@1
  int v2; // r3@1
  int v3; // r1@3
  int v4; // r2@3

  v1 = -1431655765 * ((signed int)((*(_QWORD *)(result + 432) >> 32) - *(_QWORD *)(result + 432)) >> 2);
  v2 = v1 >> 1;
  if ( !(v1 & 1) )
    v2 = (v1 >> 1) - 1;
  *(_DWORD *)(result + 448) = v2;
  v3 = *(_DWORD *)(result + 444);
  v4 = *(_DWORD *)(result + 444);
  if ( v3 <= 0 )
    v4 = 0;
  if ( v2 < v3 )
    v4 = v2;
  *(_DWORD *)(result + 444) = v4;
  return result;
}


void __fastcall PortfolioScreenController::_deletePhoto(PortfolioScreenController *this, unsigned int a2)
{
  PortfolioScreenController *v2; // r4@1
  unsigned int v3; // r5@1
  const void **v4; // r0@2
  int v5; // r6@2
  void *v6; // r0@2
  unsigned int v7; // r0@5
  int v8; // r0@5
  int v9; // r2@5
  int v10; // r3@5
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  unsigned int *v13; // r1@15
  signed int v14; // r0@17
  int v15; // [sp+4h] [bp-3Ch]@3
  int v16; // [sp+8h] [bp-38h]@3
  char v17; // [sp+Ch] [bp-34h]@3
  void (*v18)(void); // [sp+14h] [bp-2Ch]@3
  int v19; // [sp+20h] [bp-20h]@2

  v2 = this;
  v3 = a2;
  if ( -1431655765 * ((signed int)((*((_QWORD *)this + 54) >> 32) - *((_QWORD *)this + 54)) >> 2) > a2 )
  {
    MinecraftScreenModel::fetchScreenshotsPath((MinecraftScreenModel *)&v19, *((_DWORD *)this + 106));
    v4 = sub_21E72F0((const void **)&v19, (const void **)(*((_DWORD *)v2 + 108) + 12 * v3));
    v5 = (int)*v4;
    *v4 = &unk_28898CC;
    v6 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v19 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    v15 = v5;
    v16 = *(_DWORD *)(v5 - 12);
    Core::FileSystem::deleteFile((int)&v17, (__int64 *)&v15);
    if ( v18 )
      v18();
    std::vector<PortfolioScreenController::PhotoRecord,std::allocator<PortfolioScreenController::PhotoRecord>>::_M_erase(
      (int)v2 + 432,
      *((_DWORD *)v2 + 108) + 12 * v3);
    v7 = -1431655765 * ((signed int)((*((_QWORD *)v2 + 54) >> 32) - *((_QWORD *)v2 + 54)) >> 2);
    v8 = (v7 & 1) + (v7 >> 1) - 1;
    *((_DWORD *)v2 + 112) = v8;
    v9 = *((_DWORD *)v2 + 111);
    v10 = *((_DWORD *)v2 + 111);
    if ( v9 <= 0 )
      v10 = 0;
    if ( v8 < v9 )
      v10 = v8;
    *((_DWORD *)v2 + 111) = v10;
    if ( (int *)(v5 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v5 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9((void *)(v5 - 12));
  }
}


signed int __fastcall PortfolioScreenController::_isStillValid(PortfolioScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  signed int result; // r0@2

  v1 = this;
  if ( MinecraftScreenModel::isPlayerValid(*((MinecraftScreenModel **)this + 106)) == 1 )
    result = MinecraftScreenController::_isStillValid(v1);
  else
    result = 0;
  return result;
}


signed int __fastcall PortfolioScreenController::_handlePortfolioPageBack(PortfolioScreenController *this, UIPropertyBag *a2)
{
  PortfolioScreenController *v2; // r4@1
  __int64 v3; // r0@1
  int v4; // r2@1
  signed int result; // r0@5

  v2 = this;
  PortfolioScreenController::_saveCaptions(this);
  v3 = *(_QWORD *)((char *)v2 + 444);
  LODWORD(v3) = v3 - 1;
  v4 = v3;
  if ( (signed int)v3 <= 0 )
    v4 = 0;
  if ( SHIDWORD(v3) < (signed int)v3 )
    v4 = HIDWORD(v3);
  result = 1;
  *((_DWORD *)v2 + 111) = v4;
  return result;
}


char *__fastcall PortfolioScreenController::_saveCaptions(PortfolioScreenController *this)
{
  PortfolioScreenController *v1; // r9@1
  int v2; // r5@1
  int v3; // r11@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  JpegCommentWriter *v12; // r7@38
  const void **v13; // r0@38
  void *v14; // r0@38
  char *v15; // r0@39
  void *v16; // r0@40
  __int64 v17; // r0@41
  int v18; // r8@41
  const char *v19; // r6@42
  size_t v20; // r0@42
  size_t v21; // r7@42
  int v22; // r0@43
  void *v23; // r0@49
  JpegCommentWriter *v24; // r0@53
  char *result; // r0@54
  const char *v26; // [sp+10h] [bp-AA0h]@2
  int v27; // [sp+14h] [bp-A9Ch]@15
  int v28; // [sp+18h] [bp-A98h]@3
  int v29; // [sp+1Ch] [bp-A94h]@11
  char *v30; // [sp+20h] [bp-A90h]@7
  char v31; // [sp+24h] [bp-A8Ch]@38
  JpegCommentWriter *v32; // [sp+60h] [bp-A50h]@1
  const char *v33[3]; // [sp+68h] [bp-A48h]@41
  int v34; // [sp+78h] [bp-A38h]@2
  char v35; // [sp+7Ch] [bp-A34h]@42
  int v36; // [sp+47Ch] [bp-634h]@42
  char v37[1536]; // [sp+484h] [bp-62Ch]@41
  int v38; // [sp+A84h] [bp-2Ch]@41
  RakNet *v39; // [sp+A88h] [bp-28h]@1

  v1 = this;
  v39 = _stack_chk_guard;
  MinecraftScreenModel::createJpegCommentWriter((MinecraftScreenModel *)&v32, *((_DWORD *)this + 106));
  *((_DWORD *)v1 + 113) = 0;
  v3 = *((_QWORD *)v1 + 54) >> 32;
  v2 = *((_QWORD *)v1 + 54);
  if ( v2 != v3 )
  {
    v26 = (const char *)((unsigned int)&v34 | 4);
    do
    {
      if ( *(_DWORD *)(*(_DWORD *)(v2 + 4) - 12) )
        ++*((_DWORD *)v1 + 113);
      if ( *(_DWORD *)(v2 + 8) == 2 )
      {
        MinecraftScreenModel::getScreenContext_DEPRECATED_DO_NOT_USE(
          (MinecraftScreenModel *)&v31,
          *((float *)v1 + 106),
          0);
        v12 = v32;
        MinecraftScreenModel::fetchScreenshotsPath((MinecraftScreenModel *)&v29, *((_DWORD *)v1 + 106));
        v13 = sub_21E72F0((const void **)&v29, (const void **)v2);
        v30 = (char *)*v13;
        *v13 = &unk_28898CC;
        MinecraftScreenModel::filterProfanityFromString((int)&v28, *((_DWORD *)v1 + 106));
        JpegCommentWriter::execute((int)v12, (int)&v31, (int *)&v30, &v28, (int)&Color::BLACK);
        v14 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
        {
          v4 = (unsigned int *)(v28 - 4);
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
            j_j_j_j__ZdlPv_9(v14);
        }
        v15 = v30 - 12;
        if ( (int *)(v30 - 12) != &dword_28898C0 )
          v6 = (unsigned int *)(v30 - 4);
              v7 = __ldrex(v6);
            while ( __strex(v7 - 1, v6) );
            v7 = (*v6)--;
          if ( v7 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        v16 = (void *)(v29 - 12);
        if ( (int *)(v29 - 12) != &dword_28898C0 )
          v8 = (unsigned int *)(v29 - 4);
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        LODWORD(v17) = *(_DWORD *)v2;
        v18 = *((_DWORD *)v1 + 106);
        HIDWORD(v17) = *(_DWORD *)(*(_DWORD *)v2 - 12);
        *(_QWORD *)v33 = v17;
        Core::SplitPathT<1024u,64u>::SplitPathT((int)v37, v33);
        if ( v38 )
          v19 = *(const char **)&v37[8 * v38 + 1016];
          v34 = 1023;
          v35 = 0;
          v36 = 0;
          v20 = strlen(v19);
          v21 = v20;
          if ( v20 < 0x400 )
            if ( v20 )
              _aeabi_memcpy(v26, v19, v20);
            *((_BYTE *)&v34 + v21 + 4) = 0;
            v22 = v36 + v21;
            v22 = 0;
            v35 = 0;
          v36 = v22;
        else
          _aeabi_memclr8(&v34, 1028);
        sub_21E94B4((void **)&v27, v26);
        MinecraftScreenModel::setValidScreenshot(v18, &v27);
        v23 = (void *)(v27 - 12);
        if ( (int *)(v27 - 12) != &dword_28898C0 )
          v10 = (unsigned int *)(v27 - 4);
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        *(_DWORD *)(v2 + 8) = 1;
      }
      v2 += 12;
    }
    while ( v2 != v3 );
  }
  if ( v32 )
    v24 = JpegCommentWriter::~JpegCommentWriter(v32);
    operator delete((void *)v24);
  v32 = 0;
  result = (char *)(_stack_chk_guard - v39);
  if ( _stack_chk_guard != v39 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall PortfolioScreenController::_registerEventHandlers(PortfolioScreenController *this)
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
  _DWORD *v23; // r0@16
  __int64 v24; // r1@16
  void *v25; // r0@18
  int v26; // r5@19
  _DWORD *v27; // r0@19
  __int64 v28; // r1@19
  void *v29; // r0@21
  unsigned int *v30; // r2@23
  signed int v31; // r1@25
  unsigned int *v32; // r2@27
  signed int v33; // r1@29
  unsigned int *v34; // r2@31
  signed int v35; // r1@33
  unsigned int *v36; // r2@35
  signed int v37; // r1@37
  unsigned int *v38; // r2@39
  signed int v39; // r1@41
  unsigned int *v40; // r2@43
  signed int v41; // r1@45
  unsigned int *v42; // r2@47
  signed int v43; // r1@49
  _DWORD *v44; // [sp+4h] [bp-BCh]@19
  __int64 v45; // [sp+Ch] [bp-B4h]@19
  int v46; // [sp+18h] [bp-A8h]@19
  _DWORD *v47; // [sp+1Ch] [bp-A4h]@16
  __int64 v48; // [sp+24h] [bp-9Ch]@16
  int v49; // [sp+30h] [bp-90h]@16
  _DWORD *v50; // [sp+34h] [bp-8Ch]@13
  __int64 v51; // [sp+3Ch] [bp-84h]@13
  int v52; // [sp+48h] [bp-78h]@13
  _DWORD *v53; // [sp+4Ch] [bp-74h]@10
  __int64 v54; // [sp+54h] [bp-6Ch]@10
  int v55; // [sp+60h] [bp-60h]@10
  _DWORD *v56; // [sp+64h] [bp-5Ch]@7
  __int64 v57; // [sp+6Ch] [bp-54h]@7
  int v58; // [sp+78h] [bp-48h]@7
  _DWORD *v59; // [sp+7Ch] [bp-44h]@4
  __int64 v60; // [sp+84h] [bp-3Ch]@4
  int v61; // [sp+90h] [bp-30h]@4
  _DWORD *v62; // [sp+94h] [bp-2Ch]@1
  __int64 v63; // [sp+9Ch] [bp-24h]@1
  int v64; // [sp+A8h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v64, "button.portfolio_export");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v64);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11F4832;
  *v3 = v1;
  HIDWORD(v4) = sub_11F4824;
  v62 = v3;
  v63 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v62);
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  v5 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v64 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    }
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v61, "button.portfolio_delete_photo_left");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v61);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11F487C;
  *v7 = v1;
  HIDWORD(v8) = sub_11F4868;
  v59 = v7;
  v60 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  v9 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v61 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v58, "button.portfolio_delete_photo_right");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v58);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11F48CA;
  *v11 = v1;
  HIDWORD(v12) = sub_11F48B2;
  v56 = v11;
  v57 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v56);
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  v13 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v58 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v55, "button.portfolio_page_prev");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v55);
  v15 = operator new(4u);
  LODWORD(v16) = sub_11F4928;
  *v15 = v1;
  HIDWORD(v16) = sub_11F4900;
  v53 = v15;
  v54 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v53);
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  v17 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v55 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v52, "button.portfolio_page_next");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v52);
  v19 = operator new(4u);
  LODWORD(v20) = sub_11F4984;
  *v19 = v1;
  HIDWORD(v20) = sub_11F495E;
  v50 = v19;
  v51 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v50);
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  v21 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v52 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v49, "button.no_photo_alert_ok");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v49);
  v23 = operator new(4u);
  LODWORD(v24) = sub_11F49CC;
  *v23 = v1;
  HIDWORD(v24) = sub_11F49BA;
  v47 = v23;
  v48 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v25 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v49 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v46, "#text_box_photos");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v46);
  v27 = operator new(4u);
  LODWORD(v28) = sub_11F4C08;
  *v27 = v1;
  HIDWORD(v28) = sub_11F4A04;
  v44 = v27;
  v45 = v28;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v26, (int)&v44);
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  v29 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v46 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
}


signed int __fastcall PortfolioScreenController::_handlePortfolioExport(PortfolioScreenController *this, UIPropertyBag *a2)
{
  PortfolioScreenController *v2; // r5@1
  void *v3; // r0@1
  int *v4; // r10@2
  int *i; // r11@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int v8; // r0@12
  int v9; // r2@12
  int v10; // r0@12
  char *v11; // r1@13
  char *v12; // r0@15
  __int64 v13; // kr08_8@17
  unsigned int *v14; // r0@18
  unsigned int v15; // r1@20
  __int64 v16; // kr10_8@23
  int v17; // r8@23
  unsigned int *v18; // r0@24
  unsigned int v19; // r1@26
  _DWORD *v20; // r0@29
  unsigned int *v21; // r2@30
  unsigned int v22; // r3@32
  __int64 v23; // r2@35
  unsigned int *v24; // r1@38
  unsigned int v25; // r0@40
  void *v26; // r0@45
  void *v27; // r0@46
  unsigned int *v28; // r1@48
  unsigned int v29; // r0@50
  char **v30; // r4@55
  char **v31; // r6@55
  unsigned int *v32; // r2@57
  signed int v33; // r1@59
  int *v34; // r0@65
  unsigned int *v36; // r2@73
  signed int v37; // r1@75
  unsigned int *v38; // r2@77
  signed int v39; // r1@79
  unsigned int *v40; // r2@81
  signed int v41; // r1@83
  _DWORD *v42; // [sp+Ch] [bp-88Ch]@35
  void (*v43)(void); // [sp+14h] [bp-884h]@29
  int v44; // [sp+20h] [bp-878h]@23
  int v45; // [sp+28h] [bp-870h]@23
  char *v46; // [sp+2Ch] [bp-86Ch]@12
  int v47; // [sp+30h] [bp-868h]@1
  int v48; // [sp+34h] [bp-864h]@1
  int v49; // [sp+38h] [bp-860h]@1
  char **v50; // [sp+3Ch] [bp-85Ch]@1
  char **v51; // [sp+40h] [bp-858h]@1
  char **v52; // [sp+44h] [bp-854h]@1
  int *v53; // [sp+48h] [bp-850h]@12
  int v54; // [sp+4Ch] [bp-84Ch]@12
  int v55; // [sp+50h] [bp-848h]@12
  int v56; // [sp+54h] [bp-844h]@12
  char v57; // [sp+60h] [bp-838h]@12
  int v58; // [sp+64h] [bp-834h]@12
  char v59; // [sp+468h] [bp-430h]@1
  int v60; // [sp+46Ch] [bp-42Ch]@12
  int v61; // [sp+86Ch] [bp-2Ch]@12
  RakNet *v62; // [sp+870h] [bp-28h]@1

  v2 = this;
  v62 = _stack_chk_guard;
  PortfolioScreenController::_saveCaptions(this);
  v50 = 0;
  v51 = 0;
  v52 = 0;
  std::vector<std::string,std::allocator<std::string>>::reserve(
    (int)&v50,
    -1431655765 * ((signed int)((*((_QWORD *)v2 + 54) >> 32) - *((_QWORD *)v2 + 54)) >> 2));
  MinecraftScreenModel::fetchScreenshotsPath((MinecraftScreenModel *)&v47, *((_DWORD *)v2 + 106));
  v48 = v47;
  v49 = *(_DWORD *)(v47 - 12);
  File::cleanPath((int)&v59, (__int64 *)&v48);
  v3 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
  {
    v36 = (unsigned int *)(v47 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (int *)(*((_QWORD *)v2 + 54) >> 32);
  for ( i = (int *)*((_QWORD *)v2 + 54); i != v4; i += 3 )
    v8 = *i;
    v9 = *(_DWORD *)(*i - 12);
    v53 = &v60;
    v54 = v61;
    v55 = v8;
    v56 = v9;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v57, (int)&v53, 2);
    sub_21E94B4((void **)&v46, (const char *)&v58);
    v10 = (int)v51;
    if ( v51 == v52 )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)&v50,
        &v46);
      v11 = v46;
      *v51 = v46;
      v11 = (char *)&unk_28898CC;
      v46 = (char *)&unk_28898CC;
      v51 = (char **)(v10 + 4);
    v12 = v11 - 12;
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v11 - 4);
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
        j_j_j_j__ZdlPv_9(v12);
  v13 = *((_QWORD *)v2 + 53);
  if ( HIDWORD(v13) )
    v14 = (unsigned int *)(HIDWORD(v13) + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  v16 = *((_QWORD *)v2 + 54);
  v17 = *((_DWORD *)v2 + 113);
  sub_21E94B4((void **)&v45, "FileBrowser.Rift.ExportPortfolio");
  sub_21E94B4((void **)&v44, "item.portfolio.name");
    v18 = (unsigned int *)(HIDWORD(v13) + 8);
        v19 = __ldrex(v18);
      while ( __strex(v19 + 1, v18) );
      ++*v18;
  v43 = 0;
  v20 = operator new(0x10u);
  *(_QWORD *)v20 = v13;
    v21 = (unsigned int *)(HIDWORD(v13) + 8);
        v22 = __ldrex(v21);
      while ( __strex(v22 + 1, v21) );
      ++*v21;
  HIDWORD(v23) = sub_11F570C;
  v20[2] = -1431655765 * ((HIDWORD(v16) - (signed int)v16) >> 2);
  v20[3] = v17;
  LODWORD(v23) = sub_11F5860;
  v42 = v20;
  *(_QWORD *)&v43 = v23;
  MinecraftScreenController::exportScreenshotsToZipFile((int)v2, (__int64 *)&v50, &v45, (int **)&v44, (int)&v42);
  if ( v43 )
    v43();
    v24 = (unsigned int *)(HIDWORD(v13) + 8);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v13) + 12))(HIDWORD(v13));
  v26 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v44 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v45 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
    v28 = (unsigned int *)(HIDWORD(v13) + 8);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
  v31 = v51;
  v30 = v50;
  if ( v50 != v51 )
    do
      v34 = (int *)(*v30 - 12);
      if ( v34 != &dword_28898C0 )
        v32 = (unsigned int *)(*v30 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
        }
        else
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      ++v30;
    while ( v30 != v31 );
    v30 = v50;
  if ( v30 )
    operator delete(v30);
  if ( _stack_chk_guard != v62 )
    _stack_chk_fail(_stack_chk_guard - v62);
  return 1;
}


PortfolioScreenController *__fastcall PortfolioScreenController::~PortfolioScreenController(PortfolioScreenController *this)
{
  PortfolioScreenController *v1; // r11@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20

  v1 = this;
  *(_DWORD *)this = &off_26E2CD4;
  *(_QWORD *)&v2 = *((_QWORD *)this + 54);
  if ( v2 != v3 )
  {
    do
    {
      v8 = *(_DWORD *)(v2 + 4);
      v9 = (void *)(v8 - 12);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = (int *)(*(_DWORD *)v2 - 12);
      if ( v10 != &dword_28898C0 )
        v6 = (unsigned int *)(*(_DWORD *)v2 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v2 += 12;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 108);
  }
  if ( v2 )
    operator delete((void *)v2);
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  return v1;
}


signed int __fastcall PortfolioScreenController::_handlePhotoDeleteRightPage(PortfolioScreenController *this, UIPropertyBag *a2)
{
  PortfolioScreenController::_deletePhoto(this, 2 * *((_DWORD *)this + 111) | 1);
  return 1;
}


void __fastcall PortfolioScreenController::~PortfolioScreenController(PortfolioScreenController *this)
{
  PortfolioScreenController::~PortfolioScreenController(this);
}


void __fastcall PortfolioScreenController::_registerEventHandlers(PortfolioScreenController *this)
{
  PortfolioScreenController::_registerEventHandlers(this);
}


int __fastcall PortfolioScreenController::addStaticScreenVars(PortfolioScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  PortfolioScreenController *v3; // r5@1
  int v4; // r6@1
  void *v5; // r0@1
  int v6; // r6@2
  bool v7; // r1@2
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  int v11; // [sp+0h] [bp-48h]@4
  int v12; // [sp+14h] [bp-34h]@1
  unsigned int v13; // [sp+18h] [bp-30h]@1
  int v14; // [sp+1Ch] [bp-2Ch]@1
  char v15; // [sp+20h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$screenshot_file_system");
  ResourceUtil::stringFromPath(&v12, 9);
  sub_21E91E0((void **)&v14, v13, v12);
  Json::Value::Value((int)&v15, (const char **)&v14);
  Json::Value::operator=(v4, (const Json::Value *)&v15);
  Json::Value::~Value((Json::Value *)&v15);
  v5 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v14 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = Json::Value::operator[](v2, "$no_pick_alert_visible");
  v7 = 0;
  if ( (unsigned int)*((_QWORD *)v3 + 54) == *((_QWORD *)v3 + 54) >> 32 )
    v7 = 1;
  Json::Value::Value((Json::Value *)&v11, v7);
  Json::Value::operator=(v6, (const Json::Value *)&v11);
  Json::Value::~Value((Json::Value *)&v11);
  return ScreenController::addStaticScreenVars(v3, v2);
}


signed int __fastcall PortfolioScreenController::_handlePhotoDeleteLeftPage(PortfolioScreenController *this, UIPropertyBag *a2)
{
  PortfolioScreenController::_deletePhoto(this, 2 * *((_DWORD *)this + 111));
  return 1;
}


void __fastcall PortfolioScreenController::_buildPhotoRecords(PortfolioScreenController *this)
{
  PortfolioScreenController *v1; // r8@1
  char *v2; // r9@1
  __int64 v3; // kr00_8@1
  int v4; // r5@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  int v9; // r1@19
  void *v10; // r0@19
  int *v11; // r0@20
  __int64 i; // r6@22
  __int64 v13; // kr08_8@23
  unsigned int v14; // r5@27 OVERLAPPED
  int *v15; // r6@27 OVERLAPPED
  int v16; // r7@29
  int v17; // r6@30
  bool v18; // zf@31
  unsigned int v19; // r0@35
  int v20; // r0@35
  int v21; // r1@35
  int v22; // r3@35
  char *v23; // r0@39
  char *v24; // r0@40
  void *v25; // r4@41
  void *v26; // r6@41
  unsigned int *v27; // r2@43
  signed int v28; // r1@45
  int *v29; // r0@51
  unsigned int *v30; // r2@57
  signed int v31; // r1@59
  unsigned int *v32; // r2@61
  signed int v33; // r1@63
  char *v34; // [sp+0h] [bp-40h]@22
  char *v35; // [sp+4h] [bp-3Ch]@22
  int v36; // [sp+8h] [bp-38h]@22
  __int64 v37; // [sp+Ch] [bp-34h]@22
  int v38; // [sp+14h] [bp-2Ch]@22

  v1 = this;
  v2 = (char *)this + 432;
  v3 = *((_QWORD *)this + 54);
  if ( HIDWORD(v3) != (_DWORD)v3 )
  {
    v4 = *((_QWORD *)this + 54);
    do
    {
      v9 = *(_DWORD *)(v4 + 4);
      v10 = (void *)(v9 - 12);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v11 = (int *)(*(_DWORD *)v4 - 12);
      if ( v11 != &dword_28898C0 )
        v7 = (unsigned int *)(*(_DWORD *)v4 - 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v4 += 12;
    }
    while ( v4 != HIDWORD(v3) );
  }
  *((_DWORD *)v1 + 109) = v3;
  std::vector<PortfolioScreenController::PhotoRecord,std::allocator<PortfolioScreenController::PhotoRecord>>::reserve(
    (int)v2,
    0x80u);
  v37 = 0LL;
  v38 = 0;
  MinecraftScreenModel::fetchScreenshots(*((_DWORD *)v1 + 106), &v37);
  v34 = (char *)&unk_28898CC;
  v35 = (char *)&unk_28898CC;
  v36 = 0;
  for ( i = v37; HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
    EntityInteraction::setInteractText((int *)&v34, (int *)i);
    v13 = *(_QWORD *)((char *)v1 + 436);
    if ( (_DWORD)v13 == HIDWORD(v13) )
      std::vector<PortfolioScreenController::PhotoRecord,std::allocator<PortfolioScreenController::PhotoRecord>>::_M_emplace_back_aux<PortfolioScreenController::PhotoRecord&>(
        v2,
        (int)&v34);
    else
      sub_21E8AF4((int *)v13, (int *)&v34);
      sub_21E8AF4((int *)(v13 + 4), (int *)&v35);
      *(_DWORD *)(v13 + 8) = v36;
      *((_DWORD *)v1 + 109) += 12;
  *(_QWORD *)&v14 = *((_QWORD *)v1 + 54);
  if ( (int *)v14 != v15 )
    std::__introsort_loop<__gnu_cxx::__normal_iterator<PortfolioScreenController::PhotoRecord *,std::vector<PortfolioScreenController::PhotoRecord,std::allocator<PortfolioScreenController::PhotoRecord>>>,int,__gnu_cxx::__ops::_Iter_less_iter>(
      v14,
      v15,
      2 * (31 - __clz(-1431655765 * ((signed int)((signed int)v15 - v14) >> 2))));
    if ( (signed int)((signed int)v15 - v14) < 193 )
      std::__insertion_sort<__gnu_cxx::__normal_iterator<PortfolioScreenController::PhotoRecord *,std::vector<PortfolioScreenController::PhotoRecord,std::allocator<PortfolioScreenController::PhotoRecord>>>,__gnu_cxx::__ops::_Iter_less_iter>(
        (_DWORD *)v14,
        v15);
      v16 = v14 + 192;
        (_DWORD *)(v14 + 192));
      if ( (int *)(v14 + 192) != v15 )
        v17 = (int)(v15 - 48);
        do
          std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<PortfolioScreenController::PhotoRecord *,std::vector<PortfolioScreenController::PhotoRecord,std::allocator<PortfolioScreenController::PhotoRecord>>>,__gnu_cxx::__ops::_Val_less_iter>(v16);
          v16 = v14 + 204;
          v18 = v17 == v14 + 12;
          v14 += 12;
        while ( !v18 );
  v19 = -1431655765 * ((signed int)((*((_QWORD *)v1 + 54) >> 32) - *((_QWORD *)v1 + 54)) >> 2);
  v20 = (v19 & 1) + (v19 >> 1) - 1;
  *((_DWORD *)v1 + 112) = v20;
  v21 = *((_DWORD *)v1 + 111);
  v22 = *((_DWORD *)v1 + 111);
  if ( v21 <= 0 )
    v22 = 0;
  if ( v20 < v21 )
    v22 = v20;
  *((_DWORD *)v1 + 111) = v22;
  v23 = v35 - 12;
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v34 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v26 = (void *)HIDWORD(v37);
  v25 = (void *)v37;
  if ( (_DWORD)v37 != HIDWORD(v37) )
      v29 = (int *)(*(_DWORD *)v25 - 12);
      if ( v29 != &dword_28898C0 )
        v27 = (unsigned int *)(*(_DWORD *)v25 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      v25 = (char *)v25 + 4;
    while ( v25 != v26 );
    v25 = (void *)v37;
  if ( v25 )
    operator delete(v25);
}


void __fastcall PortfolioScreenController::_registerBindings(PortfolioScreenController *this)
{
  PortfolioScreenController *v1; // r4@1
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
  _DWORD *v20; // r0@25
  __int64 v21; // r1@25
  __int64 v22; // r1@25
  _DWORD *v23; // r0@29
  __int64 v24; // r1@29
  __int64 v25; // r1@29
  _DWORD *v26; // r0@33
  __int64 v27; // r1@33
  __int64 v28; // r1@33
  _DWORD *v29; // r0@37
  __int64 v30; // r1@37
  __int64 v31; // r1@37
  __int64 v32; // r1@41
  void *v33; // [sp+8h] [bp-1B0h]@41
  __int64 v34; // [sp+10h] [bp-1A8h]@41
  void *v35; // [sp+18h] [bp-1A0h]@41
  void (*v36)(void); // [sp+20h] [bp-198h]@41
  int (__fastcall *v37)(int); // [sp+24h] [bp-194h]@41
  int v38; // [sp+28h] [bp-190h]@41
  void *v39; // [sp+2Ch] [bp-18Ch]@37
  __int64 v40; // [sp+34h] [bp-184h]@37
  _DWORD *v41; // [sp+3Ch] [bp-17Ch]@37
  __int64 v42; // [sp+44h] [bp-174h]@37
  int v43; // [sp+4Ch] [bp-16Ch]@37
  int v44; // [sp+50h] [bp-168h]@37
  void *v45; // [sp+54h] [bp-164h]@33
  __int64 v46; // [sp+5Ch] [bp-15Ch]@33
  _DWORD *v47; // [sp+64h] [bp-154h]@33
  __int64 v48; // [sp+6Ch] [bp-14Ch]@33
  int v49; // [sp+74h] [bp-144h]@33
  void *v50; // [sp+78h] [bp-140h]@29
  __int64 v51; // [sp+80h] [bp-138h]@29
  _DWORD *v52; // [sp+88h] [bp-130h]@29
  __int64 v53; // [sp+90h] [bp-128h]@29
  int v54; // [sp+98h] [bp-120h]@29
  void *v55; // [sp+9Ch] [bp-11Ch]@25
  __int64 v56; // [sp+A4h] [bp-114h]@25
  _DWORD *v57; // [sp+ACh] [bp-10Ch]@25
  __int64 v58; // [sp+B4h] [bp-104h]@25
  int v59; // [sp+BCh] [bp-FCh]@25
  void *v60; // [sp+C0h] [bp-F8h]@21
  __int64 v61; // [sp+C8h] [bp-F0h]@21
  _DWORD *v62; // [sp+D0h] [bp-E8h]@21
  __int64 v63; // [sp+D8h] [bp-E0h]@21
  int v64; // [sp+E0h] [bp-D8h]@21
  void *v65; // [sp+E4h] [bp-D4h]@17
  __int64 v66; // [sp+ECh] [bp-CCh]@17
  _DWORD *v67; // [sp+F4h] [bp-C4h]@17
  __int64 v68; // [sp+FCh] [bp-BCh]@17
  int v69; // [sp+104h] [bp-B4h]@17
  void *v70; // [sp+108h] [bp-B0h]@13
  __int64 v71; // [sp+110h] [bp-A8h]@13
  _DWORD *v72; // [sp+118h] [bp-A0h]@13
  __int64 v73; // [sp+120h] [bp-98h]@13
  int v74; // [sp+128h] [bp-90h]@13
  int v75; // [sp+12Ch] [bp-8Ch]@13
  void *v76; // [sp+130h] [bp-88h]@9
  __int64 v77; // [sp+138h] [bp-80h]@9
  _DWORD *v78; // [sp+140h] [bp-78h]@9
  __int64 v79; // [sp+148h] [bp-70h]@9
  int v80; // [sp+150h] [bp-68h]@9
  int v81; // [sp+154h] [bp-64h]@9
  void *v82; // [sp+158h] [bp-60h]@5
  __int64 v83; // [sp+160h] [bp-58h]@5
  _DWORD *v84; // [sp+168h] [bp-50h]@5
  __int64 v85; // [sp+170h] [bp-48h]@5
  int v86; // [sp+178h] [bp-40h]@5
  int v87; // [sp+17Ch] [bp-3Ch]@5
  void *v88; // [sp+180h] [bp-38h]@1
  __int64 v89; // [sp+188h] [bp-30h]@1
  _DWORD *v90; // [sp+190h] [bp-28h]@1
  __int64 v91; // [sp+198h] [bp-20h]@1
  int v92; // [sp+1A0h] [bp-18h]@1
  int v93; // [sp+1A4h] [bp-14h]@1

  v1 = this;
  v92 = 1576164227;
  v93 = -527924048;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11F4E20;
  *v2 = v1;
  HIDWORD(v3) = sub_11F4C40;
  v90 = v2;
  v91 = v3;
  v88 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v89 = v4;
  ScreenController::bindStringForCollection((int)v1, &v93, &v92, (int)&v90, (int)&v88);
  if ( (_DWORD)v89 )
    ((void (*)(void))v89)();
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
  v87 = -527924048;
  StringHash::StringHash<char [27]>(&v86, (int)"#photo_page_item_name_left");
  v5 = operator new(4u);
  LODWORD(v6) = sub_11F511C;
  *v5 = v1;
  HIDWORD(v6) = sub_11F4E58;
  v84 = v5;
  v85 = v6;
  v82 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v83 = v7;
  ScreenController::bindStringForCollection((int)v1, &v87, &v86, (int)&v84, (int)&v82);
  if ( (_DWORD)v83 )
    ((void (*)(void))v83)();
  if ( (_DWORD)v85 )
    ((void (*)(void))v85)();
  v81 = -527924048;
  StringHash::StringHash<char [28]>(&v80, (int)"#photo_page_item_name_right");
  v8 = operator new(4u);
  LODWORD(v9) = sub_11F5418;
  *v8 = v1;
  HIDWORD(v9) = sub_11F5154;
  v78 = v8;
  v79 = v9;
  v76 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v77 = v10;
  ScreenController::bindStringForCollection((int)v1, &v81, &v80, (int)&v78, (int)&v76);
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  if ( (_DWORD)v79 )
    ((void (*)(void))v79)();
  v75 = -527924048;
  v74 = -795689381;
  v11 = operator new(4u);
  LODWORD(v12) = sub_11F5476;
  *v11 = v1;
  HIDWORD(v12) = sub_11F544E;
  v72 = v11;
  v73 = v12;
  v70 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v71 = v13;
  ScreenController::bindBoolForCollection((int)v1, &v75, &v74, (int)&v72, (int)&v70);
  if ( (_DWORD)v71 )
    ((void (*)(void))v71)();
  if ( (_DWORD)v73 )
    ((void (*)(void))v73)();
  StringHash::StringHash<char [23]>(&v69, (int)"#trash_visibility_left");
  v14 = operator new(4u);
  LODWORD(v15) = sub_11F54D2;
  *v14 = v1;
  HIDWORD(v15) = sub_11F54AC;
  v67 = v14;
  v68 = v15;
  v65 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v66 = v16;
  ScreenController::bindBool((int)v1, &v69, (int)&v67, (int)&v65);
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  StringHash::StringHash<char [24]>(&v64, (int)"#trash_visibility_right");
  v17 = operator new(4u);
  LODWORD(v18) = sub_11F5532;
  *v17 = v1;
  HIDWORD(v18) = sub_11F5508;
  v62 = v17;
  v63 = v18;
  v60 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v61 = v19;
  ScreenController::bindBool((int)v1, &v64, (int)&v62, (int)&v60);
  if ( (_DWORD)v61 )
    ((void (*)(void))v61)();
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  v59 = 458082292;
  v20 = operator new(4u);
  LODWORD(v21) = sub_11F557A;
  *v20 = v1;
  HIDWORD(v21) = sub_11F5568;
  v57 = v20;
  v58 = v21;
  v55 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v56 = v22;
  ScreenController::bindBool((int)v1, &v59, (int)&v57, (int)&v55);
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  v54 = 383147788;
  v23 = operator new(4u);
  LODWORD(v24) = sub_11F55C2;
  *v23 = v1;
  HIDWORD(v24) = sub_11F55B0;
  v52 = v23;
  v53 = v24;
  v50 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v51 = v25;
  ScreenController::bindBool((int)v1, &v54, (int)&v52, (int)&v50);
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  if ( (_DWORD)v53 )
    ((void (*)(void))v53)();
  v49 = 1492935325;
  v26 = operator new(4u);
  LODWORD(v27) = sub_11F560A;
  *v26 = v1;
  HIDWORD(v27) = sub_11F55F8;
  v47 = v26;
  v48 = v27;
  v45 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v46 = v28;
  ScreenController::bindBool((int)v1, &v49, (int)&v47, (int)&v45);
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v44 = -527924048;
  v43 = -1447178516;
  v29 = operator new(4u);
  LODWORD(v30) = sub_11F568C;
  *v29 = v1;
  HIDWORD(v30) = sub_11F5640;
  v41 = v29;
  v42 = v30;
  v39 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v40 = v31;
  ScreenController::bindStringForCollection((int)v1, &v44, &v43, (int)&v41, (int)&v39);
  if ( (_DWORD)v40 )
    ((void (*)(void))v40)();
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
  v38 = 1045417974;
  v35 = operator new(1u);
  v36 = (void (*)(void))sub_11F56DC;
  v37 = sub_11F56C4;
  v33 = operator new(1u);
  LODWORD(v32) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindColorERK10StringHashRKSt8functionIF5ColorvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSH_St18_Manager_operation;
  HIDWORD(v32) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindColorERK10StringHashRKSt8functionIF5ColorvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v34 = v32;
  ScreenController::bindColor((int)v1, &v38, (int)&v35, (int)&v33);
  if ( (_DWORD)v34 )
    ((void (*)(void))v34)();
  if ( v36 )
    v36();
}


int __fastcall PortfolioScreenController::PortfolioScreenController(int a1, int a2)
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
  int v12; // [sp+4h] [bp-34h]@1
  int v13; // [sp+8h] [bp-30h]@1

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
  ClientInstanceScreenController::ClientInstanceScreenController(v2, (int)&v12);
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
  *(_DWORD *)v2 = &off_26E2CD4;
  *(_DWORD *)(v2 + 432) = 0;
  *(_DWORD *)(v2 + 436) = 0;
  *(_DWORD *)(v2 + 440) = 0;
  *(_DWORD *)(v2 + 444) = 0;
  *(_DWORD *)(v2 + 448) = 0;
  PortfolioScreenController::_registerEventHandlers((PortfolioScreenController *)v2);
  PortfolioScreenController::_registerBindings((PortfolioScreenController *)v2);
  PortfolioScreenController::_buildPhotoRecords((PortfolioScreenController *)v2);
  return v2;
}


signed int __fastcall PortfolioScreenController::_handlePortfolioPageNext(PortfolioScreenController *this, UIPropertyBag *a2)
{
  PortfolioScreenController *v2; // r4@1
  __int64 v3; // r0@1
  int v4; // r2@1
  signed int result; // r0@5

  v2 = this;
  PortfolioScreenController::_saveCaptions(this);
  v3 = *(_QWORD *)((char *)v2 + 444);
  v4 = v3 + 1;
  if ( (signed int)v3 + 1 <= 0 )
    v4 = 0;
  if ( SHIDWORD(v3) <= (signed int)v3 )
    v4 = HIDWORD(v3);
  result = 1;
  *((_DWORD *)v2 + 111) = v4;
  return result;
}


void __fastcall PortfolioScreenController::_buildPhotoRecords(PortfolioScreenController *this)
{
  PortfolioScreenController::_buildPhotoRecords(this);
}


void __fastcall PortfolioScreenController::~PortfolioScreenController(PortfolioScreenController *this)
{
  PortfolioScreenController *v1; // r0@1

  v1 = PortfolioScreenController::~PortfolioScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall PortfolioScreenController::_requestPage(int result, int a2)
{
  int v2; // r3@1

  v2 = a2;
  if ( a2 <= 0 )
    v2 = 0;
  if ( *(_DWORD *)(result + 448) < a2 )
    v2 = *(_DWORD *)(result + 448);
  *(_DWORD *)(result + 444) = v2;
  return result;
}
