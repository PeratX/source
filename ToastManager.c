

void __fastcall ToastManager::handleToastButton(ToastManager *this)
{
  ToastManager *v1; // r6@1
  __int64 *v2; // r4@1
  SceneStack *v3; // r9@1
  unsigned int v4; // r7@2
  void *v5; // r0@2
  int v6; // r6@5
  void *v7; // r0@5
  int v8; // r4@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  Json::Value *v11; // r0@12
  int v12; // r7@13
  void *v13; // r0@13
  Json::Value *v14; // r0@14
  int v15; // r7@15
  void *v16; // r0@15
  unsigned int *v17; // r2@16
  signed int v18; // r1@18
  int v19; // r8@20
  void *v20; // r0@20
  int v21; // r7@21
  void *v22; // r0@21
  _DWORD *v23; // r0@24
  int v24; // r4@24
  unsigned int *v25; // r1@25
  unsigned int v26; // r0@27
  unsigned int *v27; // r1@30
  unsigned int v28; // r0@32
  unsigned int *v29; // r2@34
  signed int v30; // r1@36
  unsigned int *v31; // r5@46
  unsigned int v32; // r0@48
  _DWORD *v33; // r7@51
  int v34; // r0@51
  int v35; // r4@51
  unsigned int *v36; // r1@52
  unsigned int v37; // r0@54
  unsigned int *v38; // r5@67
  unsigned int v39; // r0@69
  unsigned int *v40; // r5@73
  unsigned int v41; // r0@75
  void *v42; // r0@80
  char *v43; // r0@81
  char *v44; // r0@88
  void *v45; // r0@89
  void *v46; // r0@90
  void *v47; // r0@91
  unsigned int *v48; // r2@93
  signed int v49; // r1@95
  unsigned int *v50; // r2@97
  signed int v51; // r1@99
  unsigned int *v52; // r2@101
  signed int v53; // r1@103
  unsigned int *v54; // r2@117
  signed int v55; // r1@119
  unsigned int *v56; // r2@121
  signed int v57; // r1@123
  unsigned int *v58; // r2@125
  signed int v59; // r1@127
  unsigned int *v60; // r2@129
  signed int v61; // r1@131
  unsigned int *v62; // r2@133
  signed int v63; // r1@135
  unsigned int *v64; // r2@137
  signed int v65; // r1@139
  unsigned int *v66; // r2@141
  signed int v67; // r1@143
  char v68; // [sp+10h] [bp-118h]@29
  int v69; // [sp+14h] [bp-114h]@29
  char v70; // [sp+18h] [bp-110h]@51
  int v71; // [sp+1Ch] [bp-10Ch]@51
  int v72; // [sp+24h] [bp-104h]@15
  int v73; // [sp+28h] [bp-100h]@15
  int v74; // [sp+30h] [bp-F8h]@13
  char *v75; // [sp+34h] [bp-F4h]@13
  char *v76; // [sp+38h] [bp-F0h]@13
  int v77; // [sp+3Ch] [bp-ECh]@13
  char v78; // [sp+40h] [bp-E8h]@12
  char v79; // [sp+B0h] [bp-78h]@12
  ToastManager *v80; // [sp+C4h] [bp-64h]@24
  char *v81; // [sp+C8h] [bp-60h]@24
  _DWORD *v82; // [sp+CCh] [bp-5Ch]@24
  void (*v83)(void); // [sp+D4h] [bp-54h]@24
  void *v84; // [sp+D8h] [bp-50h]@24
  char v85; // [sp+DCh] [bp-4Ch]@24
  int v86; // [sp+E0h] [bp-48h]@24
  int v87; // [sp+E4h] [bp-44h]@24
  int v88; // [sp+E8h] [bp-40h]@24
  int v89; // [sp+ECh] [bp-3Ch]@24
  int v90; // [sp+F0h] [bp-38h]@21
  int v91; // [sp+F4h] [bp-34h]@20
  char v92; // [sp+F8h] [bp-30h]@7
  int v93; // [sp+FCh] [bp-2Ch]@7
  int v94; // [sp+100h] [bp-28h]@5
  int v95; // [sp+104h] [bp-24h]@2

  v1 = this;
  v2 = (__int64 *)ClientInstance::getCurrentSceneStack(*(ClientInstance **)this);
  v3 = (SceneStack *)ClientInstance::getSceneFactory(*(ClientInstance **)v1);
  if ( *((_DWORD *)v1 + 4) )
  {
    SceneStack::getScreenName((SceneStack *)&v95, v2);
    v4 = sub_119CA58(&v95, "progress_screen", 0, 0xFu);
    v5 = (void *)(v95 - 12);
    if ( (int *)(v95 - 12) != &dword_28898C0 )
    {
      v29 = (unsigned int *)(v95 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
      }
      else
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    if ( v4 == -1 )
      switch ( **((_DWORD **)v1 + 4) )
        case 0:
          SceneStack::getScreenName((SceneStack *)&v94, v2);
          v6 = sub_119C9E8((const void **)&v94, "achievement_screen");
          v7 = (void *)(v94 - 12);
          if ( (int *)(v94 - 12) != &dword_28898C0 )
          {
            v48 = (unsigned int *)(v94 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v49 = __ldrex(v48);
              while ( __strex(v49 - 1, v48) );
            }
            else
              v49 = (*v48)--;
            if ( v49 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v7);
          }
          if ( v6 )
            SceneFactory::createAchievementScreen((SceneFactory *)&v92, v3, (int)v2);
            SceneStack::pushScreen((int)v2, (int)&v92, 0);
            v8 = v93;
            if ( v93 )
              v9 = (unsigned int *)(v93 + 4);
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
                v31 = (unsigned int *)(v8 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
                if ( !&pthread_create )
                  goto LABEL_62;
                  v32 = __ldrex(v31);
                while ( __strex(v32 - 1, v31) );
                goto LABEL_63;
          return;
        case 3:
          Json::Value::Value(&v79, 0);
          Json::Reader::Reader((Json::Reader *)&v78);
          Json::Reader::parse((int)&v78, (int *)(*((_DWORD *)v1 + 4) + 12), (int)&v79, 1);
          Json::Reader::~Reader((Json::Reader *)&v78);
          v11 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v79, "error_pack_path");
          if ( Json::Value::isString(v11) == 1 )
            v12 = Json::Value::operator[]((Json::Value *)&v79, "error_pack_path");
            sub_119C884((void **)&v74, (const char *)&unk_257BC67);
            Json::Value::asString((int *)&v75, v12, &v74);
            v76 = v75;
            v75 = (char *)&unk_28898CC;
            v77 = 2;
            v13 = (void *)(v74 - 12);
            if ( (int *)(v74 - 12) != &dword_28898C0 )
              v54 = (unsigned int *)(v74 - 4);
                  v55 = __ldrex(v54);
                while ( __strex(v55 - 1, v54) );
                v55 = (*v54)--;
              if ( v55 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v13);
            v14 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v79, "error_pack_original_path");
            if ( Json::Value::isString(v14) == 1 )
              v15 = Json::Value::operator[]((Json::Value *)&v79, "error_pack_original_path");
              sub_119C884((void **)&v72, (const char *)&unk_257BC67);
              Json::Value::asString(&v73, v15, &v72);
              v16 = (void *)(v72 - 12);
              if ( (int *)(v72 - 12) != &dword_28898C0 )
                v17 = (unsigned int *)(v72 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v18 = __ldrex(v17);
                  while ( __strex(v18 - 1, v17) );
                }
                else
                  v18 = (*v17)--;
                if ( v18 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v16);
              sub_119C854(&v73, (int *)&v76);
            v33 = (_DWORD *)ClientInstance::getPackManifestFactory(*(ClientInstance **)v1);
            v34 = ClientInstance::getKeyProvider(*(ClientInstance **)v1);
            SceneFactory::createManifestValidationScreen(
              (unsigned __int64 *)&v70,
              (int)v3,
              v33,
              v34,
              (int)&v76,
              &v73,
              0,
              0);
            SceneStack::pushScreen((int)v2, (int)&v70, 0);
            v35 = v71;
            if ( v71 )
              v36 = (unsigned int *)(v71 + 4);
                  v37 = __ldrex(v36);
                while ( __strex(v37 - 1, v36) );
                v37 = (*v36)--;
              if ( v37 == 1 )
                v38 = (unsigned int *)(v35 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
                    v39 = __ldrex(v38);
                  while ( __strex(v39 - 1, v38) );
                  v39 = (*v38)--;
                if ( v39 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
            v42 = (void *)(v73 - 12);
            if ( (int *)(v73 - 12) != &dword_28898C0 )
              v56 = (unsigned int *)(v73 - 4);
                  v57 = __ldrex(v56);
                while ( __strex(v57 - 1, v56) );
                v57 = (*v56)--;
              if ( v57 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v42);
            v43 = v76 - 12;
            if ( (int *)(v76 - 12) != &dword_28898C0 )
              v58 = (unsigned int *)(v76 - 4);
                  v59 = __ldrex(v58);
                while ( __strex(v59 - 1, v58) );
                v59 = (*v58)--;
              if ( v59 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v43);
          Json::Value::~Value((Json::Value *)&v79);
        case 1:
          SceneStack::getScreenName((SceneStack *)&v91, v2);
          v19 = sub_119C9E8((const void **)&v91, "realms_pending_invitations_screen");
          v20 = (void *)(v91 - 12);
          if ( (int *)(v91 - 12) != &dword_28898C0 )
            v50 = (unsigned int *)(v91 - 4);
                v51 = __ldrex(v50);
              while ( __strex(v51 - 1, v50) );
              v51 = (*v50)--;
            if ( v51 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v20);
          SceneStack::getScreenName((SceneStack *)&v90, v2);
          v21 = sub_119C9E8((const void **)&v90, "modal_screen");
          v22 = (void *)(v90 - 12);
          if ( (int *)(v90 - 12) != &dword_28898C0 )
            v52 = (unsigned int *)(v90 - 4);
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
              v53 = (*v52)--;
            if ( v53 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v22);
          if ( v21 )
            if ( v19 )
              sub_119C854(&v89, (int *)(*((_DWORD *)v1 + 4) + 4));
              sub_119C854(&v88, (int *)(*((_DWORD *)v1 + 4) + 8));
              sub_119C854(&v87, (int *)(*((_DWORD *)v1 + 4) + 12));
              v80 = v1;
              sub_119C854((int *)&v81, &v87);
              v83 = 0;
              v23 = operator new(8u);
              *v23 = v1;
              v23[1] = v81;
              v81 = (char *)&unk_28898CC;
              v82 = v23;
              v83 = (void (*)(void))sub_1022FA0;
              v84 = &loc_1022F7C;
              SceneFactory::createAcceptDeclineInvitationScreen(
                (unsigned __int64 *)&v85,
                (int)v3,
                &v89,
                &v88,
                (int)&v82);
              SceneStack::pushScreen((int)v2, (int)&v85, 0);
              v24 = v86;
              if ( v86 )
                v25 = (unsigned int *)(v86 + 4);
                    v26 = __ldrex(v25);
                  while ( __strex(v26 - 1, v25) );
                  v26 = (*v25)--;
                if ( v26 == 1 )
                  v40 = (unsigned int *)(v24 + 8);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v41 = __ldrex(v40);
                    while ( __strex(v41 - 1, v40) );
                  }
                  else
                    v41 = (*v40)--;
                  if ( v41 == 1 )
                    (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
              if ( v83 )
                v83();
              v44 = v81 - 12;
              if ( (int *)(v81 - 12) != &dword_28898C0 )
                v60 = (unsigned int *)(v81 - 4);
                    v61 = __ldrex(v60);
                  while ( __strex(v61 - 1, v60) );
                  v61 = (*v60)--;
                if ( v61 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v44);
              v45 = (void *)(v87 - 12);
              if ( (int *)(v87 - 12) != &dword_28898C0 )
                v62 = (unsigned int *)(v87 - 4);
                    v63 = __ldrex(v62);
                  while ( __strex(v63 - 1, v62) );
                  v63 = (*v62)--;
                if ( v63 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v45);
              v46 = (void *)(v88 - 12);
              if ( (int *)(v88 - 12) != &dword_28898C0 )
                v64 = (unsigned int *)(v88 - 4);
                    v65 = __ldrex(v64);
                  while ( __strex(v65 - 1, v64) );
                  v65 = (*v64)--;
                if ( v65 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v46);
              v47 = (void *)(v89 - 12);
              if ( (int *)(v89 - 12) != &dword_28898C0 )
                v66 = (unsigned int *)(v89 - 4);
                    v67 = __ldrex(v66);
                  while ( __strex(v67 - 1, v66) );
                  v67 = (*v66)--;
                if ( v67 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v47);
              return;
          else if ( v19 )
            return;
          *((_BYTE *)v1 + 53) = 1;
        case 5:
          SceneFactory::createOptionsScreen((unsigned __int64 *)&v68, (int)v3, 15, 1);
          SceneStack::pushScreen((int)v2, (int)&v68, 0);
          v8 = v69;
          if ( v69 )
            v27 = (unsigned int *)(v69 + 4);
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
              v28 = (*v27)--;
            if ( v28 == 1 )
              v31 = (unsigned int *)(v8 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
LABEL_62:
                v32 = (*v31)--;
LABEL_63:
              if ( v32 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
        default:
  }
}


ToastManager *__fastcall ToastManager::~ToastManager(ToastManager *this)
{
  ToastManager *v1; // r11@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  int v4; // r5@5
  int v5; // r1@6
  void *v6; // r0@6
  int v7; // r1@7
  void *v8; // r0@7
  int v9; // r1@8
  void *v10; // r0@8
  void *v11; // r4@10
  void *v12; // r5@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  int v19; // r7@36
  int v20; // r1@37
  void *v21; // r0@37
  int v22; // r1@38
  void *v23; // r0@38
  int v24; // r1@39
  void *v25; // r0@39
  unsigned int *v27; // r2@46
  signed int v28; // r1@48
  unsigned int *v29; // r2@50
  signed int v30; // r1@52
  unsigned int *v31; // r2@54
  signed int v32; // r1@56

  v1 = this;
  v2 = (void (*)(void))*((_DWORD *)this + 11);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 7);
  if ( v3 )
    v3();
  v4 = *((_DWORD *)v1 + 4);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 12);
    v6 = (void *)(v5 - 12);
    if ( (int *)(v5 - 12) != &dword_28898C0 )
    {
      v27 = (unsigned int *)(v5 - 4);
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
        j_j_j_j_j__ZdlPv_9(v6);
    }
    v7 = *(_DWORD *)(v4 + 8);
    v8 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v7 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j_j__ZdlPv_9(v8);
    v9 = *(_DWORD *)(v4 + 4);
    v10 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v9 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9(v10);
    operator delete((void *)v4);
  }
  *((_DWORD *)v1 + 4) = 0;
  v11 = (void *)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v12 = (void *)*(_QWORD *)((char *)v1 + 4);
  if ( v12 != v11 )
    do
      v19 = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 )
        v20 = *(_DWORD *)(v19 + 12);
        v21 = (void *)(v20 - 12);
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
            j_j_j_j_j__ZdlPv_9(v21);
        }
        v22 = *(_DWORD *)(v19 + 8);
        v23 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v22 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j_j__ZdlPv_9(v23);
        v24 = *(_DWORD *)(v19 + 4);
        v25 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v24 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j_j__ZdlPv_9(v25);
        operator delete((void *)v19);
      *(_DWORD *)v12 = 0;
      v12 = (char *)v12 + 4;
    while ( v12 != v11 );
    v12 = (void *)*((_DWORD *)v1 + 1);
  if ( v12 )
    operator delete(v12);
  return v1;
}


int __fastcall ToastManager::setRefreshPendingInvites(int result, bool a2)
{
  *(_BYTE *)(result + 53) = a2;
  return result;
}


_DWORD *__fastcall ToastManager::pushNotificationReceived(int a1, _DWORD *a2)
{
  _DWORD *v2; // r5@1
  int v3; // r4@1
  _DWORD *result; // r0@1
  void *v5; // r6@4
  __int64 v6; // r0@4
  int *v7; // r0@5
  void *v8; // r6@6
  __int64 v9; // r0@6
  void *v10; // r6@8
  __int64 v11; // r0@8
  void *v12; // [sp+4h] [bp-1Ch]@6
  void *v13; // [sp+8h] [bp-18h]@4
  void *v14; // [sp+Ch] [bp-14h]@8

  v2 = a2;
  v3 = a1;
  result = (_DWORD *)*a2;
  if ( *a2 == 2 )
  {
    v8 = operator new(0x10u);
    ToastMessage::ToastMessage((int)v8, 2, v2 + 1, v2 + 2, v2 + 3);
    v12 = v8;
    v9 = *(_QWORD *)(v3 + 8);
    if ( (_DWORD)v9 == HIDWORD(v9) )
    {
      std::vector<std::unique_ptr<ToastMessage,std::default_delete<ToastMessage>>,std::allocator<std::unique_ptr<ToastMessage,std::default_delete<ToastMessage>>>>::_M_emplace_back_aux<std::unique_ptr<ToastMessage,std::default_delete<ToastMessage>>>(
        (unsigned __int64 *)(v3 + 4),
        (int *)&v12);
    }
    else
      v12 = 0;
      *(_DWORD *)v9 = v8;
      *(_DWORD *)(v3 + 8) = v9 + 4;
    v7 = (int *)&v12;
  }
  else if ( result == (_DWORD *)1 )
    v10 = operator new(0x10u);
    ToastMessage::ToastMessage((int)v10, 1, v2 + 1, v2 + 2, v2 + 3);
    v14 = v10;
    v11 = *(_QWORD *)(v3 + 8);
    if ( (_DWORD)v11 == HIDWORD(v11) )
        (int *)&v14);
      v7 = (int *)&v14;
      v14 = 0;
      *(_DWORD *)v11 = v10;
      *(_DWORD *)(v3 + 8) = v11 + 4;
  else
    if ( result )
      return result;
    v5 = operator new(0x10u);
    ToastMessage::ToastMessage((int)v5, 0, v2 + 1, v2 + 2, v2 + 3);
    v13 = v5;
    v6 = *(_QWORD *)(v3 + 8);
    if ( (_DWORD)v6 == HIDWORD(v6) )
        (int *)&v13);
      v7 = (int *)&v13;
      v13 = 0;
      *(_DWORD *)v6 = v5;
      *(_DWORD *)(v3 + 8) = v6 + 4;
  return std::unique_ptr<ToastMessage,std::default_delete<ToastMessage>>::~unique_ptr(v7);
}


int __fastcall ToastManager::ToastManager(int a1, ClientInstance *a2)
{
  int v2; // r4@1
  int v3; // r7@1
  __int64 *v4; // r11@1
  __int64 *v5; // r10@1
  ClientInputHandler *v6; // r8@1
  int v7; // r6@1
  void (__fastcall *v8)(__int64 *, int, int *); // r5@1
  void (*v9)(void); // r2@1
  int v10; // r5@1
  void (*v11)(void); // r3@1
  void *v12; // r0@4
  int v13; // r5@5
  void (__fastcall *v14)(__int64 *, int, int *); // r6@5
  void (*v15)(void); // r2@5
  __int64 v16; // kr00_8@5
  int v17; // r6@5
  void (*v18)(void); // r3@5
  void *v19; // r0@8
  unsigned int *v21; // r2@10
  signed int v22; // r1@12
  unsigned int *v23; // r2@14
  signed int v24; // r1@16
  int v25; // [sp+4h] [bp-64h]@5
  __int64 v26; // [sp+8h] [bp-60h]@5
  void (*v27)(void); // [sp+10h] [bp-58h]@5
  int v28; // [sp+14h] [bp-54h]@5
  int v29; // [sp+1Ch] [bp-4Ch]@1
  __int64 v30; // [sp+20h] [bp-48h]@1
  void (*v31)(void); // [sp+28h] [bp-40h]@1
  int v32; // [sp+2Ch] [bp-3Ch]@1
  __int64 v33; // [sp+30h] [bp-38h]@1
  void (*v34)(void); // [sp+38h] [bp-30h]@1
  int v35; // [sp+3Ch] [bp-2Ch]@1

  v2 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_WORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = a1 + 4;
  v4 = (__int64 *)(a1 + 36);
  v5 = (__int64 *)(a1 + 20);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  v6 = (ClientInputHandler *)ClientInstance::getInput(a2);
  v7 = ClientInputHandler::getBindingFactory(v6);
  v8 = *(void (__fastcall **)(__int64 *, int, int *))(*(_DWORD *)v7 + 20);
  sub_119C884((void **)&v29, "binding.area.toast");
  v8(&v30, v7, &v29);
  v9 = v31;
  v31 = 0;
  v10 = v32;
  v33 = *v5;
  *v5 = v30;
  v34 = *(void (**)(void))(v2 + 28);
  v11 = v34;
  *(_DWORD *)(v2 + 28) = v9;
  v35 = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 32) = v10;
  if ( v11 )
  {
    v11();
    if ( v31 )
      v31();
  }
  v12 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = ClientInputHandler::getBindingFactory(v6);
  v14 = *(void (__fastcall **)(__int64 *, int, int *))(*(_DWORD *)v13 + 8);
  sub_119C884((void **)&v25, "binding.bool.toast");
  v14(&v26, v13, &v25);
  v15 = v27;
  v27 = 0;
  v16 = *v4;
  v17 = v28;
  v33 = *v4;
  *v4 = v26;
  v34 = *(void (**)(void))(v2 + 44);
  v18 = v34;
  *(_DWORD *)(v2 + 44) = v15;
  v35 = *(_DWORD *)(v2 + 48);
  *(_DWORD *)(v2 + 48) = v17;
  if ( v18 )
    v18();
    if ( v27 )
      v27();
  v19 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v25 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  return v2;
}


int __fastcall ToastManager::getNextToast(ToastManager *this)
{
  ToastManager *v1; // r4@1
  __int64 *v2; // r1@1
  unsigned int v3; // r6@2
  void *v4; // r0@2
  int *v5; // r8@3
  int *v6; // r0@4
  int v7; // r1@4
  int v8; // r0@4
  int v9; // r2@4
  int v10; // r1@4
  signed int v11; // r3@5
  int v12; // r6@6
  int v13; // r1@7
  int v14; // r5@7
  int v15; // r0@9
  int v16; // r6@9
  void (__fastcall *v17)(int, int *, signed int, signed int); // r7@9
  void *v18; // r0@9
  unsigned int *v19; // r2@10
  signed int v20; // r1@12
  unsigned int *v22; // r2@17
  signed int v23; // r1@19
  int v24; // [sp+8h] [bp-30h]@9
  int v25; // [sp+Ch] [bp-2Ch]@2

  v1 = this;
  v2 = (__int64 *)ClientInstance::getCurrentSceneStack(*(ClientInstance **)this);
  if ( (unsigned int)*(_QWORD *)((char *)v1 + 4) == *(_QWORD *)((char *)v1 + 4) >> 32 )
  {
    v5 = (int *)((char *)v1 + 16);
LABEL_15:
    std::unique_ptr<ToastMessage,std::default_delete<ToastMessage>>::reset(v5, 0);
    goto LABEL_16;
  }
  SceneStack::getScreenName((SceneStack *)&v25, v2);
  v3 = sub_119CA58(&v25, "progress_screen", 0, 0xFu);
  v4 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  v5 = (int *)((char *)v1 + 16);
  if ( v3 != -1 )
    goto LABEL_15;
  v6 = (int *)*((_DWORD *)v1 + 1);
  v7 = *v6;
  *v6 = 0;
  std::unique_ptr<ToastMessage,std::default_delete<ToastMessage>>::reset((int *)v1 + 4, v7);
  v9 = *(_QWORD *)((char *)v1 + 4) >> 32;
  v8 = *(_QWORD *)((char *)v1 + 4);
  v10 = v8 + 4;
  if ( v8 + 4 != v9 )
    v11 = v9 - v10;
    v10 = *(_QWORD *)((char *)v1 + 4) >> 32;
    if ( v11 >= 1 )
      v12 = (v11 >> 2) + 1;
      {
        v14 = v8 + 4;
        v13 = *(_DWORD *)(v8 + 4);
        *(_DWORD *)(v8 + 4) = 0;
        std::unique_ptr<ToastMessage,std::default_delete<ToastMessage>>::reset((int *)v8, v13);
        --v12;
        v8 = v14;
      }
      while ( v12 > 1 );
      v10 = *((_DWORD *)v1 + 2);
  *((_DWORD *)v1 + 2) = v10 - 4;
  std::unique_ptr<ToastMessage,std::default_delete<ToastMessage>>::~unique_ptr((_DWORD *)(v10 - 4));
  v15 = ClientInstance::getSoundEngine(*(ClientInstance **)v1);
  v16 = v15;
  v17 = *(void (__fastcall **)(int, int *, signed int, signed int))(*(_DWORD *)v15 + 12);
  sub_119C884((void **)&v24, "random.toast");
  v17(v16, &v24, 1065353216, 1065353216);
  v18 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
LABEL_16:
  ToastManager::_toastChanged(v1);
  *((_BYTE *)v1 + 52) = 0;
  return *v5;
}


_DWORD *__fastcall ToastManager::pushToast(int a1, int a2, int *a3, int *a4, int *a5)
{
  int v5; // r4@1
  int *v6; // r8@1
  int *v7; // r7@1
  int v8; // r6@1
  void *v9; // r5@1
  __int64 v10; // r0@1
  void *v12; // [sp+8h] [bp-20h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = operator new(0x10u);
  ToastMessage::ToastMessage((int)v9, v8, v7, v6, a5);
  v12 = v9;
  v10 = *(_QWORD *)(v5 + 8);
  if ( (_DWORD)v10 == HIDWORD(v10) )
  {
    std::vector<std::unique_ptr<ToastMessage,std::default_delete<ToastMessage>>,std::allocator<std::unique_ptr<ToastMessage,std::default_delete<ToastMessage>>>>::_M_emplace_back_aux<std::unique_ptr<ToastMessage,std::default_delete<ToastMessage>>>(
      (unsigned __int64 *)(v5 + 4),
      (int *)&v12);
  }
  else
    v12 = 0;
    *(_DWORD *)v10 = v9;
    *(_DWORD *)(v5 + 8) = v10 + 4;
  return std::unique_ptr<ToastMessage,std::default_delete<ToastMessage>>::~unique_ptr(&v12);
}


int __fastcall ToastManager::_toastChanged(ToastManager *this)
{
  ToastManager *v1; // r5@1
  ClientInputHandler *v2; // r4@1
  GuiData *v3; // r0@2
  GuiData *v4; // r5@2
  char *v11; // r0@2
  char *v12; // r5@2
  int v14; // [sp+0h] [bp-40h]@0
  char v15; // [sp+8h] [bp-38h]@3
  char v16; // [sp+18h] [bp-28h]@2

  v1 = this;
  v2 = (ClientInputHandler *)ClientInstance::getInput(*(ClientInstance **)this);
  if ( *((_DWORD *)v1 + 4) )
  {
    v3 = (GuiData *)ClientInstance::getGuiData(*(ClientInstance **)v1);
    v4 = v3;
    _R0 = GuiData::getGuiScale(v3);
    __asm { VMOV            S2, R0 }
    _R1 = &ToastMessage::ToastHeight;
    __asm
    {
      VLDR            S0, [R1]
      VCVT.F32.S32    S0, S0
      VMUL.F32        S16, S0, S2
    }
    v11 = GuiData::getScreenSizeData(v4);
    v12 = &v16;
    __asm { VSTR            S16, [SP,#0x40+var_40] }
    RectangleArea::RectangleArea(COERCE_FLOAT(&v16), 0, 0, *((_DWORD *)v11 + 2), v14);
  }
  else
    v12 = &v15;
    RectangleArea::RectangleArea((RectangleArea *)&v15);
  return ClientInputHandler::onToastChanged(v2, (const RectangleArea *)v12);
}


void __fastcall ToastManager::handleToastButton(ToastManager *this)
{
  ToastManager::handleToastButton(this);
}


signed int __fastcall ToastManager::handleToastClicked(int a1, unsigned __int64 *a2)
{
  int v2; // r4@1
  unsigned __int64 *v3; // r5@1
  signed int v4; // r5@2
  int v6; // [sp+0h] [bp-20h]@6

  v2 = a1;
  v3 = a2;
  if ( *(_BYTE *)(a1 + 52) )
  {
    v4 = 0;
  }
  else
    if ( !*(_DWORD *)(a1 + 44) )
      goto LABEL_14;
    if ( (*(int (__fastcall **)(int))(a1 + 48))(a1 + 36) != 1 )
      return 0;
    if ( !*(_DWORD *)(v2 + 28) )
LABEL_14:
      sub_119C8E4();
    (*(void (__fastcall **)(int *, int))(v2 + 32))(&v6, v2 + 20);
    if ( RectangleArea::isInside((RectangleArea *)&v6, COERCE_FLOAT(*v3), COERCE_FLOAT(*v3 >> 32)) == 1 )
    {
      v4 = 1;
      *(_BYTE *)(v2 + 52) = 1;
      ToastManager::handleToastButton((ToastManager *)v2);
    }
    else
      v4 = 0;
  return v4;
}
