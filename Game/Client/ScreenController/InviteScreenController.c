

void __fastcall InviteScreenController::_registerEventHandlers(InviteScreenController *this)
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
  unsigned int *v26; // r2@20
  signed int v27; // r1@22
  unsigned int *v28; // r2@24
  signed int v29; // r1@26
  unsigned int *v30; // r2@28
  signed int v31; // r1@30
  unsigned int *v32; // r2@32
  signed int v33; // r1@34
  unsigned int *v34; // r2@36
  signed int v35; // r1@38
  unsigned int *v36; // r2@40
  signed int v37; // r1@42
  _DWORD *v38; // [sp+4h] [bp-A4h]@16
  __int64 v39; // [sp+Ch] [bp-9Ch]@16
  int v40; // [sp+18h] [bp-90h]@16
  _DWORD *v41; // [sp+1Ch] [bp-8Ch]@13
  __int64 v42; // [sp+24h] [bp-84h]@13
  int v43; // [sp+30h] [bp-78h]@13
  _DWORD *v44; // [sp+34h] [bp-74h]@10
  __int64 v45; // [sp+3Ch] [bp-6Ch]@10
  int v46; // [sp+48h] [bp-60h]@10
  _DWORD *v47; // [sp+4Ch] [bp-5Ch]@7
  __int64 v48; // [sp+54h] [bp-54h]@7
  int v49; // [sp+60h] [bp-48h]@7
  _DWORD *v50; // [sp+64h] [bp-44h]@4
  __int64 v51; // [sp+6Ch] [bp-3Ch]@4
  int v52; // [sp+78h] [bp-30h]@4
  _DWORD *v53; // [sp+7Ch] [bp-2Ch]@1
  __int64 v54; // [sp+84h] [bp-24h]@1
  int v55; // [sp+90h] [bp-18h]@1

  v1 = this;
  sub_1590164((void **)&v55, "button.send_invites");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v55);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11B6F10;
  *v3 = v1;
  HIDWORD(v4) = sub_11B6890;
  v53 = v3;
  v54 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v53);
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  v5 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v55 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  sub_1590164((void **)&v52, "button.clear_selection");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v52);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11B70C6;
  *v7 = v1;
  HIDWORD(v8) = sub_11B70B8;
  v50 = v7;
  v51 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v50);
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  v9 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v52 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  sub_1590164((void **)&v49, "button.add_friend");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v49);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11B72C0;
  *v11 = v1;
  HIDWORD(v12) = sub_11B70FC;
  v47 = v11;
  v48 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v13 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v49 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
  sub_1590164((void **)&v46, "button.add_member");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v46);
  v15 = operator new(4u);
  LODWORD(v16) = sub_11B74EA;
  *v15 = v1;
  HIDWORD(v16) = sub_11B74D4;
  v44 = v15;
  v45 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v44);
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  v17 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v46 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v17);
  sub_1590164((void **)&v43, "toggle_invite_online");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v43);
  v19 = operator new(4u);
  LODWORD(v20) = sub_11B753E;
  *v19 = v1;
  HIDWORD(v20) = sub_11B7520;
  v41 = v19;
  v42 = v20;
  ScreenController::registerToggleChangeEventHandler((int)v1, v18, (int)&v41);
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
  v21 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v43 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v21);
  sub_1590164((void **)&v40, "toggle_invite_offline");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v40);
  v23 = operator new(4u);
  LODWORD(v24) = sub_11B7592;
  *v23 = v1;
  HIDWORD(v24) = sub_11B7574;
  v38 = v23;
  v39 = v24;
  ScreenController::registerToggleChangeEventHandler((int)v1, v22, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  v25 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v40 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v25);
}


int __fastcall InviteScreenController::getOnlineVisibleStatus(InviteScreenController *this, int a2)
{
  const Social::XboxProfile *v2; // r0@1
  Social::XboxProfile *v3; // r0@1
  int v4; // r4@1
  int v6; // [sp+0h] [bp-38h]@1
  int v7; // [sp+1Ch] [bp-1Ch]@1

  v2 = (const Social::XboxProfile *)std::__detail::_Map_base<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                      (unsigned __int64 *)((char *)this + 436),
                                      (int **)(*((_DWORD *)this + 106) + 12 * a2));
  v3 = Social::XboxProfile::XboxProfile((Social::XboxProfile *)&v6, v2);
  v4 = v7;
  Social::XboxProfile::~XboxProfile(v3);
  if ( v4 != 1 )
    v4 = 0;
  return v4;
}


void __fastcall InviteScreenController::_registerBindings(InviteScreenController *this)
{
  InviteScreenController::_registerBindings(this);
}


signed int __fastcall InviteScreenController::tick(InviteScreenController *this)
{
  InviteScreenController *v1; // r4@1
  signed int result; // r0@5

  v1 = this;
  if ( *((_BYTE *)this + 552) )
  {
    *((_BYTE *)this + 552) = 0;
    if ( *((_BYTE *)this + 475) )
      InviteScreenController::_refreshRealm(this);
    else
      InviteScreenController::_refreshFriendsData(this);
  }
  result = 0;
  if ( *((_BYTE *)v1 + 474) )
    *((_BYTE *)v1 + 474) = 0;
    result = 7;
  return result;
}


int __fastcall InviteScreenController::addStaticScreenVars(InviteScreenController *this, Json::Value *a2)
{
  InviteScreenController *v2; // r5@1
  Json::Value *v3; // r4@1
  unsigned int v4; // r7@1
  int v5; // r6@2
  int v6; // r6@2
  char *v7; // r0@2
  int v8; // r6@3
  int v9; // r6@4
  int v10; // r6@5
  int v11; // r6@6
  int v12; // r6@6
  bool v13; // r1@7
  int v15; // [sp+0h] [bp-98h]@11
  char v16; // [sp+10h] [bp-88h]@6
  char v17; // [sp+20h] [bp-78h]@4
  char v18; // [sp+30h] [bp-68h]@4
  char v19; // [sp+40h] [bp-58h]@5
  char v20; // [sp+50h] [bp-48h]@5
  char v21; // [sp+60h] [bp-38h]@2
  char v22; // [sp+70h] [bp-28h]@2

  v2 = this;
  v3 = a2;
  v4 = *((_WORD *)this + 236);
  if ( (_BYTE)v4 )
  {
    v5 = Json::Value::operator[](a2, "$err_message_text");
    Json::Value::Value((Json::Value *)&v22, "invite.error1");
    Json::Value::operator=(v5, (const Json::Value *)&v22);
    Json::Value::~Value((Json::Value *)&v22);
    v6 = Json::Value::operator[](v3, "$hide_err_message");
    Json::Value::Value((Json::Value *)&v21, 0);
    Json::Value::operator=(v6, (const Json::Value *)&v21);
    v7 = &v21;
  }
  else
    v8 = Json::Value::operator[](a2, "$err_message_text");
    if ( v4 >= 0x100 )
    {
      Json::Value::Value((Json::Value *)&v20, "invite.error2");
      Json::Value::operator=(v8, (const Json::Value *)&v20);
      Json::Value::~Value((Json::Value *)&v20);
      v10 = Json::Value::operator[](v3, "$hide_err_message");
      Json::Value::Value((Json::Value *)&v19, 0);
      Json::Value::operator=(v10, (const Json::Value *)&v19);
      v7 = &v19;
    }
    else
      Json::Value::Value((Json::Value *)&v18, (const char *)&unk_257BC67);
      Json::Value::operator=(v8, (const Json::Value *)&v18);
      Json::Value::~Value((Json::Value *)&v18);
      v9 = Json::Value::operator[](v3, "$hide_err_message");
      Json::Value::Value((Json::Value *)&v17, 1);
      Json::Value::operator=(v9, (const Json::Value *)&v17);
      v7 = &v17;
  Json::Value::~Value((Json::Value *)v7);
  v11 = Json::Value::operator[](v3, "$is_inviting_to_realm");
  Json::Value::Value((Json::Value *)&v16, *((_BYTE *)v2 + 475));
  Json::Value::operator=(v11, (const Json::Value *)&v16);
  Json::Value::~Value((Json::Value *)&v16);
  v12 = Json::Value::operator[](v3, "$is_realm_owner");
  if ( *((_BYTE *)v2 + 475) )
    v13 = *((_BYTE *)v2 + 476);
    if ( *((_BYTE *)v2 + 476) )
      v13 = 1;
    v13 = 0;
  Json::Value::Value((Json::Value *)&v15, v13);
  Json::Value::operator=(v12, (const Json::Value *)&v15);
  Json::Value::~Value((Json::Value *)&v15);
  return ScreenController::addStaticScreenVars(v2, v3);
}


InviteScreenController *__fastcall InviteScreenController::~InviteScreenController(InviteScreenController *this)
{
  InviteScreenController *v1; // r11@1
  _DWORD *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  _DWORD *v5; // r6@11
  Social::XboxProfile *v6; // r0@11
  int v7; // r1@11
  void *v8; // r0@11
  char *v9; // r0@13
  int v10; // r5@16 OVERLAPPED
  int v11; // r6@16 OVERLAPPED
  unsigned int *v12; // r2@18
  signed int v13; // r1@20
  unsigned int *v14; // r2@22
  signed int v15; // r1@24
  int v16; // r1@34
  void *v17; // r0@34
  int *v18; // r0@35

  v1 = this;
  *(_DWORD *)this = &off_26E2340;
  Realms::World::~World((InviteScreenController *)((char *)this + 480));
  v2 = (_DWORD *)*((_DWORD *)v1 + 111);
  while ( v2 )
  {
    v5 = v2;
    v6 = (Social::XboxProfile *)(v2 + 2);
    v2 = (_DWORD *)*v2;
    Social::XboxProfile::~XboxProfile(v6);
    v7 = v5[1];
    v8 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v7 - 4);
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
        j_j_j_j_j__ZdlPv_9_2(v8);
    }
    operator delete(v5);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 436), 4 * (*(_QWORD *)((char *)v1 + 436) >> 32));
  *((_DWORD *)v1 + 111) = 0;
  *((_DWORD *)v1 + 112) = 0;
  v9 = (char *)*((_DWORD *)v1 + 109);
  if ( v9 && (char *)v1 + 460 != v9 )
    operator delete(v9);
  *(_QWORD *)&v10 = *((_QWORD *)v1 + 53);
  if ( v10 != v11 )
    do
      v16 = *(_DWORD *)(v10 + 4);
      v17 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v16 - 4);
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
          j_j_j_j_j__ZdlPv_9_2(v17);
      v18 = (int *)(*(_DWORD *)v10 - 12);
      if ( v18 != &dword_28898C0 )
        v14 = (unsigned int *)(*(_DWORD *)v10 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v18);
      v10 += 12;
    while ( v10 != v11 );
    v10 = *((_DWORD *)v1 + 106);
  if ( v10 )
    operator delete((void *)v10);
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


void __fastcall InviteScreenController::_refreshFriendsData(InviteScreenController *this)
{
  InviteScreenController::_refreshFriendsData(this);
}


void __fastcall InviteScreenController::_refreshXuidData(InviteScreenController *this)
{
  InviteScreenController::_refreshXuidData(this);
}


void __fastcall InviteScreenController::_refreshDataList(InviteScreenController *this)
{
  InviteScreenController *v1; // r11@1
  char *v2; // r0@1
  __int64 v3; // kr00_8@1
  int v4; // r5@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  int v9; // r1@19
  void *v10; // r0@19
  int *v11; // r0@20
  int v12; // r5@22
  unsigned int *v13; // r2@24
  signed int v14; // r1@26
  unsigned int *v15; // r2@28
  signed int v16; // r1@30
  unsigned int *v17; // r2@32
  signed int v18; // r1@34
  unsigned int *v19; // r2@36
  signed int v20; // r1@38
  unsigned int *v21; // r2@40
  signed int v22; // r1@42
  unsigned int *v23; // r2@44
  signed int v24; // r1@46
  unsigned int *v25; // r2@48
  signed int v26; // r1@50
  unsigned int *v27; // r2@52
  signed int v28; // r1@54
  unsigned int *v29; // r2@56
  signed int v30; // r1@58
  unsigned int *v31; // r2@60
  signed int v32; // r1@62
  int v33; // r0@103
  int v34; // r0@107
  int *v35; // r1@107
  char *v36; // r0@108
  int v37; // r0@108
  int v38; // r1@108 OVERLAPPED
  int v39; // r2@108
  char *v40; // r1@109
  char *v41; // r0@110
  int v42; // r0@110
  int v43; // r1@110 OVERLAPPED
  int v44; // r2@110
  char *v45; // r1@111
  char *v46; // r0@113
  char *v47; // r0@114
  char *v48; // r0@115
  char *v49; // r0@116
  void *v50; // r0@117
  char *v51; // r0@123
  char *v52; // r0@124
  char *v53; // r0@125
  char *v54; // r0@126
  void *v55; // r0@128
  const void **v56; // r10@130
  int v57; // r6@130
  int v58; // r9@131
  int v59; // r0@131
  const void *v60; // r4@132
  int v61; // r8@132
  size_t v62; // r7@132
  int v63; // r5@134
  _DWORD *v64; // r0@135
  _DWORD *v65; // r0@137
  _DWORD *v66; // r0@139
  int v67; // r0@142
  const void *v68; // r4@145
  size_t v69; // r7@145
  size_t v70; // r2@147
  int *v71; // r8@159
  int v72; // r4@159
  const void **v73; // r1@160
  size_t v74; // r2@162
  int v75; // r0@163
  int *v76; // r5@170
  int **v77; // r0@174
  int v78; // r1@176
  int **v79; // r7@178
  int *v80; // r5@179
  int v81; // r0@180
  unsigned int v82; // r1@180
  int **v83; // r1@183
  int v84; // r0@185
  unsigned int v85; // r1@185
  signed int v86; // r0@185
  int **v87; // r4@187
  int *v88; // r5@188
  int **v89; // r0@192
  int v90; // r1@194
  int *v91; // r5@197
  int **v92; // r0@201
  int v93; // r1@203
  int *v94; // r5@205
  int **v95; // r7@206
  int **v96; // r0@210
  int v97; // r1@212
  const void **v98; // r4@214
  const void **v99; // r6@214
  unsigned int *v100; // r2@216
  signed int v101; // r1@218
  int *v102; // r0@224
  const void **v103; // [sp+4h] [bp-84h]@130
  char *v104; // [sp+8h] [bp-80h]@1
  const void **v105; // [sp+Ch] [bp-7Ch]@130
  const void **v106; // [sp+10h] [bp-78h]@130
  char *v107; // [sp+18h] [bp-70h]@40
  char *v108; // [sp+1Ch] [bp-6Ch]@36
  int v109; // [sp+20h] [bp-68h]@108
  int v110; // [sp+24h] [bp-64h]@108
  char *v111; // [sp+28h] [bp-60h]@32
  char *v112; // [sp+2Ch] [bp-5Ch]@108
  int v113; // [sp+30h] [bp-58h]@108
  char *v114; // [sp+38h] [bp-50h]@56
  char *v115; // [sp+3Ch] [bp-4Ch]@52
  int v116; // [sp+40h] [bp-48h]@110
  int v117; // [sp+44h] [bp-44h]@60
  char *v118; // [sp+48h] [bp-40h]@48
  char *v119; // [sp+4Ch] [bp-3Ch]@110
  int v120; // [sp+50h] [bp-38h]@110
  int v121; // [sp+54h] [bp-34h]@107
  int v122; // [sp+58h] [bp-30h]@107
  int v123; // [sp+5Ch] [bp-2Ch]@24

  v1 = this;
  v2 = (char *)this + 424;
  v3 = *(_QWORD *)v2;
  v104 = v2;
  if ( HIDWORD(v3) != (_DWORD)v3 )
  {
    v4 = *(_QWORD *)v2;
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
          j_j_j_j_j__ZdlPv_9_2(v10);
      }
      v11 = (int *)(*(_DWORD *)v4 - 12);
      if ( v11 != &dword_28898C0 )
        v7 = (unsigned int *)(*(_DWORD *)v4 - 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v11);
      v4 += 12;
    }
    while ( v4 != HIDWORD(v3) );
  }
  *((_DWORD *)v1 + 107) = v3;
  *((_DWORD *)v1 + 116) = 0;
  v12 = *((_DWORD *)v1 + 111);
  if ( v12 )
    while ( 1 )
      v33 = *(_DWORD *)(v12 + 52);
      if ( v33 & 1 )
        break;
      if ( (*(_DWORD *)(v12 + 52) & 0xF) != 15 )
        *((_BYTE *)v1 + 473) = 1;
LABEL_129:
      v12 = *(_DWORD *)v12;
      if ( !v12 )
        goto LABEL_130;
    sub_15901A4(&v123, (int *)(v12 + 24));
    v121 = v123;
    v122 = *(_DWORD *)(v123 - 12);
    v34 = Core::FileSystem::fileOrDirectoryExists((__int64 *)&v121);
    v35 = (int *)(v12 + 4);
    if ( v34 )
      sub_15901A4(&v110, v35);
      sub_15901A4((int *)&v107, &v123);
      v36 = v107;
      v107 = (char *)&unk_28898CC;
      v108 = v36;
      v109 = 2;
      sub_15901A4((int *)&v111, &v110);
      sub_15901A4((int *)&v112, (int *)&v108);
      v37 = v109;
      v113 = v109;
      *(_QWORD *)&v38 = *(_QWORD *)((char *)v1 + 428);
      if ( v38 == v39 )
        std::vector<InviteScreenController::friendEntry,std::allocator<InviteScreenController::friendEntry>>::_M_emplace_back_aux<InviteScreenController::friendEntry>(
          v104,
          (int)&v111);
        v40 = v112;
      else
        *(_DWORD *)v38 = v111;
        v111 = (char *)&unk_28898CC;
        *(_DWORD *)(v38 + 4) = v112;
        v112 = (char *)&unk_28898CC;
        *(_DWORD *)(v38 + 8) = v37;
        *((_DWORD *)v1 + 107) = v38 + 12;
        v40 = (char *)&unk_28898CC;
      v46 = v40 - 12;
      if ( (int *)(v40 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v40 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v46);
      v47 = v111 - 12;
      if ( (int *)(v111 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v111 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v47);
      v48 = v108 - 12;
      if ( (int *)(v108 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v108 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v48);
      v49 = v107 - 12;
      if ( (int *)(v107 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v107 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v49);
      v50 = (void *)(v110 - 12);
      if ( (int *)(v110 - 12) == &dword_28898C0 )
        goto LABEL_128;
      v31 = (unsigned int *)(v110 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
LABEL_63:
        goto LABEL_68;
    else
      sub_15901A4(&v117, v35);
      sub_1590164((void **)&v114, "textures/ui/gamerpic");
      v41 = v114;
      v114 = (char *)&unk_28898CC;
      v115 = v41;
      v116 = 0;
      sub_15901A4((int *)&v118, &v117);
      sub_15901A4((int *)&v119, (int *)&v115);
      v42 = v116;
      v120 = v116;
      *(_QWORD *)&v43 = *(_QWORD *)((char *)v1 + 428);
      if ( v43 == v44 )
          (int)&v118);
        v45 = v119;
        *(_DWORD *)v43 = v118;
        v118 = (char *)&unk_28898CC;
        *(_DWORD *)(v43 + 4) = v119;
        v119 = (char *)&unk_28898CC;
        *(_DWORD *)(v43 + 8) = v42;
        *((_DWORD *)v1 + 107) = v43 + 12;
        v45 = (char *)&unk_28898CC;
      v51 = v45 - 12;
      if ( (int *)(v45 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v45 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v51);
      v52 = v118 - 12;
      if ( (int *)(v118 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v118 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v52);
      v53 = v115 - 12;
      if ( (int *)(v115 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v115 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v53);
      v54 = v114 - 12;
      if ( (int *)(v114 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v114 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v54);
      v50 = (void *)(v117 - 12);
      if ( (int *)(v117 - 12) == &dword_28898C0 )
      v31 = (unsigned int *)(v117 - 4);
        goto LABEL_63;
    v32 = (*v31)--;
LABEL_68:
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v50);
LABEL_128:
    v55 = (void *)(v123 - 12);
    if ( (int *)(v123 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v123 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v55);
    goto LABEL_129;
LABEL_130:
  MinecraftScreenModel::getXuidsInLobby((MinecraftScreenModel *)&v105, *((_DWORD *)v1 + 95));
  v56 = v105;
  v57 = *((_DWORD *)v1 + 106);
  v103 = v106;
  if ( v105 != v106 )
      v58 = *((_DWORD *)v1 + 107);
      v59 = -1431655765 * ((v58 - v57) >> 2) >> 2;
      if ( v59 >= 1 )
        v60 = *v56;
        v61 = v59 + 1;
        v62 = *((_DWORD *)*v56 - 3);
          if ( *(_DWORD *)(*(_DWORD *)v57 - 12) == v62 )
          {
            v63 = v57;
            if ( !memcmp(*(const void **)v57, v60, v62) )
              goto LABEL_158;
          }
          v63 = v57 + 12;
          v64 = *(_DWORD **)(v57 + 12);
          if ( *(v64 - 3) == v62 && !memcmp(v64, v60, v62) )
            goto LABEL_158;
          v63 = v57 + 24;
          v65 = *(_DWORD **)(v57 + 24);
          if ( *(v65 - 3) == v62 && !memcmp(v65, v60, v62) )
          v63 = v57 + 36;
          v66 = *(_DWORD **)(v57 + 36);
          if ( *(v66 - 3) == v62 && !memcmp(v66, v60, v62) )
          --v61;
          v57 += 48;
        while ( v61 > 1 );
      v67 = -1431655765 * ((v58 - v57) >> 2);
      if ( v67 == 1 )
      if ( v67 == 3 )
        v68 = *v56;
        v69 = *((_DWORD *)*v56 - 3);
        v70 = *(_DWORD *)(*(_DWORD *)v57 - 12);
        if ( v70 == v69 )
          v63 = v57;
          if ( !memcmp(*(const void **)v57, *v56, v70) )
        v63 = v57 + 12;
LABEL_150:
        if ( *(_DWORD *)(*(_DWORD *)v63 - 12) == v69 && !memcmp(*(const void **)v63, v68, v69) )
          goto LABEL_158;
        v63 += 12;
LABEL_153:
        if ( *(_DWORD *)(*(_DWORD *)v63 - 12) == v69 )
          if ( memcmp(*(const void **)v63, v68, v69) )
            v63 = v58;
        goto LABEL_157;
      if ( v67 == 2 )
        v63 = v57;
        goto LABEL_150;
LABEL_157:
      v63 = v58;
LABEL_158:
      if ( v63 == v58 )
        v72 = v58;
        v71 = (int *)v104;
        v72 = v63;
LABEL_160:
        v73 = (const void **)(v63 + 12);
        while ( 1 )
          v63 = (int)v73;
          if ( (const void **)v58 == v73 )
            break;
          v74 = *((_DWORD *)*v73 - 3);
          if ( v74 == *((_DWORD *)*v56 - 3) )
            v75 = memcmp(*v73, *v56, v74);
            v73 = (const void **)(v63 + 12);
            if ( !v75 )
              continue;
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v72,
            (int *)v63);
            (int *)(v72 + 4),
            (int *)(v63 + 4));
          *(_DWORD *)(v72 + 8) = *(_DWORD *)(v63 + 8);
          v72 += 12;
          goto LABEL_160;
        v58 = *((_DWORD *)v1 + 107);
      std::vector<InviteScreenController::friendEntry,std::allocator<InviteScreenController::friendEntry>>::_M_erase(
        (int)v71,
        v72,
        v58);
      v57 = *v71;
      ++v56;
      if ( v56 == v103 )
        goto LABEL_170;
    v68 = *v56;
    v63 = v57;
    v69 = *((_DWORD *)*v56 - 3);
    goto LABEL_153;
  v71 = (int *)v104;
LABEL_170:
  v76 = (int *)*((_DWORD *)v1 + 107);
  if ( (int *)v57 != v76 )
LABEL_171:
    while ( *(_DWORD *)(std::__detail::_Map_base<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                          (unsigned __int64 *)((char *)v1 + 436),
                          (int **)v57)
                      + 28) == 1 )
      v57 += 12;
      if ( v76 == (int *)v57 )
        goto LABEL_178;
    v77 = (int **)(v76 - 3);
      v76 = (int *)v77;
      if ( (int **)v57 == v77 )
      v78 = *(_DWORD *)(std::__detail::_Map_base<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                          v77)
                      + 28);
      v77 = (int **)(v76 - 3);
      if ( v78 == 1 )
        std::swap<InviteScreenController::friendEntry>(v57, v76);
        v57 += 12;
        if ( (int *)v57 != v76 )
          goto LABEL_171;
LABEL_178:
  v79 = (int **)*v71;
  if ( *v71 != v57 )
    v80 = (int *)v57;
LABEL_180:
      v81 = std::__detail::_Map_base<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)((char *)v1 + 436),
              v79);
      if ( !Social::XboxLiveUserManager::isTitleIdMinecraftAnyPlatform(*(Social::XboxLiveUserManager **)(v81 + 24), v82) )
      v79 += 3;
      if ( (int **)v80 == v79 )
        goto LABEL_187;
    v83 = (int **)(v80 - 3);
      v80 = (int *)v83;
      if ( v79 == v83 )
      v84 = std::__detail::_Map_base<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              v83);
      v86 = Social::XboxLiveUserManager::isTitleIdMinecraftAnyPlatform(*(Social::XboxLiveUserManager **)(v84 + 24), v85);
      v83 = (int **)(v80 - 3);
      if ( v86 == 1 )
        std::swap<InviteScreenController::friendEntry>((int)v79, v80);
        v79 += 3;
        if ( (int *)v79 != v80 )
          goto LABEL_180;
LABEL_187:
  v87 = (int **)*v71;
  if ( (int **)*v71 != v79 )
    v88 = (int *)v79;
LABEL_189:
    while ( *(_BYTE *)(std::__detail::_Map_base<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                         (unsigned __int64 *)((char *)v1 + 436),
                         v87)
                     + 21) )
      v87 += 3;
      if ( (int **)v88 == v87 )
        goto LABEL_196;
    v89 = (int **)(v88 - 3);
      v88 = (int *)v89;
      if ( v87 == v89 )
      v90 = *(_BYTE *)(std::__detail::_Map_base<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                         v89)
                     + 21);
      v89 = (int **)(v88 - 3);
      if ( v90 )
        std::swap<InviteScreenController::friendEntry>((int)v87, v88);
        v87 += 3;
        if ( (int *)v87 != v88 )
          goto LABEL_189;
LABEL_196:
  if ( v79 != (int **)v57 )
    v91 = (int *)v57;
LABEL_198:
                         v79)
      if ( (int **)v91 == v79 )
        goto LABEL_205;
    v92 = (int **)(v91 - 3);
      v91 = (int *)v92;
      if ( v79 == v92 )
      v93 = *(_BYTE *)(std::__detail::_Map_base<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                         v92)
      v92 = (int **)(v91 - 3);
      if ( v93 )
        std::swap<InviteScreenController::friendEntry>((int)v79, v91);
        if ( (int *)v79 != v91 )
          goto LABEL_198;
LABEL_205:
  v94 = (int *)*((_DWORD *)v1 + 107);
  if ( (int *)v57 != v94 )
    v95 = (int **)v57;
LABEL_207:
                         v95)
      v95 += 3;
      if ( (int **)v94 == v95 )
        goto LABEL_214;
    v96 = (int **)(v94 - 3);
      v94 = (int *)v96;
      if ( v95 == v96 )
      v97 = *(_BYTE *)(std::__detail::_Map_base<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                         v96)
      v96 = (int **)(v94 - 3);
      if ( v97 )
        std::swap<InviteScreenController::friendEntry>((int)v95, v94);
        v95 += 3;
        if ( (int *)v95 != v94 )
          goto LABEL_207;
LABEL_214:
  *((_DWORD *)v1 + 117) = -1431655765 * ((v57 - *((_DWORD *)v1 + 106)) >> 2);
  *((_BYTE *)v1 + 474) = 1;
  v99 = v106;
  v98 = v105;
      v102 = (int *)((char *)*v98 - 12);
      if ( v102 != &dword_28898C0 )
        v100 = (unsigned int *)((char *)*v98 - 4);
            v101 = __ldrex(v100);
          while ( __strex(v101 - 1, v100) );
          v101 = (*v100)--;
        if ( v101 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v102);
      ++v98;
    while ( v98 != v99 );
    v98 = v105;
  if ( v98 )
    operator delete(v98);
}


int __fastcall InviteScreenController::_refreshRealm(InviteScreenController *this)
{
  InviteScreenController *v1; // r4@1
  int v2; // r5@1
  __int64 v3; // kr00_8@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  _QWORD *v6; // r0@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r2@10
  __int64 v9; // r1@13
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  int result; // r0@23
  unsigned int *v13; // r2@24
  unsigned int v14; // r1@26
  _QWORD *v15; // [sp+0h] [bp-30h]@13
  void (*v16)(void); // [sp+8h] [bp-28h]@7
  __int64 v17; // [sp+10h] [bp-20h]@1
  char v18; // [sp+18h] [bp-18h]@1
  int v19; // [sp+1Ch] [bp-14h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<InviteScreenController>((int)&v18, (int)this);
  v2 = *((_DWORD *)v1 + 95);
  v17 = *((_QWORD *)v1 + 60);
  v3 = *(_QWORD *)&v18;
  if ( v19 )
  {
    v4 = (unsigned int *)(v19 + 8);
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
  v16 = 0;
  v6 = operator new(8u);
  *v6 = v3;
  if ( HIDWORD(v3) )
    v7 = (unsigned int *)(HIDWORD(v3) + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
      ++*v7;
  LODWORD(v9) = sub_11B794C;
  v15 = v6;
  HIDWORD(v9) = sub_11B77AC;
  *(_QWORD *)&v16 = v9;
  MinecraftScreenModel::getRealmsMembers(v2, &v17, (int)&v15);
  if ( v16 )
    v16();
    v10 = (unsigned int *)(HIDWORD(v3) + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
  result = v19;
    v13 = (unsigned int *)(v19 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


Social::XboxProfile *__fastcall InviteScreenController::getDeviceAndTitleName(InviteScreenController *this, int a2, int a3)
{
  int *v3; // r5@1
  const Social::XboxProfile *v4; // r0@1
  char v6; // [sp+4h] [bp-44h]@1
  int v7; // [sp+20h] [bp-28h]@1
  int v8; // [sp+24h] [bp-24h]@2

  v3 = (int *)this;
  v4 = (const Social::XboxProfile *)std::__detail::_Map_base<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                      (unsigned __int64 *)(a2 + 436),
                                      (int **)(*(_DWORD *)(a2 + 424) + 12 * a3));
  Social::XboxProfile::XboxProfile((Social::XboxProfile *)&v6, v4);
  if ( v7 == 1 )
  {
    sub_15901A4(v3, (int *)&unk_27DBAC4);
    sub_1590394((const void **)v3, (const void **)&v8);
  }
  else
    sub_1590164((void **)v3, (const char *)&unk_257BC67);
  return Social::XboxProfile::~XboxProfile((Social::XboxProfile *)&v6);
}


Social::XboxProfile *__fastcall InviteScreenController::getGamertagAndDisplayName(InviteScreenController *this, int a2, int a3)
{
  int *v3; // r4@1
  const Social::XboxProfile *v4; // r0@1
  unsigned int v5; // r7@1
  unsigned int v6; // r6@1
  size_t v7; // r2@1
  int v8; // r0@3
  const void **v9; // r0@6
  char *v10; // r0@6
  void *v11; // r0@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  int v17; // [sp+0h] [bp-50h]@6
  char *v18; // [sp+4h] [bp-4Ch]@6
  char v19; // [sp+8h] [bp-48h]@1
  _DWORD *v20; // [sp+Ch] [bp-44h]@1
  _DWORD *v21; // [sp+10h] [bp-40h]@1

  v3 = (int *)this;
  v4 = (const Social::XboxProfile *)std::__detail::_Map_base<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                      (unsigned __int64 *)(a2 + 436),
                                      (int **)(*(_DWORD *)(a2 + 424) + 12 * a3));
  Social::XboxProfile::XboxProfile((Social::XboxProfile *)&v19, v4);
  sub_15901A4(v3, (int *)&unk_27DBAE4);
  sub_1590394((const void **)v3, (const void **)&v20);
  v5 = *(v21 - 3);
  v6 = *(v20 - 3);
  v7 = *(v20 - 3);
  if ( v6 > v5 )
    v7 = *(v21 - 3);
  v8 = memcmp(v20, v21, v7);
  if ( !v8 )
    v8 = v6 - v5;
  if ( v8 )
  {
    sub_15901A4(&v17, (int *)&unk_27DBAC4);
    sub_1590224((const void **)&v17, " - ", 3u);
    v9 = sub_1590394((const void **)&v17, (const void **)&v21);
    v18 = (char *)*v9;
    *v9 = &unk_28898CC;
    sub_1590394((const void **)v3, (const void **)&v18);
    v10 = v18 - 12;
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v18 - 4);
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
        j_j_j_j_j__ZdlPv_9_2(v10);
    }
    v11 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v17 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v11);
  }
  return Social::XboxProfile::~XboxProfile((Social::XboxProfile *)&v19);
}


void __fastcall InviteScreenController::_registerEventHandlers(InviteScreenController *this)
{
  InviteScreenController::_registerEventHandlers(this);
}


Social::XboxProfile *__fastcall InviteScreenController::getHoverText(InviteScreenController *this, int a2, int a3)
{
  int v3; // r5@1
  void **v4; // r4@1
  const Social::XboxProfile *v5; // r0@1
  Social::XboxProfile *v6; // r0@1
  const void **v7; // r6@2
  int v8; // r5@3
  void *v9; // r0@3
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  int v13; // [sp+8h] [bp-48h]@3
  char v14; // [sp+Ch] [bp-44h]@1
  int v15; // [sp+28h] [bp-28h]@1

  v3 = a2;
  v4 = (void **)this;
  v5 = (const Social::XboxProfile *)std::__detail::_Map_base<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                      (unsigned __int64 *)(a2 + 436),
                                      (int **)(*(_DWORD *)(a2 + 424) + 12 * a3));
  v6 = Social::XboxProfile::XboxProfile((Social::XboxProfile *)&v14, v5);
  if ( v15 == 1
    && (v7 = (const void **)((char *)v6 + 40), sub_1590284((const void **)v6 + 10, (const char *)&unk_257BC67)) )
  {
    v8 = *(_DWORD *)(v3 + 380);
    sub_15901A4(&v13, (int *)&unk_27DBAE4);
    sub_1590394((const void **)&v13, v7);
    MinecraftScreenModel::filterProfanityFromString((int)v4, v8);
    v9 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v13 - 4);
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
        j_j_j_j_j__ZdlPv_9_2(v9);
    }
  }
  else
    sub_1590164(v4, (const char *)&unk_257BC67);
  return Social::XboxProfile::~XboxProfile((Social::XboxProfile *)&v14);
}


int __fastcall InviteScreenController::onFriendFinderExit(InviteScreenController *this)
{
  InviteScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  int v3; // r5@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  _QWORD *v6; // r0@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r2@10
  __int64 v9; // r1@13
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  int result; // r0@23
  unsigned int *v13; // r2@24
  unsigned int v14; // r1@26
  _QWORD *v15; // [sp+0h] [bp-28h]@13
  void (*v16)(void); // [sp+8h] [bp-20h]@7
  char v17; // [sp+10h] [bp-18h]@1
  int v18; // [sp+14h] [bp-14h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<InviteScreenController>((int)&v17, (int)this);
  v2 = *(_QWORD *)&v17;
  v3 = *((_DWORD *)v1 + 95);
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 8);
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
  v16 = 0;
  v6 = operator new(8u);
  *v6 = v2;
  if ( HIDWORD(v2) )
    v7 = (unsigned int *)(HIDWORD(v2) + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
      ++*v7;
  LODWORD(v9) = sub_11B7708;
  v15 = v6;
  HIDWORD(v9) = sub_11B75C8;
  *(_QWORD *)&v16 = v9;
  MinecraftScreenModel::refreshFriends(v3, (int)&v15);
  if ( v16 )
    v16();
    v10 = (unsigned int *)(HIDWORD(v2) + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  result = v18;
    v13 = (unsigned int *)(v18 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall InviteScreenController::_refreshDataList(InviteScreenController *this)
{
  InviteScreenController::_refreshDataList(this);
}


void __fastcall InviteScreenController::_refreshXuidData(InviteScreenController *this)
{
  InviteScreenController *v1; // r10@1
  int v2; // r0@1
  int v3; // r6@1
  __int64 v4; // kr00_8@1
  int v5; // r7@2
  int v6; // r2@2
  int *i; // r0@2
  int *v8; // r1@4
  _DWORD *v9; // r7@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  _DWORD *v12; // r6@19
  Social::XboxProfile *v13; // r0@19
  int v14; // r1@19
  void *v15; // r0@19
  int *v16; // r4@22
  int v17; // r6@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  int *v20; // r0@32
  __int64 v21; // kr18_8@38
  int v22; // r5@38
  unsigned int *v23; // r0@39
  unsigned int v24; // r1@41
  _QWORD *v25; // r0@44
  unsigned int *v26; // r1@45
  unsigned int v27; // r2@47
  __int64 v28; // r1@50
  unsigned int *v29; // r1@53
  unsigned int v30; // r0@55
  int v31; // r0@60
  unsigned int *v32; // r2@61
  unsigned int v33; // r1@63
  _QWORD *v34; // [sp+0h] [bp-48h]@50
  void (*v35)(void); // [sp+8h] [bp-40h]@44
  char v36; // [sp+10h] [bp-38h]@38
  int v37; // [sp+14h] [bp-34h]@38
  int *v38; // [sp+18h] [bp-30h]@1
  int *v39; // [sp+1Ch] [bp-2Ch]@1
  int v40; // [sp+20h] [bp-28h]@1

  v1 = this;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v4 = *((_QWORD *)this + 67);
  v2 = *((_QWORD *)this + 67) >> 32;
  v3 = v4;
  if ( (_DWORD)v4 == v2 )
    goto LABEL_70;
  v5 = v2 - 24;
  v6 = 0;
  for ( i = 0; ; i = v39 )
  {
    v8 = (int *)(v3 + 4);
    if ( i == (int *)v6 )
    {
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(
        (unsigned __int64 *)&v38,
        v8);
    }
    else
      sub_15901A4(i, v8);
      ++v39;
    if ( v5 == v3 )
      break;
    v3 += 24;
    v6 = v40;
  }
  if ( v39 != v38 )
    MinecraftScreenController::_getWeakPtrToThis<InviteScreenController>((int)&v36, (int)v1);
    v21 = *(_QWORD *)&v36;
    v22 = *((_DWORD *)v1 + 95);
    if ( v37 )
      v23 = (unsigned int *)(v37 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 + 1, v23) );
      }
      else
        ++*v23;
    v35 = 0;
    v25 = operator new(8u);
    *v25 = v21;
    if ( HIDWORD(v21) )
      v26 = (unsigned int *)(HIDWORD(v21) + 8);
          v27 = __ldrex(v26);
        while ( __strex(v27 + 1, v26) );
        ++*v26;
    LODWORD(v28) = sub_11B7CB8;
    v34 = v25;
    HIDWORD(v28) = sub_11B79F0;
    *(_QWORD *)&v35 = v28;
    MinecraftScreenModel::getProfiles(v22, (unsigned int)&v38, (int)&v34);
    if ( v35 )
      v35();
      v29 = (unsigned int *)(HIDWORD(v21) + 8);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v21) + 12))(HIDWORD(v21));
    v31 = v37;
      v32 = (unsigned int *)(v37 + 8);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 == 1 )
        (*(void (**)(void))(*(_DWORD *)v31 + 12))();
  else
LABEL_70:
    v9 = (_DWORD *)*((_DWORD *)v1 + 111);
    while ( v9 )
      v12 = v9;
      v13 = (Social::XboxProfile *)(v9 + 2);
      v9 = (_DWORD *)*v9;
      Social::XboxProfile::~XboxProfile(v13);
      v14 = v12[1];
      v15 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
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
          j_j_j_j_j__ZdlPv_9_2(v15);
      operator delete(v12);
    _aeabi_memclr4(*(_QWORD *)((char *)v1 + 436), 4 * (*(_QWORD *)((char *)v1 + 436) >> 32));
    *((_DWORD *)v1 + 111) = 0;
    *((_DWORD *)v1 + 112) = 0;
  v17 = (int)v39;
  v16 = v38;
  if ( v38 != v39 )
    do
      v20 = (int *)(*v16 - 12);
      if ( v20 != &dword_28898C0 )
        v18 = (unsigned int *)(*v16 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v20);
      ++v16;
    while ( v16 != (int *)v17 );
    v16 = v38;
  if ( v16 )
    operator delete(v16);
}


void __fastcall InviteScreenController::_refreshFriendsData(InviteScreenController *this)
{
  InviteScreenController *v1; // r5@1
  _DWORD *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  _DWORD *v5; // r6@11
  Social::XboxProfile *v6; // r0@11
  int v7; // r1@11
  void *v8; // r0@11
  char v9; // [sp+0h] [bp-48h]@1
  void *ptr; // [sp+4h] [bp-44h]@1
  int v11; // [sp+8h] [bp-40h]@13
  _DWORD *v12; // [sp+Ch] [bp-3Ch]@1
  int v13; // [sp+10h] [bp-38h]@13
  int v14; // [sp+1Ch] [bp-2Ch]@14

  v1 = this;
  MinecraftScreenModel::getXboxLiveFriends((MinecraftScreenModel *)&v9, *((_DWORD *)this + 95));
  *((_BYTE *)v1 + 472) = v9;
  std::_Hashtable<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
    (unsigned __int64 *)((char *)v1 + 436),
    (int)&ptr);
  InviteScreenController::_refreshDataList(v1);
  v2 = v12;
  while ( v2 )
  {
    v5 = v2;
    v6 = (Social::XboxProfile *)(v2 + 2);
    v2 = (_DWORD *)*v2;
    Social::XboxProfile::~XboxProfile(v6);
    v7 = v5[1];
    v8 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v7 - 4);
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
        j_j_j_j_j__ZdlPv_9_2(v8);
    }
    operator delete(v5);
  }
  _aeabi_memclr4(ptr, 4 * v11);
  v12 = 0;
  v13 = 0;
  if ( ptr )
    if ( &v14 != ptr )
      operator delete(ptr);
}


void __fastcall InviteScreenController::~InviteScreenController(InviteScreenController *this)
{
  InviteScreenController::~InviteScreenController(this);
}


signed int __fastcall InviteScreenController::getOfflineVisibleStatus(InviteScreenController *this, int a2)
{
  const Social::XboxProfile *v2; // r0@1
  Social::XboxProfile *v3; // r0@1
  int v4; // r4@1
  signed int result; // r0@1
  int v6; // [sp+0h] [bp-38h]@1
  int v7; // [sp+1Ch] [bp-1Ch]@1

  v2 = (const Social::XboxProfile *)std::__detail::_Map_base<std::string,std::pair<std::string const,Social::XboxProfile>,std::allocator<std::pair<std::string const,Social::XboxProfile>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                      (unsigned __int64 *)((char *)this + 436),
                                      (int **)(*((_DWORD *)this + 106) + 12 * a2));
  v3 = Social::XboxProfile::XboxProfile((Social::XboxProfile *)&v6, v2);
  v4 = v7;
  Social::XboxProfile::~XboxProfile(v3);
  result = 0;
  if ( v4 != 1 )
    result = 1;
  return result;
}


void __fastcall InviteScreenController::refreshData(InviteScreenController *this)
{
  if ( *((_BYTE *)this + 475) )
    j_j_j__ZN22InviteScreenController13_refreshRealmEv(this);
  else
    j_j_j__ZN22InviteScreenController19_refreshFriendsDataEv(this);
}


int __fastcall InviteScreenController::InviteScreenController(int a1, int a2)
{
  int v2; // r11@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  double v6; // r0@7
  int v7; // r5@7
  int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@21
  int v11; // r6@23
  void *v12; // r5@23
  int v13; // r8@25
  int v14; // r1@25
  int v15; // r3@25
  int v16; // r4@25
  int v17; // r5@25
  int v18; // r6@25
  int v19; // r7@25
  int v20; // r1@25
  __int16 v21; // r2@25
  char *v22; // r7@25
  char v23; // r6@25
  _DWORD *v24; // r1@25
  size_t v25; // r2@25
  char *v26; // r5@25
  unsigned int *v28; // r1@31
  signed int v29; // r0@33
  void *s1; // [sp+4h] [bp-34h]@25
  int v31; // [sp+8h] [bp-30h]@1
  int v32; // [sp+Ch] [bp-2Ch]@1

  v2 = a1;
  v31 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v32 = v3;
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
  MinecraftScreenController::MinecraftScreenController(v2, (MinecraftScreenModel **)&v31);
  v7 = v32;
  if ( v32 )
    HIDWORD(v6) = v32 + 4;
        LODWORD(v6) = __ldrex((unsigned int *)HIDWORD(v6));
      while ( __strex(LODWORD(v6) - 1, (unsigned int *)HIDWORD(v6)) );
      LODWORD(v6) = (*(_DWORD *)HIDWORD(v6))--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
        {
          LODWORD(v6) = __ldrex(v9);
          HIDWORD(v6) = LODWORD(v6) - 1;
        }
        while ( __strex(LODWORD(v6) - 1, v9) );
      }
      else
        LODWORD(v6) = (*v9)--;
      if ( LODWORD(v6) == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  *(_DWORD *)v2 = &off_26E2340;
  *(_DWORD *)(v2 + 424) = 0;
  *(_DWORD *)(v2 + 428) = 0;
  *(_DWORD *)(v2 + 432) = 0;
  *(_DWORD *)(v2 + 444) = 0;
  *(_DWORD *)(v2 + 448) = 0;
  *(_DWORD *)(v2 + 452) = 1065353216;
  *(_DWORD *)(v2 + 456) = 0;
  LODWORD(v6) = v2 + 452;
  v10 = sub_1590344(v6);
  *(_DWORD *)(v2 + 440) = v10;
  if ( v10 == 1 )
    v12 = (void *)(v2 + 460);
    *(_DWORD *)(v2 + 460) = 0;
  else
    if ( v10 >= 0x40000000 )
      sub_1590364();
    v11 = 4 * v10;
    v12 = operator new(4 * v10);
    _aeabi_memclr4(v12, v11);
  *(_DWORD *)(v2 + 436) = v12;
  _aeabi_memclr8(v2 + 480, 72);
  *(_DWORD *)(v2 + 472) = 0;
  *(_DWORD *)(v2 + 464) = 0;
  *(_DWORD *)(v2 + 468) = 0;
  *(_DWORD *)(v2 + 492) = &unk_28898CC;
  *(_DWORD *)(v2 + 496) = &unk_28898CC;
  *(_DWORD *)(v2 + 500) = &unk_28898CC;
  *(_DWORD *)(v2 + 504) = &unk_28898CC;
  *(_BYTE *)(v2 + 520) = 0;
  *(_DWORD *)(v2 + 524) = 0;
  *(_DWORD *)(v2 + 528) = 2;
  *(_BYTE *)(v2 + 532) = 0;
  *(_BYTE *)(v2 + 533) = 0;
  *(_BYTE *)(v2 + 534) = 0;
  *(_DWORD *)(v2 + 536) = 0;
  *(_DWORD *)(v2 + 540) = 0;
  *(_DWORD *)(v2 + 544) = 0;
  if ( MinecraftScreenModel::isRealmLevel(*(MinecraftScreenModel **)(v2 + 380)) == 1 )
    *(_BYTE *)(v2 + 475) = 1;
    v13 = MinecraftScreenModel::getCurrentRealm(*(MinecraftScreenModel **)(v2 + 380));
    *(_QWORD *)(v2 + 480) = *(_QWORD *)v13;
    *(_DWORD *)(v2 + 488) = *(_DWORD *)(v13 + 8);
    EntityInteraction::setInteractText((int *)(v2 + 492), (int *)(v13 + 12));
    EntityInteraction::setInteractText((int *)(v2 + 496), (int *)(v13 + 16));
    EntityInteraction::setInteractText((int *)(v2 + 500), (int *)(v13 + 20));
    EntityInteraction::setInteractText((int *)(v2 + 504), (int *)(v13 + 24));
    v14 = v2 + 508;
    v15 = *(_DWORD *)(v13 + 32);
    v16 = *(_DWORD *)(v13 + 36);
    v17 = *(_DWORD *)(v13 + 40);
    v18 = *(_DWORD *)(v13 + 44);
    v19 = *(_DWORD *)(v13 + 48);
    *(_DWORD *)v14 = *(_DWORD *)(v13 + 28);
    *(_DWORD *)(v14 + 4) = v15;
    *(_DWORD *)(v14 + 8) = v16;
    *(_DWORD *)(v14 + 12) = v17;
    *(_DWORD *)(v14 + 16) = v18;
    *(_DWORD *)(v14 + 20) = v19;
    v20 = v2 + 532;
    v21 = *(_WORD *)(v13 + 52);
    *(_BYTE *)(v20 + 2) = *(_BYTE *)(v13 + 54);
    *(_WORD *)v20 = v21;
    std::vector<Realms::InvitedPlayer,std::allocator<Realms::InvitedPlayer>>::operator=(
      v2 + 536,
      (unsigned __int64 *)(v13 + 56));
    MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&s1, *(_DWORD *)(v2 + 380));
    v22 = (char *)s1;
    v23 = 0;
    v24 = *(_DWORD **)(v2 + 500);
    v26 = (char *)s1 - 12;
    v25 = *((_DWORD *)s1 - 3);
    if ( v25 == *(v24 - 3) && !memcmp(s1, v24, v25) )
      v23 = 1;
    *(_BYTE *)(v2 + 476) = v23;
    if ( (int *)v26 != &dword_28898C0 )
      v28 = (unsigned int *)(v22 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v26);
  InviteScreenController::_registerEventHandlers((InviteScreenController *)v2);
  InviteScreenController::_registerBindings((InviteScreenController *)v2);
  *(_BYTE *)(v2 + 552) = 1;
  return v2;
}


void __fastcall InviteScreenController::~InviteScreenController(InviteScreenController *this)
{
  InviteScreenController *v1; // r0@1

  v1 = InviteScreenController::~InviteScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall InviteScreenController::_registerBindings(InviteScreenController *this)
{
  InviteScreenController *v1; // r4@1
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
  signed int v23; // r7@29 OVERLAPPED
  _DWORD *v24; // r0@29
  __int64 v25; // r1@29
  __int64 v26; // r1@29
  _DWORD *v27; // r0@33
  __int64 v28; // r1@33
  __int64 v29; // r1@33
  _DWORD *v30; // r0@37
  __int64 v31; // r1@37
  __int64 v32; // r1@37
  _DWORD *v33; // r0@41
  __int64 v34; // r1@41
  __int64 v35; // r1@41
  _DWORD *v36; // r0@45
  __int64 v37; // r1@45
  __int64 v38; // r1@45
  _DWORD *v39; // r0@49
  __int64 v40; // r1@49
  __int64 v41; // r1@49
  signed int v42; // r8@53 OVERLAPPED
  _DWORD *v43; // r0@53
  __int64 v44; // r1@53
  __int64 v45; // r1@53
  _DWORD *v46; // r0@57
  __int64 v47; // r1@57
  __int64 v48; // r1@57
  _DWORD *v49; // r0@61
  __int64 v50; // r1@61
  __int64 v51; // r1@61
  _DWORD *v52; // r0@65
  __int64 v53; // r1@65
  __int64 v54; // r1@65
  _DWORD *v55; // r0@69
  __int64 v56; // r1@69
  __int64 v57; // r1@69
  _DWORD *v58; // r0@73
  __int64 v59; // r1@73
  __int64 v60; // r1@73
  _DWORD *v61; // r0@77
  __int64 v62; // r1@77
  __int64 v63; // r1@77
  void *v64; // [sp+4h] [bp-32Ch]@77
  __int64 v65; // [sp+Ch] [bp-324h]@77
  _DWORD *v66; // [sp+14h] [bp-31Ch]@77
  __int64 v67; // [sp+1Ch] [bp-314h]@77
  int v68; // [sp+24h] [bp-30Ch]@77
  int v69; // [sp+28h] [bp-308h]@77
  void *v70; // [sp+2Ch] [bp-304h]@73
  __int64 v71; // [sp+34h] [bp-2FCh]@73
  _DWORD *v72; // [sp+3Ch] [bp-2F4h]@73
  __int64 v73; // [sp+44h] [bp-2ECh]@73
  int v74; // [sp+4Ch] [bp-2E4h]@73
  int v75; // [sp+50h] [bp-2E0h]@73
  void *v76; // [sp+54h] [bp-2DCh]@69
  __int64 v77; // [sp+5Ch] [bp-2D4h]@69
  _DWORD *v78; // [sp+64h] [bp-2CCh]@69
  __int64 v79; // [sp+6Ch] [bp-2C4h]@69
  int v80; // [sp+74h] [bp-2BCh]@69
  int v81; // [sp+78h] [bp-2B8h]@69
  void *v82; // [sp+7Ch] [bp-2B4h]@65
  __int64 v83; // [sp+84h] [bp-2ACh]@65
  _DWORD *v84; // [sp+8Ch] [bp-2A4h]@65
  __int64 v85; // [sp+94h] [bp-29Ch]@65
  int v86; // [sp+9Ch] [bp-294h]@65
  int v87; // [sp+A0h] [bp-290h]@65
  void *v88; // [sp+A4h] [bp-28Ch]@61
  __int64 v89; // [sp+ACh] [bp-284h]@61
  _DWORD *v90; // [sp+B4h] [bp-27Ch]@61
  __int64 v91; // [sp+BCh] [bp-274h]@61
  int v92; // [sp+C4h] [bp-26Ch]@61
  int v93; // [sp+C8h] [bp-268h]@61
  void *v94; // [sp+CCh] [bp-264h]@57
  __int64 v95; // [sp+D4h] [bp-25Ch]@57
  _DWORD *v96; // [sp+DCh] [bp-254h]@57
  __int64 v97; // [sp+E4h] [bp-24Ch]@57
  __int64 v98; // [sp+ECh] [bp-244h]@57
  void *v99; // [sp+F4h] [bp-23Ch]@53
  __int64 v100; // [sp+FCh] [bp-234h]@53
  _DWORD *v101; // [sp+104h] [bp-22Ch]@53
  __int64 v102; // [sp+10Ch] [bp-224h]@53
  int v103; // [sp+114h] [bp-21Ch]@53
  int v104; // [sp+118h] [bp-218h]@53
  void *v105; // [sp+11Ch] [bp-214h]@49
  __int64 v106; // [sp+124h] [bp-20Ch]@49
  _DWORD *v107; // [sp+12Ch] [bp-204h]@49
  __int64 v108; // [sp+134h] [bp-1FCh]@49
  int v109; // [sp+13Ch] [bp-1F4h]@49
  int v110; // [sp+140h] [bp-1F0h]@49
  void *v111; // [sp+144h] [bp-1ECh]@45
  __int64 v112; // [sp+14Ch] [bp-1E4h]@45
  _DWORD *v113; // [sp+154h] [bp-1DCh]@45
  __int64 v114; // [sp+15Ch] [bp-1D4h]@45
  int v115; // [sp+164h] [bp-1CCh]@45
  int v116; // [sp+168h] [bp-1C8h]@45
  void *v117; // [sp+16Ch] [bp-1C4h]@41
  __int64 v118; // [sp+174h] [bp-1BCh]@41
  _DWORD *v119; // [sp+17Ch] [bp-1B4h]@41
  __int64 v120; // [sp+184h] [bp-1ACh]@41
  int v121; // [sp+18Ch] [bp-1A4h]@41
  int v122; // [sp+190h] [bp-1A0h]@41
  void *v123; // [sp+194h] [bp-19Ch]@37
  __int64 v124; // [sp+19Ch] [bp-194h]@37
  _DWORD *v125; // [sp+1A4h] [bp-18Ch]@37
  __int64 v126; // [sp+1ACh] [bp-184h]@37
  int v127; // [sp+1B4h] [bp-17Ch]@37
  int v128; // [sp+1B8h] [bp-178h]@37
  void *v129; // [sp+1BCh] [bp-174h]@33
  __int64 v130; // [sp+1C4h] [bp-16Ch]@33
  _DWORD *v131; // [sp+1CCh] [bp-164h]@33
  __int64 v132; // [sp+1D4h] [bp-15Ch]@33
  int v133; // [sp+1DCh] [bp-154h]@33
  int v134; // [sp+1E0h] [bp-150h]@33
  void *v135; // [sp+1E4h] [bp-14Ch]@29
  __int64 v136; // [sp+1ECh] [bp-144h]@29
  _DWORD *v137; // [sp+1F4h] [bp-13Ch]@29
  __int64 v138; // [sp+1FCh] [bp-134h]@29
  int v139; // [sp+204h] [bp-12Ch]@29
  int v140; // [sp+208h] [bp-128h]@29
  void *v141; // [sp+20Ch] [bp-124h]@25
  __int64 v142; // [sp+214h] [bp-11Ch]@25
  _DWORD *v143; // [sp+21Ch] [bp-114h]@25
  __int64 v144; // [sp+224h] [bp-10Ch]@25
  int v145; // [sp+22Ch] [bp-104h]@25
  int v146; // [sp+230h] [bp-100h]@25
  void *v147; // [sp+234h] [bp-FCh]@21
  __int64 v148; // [sp+23Ch] [bp-F4h]@21
  _DWORD *v149; // [sp+244h] [bp-ECh]@21
  __int64 v150; // [sp+24Ch] [bp-E4h]@21
  int v151; // [sp+254h] [bp-DCh]@21
  void *v152; // [sp+258h] [bp-D8h]@17
  __int64 v153; // [sp+260h] [bp-D0h]@17
  _DWORD *v154; // [sp+268h] [bp-C8h]@17
  __int64 v155; // [sp+270h] [bp-C0h]@17
  int v156; // [sp+278h] [bp-B8h]@17
  void *v157; // [sp+27Ch] [bp-B4h]@13
  __int64 v158; // [sp+284h] [bp-ACh]@13
  _DWORD *v159; // [sp+28Ch] [bp-A4h]@13
  __int64 v160; // [sp+294h] [bp-9Ch]@13
  int v161; // [sp+29Ch] [bp-94h]@13
  void *v162; // [sp+2A0h] [bp-90h]@9
  __int64 v163; // [sp+2A8h] [bp-88h]@9
  _DWORD *v164; // [sp+2B0h] [bp-80h]@9
  __int64 v165; // [sp+2B8h] [bp-78h]@9
  int v166; // [sp+2C0h] [bp-70h]@9
  void *v167; // [sp+2C4h] [bp-6Ch]@5
  __int64 v168; // [sp+2CCh] [bp-64h]@5
  _DWORD *v169; // [sp+2D4h] [bp-5Ch]@5
  __int64 v170; // [sp+2DCh] [bp-54h]@5
  int v171; // [sp+2E4h] [bp-4Ch]@5
  void *v172; // [sp+2E8h] [bp-48h]@1
  __int64 v173; // [sp+2F0h] [bp-40h]@1
  _DWORD *v174; // [sp+2F8h] [bp-38h]@1
  __int64 v175; // [sp+300h] [bp-30h]@1
  int v176; // [sp+308h] [bp-28h]@1

  v1 = this;
  v176 = 926848697;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11B8648;
  *v2 = v1;
  HIDWORD(v3) = sub_11B8394;
  v174 = v2;
  v175 = v3;
  v172 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v173 = v4;
  ScreenController::bindString((int)v1, &v176, (int)&v174, (int)&v172);
  if ( (_DWORD)v173 )
    ((void (*)(void))v173)();
  if ( (_DWORD)v175 )
    ((void (*)(void))v175)();
  StringHash::StringHash<char [24]>(&v171, (int)"#online_friends_visible");
  v5 = operator new(4u);
  LODWORD(v6) = sub_11B868E;
  *v5 = v1;
  HIDWORD(v6) = sub_11B867E;
  v169 = v5;
  v170 = v6;
  v167 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v168 = v7;
  ScreenController::bindBool((int)v1, &v171, (int)&v169, (int)&v167);
  if ( (_DWORD)v168 )
    ((void (*)(void))v168)();
  if ( (_DWORD)v170 )
    ((void (*)(void))v170)();
  StringHash::StringHash<char [25]>(&v166, (int)"#offline_friends_visible");
  v8 = operator new(4u);
  LODWORD(v9) = sub_11B86E8;
  *v8 = v1;
  HIDWORD(v9) = sub_11B86C4;
  v164 = v8;
  v165 = v9;
  v162 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v163 = v10;
  ScreenController::bindBool((int)v1, &v166, (int)&v164, (int)&v162);
  if ( (_DWORD)v163 )
    ((void (*)(void))v163)();
  if ( (_DWORD)v165 )
    ((void (*)(void))v165)();
  v161 = -446754190;
  v11 = operator new(4u);
  LODWORD(v12) = sub_11B8730;
  *v11 = v1;
  HIDWORD(v12) = sub_11B871E;
  v159 = v11;
  v160 = v12;
  v157 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v158 = v13;
  ScreenController::bindBool((int)v1, &v161, (int)&v159, (int)&v157);
  if ( (_DWORD)v158 )
    ((void (*)(void))v158)();
  if ( (_DWORD)v160 )
    ((void (*)(void))v160)();
  StringHash::StringHash<char [30]>(&v156, (int)"#online_friend_grid_dimension");
  v14 = operator new(4u);
  LODWORD(v15) = sub_11B8776;
  *v14 = v1;
  HIDWORD(v15) = sub_11B8766;
  v154 = v14;
  v155 = v15;
  v152 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v153 = v16;
  ScreenController::bindGridSize((int)v1, &v156, (int)&v154, (int)&v152);
  if ( (_DWORD)v153 )
    ((void (*)(void))v153)();
  if ( (_DWORD)v155 )
    ((void (*)(void))v155)();
  StringHash::StringHash<char [31]>(&v151, (int)"#offline_friend_grid_dimension");
  v17 = operator new(4u);
  LODWORD(v18) = sub_11B87D0;
  *v17 = v1;
  HIDWORD(v18) = sub_11B87AC;
  v149 = v17;
  v150 = v18;
  v147 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v148 = v19;
  ScreenController::bindGridSize((int)v1, &v151, (int)&v149, (int)&v147);
  if ( (_DWORD)v148 )
    ((void (*)(void))v148)();
  if ( (_DWORD)v150 )
    ((void (*)(void))v150)();
  v146 = -273817568;
  v145 = -1418781400;
  v20 = operator new(4u);
  LODWORD(v21) = sub_11B883C;
  *v20 = v1;
  HIDWORD(v21) = sub_11B8806;
  v143 = v20;
  v144 = v21;
  v141 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v142 = v22;
  ScreenController::bindBoolForCollection((int)v1, &v146, &v145, (int)&v143, (int)&v141);
  if ( (_DWORD)v142 )
    ((void (*)(void))v142)();
  if ( (_DWORD)v144 )
    ((void (*)(void))v144)();
  v23 = 2005914332;
  v140 = -273817568;
  v139 = 2005914332;
  v24 = operator new(4u);
  LODWORD(v25) = sub_11B88A8;
  *v24 = v1;
  HIDWORD(v25) = sub_11B8872;
  v137 = v24;
  v138 = v25;
  v135 = operator new(1u);
  LODWORD(v26) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v26) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v136 = v26;
  ScreenController::bindBoolForCollection((int)v1, &v140, &v139, (int)&v137, (int)&v135);
  if ( (_DWORD)v136 )
    ((void (*)(void))v136)();
  if ( (_DWORD)v138 )
    ((void (*)(void))v138)();
  v134 = -273817568;
  v133 = 1282662578;
  v27 = operator new(4u);
  LODWORD(v28) = sub_11B88EA;
  *v27 = v1;
  HIDWORD(v28) = sub_11B88DE;
  v131 = v27;
  v132 = v28;
  v129 = operator new(1u);
  LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v29) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v130 = v29;
  ScreenController::bindStringForCollection((int)v1, &v134, &v133, (int)&v131, (int)&v129);
  if ( (_DWORD)v130 )
    ((void (*)(void))v130)();
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  v128 = -273817568;
  v127 = 1265884959;
  v30 = operator new(4u);
  LODWORD(v31) = sub_11B892C;
  *v30 = v1;
  HIDWORD(v31) = sub_11B8920;
  v125 = v30;
  v126 = v31;
  v123 = operator new(1u);
  LODWORD(v32) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v32) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v124 = v32;
  ScreenController::bindStringForCollection((int)v1, &v128, &v127, (int)&v125, (int)&v123);
  if ( (_DWORD)v124 )
    ((void (*)(void))v124)();
  if ( (_DWORD)v126 )
    ((void (*)(void))v126)();
  v122 = -273817568;
  v121 = -495754686;
  v33 = operator new(4u);
  LODWORD(v34) = sub_11B896E;
  *v33 = v1;
  HIDWORD(v34) = sub_11B8962;
  v119 = v33;
  v120 = v34;
  v117 = operator new(1u);
  LODWORD(v35) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v35) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v118 = v35;
  ScreenController::bindStringForCollection((int)v1, &v122, &v121, (int)&v119, (int)&v117);
  if ( (_DWORD)v118 )
    ((void (*)(void))v118)();
  if ( (_DWORD)v120 )
    ((void (*)(void))v120)();
  v116 = -273817568;
  v115 = 1126334437;
  v36 = operator new(4u);
  LODWORD(v37) = sub_11B89BE;
  *v36 = v1;
  HIDWORD(v37) = sub_11B89A4;
  v113 = v36;
  v114 = v37;
  v111 = operator new(1u);
  LODWORD(v38) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v38) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v112 = v38;
  ScreenController::bindStringForCollection((int)v1, &v116, &v115, (int)&v113, (int)&v111);
  if ( (_DWORD)v112 )
    ((void (*)(void))v112)();
  if ( (_DWORD)v114 )
    ((void (*)(void))v114)();
  v110 = -273817568;
  v109 = 1278171020;
  v39 = operator new(4u);
  LODWORD(v40) = sub_11B8A22;
  *v39 = v1;
  HIDWORD(v40) = sub_11B89F4;
  v107 = v39;
  v108 = v40;
  v105 = operator new(1u);
  LODWORD(v41) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v41) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v106 = v41;
  ScreenController::bindStringForCollection((int)v1, &v110, &v109, (int)&v107, (int)&v105);
  if ( (_DWORD)v106 )
    ((void (*)(void))v106)();
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  v42 = -1992630198;
  v103 = -1418781400;
  v104 = -1992630198;
  v43 = operator new(4u);
  LODWORD(v44) = sub_11B8A94;
  *v43 = v1;
  HIDWORD(v44) = sub_11B8A58;
  v101 = v43;
  v102 = v44;
  v99 = operator new(1u);
  LODWORD(v45) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v45) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v100 = v45;
  ScreenController::bindBoolForCollection((int)v1, &v104, &v103, (int)&v101, (int)&v99);
  if ( (_DWORD)v100 )
    ((void (*)(void))v100)();
  if ( (_DWORD)v102 )
    ((void (*)(void))v102)();
  v98 = *(_QWORD *)&v23;
  v46 = operator new(4u);
  LODWORD(v47) = sub_11B8B06;
  *v46 = v1;
  HIDWORD(v47) = sub_11B8ACA;
  v96 = v46;
  v97 = v47;
  v94 = operator new(1u);
  LODWORD(v48) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v48) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v95 = v48;
  ScreenController::bindBoolForCollection((int)v1, (int *)&v98 + 1, (int *)&v98, (int)&v96, (int)&v94);
  if ( (_DWORD)v95 )
    ((void (*)(void))v95)();
  if ( (_DWORD)v97 )
    ((void (*)(void))v97)();
  v92 = 1282662578;
  v93 = -1992630198;
  v49 = operator new(4u);
  LODWORD(v50) = sub_11B8B4E;
  *v49 = v1;
  HIDWORD(v50) = sub_11B8B3C;
  v90 = v49;
  v91 = v50;
  v88 = operator new(1u);
  LODWORD(v51) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v51) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v89 = v51;
  ScreenController::bindStringForCollection((int)v1, &v93, &v92, (int)&v90, (int)&v88);
  if ( (_DWORD)v89 )
    ((void (*)(void))v89)();
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
  v86 = 1265884959;
  v87 = -1992630198;
  v52 = operator new(4u);
  LODWORD(v53) = sub_11B8B96;
  *v52 = v1;
  HIDWORD(v53) = sub_11B8B84;
  v84 = v52;
  v85 = v53;
  v82 = operator new(1u);
  LODWORD(v54) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v54) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v83 = v54;
  ScreenController::bindStringForCollection((int)v1, &v87, &v86, (int)&v84, (int)&v82);
  if ( (_DWORD)v83 )
    ((void (*)(void))v83)();
  if ( (_DWORD)v85 )
    ((void (*)(void))v85)();
  v80 = -495754686;
  v81 = -1992630198;
  v55 = operator new(4u);
  LODWORD(v56) = sub_11B8BDE;
  *v55 = v1;
  HIDWORD(v56) = sub_11B8BCC;
  v78 = v55;
  v79 = v56;
  v76 = operator new(1u);
  LODWORD(v57) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v57) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v77 = v57;
  ScreenController::bindStringForCollection((int)v1, &v81, &v80, (int)&v78, (int)&v76);
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  if ( (_DWORD)v79 )
    ((void (*)(void))v79)();
  v75 = -1992630198;
  v74 = 1126334437;
  v58 = operator new(4u);
  LODWORD(v59) = sub_11B8C34;
  *v58 = v1;
  HIDWORD(v59) = sub_11B8C14;
  v72 = v58;
  v73 = v59;
  v70 = operator new(1u);
  LODWORD(v60) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v60) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v71 = v60;
  ScreenController::bindStringForCollection((int)v1, &v75, &v74, (int)&v72, (int)&v70);
  if ( (_DWORD)v71 )
    ((void (*)(void))v71)();
  if ( (_DWORD)v73 )
    ((void (*)(void))v73)();
  v68 = 1278171020;
  v69 = -1992630198;
  v61 = operator new(4u);
  LODWORD(v62) = sub_11B8C9E;
  *v61 = v1;
  HIDWORD(v62) = sub_11B8C6A;
  v66 = v61;
  v67 = v62;
  v64 = operator new(1u);
  LODWORD(v63) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v63) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v65 = v63;
  ScreenController::bindStringForCollection((int)v1, &v69, &v68, (int)&v66, (int)&v64);
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  if ( (_DWORD)v67 )
    ((void (*)(void))v67)();
}
