

Json::Value *__fastcall ChalkboardScreenController::addStaticScreenVars(ChalkboardScreenController *this, Json::Value *a2)
{
  ChalkboardScreenController *v2; // r8@1
  Json::Value *v3; // r9@1
  BlockEntity *v4; // r5@1
  int v5; // r6@2
  char v6; // r0@2
  signed int v7; // r7@5
  signed int v8; // r5@9
  int v9; // r4@13
  const void **v10; // r0@13
  char *v11; // r0@13
  void *v12; // r0@14
  int v13; // r4@15
  const void **v14; // r0@15
  char *v15; // r0@15
  void *v16; // r0@16
  int v17; // r4@17
  const void **v18; // r0@17
  char *v19; // r0@17
  void *v20; // r0@18
  int v21; // r4@19
  const void **v22; // r0@19
  char *v23; // r0@19
  void *v24; // r0@20
  int v25; // r4@24
  int v26; // r4@24
  int v27; // r4@24
  int v28; // r4@24
  int v29; // r0@27
  int v30; // r0@27
  int v31; // r0@27
  int v32; // r5@27
  void *v33; // r0@27
  void *v34; // r0@28
  void *v35; // r0@29
  unsigned int *v37; // r2@31
  signed int v38; // r1@33
  unsigned int *v39; // r2@35
  signed int v40; // r1@37
  unsigned int *v41; // r2@39
  signed int v42; // r1@41
  unsigned int *v43; // r2@43
  signed int v44; // r1@45
  unsigned int *v45; // r2@47
  signed int v46; // r1@49
  unsigned int *v47; // r2@51
  signed int v48; // r1@53
  unsigned int *v49; // r2@55
  signed int v50; // r1@57
  unsigned int *v51; // r2@59
  signed int v52; // r1@61
  unsigned int *v53; // r2@63
  signed int v54; // r1@65
  unsigned int *v55; // r2@67
  signed int v56; // r1@69
  unsigned int *v57; // r2@71
  signed int v58; // r1@73
  int v59; // [sp+0h] [bp-118h]@27
  int v60; // [sp+4h] [bp-114h]@27
  char v61; // [sp+8h] [bp-110h]@27
  int v62; // [sp+18h] [bp-100h]@19
  char *v63; // [sp+1Ch] [bp-FCh]@19
  char v64; // [sp+20h] [bp-F8h]@19
  int v65; // [sp+30h] [bp-E8h]@17
  char *v66; // [sp+34h] [bp-E4h]@17
  char v67; // [sp+38h] [bp-E0h]@17
  int v68; // [sp+48h] [bp-D0h]@15
  char *v69; // [sp+4Ch] [bp-CCh]@15
  char v70; // [sp+50h] [bp-C8h]@15
  int v71; // [sp+60h] [bp-B8h]@13
  char *v72; // [sp+64h] [bp-B4h]@13
  char v73; // [sp+68h] [bp-B0h]@13
  char v74; // [sp+80h] [bp-98h]@24
  char v75; // [sp+90h] [bp-88h]@24
  char v76; // [sp+A0h] [bp-78h]@24
  char v77; // [sp+B0h] [bp-68h]@24
  int v78; // [sp+C4h] [bp-54h]@1
  char v79; // [sp+C8h] [bp-50h]@1
  char v80; // [sp+D8h] [bp-40h]@1
  char v81; // [sp+E8h] [bp-30h]@1

  v2 = this;
  v3 = a2;
  Json::Value::Value(&v81, 6);
  Json::Value::Value(&v80, 6);
  Json::Value::Value((Json::Value *)&v79, 0xFFFFFFFF);
  v4 = ClientInstanceScreenModel::getBlockEntity(
         *((_DWORD *)v2 + 106),
         (ChalkboardScreenController *)((char *)v2 + 432),
         20);
  sub_119C884((void **)&v78, "tile.chalkboard.oneByOne");
  if ( v4 )
  {
    v5 = ClientInstanceScreenModel::getChalkboardType(
           *((ClientInstanceScreenModel **)v2 + 106),
           (ChalkboardScreenController *)((char *)v2 + 432));
    v6 = byte_27DA4E0;
    __dmb();
    if ( !(v6 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27DA4E0) )
    {
      sub_119C884((void **)&dword_27DA4DC, "px");
      _cxa_atexit(sub_21E6EDC);
      j___cxa_guard_release((unsigned int *)&byte_27DA4E0);
    }
    v7 = 66;
    if ( v5 == 2 )
      v7 = 156;
    if ( v5 == 1 )
      v7 = 66;
    v8 = 85;
      v8 = 277;
      v8 = 181;
    v9 = Json::Value::operator[]((int)&v81, 0);
    Util::toString<int,(void *)0,(void *)0>((void **)&v71, v8);
    v10 = sub_119C8A4((const void **)&v71, &dword_27DA4DC);
    v72 = (char *)*v10;
    *v10 = &unk_28898CC;
    Json::Value::Value((int)&v73, (const char **)&v72);
    Json::Value::operator=(v9, (const Json::Value *)&v73);
    Json::Value::~Value((Json::Value *)&v73);
    v11 = v72 - 12;
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v72 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
      }
      else
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
    v12 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v71 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    v13 = Json::Value::operator[]((int)&v81, 1u);
    Util::toString<int,(void *)0,(void *)0>((void **)&v68, v7);
    v14 = sub_119C8A4((const void **)&v68, &dword_27DA4DC);
    v69 = (char *)*v14;
    *v14 = &unk_28898CC;
    Json::Value::Value((int)&v70, (const char **)&v69);
    Json::Value::operator=(v13, (const Json::Value *)&v70);
    Json::Value::~Value((Json::Value *)&v70);
    v15 = v69 - 12;
    if ( (int *)(v69 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v69 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = (void *)(v68 - 12);
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v68 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    v17 = Json::Value::operator[]((int)&v80, 0);
    Util::toString<int,(void *)0,(void *)0>((void **)&v65, v8 + 26);
    v18 = sub_119C8A4((const void **)&v65, &dword_27DA4DC);
    v66 = (char *)*v18;
    *v18 = &unk_28898CC;
    Json::Value::Value((int)&v67, (const char **)&v66);
    Json::Value::operator=(v17, (const Json::Value *)&v67);
    Json::Value::~Value((Json::Value *)&v67);
    v19 = v66 - 12;
    if ( (int *)(v66 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v66 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    v20 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v65 - 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
    v21 = Json::Value::operator[]((int)&v80, 1u);
    Util::toString<int,(void *)0,(void *)0>((void **)&v62, v7 + 54);
    v22 = sub_119C8A4((const void **)&v62, &dword_27DA4DC);
    v63 = (char *)*v22;
    *v22 = &unk_28898CC;
    Json::Value::Value((int)&v64, (const char **)&v63);
    Json::Value::operator=(v21, (const Json::Value *)&v64);
    Json::Value::~Value((Json::Value *)&v64);
    v23 = v63 - 12;
    if ( (int *)(v63 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v63 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v23);
    v24 = (void *)(v62 - 12);
    if ( (int *)(v62 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v62 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v24);
      sub_119CAD8((void **)&v78, "tile.chalkboard.twoByOne", (_BYTE *)0x18);
    else if ( v5 == 2 )
      sub_119CAD8((void **)&v78, "tile.chalkboard.threeByTwo", (_BYTE *)0x1A);
    else
      sub_119CAD8((void **)&v78, "tile.chalkboard.oneByOne", (_BYTE *)0x18);
  }
  else
    v25 = Json::Value::operator[]((int)&v81, 0);
    Json::Value::Value((Json::Value *)&v77, "95%");
    Json::Value::operator=(v25, (const Json::Value *)&v77);
    Json::Value::~Value((Json::Value *)&v77);
    v26 = Json::Value::operator[]((int)&v81, 1u);
    Json::Value::Value((Json::Value *)&v76, "70%");
    Json::Value::operator=(v26, (const Json::Value *)&v76);
    Json::Value::~Value((Json::Value *)&v76);
    v27 = Json::Value::operator[]((int)&v80, 0);
    Json::Value::Value((Json::Value *)&v75, "80%");
    Json::Value::operator=(v27, (const Json::Value *)&v75);
    Json::Value::~Value((Json::Value *)&v75);
    v28 = Json::Value::operator[]((int)&v80, 1u);
    Json::Value::Value((Json::Value *)&v74, "80%");
    Json::Value::operator=(v28, (const Json::Value *)&v74);
    Json::Value::~Value((Json::Value *)&v74);
  v29 = Json::Value::operator[](v3, "$text_max_length");
  Json::Value::operator=(v29, (const Json::Value *)&v79);
  v30 = Json::Value::operator[](v3, "$text_box_size");
  Json::Value::operator=(v30, (const Json::Value *)&v81);
  v31 = Json::Value::operator[](v3, "$text_panel_size");
  Json::Value::operator=(v31, (const Json::Value *)&v80);
  v32 = Json::Value::operator[](v3, "$chalkboard_name");
  sub_119C854(&v59, &v78);
  sub_119C894((const void **)&v59, ".name", 5u);
  I18n::get(&v60, (int **)&v59);
  Json::Value::Value((int)&v61, (const char **)&v60);
  Json::Value::operator=(v32, (const Json::Value *)&v61);
  Json::Value::~Value((Json::Value *)&v61);
  v33 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v60 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  v34 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v59 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  ScreenController::addStaticScreenVars(v2, v3);
  v35 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v78 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  Json::Value::~Value((Json::Value *)&v79);
  Json::Value::~Value((Json::Value *)&v80);
  return Json::Value::~Value((Json::Value *)&v81);
}


signed int __fastcall ChalkboardScreenController::_getMaxPixelWidth(int a1, int a2)
{
  signed int result; // r0@1

  result = 85;
  if ( a2 == 2 )
    result = 277;
  if ( a2 == 1 )
    result = 181;
  return result;
}


int __fastcall ChalkboardScreenController::ChalkboardScreenController(int a1, int a2, int a3, char a4)
{
  int v4; // r4@1
  char v5; // r8@1
  int v6; // r0@1
  int v7; // r6@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r7@14
  unsigned int v14; // r0@16
  BlockEntity *v15; // r0@21
  int *v16; // r0@22
  int v18; // [sp+4h] [bp-24h]@1
  int v19; // [sp+8h] [bp-20h]@1

  v4 = a1;
  v18 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v19 = v6;
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
  ClientInstanceScreenController::ClientInstanceScreenController(v4, (int)&v18);
  v10 = v19;
  if ( v19 )
    v11 = (unsigned int *)(v19 + 4);
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
  *(_DWORD *)v4 = &off_26E117C;
  *(_DWORD *)(v4 + 432) = *(_DWORD *)v7;
  *(_DWORD *)(v4 + 436) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v4 + 440) = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v4 + 444) = &unk_28898CC;
  *(_BYTE *)(v4 + 448) = v5;
  v15 = ClientInstanceScreenModel::getBlockEntity(*(_DWORD *)(v4 + 424), (const BlockPos *)(v4 + 432), 20);
  if ( v15 )
    v16 = (int *)ChalkboardBlockEntity::getUnfilteredText(v15);
    EntityInteraction::setInteractText((int *)(v4 + 444), v16);
  ChalkboardScreenController::_registerEventHandlers((ChalkboardScreenController *)v4);
  ChalkboardScreenController::_registerBindings((ChalkboardScreenController *)v4);
  return v4;
}


void __fastcall ChalkboardScreenController::~ChalkboardScreenController(ChalkboardScreenController *this)
{
  ChalkboardScreenController *v1; // r0@1

  v1 = ChalkboardScreenController::~ChalkboardScreenController(this);
  j_j_j__ZdlPv_4((void *)v1);
}


signed int __fastcall ChalkboardScreenController::_isStillValid(ChalkboardScreenController *this)
{
  ChalkboardScreenController *v1; // r4@1
  ClientInstanceScreenModel *v3; // r7@3
  signed int result; // r0@5
  char v10; // [sp+4h] [bp-24h]@3

  v1 = this;
  if ( MinecraftScreenModel::isPlayerValid(*((MinecraftScreenModel **)this + 106)) != 1 )
    goto LABEL_9;
  if ( !ClientInstanceScreenModel::getBlockEntity(
          *((_DWORD *)v1 + 106),
          (ChalkboardScreenController *)((char *)v1 + 432),
          20) )
    goto LABEL_10;
  _R6 = ClientInstanceScreenModel::getPickRange(*((ClientInstanceScreenModel **)v1 + 106));
  v3 = (ClientInstanceScreenModel *)*((_DWORD *)v1 + 106);
  Vec3::Vec3((int)&v10, (int)v1 + 432);
  _R0 = ClientInstanceScreenModel::distanceSqrFromPlayerToBlockCenter(v3, (const Vec3 *)&v10);
  __asm
  {
    VMOV            S0, R6
    VMOV            S2, R0
    VMUL.F32        S0, S0, S0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_10:
    result = MinecraftScreenController::_isStillValid(v1);
  else
LABEL_9:
    result = 0;
  return result;
}


void __fastcall ChalkboardScreenController::_registerEventHandlers(ChalkboardScreenController *this)
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
  sub_119C884((void **)&v28, "#text_box_name");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1141A60;
  *v3 = v1;
  HIDWORD(v4) = sub_11416EC;
  v26 = v3;
  v27 = v4;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v2, (int)&v26);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  sub_119C884((void **)&v25, "button.set_text");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v25);
  v7 = operator new(4u);
  LODWORD(v8) = sub_1141ABA;
  *v7 = v1;
  HIDWORD(v8) = sub_1141A96;
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v22, "locked_toggle");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v22);
  v11 = operator new(4u);
  LODWORD(v12) = sub_1141B14;
  *v11 = v1;
  HIDWORD(v12) = sub_1141AF0;
  v20 = v11;
  v21 = v12;
  ScreenController::registerToggleChangeEventHandler((int)v1, v10, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  v13 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v22 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
}


ChalkboardScreenController *__fastcall ChalkboardScreenController::~ChalkboardScreenController(ChalkboardScreenController *this)
{
  ChalkboardScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E117C;
  ClientInstanceScreenModel::sendBlockEntityUpdatePacket(
    *((ClientInstanceScreenModel **)this + 106),
    (ChalkboardScreenController *)((char *)this + 432));
  v2 = *((_DWORD *)v1 + 111);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  return v1;
}


void __fastcall ChalkboardScreenController::_registerBindings(ChalkboardScreenController *this)
{
  ChalkboardScreenController::_registerBindings(this);
}


signed int __fastcall ChalkboardScreenController::_getMaxPixelHeight(int a1, int a2)
{
  signed int result; // r0@1

  result = 66;
  if ( a2 == 2 )
    result = 156;
  if ( a2 == 1 )
    result = 66;
  return result;
}


ChalkboardBlockEntity *__fastcall ChalkboardScreenController::onTerminate(ChalkboardScreenController *this)
{
  ChalkboardScreenController *v1; // r4@1
  ChalkboardBlockEntity *result; // r0@1

  v1 = this;
  result = ClientInstanceScreenModel::getBlockEntity(
             *((_DWORD *)this + 106),
             (ChalkboardScreenController *)((char *)this + 432),
             20);
  if ( result )
    result = (ChalkboardBlockEntity *)j_j_j__ZN20MinecraftScreenModel32triggerBoardTextUpdatedTelemetryER21ChalkboardBlockEntity(
                                        *((MinecraftScreenModel **)v1 + 106),
                                        result);
  return result;
}


void __fastcall ChalkboardScreenController::~ChalkboardScreenController(ChalkboardScreenController *this)
{
  ChalkboardScreenController::~ChalkboardScreenController(this);
}


void __fastcall ChalkboardScreenController::_registerEventHandlers(ChalkboardScreenController *this)
{
  ChalkboardScreenController::_registerEventHandlers(this);
}


void __fastcall ChalkboardScreenController::_registerBindings(ChalkboardScreenController *this)
{
  ChalkboardScreenController *v1; // r4@1
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
  void *v14; // [sp+0h] [bp-98h]@13
  __int64 v15; // [sp+8h] [bp-90h]@13
  _DWORD *v16; // [sp+10h] [bp-88h]@13
  __int64 v17; // [sp+18h] [bp-80h]@13
  int v18; // [sp+20h] [bp-78h]@13
  void *v19; // [sp+24h] [bp-74h]@9
  __int64 v20; // [sp+2Ch] [bp-6Ch]@9
  _DWORD *v21; // [sp+34h] [bp-64h]@9
  __int64 v22; // [sp+3Ch] [bp-5Ch]@9
  int v23; // [sp+44h] [bp-54h]@9
  void *v24; // [sp+48h] [bp-50h]@5
  __int64 v25; // [sp+50h] [bp-48h]@5
  _DWORD *v26; // [sp+58h] [bp-40h]@5
  __int64 v27; // [sp+60h] [bp-38h]@5
  int v28; // [sp+68h] [bp-30h]@5
  void *v29; // [sp+6Ch] [bp-2Ch]@1
  __int64 v30; // [sp+74h] [bp-24h]@1
  _DWORD *v31; // [sp+7Ch] [bp-1Ch]@1
  __int64 v32; // [sp+84h] [bp-14h]@1
  int v33; // [sp+8Ch] [bp-Ch]@1

  v1 = this;
  v33 = 1576164227;
  v2 = operator new(4u);
  LODWORD(v3) = sub_1141B5A;
  *v2 = v1;
  HIDWORD(v3) = sub_1141B4A;
  v31 = v2;
  v32 = v3;
  v29 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v30 = v4;
  ScreenController::bindString((int)v1, &v33, (int)&v31, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  if ( (_DWORD)v32 )
    ((void (*)(void))v32)();
  v28 = -2039628444;
  v5 = operator new(4u);
  LODWORD(v6) = sub_1141BB8;
  *v5 = v1;
  HIDWORD(v6) = sub_1141B90;
  v26 = v5;
  v27 = v6;
  v24 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v25 = v7;
  ScreenController::bindBool((int)v1, &v28, (int)&v26, (int)&v24);
  if ( (_DWORD)v25 )
    ((void (*)(void))v25)();
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  v23 = -156388552;
  v8 = operator new(4u);
  LODWORD(v9) = sub_1141BFE;
  *v8 = v1;
  HIDWORD(v9) = sub_1141BEE;
  v21 = v8;
  v22 = v9;
  v19 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v20 = v10;
  ScreenController::bindBool((int)v1, &v23, (int)&v21, (int)&v19);
  if ( (_DWORD)v20 )
    ((void (*)(void))v20)();
  if ( (_DWORD)v22 )
    ((void (*)(void))v22)();
  v18 = -1490256086;
  v11 = operator new(4u);
  LODWORD(v12) = sub_1141C98;
  *v11 = v1;
  HIDWORD(v12) = sub_1141C34;
  v16 = v11;
  v17 = v12;
  v14 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v15 = v13;
  ScreenController::bindString((int)v1, &v18, (int)&v16, (int)&v14);
  if ( (_DWORD)v15 )
    ((void (*)(void))v15)();
  if ( (_DWORD)v17 )
    ((void (*)(void))v17)();
}


BlockEntity *__fastcall ChalkboardScreenController::_getChalkboard(ChalkboardScreenController *this)
{
  return j_j_j__ZN25ClientInstanceScreenModel14getBlockEntityERK8BlockPos15BlockEntityType(
           *((_DWORD *)this + 106),
           (ChalkboardScreenController *)((char *)this + 432),
           20);
}
