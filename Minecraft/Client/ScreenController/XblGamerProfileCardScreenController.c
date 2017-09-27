

XblGamerProfileCardScreenController *__fastcall XblGamerProfileCardScreenController::~XblGamerProfileCardScreenController(XblGamerProfileCardScreenController *this)
{
  XblGamerProfileCardScreenController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  int v12; // r1@6
  void *v13; // r0@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  unsigned int *v17; // r2@12
  signed int v18; // r1@14
  unsigned int *v19; // r2@16
  signed int v20; // r1@18
  unsigned int *v21; // r2@20
  signed int v22; // r1@22
  unsigned int *v23; // r2@24
  signed int v24; // r1@26
  unsigned int *v25; // r2@28
  signed int v26; // r1@30

  v1 = this;
  *(_DWORD *)this = &off_26E44B0;
  v2 = *((_DWORD *)this + 111);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 110);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v4 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 109);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v6 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 108);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v8 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 107);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v10 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 106);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v12 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


void __fastcall XblGamerProfileCardScreenController::_registerEventHandlers(XblGamerProfileCardScreenController *this)
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
  sub_21E94B4((void **)&v37, "button.report");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v37);
  v3 = operator new(4u);
  LODWORD(v4) = sub_12A8C7C;
  *v3 = v1;
  HIDWORD(v4) = sub_12A8C62;
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v34, "button.add_friend");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v34);
  v7 = operator new(4u);
  LODWORD(v8) = sub_12A8E88;
  *v7 = v1;
  HIDWORD(v8) = sub_12A8CB4;
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
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v31, "mute_player");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v31);
  v11 = operator new(4u);
  LODWORD(v12) = sub_12A9488;
  *v11 = v1;
  HIDWORD(v12) = sub_12A91A0;
  v29 = v11;
  v30 = v12;
  ScreenController::registerToggleChangeEventHandler((int)v1, v10, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  v13 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v31 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v28, "block_player");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v15 = operator new(4u);
  LODWORD(v16) = sub_12A98F4;
  *v15 = v1;
  HIDWORD(v16) = sub_12A960C;
  v26 = v15;
  v27 = v16;
  ScreenController::registerToggleChangeEventHandler((int)v1, v14, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  v17 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v28 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
}


void __fastcall XblGamerProfileCardScreenController::_registerBindings(XblGamerProfileCardScreenController *this)
{
  XblGamerProfileCardScreenController::_registerBindings(this);
}


void __fastcall XblGamerProfileCardScreenController::_setUserProfileInfoByXuid(XblGamerProfileCardScreenController *this)
{
  int v1; // r7@0
  XblGamerProfileCardScreenController *v2; // r5@1
  int v3; // r4@1
  unsigned int v4; // r0@2
  unsigned int *v5; // r6@2
  unsigned int v6; // r1@5
  unsigned int v7; // r2@6
  bool v8; // zf@7
  int v9; // r0@10
  bool v10; // zf@10
  int v11; // r0@14
  int v12; // r0@17
  bool v13; // zf@17
  signed int v14; // r0@22
  unsigned int v15; // r0@27
  unsigned int *v16; // r5@31
  unsigned int v17; // r0@33
  int v18; // r0@38
  unsigned int *v19; // r2@39
  unsigned int v20; // r1@41
  int v21; // [sp+4h] [bp-1Ch]@1
  int v22; // [sp+8h] [bp-18h]@1

  v2 = this;
  MinecraftScreenModel::getUserProfileDataByXuid((int)&v21, *((_DWORD *)this + 95), (int *)this + 107);
  v3 = v22;
  if ( v22 )
  {
    v4 = *(_DWORD *)(v22 + 4);
    v5 = (unsigned int *)(v22 + 4);
    while ( v4 )
    {
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
      {
        v7 = __strex(v4 + 1, v5);
        v4 = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = *v5 == 0;
          if ( *v5 )
          {
            v1 = v21;
            v8 = v21 == 0;
          }
          if ( !v8 )
            EntityInteraction::setInteractText((int *)v2 + 108, (int *)(v1 + 4));
            EntityInteraction::setInteractText((int *)v2 + 109, (int *)(v1 + 16));
            *((_DWORD *)v2 + 113) = *(_DWORD *)(v1 + 20);
            EntityInteraction::setInteractText((int *)v2 + 111, (int *)(v1 + 12));
            EntityInteraction::setInteractText((int *)v2 + 110, (int *)(v1 + 8));
            v9 = *(_DWORD *)(v1 + 28);
            v10 = v9 == 1;
            if ( v9 != 1 )
              LOBYTE(v9) = 0;
            *((_BYTE *)v2 + 458) = v9;
            if ( v10 )
            {
              LOBYTE(v11) = 1;
            }
            else
              v11 = *(_DWORD *)(v1 + 24);
              if ( v11 != 1 )
                LOBYTE(v11) = 0;
            *((_BYTE *)v2 + 457) = v11;
            v12 = *(_DWORD *)(v1 + 32);
            v13 = v12 == 1;
            if ( v12 != 1 )
              LOBYTE(v12) = 0;
            *((_BYTE *)v2 + 456) = v12;
            if ( v13 )
              if ( *(_DWORD *)(v1 + 36) == 1 )
                v14 = 2;
              else
                v14 = 1;
              *((_DWORD *)v2 + 112) = v14;
          if ( &pthread_create )
            __dmb();
            do
              v15 = __ldrex(v5);
            while ( __strex(v15 - 1, v5) );
          else
            v15 = (*v5)--;
          if ( v15 == 1 )
            v16 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                v17 = __ldrex(v16);
              while ( __strex(v17 - 1, v16) );
              v17 = (*v16)--;
            if ( v17 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          break;
        }
      }
      else
        __clrex();
    }
    v18 = v22;
    if ( v22 )
      v19 = (unsigned int *)(v22 + 8);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (**)(void))(*(_DWORD *)v18 + 12))();
  }
}


void __fastcall XblGamerProfileCardScreenController::_registerEventHandlers(XblGamerProfileCardScreenController *this)
{
  XblGamerProfileCardScreenController::_registerEventHandlers(this);
}


void __fastcall XblGamerProfileCardScreenController::_registerFriendsDropdown(XblGamerProfileCardScreenController *this)
{
  XblGamerProfileCardScreenController::_registerFriendsDropdown(this);
}


void __fastcall XblGamerProfileCardScreenController::_registerFriendsDropdown(XblGamerProfileCardScreenController *this)
{
  ScreenController *v1; // r8@1
  __int64 v2; // r6@1
  double v3; // r0@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  __int64 v7; // r10@4
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  int v12; // r4@8
  int *v13; // r5@8
  void *v14; // r0@10
  void *v15; // r0@11
  int v16; // r4@12
  _DWORD *v17; // r0@12
  __int64 v18; // r1@12
  char *v19; // r4@14
  size_t v20; // r0@14
  int i; // r1@14
  int v22; // t1@15
  _DWORD *v23; // r0@16
  __int64 v24; // r1@16
  __int64 v25; // r1@16
  char *v26; // r0@20
  const void **v27; // r0@21
  const char *v28; // r4@21
  size_t v29; // r0@21
  int v30; // r1@21
  const char *v31; // r3@22
  int v32; // t1@23
  _DWORD *v33; // r0@24
  __int64 v34; // r1@24
  __int64 v35; // r1@24
  char *v36; // r0@29
  __int64 v37; // r4@30
  unsigned int v38; // r6@30
  _DWORD *v39; // r0@33
  __int64 v40; // r2@33
  __int64 v41; // r1@33
  int v42; // r11@37
  unsigned int *v43; // r2@39
  signed int v44; // r1@41
  unsigned int *v45; // r2@43
  signed int v46; // r1@45
  _BYTE *v47; // r5@55
  size_t v48; // r0@55
  int j; // r1@55
  int v50; // t1@56
  int v51; // r7@57
  int *v52; // r5@57
  void *v53; // r0@61
  int v54; // r8@62
  int *v55; // r5@62
  void *v56; // r0@64
  void *v57; // r0@66
  _DWORD *v58; // r7@68
  unsigned int *v59; // r2@69
  signed int v60; // r1@71
  int *v61; // r0@77
  unsigned __int64 *v62; // r6@81
  unsigned int *v63; // r2@83
  signed int v64; // r1@85
  unsigned __int64 *v65; // r5@91
  int v66; // r1@91
  void *v67; // r0@91
  unsigned int *v68; // r2@97
  signed int v69; // r1@99
  unsigned int *v70; // r2@101
  signed int v71; // r1@103
  unsigned int *v72; // r2@105
  signed int v73; // r1@107
  unsigned int *v74; // r2@109
  signed int v75; // r1@111
  unsigned int *v76; // r2@113
  signed int v77; // r1@115
  unsigned int *v78; // r2@117
  signed int v79; // r1@119
  unsigned int *v80; // r2@121
  signed int v81; // r1@123
  unsigned int *v82; // r2@125
  signed int v83; // r1@127
  unsigned int *v84; // r2@129
  signed int v85; // r1@131
  unsigned int *v86; // r2@133
  signed int v87; // r1@135
  unsigned int *v88; // r2@137
  signed int v89; // r1@139
  unsigned int *v90; // r2@141
  signed int v91; // r1@143
  unsigned int *v92; // r2@193
  signed int v93; // r1@195
  __int64 v94; // [sp+0h] [bp-1D0h]@1
  __int64 v95; // [sp+24h] [bp-1ACh]@35
  int v96; // [sp+38h] [bp-198h]@43
  int v97; // [sp+3Ch] [bp-194h]@62
  int v98; // [sp+40h] [bp-190h]@62
  int *v99; // [sp+44h] [bp-18Ch]@62
  int (__fastcall *v100)(void **, int *, int); // [sp+4Ch] [bp-184h]@62
  signed int (__fastcall *v101)(int, int); // [sp+50h] [bp-180h]@62
  void *v102; // [sp+54h] [bp-17Ch]@57
  int (__fastcall *v103)(void **, void **, int); // [sp+5Ch] [bp-174h]@57
  signed int (*v104)(); // [sp+60h] [bp-170h]@57
  int v105; // [sp+64h] [bp-16Ch]@39
  int v106; // [sp+68h] [bp-168h]@57
  ScreenController *v107; // [sp+6Ch] [bp-164h]@57
  int *v108; // [sp+70h] [bp-160h]@57
  int (__fastcall *v109)(void **, int *, int); // [sp+78h] [bp-158h]@57
  signed int (__fastcall *v110)(int); // [sp+7Ch] [bp-154h]@57
  int v111; // [sp+80h] [bp-150h]@57
  void *v112; // [sp+84h] [bp-14Ch]@33
  __int64 v113; // [sp+8Ch] [bp-144h]@33
  _DWORD *v114; // [sp+94h] [bp-13Ch]@33
  __int64 v115; // [sp+9Ch] [bp-134h]@33
  int v116; // [sp+A4h] [bp-12Ch]@30
  void *v117; // [sp+A8h] [bp-128h]@24
  __int64 v118; // [sp+B0h] [bp-120h]@24
  _DWORD *v119; // [sp+B8h] [bp-118h]@24
  __int64 v120; // [sp+C0h] [bp-110h]@24
  char *v121; // [sp+C8h] [bp-108h]@21
  int v122; // [sp+CCh] [bp-104h]@24
  void *v123; // [sp+D0h] [bp-100h]@16
  __int64 v124; // [sp+D8h] [bp-F8h]@16
  _DWORD *v125; // [sp+E0h] [bp-F0h]@16
  __int64 v126; // [sp+E8h] [bp-E8h]@16
  char *s; // [sp+F0h] [bp-E0h]@14
  int v128; // [sp+F4h] [bp-DCh]@16
  _DWORD *v129; // [sp+F8h] [bp-D8h]@12
  __int64 v130; // [sp+100h] [bp-D0h]@12
  int v131; // [sp+108h] [bp-C8h]@8
  ScreenController *v132; // [sp+10Ch] [bp-C4h]@8
  int *v133; // [sp+110h] [bp-C0h]@8
  int (__fastcall *v134)(void **, int *, int); // [sp+118h] [bp-B8h]@8
  void *v135; // [sp+11Ch] [bp-B4h]@8
  int v136; // [sp+124h] [bp-ACh]@8
  int v137; // [sp+12Ch] [bp-A4h]@8
  int v138; // [sp+140h] [bp-90h]@4
  int v139; // [sp+144h] [bp-8Ch]@4
  int v140; // [sp+148h] [bp-88h]@4
  int v141; // [sp+14Ch] [bp-84h]@4
  char v142; // [sp+150h] [bp-80h]@4
  char v143; // [sp+158h] [bp-78h]@1
  int v144; // [sp+15Ch] [bp-74h]@1
  int v145; // [sp+160h] [bp-70h]@1
  int v146; // [sp+164h] [bp-6Ch]@1
  int v147; // [sp+168h] [bp-68h]@1
  int v148; // [sp+16Ch] [bp-64h]@1
  int v149; // [sp+170h] [bp-60h]@1
  void *ptr; // [sp+174h] [bp-5Ch]@1
  int v151; // [sp+178h] [bp-58h]@93
  unsigned __int64 *v152; // [sp+17Ch] [bp-54h]@37
  int v153; // [sp+180h] [bp-50h]@93
  int v154; // [sp+18Ch] [bp-44h]@94
  char v155; // [sp+1A4h] [bp-2Ch]@1

  v1 = this;
  sub_21E94B4((void **)&v144, "#friend_option");
  v145 = 1;
  sub_21E94B4((void **)&v146, "#favorite_option");
  v147 = 2;
  sub_21E94B4((void **)&v148, "#remove_friend_option");
  v149 = 3;
  HIDWORD(v2) = &v155;
  LODWORD(v2) = &v143;
  v94 = v2;
  LODWORD(v3) = &ptr;
  std::_Hashtable<std::string,std::pair<std::string const,FriendStatus>,std::allocator<std::pair<std::string const,FriendStatus>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,FriendStatus> const*>(
    v3,
    (int **)&ptr,
    0);
  v4 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
  {
    v68 = (unsigned int *)(v148 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
    }
    else
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v146 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v144 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v138, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v139, "xbox.profile.friend");
  sub_21E94B4((void **)&v140, "xbox.profile.favorite");
  sub_21E94B4((void **)&v141, "xbox.profile.removeFriend");
  LODWORD(v7) = operator new(0x10u);
  HIDWORD(v7) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v138,
                  (int)&v142,
                  v7);
  v8 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v141 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v140 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v139 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v138 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v137, "add_friend_dropdown");
  sub_21E94B4((void **)&v136, "button.dropdown_exit");
  v12 = MinecraftScreenController::_getNameId(v1, (int **)&v136);
  sub_21E8AF4(&v131, &v137);
  v132 = v1;
  v134 = 0;
  v13 = (int *)operator new(8u);
  sub_21E8AF4(v13, &v131);
  v13[1] = (int)v132;
  v133 = v13;
  v134 = sub_12AA7D4;
  v135 = &loc_12AA7C4;
  ScreenController::registerButtonClickHandler((int)v1, v12, (int)&v133);
  if ( v134 )
    ((void (__cdecl *)(int **, int **, signed int, int (__fastcall *)(void **, int *, int), char *, char *))v134)(
      &v133,
      3,
      v134,
      &v143,
      &v155);
  v14 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v131 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v136 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = MinecraftScreenController::_getNameId(v1, (int **)&v137);
  v17 = operator new(4u);
  LODWORD(v18) = sub_12AA882;
  *v17 = v1;
  HIDWORD(v18) = sub_12AA874;
  v129 = v17;
  v130 = v18;
  ScreenController::registerToggleChangeEventHandler((int)v1, v16, (int)&v129);
  if ( (_DWORD)v130 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v130)(
      &v129,
      v130,
      v94,
      HIDWORD(v94));
  s = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&s, *(_DWORD *)(v137 - 12) + 1);
  sub_21E7408((const void **)&s, "#", 1u);
  sub_21E72F0((const void **)&s, (const void **)&v137);
  v19 = s;
  v20 = strlen(s);
  for ( i = -2128831035; v20; i = 16777619 * (i ^ v22) )
    v22 = (unsigned __int8)*v19++;
    --v20;
  v128 = i;
  v23 = operator new(4u);
  LODWORD(v24) = sub_12AA8C8;
  *v23 = v1;
  HIDWORD(v24) = sub_12AA8B8;
  v125 = v23;
  v126 = v24;
  v123 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v124 = v25;
  ScreenController::bindBool((int)v1, &v128, (int)&v125, (int)&v123);
  if ( (_DWORD)v124 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v124)(
      &v123,
      v124,
  if ( (_DWORD)v126 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v126)(
      &v125,
      v126,
  v26 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(s - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v121 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v121, *(_DWORD *)(v137 - 12) + 1);
  sub_21E7408((const void **)&v121, "#", 1u);
  sub_21E72F0((const void **)&v121, (const void **)&v137);
  v27 = sub_21E7408((const void **)&v121, "_visible", 8u);
  v28 = (const char *)*v27;
  *v27 = &unk_28898CC;
  v29 = strlen(v28);
  v30 = -2128831035;
  if ( v29 )
    v31 = v28;
    do
      v32 = *v31++;
      --v29;
      v30 = 16777619 * (v30 ^ v32);
    while ( v29 );
  v122 = v30;
  v33 = operator new(4u);
  LODWORD(v34) = sub_12AA90E;
  *v33 = v1;
  HIDWORD(v34) = sub_12AA8FE;
  v119 = v33;
  v120 = v34;
  v117 = operator new(1u);
  LODWORD(v35) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v35) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v118 = v35;
  ScreenController::bindBool((int)v1, &v122, (int)&v119, (int)&v117);
  if ( (_DWORD)v118 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v118)(
      &v117,
      v118,
  if ( (_DWORD)v120 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v120)(
      &v119,
      v120,
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v28 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9((void *)(v28 - 12));
  v36 = v121 - 12;
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v121 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  StringHash::StringHash<char [37]>(&v116, (int)"#friend_status_dropdown_toggle_label");
  LODWORD(v37) = 0;
  v38 = (HIDWORD(v7) - (signed int)v7) >> 2;
  if ( v38 )
    if ( v38 >= 0x40000000 )
      sub_21E57F4();
    LODWORD(v37) = operator new(HIDWORD(v7) - v7);
  HIDWORD(v37) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                   v7,
                   SHIDWORD(v7),
                   v37);
  v39 = operator new(0x10u);
  HIDWORD(v40) = sub_12AA944;
  *(_QWORD *)v39 = v37;
  v39[2] = v37 + 4 * v38;
  v39[3] = v1;
  LODWORD(v40) = sub_12AA95C;
  v114 = v39;
  v115 = v40;
  v112 = operator new(1u);
  LODWORD(v41) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v41) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v113 = v41;
  ScreenController::bindString((int)v1, &v116, (int)&v114, (int)&v112);
  if ( (_DWORD)v113 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v113)(
      &v112,
      v113,
  v95 = v7;
  if ( (_DWORD)v115 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v115)(
      &v114,
      v115,
  v42 = (int)v152;
  if ( v152 )
      v47 = *(_BYTE **)(v42 + 4);
      v48 = strlen(*(const char **)(v42 + 4));
      for ( j = -2128831035; v48; j = 16777619 * (j ^ v50) )
      {
        v50 = *v47++;
        --v48;
      }
      v111 = j;
      sub_21E8AF4(&v105, (int *)(v42 + 4));
      v51 = (int)v1;
      v106 = *(_DWORD *)(v42 + 8);
      v107 = v1;
      v109 = 0;
      v52 = (int *)operator new(0xCu);
      sub_21E8AF4(v52, &v105);
      v52[1] = v106;
      v52[2] = (int)v107;
      v108 = v52;
      v110 = sub_12AAA2C;
      v109 = sub_12AAA40;
      v103 = 0;
      v102 = operator new(1u);
      v104 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v103 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v111, (int)&v108, (int)&v102);
      if ( v103 )
        v103(&v102, &v102, 3);
      if ( v109 )
        v109((void **)&v108, (int *)&v108, 3);
      v53 = (void *)(v105 - 12);
      if ( (int *)(v105 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v105 - 4);
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
          j_j_j_j__ZdlPv_9(v53);
      v54 = MinecraftScreenController::_getNameId(v1, (int **)(v42 + 4));
      sub_21E8AF4(&v96, (int *)(v42 + 4));
      v97 = *(_DWORD *)(v42 + 8);
      v98 = v51;
      v100 = 0;
      v55 = (int *)operator new(0xCu);
      sub_21E8AF4(v55, &v96);
      v55[1] = v97;
      v55[2] = v98;
      v99 = v55;
      v101 = sub_12AAAE4;
      v100 = sub_12AAF4C;
      ScreenController::registerToggleChangeEventHandler(v51, v54, (int)&v99);
      if ( v100 )
        ((void (__cdecl *)(int **, int **, signed int, int (__fastcall *)(void **, int *, int), _DWORD, _DWORD))v100)(
          &v99,
          3,
          v100,
          v94,
          HIDWORD(v94));
      v1 = (ScreenController *)v51;
      v56 = (void *)(v96 - 12);
      if ( (int *)(v96 - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(v96 - 4);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j__ZdlPv_9(v56);
      v42 = *(_DWORD *)v42;
    while ( v42 );
  v57 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v137 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  if ( (_DWORD)v95 != HIDWORD(v95) )
    v58 = (_DWORD *)v95;
      v61 = (int *)(*v58 - 12);
      if ( v61 != &dword_28898C0 )
        v59 = (unsigned int *)(*v58 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j__ZdlPv_9(v61);
      ++v58;
    while ( v58 != (_DWORD *)HIDWORD(v95) );
  if ( (_DWORD)v95 )
    operator delete((void *)v95);
  v62 = v152;
  while ( v62 )
    v65 = v62;
    v66 = *v62 >> 32;
    v62 = (unsigned __int64 *)*v62;
    v67 = (void *)(v66 - 12);
    if ( (int *)(v66 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v66 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
      else
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j__ZdlPv_9(v67);
    operator delete(v65);
  _aeabi_memclr4(ptr, 4 * v151);
  v152 = 0;
  v153 = 0;
  if ( ptr )
    if ( &v154 != ptr )
      operator delete(ptr);
}


void __fastcall XblGamerProfileCardScreenController::_setUserProfileInfoByXuid(XblGamerProfileCardScreenController *this)
{
  XblGamerProfileCardScreenController::_setUserProfileInfoByXuid(this);
}


void __fastcall XblGamerProfileCardScreenController::~XblGamerProfileCardScreenController(XblGamerProfileCardScreenController *this)
{
  XblGamerProfileCardScreenController *v1; // r0@1

  v1 = XblGamerProfileCardScreenController::~XblGamerProfileCardScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall XblGamerProfileCardScreenController::~XblGamerProfileCardScreenController(XblGamerProfileCardScreenController *this)
{
  XblGamerProfileCardScreenController::~XblGamerProfileCardScreenController(this);
}


int __fastcall XblGamerProfileCardScreenController::tick(XblGamerProfileCardScreenController *this)
{
  XblGamerProfileCardScreenController *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = MinecraftScreenController::tick(this);
  if ( *((_BYTE *)v1 + 460) )
  {
    *((_BYTE *)v1 + 460) = 0;
    result |= 1u;
  }
  return result;
}


int __fastcall XblGamerProfileCardScreenController::XblGamerProfileCardScreenController(int a1, int a2, int *a3, int a4, __int64 a5, __int64 a6)
{
  int v6; // r4@1
  int *v7; // r5@1
  int v8; // r0@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r6@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r7@14
  unsigned int v15; // r0@16
  int v17; // [sp+8h] [bp-38h]@1
  int v18; // [sp+Ch] [bp-34h]@1

  v6 = a1;
  v17 = *(_DWORD *)a2;
  v7 = a3;
  v8 = *(_DWORD *)(a2 + 4);
  v18 = v8;
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
  MinecraftScreenController::MinecraftScreenController(v6, (MinecraftScreenModel **)&v17);
  v11 = v18;
  if ( v18 )
    v12 = (unsigned int *)(v18 + 4);
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
  *(_DWORD *)v6 = &off_26E44B0;
  sub_21E94B4((void **)(v6 + 424), "textures/ui/gamerpic");
  sub_21E8AF4((int *)(v6 + 428), v7);
  *(_DWORD *)(v6 + 432) = &unk_28898CC;
  *(_DWORD *)(v6 + 436) = &unk_28898CC;
  *(_DWORD *)(v6 + 440) = &unk_28898CC;
  *(_DWORD *)(v6 + 444) = &unk_28898CC;
  *(_DWORD *)(v6 + 448) = 0;
  *(_BYTE *)(v6 + 460) = 0;
  *(_DWORD *)(v6 + 456) = 0;
  *(_QWORD *)(v6 + 464) = a5;
  *(_QWORD *)(v6 + 472) = a6;
  XblGamerProfileCardScreenController::_setUserProfileInfoByXuid((XblGamerProfileCardScreenController *)v6);
  XblGamerProfileCardScreenController::_registerEventHandlers((XblGamerProfileCardScreenController *)v6);
  XblGamerProfileCardScreenController::_registerBindings((XblGamerProfileCardScreenController *)v6);
  return v6;
}


int __fastcall XblGamerProfileCardScreenController::XblGamerProfileCardScreenController(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r5@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  int v13; // r12@21
  int v14; // r2@21
  __int64 v15; // kr00_8@21
  int v17; // [sp+Ch] [bp-44h]@1
  int v18; // [sp+10h] [bp-40h]@1

  v3 = a1;
  v17 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v18 = v5;
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
  MinecraftScreenController::MinecraftScreenController(v3, (MinecraftScreenModel **)&v17);
  v8 = v18;
  if ( v18 )
    v9 = (unsigned int *)(v18 + 4);
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
  *(_DWORD *)v3 = &off_26E44B0;
  sub_21E94B4((void **)(v3 + 424), "textures/ui/gamerpic");
  sub_21E8AF4((int *)(v3 + 428), (int *)v4);
  sub_21E8AF4((int *)(v3 + 432), (int *)(v4 + 4));
  sub_21E8AF4((int *)(v3 + 436), (int *)(v4 + 12));
  sub_21E8AF4((int *)(v3 + 440), (int *)(v4 + 16));
  sub_21E8AF4((int *)(v3 + 444), (int *)(v4 + 32));
  *(_DWORD *)(v3 + 448) = 0;
  v13 = v3 + 464;
  *(_DWORD *)(v3 + 452) = *(_DWORD *)(v4 + 28);
  *(_BYTE *)(v3 + 460) = 0;
  *(_DWORD *)(v3 + 456) = 0;
  v14 = *(&mce::UUID::EMPTY + 1);
  v15 = qword_287E930;
  *(_DWORD *)v13 = mce::UUID::EMPTY;
  *(_DWORD *)(v13 + 4) = v14;
  *(_DWORD *)(v13 + 8) = v15;
  *(_DWORD *)(v3 + 476) = HIDWORD(v15);
  XblGamerProfileCardScreenController::_setUserProfileInfoByXuid((XblGamerProfileCardScreenController *)v3);
  XblGamerProfileCardScreenController::_registerEventHandlers((XblGamerProfileCardScreenController *)v3);
  XblGamerProfileCardScreenController::_registerBindings((XblGamerProfileCardScreenController *)v3);
  return v3;
}


void __fastcall XblGamerProfileCardScreenController::_registerBindings(XblGamerProfileCardScreenController *this)
{
  XblGamerProfileCardScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  _DWORD *v4; // r0@5
  __int64 v5; // r1@5
  __int64 v6; // r1@5
  _DWORD *v7; // r0@9
  __int64 v8; // r1@9
  __int64 v9; // r1@9
  _DWORD *v10; // r0@13
  __int64 v11; // r1@13
  __int64 v12; // r1@13
  _DWORD *v13; // r0@17
  __int64 v14; // r1@17
  __int64 v15; // r1@17
  _DWORD *v16; // r0@21
  __int64 v17; // r1@21
  __int64 v18; // r1@21
  _DWORD *v19; // r0@25
  __int64 v20; // r1@25
  __int64 v21; // r1@25
  __int64 v22; // r1@29
  __int64 v23; // r1@33
  _DWORD *v24; // r0@37
  __int64 v25; // r1@37
  __int64 v26; // r1@37
  _DWORD *v27; // r0@41
  __int64 v28; // r1@41
  __int64 v29; // r1@41
  _DWORD *v30; // r0@45
  __int64 v31; // r1@45
  __int64 v32; // r1@45
  _DWORD *v33; // r0@49
  __int64 v34; // r1@49
  __int64 v35; // r1@49
  _DWORD *v36; // r0@53
  __int64 v37; // r1@53
  __int64 v38; // r1@53
  _DWORD *v39; // r0@57
  __int64 v40; // r1@57
  __int64 v41; // r1@57
  void *v42; // [sp+4h] [bp-224h]@57
  __int64 v43; // [sp+Ch] [bp-21Ch]@57
  _DWORD *v44; // [sp+14h] [bp-214h]@57
  __int64 v45; // [sp+1Ch] [bp-20Ch]@57
  int v46; // [sp+24h] [bp-204h]@57
  void *v47; // [sp+28h] [bp-200h]@53
  __int64 v48; // [sp+30h] [bp-1F8h]@53
  _DWORD *v49; // [sp+38h] [bp-1F0h]@53
  __int64 v50; // [sp+40h] [bp-1E8h]@53
  int v51; // [sp+48h] [bp-1E0h]@53
  void *v52; // [sp+4Ch] [bp-1DCh]@49
  __int64 v53; // [sp+54h] [bp-1D4h]@49
  _DWORD *v54; // [sp+5Ch] [bp-1CCh]@49
  __int64 v55; // [sp+64h] [bp-1C4h]@49
  int v56; // [sp+6Ch] [bp-1BCh]@49
  void *v57; // [sp+70h] [bp-1B8h]@45
  __int64 v58; // [sp+78h] [bp-1B0h]@45
  _DWORD *v59; // [sp+80h] [bp-1A8h]@45
  __int64 v60; // [sp+88h] [bp-1A0h]@45
  int v61; // [sp+90h] [bp-198h]@45
  void *v62; // [sp+94h] [bp-194h]@41
  __int64 v63; // [sp+9Ch] [bp-18Ch]@41
  _DWORD *v64; // [sp+A4h] [bp-184h]@41
  __int64 v65; // [sp+ACh] [bp-17Ch]@41
  int v66; // [sp+B4h] [bp-174h]@41
  void *v67; // [sp+B8h] [bp-170h]@37
  __int64 v68; // [sp+C0h] [bp-168h]@37
  _DWORD *v69; // [sp+C8h] [bp-160h]@37
  __int64 v70; // [sp+D0h] [bp-158h]@37
  int v71; // [sp+D8h] [bp-150h]@37
  void *v72; // [sp+DCh] [bp-14Ch]@33
  __int64 v73; // [sp+E4h] [bp-144h]@33
  void *v74; // [sp+ECh] [bp-13Ch]@33
  void (*v75)(void); // [sp+F4h] [bp-134h]@33
  void **(__fastcall *v76)(void **); // [sp+F8h] [bp-130h]@33
  int v77; // [sp+FCh] [bp-12Ch]@33
  void *v78; // [sp+100h] [bp-128h]@29
  __int64 v79; // [sp+108h] [bp-120h]@29
  void *v80; // [sp+110h] [bp-118h]@29
  void (*v81)(void); // [sp+118h] [bp-110h]@29
  void **(__fastcall *v82)(void **); // [sp+11Ch] [bp-10Ch]@29
  int v83; // [sp+120h] [bp-108h]@29
  void *v84; // [sp+124h] [bp-104h]@25
  __int64 v85; // [sp+12Ch] [bp-FCh]@25
  _DWORD *v86; // [sp+134h] [bp-F4h]@25
  __int64 v87; // [sp+13Ch] [bp-ECh]@25
  int v88; // [sp+144h] [bp-E4h]@25
  void *v89; // [sp+148h] [bp-E0h]@21
  __int64 v90; // [sp+150h] [bp-D8h]@21
  _DWORD *v91; // [sp+158h] [bp-D0h]@21
  __int64 v92; // [sp+160h] [bp-C8h]@21
  int v93; // [sp+168h] [bp-C0h]@21
  void *v94; // [sp+16Ch] [bp-BCh]@17
  __int64 v95; // [sp+174h] [bp-B4h]@17
  _DWORD *v96; // [sp+17Ch] [bp-ACh]@17
  __int64 v97; // [sp+184h] [bp-A4h]@17
  int v98; // [sp+18Ch] [bp-9Ch]@17
  void *v99; // [sp+190h] [bp-98h]@13
  __int64 v100; // [sp+198h] [bp-90h]@13
  _DWORD *v101; // [sp+1A0h] [bp-88h]@13
  __int64 v102; // [sp+1A8h] [bp-80h]@13
  int v103; // [sp+1B0h] [bp-78h]@13
  void *v104; // [sp+1B4h] [bp-74h]@9
  __int64 v105; // [sp+1BCh] [bp-6Ch]@9
  _DWORD *v106; // [sp+1C4h] [bp-64h]@9
  __int64 v107; // [sp+1CCh] [bp-5Ch]@9
  int v108; // [sp+1D4h] [bp-54h]@9
  void *v109; // [sp+1D8h] [bp-50h]@5
  __int64 v110; // [sp+1E0h] [bp-48h]@5
  _DWORD *v111; // [sp+1E8h] [bp-40h]@5
  __int64 v112; // [sp+1F0h] [bp-38h]@5
  int v113; // [sp+1F8h] [bp-30h]@5
  void *v114; // [sp+1FCh] [bp-2Ch]@1
  __int64 v115; // [sp+204h] [bp-24h]@1
  _DWORD *v116; // [sp+20Ch] [bp-1Ch]@1
  void (*v117)(void); // [sp+214h] [bp-14h]@1
  int *(__fastcall *v118)(int *, int **); // [sp+218h] [bp-10h]@1
  int v119; // [sp+21Ch] [bp-Ch]@1

  v1 = this;
  XblGamerProfileCardScreenController::_registerFriendsDropdown(this);
  v119 = 1177582949;
  v2 = operator new(4u);
  *v2 = v1;
  v116 = v2;
  v117 = (void (*)(void))sub_12A9A98;
  v118 = sub_12A9A78;
  v114 = operator new(1u);
  LODWORD(v3) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v3) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v115 = v3;
  ScreenController::bindString((int)v1, &v119, (int)&v116, (int)&v114);
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  if ( v117 )
    v117();
  StringHash::StringHash<char [23]>(&v113, (int)"#texture_location_type");
  v4 = operator new(4u);
  LODWORD(v5) = sub_12A9B08;
  *v4 = v1;
  HIDWORD(v5) = sub_12A9ACE;
  v111 = v4;
  v112 = v5;
  v109 = operator new(1u);
  LODWORD(v6) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v6) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v110 = v6;
  ScreenController::bindString((int)v1, &v113, (int)&v111, (int)&v109);
  if ( (_DWORD)v110 )
    ((void (*)(void))v110)();
  if ( (_DWORD)v112 )
    ((void (*)(void))v112)();
  v108 = 486579846;
  v7 = operator new(4u);
  LODWORD(v8) = sub_12A9B4E;
  *v7 = v1;
  HIDWORD(v8) = sub_12A9B3E;
  v106 = v7;
  v107 = v8;
  v104 = operator new(1u);
  LODWORD(v9) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v9) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v105 = v9;
  ScreenController::bindString((int)v1, &v108, (int)&v106, (int)&v104);
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  if ( (_DWORD)v107 )
    ((void (*)(void))v107)();
  v103 = 499656167;
  v10 = operator new(4u);
  LODWORD(v11) = sub_12A9B94;
  *v10 = v1;
  HIDWORD(v11) = sub_12A9B84;
  v101 = v10;
  v102 = v11;
  v99 = operator new(1u);
  LODWORD(v12) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v12) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v100 = v12;
  ScreenController::bindString((int)v1, &v103, (int)&v101, (int)&v99);
  if ( (_DWORD)v100 )
    ((void (*)(void))v100)();
  if ( (_DWORD)v102 )
    ((void (*)(void))v102)();
  StringHash::StringHash<char [27]>(&v98, (int)"#currently_playing_visible");
  v13 = operator new(4u);
  LODWORD(v14) = sub_12A9BDA;
  *v13 = v1;
  HIDWORD(v14) = sub_12A9BCA;
  v96 = v13;
  v97 = v14;
  v94 = operator new(1u);
  LODWORD(v15) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v15) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v95 = v15;
  ScreenController::bindBool((int)v1, &v98, (int)&v96, (int)&v94);
  if ( (_DWORD)v95 )
    ((void (*)(void))v95)();
  if ( (_DWORD)v97 )
    ((void (*)(void))v97)();
  v93 = -1848558007;
  v16 = operator new(4u);
  LODWORD(v17) = sub_12A9EA0;
  *v16 = v1;
  HIDWORD(v17) = sub_12A9C10;
  v91 = v16;
  v92 = v17;
  v89 = operator new(1u);
  LODWORD(v18) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v18) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v90 = v18;
  ScreenController::bindString((int)v1, &v93, (int)&v91, (int)&v89);
  if ( (_DWORD)v90 )
    ((void (*)(void))v90)();
  if ( (_DWORD)v92 )
    ((void (*)(void))v92)();
  v88 = -416277361;
  v19 = operator new(4u);
  LODWORD(v20) = sub_12AA168;
  *v19 = v1;
  HIDWORD(v20) = sub_12A9ED8;
  v86 = v19;
  v87 = v20;
  v84 = operator new(1u);
  LODWORD(v21) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v21) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v85 = v21;
  ScreenController::bindString((int)v1, &v88, (int)&v86, (int)&v84);
  if ( (_DWORD)v85 )
    ((void (*)(void))v85)();
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  v83 = 1827067012;
  v80 = operator new(1u);
  v81 = (void (*)(void))sub_12AA1B8;
  v82 = sub_12AA1A0;
  v78 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v79 = v22;
  ScreenController::bindString((int)v1, &v83, (int)&v80, (int)&v78);
  if ( (_DWORD)v79 )
    ((void (*)(void))v79)();
  if ( v81 )
    v81();
  v77 = 1590757767;
  v74 = operator new(1u);
  v75 = (void (*)(void))sub_12AA200;
  v76 = sub_12AA1E8;
  v72 = operator new(1u);
  LODWORD(v23) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v23) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v73 = v23;
  ScreenController::bindString((int)v1, &v77, (int)&v74, (int)&v72);
  if ( (_DWORD)v73 )
    ((void (*)(void))v73)();
  if ( v75 )
    v75();
  v71 = 1451235127;
  v24 = operator new(4u);
  LODWORD(v25) = sub_12AA23E;
  *v24 = v1;
  HIDWORD(v25) = sub_12AA22E;
  v69 = v24;
  v70 = v25;
  v67 = operator new(1u);
  LODWORD(v26) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v26) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v68 = v26;
  ScreenController::bindString((int)v1, &v71, (int)&v69, (int)&v67);
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  if ( (_DWORD)v70 )
    ((void (*)(void))v70)();
  v66 = 694030729;
  v27 = operator new(4u);
  LODWORD(v28) = sub_12AA284;
  *v27 = v1;
  HIDWORD(v28) = sub_12AA274;
  v64 = v27;
  v65 = v28;
  v62 = operator new(1u);
  LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v29) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v63 = v29;
  ScreenController::bindBool((int)v1, &v66, (int)&v64, (int)&v62);
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  v61 = 392991853;
  v30 = operator new(4u);
  LODWORD(v31) = sub_12AA2CA;
  *v30 = v1;
  HIDWORD(v31) = sub_12AA2BA;
  v59 = v30;
  v60 = v31;
  v57 = operator new(1u);
  LODWORD(v32) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v32) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v58 = v32;
  ScreenController::bindBool((int)v1, &v61, (int)&v59, (int)&v57);
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  v56 = 1624255399;
  v33 = operator new(4u);
  LODWORD(v34) = sub_12AA310;
  *v33 = v1;
  HIDWORD(v34) = sub_12AA300;
  v54 = v33;
  v55 = v34;
  v52 = operator new(1u);
  LODWORD(v35) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v35) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v53 = v35;
  ScreenController::bindBool((int)v1, &v56, (int)&v54, (int)&v52);
  if ( (_DWORD)v53 )
    ((void (*)(void))v53)();
  if ( (_DWORD)v55 )
    ((void (*)(void))v55)();
  v51 = -1193183717;
  v36 = operator new(4u);
  LODWORD(v37) = sub_12AA364;
  *v36 = v1;
  HIDWORD(v37) = sub_12AA346;
  v49 = v36;
  v50 = v37;
  v47 = operator new(1u);
  LODWORD(v38) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v38) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v48 = v38;
  ScreenController::bindBool((int)v1, &v51, (int)&v49, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  v46 = -2121958225;
  v39 = operator new(4u);
  LODWORD(v40) = sub_12AA3AA;
  *v39 = v1;
  HIDWORD(v40) = sub_12AA39A;
  v44 = v39;
  v45 = v40;
  v42 = operator new(1u);
  LODWORD(v41) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v41) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v43 = v41;
  ScreenController::bindBool((int)v1, &v46, (int)&v44, (int)&v42);
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
}


int __fastcall XblGamerProfileCardScreenController::addStaticScreenVars(XblGamerProfileCardScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  XblGamerProfileCardScreenController *v3; // r5@1
  int v4; // r6@1
  bool v5; // r1@1
  __int64 v6; // r2@2
  int v8; // [sp+0h] [bp-28h]@4

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$hide_skin");
  v5 = 0;
  if ( !(*(_QWORD *)&mce::UUID::EMPTY ^ *((_QWORD *)v3 + 58)) )
  {
    v6 = *((_QWORD *)v3 + 59);
    HIDWORD(v6) ^= HIDWORD(qword_287E930);
    if ( v6 == (unsigned int)qword_287E930 )
      v5 = 1;
  }
  Json::Value::Value((Json::Value *)&v8, v5);
  Json::Value::operator=(v4, (const Json::Value *)&v8);
  Json::Value::~Value((Json::Value *)&v8);
  return ScreenController::addStaticScreenVars(v3, v2);
}
