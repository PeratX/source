

void __fastcall SettingsScreenController::_init(SettingsScreenController *this)
{
  SettingsScreenController::_init(this);
}


signed int __fastcall SettingsScreenController::_isContentAreaFocused(SettingsScreenController *this)
{
  SettingsScreenController *v1; // r4@1
  int v2; // r5@1
  int v3; // r1@1
  signed int result; // r0@1

  v1 = this;
  v2 = MinecraftScreenController::getInputMode(this);
  v3 = MinecraftScreenController::getHoloUIInputMode(v1);
  result = 0;
  if ( (unsigned int)(v2 - 3) <= 1 && v3 != 2 )
  {
    result = *((_BYTE *)v1 + 624);
    if ( *((_BYTE *)v1 + 624) )
      result = 1;
  }
  return result;
}


signed int __fastcall SettingsScreenController::_isSelectorAreaFocused(SettingsScreenController *this)
{
  SettingsScreenController *v1; // r4@1
  int v2; // r5@1
  int v3; // r1@1
  signed int result; // r0@1

  v1 = this;
  v2 = MinecraftScreenController::getInputMode(this);
  v3 = MinecraftScreenController::getHoloUIInputMode(v1);
  result = 0;
  if ( (unsigned int)(v2 - 3) <= 1 && v3 != 2 )
  {
    result = 0;
    if ( !*((_BYTE *)v1 + 624) )
      result = 1;
  }
  return result;
}


int __fastcall SettingsScreenController::SettingsScreenController(int a1, int a2, const Realms::World *a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r0@1
  const Realms::World *v7; // r9@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r7@14
  unsigned int v14; // r0@16
  double v15; // r0@21
  unsigned int v16; // r0@21
  int v17; // r7@23
  void *v18; // r6@23
  int v20; // [sp+Ch] [bp-34h]@1
  int v21; // [sp+10h] [bp-30h]@1

  v4 = a1;
  v20 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v21 = v6;
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
  SettingsScreenControllerBase::SettingsScreenControllerBase(v4, (int)&v20);
  v10 = v21;
  if ( v21 )
    v11 = (unsigned int *)(v21 + 4);
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
  *(_DWORD *)v4 = &off_26E35E4;
  *(_BYTE *)(v4 + 520) = 0;
  *(_DWORD *)(v4 + 524) = v5;
  sub_21E94B4((void **)(v4 + 528), (const char *)&unk_257BC67);
  *(_DWORD *)(v4 + 532) = 4;
  *(_BYTE *)(v4 + 536) = 1;
  Realms::World::World((Realms::World *)(v4 + 544), v7);
  *(_DWORD *)(v4 + 636) = 0;
  *(_DWORD *)(v4 + 652) = 0;
  *(_WORD *)(v4 + 624) = 0;
  *(_DWORD *)(v4 + 616) = 0;
  *(_DWORD *)(v4 + 620) = 0;
  LevelSummary::LevelSummary((int *)(v4 + 664));
  *(_DWORD *)(v4 + 736) = 0;
  *(_DWORD *)(v4 + 740) = 0;
  *(_DWORD *)(v4 + 744) = 1065353216;
  *(_DWORD *)(v4 + 748) = 0;
  LODWORD(v15) = v4 + 744;
  v16 = sub_21E6254(v15);
  *(_DWORD *)(v4 + 732) = v16;
  if ( v16 == 1 )
    v18 = (void *)(v4 + 752);
    *(_DWORD *)(v4 + 752) = 0;
  else
    if ( v16 >= 0x40000000 )
      sub_21E57F4();
    v17 = 4 * v16;
    v18 = operator new(4 * v16);
    _aeabi_memclr4(v18, v17);
  *(_DWORD *)(v4 + 728) = v18;
  *(_DWORD *)(v4 + 756) = 0;
  *(_DWORD *)(v4 + 760) = 0;
  SettingsScreenController::_init((SettingsScreenController *)v4);
  return v4;
}


int __fastcall SettingsScreenController::SettingsScreenController(int a1, int a2, int *a3, int a4, int a5)
{
  MinecraftScreenModel **v5; // r7@1
  int v6; // r4@1
  int v7; // r10@1
  int *v8; // r9@1
  int v9; // r0@1
  unsigned int *v10; // r0@2
  unsigned int v11; // r1@4
  int v12; // r5@7
  unsigned int *v13; // r1@8
  unsigned int v14; // r0@10
  unsigned int *v15; // r6@14
  unsigned int v16; // r0@16
  signed int v17; // r0@23
  bool v18; // zf@26
  char v19; // r0@26
  double v20; // r0@29
  unsigned int v21; // r0@29
  int v22; // r6@31
  void *v23; // r5@31
  int v25; // [sp+Ch] [bp-34h]@1
  int v26; // [sp+10h] [bp-30h]@1

  v5 = (MinecraftScreenModel **)a2;
  v6 = a1;
  v7 = a4;
  v25 = *(_DWORD *)a2;
  v8 = a3;
  v9 = *(_DWORD *)(a2 + 4);
  v26 = v9;
  if ( v9 )
  {
    v10 = (unsigned int *)(v9 + 4);
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
  SettingsScreenControllerBase::SettingsScreenControllerBase(v6, (int)&v25);
  v12 = v26;
  if ( v26 )
    v13 = (unsigned int *)(v26 + 4);
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
  *(_DWORD *)v6 = &off_26E35E4;
  *(_BYTE *)(v6 + 520) = 0;
  *(_DWORD *)(v6 + 524) = a5;
  sub_21E94B4((void **)(v6 + 528), (const char *)&unk_257BC67);
  if ( v7 == 1 && MinecraftScreenModel::isPreGame(*v5) )
    v17 = 2;
  else
    v17 = MinecraftScreenModel::isPreGame(*v5);
    if ( v17 )
      v17 = 3;
  *(_DWORD *)(v6 + 532) = v17;
  v18 = MinecraftScreenModel::isRealmLevel(*(MinecraftScreenModel **)(v6 + 424)) == 1;
  v19 = 0;
  if ( v18 )
    v19 = MinecraftScreenModel::isRealmOwner(*(MinecraftScreenModel **)(v6 + 424));
  *(_BYTE *)(v6 + 536) = v19;
  *(_DWORD *)(v6 + 556) = &unk_28898CC;
  *(_DWORD *)(v6 + 560) = &unk_28898CC;
  *(_DWORD *)(v6 + 564) = &unk_28898CC;
  *(_DWORD *)(v6 + 568) = &unk_28898CC;
  *(_BYTE *)(v6 + 584) = 0;
  *(_DWORD *)(v6 + 588) = 0;
  *(_DWORD *)(v6 + 592) = 2;
  *(_BYTE *)(v6 + 596) = 0;
  *(_BYTE *)(v6 + 597) = 0;
  *(_BYTE *)(v6 + 598) = 0;
  *(_DWORD *)(v6 + 600) = 0;
  *(_DWORD *)(v6 + 604) = 0;
  *(_DWORD *)(v6 + 608) = 0;
  *(_DWORD *)(v6 + 616) = 0;
  *(_DWORD *)(v6 + 620) = 0;
  *(_BYTE *)(v6 + 624) = 0;
  *(_BYTE *)(v6 + 625) = 1;
  *(_DWORD *)(v6 + 636) = 0;
  *(_DWORD *)(v6 + 652) = 0;
  LevelSummary::LevelSummary((int *)(v6 + 664), v8);
  *(_DWORD *)(v6 + 736) = 0;
  *(_DWORD *)(v6 + 740) = 0;
  *(_DWORD *)(v6 + 744) = 1065353216;
  *(_DWORD *)(v6 + 748) = 0;
  LODWORD(v20) = v6 + 744;
  v21 = sub_21E6254(v20);
  *(_DWORD *)(v6 + 732) = v21;
  if ( v21 == 1 )
    v23 = (void *)(v6 + 752);
    *(_DWORD *)(v6 + 752) = 0;
    if ( v21 >= 0x40000000 )
      sub_21E57F4();
    v22 = 4 * v21;
    v23 = operator new(4 * v21);
    _aeabi_memclr4(v23, v22);
  *(_DWORD *)(v6 + 728) = v23;
  *(_DWORD *)(v6 + 756) = 0;
  *(_DWORD *)(v6 + 760) = 0;
  SettingsScreenController::_init((SettingsScreenController *)v6);
  return v6;
}


int *__fastcall SettingsScreenController::getAdditionalScreenInfo(SettingsScreenController *this, int a2)
{
  unsigned int v2; // r10@1
  int *v3; // r8@1
  __int64 v4; // kr00_8@1
  unsigned int v5; // r7@1
  _DWORD *v6; // r0@1
  _DWORD *v7; // r5@2
  int v8; // r4@2
  _DWORD *v9; // r6@4
  int v10; // r0@6

  v2 = *(_DWORD *)(a2 + 516);
  v3 = (int *)this;
  v4 = *(_QWORD *)(a2 + 728);
  v5 = v2 % (unsigned int)(*(_QWORD *)(a2 + 728) >> 32);
  v6 = *(_DWORD **)(v4 + 4 * v5);
  if ( v6 )
  {
    v7 = (_DWORD *)*v6;
    v8 = *(_DWORD *)(*v6 + 4);
    while ( v2 != v8 )
    {
      v9 = (_DWORD *)*v7;
      if ( !*v7 )
      {
        v10 = 0;
        return sub_21E8AF4(v3, (int *)(v10 + 8));
      }
      v8 = v9[1];
      v6 = v7;
      v7 = (_DWORD *)*v7;
      if ( v9[1] % HIDWORD(v4) != v5 )
    }
    if ( v6 )
      v10 = *v6;
    else
      v10 = 0;
  }
  else
    v10 = 0;
  return sub_21E8AF4(v3, (int *)(v10 + 8));
}


signed int __fastcall SettingsScreenController::_makeSureInitialTabIsValid(SettingsScreenController *this)
{
  SettingsScreenController *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  result = *((_DWORD *)this + 131);
  if ( (unsigned int)(result - 1) >= 0x14 )
  {
    if ( !*((_DWORD *)v1 + 133) && MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v1 + 106))
      || MinecraftScreenModel::isRealmLevel(*((MinecraftScreenModel **)v1 + 106)) == 1
      && MinecraftScreenModel::isRealmOwner(*((MinecraftScreenModel **)v1 + 106)) != 1 )
    {
      if ( MinecraftScreenModel::isGearVR(*((MinecraftScreenModel **)v1 + 106))
        || MinecraftScreenModel::isInputModeGamepad(*((MinecraftScreenModel **)v1 + 106)) == 1 )
      {
        result = 9;
      }
      else if ( MinecraftScreenModel::isInputModeTouch(*((MinecraftScreenModel **)v1 + 106)) != 1
             || MinecraftScreenModel::supportsTouch(*((MinecraftScreenModel **)v1 + 106)) != 1 )
        result = 8;
      else
        result = 10;
    }
    else if ( *((_BYTE *)v1 + 536) )
      result = 4;
    else
      result = 2;
    *((_DWORD *)v1 + 131) = result;
  }
  if ( (*((_DWORD *)v1 + 133) | 2) == 3 )
    result = 0;
  *((_DWORD *)v1 + 129) = result;
  return result;
}


int __fastcall SettingsScreenController::SettingsScreenController(int a1, int a2, int *a3, int a4, char a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r0@1
  int *v8; // r8@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r6@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r7@14
  unsigned int v15; // r0@16
  bool v16; // zf@21
  char v17; // r0@21
  double v18; // r0@24
  unsigned int v19; // r0@24
  int v20; // r5@26
  void *v21; // r6@26
  int v23; // [sp+Ch] [bp-34h]@1
  int v24; // [sp+10h] [bp-30h]@1

  v5 = a1;
  v23 = *(_DWORD *)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = a3;
  v24 = v7;
  if ( v7 )
  {
    v9 = (unsigned int *)(v7 + 4);
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
  SettingsScreenControllerBase::SettingsScreenControllerBase(v5, (int)&v23);
  v11 = v24;
  if ( v24 )
    v12 = (unsigned int *)(v24 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  *(_DWORD *)v5 = &off_26E35E4;
  *(_BYTE *)(v5 + 520) = 0;
  *(_DWORD *)(v5 + 524) = v6;
  sub_21E94B4((void **)(v5 + 528), (const char *)&unk_257BC67);
  *(_DWORD *)(v5 + 532) = 0;
  v16 = MinecraftScreenModel::isRealmLevel(*(MinecraftScreenModel **)(v5 + 424)) == 1;
  v17 = 0;
  if ( v16 )
    v17 = MinecraftScreenModel::isRealmOwner(*(MinecraftScreenModel **)(v5 + 424));
  *(_BYTE *)(v5 + 536) = v17;
  *(_DWORD *)(v5 + 556) = &unk_28898CC;
  *(_DWORD *)(v5 + 560) = &unk_28898CC;
  *(_DWORD *)(v5 + 564) = &unk_28898CC;
  *(_DWORD *)(v5 + 568) = &unk_28898CC;
  *(_BYTE *)(v5 + 584) = 0;
  *(_DWORD *)(v5 + 588) = 0;
  *(_DWORD *)(v5 + 592) = 2;
  *(_BYTE *)(v5 + 596) = 0;
  *(_BYTE *)(v5 + 597) = 0;
  *(_BYTE *)(v5 + 598) = 0;
  *(_DWORD *)(v5 + 600) = 0;
  *(_DWORD *)(v5 + 604) = 0;
  *(_DWORD *)(v5 + 608) = 0;
  *(_DWORD *)(v5 + 616) = 0;
  *(_DWORD *)(v5 + 620) = 0;
  *(_BYTE *)(v5 + 624) = 0;
  *(_BYTE *)(v5 + 625) = a5;
  *(_DWORD *)(v5 + 636) = 0;
  *(_DWORD *)(v5 + 652) = 0;
  LevelSummary::LevelSummary((int *)(v5 + 664), v8);
  *(_DWORD *)(v5 + 736) = 0;
  *(_DWORD *)(v5 + 740) = 0;
  *(_DWORD *)(v5 + 744) = 1065353216;
  *(_DWORD *)(v5 + 748) = 0;
  LODWORD(v18) = v5 + 744;
  v19 = sub_21E6254(v18);
  *(_DWORD *)(v5 + 732) = v19;
  if ( v19 == 1 )
    v21 = (void *)(v5 + 752);
    *(_DWORD *)(v5 + 752) = 0;
  else
    if ( v19 >= 0x40000000 )
      sub_21E57F4();
    v20 = 4 * v19;
    v21 = operator new(4 * v19);
    _aeabi_memclr4(v21, v20);
  *(_DWORD *)(v5 + 728) = v21;
  *(_DWORD *)(v5 + 756) = 0;
  *(_DWORD *)(v5 + 760) = 0;
  SettingsScreenController::_init((SettingsScreenController *)v5);
  return v5;
}


signed int __fastcall SettingsScreenController::_registerSubControllers(SettingsScreenController *this)
{
  SettingsScreenController *v1; // r4@1
  MinecraftScreenModel **v2; // r5@1
  int v3; // r6@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r7@8
  unsigned int v7; // r0@10
  int v8; // r6@17
  unsigned int *v9; // r1@18
  unsigned int v10; // r0@20
  unsigned int *v11; // r7@24
  unsigned int v12; // r0@26
  const Realms::World *v13; // r3@35
  __int64 v14; // r0@37
  int v15; // r6@37
  unsigned int *v16; // r1@38
  unsigned int v17; // r0@40
  unsigned int *v18; // r7@44
  unsigned int v19; // r0@46
  int v20; // r6@51
  unsigned int *v21; // r1@52
  unsigned int v22; // r0@54
  unsigned int *v23; // r7@58
  unsigned int v24; // r0@60
  int v25; // r0@65
  unsigned int *v26; // r0@66
  unsigned int v27; // r1@68
  int v28; // r6@71
  unsigned int *v29; // r1@72
  unsigned int v30; // r0@74
  unsigned int *v31; // r7@78
  unsigned int v32; // r0@80
  int v33; // r0@85
  int v34; // r4@88
  unsigned int *v35; // r1@89
  unsigned int v36; // r0@91
  int v37; // r4@93
  unsigned int *v38; // r1@94
  unsigned int v39; // r0@96
  int v40; // r4@98
  unsigned int *v41; // r1@99
  unsigned int v42; // r0@101
  signed int result; // r0@103
  bool v44; // zf@103
  int v45; // r0@107
  int v46; // r4@109
  unsigned int *v47; // r1@110
  unsigned int v48; // r0@112
  unsigned int *v49; // r5@116
  unsigned int v50; // r0@118
  unsigned int *v51; // r5@122
  unsigned int v52; // r0@124
  unsigned int *v53; // r5@128
  unsigned int v54; // r0@130
  unsigned int *v55; // r5@153
  unsigned int v56; // r0@155
  char v57; // [sp+3h] [bp-7Dh]@109
  int v58; // [sp+4h] [bp-7Ch]@109
  char v59; // [sp+8h] [bp-78h]@109
  int v60; // [sp+Ch] [bp-74h]@109
  char v61; // [sp+13h] [bp-6Dh]@93
  int v62; // [sp+14h] [bp-6Ch]@93
  char v63; // [sp+18h] [bp-68h]@93
  int v64; // [sp+1Ch] [bp-64h]@93
  char v65; // [sp+23h] [bp-5Dh]@98
  int v66; // [sp+24h] [bp-5Ch]@98
  char v67; // [sp+28h] [bp-58h]@98
  int v68; // [sp+2Ch] [bp-54h]@98
  char v69; // [sp+33h] [bp-4Dh]@88
  int v70; // [sp+34h] [bp-4Ch]@88
  char v71; // [sp+38h] [bp-48h]@88
  int v72; // [sp+3Ch] [bp-44h]@88
  int v73; // [sp+40h] [bp-40h]@65
  int v74; // [sp+44h] [bp-3Ch]@65
  char v75; // [sp+48h] [bp-38h]@37
  int v76; // [sp+4Ch] [bp-34h]@37
  int v77; // [sp+50h] [bp-30h]@17
  char v78; // [sp+54h] [bp-2Ch]@17
  int v79; // [sp+58h] [bp-28h]@17
  int v80; // [sp+5Ch] [bp-24h]@1
  char v81; // [sp+60h] [bp-20h]@1
  int v82; // [sp+64h] [bp-1Ch]@1
  char v83; // [sp+68h] [bp-18h]@37

  v1 = this;
  v2 = (MinecraftScreenModel **)((char *)this + 424);
  std::make_unique<ControlsSettingsScreenController,std::shared_ptr<MainMenuScreenModel> &>(
    (ControlsSettingsScreenController **)&v80,
    (int)this + 424);
  std::__shared_ptr<ScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<ControlsSettingsScreenController,std::default_delete<std::default_delete>>(
    (int)&v81,
    &v80);
  ScreenController::_registerSubController((int)v1, (int)&v81);
  v3 = v82;
  if ( v82 )
  {
    v4 = (unsigned int *)(v82 + 4);
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
  if ( v80 )
    (*(void (**)(void))(*(_DWORD *)v80 + 4))();
  v80 = 0;
  std::make_unique<GeneralSettingsScreenController,std::shared_ptr<MainMenuScreenModel> &>(&v77, (int)v2);
  std::__shared_ptr<ScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<GeneralSettingsScreenController,std::default_delete<std::default_delete>>(
    (int)&v78,
    &v77);
  ScreenController::_registerSubController((int)v1, (int)&v78);
  v8 = v79;
  if ( v79 )
    v9 = (unsigned int *)(v79 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  if ( v77 )
    (*(void (**)(void))(*(_DWORD *)v77 + 4))();
  v77 = 0;
  if ( *((_BYTE *)v1 + 536) )
    if ( MinecraftScreenModel::isRealmLevel(*((MinecraftScreenModel **)v1 + 106)) == 1 )
      v13 = (const Realms::World *)MinecraftScreenModel::getCurrentRealm(*v2);
      v13 = (SettingsScreenController *)((char *)v1 + 544);
    std::__shared_ptr<RealmsSettingsScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RealmsSettingsScreenController>,std::shared_ptr<MainMenuScreenModel> &,Realms::World &>(
      (int)&v75,
      (int)&v83,
      (int)v2,
      v13);
    v14 = *(_QWORD *)&v75;
    *(_DWORD *)&v75 = 0;
    v76 = 0;
    *((_DWORD *)v1 + 189) = v14;
    v15 = *((_DWORD *)v1 + 190);
    *((_DWORD *)v1 + 190) = HIDWORD(v14);
    if ( v15 )
      v16 = (unsigned int *)(v15 + 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        v18 = (unsigned int *)(v15 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        }
        else
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
    v20 = v76;
    if ( v76 )
      v21 = (unsigned int *)(v76 + 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        v23 = (unsigned int *)(v20 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
    v73 = *((_DWORD *)v1 + 189);
    v25 = *((_DWORD *)v1 + 190);
    v74 = v25;
    if ( v25 )
      v26 = (unsigned int *)(v25 + 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 + 1, v26) );
        ++*v26;
    ScreenController::_registerSubController((int)v1, (int)&v73);
    v28 = v74;
    if ( v74 )
      v29 = (unsigned int *)(v74 + 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        v31 = (unsigned int *)(v28 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
  v33 = *((_DWORD *)v1 + 133);
  switch ( v33 )
    case 1:
      v65 = 1;
      std::make_unique<WorldSettingsScreenController,std::shared_ptr<MainMenuScreenModel> &,bool>(&v66, (int)v2, &v65);
      std::__shared_ptr<ScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<WorldSettingsScreenController,std::default_delete<std::default_delete>>(
        (int)&v67,
        &v66);
      ScreenController::_registerSubController((int)v1, (int)&v67);
      v40 = v68;
      if ( v68 )
        v41 = (unsigned int *)(v68 + 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 == 1 )
          v51 = (unsigned int *)(v40 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 8))(v40);
          if ( &pthread_create )
          {
            __dmb();
            do
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
          }
          else
            v52 = (*v51)--;
          if ( v52 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 12))(v40);
      if ( v66 )
        (*(void (**)(void))(*(_DWORD *)v66 + 4))();
      result = 0;
      v66 = 0;
      break;
    case 2:
      v61 = 1;
      std::make_unique<WorldSettingsScreenController,std::shared_ptr<MainMenuScreenModel> &,LevelSummary &,bool>(
        &v62,
        (int)v2,
        (int)v1 + 664,
        &v61);
        (int)&v63,
        &v62);
      ScreenController::_registerSubController((int)v1, (int)&v63);
      v37 = v64;
      if ( v64 )
        v38 = (unsigned int *)(v64 + 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 == 1 )
          v49 = (unsigned int *)(v37 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          if ( v50 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
      if ( v62 )
        (*(void (**)(void))(*(_DWORD *)v62 + 4))();
      v62 = 0;
    case 3:
      v69 = 0;
        &v70,
        &v69);
        (int)&v71,
        &v70);
      ScreenController::_registerSubController((int)v1, (int)&v71);
      v34 = v72;
      if ( v72 )
        v35 = (unsigned int *)(v72 + 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 == 1 )
          v53 = (unsigned int *)(v34 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
            v54 = (*v53)--;
          if ( v54 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
      if ( v70 )
        (*(void (**)(void))(*(_DWORD *)v70 + 4))();
      v70 = 0;
    default:
      result = MinecraftScreenModel::isPreGame(*v2);
      v44 = result == 0;
      if ( !result )
        result = *((_BYTE *)v1 + 536);
        v44 = result == 0;
      if ( v44 )
        v45 = *((_DWORD *)v1 + 133);
        if ( v45 != 1 )
          LOBYTE(v45) = 0;
        v57 = v45;
        std::make_unique<WorldSettingsScreenController,std::shared_ptr<MainMenuScreenModel> &,LevelSummary &,bool>(
          &v58,
          (int)v2,
          (int)v1 + 664,
          &v57);
        std::__shared_ptr<ScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<WorldSettingsScreenController,std::default_delete<std::default_delete>>(
          (int)&v59,
          &v58);
        ScreenController::_registerSubController((int)v1, (int)&v59);
        v46 = v60;
        if ( v60 )
          v47 = (unsigned int *)(v60 + 4);
              v48 = __ldrex(v47);
            while ( __strex(v48 - 1, v47) );
            v48 = (*v47)--;
          if ( v48 == 1 )
            v55 = (unsigned int *)(v46 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 8))(v46);
            if ( &pthread_create )
            {
              __dmb();
              do
                v56 = __ldrex(v55);
              while ( __strex(v56 - 1, v55) );
            }
            else
              v56 = (*v55)--;
            if ( v56 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 12))(v46);
        if ( v58 )
          (*(void (**)(void))(*(_DWORD *)v58 + 4))();
        result = 0;
  return result;
}


void __fastcall SettingsScreenController::_reevaluateUsingGamepadModalBehavior(int a1, int a2, int a3)
{
  SettingsScreenController::_reevaluateUsingGamepadModalBehavior(a1, a2, a3);
}


Json::Value *__fastcall SettingsScreenController::addStaticScreenVars(SettingsScreenController *this, Json::Value *a2, bool a3, bool a4, bool a5, bool a6, bool a7, bool a8, bool a9, bool a10, bool a11, bool a12)
{
  bool v12; // r7@1
  bool v13; // r8@1
  bool v14; // r9@1
  Json::Value *v15; // r4@1
  int v16; // r5@1
  int v17; // r5@1
  int v18; // r5@1
  int v19; // r6@1
  int v20; // r6@1
  int v21; // r6@1
  int v22; // r6@1
  int v23; // r6@1
  int v24; // r6@1
  int v25; // r6@1
  _DWORD *v26; // r0@2
  int v27; // r5@4
  int v28; // r4@6
  Json::Value *v29; // r0@6
  int v30; // r4@7
  int v32; // [sp+0h] [bp-E0h]@6
  char v33; // [sp+10h] [bp-D0h]@7
  char v34; // [sp+20h] [bp-C0h]@1
  char v35; // [sp+30h] [bp-B0h]@1
  char v36; // [sp+40h] [bp-A0h]@1
  char v37; // [sp+50h] [bp-90h]@1
  char v38; // [sp+60h] [bp-80h]@1
  char v39; // [sp+70h] [bp-70h]@1
  char v40; // [sp+80h] [bp-60h]@1
  char v41; // [sp+90h] [bp-50h]@1
  char v42; // [sp+A0h] [bp-40h]@1
  char v43; // [sp+B0h] [bp-30h]@1

  v12 = (char)a2;
  v13 = a4;
  v14 = a3;
  v15 = this;
  v16 = Json::Value::operator[](this, "$is_world_create");
  Json::Value::Value((Json::Value *)&v43, v12);
  Json::Value::operator=(v16, (const Json::Value *)&v43);
  Json::Value::~Value((Json::Value *)&v43);
  v17 = Json::Value::operator[](v15, "$is_world_edit");
  Json::Value::Value((Json::Value *)&v42, v14);
  Json::Value::operator=(v17, (const Json::Value *)&v42);
  Json::Value::~Value((Json::Value *)&v42);
  v18 = Json::Value::operator[](v15, "$is_template_create");
  Json::Value::Value((Json::Value *)&v41, v13);
  Json::Value::operator=(v18, (const Json::Value *)&v41);
  Json::Value::~Value((Json::Value *)&v41);
  v19 = Json::Value::operator[](v15, "$is_realms_edit");
  Json::Value::Value((Json::Value *)&v40, a5);
  Json::Value::operator=(v19, (const Json::Value *)&v40);
  Json::Value::~Value((Json::Value *)&v40);
  v20 = Json::Value::operator[](v15, "$is_mp_host");
  Json::Value::Value((Json::Value *)&v39, a6);
  Json::Value::operator=(v20, (const Json::Value *)&v39);
  Json::Value::~Value((Json::Value *)&v39);
  v21 = Json::Value::operator[](v15, "$is_mp_client");
  Json::Value::Value((Json::Value *)&v38, a7);
  Json::Value::operator=(v21, (const Json::Value *)&v38);
  Json::Value::~Value((Json::Value *)&v38);
  v22 = Json::Value::operator[](v15, "$non_config_realms_env");
  Json::Value::Value((Json::Value *)&v37, a8);
  Json::Value::operator=(v22, (const Json::Value *)&v37);
  Json::Value::~Value((Json::Value *)&v37);
  v23 = Json::Value::operator[](v15, "$gamepad_supported");
  Json::Value::Value((Json::Value *)&v36, a9);
  Json::Value::operator=(v23, (const Json::Value *)&v36);
  Json::Value::~Value((Json::Value *)&v36);
  v24 = Json::Value::operator[](v15, "$keyboard_and_mouse_supported");
  Json::Value::Value((Json::Value *)&v35, a10);
  Json::Value::operator=(v24, (const Json::Value *)&v35);
  Json::Value::~Value((Json::Value *)&v35);
  v25 = Json::Value::operator[](v15, "$touch_supported");
  Json::Value::Value((Json::Value *)&v34, a11);
  Json::Value::operator=(v25, (const Json::Value *)&v34);
  Json::Value::~Value((Json::Value *)&v34);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v26 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v26 = &ServiceLocator<AppPlatform>::mDefaultService;
  v27 = *v26;
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v26 + 560))(*v26)
    || (*(int (__fastcall **)(int))(*(_DWORD *)v27 + 440))(v27) == 4 )
  {
    v28 = Json::Value::operator[](v15, "$storage_location_switch_enabled");
    Json::Value::Value((Json::Value *)&v32, 0);
    Json::Value::operator=(v28, (const Json::Value *)&v32);
    v29 = (Json::Value *)&v32;
  }
    v30 = Json::Value::operator[](v15, "$storage_location_switch_enabled");
    Json::Value::Value((Json::Value *)&v33, 1);
    Json::Value::operator=(v30, (const Json::Value *)&v33);
    v29 = (Json::Value *)&v33;
  return Json::Value::~Value(v29);
}


void __fastcall SettingsScreenController::_init(SettingsScreenController *this)
{
  SettingsScreenController *v1; // r4@1
  int v2; // r1@2
  int v3; // r0@3
  unsigned __int64 *v4; // r5@14
  char *v5; // r0@14
  char *v6; // r0@15
  char *v7; // r0@16
  char *v8; // r0@17
  char *v9; // r0@18
  char *v10; // r0@19
  char *v11; // r0@20
  char *v12; // r0@21
  char *v13; // r0@22
  char *v14; // r0@23
  char *v15; // r0@24
  char *v16; // r0@25
  char *v17; // r0@26
  char *v18; // r0@27
  char *v19; // r0@28
  char *v20; // r0@29
  char *v21; // r0@30
  char *v22; // r0@31
  char *v23; // r0@32
  char *v24; // r0@33
  char *v25; // r0@34
  char *v26; // r0@35
  char *v27; // r0@36
  char *v28; // r0@37
  char *v29; // r0@38
  char *v30; // r0@39
  char *v31; // r0@40
  char *v32; // r0@41
  char *v33; // r0@42
  char *v34; // r0@43
  char *v35; // r0@44
  char *v36; // r0@45
  char *v37; // r0@46
  char *v38; // r0@47
  char *v39; // r0@48
  char *v40; // r0@49
  char *v41; // r0@50
  char *v42; // r0@51
  char *v43; // r0@52
  char *v44; // r0@53
  char *v45; // r0@54
  char *v46; // r0@55
  unsigned int *v47; // r2@57
  signed int v48; // r1@59
  unsigned int *v49; // r2@61
  signed int v50; // r1@63
  unsigned int *v51; // r2@65
  signed int v52; // r1@67
  unsigned int *v53; // r2@69
  signed int v54; // r1@71
  unsigned int *v55; // r2@73
  signed int v56; // r1@75
  unsigned int *v57; // r2@77
  signed int v58; // r1@79
  unsigned int *v59; // r2@81
  signed int v60; // r1@83
  unsigned int *v61; // r2@85
  signed int v62; // r1@87
  unsigned int *v63; // r2@89
  signed int v64; // r1@91
  unsigned int *v65; // r2@93
  signed int v66; // r1@95
  unsigned int *v67; // r2@97
  signed int v68; // r1@99
  unsigned int *v69; // r2@101
  signed int v70; // r1@103
  unsigned int *v71; // r2@105
  signed int v72; // r1@107
  unsigned int *v73; // r2@109
  signed int v74; // r1@111
  unsigned int *v75; // r2@113
  signed int v76; // r1@115
  unsigned int *v77; // r2@117
  signed int v78; // r1@119
  unsigned int *v79; // r2@121
  signed int v80; // r1@123
  unsigned int *v81; // r2@125
  signed int v82; // r1@127
  unsigned int *v83; // r2@129
  signed int v84; // r1@131
  unsigned int *v85; // r2@133
  signed int v86; // r1@135
  unsigned int *v87; // r2@137
  signed int v88; // r1@139
  unsigned int *v89; // r2@141
  signed int v90; // r1@143
  unsigned int *v91; // r2@145
  signed int v92; // r1@147
  unsigned int *v93; // r2@149
  signed int v94; // r1@151
  unsigned int *v95; // r2@153
  signed int v96; // r1@155
  unsigned int *v97; // r2@157
  signed int v98; // r1@159
  unsigned int *v99; // r2@161
  signed int v100; // r1@163
  unsigned int *v101; // r2@165
  signed int v102; // r1@167
  unsigned int *v103; // r2@169
  signed int v104; // r1@171
  unsigned int *v105; // r2@173
  signed int v106; // r1@175
  unsigned int *v107; // r2@177
  signed int v108; // r1@179
  unsigned int *v109; // r2@181
  signed int v110; // r1@183
  unsigned int *v111; // r2@185
  signed int v112; // r1@187
  unsigned int *v113; // r2@189
  signed int v114; // r1@191
  unsigned int *v115; // r2@193
  signed int v116; // r1@195
  unsigned int *v117; // r2@197
  signed int v118; // r1@199
  unsigned int *v119; // r2@201
  signed int v120; // r1@203
  unsigned int *v121; // r2@205
  signed int v122; // r1@207
  unsigned int *v123; // r2@209
  signed int v124; // r1@211
  unsigned int *v125; // r2@213
  signed int v126; // r1@215
  unsigned int *v127; // r2@217
  signed int v128; // r1@219
  unsigned int *v129; // r2@221
  signed int v130; // r1@223
  char v131; // [sp+4h] [bp-20Ch]@54
  char *v132; // [sp+10h] [bp-200h]@54
  int v133; // [sp+14h] [bp-1FCh]@54
  char *v134; // [sp+18h] [bp-1F8h]@54
  char v135; // [sp+1Ch] [bp-1F4h]@52
  char *v136; // [sp+28h] [bp-1E8h]@52
  int v137; // [sp+2Ch] [bp-1E4h]@52
  char *v138; // [sp+30h] [bp-1E0h]@52
  char v139; // [sp+34h] [bp-1DCh]@50
  char *v140; // [sp+40h] [bp-1D0h]@50
  int v141; // [sp+44h] [bp-1CCh]@50
  char *v142; // [sp+48h] [bp-1C8h]@50
  char v143; // [sp+4Ch] [bp-1C4h]@48
  char *v144; // [sp+58h] [bp-1B8h]@48
  int v145; // [sp+5Ch] [bp-1B4h]@48
  char *v146; // [sp+60h] [bp-1B0h]@48
  char v147; // [sp+64h] [bp-1ACh]@46
  char *v148; // [sp+70h] [bp-1A0h]@46
  int v149; // [sp+74h] [bp-19Ch]@46
  char *v150; // [sp+78h] [bp-198h]@46
  char v151; // [sp+7Ch] [bp-194h]@44
  char *v152; // [sp+88h] [bp-188h]@44
  int v153; // [sp+8Ch] [bp-184h]@44
  char *v154; // [sp+90h] [bp-180h]@44
  char v155; // [sp+94h] [bp-17Ch]@42
  char *v156; // [sp+A0h] [bp-170h]@42
  int v157; // [sp+A4h] [bp-16Ch]@42
  char *v158; // [sp+A8h] [bp-168h]@42
  char v159; // [sp+ACh] [bp-164h]@40
  char *v160; // [sp+B8h] [bp-158h]@40
  int v161; // [sp+BCh] [bp-154h]@40
  char *v162; // [sp+C0h] [bp-150h]@40
  char v163; // [sp+C4h] [bp-14Ch]@38
  char *v164; // [sp+D0h] [bp-140h]@38
  int v165; // [sp+D4h] [bp-13Ch]@38
  char *v166; // [sp+D8h] [bp-138h]@38
  char v167; // [sp+DCh] [bp-134h]@36
  char *v168; // [sp+E8h] [bp-128h]@36
  int v169; // [sp+ECh] [bp-124h]@36
  char *v170; // [sp+F0h] [bp-120h]@36
  char v171; // [sp+F4h] [bp-11Ch]@34
  char *v172; // [sp+100h] [bp-110h]@34
  int v173; // [sp+104h] [bp-10Ch]@34
  char *v174; // [sp+108h] [bp-108h]@34
  char v175; // [sp+10Ch] [bp-104h]@32
  char *v176; // [sp+118h] [bp-F8h]@32
  int v177; // [sp+11Ch] [bp-F4h]@32
  char *v178; // [sp+120h] [bp-F0h]@32
  char v179; // [sp+124h] [bp-ECh]@30
  char *v180; // [sp+130h] [bp-E0h]@30
  int v181; // [sp+134h] [bp-DCh]@30
  char *v182; // [sp+138h] [bp-D8h]@30
  char v183; // [sp+13Ch] [bp-D4h]@28
  char *v184; // [sp+148h] [bp-C8h]@28
  int v185; // [sp+14Ch] [bp-C4h]@28
  char *v186; // [sp+150h] [bp-C0h]@28
  char v187; // [sp+154h] [bp-BCh]@26
  char *v188; // [sp+160h] [bp-B0h]@26
  int v189; // [sp+164h] [bp-ACh]@26
  char *v190; // [sp+168h] [bp-A8h]@26
  char v191; // [sp+16Ch] [bp-A4h]@24
  char *v192; // [sp+178h] [bp-98h]@24
  int v193; // [sp+17Ch] [bp-94h]@24
  char *v194; // [sp+180h] [bp-90h]@24
  char v195; // [sp+184h] [bp-8Ch]@22
  char *v196; // [sp+190h] [bp-80h]@22
  int v197; // [sp+194h] [bp-7Ch]@22
  char *v198; // [sp+198h] [bp-78h]@22
  char v199; // [sp+19Ch] [bp-74h]@20
  char *v200; // [sp+1A8h] [bp-68h]@20
  int v201; // [sp+1ACh] [bp-64h]@20
  char *v202; // [sp+1B0h] [bp-60h]@20
  char v203; // [sp+1B4h] [bp-5Ch]@18
  char *v204; // [sp+1C0h] [bp-50h]@18
  int v205; // [sp+1C4h] [bp-4Ch]@18
  char *v206; // [sp+1C8h] [bp-48h]@18
  char v207; // [sp+1CCh] [bp-44h]@16
  char *v208; // [sp+1D8h] [bp-38h]@16
  int v209; // [sp+1DCh] [bp-34h]@16
  char *v210; // [sp+1E0h] [bp-30h]@16
  char v211; // [sp+1E4h] [bp-2Ch]@14
  char *v212; // [sp+1F0h] [bp-20h]@14
  int v213; // [sp+1F4h] [bp-1Ch]@14
  char *v214; // [sp+1F8h] [bp-18h]@14

  v1 = this;
  SettingsScreenController::_makeSureInitialTabIsValid(this);
  SettingsScreenController::_registerEventHandlers(v1);
  SettingsScreenController::_registerBindings(v1);
  SettingsScreenController::_registerSubControllers(v1);
  if ( *((_BYTE *)v1 + 536) )
  {
    v2 = 1;
  }
  else
    v3 = *((_DWORD *)v1 + 133);
    if ( v3 == 3 )
    {
      v2 = 1;
    }
    else if ( v3 )
      v2 = 0;
    else if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v1 + 106)) == 1 )
      v2 = *((_BYTE *)v1 + 625);
      if ( *((_BYTE *)v1 + 625) )
        v2 = 1;
    else
  if ( v2 )
    v2 = 3;
  MinecraftScreenController::_setExitBehavior((int)v1, v2);
  sub_21E94B4((void **)&v212, (const char *)&unk_257BC67);
  v213 = 0;
  v4 = (unsigned __int64 *)((char *)v1 + 728);
  v214 = v212;
  v212 = (char *)&unk_28898CC;
  std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<std::pair<int,std::string>>(
    &v211,
    (unsigned __int64 *)v1 + 91,
    (int)&v213);
  v5 = v214 - 12;
  if ( (int *)(v214 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v214 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = v212 - 12;
  if ( (int *)(v212 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v212 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v208, " - server_tab");
  v209 = 1;
  v210 = v208;
  v208 = (char *)&unk_28898CC;
    &v207,
    v4,
    (int)&v209);
  v7 = v210 - 12;
  if ( (int *)(v210 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v210 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = v208 - 12;
  if ( (int *)(v208 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v208 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v204, " - game_tab");
  v205 = 2;
  v206 = v204;
  v204 = (char *)&unk_28898CC;
    &v203,
    (int)&v205);
  v9 = v206 - 12;
  if ( (int *)(v206 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v206 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = v204 - 12;
  if ( (int *)(v204 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v204 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v200, " - level_texture_pack_tab");
  v201 = 19;
  v202 = v200;
  v200 = (char *)&unk_28898CC;
    &v199,
    (int)&v201);
  v11 = v202 - 12;
  if ( (int *)(v202 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v202 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = v200 - 12;
  if ( (int *)(v200 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v200 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v196, " - addon_tab");
  v197 = 20;
  v198 = v196;
  v196 = (char *)&unk_28898CC;
    &v195,
    (int)&v197);
  v13 = v198 - 12;
  if ( (int *)(v198 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v198 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v196 - 12;
  if ( (int *)(v196 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v196 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v192, " - multiplayer_tab");
  v193 = 3;
  v194 = v192;
  v192 = (char *)&unk_28898CC;
    &v191,
    (int)&v193);
  v15 = v194 - 12;
  if ( (int *)(v194 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v194 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v192 - 12;
  if ( (int *)(v192 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v192 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v188, " - realm_tab");
  v189 = 4;
  v190 = v188;
  v188 = (char *)&unk_28898CC;
    &v187,
    (int)&v189);
  v17 = v190 - 12;
  if ( (int *)(v190 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v190 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = v188 - 12;
  if ( (int *)(v188 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v188 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v184, " - members_tab");
  v185 = 5;
  v186 = v184;
  v184 = (char *)&unk_28898CC;
    &v183,
    (int)&v185);
  v19 = v186 - 12;
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v186 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = v184 - 12;
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v184 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v180, " - subscription_tab");
  v181 = 6;
  v182 = v180;
  v180 = (char *)&unk_28898CC;
    &v179,
    (int)&v181);
  v21 = v182 - 12;
  if ( (int *)(v182 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v182 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = v180 - 12;
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v180 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v176, " - dev_options_tab");
  v177 = 7;
  v178 = v176;
  v176 = (char *)&unk_28898CC;
    &v175,
    (int)&v177);
  v23 = v178 - 12;
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v178 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = v176 - 12;
  if ( (int *)(v176 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v176 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v172, " - keyboard_and_mouse_tab");
  v173 = 8;
  v174 = v172;
  v172 = (char *)&unk_28898CC;
    &v171,
    (int)&v173);
  v25 = v174 - 12;
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v174 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = v172 - 12;
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v172 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v168, " - controller_tab");
  v169 = 9;
  v170 = v168;
  v168 = (char *)&unk_28898CC;
    &v167,
    (int)&v169);
  v27 = v170 - 12;
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v170 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = v168 - 12;
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v168 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v164, " - touch_tab");
  v165 = 10;
  v166 = v164;
  v164 = (char *)&unk_28898CC;
    &v163,
    (int)&v165);
  v29 = v166 - 12;
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v166 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = v164 - 12;
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v164 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v160, " - profile_tab");
  v161 = 11;
  v162 = v160;
  v160 = (char *)&unk_28898CC;
    &v159,
    (int)&v161);
  v31 = v162 - 12;
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v162 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = v160 - 12;
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v160 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v156, " - global_texture_pack_tab");
  v157 = 15;
  v158 = v156;
  v156 = (char *)&unk_28898CC;
    &v155,
    (int)&v157);
  v33 = v158 - 12;
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v158 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = v156 - 12;
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v156 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  sub_21E94B4((void **)&v152, " - storage_tab");
  v153 = 16;
  v154 = v152;
  v152 = (char *)&unk_28898CC;
    &v151,
    (int)&v153);
  v35 = v154 - 12;
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v154 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = v152 - 12;
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v152 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4((void **)&v148, " - video_tab");
  v149 = 12;
  v150 = v148;
  v148 = (char *)&unk_28898CC;
    &v147,
    (int)&v149);
  v37 = v150 - 12;
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v150 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = v148 - 12;
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v148 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  sub_21E94B4((void **)&v144, " - vr_tab");
  v145 = 13;
  v146 = v144;
  v144 = (char *)&unk_28898CC;
    &v143,
    (int)&v145);
  v39 = v146 - 12;
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v146 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = v144 - 12;
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v144 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v140, " - sound_tab");
  v141 = 14;
  v142 = v140;
  v140 = (char *)&unk_28898CC;
    &v139,
    (int)&v141);
  v41 = v142 - 12;
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(v142 - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v42 = v140 - 12;
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v140 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  sub_21E94B4((void **)&v136, " - language_tab");
  v137 = 17;
  v138 = v136;
  v136 = (char *)&unk_28898CC;
    &v135,
    (int)&v137);
  v43 = v138 - 12;
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v138 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = v136 - 12;
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v136 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  sub_21E94B4((void **)&v132, " - debug_tab");
  v133 = 18;
  v134 = v132;
  v132 = (char *)&unk_28898CC;
    &v131,
    (int)&v133);
  v45 = v134 - 12;
  if ( (int *)(v134 - 12) != &dword_28898C0 )
    v127 = (unsigned int *)(v134 - 4);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = v132 - 12;
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v129 = (unsigned int *)(v132 - 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
      v130 = (*v129)--;
    if ( v130 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
}


void __fastcall SettingsScreenController::~SettingsScreenController(SettingsScreenController *this)
{
  SettingsScreenController::~SettingsScreenController(this);
}


void __fastcall SettingsScreenController::_reevaluateUsingGamepadModalBehavior(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  int *v6; // r7@2
  void *v7; // r0@7
  unsigned int *v8; // r12@8
  signed int v9; // r1@10
  int v10; // [sp+8h] [bp-20h]@6

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( *(_DWORD *)(a1 + 652) )
  {
    v6 = (int *)(a1 + 620);
    if ( ((unsigned int)(*(_DWORD *)(a1 + 616) - 3) > 1 || *(_DWORD *)(a1 + 620) == 2)
      && (unsigned int)(a2 - 3) <= 1
      && a3 != 2 )
    {
      sub_21E94B4((void **)&v10, "content_area");
      if ( !*(_DWORD *)(v3 + 652) )
        sub_21E5F48();
      *(_BYTE *)(v3 + 624) = (*(int (__fastcall **)(int, int *))(v3 + 656))(v3 + 644, &v10);
      v7 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
      {
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
          j_j_j_j__ZdlPv_9(v7);
      }
    }
  }
  else
  *(_DWORD *)(v3 + 616) = v5;
  *v6 = v4;
}


int __fastcall SettingsScreenController::_usingGamepadModalBehavior(int a1, int a2, int a3)
{
  bool v3; // zf@1
  signed int v4; // r2@1
  unsigned int v5; // r1@1
  signed int v6; // r0@3

  v3 = a3 == 2;
  v4 = 0;
  v5 = a2 - 3;
  if ( !v3 )
    v4 = 1;
  v6 = 0;
  if ( v5 < 2 )
    v6 = 1;
  return v6 & v4;
}


int __fastcall SettingsScreenController::addStaticScreenVars(SettingsScreenController *this, Json::Value *a2)
{
  SettingsScreenController *v2; // r5@1
  Json::Value *v3; // r10@1
  Json::Value *v4; // r6@1
  char v5; // r8@1
  char v6; // r9@1
  int v7; // r11@2
  char v8; // r7@4
  char v9; // r4@4
  char v10; // r0@4
  bool v11; // r1@4
  bool v12; // r2@6
  bool v13; // r3@6
  bool v15; // [sp+1Ch] [bp-24h]@0

  v2 = this;
  v3 = a2;
  v4 = (Json::Value *)*((_DWORD *)this + 133);
  v5 = MinecraftScreenModel::isMultiPlayerHost(*((MinecraftScreenModel **)this + 106));
  v6 = MinecraftScreenModel::isMultiPlayerClient(*((MinecraftScreenModel **)v2 + 106));
  if ( MinecraftScreenModel::isConfigurableRealmEnvironment(*((MinecraftScreenModel **)v2 + 106)) == 1 )
    v7 = MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v2 + 106)) ^ 1;
  else
    LOBYTE(v7) = 1;
  v8 = MinecraftScreenModel::supportsGamepad(*((MinecraftScreenModel **)v2 + 95));
  v9 = MinecraftScreenModel::supportsKeyboardMouse(*((MinecraftScreenModel **)v2 + 95));
  v10 = MinecraftScreenModel::supportsTouch(*((MinecraftScreenModel **)v2 + 95));
  v11 = 0;
  if ( v4 == (Json::Value *)4 )
    v11 = 1;
  v12 = 0;
  v13 = 0;
  if ( v4 == (Json::Value *)3 )
    v12 = 1;
  if ( v4 == (Json::Value *)2 )
    v13 = 1;
  if ( v4 != (Json::Value *)1 )
    v4 = 0;
  SettingsScreenController::addStaticScreenVars(v3, v4, v12, v13, v11, v5, v6, v7, v8, v9, v10, v15);
  return j_j_j__ZN16ScreenController19addStaticScreenVarsERN4Json5ValueE(v2, v3);
}


char *__fastcall SettingsScreenController::_registerEventHandlers(SettingsScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  void *v7; // r0@4
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
  _DWORD *v18; // r0@13
  __int64 v19; // r1@13
  _DWORD *v20; // r0@15
  __int64 v21; // r1@15
  char *result; // r0@15
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  unsigned int *v25; // r2@22
  signed int v26; // r1@24
  unsigned int *v27; // r2@26
  signed int v28; // r1@28
  unsigned int *v29; // r2@30
  signed int v30; // r1@32
  _DWORD *v31; // [sp+4h] [bp-94h]@15
  __int64 v32; // [sp+Ch] [bp-8Ch]@15
  _DWORD *v33; // [sp+14h] [bp-84h]@13
  __int64 v34; // [sp+1Ch] [bp-7Ch]@13
  _DWORD *v35; // [sp+24h] [bp-74h]@10
  __int64 v36; // [sp+2Ch] [bp-6Ch]@10
  int v37; // [sp+38h] [bp-60h]@10
  _DWORD *v38; // [sp+3Ch] [bp-5Ch]@7
  __int64 v39; // [sp+44h] [bp-54h]@7
  int v40; // [sp+50h] [bp-48h]@7
  void *v41; // [sp+54h] [bp-44h]@4
  __int64 v42; // [sp+5Ch] [bp-3Ch]@4
  int v43; // [sp+68h] [bp-30h]@4
  _DWORD *v44; // [sp+6Ch] [bp-2Ch]@1
  __int64 v45; // [sp+74h] [bp-24h]@1
  int v46; // [sp+80h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v46, "navigation_tab");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v46);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1241D18;
  *v3 = v1;
  HIDWORD(v4) = sub_1241A54;
  v44 = v3;
  v45 = v4;
  ScreenController::registerToggleChangeEventHandler((int)v1, v2, (int)&v44);
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  v5 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v46 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v43, "create_world_button");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v43);
  v7 = operator new(1u);
  LODWORD(v8) = sub_1241D52;
  v41 = v7;
  HIDWORD(v8) = sub_1241D4E;
  v42 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v41);
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
  v9 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v43 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v40, "button.menu_exit");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v40);
  v11 = operator new(4u);
  LODWORD(v12) = sub_1241DC2;
  *v11 = v1;
  HIDWORD(v12) = sub_1241D80;
  v38 = v11;
  v39 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  v13 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v40 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v37, "button.back_to_selector_area");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v37);
  v15 = operator new(4u);
  LODWORD(v16) = sub_1241F04;
  *v15 = v1;
  HIDWORD(v16) = sub_1241DF8;
  v35 = v15;
  v36 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v35);
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  v17 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v37 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = operator new(4u);
  LODWORD(v19) = sub_1241F4E;
  *v18 = v1;
  HIDWORD(v19) = sub_1241F3A;
  v33 = v18;
  v34 = v19;
  ScreenController::registerInputModechangedEventHandler((int)v1, (int)&v33);
  if ( (_DWORD)v34 )
    ((void (*)(void))v34)();
  v20 = operator new(4u);
  LODWORD(v21) = sub_1241F98;
  *v20 = v1;
  HIDWORD(v21) = sub_1241F84;
  v31 = v20;
  v32 = v21;
  result = ScreenController::registerHoloInputModeChangedEventHandler((int)v1, (int)&v31);
  if ( (_DWORD)v32 )
    result = (char *)((int (*)(void))v32)();
  return result;
}


int __fastcall SettingsScreenController::SettingsScreenController(int a1, int a2, int a3, int a4)
{
  MinecraftScreenModel **v4; // r6@1
  int v5; // r4@1
  int v6; // r9@1
  int v7; // r8@1
  int v8; // r0@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r5@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r7@14
  unsigned int v15; // r0@16
  signed int v16; // r0@22
  bool v17; // zf@24
  char v18; // r0@24
  double v19; // r0@27
  unsigned int v20; // r0@27
  int v21; // r5@29
  void *v22; // r6@29
  int v24; // [sp+Ch] [bp-34h]@1
  int v25; // [sp+10h] [bp-30h]@1

  v4 = (MinecraftScreenModel **)a2;
  v5 = a1;
  v6 = a4;
  v24 = *(_DWORD *)a2;
  v7 = a3;
  v8 = *(_DWORD *)(a2 + 4);
  v25 = v8;
  if ( v8 )
  {
    v9 = (unsigned int *)(v8 + 4);
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
  SettingsScreenControllerBase::SettingsScreenControllerBase(v5, (int)&v24);
  v11 = v25;
  if ( v25 )
    v12 = (unsigned int *)(v25 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  *(_DWORD *)v5 = &off_26E35E4;
  *(_BYTE *)(v5 + 520) = 0;
  *(_DWORD *)(v5 + 524) = v6;
  sub_21E94B4((void **)(v5 + 528), (const char *)&unk_257BC67);
  if ( v7 == 1 )
    v16 = MinecraftScreenModel::isPreGame(*v4);
  else
    v16 = 0;
  *(_DWORD *)(v5 + 532) = v16;
  v17 = MinecraftScreenModel::isRealmLevel(*(MinecraftScreenModel **)(v5 + 424)) == 1;
  v18 = 0;
  if ( v17 )
    v18 = MinecraftScreenModel::isRealmOwner(*(MinecraftScreenModel **)(v5 + 424));
  *(_BYTE *)(v5 + 536) = v18;
  *(_DWORD *)(v5 + 556) = &unk_28898CC;
  *(_DWORD *)(v5 + 560) = &unk_28898CC;
  *(_DWORD *)(v5 + 564) = &unk_28898CC;
  *(_DWORD *)(v5 + 568) = &unk_28898CC;
  *(_BYTE *)(v5 + 584) = 0;
  *(_DWORD *)(v5 + 588) = 0;
  *(_DWORD *)(v5 + 592) = 2;
  *(_BYTE *)(v5 + 596) = 0;
  *(_BYTE *)(v5 + 597) = 0;
  *(_BYTE *)(v5 + 598) = 0;
  *(_DWORD *)(v5 + 600) = 0;
  *(_DWORD *)(v5 + 604) = 0;
  *(_DWORD *)(v5 + 608) = 0;
  *(_DWORD *)(v5 + 636) = 0;
  *(_DWORD *)(v5 + 652) = 0;
  *(_WORD *)(v5 + 624) = 0;
  *(_DWORD *)(v5 + 616) = 0;
  *(_DWORD *)(v5 + 620) = 0;
  LevelSummary::LevelSummary((int *)(v5 + 664));
  *(_DWORD *)(v5 + 736) = 0;
  *(_DWORD *)(v5 + 740) = 0;
  *(_DWORD *)(v5 + 744) = 1065353216;
  *(_DWORD *)(v5 + 748) = 0;
  LODWORD(v19) = v5 + 744;
  v20 = sub_21E6254(v19);
  *(_DWORD *)(v5 + 732) = v20;
  if ( v20 == 1 )
    v22 = (void *)(v5 + 752);
    *(_DWORD *)(v5 + 752) = 0;
    if ( v20 >= 0x40000000 )
      sub_21E57F4();
    v21 = 4 * v20;
    v22 = operator new(4 * v20);
    _aeabi_memclr4(v22, v21);
  *(_DWORD *)(v5 + 728) = v22;
  *(_DWORD *)(v5 + 756) = 0;
  *(_DWORD *)(v5 + 760) = 0;
  SettingsScreenController::_init((SettingsScreenController *)v5);
  return v5;
}


void __fastcall SettingsScreenController::~SettingsScreenController(SettingsScreenController *this)
{
  SettingsScreenController *v1; // r0@1

  v1 = SettingsScreenController::~SettingsScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int *__fastcall SettingsScreenController::onOpen(SettingsScreenController *this, int a2, __int64 a3)
{
  SettingsScreenController *v3; // r4@1
  void *v4; // r0@4
  unsigned int *v6; // r12@6
  int v7; // [sp+0h] [bp-28h]@3
  int v8; // [sp+4h] [bp-24h]@3
  char v9; // [sp+8h] [bp-20h]@4
  char v10; // [sp+9h] [bp-1Fh]@3

  v3 = this;
  if ( !*((_BYTE *)this + 520) && *((_DWORD *)this + 159) )
  {
    sub_21E94B4((void **)&v8, "navigation_tab");
    v7 = *((_DWORD *)v3 + 131);
    v10 = 1;
    if ( !*((_DWORD *)v3 + 159) )
      sub_21E5F48();
    (*((void (__fastcall **)(_DWORD, _DWORD))v3 + 160))((char *)v3 + 628, &v7);
    *((_BYTE *)v3 + 520) = v9;
    a2 = v8;
    LODWORD(a3) = &dword_28898C0;
    v4 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v8 - 4);
      HIDWORD(a3) = &pthread_create;
      if ( &pthread_create )
      {
        __dmb();
        do
        {
          a2 = __ldrex(v6);
          HIDWORD(a3) = a2 - 1;
          LODWORD(a3) = __strex(a2 - 1, v6);
        }
        while ( (_DWORD)a3 );
      }
      else
        a2 = *v6;
        LODWORD(a3) = *v6 - 1;
        *v6 = a3;
      if ( a2 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
  }
  return ScreenController::onOpen(v3, a2, a3);
}


void **__fastcall SettingsScreenController::_getButtonBDescription(SettingsScreenController *this, int a2)
{
  int v2; // r5@1
  const void **v3; // r4@1
  int v4; // r1@1
  char *v5; // r7@2
  size_t *v6; // r6@2
  void **result; // r0@2
  int v8; // r6@5
  int v9; // r0@5
  int v10; // r6@8
  int v11; // r0@8
  unsigned int *v12; // r1@13
  signed int v13; // r0@15

  v2 = a2;
  v3 = (const void **)this;
  v4 = *(_DWORD *)(a2 + 756);
  if ( v4 )
  {
    RealmsSettingsScreenController::getButtonBDescription(this, v4);
    v5 = (char *)*v3;
    v6 = (size_t *)((char *)*v3 - 12);
    result = (void **)*((_DWORD *)Util::EMPTY_STRING - 3);
    if ( (void **)*v6 != result )
      return result;
    result = (void **)memcmp(*v3, Util::EMPTY_STRING, *v6);
    if ( result )
    if ( (int *)v6 != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v5 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
  }
  v8 = MinecraftScreenController::getInputMode((MinecraftScreenController *)v2);
  v9 = MinecraftScreenController::getHoloUIInputMode((MinecraftScreenController *)v2);
  if ( ((unsigned int)(v8 - 3) > 1 || v9 == 2 || *(_BYTE *)(v2 + 624))
    && (v10 = MinecraftScreenController::getInputMode((MinecraftScreenController *)v2),
        v11 = MinecraftScreenController::getHoloUIInputMode((MinecraftScreenController *)v2),
        (unsigned int)(v10 - 3) <= 1)
    && v11 != 2 )
    result = sub_21E94B4((void **)v3, "controller.buttonTip.back");
  else
    result = sub_21E94B4((void **)v3, "controller.buttonTip.exit");
  return result;
}


SettingsScreenController *__fastcall SettingsScreenController::~SettingsScreenController(SettingsScreenController *this)
{
  SettingsScreenController *v1; // r10@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r7@15
  unsigned int *v8; // r2@17
  signed int v9; // r1@19
  void *v10; // r6@25
  int v11; // r1@25
  void *v12; // r0@25
  char *v13; // r0@27
  void (*v14)(void); // r3@30
  void (*v15)(void); // r3@32
  int v16; // r1@34
  void *v17; // r0@34
  unsigned int *v19; // r2@36
  signed int v20; // r1@38

  v1 = this;
  *(_DWORD *)this = &off_26E35E4;
  v2 = *((_DWORD *)this + 190);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  v7 = *((_DWORD *)v1 + 184);
  while ( v7 )
    v10 = (void *)v7;
    v11 = *(_DWORD *)(v7 + 8);
    v7 = *(_DWORD *)v7;
    v12 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v11 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    operator delete(v10);
  _aeabi_memclr4(*((_QWORD *)v1 + 91), 4 * (*((_QWORD *)v1 + 91) >> 32));
  *((_DWORD *)v1 + 184) = 0;
  *((_DWORD *)v1 + 185) = 0;
  v13 = (char *)*((_DWORD *)v1 + 182);
  if ( v13 && (char *)v1 + 752 != v13 )
    operator delete(v13);
  LevelSummary::~LevelSummary((SettingsScreenController *)((char *)v1 + 664));
  v14 = (void (*)(void))*((_DWORD *)v1 + 163);
  if ( v14 )
    v14();
  v15 = (void (*)(void))*((_DWORD *)v1 + 159);
  if ( v15 )
    v15();
  Realms::World::~World((SettingsScreenController *)((char *)v1 + 544));
  v16 = *((_DWORD *)v1 + 132);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v16 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  SettingsScreenControllerBase::~SettingsScreenControllerBase(v1);
  return v1;
}


void __fastcall SettingsScreenController::_registerBindings(SettingsScreenController *this)
{
  SettingsScreenController::_registerBindings(this);
}


int __fastcall SettingsScreenController::_usingGamepadModalBehavior(SettingsScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  signed int v2; // r6@1
  signed int v3; // r5@1

  v1 = this;
  v2 = 0;
  v3 = 0;
  if ( (unsigned int)(MinecraftScreenController::getInputMode(this) - 3) < 2 )
    v2 = 1;
  if ( MinecraftScreenController::getHoloUIInputMode(v1) != 2 )
    v3 = 1;
  return v2 & v3;
}


int __fastcall SettingsScreenController::_getGamepadHelperVisible(SettingsScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  signed int v2; // r6@1
  signed int v3; // r5@1

  v1 = this;
  v2 = 0;
  v3 = 0;
  if ( (unsigned int)(MinecraftScreenController::getInputMode(this) - 3) < 2 )
    v2 = 1;
  if ( MinecraftScreenController::getHoloUIInputMode(v1) != 2 )
    v3 = 1;
  return v2 & v3;
}


int __fastcall SettingsScreenController::setViewCommand(SettingsScreenController *this, ScreenViewCommand *a2)
{
  int v2; // lr@0
  ScreenViewCommand *v3; // r5@1
  SettingsScreenController *v4; // r4@1
  int v5; // r12@1
  int v6; // r0@1
  void (__fastcall *v7)(__int64 *, char *, signed int); // r3@1
  int v8; // r1@2
  int v9; // r2@4
  void (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int result; // r0@6
  void (__fastcall *v12)(__int64 *, char *, signed int); // r3@6
  int v13; // r1@7
  int v14; // r6@9
  int (__cdecl *v15)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@9
  __int64 v16; // [sp+0h] [bp-30h]@2
  void (__cdecl *v17)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-28h]@1
  int v18; // [sp+Ch] [bp-24h]@2
  __int64 v19; // [sp+10h] [bp-20h]@7
  int (__cdecl *v20)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+18h] [bp-18h]@6
  int v21; // [sp+1Ch] [bp-14h]@7

  v3 = a2;
  v4 = this;
  ScreenController::setViewCommand(this, a2);
  v6 = 0;
  v17 = 0;
  v7 = (void (__fastcall *)(__int64 *, char *, signed int))*((_DWORD *)v3 + 6);
  if ( v7 )
  {
    v7(&v16, (char *)v3 + 16, 2);
    v6 = *((_DWORD *)v3 + 7);
    v18 = *((_DWORD *)v3 + 7);
    v8 = *((_DWORD *)v3 + 6);
    v17 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v3 + 6);
    v2 = HIDWORD(v16);
    v5 = v16;
  }
  else
    v8 = 0;
  v9 = (int)v4 + 628;
  v16 = *(_QWORD *)((char *)v4 + 628);
  *(_DWORD *)v9 = v5;
  *(_DWORD *)(v9 + 4) = v2;
  v17 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 159);
  v10 = v17;
  *((_DWORD *)v4 + 159) = v8;
  v18 = *((_DWORD *)v4 + 160);
  *((_DWORD *)v4 + 160) = v6;
  if ( v10 )
    v10(&v16, &v16, 3, v10);
  result = 0;
  v20 = 0;
  v12 = (void (__fastcall *)(__int64 *, char *, signed int))*((_DWORD *)v3 + 26);
  if ( v12 )
    v12(&v19, (char *)v3 + 96, 2);
    result = *((_DWORD *)v3 + 27);
    v21 = *((_DWORD *)v3 + 27);
    v13 = *((_DWORD *)v3 + 26);
    v20 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v3 + 26);
    v12 = (void (__fastcall *)(__int64 *, char *, signed int))HIDWORD(v19);
    v5 = v19;
    v13 = 0;
  v14 = (int)v4 + 644;
  v19 = *(_QWORD *)((char *)v4 + 644);
  *(_DWORD *)v14 = v5;
  *(_DWORD *)(v14 + 4) = v12;
  v20 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 163);
  v15 = v20;
  *((_DWORD *)v4 + 163) = v13;
  v21 = *((_DWORD *)v4 + 164);
  *((_DWORD *)v4 + 164) = result;
  if ( v15 )
    result = v15(&v19, &v19, 3, v15, v16, HIDWORD(v16), v17, v18);
  return result;
}


void __fastcall SettingsScreenController::_handleMenuExitButton(SettingsScreenController *this)
{
  SettingsScreenController *v1; // r4@1
  Options *v2; // r0@1

  v1 = this;
  v2 = (Options *)MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)this + 106));
  Options::save(v2, 1);
  MinecraftScreenModel::fireEventOptionsUpdated(*((MinecraftScreenModel **)v1 + 106));
  if ( !*((_DWORD *)v1 + 133) && MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v1 + 106)) == 1 )
  {
    if ( *((_BYTE *)v1 + 625) )
      j_j_j__ZN20MinecraftScreenModel21navigateToStartScreenEv_0(*((MinecraftScreenModel **)v1 + 106));
  }
}


void __fastcall SettingsScreenController::_registerBindings(SettingsScreenController *this)
{
  SettingsScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@6
  __int64 v6; // r1@6
  __int64 v7; // r1@6
  _DWORD *v8; // r0@10
  __int64 v9; // r1@10
  _DWORD *v10; // r0@12
  __int64 v11; // r1@12
  __int64 v12; // r1@12
  _DWORD *v13; // r0@16
  __int64 v14; // r1@16
  __int64 v15; // r1@16
  _DWORD *v16; // r0@20
  __int64 v17; // r1@20
  __int64 v18; // r1@20
  void *v19; // [sp+0h] [bp-D8h]@20
  __int64 v20; // [sp+8h] [bp-D0h]@20
  _DWORD *v21; // [sp+10h] [bp-C8h]@20
  __int64 v22; // [sp+18h] [bp-C0h]@20
  int v23; // [sp+20h] [bp-B8h]@20
  void *v24; // [sp+24h] [bp-B4h]@16
  __int64 v25; // [sp+2Ch] [bp-ACh]@16
  _DWORD *v26; // [sp+34h] [bp-A4h]@16
  __int64 v27; // [sp+3Ch] [bp-9Ch]@16
  int v28; // [sp+44h] [bp-94h]@16
  void *v29; // [sp+48h] [bp-90h]@12
  __int64 v30; // [sp+50h] [bp-88h]@12
  _DWORD *v31; // [sp+58h] [bp-80h]@12
  __int64 v32; // [sp+60h] [bp-78h]@12
  int v33; // [sp+68h] [bp-70h]@12
  _DWORD *v34; // [sp+6Ch] [bp-6Ch]@10
  __int64 v35; // [sp+74h] [bp-64h]@10
  int v36; // [sp+7Ch] [bp-5Ch]@10
  void *v37; // [sp+80h] [bp-58h]@6
  __int64 v38; // [sp+88h] [bp-50h]@6
  _DWORD *v39; // [sp+90h] [bp-48h]@6
  __int64 v40; // [sp+98h] [bp-40h]@6
  int v41; // [sp+A0h] [bp-38h]@6
  void *v42; // [sp+A4h] [bp-34h]@1
  __int64 v43; // [sp+ACh] [bp-2Ch]@1
  _DWORD *v44; // [sp+B4h] [bp-24h]@1
  __int64 v45; // [sp+BCh] [bp-1Ch]@1
  int v46; // [sp+C4h] [bp-14h]@1

  v1 = this;
  v46 = 1273014912;
  v2 = operator new(4u);
  LODWORD(v3) = sub_1241FDE;
  *v2 = v1;
  HIDWORD(v3) = sub_1241FCE;
  v44 = v2;
  v45 = v3;
  v42 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v43 = v4;
  ScreenController::bindString((int)v1, &v46, (int)&v44, (int)&v42);
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  if ( *((_DWORD *)v1 + 133) != 3 )
  {
    v41 = 365782143;
    v5 = operator new(4u);
    LODWORD(v6) = sub_12423F8;
    *v5 = v1;
    HIDWORD(v6) = sub_1242014;
    v39 = v5;
    v40 = v6;
    v37 = operator new(1u);
    LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
    HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v38 = v7;
    ScreenController::bindString((int)v1, &v41, (int)&v39, (int)&v37);
    if ( (_DWORD)v38 )
      ((void (*)(void))v38)();
    if ( (_DWORD)v40 )
      ((void (*)(void))v40)();
  }
  StringHash::StringHash<char [33]>(&v36, (int)"#navigation_tab_focus_precedence");
  v8 = operator new(4u);
  LODWORD(v9) = sub_12424BC;
  *v8 = v1;
  HIDWORD(v9) = sub_1242430;
  v34 = v8;
  v35 = v9;
  ScreenController::bindForGlobal((int)v1, &v36, (int)&v34);
  if ( (_DWORD)v35 )
    ((void (*)(void))v35)();
  StringHash::StringHash<char [32]>(&v33, (int)"#navigation_tab_toggle_on_hover");
  v10 = operator new(4u);
  LODWORD(v11) = sub_124251E;
  *v10 = v1;
  HIDWORD(v11) = sub_12424F2;
  v31 = v10;
  v32 = v11;
  v29 = operator new(1u);
  LODWORD(v12) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v12) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v30 = v12;
  ScreenController::bindBool((int)v1, &v33, (int)&v31, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  if ( (_DWORD)v32 )
    ((void (*)(void))v32)();
  v28 = -532179637;
  v13 = operator new(4u);
  LODWORD(v14) = sub_1242584;
  *v13 = v1;
  HIDWORD(v14) = sub_1242554;
  v26 = v13;
  v27 = v14;
  v24 = operator new(1u);
  LODWORD(v15) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v15) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v25 = v15;
  ScreenController::bindBool((int)v1, &v28, (int)&v26, (int)&v24);
  if ( (_DWORD)v25 )
    ((void (*)(void))v25)();
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  StringHash::StringHash<char [23]>(&v23, (int)"#selector_area_focused");
  v16 = operator new(4u);
  LODWORD(v17) = sub_12425EC;
  *v16 = v1;
  HIDWORD(v17) = sub_12425BA;
  v21 = v16;
  v22 = v17;
  v19 = operator new(1u);
  LODWORD(v18) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v18) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v20 = v18;
  ScreenController::bindBool((int)v1, &v23, (int)&v21, (int)&v19);
  if ( (_DWORD)v20 )
    ((void (*)(void))v20)();
  if ( (_DWORD)v22 )
    ((void (*)(void))v22)();
}
