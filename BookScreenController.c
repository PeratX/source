

signed int __fastcall BookScreenController::_isStillValid(BookScreenController *this)
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


void __fastcall BookScreenController::_loadTextFromBook(BookScreenController *this)
{
  BookScreenController *v1; // r4@1
  int v2; // r4@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20
  int v11; // [sp+4h] [bp-34h]@1
  int v12; // [sp+8h] [bp-30h]@1

  v1 = this;
  BookScreenManager::getBookPages((BookScreenManager *)&v11, *((Player ***)this + 108));
  std::vector<PageContent,std::allocator<PageContent>>::_M_move_assign((int)v1 + 440, (int)&v11);
  v3 = v12;
  v2 = v11;
  if ( v11 != v12 )
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
          j_j_j_j_j__ZdlPv_9_1(v9);
      }
      v10 = (int *)(*(_DWORD *)v2 - 12);
      if ( v10 != &dword_28898C0 )
        v6 = (unsigned int *)(*(_DWORD *)v2 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v10);
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = v11;
  }
  if ( v2 )
    operator delete((void *)v2);
}


int *__fastcall BookScreenController::_setPageText(int *result, signed int a2, int *a3)
{
  if ( a2 >= 0 && *((_BYTE *)result + 436) && a2 < 50 )
    result = j_EntityInteraction::setInteractText((int *)(result[110] + 8 * a2), a3);
  return result;
}


signed int __fastcall BookScreenController::tick(BookScreenController *this)
{
  BookScreenController *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  __int64 v4; // kr00_8@1
  int v5; // r2@1
  int v6; // r5@1
  int v7; // r0@3
  int v8; // r0@8
  unsigned int v9; // r0@11
  unsigned int v10; // r2@12
  _BYTE *v11; // r1@12
  signed int result; // r0@14

  v1 = this;
  v4 = *((_QWORD *)this + 55);
  v2 = *((_QWORD *)this + 55) >> 32;
  v3 = v4;
  v5 = *((_DWORD *)v1 + 113);
  v6 = 2 * v5;
  if ( (v2 - (signed int)v4) >> 3 > (unsigned int)(2 * v5) )
  {
    if ( BookScreenManager::viewPage(*((BookScreenManager **)v1 + 108), (const PageContent *)(v4 + 16 * v5)) )
      LOBYTE(v7) = 1;
    else
      v7 = *((_BYTE *)v1 + 465);
    *((_BYTE *)v1 + 465) = v7;
    v2 = *((_QWORD *)v1 + 55) >> 32;
    v3 = *((_QWORD *)v1 + 55);
  }
  if ( (v2 - v3) >> 3 > (v6 | 1u) )
    if ( BookScreenManager::viewPage(*((BookScreenManager **)v1 + 108), (const PageContent *)(v3 + 8 * (v6 | 1))) )
      LOBYTE(v8) = 1;
      v8 = *((_BYTE *)v1 + 465);
    *((_BYTE *)v1 + 465) = v8;
  v9 = *((_WORD *)v1 + 232);
  if ( (unsigned __int8)v9 == 3 )
    BookScreenController::_tickExport(v1);
    v10 = *((_BYTE *)v1 + 465);
    v11 = (char *)v1 + 465;
  else
    v10 = v9 >> 8;
  result = 0;
  if ( v10 )
    *v11 = 0;
    result = 7;
  return result;
}


void __fastcall BookScreenController::_registerEventHandlers(BookScreenController *this)
{
  BookScreenController::_registerEventHandlers(this);
}


int __fastcall BookScreenController::addStaticScreenVars(BookScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  ScreenController *v3; // r5@1
  int v4; // r6@1
  int v5; // r6@1
  int v6; // r6@1
  void *v7; // r0@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  int v11; // [sp+4h] [bp-54h]@1
  unsigned int v12; // [sp+8h] [bp-50h]@1
  int v13; // [sp+Ch] [bp-4Ch]@1
  char v14; // [sp+10h] [bp-48h]@1
  char v15; // [sp+20h] [bp-38h]@1
  char v16; // [sp+30h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$max_page_length");
  Json::Value::Value((Json::Value *)&v16, 256);
  Json::Value::operator=(v4, (const Json::Value *)&v16);
  Json::Value::~Value((Json::Value *)&v16);
  v5 = Json::Value::operator[](v2, "$max_title_length");
  Json::Value::Value((Json::Value *)&v15, 16);
  Json::Value::operator=(v5, (const Json::Value *)&v15);
  Json::Value::~Value((Json::Value *)&v15);
  v6 = Json::Value::operator[](v2, "$screenshot_file_system");
  ResourceUtil::stringFromPath(&v11, 9);
  sub_119CCEC((void **)&v13, v12, v11);
  Json::Value::Value((int)&v14, (const char **)&v13);
  Json::Value::operator=(v6, (const Json::Value *)&v14);
  Json::Value::~Value((Json::Value *)&v14);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v13 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  return ScreenController::addStaticScreenVars(v3, v2);
}


void __fastcall BookScreenController::_addPhotoPageAt(int a1, int a2, int *a3)
{
  BookScreenController::_addPhotoPageAt(a1, a2, a3);
}


int __fastcall BookScreenController::_beginPhotoPick(int result, int a2)
{
  *(_DWORD *)(result + 468) = a2;
  *(_BYTE *)(result + 464) = 2;
  return result;
}


int __fastcall BookScreenController::BookScreenController(int a1, int a2, int a3, char a4)
{
  int v4; // r11@1
  char v5; // r5@1
  int v6; // r0@1
  int v7; // r6@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r7@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r4@14
  unsigned int v14; // r0@16
  BookScreenManager *v15; // r1@21
  BookScreenManager *v16; // r0@21
  BookScreenManager *v17; // r0@22
  BookScreenManager *v18; // r0@23
  int *v19; // r0@26
  void *v20; // r0@26
  char *v21; // r1@30
  char *v22; // r0@32
  char *v23; // r0@33
  int v24; // r0@34
  unsigned int *v25; // r2@39
  signed int v26; // r1@41
  unsigned int *v27; // r2@43
  signed int v28; // r1@45
  __int64 v29; // kr00_8@55
  signed int v30; // r7@55
  unsigned int *v32; // r2@57
  signed int v33; // r1@59
  unsigned __int64 *v34; // [sp+Ch] [bp-44h]@21
  char *v35; // [sp+10h] [bp-40h]@29
  char *v36; // [sp+14h] [bp-3Ch]@29
  int v37; // [sp+18h] [bp-38h]@26
  BookScreenManager *v38; // [sp+1Ch] [bp-34h]@21
  int v39; // [sp+20h] [bp-30h]@1
  int v40; // [sp+24h] [bp-2Ch]@1

  v4 = a1;
  v39 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v40 = v6;
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
  ClientInstanceScreenController::ClientInstanceScreenController(v4, (int)&v39);
  v10 = v40;
  if ( v40 )
    v11 = (unsigned int *)(v40 + 4);
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
  *(_DWORD *)v4 = &off_26E0F80;
  *(_DWORD *)(v4 + 432) = 0;
  *(_BYTE *)(v4 + 436) = v5;
  *(_BYTE *)(v4 + 437) = 0;
  *(_BYTE *)(v4 + 438) = 0;
  *(_DWORD *)(v4 + 448) = 0;
  *(_DWORD *)(v4 + 452) = 0;
  *(_DWORD *)(v4 + 440) = 0;
  *(_DWORD *)(v4 + 444) = 0;
  *(_DWORD *)(v4 + 456) = &unk_28898CC;
  *(_DWORD *)(v4 + 460) = &unk_28898CC;
  *(_BYTE *)(v4 + 464) = 0;
  *(_BYTE *)(v4 + 465) = 0;
  *(_DWORD *)(v4 + 468) = -1;
  v34 = (unsigned __int64 *)(v4 + 440);
  ClientInstanceScreenModel::createBookScreenManager((ClientInstanceScreenModel *)&v38, *(_DWORD *)(v4 + 424), v7);
  v15 = v38;
  v38 = 0;
  v16 = *(BookScreenManager **)(v4 + 432);
  *(_DWORD *)(v4 + 432) = v15;
  if ( v16 )
    v17 = BookScreenManager::~BookScreenManager(v16);
    operator delete((void *)v17);
    if ( v38 )
      v18 = BookScreenManager::~BookScreenManager(v38);
      operator delete((void *)v18);
  if ( MinecraftScreenModel::isEduMode(*(MinecraftScreenModel **)(v4 + 424)) == 1 )
    BookScreenManager::populatePickPics(*(_DWORD *)(v4 + 432), v34);
  BookScreenController::_loadTextFromBook((BookScreenController *)v4);
  v19 = (int *)BookScreenManager::getTitle(*(BookScreenManager **)(v4 + 432));
  EntityInteraction::setInteractText((int *)(v4 + 456), v19);
  MinecraftScreenModel::getPlayerName((MinecraftScreenModel *)&v37, *(_DWORD *)(v4 + 424));
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v4 + 460),
    &v37);
  v20 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v37 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  if ( *(_BYTE *)(v4 + 436) )
    do
      v29 = *(_QWORD *)(v4 + 440);
      v30 = (HIDWORD(v29) - (signed int)v29) >> 3;
      if ( (unsigned int)v30 > 1 )
        break;
      v35 = (char *)&unk_28898CC;
      v36 = (char *)&unk_28898CC;
      if ( HIDWORD(v29) == *(_DWORD *)(v4 + 448) )
        std::vector<PageContent,std::allocator<PageContent>>::_M_emplace_back_aux<PageContent>(v34, (int)&v35);
        v21 = v36;
        *(_DWORD *)HIDWORD(v29) = &unk_28898CC;
        v35 = (char *)&unk_28898CC;
        *(_DWORD *)(HIDWORD(v29) + 4) = v36;
        v36 = (char *)&unk_28898CC;
        v21 = (char *)&unk_28898CC;
        *(_DWORD *)(v4 + 444) = HIDWORD(v29) + 8;
      v22 = v21 - 12;
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v21 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
        }
        else
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
      v23 = v35 - 12;
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v35 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      v24 = *(_BYTE *)(v4 + 436);
      if ( *(_BYTE *)(v4 + 436) && v30 < 50 )
        BookScreenManager::editPage(
          *(BookScreenManager **)(v4 + 432),
          v30,
          (const PageContent *)(*(_DWORD *)(v4 + 440) + 8 * v30));
        v24 = *(_BYTE *)(v4 + 436);
    while ( v24 );
  BookScreenController::_registerEventHandlers((BookScreenController *)v4);
  BookScreenController::_registerBindings((BookScreenController *)v4);
  return v4;
}


void __fastcall BookScreenController::_tickExport(BookScreenController *this)
{
  BookScreenController::_tickExport(this);
}


int __fastcall BookScreenController::_editControlsActive(BookScreenController *this, int a2)
{
  char *v2; // r2@1

  v2 = (char *)this + 438;
  if ( !a2 )
    v2 = (char *)this + 437;
  return (unsigned __int8)*v2;
}


void __fastcall BookScreenController::_updateBookPage(BookScreenController *this, int a2)
{
  if ( a2 >= 0 && *((_BYTE *)this + 436) && a2 < 50 )
    j_j_j__ZN17BookScreenManager8editPageEiRK11PageContent(
      *((BookScreenManager **)this + 108),
      a2,
      (const PageContent *)(*((_DWORD *)this + 110) + 8 * a2));
}


void __fastcall BookScreenController::_registerEventHandlers(BookScreenController *this)
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
  int v50; // r5@37
  _DWORD *v51; // r0@37
  __int64 v52; // r1@37
  void *v53; // r0@39
  int v54; // r5@40
  _DWORD *v55; // r0@40
  __int64 v56; // r1@40
  void *v57; // r0@42
  int v58; // r5@43
  _DWORD *v59; // r0@43
  __int64 v60; // r1@43
  void *v61; // r0@45
  int v62; // r5@46
  _DWORD *v63; // r0@46
  __int64 v64; // r1@46
  void *v65; // r0@48
  int v66; // r5@49
  _DWORD *v67; // r0@49
  __int64 v68; // r1@49
  void *v69; // r0@51
  unsigned int *v70; // r2@53
  signed int v71; // r1@55
  unsigned int *v72; // r2@57
  signed int v73; // r1@59
  unsigned int *v74; // r2@61
  signed int v75; // r1@63
  unsigned int *v76; // r2@65
  signed int v77; // r1@67
  unsigned int *v78; // r2@69
  signed int v79; // r1@71
  unsigned int *v80; // r2@73
  signed int v81; // r1@75
  unsigned int *v82; // r2@77
  signed int v83; // r1@79
  unsigned int *v84; // r2@81
  signed int v85; // r1@83
  unsigned int *v86; // r2@85
  signed int v87; // r1@87
  unsigned int *v88; // r2@89
  signed int v89; // r1@91
  unsigned int *v90; // r2@93
  signed int v91; // r1@95
  unsigned int *v92; // r2@97
  signed int v93; // r1@99
  unsigned int *v94; // r2@101
  signed int v95; // r1@103
  unsigned int *v96; // r2@105
  signed int v97; // r1@107
  unsigned int *v98; // r2@109
  signed int v99; // r1@111
  unsigned int *v100; // r2@113
  signed int v101; // r1@115
  unsigned int *v102; // r2@117
  signed int v103; // r1@119
  _DWORD *v104; // [sp+4h] [bp-1ACh]@49
  __int64 v105; // [sp+Ch] [bp-1A4h]@49
  int v106; // [sp+18h] [bp-198h]@49
  _DWORD *v107; // [sp+1Ch] [bp-194h]@46
  __int64 v108; // [sp+24h] [bp-18Ch]@46
  int v109; // [sp+30h] [bp-180h]@46
  _DWORD *v110; // [sp+34h] [bp-17Ch]@43
  __int64 v111; // [sp+3Ch] [bp-174h]@43
  int v112; // [sp+48h] [bp-168h]@43
  _DWORD *v113; // [sp+4Ch] [bp-164h]@40
  __int64 v114; // [sp+54h] [bp-15Ch]@40
  int v115; // [sp+60h] [bp-150h]@40
  _DWORD *v116; // [sp+64h] [bp-14Ch]@37
  __int64 v117; // [sp+6Ch] [bp-144h]@37
  int v118; // [sp+78h] [bp-138h]@37
  _DWORD *v119; // [sp+7Ch] [bp-134h]@34
  __int64 v120; // [sp+84h] [bp-12Ch]@34
  int v121; // [sp+90h] [bp-120h]@34
  _DWORD *v122; // [sp+94h] [bp-11Ch]@31
  __int64 v123; // [sp+9Ch] [bp-114h]@31
  int v124; // [sp+A8h] [bp-108h]@31
  _DWORD *v125; // [sp+ACh] [bp-104h]@28
  __int64 v126; // [sp+B4h] [bp-FCh]@28
  int v127; // [sp+C0h] [bp-F0h]@28
  _DWORD *v128; // [sp+C4h] [bp-ECh]@25
  __int64 v129; // [sp+CCh] [bp-E4h]@25
  int v130; // [sp+D8h] [bp-D8h]@25
  _DWORD *v131; // [sp+DCh] [bp-D4h]@22
  __int64 v132; // [sp+E4h] [bp-CCh]@22
  int v133; // [sp+F0h] [bp-C0h]@22
  _DWORD *v134; // [sp+F4h] [bp-BCh]@19
  __int64 v135; // [sp+FCh] [bp-B4h]@19
  int v136; // [sp+108h] [bp-A8h]@19
  _DWORD *v137; // [sp+10Ch] [bp-A4h]@16
  __int64 v138; // [sp+114h] [bp-9Ch]@16
  int v139; // [sp+120h] [bp-90h]@16
  _DWORD *v140; // [sp+124h] [bp-8Ch]@13
  __int64 v141; // [sp+12Ch] [bp-84h]@13
  int v142; // [sp+138h] [bp-78h]@13
  _DWORD *v143; // [sp+13Ch] [bp-74h]@10
  __int64 v144; // [sp+144h] [bp-6Ch]@10
  int v145; // [sp+150h] [bp-60h]@10
  _DWORD *v146; // [sp+154h] [bp-5Ch]@7
  __int64 v147; // [sp+15Ch] [bp-54h]@7
  int v148; // [sp+168h] [bp-48h]@7
  _DWORD *v149; // [sp+16Ch] [bp-44h]@4
  __int64 v150; // [sp+174h] [bp-3Ch]@4
  int v151; // [sp+180h] [bp-30h]@4
  _DWORD *v152; // [sp+184h] [bp-2Ch]@1
  __int64 v153; // [sp+18Ch] [bp-24h]@1
  int v154; // [sp+198h] [bp-18h]@1

  v1 = this;
  sub_119C884((void **)&v154, "#page_text_box");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v154);
  v3 = operator new(4u);
  LODWORD(v4) = sub_113737C;
  *v3 = v1;
  HIDWORD(v4) = sub_113719C;
  v152 = v3;
  v153 = v4;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v2, (int)&v152);
  if ( (_DWORD)v153 )
    ((void (*)(void))v153)();
  v5 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
  {
    v70 = (unsigned int *)(v154 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
    }
    else
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  sub_119C884((void **)&v151, "#page_text_box");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v151);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11375B4;
  *v7 = v1;
  HIDWORD(v8) = sub_11373B4;
  v149 = v7;
  v150 = v8;
  ScreenController::registerTextEditFinishedEventHandler((int)v1, v6, (int)&v149);
  if ( (_DWORD)v150 )
    ((void (*)(void))v150)();
  v9 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v151 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v148, "#title_text_box");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v148);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11377AC;
  *v11 = v1;
  HIDWORD(v12) = sub_11375EC;
  v146 = v11;
  v147 = v12;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v10, (int)&v146);
  if ( (_DWORD)v147 )
    ((void (*)(void))v147)();
  v13 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v148 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v145, "#author_text_box");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v145);
  v15 = operator new(4u);
  LODWORD(v16) = sub_11379A4;
  *v15 = v1;
  HIDWORD(v16) = sub_11377E4;
  v143 = v15;
  v144 = v16;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v14, (int)&v143);
  if ( (_DWORD)v144 )
    ((void (*)(void))v144)();
  v17 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v145 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v142, "button.prev_page");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v142);
  v19 = operator new(4u);
  LODWORD(v20) = sub_11379F2;
  *v19 = v1;
  HIDWORD(v20) = sub_11379DA;
  v140 = v19;
  v141 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v140);
  if ( (_DWORD)v141 )
    ((void (*)(void))v141)();
  v21 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v142 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  sub_119C884((void **)&v139, "button.next_page");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v139);
  v23 = operator new(4u);
  LODWORD(v24) = sub_1137D18;
  *v23 = v1;
  HIDWORD(v24) = sub_1137C1C;
  v137 = v23;
  v138 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v137);
  if ( (_DWORD)v138 )
    ((void (*)(void))v138)();
  v25 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v139 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  sub_119C884((void **)&v136, "button.insert_text_page");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v136);
  v27 = operator new(4u);
  LODWORD(v28) = sub_1137E78;
  *v27 = v1;
  HIDWORD(v28) = sub_1137D50;
  v134 = v27;
  v135 = v28;
  ScreenController::registerButtonClickHandler((int)v1, v26, (int)&v134);
  if ( (_DWORD)v135 )
    ((void (*)(void))v135)();
  v29 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v136 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  sub_119C884((void **)&v133, "button.insert_photo_page");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v133);
  v31 = operator new(4u);
  LODWORD(v32) = sub_1137F1C;
  *v31 = v1;
  HIDWORD(v32) = sub_1137EB0;
  v131 = v31;
  v132 = v32;
  ScreenController::registerButtonClickHandler((int)v1, v30, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  v33 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v133 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  sub_119C884((void **)&v130, "button.delete_page");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v130);
  v35 = operator new(4u);
  LODWORD(v36) = sub_1137FBC;
  *v35 = v1;
  HIDWORD(v36) = sub_1137F54;
  v128 = v35;
  v129 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v128);
  if ( (_DWORD)v129 )
    ((void (*)(void))v129)();
  v37 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v130 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  sub_119C884((void **)&v127, "button.sign_book");
  v38 = MinecraftScreenController::_getNameId(v1, (int **)&v127);
  v39 = operator new(4u);
  LODWORD(v40) = sub_113800E;
  *v39 = v1;
  HIDWORD(v40) = sub_1137FF2;
  v125 = v39;
  v126 = v40;
  ScreenController::registerButtonClickHandler((int)v1, v38, (int)&v125);
  if ( (_DWORD)v126 )
    ((void (*)(void))v126)();
  v41 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v127 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
  sub_119C884((void **)&v124, "button.finalize");
  v42 = MinecraftScreenController::_getNameId(v1, (int **)&v124);
  v43 = operator new(4u);
  LODWORD(v44) = sub_1138088;
  *v43 = v1;
  HIDWORD(v44) = sub_1138044;
  v122 = v43;
  v123 = v44;
  ScreenController::registerButtonClickHandler((int)v1, v42, (int)&v122);
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  v45 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v124 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v45);
  sub_119C884((void **)&v121, "button.book_exit");
  v46 = MinecraftScreenController::_getNameId(v1, (int **)&v121);
  v47 = operator new(4u);
  LODWORD(v48) = sub_11380EA;
  *v47 = v1;
  HIDWORD(v48) = sub_11380BE;
  v119 = v47;
  v120 = v48;
  ScreenController::registerButtonClickHandler((int)v1, v46, (int)&v119);
  if ( (_DWORD)v120 )
    ((void (*)(void))v120)();
  v49 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v121 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v49);
  sub_119C884((void **)&v118, "button.swap_page_left");
  v50 = MinecraftScreenController::_getNameId(v1, (int **)&v118);
  v51 = operator new(4u);
  LODWORD(v52) = sub_1138190;
  *v51 = v1;
  HIDWORD(v52) = sub_1138120;
  v116 = v51;
  v117 = v52;
  ScreenController::registerButtonClickHandler((int)v1, v50, (int)&v116);
  if ( (_DWORD)v117 )
    ((void (*)(void))v117)();
  v53 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v118 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v53);
  sub_119C884((void **)&v115, "button.swap_page_right");
  v54 = MinecraftScreenController::_getNameId(v1, (int **)&v115);
  v55 = operator new(4u);
  LODWORD(v56) = sub_1138238;
  *v55 = v1;
  HIDWORD(v56) = sub_11381C8;
  v113 = v55;
  v114 = v56;
  ScreenController::registerButtonClickHandler((int)v1, v54, (int)&v113);
  if ( (_DWORD)v114 )
    ((void (*)(void))v114)();
  v57 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v115 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v57);
  sub_119C884((void **)&v112, "button.edit_page");
  v58 = MinecraftScreenController::_getNameId(v1, (int **)&v112);
  v59 = operator new(4u);
  LODWORD(v60) = sub_11382D0;
  *v59 = v1;
  HIDWORD(v60) = sub_1138270;
  v110 = v59;
  v111 = v60;
  ScreenController::registerButtonClickHandler((int)v1, v58, (int)&v110);
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  v61 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v112 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v61);
  sub_119C884((void **)&v109, "button.picked");
  v62 = MinecraftScreenController::_getNameId(v1, (int **)&v109);
  v63 = operator new(4u);
  LODWORD(v64) = sub_1138468;
  *v63 = v1;
  HIDWORD(v64) = sub_1138308;
  v107 = v63;
  v108 = v64;
  ScreenController::registerButtonClickHandler((int)v1, v62, (int)&v107);
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  v65 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v109 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v65);
  sub_119C884((void **)&v106, "button.export_book");
  v66 = MinecraftScreenController::_getNameId(v1, (int **)&v106);
  v67 = operator new(4u);
  LODWORD(v68) = sub_11384B6;
  *v67 = v1;
  HIDWORD(v68) = sub_113849E;
  v104 = v67;
  v105 = v68;
  ScreenController::registerButtonClickHandler((int)v1, v66, (int)&v104);
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  v69 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v106 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v69);
}


void __fastcall BookScreenController::_swapPages(BookScreenController *this, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  BookScreenController *v5; // r6@1
  __int64 v6; // r0@3
  bool v7; // zf@4
  bool v8; // nf@4
  unsigned __int8 v9; // vf@4
  int v10; // r7@7
  int *v11; // r8@7
  int v12; // r7@7
  int *v13; // r9@7
  int v14; // r7@7
  int v15; // r7@7
  void *v16; // r0@7
  void *v17; // r0@8
  void *v18; // r0@9
  void *v19; // r0@10
  unsigned int *v20; // r2@12
  signed int v21; // r1@14
  unsigned int *v22; // r2@16
  signed int v23; // r1@18
  unsigned int *v24; // r2@20
  signed int v25; // r1@22
  unsigned int *v26; // r2@24
  signed int v27; // r1@26
  int v28; // [sp+0h] [bp-30h]@7
  int v29; // [sp+4h] [bp-2Ch]@7
  int v30; // [sp+8h] [bp-28h]@7
  int v31; // [sp+Ch] [bp-24h]@9

  v3 = a2;
  v4 = a3;
  v5 = this;
  if ( a2 >= 0 )
  {
    if ( *((_BYTE *)this + 436) )
    {
      v6 = *((_QWORD *)this + 55);
      HIDWORD(v6) = (HIDWORD(v6) - (signed int)v6) >> 3;
      if ( SHIDWORD(v6) > a3 )
      {
        v9 = 0;
        v7 = a3 == 0;
        v8 = a3 < 0;
        if ( a3 >= 0 )
        {
          v9 = __OFSUB__(HIDWORD(v6), v3);
          v7 = HIDWORD(v6) == v3;
          v8 = HIDWORD(v6) - v3 < 0;
        }
        if ( !((unsigned __int8)(v8 ^ v9) | v7) )
          v10 = v6 + 8 * v3;
          v11 = sub_119C854(&v30, (int *)v10) + 1;
          sub_119C854(v11, (int *)(v10 + 4));
          v12 = *((_DWORD *)v5 + 110) + 8 * v4;
          v13 = sub_119C854(&v28, (int *)v12) + 1;
          sub_119C854(v13, (int *)(v12 + 4));
          v14 = *((_DWORD *)v5 + 110) + 8 * v3;
          EntityInteraction::setInteractText((int *)v14, &v28);
          EntityInteraction::setInteractText((int *)(v14 + 4), v13);
          v15 = *((_DWORD *)v5 + 110) + 8 * v4;
          EntityInteraction::setInteractText((int *)v15, &v30);
          EntityInteraction::setInteractText((int *)(v15 + 4), v11);
          BookScreenManager::swapPages(*((BookScreenManager **)v5 + 108), v3, v4);
          v16 = (void *)(v29 - 12);
          if ( (int *)(v29 - 12) != &dword_28898C0 )
          {
            v20 = (unsigned int *)(v29 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v21 = __ldrex(v20);
              while ( __strex(v21 - 1, v20) );
            }
            else
              v21 = (*v20)--;
            if ( v21 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v16);
          }
          v17 = (void *)(v28 - 12);
          if ( (int *)(v28 - 12) != &dword_28898C0 )
            v22 = (unsigned int *)(v28 - 4);
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
              v23 = (*v22)--;
            if ( v23 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v17);
          v18 = (void *)(v31 - 12);
          if ( (int *)(v31 - 12) != &dword_28898C0 )
            v24 = (unsigned int *)(v31 - 4);
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
              v25 = (*v24)--;
            if ( v25 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v18);
          v19 = (void *)(v30 - 12);
          if ( (int *)(v30 - 12) != &dword_28898C0 )
            v26 = (unsigned int *)(v30 - 4);
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
              v27 = (*v26)--;
            if ( v27 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v19);
      }
    }
  }
}


void __fastcall BookScreenController::_registerBindings(BookScreenController *this)
{
  BookScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r0@5
  __int64 v4; // r1@5
  _DWORD *v5; // r0@9
  __int64 v6; // r1@9
  __int64 v7; // r1@9
  _DWORD *v8; // r0@13
  __int64 v9; // r1@13
  __int64 v10; // r1@13
  _DWORD *v11; // r0@17
  __int64 v12; // r1@17
  __int64 v13; // r1@17
  _DWORD *v14; // r0@21
  __int64 v15; // r1@21
  __int64 v16; // r1@21
  _DWORD *v17; // r0@25
  __int64 v18; // r1@25
  __int64 v19; // r1@25
  _DWORD *v20; // r0@29
  __int64 v21; // r1@29
  __int64 v22; // r1@29
  _DWORD *v23; // r0@33
  __int64 v24; // r1@33
  __int64 v25; // r1@33
  _DWORD *v26; // r0@37
  __int64 v27; // r1@37
  __int64 v28; // r1@37
  _DWORD *v29; // r0@41
  __int64 v30; // r1@41
  __int64 v31; // r1@41
  _DWORD *v32; // r0@45
  __int64 v33; // r1@45
  __int64 v34; // r1@45
  _DWORD *v35; // r0@49
  __int64 v36; // r1@49
  __int64 v37; // r1@49
  _DWORD *v38; // r0@53
  __int64 v39; // r1@53
  __int64 v40; // r1@53
  _DWORD *v41; // r0@57
  __int64 v42; // r1@57
  __int64 v43; // r1@57
  _DWORD *v44; // r0@61
  __int64 v45; // r1@61
  __int64 v46; // r1@61
  _DWORD *v47; // r0@65
  __int64 v48; // r1@65
  __int64 v49; // r1@65
  _DWORD *v50; // r0@69
  __int64 v51; // r1@69
  __int64 v52; // r1@69
  _DWORD *v53; // r0@73
  __int64 v54; // r1@73
  __int64 v55; // r1@73
  _DWORD *v56; // r0@77
  __int64 v57; // r1@77
  __int64 v58; // r1@77
  _DWORD *v59; // r0@81
  __int64 v60; // r1@81
  __int64 v61; // r1@81
  _DWORD *v62; // r0@85
  __int64 v63; // r1@85
  __int64 v64; // r1@85
  signed int v65; // r5@89 OVERLAPPED
  _DWORD *v66; // r0@89
  __int64 v67; // r1@89
  __int64 v68; // r1@89
  _DWORD *v69; // r0@93
  __int64 v70; // r1@93
  __int64 v71; // r1@93
  signed int v72; // r6@97
  _DWORD *v73; // r0@97
  __int64 v74; // r1@97
  __int64 v75; // r1@97
  _DWORD *v76; // r0@101
  __int64 v77; // r1@101
  __int64 v78; // r1@101
  __int64 v79; // r1@105
  __int64 v80; // r1@109
  void *v81; // [sp+8h] [bp-438h]@109
  __int64 v82; // [sp+10h] [bp-430h]@109
  void *v83; // [sp+18h] [bp-428h]@109
  void (*v84)(void); // [sp+20h] [bp-420h]@109
  void **(__fastcall *v85)(void **); // [sp+24h] [bp-41Ch]@109
  int v86; // [sp+28h] [bp-418h]@109
  void *v87; // [sp+2Ch] [bp-414h]@105
  __int64 v88; // [sp+34h] [bp-40Ch]@105
  void *v89; // [sp+3Ch] [bp-404h]@105
  void (*v90)(void); // [sp+44h] [bp-3FCh]@105
  void **(__fastcall *v91)(void **); // [sp+48h] [bp-3F8h]@105
  int v92; // [sp+4Ch] [bp-3F4h]@105
  void *v93; // [sp+50h] [bp-3F0h]@101
  __int64 v94; // [sp+58h] [bp-3E8h]@101
  _DWORD *v95; // [sp+60h] [bp-3E0h]@101
  __int64 v96; // [sp+68h] [bp-3D8h]@101
  int v97; // [sp+70h] [bp-3D0h]@101
  int v98; // [sp+74h] [bp-3CCh]@101
  void *v99; // [sp+78h] [bp-3C8h]@97
  __int64 v100; // [sp+80h] [bp-3C0h]@97
  _DWORD *v101; // [sp+88h] [bp-3B8h]@97
  __int64 v102; // [sp+90h] [bp-3B0h]@97
  __int64 v103; // [sp+98h] [bp-3A8h]@97
  void *v104; // [sp+A0h] [bp-3A0h]@93
  __int64 v105; // [sp+A8h] [bp-398h]@93
  _DWORD *v106; // [sp+B0h] [bp-390h]@93
  __int64 v107; // [sp+B8h] [bp-388h]@93
  int v108; // [sp+C0h] [bp-380h]@93
  void *v109; // [sp+C4h] [bp-37Ch]@89
  __int64 v110; // [sp+CCh] [bp-374h]@89
  _DWORD *v111; // [sp+D4h] [bp-36Ch]@89
  __int64 v112; // [sp+DCh] [bp-364h]@89
  int v113; // [sp+E4h] [bp-35Ch]@89
  int v114; // [sp+E8h] [bp-358h]@89
  void *v115; // [sp+ECh] [bp-354h]@85
  __int64 v116; // [sp+F4h] [bp-34Ch]@85
  _DWORD *v117; // [sp+FCh] [bp-344h]@85
  __int64 v118; // [sp+104h] [bp-33Ch]@85
  int v119; // [sp+10Ch] [bp-334h]@85
  int v120; // [sp+110h] [bp-330h]@85
  void *v121; // [sp+114h] [bp-32Ch]@81
  __int64 v122; // [sp+11Ch] [bp-324h]@81
  _DWORD *v123; // [sp+124h] [bp-31Ch]@81
  __int64 v124; // [sp+12Ch] [bp-314h]@81
  int v125; // [sp+134h] [bp-30Ch]@81
  int v126; // [sp+138h] [bp-308h]@81
  void *v127; // [sp+13Ch] [bp-304h]@77
  __int64 v128; // [sp+144h] [bp-2FCh]@77
  _DWORD *v129; // [sp+14Ch] [bp-2F4h]@77
  __int64 v130; // [sp+154h] [bp-2ECh]@77
  int v131; // [sp+15Ch] [bp-2E4h]@77
  int v132; // [sp+160h] [bp-2E0h]@77
  void *v133; // [sp+164h] [bp-2DCh]@73
  __int64 v134; // [sp+16Ch] [bp-2D4h]@73
  _DWORD *v135; // [sp+174h] [bp-2CCh]@73
  __int64 v136; // [sp+17Ch] [bp-2C4h]@73
  int v137; // [sp+184h] [bp-2BCh]@73
  int v138; // [sp+188h] [bp-2B8h]@73
  void *v139; // [sp+18Ch] [bp-2B4h]@69
  __int64 v140; // [sp+194h] [bp-2ACh]@69
  _DWORD *v141; // [sp+19Ch] [bp-2A4h]@69
  __int64 v142; // [sp+1A4h] [bp-29Ch]@69
  int v143; // [sp+1ACh] [bp-294h]@69
  int v144; // [sp+1B0h] [bp-290h]@69
  void *v145; // [sp+1B4h] [bp-28Ch]@65
  __int64 v146; // [sp+1BCh] [bp-284h]@65
  _DWORD *v147; // [sp+1C4h] [bp-27Ch]@65
  __int64 v148; // [sp+1CCh] [bp-274h]@65
  int v149; // [sp+1D4h] [bp-26Ch]@65
  int v150; // [sp+1D8h] [bp-268h]@65
  void *v151; // [sp+1DCh] [bp-264h]@61
  __int64 v152; // [sp+1E4h] [bp-25Ch]@61
  _DWORD *v153; // [sp+1ECh] [bp-254h]@61
  __int64 v154; // [sp+1F4h] [bp-24Ch]@61
  int v155; // [sp+1FCh] [bp-244h]@61
  void *v156; // [sp+200h] [bp-240h]@57
  __int64 v157; // [sp+208h] [bp-238h]@57
  _DWORD *v158; // [sp+210h] [bp-230h]@57
  __int64 v159; // [sp+218h] [bp-228h]@57
  int v160; // [sp+220h] [bp-220h]@57
  void *v161; // [sp+224h] [bp-21Ch]@53
  __int64 v162; // [sp+22Ch] [bp-214h]@53
  _DWORD *v163; // [sp+234h] [bp-20Ch]@53
  __int64 v164; // [sp+23Ch] [bp-204h]@53
  int v165; // [sp+244h] [bp-1FCh]@53
  void *v166; // [sp+248h] [bp-1F8h]@49
  __int64 v167; // [sp+250h] [bp-1F0h]@49
  _DWORD *v168; // [sp+258h] [bp-1E8h]@49
  __int64 v169; // [sp+260h] [bp-1E0h]@49
  int v170; // [sp+268h] [bp-1D8h]@49
  int v171; // [sp+26Ch] [bp-1D4h]@49
  void *v172; // [sp+270h] [bp-1D0h]@45
  __int64 v173; // [sp+278h] [bp-1C8h]@45
  _DWORD *v174; // [sp+280h] [bp-1C0h]@45
  __int64 v175; // [sp+288h] [bp-1B8h]@45
  int v176; // [sp+290h] [bp-1B0h]@45
  int v177; // [sp+294h] [bp-1ACh]@45
  void *v178; // [sp+298h] [bp-1A8h]@41
  __int64 v179; // [sp+2A0h] [bp-1A0h]@41
  _DWORD *v180; // [sp+2A8h] [bp-198h]@41
  __int64 v181; // [sp+2B0h] [bp-190h]@41
  int v182; // [sp+2B8h] [bp-188h]@41
  void *v183; // [sp+2BCh] [bp-184h]@37
  __int64 v184; // [sp+2C4h] [bp-17Ch]@37
  _DWORD *v185; // [sp+2CCh] [bp-174h]@37
  __int64 v186; // [sp+2D4h] [bp-16Ch]@37
  int v187; // [sp+2DCh] [bp-164h]@37
  void *v188; // [sp+2E0h] [bp-160h]@33
  __int64 v189; // [sp+2E8h] [bp-158h]@33
  _DWORD *v190; // [sp+2F0h] [bp-150h]@33
  __int64 v191; // [sp+2F8h] [bp-148h]@33
  int v192; // [sp+300h] [bp-140h]@33
  int v193; // [sp+304h] [bp-13Ch]@33
  void *v194; // [sp+308h] [bp-138h]@29
  __int64 v195; // [sp+310h] [bp-130h]@29
  _DWORD *v196; // [sp+318h] [bp-128h]@29
  __int64 v197; // [sp+320h] [bp-120h]@29
  int v198; // [sp+328h] [bp-118h]@29
  int v199; // [sp+32Ch] [bp-114h]@29
  void *v200; // [sp+330h] [bp-110h]@25
  __int64 v201; // [sp+338h] [bp-108h]@25
  _DWORD *v202; // [sp+340h] [bp-100h]@25
  __int64 v203; // [sp+348h] [bp-F8h]@25
  int v204; // [sp+350h] [bp-F0h]@25
  int v205; // [sp+354h] [bp-ECh]@25
  void *v206; // [sp+358h] [bp-E8h]@21
  __int64 v207; // [sp+360h] [bp-E0h]@21
  _DWORD *v208; // [sp+368h] [bp-D8h]@21
  __int64 v209; // [sp+370h] [bp-D0h]@21
  int v210; // [sp+378h] [bp-C8h]@21
  void *v211; // [sp+37Ch] [bp-C4h]@17
  __int64 v212; // [sp+384h] [bp-BCh]@17
  _DWORD *v213; // [sp+38Ch] [bp-B4h]@17
  __int64 v214; // [sp+394h] [bp-ACh]@17
  int v215; // [sp+39Ch] [bp-A4h]@17
  void *v216; // [sp+3A0h] [bp-A0h]@13
  __int64 v217; // [sp+3A8h] [bp-98h]@13
  _DWORD *v218; // [sp+3B0h] [bp-90h]@13
  __int64 v219; // [sp+3B8h] [bp-88h]@13
  int v220; // [sp+3C0h] [bp-80h]@13
  void *v221; // [sp+3C4h] [bp-7Ch]@9
  __int64 v222; // [sp+3CCh] [bp-74h]@9
  _DWORD *v223; // [sp+3D4h] [bp-6Ch]@9
  __int64 v224; // [sp+3DCh] [bp-64h]@9
  int v225; // [sp+3E4h] [bp-5Ch]@9
  void *v226; // [sp+3E8h] [bp-58h]@5
  __int64 v227; // [sp+3F0h] [bp-50h]@5
  _DWORD *v228; // [sp+3F8h] [bp-48h]@5
  void (*v229)(void); // [sp+400h] [bp-40h]@5
  signed int (__fastcall *v230)(int **); // [sp+404h] [bp-3Ch]@5
  int v231; // [sp+408h] [bp-38h]@5
  void *v232; // [sp+40Ch] [bp-34h]@1
  void (*v233)(void); // [sp+414h] [bp-2Ch]@1
  signed int (*v234)(); // [sp+418h] [bp-28h]@1
  _DWORD *v235; // [sp+41Ch] [bp-24h]@1
  void (*v236)(void); // [sp+424h] [bp-1Ch]@1
  _BOOL4 (__fastcall *v237)(int); // [sp+428h] [bp-18h]@1
  int v238; // [sp+42Ch] [bp-14h]@1

  v1 = this;
  v238 = -1053620078;
  v2 = operator new(4u);
  *v2 = v1;
  v235 = v2;
  v237 = sub_11384EC;
  v236 = (void (*)(void))sub_11384FC;
  v232 = operator new(1u);
  v234 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v233 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v238, (int)&v235, (int)&v232);
  if ( v233 )
    v233();
  if ( v236 )
    v236();
  v231 = 360767942;
  v3 = operator new(4u);
  *v3 = v1;
  v228 = v3;
  v230 = sub_1138532;
  v229 = (void (*)(void))sub_1138554;
  v226 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v227 = v4;
  ScreenController::bindBool((int)v1, &v231, (int)&v228, (int)&v226);
  if ( (_DWORD)v227 )
    ((void (*)(void))v227)();
  if ( v229 )
    v229();
  v225 = -940102695;
  v5 = operator new(4u);
  LODWORD(v6) = sub_113859A;
  *v5 = v1;
  HIDWORD(v6) = sub_113858A;
  v223 = v5;
  v224 = v6;
  v221 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v222 = v7;
  ScreenController::bindBool((int)v1, &v225, (int)&v223, (int)&v221);
  if ( (_DWORD)v222 )
    ((void (*)(void))v222)();
  if ( (_DWORD)v224 )
    ((void (*)(void))v224)();
  v220 = -217212899;
  v8 = operator new(4u);
  LODWORD(v9) = sub_11385E2;
  *v8 = v1;
  HIDWORD(v9) = sub_11385D0;
  v218 = v8;
  v219 = v9;
  v216 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v217 = v10;
  ScreenController::bindBool((int)v1, &v220, (int)&v218, (int)&v216);
  if ( (_DWORD)v217 )
    ((void (*)(void))v217)();
  if ( (_DWORD)v219 )
    ((void (*)(void))v219)();
  v215 = 833178453;
  v11 = operator new(4u);
  LODWORD(v12) = sub_113862A;
  *v11 = v1;
  HIDWORD(v12) = sub_1138618;
  v213 = v11;
  v214 = v12;
  v211 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v212 = v13;
  ScreenController::bindBool((int)v1, &v215, (int)&v213, (int)&v211);
  if ( (_DWORD)v212 )
    ((void (*)(void))v212)();
  if ( (_DWORD)v214 )
    ((void (*)(void))v214)();
  v210 = -357373544;
  v14 = operator new(4u);
  LODWORD(v15) = sub_1138672;
  *v14 = v1;
  HIDWORD(v15) = sub_1138660;
  v208 = v14;
  v209 = v15;
  v206 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v207 = v16;
  ScreenController::bindBool((int)v1, &v210, (int)&v208, (int)&v206);
  if ( (_DWORD)v207 )
    ((void (*)(void))v207)();
  if ( (_DWORD)v209 )
    ((void (*)(void))v209)();
  v204 = 1576164227;
  v205 = -753494081;
  v17 = operator new(4u);
  LODWORD(v18) = sub_11386E8;
  *v17 = v1;
  HIDWORD(v18) = sub_11386A8;
  v202 = v17;
  v203 = v18;
  v200 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v201 = v19;
  ScreenController::bindStringForCollection((int)v1, &v205, &v204, (int)&v202, (int)&v200);
  if ( (_DWORD)v201 )
    ((void (*)(void))v201)();
  if ( (_DWORD)v203 )
    ((void (*)(void))v203)();
  v199 = -753494081;
  v198 = 1975946772;
  v20 = operator new(4u);
  LODWORD(v21) = sub_1138742;
  *v20 = v1;
  HIDWORD(v21) = sub_113871E;
  v196 = v20;
  v197 = v21;
  v194 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v195 = v22;
  ScreenController::bindBoolForCollection((int)v1, &v199, &v198, (int)&v196, (int)&v194);
  if ( (_DWORD)v195 )
    ((void (*)(void))v195)();
  if ( (_DWORD)v197 )
    ((void (*)(void))v197)();
  v193 = -753494081;
  v192 = -1961355617;
  v23 = operator new(4u);
  LODWORD(v24) = sub_1138AD4;
  *v23 = v1;
  HIDWORD(v24) = sub_1138778;
  v190 = v23;
  v191 = v24;
  v188 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v189 = v25;
  ScreenController::bindStringForCollection((int)v1, &v193, &v192, (int)&v190, (int)&v188);
  if ( (_DWORD)v189 )
    ((void (*)(void))v189)();
  if ( (_DWORD)v191 )
    ((void (*)(void))v191)();
  StringHash::StringHash<char [25]>(&v187, (int)"#prev_page_button_active");
  v26 = operator new(4u);
  LODWORD(v27) = sub_1138B1C;
  *v26 = v1;
  HIDWORD(v27) = sub_1138B0A;
  v185 = v26;
  v186 = v27;
  v183 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v184 = v28;
  ScreenController::bindBool((int)v1, &v187, (int)&v185, (int)&v183);
  if ( (_DWORD)v184 )
    ((void (*)(void))v184)();
  if ( (_DWORD)v186 )
    ((void (*)(void))v186)();
  StringHash::StringHash<char [25]>(&v182, (int)"#next_page_button_active");
  v29 = operator new(4u);
  LODWORD(v30) = sub_1138B88;
  *v29 = v1;
  HIDWORD(v30) = sub_1138B54;
  v180 = v29;
  v181 = v30;
  v178 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v179 = v31;
  ScreenController::bindBool((int)v1, &v182, (int)&v180, (int)&v178);
  if ( (_DWORD)v179 )
    ((void (*)(void))v179)();
  if ( (_DWORD)v181 )
    ((void (*)(void))v181)();
  v177 = -753494081;
  v176 = -978140024;
  v32 = operator new(4u);
  LODWORD(v33) = sub_1138BD2;
  *v32 = v1;
  HIDWORD(v33) = sub_1138BBE;
  v174 = v32;
  v175 = v33;
  v172 = operator new(1u);
  LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v34) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v173 = v34;
  ScreenController::bindBoolForCollection((int)v1, &v177, &v176, (int)&v174, (int)&v172);
  if ( (_DWORD)v173 )
    ((void (*)(void))v173)();
  if ( (_DWORD)v175 )
    ((void (*)(void))v175)();
  v171 = -753494081;
  v170 = -1340585634;
  v35 = operator new(4u);
  LODWORD(v36) = sub_1138C54;
  *v35 = v1;
  HIDWORD(v36) = sub_1138C08;
  v168 = v35;
  v169 = v36;
  v166 = operator new(1u);
  LODWORD(v37) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v37) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v167 = v37;
  ScreenController::bindBoolForCollection((int)v1, &v171, &v170, (int)&v168, (int)&v166);
  if ( (_DWORD)v167 )
    ((void (*)(void))v167)();
  if ( (_DWORD)v169 )
    ((void (*)(void))v169)();
  StringHash::StringHash<char [26]>(&v165, (int)"#title_text_box_item_name");
  v38 = operator new(4u);
  LODWORD(v39) = sub_1138C9A;
  *v38 = v1;
  HIDWORD(v39) = sub_1138C8A;
  v163 = v38;
  v164 = v39;
  v161 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v162 = v40;
  ScreenController::bindString((int)v1, &v165, (int)&v163, (int)&v161);
  if ( (_DWORD)v162 )
    ((void (*)(void))v162)();
  if ( (_DWORD)v164 )
    ((void (*)(void))v164)();
  StringHash::StringHash<char [25]>(&v160, (int)"#finalize_button_enabled");
  v41 = operator new(4u);
  LODWORD(v42) = sub_1138CF0;
  *v41 = v1;
  HIDWORD(v42) = sub_1138CD0;
  v158 = v41;
  v159 = v42;
  v156 = operator new(1u);
  LODWORD(v43) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v43) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v157 = v43;
  ScreenController::bindBool((int)v1, &v160, (int)&v158, (int)&v156);
  if ( (_DWORD)v157 )
    ((void (*)(void))v157)();
  if ( (_DWORD)v159 )
    ((void (*)(void))v159)();
  StringHash::StringHash<char [27]>(&v155, (int)"#author_text_box_item_name");
  v44 = operator new(4u);
  LODWORD(v45) = sub_1138D36;
  *v44 = v1;
  HIDWORD(v45) = sub_1138D26;
  v153 = v44;
  v154 = v45;
  v151 = operator new(1u);
  LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v46) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v152 = v46;
  ScreenController::bindString((int)v1, &v155, (int)&v153, (int)&v151);
  if ( (_DWORD)v152 )
    ((void (*)(void))v152)();
  if ( (_DWORD)v154 )
    ((void (*)(void))v154)();
  v150 = -753494081;
  v149 = 1241815870;
  v47 = operator new(4u);
  LODWORD(v48) = sub_1138D82;
  *v47 = v1;
  HIDWORD(v48) = sub_1138D6C;
  v147 = v47;
  v148 = v48;
  v145 = operator new(1u);
  LODWORD(v49) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v49) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v146 = v49;
  ScreenController::bindBoolForCollection((int)v1, &v150, &v149, (int)&v147, (int)&v145);
  if ( (_DWORD)v146 )
    ((void (*)(void))v146)();
  if ( (_DWORD)v148 )
    ((void (*)(void))v148)();
  v144 = -753494081;
  v143 = 776780915;
  v50 = operator new(4u);
  LODWORD(v51) = sub_1138DDC;
  *v50 = v1;
  HIDWORD(v51) = sub_1138DB8;
  v141 = v50;
  v142 = v51;
  v139 = operator new(1u);
  LODWORD(v52) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v52) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v140 = v52;
  ScreenController::bindBoolForCollection((int)v1, &v144, &v143, (int)&v141, (int)&v139);
  if ( (_DWORD)v140 )
    ((void (*)(void))v140)();
  if ( (_DWORD)v142 )
    ((void (*)(void))v142)();
  v138 = -753494081;
  v137 = -1648179758;
  v53 = operator new(4u);
  LODWORD(v54) = sub_1138E4C;
  *v53 = v1;
  HIDWORD(v54) = sub_1138E14;
  v135 = v53;
  v136 = v54;
  v133 = operator new(1u);
  LODWORD(v55) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v55) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v134 = v55;
  ScreenController::bindBoolForCollection((int)v1, &v138, &v137, (int)&v135, (int)&v133);
  if ( (_DWORD)v134 )
    ((void (*)(void))v134)();
  if ( (_DWORD)v136 )
    ((void (*)(void))v136)();
  v132 = -753494081;
  StringHash::StringHash<char [26]>(&v131, (int)"#insert_photo_page_active");
  v56 = operator new(4u);
  LODWORD(v57) = sub_1138EC8;
  *v56 = v1;
  HIDWORD(v57) = sub_1138E84;
  v129 = v56;
  v130 = v57;
  v127 = operator new(1u);
  LODWORD(v58) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v58) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v128 = v58;
  ScreenController::bindBoolForCollection((int)v1, &v132, &v131, (int)&v129, (int)&v127);
  if ( (_DWORD)v128 )
    ((void (*)(void))v128)();
  if ( (_DWORD)v130 )
    ((void (*)(void))v130)();
  v126 = -753494081;
  v125 = 596980506;
  v59 = operator new(4u);
  LODWORD(v60) = sub_1138F40;
  *v59 = v1;
  HIDWORD(v60) = sub_1138EFE;
  v123 = v59;
  v124 = v60;
  v121 = operator new(1u);
  LODWORD(v61) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v61) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v122 = v61;
  ScreenController::bindBoolForCollection((int)v1, &v126, &v125, (int)&v123, (int)&v121);
  if ( (_DWORD)v122 )
    ((void (*)(void))v122)();
  if ( (_DWORD)v124 )
    ((void (*)(void))v124)();
  v120 = -753494081;
  v119 = 2007166517;
  v62 = operator new(4u);
  LODWORD(v63) = sub_1138FB8;
  *v62 = v1;
  HIDWORD(v63) = sub_1138F76;
  v117 = v62;
  v118 = v63;
  v115 = operator new(1u);
  LODWORD(v64) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v64) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v116 = v64;
  ScreenController::bindBoolForCollection((int)v1, &v120, &v119, (int)&v117, (int)&v115);
  if ( (_DWORD)v116 )
    ((void (*)(void))v116)();
  if ( (_DWORD)v118 )
    ((void (*)(void))v118)();
  v114 = -753494081;
  v65 = -1447178516;
  v113 = -1447178516;
  v66 = operator new(4u);
  LODWORD(v67) = sub_1139034;
  *v66 = v1;
  HIDWORD(v67) = sub_1138FF0;
  v111 = v66;
  v112 = v67;
  v109 = operator new(1u);
  LODWORD(v68) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v68) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v110 = v68;
  ScreenController::bindStringForCollection((int)v1, &v114, &v113, (int)&v111, (int)&v109);
  if ( (_DWORD)v110 )
    ((void (*)(void))v110)();
  if ( (_DWORD)v112 )
    ((void (*)(void))v112)();
  v108 = 1969995820;
  v69 = operator new(4u);
  LODWORD(v70) = sub_1139086;
  *v69 = v1;
  HIDWORD(v70) = sub_113906A;
  v106 = v69;
  v107 = v70;
  v104 = operator new(1u);
  LODWORD(v71) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v71) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v105 = v71;
  ScreenController::bindGridSize((int)v1, &v108, (int)&v106, (int)&v104);
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  if ( (_DWORD)v107 )
    ((void (*)(void))v107)();
  v72 = -1121965903;
  v103 = *(_QWORD *)&v65;
  v73 = operator new(4u);
  LODWORD(v74) = sub_11390E4;
  *v73 = v1;
  HIDWORD(v74) = sub_11390BC;
  v101 = v73;
  v102 = v74;
  v99 = operator new(1u);
  LODWORD(v75) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v75) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v100 = v75;
  ScreenController::bindStringForCollection((int)v1, (int *)&v103 + 1, (int *)&v103, (int)&v101, (int)&v99);
  if ( (_DWORD)v100 )
    ((void (*)(void))v100)();
  if ( (_DWORD)v102 )
    ((void (*)(void))v102)();
  v98 = -1121965903;
  v97 = -984217026;
  v76 = operator new(4u);
  LODWORD(v77) = sub_1139130;
  *v76 = v1;
  HIDWORD(v77) = sub_113911A;
  v95 = v76;
  v96 = v77;
  v93 = operator new(1u);
  LODWORD(v78) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v78) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v94 = v78;
  ScreenController::bindBoolForCollection((int)v1, &v98, &v97, (int)&v95, (int)&v93);
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  v92 = -900593982;
  v89 = operator new(1u);
  v90 = (void (*)(void))sub_1139180;
  v91 = sub_1139168;
  v87 = operator new(1u);
  LODWORD(v79) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v79) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v88 = v79;
  ScreenController::bindString((int)v1, &v92, (int)&v89, (int)&v87);
  if ( (_DWORD)v88 )
    ((void (*)(void))v88)();
  if ( v90 )
    v90();
  v86 = -2098303291;
  v83 = operator new(1u);
  v84 = (void (*)(void))sub_11391C8;
  v85 = sub_11391B0;
  v81 = operator new(1u);
  LODWORD(v80) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v80) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v82 = v80;
  ScreenController::bindString((int)v1, &v86, (int)&v83, (int)&v81);
  if ( (_DWORD)v82 )
    ((void (*)(void))v82)();
  if ( v84 )
    v84();
}


void __fastcall BookScreenController::_addPhotoPageAt(int a1, int a2, int *a3)
{
  int v3; // r4@1
  BookScreenController *v4; // r5@1
  char *v5; // r0@4
  char *v6; // r0@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  char *v11; // [sp+0h] [bp-28h]@4
  char *v12; // [sp+4h] [bp-24h]@4

  v3 = a2;
  v4 = (BookScreenController *)a1;
  if ( a2 >= 0 && *(_BYTE *)(a1 + 436) && (signed int)((*(_QWORD *)(a1 + 440) >> 32) - *(_QWORD *)(a1 + 440)) >> 3 < 50 )
  {
    v11 = (char *)&unk_28898CC;
    v12 = (char *)&unk_28898CC;
    EntityInteraction::setInteractText((int *)&v12, a3);
    BookScreenController::_addPageAt(v4, v3, (const PageContent *)&v11);
    v5 = v12 - 12;
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v12 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    v6 = v11 - 12;
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v11 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
  }
}


void __fastcall BookScreenController::_tickExport(BookScreenController *this)
{
  BookScreenController *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  Entity **v8; // r7@3
  JpegCommentWriter *v9; // r6@3
  _DWORD *v10; // r0@3
  __int64 v11; // r1@3 OVERLAPPED
  JpegCommentWriter *v12; // r3@3
  const void **v14; // r0@6
  const void **v15; // r0@6
  const void **v16; // r0@6
  char *v17; // r0@6
  void *v18; // r0@7
  __int64 *v19; // r5@8
  void *v20; // r0@8
  __int64 v21; // r1@8
  void *v22; // r0@10
  char *v23; // r0@11
  JpegCommentWriter *v24; // r0@13
  unsigned int *v25; // r2@15
  signed int v26; // r1@17
  unsigned int *v27; // r2@19
  signed int v28; // r1@21
  unsigned int *v29; // r2@23
  signed int v30; // r1@25
  unsigned int *v31; // r2@27
  signed int v32; // r1@29
  void *v33; // [sp+8h] [bp-98h]@8
  __int64 v34; // [sp+10h] [bp-90h]@8
  int v35; // [sp+1Ch] [bp-84h]@8
  int v36; // [sp+20h] [bp-80h]@6
  char *v37; // [sp+24h] [bp-7Ch]@6
  char *v38; // [sp+28h] [bp-78h]@6
  _DWORD *v39; // [sp+2Ch] [bp-74h]@3
  __int64 v40; // [sp+34h] [bp-6Ch]@3
  char v41; // [sp+3Ch] [bp-64h]@3
  JpegCommentWriter *v42; // [sp+78h] [bp-28h]@3

  v1 = this;
  v2 = (unsigned __int64 *)((char *)this + 440);
  _R0 = BookScreenManager::tickBookDownload(*((BookScreenManager **)this + 108), (unsigned __int64 *)this + 55);
  __asm
  {
    VMOV.F32        S16, #1.0
    VMOV            S0, R0
    VCMPE.F32       S0, S16
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) && MinecraftScreenModel::isEduMode(*((MinecraftScreenModel **)v1 + 106)) == 1 )
    MinecraftScreenModel::createJpegCommentWriter((MinecraftScreenModel *)&v42, *((_DWORD *)v1 + 106));
    MinecraftScreenModel::getScreenContext_DEPRECATED_DO_NOT_USE((MinecraftScreenModel *)&v41, *((float *)v1 + 106), 0);
    v8 = (Entity **)*((_DWORD *)v1 + 108);
    v9 = v42;
    v10 = operator new(4u);
    LODWORD(v11) = sub_1139B94;
    *v10 = v1;
    HIDWORD(v11) = sub_1139B84;
    v39 = v10;
    v40 = v11;
    HIDWORD(v11) = &v41;
    v12 = v9;
    _R5 = BookScreenManager::buildExportFiles(v8, v2, *(__int64 *)((char *)&v11 + 4), (int)&v39);
    if ( (_DWORD)v40 )
      ((void (*)(void))v40)();
    __asm
    {
      VMOV            S0, R5
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      *((_WORD *)v1 + 232) = 256;
      MinecraftScreenModel::filterProfanityFromString((int)&v36, *((_DWORD *)v1 + 106));
      v14 = sub_119C894((const void **)&v36, " ", 1u);
      v37 = (char *)*v14;
      *v14 = &unk_28898CC;
      v15 = BookScreenManager::getSignedAuthor(*((BookScreenManager **)v1 + 108));
      v16 = sub_119C8A4((const void **)&v37, v15);
      v38 = (char *)*v16;
      *v16 = &unk_28898CC;
      v17 = v37 - 12;
      if ( (int *)(v37 - 12) != &dword_28898C0 )
      {
        v25 = (unsigned int *)(v37 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
        }
        else
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v17);
      }
      v18 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v36 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v18);
      v19 = (__int64 *)BookScreenManager::getExportFiles(*((BookScreenManager **)v1 + 108));
      sub_119C884((void **)&v35, "FileBrowser.Rift.ExportBook");
      v20 = operator new(1u);
      LODWORD(v21) = sub_1139BCC;
      v33 = v20;
      HIDWORD(v21) = nullsub_6;
      v34 = v21;
      MinecraftScreenController::exportScreenshotsToZipFile((int)v1, v19, &v35, (int **)&v38, (int)&v33);
      if ( (_DWORD)v34 )
        ((void (*)(void))v34)();
      v22 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v35 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
      v23 = v38 - 12;
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v38 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
    if ( v42 )
      v24 = JpegCommentWriter::~JpegCommentWriter(v42);
      operator delete((void *)v24);
}


void __fastcall BookScreenController::~BookScreenController(BookScreenController *this)
{
  BookScreenController *v1; // r0@1

  v1 = BookScreenController::~BookScreenController(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall BookScreenController::_addPageAt(BookScreenController *this, int a2, const PageContent *a3)
{
  BookScreenController::_addPageAt(this, a2, a3);
}


void __fastcall BookScreenController::_addTextPageAt(int a1, int a2, int *a3)
{
  int v3; // r4@1
  BookScreenController *v4; // r5@1
  void *v5; // r0@4
  char *v6; // r0@5
  void *v7; // r0@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  int v14; // [sp+0h] [bp-20h]@4
  int v15; // [sp+4h] [bp-1Ch]@4
  char *v16; // [sp+8h] [bp-18h]@4

  v3 = a2;
  v4 = (BookScreenController *)a1;
  if ( a2 >= 0 && *(_BYTE *)(a1 + 436) && (signed int)((*(_QWORD *)(a1 + 440) >> 32) - *(_QWORD *)(a1 + 440)) >> 3 < 50 )
  {
    sub_119C854(&v14, a3);
    sub_119C854(&v15, &v14);
    v16 = (char *)&unk_28898CC;
    v5 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    BookScreenController::_addPageAt(v4, v3, (const PageContent *)&v15);
    v6 = v16 - 12;
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v16 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
    v7 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v15 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
  }
}


unsigned int __fastcall BookScreenController::_viewPage(BookScreenController *this, int a2)
{
  BookScreenController *v2; // r4@1
  int v3; // r2@1
  unsigned int result; // r0@1

  v2 = this;
  v3 = *((_QWORD *)this + 55);
  result = (signed int)((*((_QWORD *)this + 55) >> 32) - v3) >> 3;
  if ( result > a2 )
  {
    if ( BookScreenManager::viewPage(*((BookScreenManager **)v2 + 108), (const PageContent *)(v3 + 8 * a2)) )
      result = 1;
    else
      result = *((_BYTE *)v2 + 465);
    *((_BYTE *)v2 + 465) = result;
  }
  return result;
}


int __fastcall BookScreenController::_getPage(BookScreenController *this, int a2)
{
  int v2; // r2@1
  unsigned int v3; // r3@1
  int result; // r0@1

  v2 = *((_QWORD *)this + 55);
  v3 = (signed int)((*((_QWORD *)this + 55) >> 32) - v2) >> 3;
  result = 0;
  if ( v3 > a2 )
    result = v2 + 8 * a2;
  return result;
}


void __fastcall BookScreenController::_swapPages(BookScreenController *this, int a2, int a3)
{
  BookScreenController::_swapPages(this, a2, a3);
}


void __fastcall BookScreenController::_addPageAt(BookScreenController *this, int a2, const PageContent *a3)
{
  BookScreenController *v3; // r6@1
  int v4; // r5@1
  int v5; // r0@1
  int v6; // r7@1
  const PageContent *v7; // r8@1
  int v8; // r1@1
  signed int v9; // r0@3

  v3 = this;
  v4 = a2;
  v6 = *((_QWORD *)this + 55) >> 32;
  v5 = *((_QWORD *)this + 55);
  v7 = a3;
  v8 = (v6 - v5) >> 3;
  if ( v8 <= v4 )
  {
    v9 = 0;
    if ( v6 == *((_DWORD *)v3 + 112) )
      v9 = 1;
    if ( v8 < v4 )
    {
      do
      {
        if ( v9 & 1 )
        {
          std::vector<PageContent,std::allocator<PageContent>>::_M_emplace_back_aux<PageContent const&>(
            (_QWORD *)v3 + 55,
            (int)&PageContent::BLANK_PAGE);
          v6 = *((_DWORD *)v3 + 111);
        }
        else
          sub_119C854((int *)v6, (int *)&PageContent::BLANK_PAGE);
          sub_119C854((int *)(v6 + 4), (int *)&unk_28082D0);
          v6 = *((_DWORD *)v3 + 111) + 8;
          *((_DWORD *)v3 + 111) = v6;
        v9 = 0;
        if ( v6 == *((_DWORD *)v3 + 112) )
          v9 = 1;
      }
      while ( (v6 - *((_DWORD *)v3 + 110)) >> 3 < v4 );
    }
    if ( v9 )
      std::vector<PageContent,std::allocator<PageContent>>::_M_emplace_back_aux<PageContent const&>(
        (_QWORD *)v3 + 55,
        (int)v7);
    else
      sub_119C854((int *)v6, (int *)v7);
      sub_119C854((int *)(v6 + 4), (int *)v7 + 1);
      *((_DWORD *)v3 + 111) += 8;
  }
  else
    std::vector<PageContent,std::allocator<PageContent>>::insert((int)v3 + 440, v5 + 8 * v4, (int *)a3);
  j_j_j__ZN17BookScreenManager9addPageAtEiRK11PageContent(*((BookScreenManager **)v3 + 108), v4, v7);
}


BookScreenController *__fastcall BookScreenController::~BookScreenController(BookScreenController *this)
{
  BookScreenController *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r5@3 OVERLAPPED
  int v7; // r6@3 OVERLAPPED
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  int v12; // r1@21
  void *v13; // r0@21
  int *v14; // r0@22
  BookScreenManager *v15; // r0@27
  BookScreenManager *v16; // r0@28
  unsigned int *v18; // r2@30
  signed int v19; // r1@32
  unsigned int *v20; // r2@34
  signed int v21; // r1@36

  v1 = this;
  *(_DWORD *)this = &off_26E0F80;
  BookScreenManager::sendBookEditedEvent(*((BookScreenManager **)this + 108));
  v2 = *((_DWORD *)v1 + 115);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 114);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v4 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  *(_QWORD *)&v6 = *((_QWORD *)v1 + 55);
  if ( v6 != v7 )
    do
      v12 = *(_DWORD *)(v6 + 4);
      v13 = (void *)(v12 - 12);
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
          j_j_j_j_j__ZdlPv_9_1(v13);
      }
      v14 = (int *)(*(_DWORD *)v6 - 12);
      if ( v14 != &dword_28898C0 )
        v10 = (unsigned int *)(*(_DWORD *)v6 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v14);
      v6 += 8;
    while ( v6 != v7 );
    v6 = *((_DWORD *)v1 + 110);
  if ( v6 )
    operator delete((void *)v6);
  v15 = (BookScreenManager *)*((_DWORD *)v1 + 108);
  if ( v15 )
    v16 = BookScreenManager::~BookScreenManager(v15);
    operator delete((void *)v16);
  *((_DWORD *)v1 + 108) = 0;
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  return v1;
}


void __fastcall BookScreenController::_deletePage(BookScreenController *this, int a2)
{
  BookScreenController::_deletePage(this, a2);
}


void __fastcall BookScreenController::_deletePage(BookScreenController *this, int a2)
{
  int v2; // r4@1
  BookScreenController *v3; // r5@1
  __int64 v4; // r0@3
  const PageContent *v5; // r7@4
  __int64 v6; // kr00_8@6
  int v7; // r6@13

  v2 = a2;
  v3 = this;
  if ( a2 >= 0 )
  {
    if ( *((_BYTE *)this + 436) )
    {
      v4 = *((_QWORD *)this + 55);
      if ( (HIDWORD(v4) - (signed int)v4) >> 3 > v2 )
      {
        v5 = (const PageContent *)(v4 + 8 * v2);
        if ( PageContent::getType((PageContent *)(v4 + 8 * v2)) == 1 )
          BookScreenManager::addPickPicture(*((BookScreenManager **)v3 + 108), v5);
        v6 = *((_QWORD *)v3 + 55);
        if ( HIDWORD(v6) - (signed int)v6 > 15 )
        {
          std::vector<PageContent,std::allocator<PageContent>>::_M_erase((int)v3 + 440, v6 + 8 * v2);
          j_j_j__ZN17BookScreenManager10deletePageEi(*((BookScreenManager **)v3 + 108), v2);
        }
        else
          if ( (_DWORD)v6 == HIDWORD(v6) )
          {
            if ( (_DWORD)v6 == *((_DWORD *)v3 + 112) )
            {
              std::vector<PageContent,std::allocator<PageContent>>::_M_emplace_back_aux<PageContent const&>(
                (_QWORD *)v3 + 55,
                (int)&PageContent::BLANK_PAGE);
            }
            else
              sub_119C854((int *)v6, (int *)&PageContent::BLANK_PAGE);
              sub_119C854((int *)(v6 + 4), (int *)&unk_28082D0);
              *((_DWORD *)v3 + 111) += 8;
          }
          v7 = *((_DWORD *)v3 + 110);
          EntityInteraction::setInteractText(*((int **)v3 + 110), (int *)&PageContent::BLANK_PAGE);
          EntityInteraction::setInteractText((int *)(v7 + 4), (int *)&unk_28082D0);
          j_j_j__ZN17BookScreenManager8editPageEiRK11PageContent(
            *((BookScreenManager **)v3 + 108),
            v2,
            *((const PageContent **)v3 + 110));
      }
    }
  }
}


void **__fastcall BookScreenController::_getButtonBDescription(BookScreenController *this, int a2)
{
  void **result; // r0@2

  if ( *(_BYTE *)(a2 + 464) )
    result = sub_119C884((void **)this, "controller.buttonTip.back");
  else
    result = sub_119C884((void **)this, "controller.buttonTip.exit");
  return result;
}


void __fastcall BookScreenController::_addTextPageAt(int a1, int a2, int *a3)
{
  BookScreenController::_addTextPageAt(a1, a2, a3);
}


void __fastcall BookScreenController::_loadTextFromBook(BookScreenController *this)
{
  BookScreenController::_loadTextFromBook(this);
}


const void **__fastcall BookScreenController::_getPageText(BookScreenController *this, int a2)
{
  __int64 v2; // kr00_8@2
  const void **result; // r0@3

  if ( a2 < 0 )
  {
    result = &Util::EMPTY_STRING;
  }
  else
    v2 = *((_QWORD *)this + 55);
    if ( (HIDWORD(v2) - (signed int)v2) >> 3 <= a2 )
      result = &Util::EMPTY_STRING;
    else
      result = (const void **)(v2 + 8 * a2);
  return result;
}


void __fastcall BookScreenController::~BookScreenController(BookScreenController *this)
{
  BookScreenController::~BookScreenController(this);
}


int *__fastcall BookScreenController::_loadTitleFromBook(BookScreenController *this)
{
  int *v1; // r4@1
  int *v2; // r1@1

  v1 = (int *)((char *)this + 456);
  v2 = (int *)BookScreenManager::getTitle(*((BookScreenManager **)this + 108));
  return j_EntityInteraction::setInteractText(v1, v2);
}


void __fastcall BookScreenController::_registerBindings(BookScreenController *this)
{
  BookScreenController::_registerBindings(this);
}


signed int __fastcall BookScreenController::_signBook(BookScreenController *this)
{
  int v1; // r1@2
  bool v2; // zf@2
  signed int result; // r0@5

  if ( !*((_BYTE *)this + 436) )
    goto LABEL_9;
  v1 = *(_DWORD *)(*((_DWORD *)this + 114) - 12);
  v2 = v1 == 0;
  if ( v1 )
    v2 = *(_DWORD *)(*((_DWORD *)this + 115) - 12) == 0;
  if ( v2 )
LABEL_9:
    result = 0;
  else
    result = BookScreenManager::finalizeBook(*((Player ***)this + 108), (int *)this + 114, (int *)this + 115);
  return result;
}
