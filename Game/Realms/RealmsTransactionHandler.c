

void __fastcall RealmsTransactionHandler::_createRealm_AmazonAppStore(int a1, int *a2, int *a3, int *a4, const void **a5, int a6)
{
  RealmsTransactionHandler::_createRealm_AmazonAppStore(a1, a2, a3, a4, a5, a6);
}


TransactionHandler *__fastcall RealmsTransactionHandler::~RealmsTransactionHandler(RealmsTransactionHandler *this)
{
  RealmsTransactionHandler *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DF9AC;
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 5) = 0;
  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr((_DWORD *)v1 + 4);
  return j_j_j__ZN18TransactionHandlerD2Ev(v1);
}


_QWORD *__fastcall RealmsTransactionHandler::RealmsTransactionHandler(_QWORD *a1, int a2, int a3, int *a4, int *a5, int a6)
{
  int *v6; // r6@1
  int v7; // r5@1
  int v8; // r7@1
  _QWORD *v9; // r4@1
  void *v10; // r7@1

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  TransactionHandler::TransactionHandler(a1);
  *(_DWORD *)v9 = &off_26DF9AC;
  *((_DWORD *)v9 + 2) = v8;
  *((_DWORD *)v9 + 3) = v7;
  *((_DWORD *)v9 + 4) = 0;
  v10 = operator new(0x30u);
  RealmsPaymentService::RealmsPaymentService((int)v10, v6, a5, a6);
  *((_DWORD *)v9 + 5) = v10;
  return v9;
}


void __fastcall RealmsTransactionHandler::_createRealm_OneStore(int a1, int *a2, int *a3, int *a4, const void **a5, int a6)
{
  int *v6; // r10@1
  int v7; // r4@1
  int *v8; // r8@1
  int *v9; // r9@1
  int v10; // r7@1
  Json::Value *v11; // r0@2
  int v12; // r5@3
  signed int v13; // r5@3
  void *v14; // r0@5
  void *v15; // r0@7
  Json::Value *v16; // r0@8
  int v17; // r5@9
  signed int v18; // r5@9
  void *v19; // r0@11
  void *v20; // r0@13
  Json::Value *v21; // r0@14
  int v22; // r5@15
  signed int v23; // r5@15
  void *v24; // r0@17
  void *v25; // r0@19
  Json::Value *v26; // r0@20
  int v27; // r5@21
  signed int v28; // r5@21
  void *v29; // r0@23
  void *v30; // r0@25
  char v31; // r6@26
  int v32; // r4@26
  void (__fastcall *v33)(char *, int, signed int); // r3@26
  char *v34; // r0@32
  char *v35; // r0@33
  char *v36; // r0@34
  char *v37; // r0@35
  unsigned int *v38; // r2@37
  signed int v39; // r1@39
  unsigned int *v40; // r2@41
  signed int v41; // r1@43
  unsigned int *v42; // r2@45
  signed int v43; // r1@47
  unsigned int *v44; // r2@49
  signed int v45; // r1@51
  unsigned int *v46; // r2@53
  signed int v47; // r1@55
  unsigned int *v48; // r2@57
  signed int v49; // r1@59
  unsigned int *v50; // r2@77
  signed int v51; // r1@79
  unsigned int *v52; // r2@81
  signed int v53; // r1@83
  unsigned int *v54; // r2@85
  signed int v55; // r1@87
  unsigned int *v56; // r2@93
  signed int v57; // r1@95
  unsigned int *v58; // r2@101
  signed int v59; // r1@103
  unsigned int *v60; // r2@109
  signed int v61; // r1@111
  char v62; // [sp+18h] [bp-108h]@27
  void (*v63)(void); // [sp+20h] [bp-100h]@26
  int v64; // [sp+24h] [bp-FCh]@27
  char *v65; // [sp+28h] [bp-F8h]@1
  char *v66; // [sp+2Ch] [bp-F4h]@1
  char *v67; // [sp+30h] [bp-F0h]@1
  char *v68; // [sp+34h] [bp-ECh]@1
  int v69; // [sp+40h] [bp-E0h]@21
  int v70; // [sp+44h] [bp-DCh]@21
  int v71; // [sp+50h] [bp-D0h]@15
  int v72; // [sp+54h] [bp-CCh]@15
  int v73; // [sp+60h] [bp-C0h]@9
  int v74; // [sp+64h] [bp-BCh]@9
  int v75; // [sp+70h] [bp-B0h]@3
  int v76; // [sp+74h] [bp-ACh]@3
  char v77; // [sp+78h] [bp-A8h]@1
  char v78; // [sp+8Ch] [bp-94h]@1

  v6 = a2;
  v7 = a1;
  v8 = a4;
  v9 = a3;
  v10 = sub_119C9E8(a5, "fake_receipt");
  v67 = (char *)&unk_28898CC;
  v68 = (char *)&unk_28898CC;
  v65 = (char *)&unk_28898CC;
  v66 = (char *)&unk_28898CC;
  Json::Reader::Reader((Json::Reader *)&v78);
  Json::Value::Value(&v77, 0);
  if ( Json::Reader::parse((int)&v78, (int *)a5, (int)&v77, 1) == 1 )
  {
    v11 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v77, "access_token");
    if ( Json::Value::isString(v11) == 1 )
    {
      v12 = Json::Value::operator[]((Json::Value *)&v77, "access_token");
      sub_119C884((void **)&v75, (const char *)&unk_257BC67);
      Json::Value::asString(&v76, v12, &v75);
      v13 = 1;
    }
    else
      v13 = 0;
      sub_119C884((void **)&v76, 0);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v68,
      &v76);
    v14 = (void *)(v76 - 12);
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v76 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
      }
      else
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    if ( v13 == 1 )
      v15 = (void *)(v75 - 12);
      if ( (int *)(v75 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v75 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
        }
        else
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v77, "wsid_Key");
    if ( Json::Value::isString(v16) == 1 )
      v17 = Json::Value::operator[]((Json::Value *)&v77, "wsid_Key");
      sub_119C884((void **)&v73, (const char *)&unk_257BC67);
      Json::Value::asString(&v74, v17, &v73);
      v18 = 1;
      sub_119C884((void **)&v74, (const char *)&unk_257BC67);
      v18 = 0;
      (int *)&v67,
      &v74);
    v19 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v74 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    if ( v18 == 1 )
      v20 = (void *)(v73 - 12);
      if ( (int *)(v73 - 12) != &dword_28898C0 )
        v56 = (unsigned int *)(v73 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
    v21 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v77, "actor");
    if ( Json::Value::isString(v21) == 1 )
      v22 = Json::Value::operator[]((Json::Value *)&v77, "actor");
      sub_119C884((void **)&v71, (const char *)&unk_257BC67);
      Json::Value::asString(&v72, v22, &v71);
      v23 = 1;
      sub_119C884((void **)&v72, (const char *)&unk_257BC67);
      v23 = 0;
      (int *)&v66,
      &v72);
    v24 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v72 - 4);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v24);
    if ( v23 == 1 )
      v25 = (void *)(v71 - 12);
      if ( (int *)(v71 - 12) != &dword_28898C0 )
        v58 = (unsigned int *)(v71 - 4);
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
          v59 = (*v58)--;
        if ( v59 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v25);
    v26 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v77, "inventory");
    if ( Json::Value::isString(v26) == 1 )
      v27 = Json::Value::operator[]((Json::Value *)&v77, "inventory");
      sub_119C884((void **)&v69, (const char *)&unk_257BC67);
      Json::Value::asString(&v70, v27, &v69);
      v28 = 1;
      sub_119C884((void **)&v70, (const char *)&unk_257BC67);
      v28 = 0;
      (int *)&v65,
      &v70);
    v29 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v70 - 4);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v29);
    if ( v28 == 1 )
      v30 = (void *)(v69 - 12);
      if ( (int *)(v69 - 12) != &dword_28898C0 )
        v60 = (unsigned int *)(v69 - 4);
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v30);
  }
  Json::Value::~Value((Json::Value *)&v77);
  Json::Reader::~Reader((Json::Reader *)&v78);
  v31 = 0;
  v32 = *(_DWORD *)(v7 + 20);
  v63 = 0;
  v33 = *(void (__fastcall **)(char *, int, signed int))(a6 + 8);
  if ( v33 )
    v33(&v62, a6, 2);
    v64 = *(_DWORD *)(a6 + 12);
    v63 = *(void (**)(void))(a6 + 8);
  if ( !v10 )
    v31 = 1;
  RealmsPaymentService::sendReceiptFromOneStore(
    v32,
    v6,
    v9,
    v8,
    (int *)&v68,
    (int *)&v67,
    (int *)&v66,
    (int *)&v65,
    v31,
    (int)&v62);
  if ( v63 )
    v63();
  v34 = v65 - 12;
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v65 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = v66 - 12;
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v66 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  v36 = v67 - 12;
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v67 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = v68 - 12;
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v68 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
}


void __fastcall RealmsTransactionHandler::_checkReceiptFulfillment_iOSAppStore(unsigned int a1, unsigned __int64 *a2, int *a3)
{
  RealmsTransactionHandler::_checkReceiptFulfillment_iOSAppStore(a1, a2, a3);
}


signed int __fastcall RealmsTransactionHandler::transactFulfillment(int a1, int a2, int a3, int *a4)
{
  int v4; // r5@1
  int v5; // r10@1
  int v6; // r7@1
  int v7; // r1@1
  int *v8; // r4@1
  signed int result; // r0@1
  int v10; // r1@2
  int v11; // r6@2
  __int64 v12; // kr00_8@4
  unsigned int *v13; // r0@5
  unsigned int v14; // r1@7
  int v15; // r7@17
  unsigned int *v16; // r0@18
  unsigned int v17; // r1@20
  int v18; // r7@22
  unsigned int *v19; // r0@23
  unsigned int v20; // r1@25
  int v21; // r7@27
  unsigned int *v22; // r0@28
  unsigned int v23; // r1@30
  int v24; // r7@32
  unsigned int *v25; // r0@33
  unsigned int v26; // r1@35
  _DWORD *v27; // r0@38
  __int64 v28; // r1@38
  int v29; // r7@40
  unsigned int *v30; // r0@41
  unsigned int v31; // r1@43
  _DWORD *v32; // r0@46
  __int64 v33; // r1@46
  int v34; // r7@48
  unsigned int *v35; // r0@49
  unsigned int v36; // r1@51
  _DWORD *v37; // r0@54
  __int64 v38; // r1@54
  int v39; // r7@56
  unsigned int *v40; // r0@57
  unsigned int v41; // r1@59
  _DWORD *v42; // r0@62
  __int64 v43; // r1@62
  _DWORD *v44; // r0@65
  __int64 v45; // r1@65
  _DWORD *v46; // r0@68
  __int64 v47; // r1@68
  _DWORD *v48; // r0@71
  __int64 v49; // r1@71
  void *v50; // r0@73
  unsigned int *v51; // r1@75
  unsigned int v52; // r0@77
  unsigned int *v53; // r5@81
  unsigned int v54; // r0@83
  void *v55; // r0@88
  void *v56; // r0@89
  void *v57; // r0@90
  unsigned int *v58; // r2@93
  signed int v59; // r1@95
  unsigned int *v60; // r2@97
  signed int v61; // r1@99
  unsigned int *v62; // r2@101
  signed int v63; // r1@103
  unsigned int *v64; // r2@105
  signed int v65; // r1@107
  _DWORD *v66; // [sp+14h] [bp-A4h]@71
  __int64 v67; // [sp+1Ch] [bp-9Ch]@71
  _DWORD *v68; // [sp+24h] [bp-94h]@68
  __int64 v69; // [sp+2Ch] [bp-8Ch]@68
  _DWORD *v70; // [sp+34h] [bp-84h]@65
  __int64 v71; // [sp+3Ch] [bp-7Ch]@65
  _DWORD *v72; // [sp+44h] [bp-74h]@62
  __int64 v73; // [sp+4Ch] [bp-6Ch]@62
  _DWORD *v74; // [sp+54h] [bp-64h]@54
  __int64 v75; // [sp+5Ch] [bp-5Ch]@54
  _DWORD *v76; // [sp+64h] [bp-54h]@46
  __int64 v77; // [sp+6Ch] [bp-4Ch]@46
  _DWORD *v78; // [sp+74h] [bp-44h]@38
  __int64 v79; // [sp+7Ch] [bp-3Ch]@38
  int v80; // [sp+84h] [bp-34h]@10
  int v81; // [sp+88h] [bp-30h]@2
  int v82; // [sp+8Ch] [bp-2Ch]@2
  int v83; // [sp+90h] [bp-28h]@2

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v8 = (int *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 16);
  result = 0;
  if ( !v7 )
  {
    v10 = *a4;
    *a4 = 0;
    std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::reset(v8, v10);
    v11 = *(_DWORD *)(v4 + 16);
    GameStore::getAppReceipt((GameStore *)&v83, *(_DWORD *)(v4 + 8));
    ++*(_DWORD *)(*(_DWORD *)v6 + 20);
    sub_119C854(&v82, (int *)(v11 + 24));
    sub_119C854(&v81, (int *)(v11 + 28));
    if ( *(_DWORD *)(*v8 + 8) )
      (*(void (**)(void))(*v8 + 12))();
    v12 = *(_QWORD *)v6;
    if ( *(_QWORD *)v6 >> 32 )
    {
      v13 = (unsigned int *)(HIDWORD(v12) + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 + 1, v13) );
      }
      else
        ++*v13;
    }
    GameStore::getStoreId((GameStore *)&v80, *(_DWORD *)(v4 + 8), 0);
    if ( sub_119C9E8((const void **)&v80, "android.googleplay") )
      if ( sub_119C9E8((const void **)&v80, "android.amazonappstore") )
        if ( sub_119C9E8((const void **)&v80, "ios.store") )
        {
          if ( sub_119C9E8((const void **)&v80, "uwp.store") )
          {
            if ( sub_119C9E8((const void **)&v80, "oculus.store") )
            {
              if ( sub_119C9E8((const void **)&v80, "appletv.store") )
              {
                if ( !sub_119C9E8((const void **)&v80, "xboxone.store") )
                {
                  v15 = *(_DWORD *)v6;
                  if ( HIDWORD(v12) )
                  {
                    v16 = (unsigned int *)(HIDWORD(v12) + 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v17 = __ldrex(v16);
                      while ( __strex(v17 + 1, v16) );
                    }
                    else
                      ++*v16;
                  }
                  v48 = operator new(0x10u);
                  LODWORD(v49) = sub_10DD168;
                  *v48 = v4;
                  v48[1] = v5;
                  HIDWORD(v49) = sub_10DCED8;
                  *((_QWORD *)v48 + 1) = v12;
                  v66 = v48;
                  v67 = v49;
                  RealmsTransactionHandler::_createRealm_OneStore(
                    v4,
                    &v82,
                    &v81,
                    (int *)v15,
                    (const void **)(v15 + 8),
                    (int)&v66);
                  if ( (_DWORD)v67 )
                    ((void (*)(void))v67)();
                }
              }
              else
                v39 = *(_DWORD *)v6;
                if ( HIDWORD(v12) )
                  v40 = (unsigned int *)(HIDWORD(v12) + 4);
                  if ( &pthread_create )
                    __dmb();
                    do
                      v41 = __ldrex(v40);
                    while ( __strex(v41 + 1, v40) );
                  else
                    ++*v40;
                v46 = operator new(0x10u);
                LODWORD(v47) = sub_10DD168;
                *v46 = v4;
                v46[1] = v5;
                HIDWORD(v47) = sub_10DCED8;
                *((_QWORD *)v46 + 1) = v12;
                v68 = v46;
                v69 = v47;
                RealmsTransactionHandler::_createRealm_AppleStore(
                  v4,
                  &v82,
                  &v81,
                  (int *)v39,
                  (int *)(v39 + 4),
                  (const void **)(v39 + 8),
                  &v83,
                  (int)&v68);
                if ( (_DWORD)v69 )
                  ((void (*)(void))v69)();
            }
            else
              v34 = *(_DWORD *)v6;
              if ( HIDWORD(v12) )
                v35 = (unsigned int *)(HIDWORD(v12) + 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v36 = __ldrex(v35);
                  while ( __strex(v36 + 1, v35) );
                else
                  ++*v35;
              v44 = operator new(0x10u);
              LODWORD(v45) = sub_10DD168;
              *v44 = v4;
              v44[1] = v5;
              HIDWORD(v45) = sub_10DCED8;
              *((_QWORD *)v44 + 1) = v12;
              v70 = v44;
              v71 = v45;
              RealmsTransactionHandler::_createRealm_OculusStore(
                v4,
                &v82,
                &v81,
                (int *)v34,
                (const void **)(v34 + 8),
                (int)&v70);
              if ( (_DWORD)v71 )
                ((void (*)(void))v71)();
          }
          else
            v29 = *(_DWORD *)v6;
            if ( HIDWORD(v12) )
              v30 = (unsigned int *)(HIDWORD(v12) + 4);
              if ( &pthread_create )
                __dmb();
                do
                  v31 = __ldrex(v30);
                while ( __strex(v31 + 1, v30) );
                ++*v30;
            v42 = operator new(0x10u);
            LODWORD(v43) = sub_10DD168;
            *v42 = v4;
            v42[1] = v5;
            HIDWORD(v43) = sub_10DCED8;
            *((_QWORD *)v42 + 1) = v12;
            v72 = v42;
            v73 = v43;
            RealmsTransactionHandler::_createRealm_UWPStore(
              v4,
              &v82,
              &v81,
              (int *)v29,
              (int *)(v29 + 4),
              (const void **)(v29 + 8),
              (const unsigned __int8 **)&v83,
              (int)&v72);
            if ( (_DWORD)v73 )
              ((void (*)(void))v73)();
        }
        else
          v24 = *(_DWORD *)v6;
          if ( HIDWORD(v12) )
            v25 = (unsigned int *)(HIDWORD(v12) + 4);
            if ( &pthread_create )
              __dmb();
              do
                v26 = __ldrex(v25);
              while ( __strex(v26 + 1, v25) );
              ++*v25;
          v37 = operator new(0x10u);
          LODWORD(v38) = sub_10DD168;
          *v37 = v4;
          v37[1] = v5;
          HIDWORD(v38) = sub_10DCED8;
          *((_QWORD *)v37 + 1) = v12;
          v74 = v37;
          v75 = v38;
          RealmsTransactionHandler::_createRealm_AppleStore(
            v4,
            &v82,
            &v81,
            (int *)v24,
            (int *)(v24 + 4),
            (const void **)(v24 + 8),
            &v83,
            (int)&v74);
          if ( (_DWORD)v75 )
            ((void (*)(void))v75)();
        v21 = *(_DWORD *)v6;
        if ( HIDWORD(v12) )
          v22 = (unsigned int *)(HIDWORD(v12) + 4);
          if ( &pthread_create )
            __dmb();
            do
              v23 = __ldrex(v22);
            while ( __strex(v23 + 1, v22) );
            ++*v22;
        v32 = operator new(0x10u);
        LODWORD(v33) = sub_10DD168;
        *v32 = v4;
        v32[1] = v5;
        HIDWORD(v33) = sub_10DCED8;
        *((_QWORD *)v32 + 1) = v12;
        v76 = v32;
        v77 = v33;
        RealmsTransactionHandler::_createRealm_AmazonAppStore(
          v4,
          &v82,
          &v81,
          (int *)v21,
          (const void **)(v21 + 8),
          (int)&v76);
        if ( (_DWORD)v77 )
          ((void (*)(void))v77)();
    else
      v18 = *(_DWORD *)v6;
      if ( HIDWORD(v12) )
        v19 = (unsigned int *)(HIDWORD(v12) + 4);
        if ( &pthread_create )
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 + 1, v19) );
          ++*v19;
      v27 = operator new(0x10u);
      LODWORD(v28) = sub_10DD168;
      *v27 = v4;
      v27[1] = v5;
      HIDWORD(v28) = sub_10DCED8;
      *((_QWORD *)v27 + 1) = v12;
      v78 = v27;
      v79 = v28;
      RealmsTransactionHandler::_createRealm_GooglePlayStore(
        v4,
        &v82,
        &v81,
        (int *)v18,
        (const void **)(v18 + 8),
        (int)&v78);
      if ( (_DWORD)v79 )
        ((void (*)(void))v79)();
    v50 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v80 - 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v50);
    if ( HIDWORD(v12) )
      v51 = (unsigned int *)(HIDWORD(v12) + 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 == 1 )
        v53 = (unsigned int *)(HIDWORD(v12) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v12) + 8))(HIDWORD(v12));
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v12) + 12))(HIDWORD(v12));
    v55 = (void *)(v81 - 12);
    if ( (int *)(v81 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v81 - 4);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v55);
    v56 = (void *)(v82 - 12);
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v82 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v56);
    v57 = (void *)(v83 - 12);
    if ( (int *)(v83 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v83 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v57);
    result = 1;
  }
  return result;
}


int __fastcall RealmsTransactionHandler::_createRealm_AppleStore(int a1, int *a2, int *a3, int *a4, int *a5, const void **a6, int *a7, int a8)
{
  int *v8; // r10@1
  int v9; // r7@1
  int *v10; // r8@1
  int *v11; // r9@1
  int v12; // r0@1
  char v13; // r6@1
  int v14; // r7@1
  int v15; // r4@1
  void (__fastcall *v16)(char *, int, signed int); // r3@1
  int result; // r0@5
  char v18; // [sp+10h] [bp-30h]@2
  int (*v19)(void); // [sp+18h] [bp-28h]@1
  int v20; // [sp+1Ch] [bp-24h]@2

  v8 = a2;
  v9 = a1;
  v10 = a4;
  v11 = a3;
  v12 = sub_119C9E8(a6, "fake_receipt");
  v13 = 0;
  v14 = *(_DWORD *)(v9 + 20);
  v15 = v12;
  v19 = 0;
  v16 = *(void (__fastcall **)(char *, int, signed int))(a8 + 8);
  if ( v16 )
  {
    v16(&v18, a8, 2);
    v20 = *(_DWORD *)(a8 + 12);
    v19 = *(int (**)(void))(a8 + 8);
  }
  if ( !v15 )
    v13 = 1;
  result = RealmsPaymentService::sendReceiptFromAppleAppStore(v14, v8, v11, v10, a5, a7, v13, (int)&v18);
  if ( v19 )
    result = v19();
  return result;
}


void __fastcall RealmsTransactionHandler::_createRealm_GooglePlayStore(int a1, int *a2, int *a3, int *a4, const void **a5, int a6)
{
  RealmsTransactionHandler::_createRealm_GooglePlayStore(a1, a2, a3, a4, a5, a6);
}


int __fastcall RealmsTransactionHandler::transactPurchase(RealmsTransactionHandler *this, Offer *a2, TransactionContext *a3)
{
  Offer *v3; // r5@1
  int v4; // r6@1
  TransactionContext *v5; // r4@1
  int result; // r0@1

  v3 = a2;
  v4 = *((_DWORD *)this + 2);
  v5 = a3;
  Offer::getProductSku(a2);
  Offer::getProductType(v3);
  result = GameStore::purchase(v4);
  if ( !result )
  {
    result = *((_DWORD *)v5 + 2);
    if ( result )
      result = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD))v5 + 3))(v5, v5, 2);
  }
  return result;
}


void __fastcall RealmsTransactionHandler::~RealmsTransactionHandler(RealmsTransactionHandler *this)
{
  RealmsTransactionHandler::~RealmsTransactionHandler(this);
}


void __fastcall RealmsTransactionHandler::_checkReceiptFulfillment_iOSAppStore(unsigned int a1, unsigned __int64 *a2, int *a3)
{
  char *v3; // r11@1
  unsigned int v4; // r5@1
  int i; // r4@1
  int v6; // r8@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  int v11; // r7@19
  unsigned int v12; // r1@20
  unsigned int *v13; // r0@20
  unsigned int v14; // r2@23
  unsigned int v15; // r3@24
  unsigned int v16; // r1@25
  unsigned int v17; // r10@25
  unsigned int *v18; // r11@35
  unsigned int v19; // r0@37
  char **v20; // r0@42
  char *v21; // r1@43
  char *v22; // r0@45
  char *v23; // r0@46
  int v24; // r1@48
  int v25; // r1@48 OVERLAPPED
  int v26; // r2@48 OVERLAPPED
  int v27; // r8@48
  signed int v28; // r0@48
  unsigned int v29; // r4@51
  int v30; // r12@52
  char *v31; // r6@52
  int v32; // r4@53
  unsigned int *v33; // r4@54
  unsigned int v34; // r0@56
  char *v35; // r6@61
  _DWORD *v36; // r9@61
  unsigned int v37; // r5@61
  char *v38; // r1@65
  char *v39; // r2@65
  int v40; // r3@66
  unsigned int *v41; // r3@67
  unsigned int v42; // r5@69
  __int64 v43; // r0@74
  char *v44; // r6@77
  int v45; // r0@78
  unsigned int *v46; // r2@79
  unsigned int v47; // r1@81
  int v48; // r4@89
  char **v49; // r6@89
  unsigned int *v50; // r2@91
  signed int v51; // r1@93
  unsigned int *v52; // r2@95
  signed int v53; // r1@97
  int v54; // r1@107
  void *v55; // r0@107
  int *v56; // r0@108
  int *v57; // [sp+0h] [bp-58h]@1
  unsigned __int64 *v58; // [sp+4h] [bp-54h]@1
  _DWORD *v59; // [sp+Ch] [bp-4Ch]@74
  void (*v60)(void); // [sp+14h] [bp-44h]@61
  char *v61; // [sp+1Ch] [bp-3Ch]@7
  char *v62; // [sp+20h] [bp-38h]@42
  char **v63; // [sp+24h] [bp-34h]@1
  char **v64; // [sp+28h] [bp-30h]@1
  char **v65; // [sp+2Ch] [bp-2Ch]@1

  v3 = 0;
  v57 = a3;
  v58 = a2;
  v63 = 0;
  v64 = 0;
  v4 = a1;
  v65 = 0;
  v6 = *a2 >> 32;
  for ( i = *a2; i != v6; i += 8 )
  {
    v11 = *(_DWORD *)(i + 4);
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 4);
      v13 = (unsigned int *)(v11 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v12 )
          {
            v17 = 0;
            goto LABEL_42;
          }
          __dmb();
          v14 = __ldrex(v13);
          if ( v14 == v12 )
            break;
          __clrex();
          v12 = v14;
        }
        v15 = __strex(v12 + 1, v13);
        v12 = v14;
      }
      while ( v15 );
      __dmb();
      v16 = *v13;
      v17 = *(_DWORD *)i;
      if ( !*v13 )
        v17 = *v13;
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v13);
        while ( __strex(v16 - 1, v13) );
      else
        *v13 = v16 - 1;
      if ( v16 == 1 )
        v18 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( &pthread_create )
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        else
          v19 = (*v18)--;
        v3 = 0;
        if ( v19 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    }
    else
      v17 = 0;
LABEL_42:
    sub_119C854((int *)&v61, (int *)(v17 + 4));
    GameStore::getAppReceipt((GameStore *)&v62, *(_DWORD *)(v4 + 8));
    v20 = v64;
    if ( v64 == v65 )
      std::vector<ReceiptData_Apple,std::allocator<ReceiptData_Apple>>::_M_emplace_back_aux<ReceiptData_Apple>(
        (unsigned __int64 *)&v63,
        (int)&v61);
      v21 = v62;
      *v64 = v61;
      v21 = (char *)&unk_28898CC;
      v61 = (char *)&unk_28898CC;
      v20[1] = v62;
      v62 = (char *)&unk_28898CC;
      v64 = v20 + 2;
    v22 = v21 - 12;
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v21 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v22);
    v23 = v61 - 12;
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v61 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v23);
  }
  v24 = *v57;
  *v57 = 0;
  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::reset((int *)(v4 + 16), v24);
  *(_QWORD *)&v25 = *v58;
  v27 = *(_DWORD *)(v4 + 20);
  v28 = v26 - v25;
  if ( 0 != (v26 - v25) >> 3 )
    if ( (unsigned int)(v28 >> 3) >= 0x20000000 )
      sub_119C874();
    v3 = (char *)operator new(v28);
    *(_QWORD *)&v25 = *v58;
  v29 = (unsigned int)v3;
  if ( v25 != v26 )
    v30 = -v25;
    v31 = v3;
    do
      *(_DWORD *)v31 = *(_DWORD *)v25;
      v32 = *(_DWORD *)(v25 + 4);
      *((_DWORD *)v31 + 1) = v32;
      if ( v32 )
        v33 = (unsigned int *)(v32 + 8);
            v34 = __ldrex(v33);
          while ( __strex(v34 + 1, v33) );
          ++*v33;
      v25 += 8;
      v31 += 8;
    while ( v25 != v26 );
    v29 = (unsigned int)&v3[((v26 - 8 + v30) & 0xFFFFFFF8) + 8];
  v35 = 0;
  v60 = 0;
  v36 = operator new(0x10u);
  *(_QWORD *)v36 = v4;
  v36[2] = 0;
  v36[3] = 0;
  v37 = (signed int)(v29 - (_DWORD)v3) >> 3;
  if ( 0 != v37 )
    if ( v37 >= 0x20000000 )
    v35 = (char *)operator new(v29 - (_DWORD)v3);
  v36[1] = v35;
  v36[2] = v35;
  v36[3] = &v35[8 * v37];
  if ( v3 != (char *)v29 )
    v38 = v3;
    v39 = v35;
      *(_DWORD *)v39 = *(_DWORD *)v38;
      v40 = *((_DWORD *)v38 + 1);
      *((_DWORD *)v39 + 1) = v40;
      if ( v40 )
        v41 = (unsigned int *)(v40 + 8);
            v42 = __ldrex(v41);
          while ( __strex(v42 + 1, v41) );
          ++*v41;
      v38 += 8;
      v39 += 8;
    while ( v38 != (char *)v29 );
    v35 += ((v29 - 8 - (_DWORD)v3) & 0xFFFFFFF8) + 8;
  LODWORD(v43) = sub_10DE154;
  HIDWORD(v43) = sub_10DE0D8;
  v59 = v36;
  *(_QWORD *)&v60 = v43;
  RealmsPaymentService::checkReceiptsForAppleAppStore(v27, (__int64 *)&v63, (int)&v59);
  if ( v60 )
    v60();
    v44 = v3;
      v45 = *((_DWORD *)v44 + 1);
      if ( v45 )
        v46 = (unsigned int *)(v45 + 8);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 == 1 )
          (*(void (**)(void))(*(_DWORD *)v45 + 12))();
      v44 += 8;
    while ( v44 != (char *)v29 );
  if ( v3 )
    operator delete(v3);
  v49 = v64;
  v48 = (int)v63;
  if ( v63 != v64 )
      v54 = *(_DWORD *)(v48 + 4);
      v55 = (void *)(v54 - 12);
      if ( (int *)(v54 - 12) != &dword_28898C0 )
        v50 = (unsigned int *)(v54 - 4);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v55);
      v56 = (int *)(*(_DWORD *)v48 - 12);
      if ( v56 != &dword_28898C0 )
        v52 = (unsigned int *)(*(_DWORD *)v48 - 4);
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
          v53 = (*v52)--;
        if ( v53 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v56);
      v48 += 8;
    while ( (char **)v48 != v49 );
    v48 = (int)v63;
  if ( v48 )
    operator delete((void *)v48);
}


void __fastcall RealmsTransactionHandler::_createRealm_OneStore(int a1, int *a2, int *a3, int *a4, const void **a5, int a6)
{
  RealmsTransactionHandler::_createRealm_OneStore(a1, a2, a3, a4, a5, a6);
}


void __fastcall RealmsTransactionHandler::_createRealm_UWPStore(int a1, int *a2, int *a3, int *a4, int *a5, const void **a6, const unsigned __int8 **a7, int a8)
{
  int *v8; // r11@1
  int v9; // r4@1
  int *v10; // r9@1
  int *v11; // r10@1
  int v12; // r7@1
  char v13; // r6@1
  int v14; // r4@1
  void (__fastcall *v15)(char *, int, signed int); // r3@1
  void *v16; // r0@7
  unsigned int *v17; // r2@9
  signed int v18; // r1@11
  char v19; // [sp+14h] [bp-3Ch]@2
  void (*v20)(void); // [sp+1Ch] [bp-34h]@1
  int v21; // [sp+20h] [bp-30h]@2
  int v22; // [sp+24h] [bp-2Ch]@1

  v8 = a2;
  v9 = a1;
  v10 = a4;
  v11 = a3;
  v12 = sub_119C9E8(a6, "fake_receipt");
  Util::base64_encode((Util *)&v22, *a7, *((_DWORD *)*a7 - 3), 1);
  v13 = 0;
  v14 = *(_DWORD *)(v9 + 20);
  v20 = 0;
  v15 = *(void (__fastcall **)(char *, int, signed int))(a8 + 8);
  if ( v15 )
  {
    v15(&v19, a8, 2);
    v21 = *(_DWORD *)(a8 + 12);
    v20 = *(void (**)(void))(a8 + 8);
  }
  if ( !v12 )
    v13 = 1;
  RealmsPaymentService::sendReceiptFromWindowsStore(v14, v8, v11, v10, a5, &v22, v13, (int)&v19);
  if ( v20 )
    v20();
  v16 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v22 - 4);
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
}


signed int __fastcall RealmsTransactionHandler::tryCheckPurchaseFulfillment(unsigned int a1, unsigned __int64 *a2, int *a3)
{
  signed int v3; // r6@1
  int *v4; // r5@1
  int *v5; // r9@1
  int v6; // r4@4
  int v7; // r8@4
  int v8; // r0@5
  unsigned int *v9; // r2@6
  unsigned int v10; // r1@8
  void *v11; // r7@18
  int v12; // r0@22
  int *v13; // r0@22
  int v14; // r0@24
  int v15; // r0@25
  void *v16; // r0@27
  int v17; // r4@28
  int v18; // r0@29
  unsigned int *v19; // r2@30
  unsigned int v20; // r1@32
  unsigned int *v22; // r2@42
  signed int v23; // r1@44
  int *v24; // [sp+0h] [bp-58h]@2
  unsigned int v25; // [sp+4h] [bp-54h]@2
  int v26; // [sp+8h] [bp-50h]@22
  int v27; // [sp+Ch] [bp-4Ch]@25
  int v28; // [sp+10h] [bp-48h]@24
  int v29; // [sp+14h] [bp-44h]@19
  int v30; // [sp+18h] [bp-40h]@4
  int v31; // [sp+1Ch] [bp-3Ch]@4
  void *v32; // [sp+24h] [bp-34h]@1
  void *v33; // [sp+28h] [bp-30h]@1
  int v34; // [sp+2Ch] [bp-2Ch]@1

  v3 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v5 = (int *)(*a2 >> 32);
  v4 = (int *)*a2;
  if ( v4 == v5 )
    return v3;
  v24 = a3;
  v25 = a1;
  do
  {
    if ( Offer::getProductType((Offer *)*v4) == 5 )
    {
      Offer::getUnknownPurchases((Offer *)&v30, *v4);
      std::vector<std::weak_ptr<Purchase>,std::allocator<std::weak_ptr<Purchase>>>::_M_range_insert<__gnu_cxx::__normal_iterator<std::weak_ptr<Purchase>*,std::vector<std::weak_ptr<Purchase>,std::allocator<std::weak_ptr<Purchase>>>>>(
        (signed int)&v32,
        (int)v33,
        v30,
        v31);
      v7 = v31;
      v6 = v30;
      if ( v30 != v31 )
      {
        do
        {
          v8 = *(_DWORD *)(v6 + 4);
          if ( v8 )
          {
            v9 = (unsigned int *)(v8 + 8);
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
              (*(void (**)(void))(*(_DWORD *)v8 + 12))();
          }
          v6 += 8;
        }
        while ( v6 != v7 );
        v6 = v30;
      }
      if ( v6 )
        operator delete((void *)v6);
    }
    ++v4;
  }
  while ( v4 != v5 );
  v11 = v33;
  if ( v32 != v33 )
    GameStore::getStoreId((GameStore *)&v29, *(_DWORD *)(v25 + 8), 0);
    if ( sub_119C9E8((const void **)&v29, "android.googleplay") )
      if ( sub_119C9E8((const void **)&v29, "android.amazonappstore") )
        v3 = 0;
        if ( sub_119C9E8((const void **)&v29, "ios.store") )
          goto LABEL_27;
        v12 = *v24;
        *v24 = 0;
        v26 = v12;
        RealmsTransactionHandler::_checkReceiptFulfillment_iOSAppStore(v25, (unsigned __int64 *)&v32, &v26);
        v13 = &v26;
      else
        v15 = *v24;
        v27 = v15;
        RealmsTransactionHandler::_checkReceiptFulfillment_AmazonAppStore(v25, (unsigned __int64 *)&v32, &v27);
        v13 = &v27;
    else
      v14 = *v24;
      *v24 = 0;
      v28 = v14;
      RealmsTransactionHandler::_checkReceiptFulfillment_GooglePlayStore(v25, (unsigned __int64 *)&v32, &v28);
      v13 = &v28;
    std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(v13);
    v3 = 1;
LABEL_27:
    v16 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
        __dmb();
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    v11 = v33;
    v17 = (int)v32;
    if ( v32 != v33 )
      do
        v18 = *(_DWORD *)(v17 + 4);
        if ( v18 )
          v19 = (unsigned int *)(v18 + 8);
          if ( &pthread_create )
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          else
            v20 = (*v19)--;
          if ( v20 == 1 )
            (*(void (**)(void))(*(_DWORD *)v18 + 12))();
        v17 += 8;
      while ( (void *)v17 != v11 );
      v11 = v32;
    goto LABEL_39;
LABEL_39:
  if ( v11 )
    operator delete(v11);
  return v3;
}


void __fastcall RealmsTransactionHandler::_handleCheckReceiptFulfillment(int a1, unsigned __int64 *a2, int a3, unsigned __int64 *a4, int (__fastcall *a5)(unsigned int, int))
{
  RealmsTransactionHandler::_handleCheckReceiptFulfillment(a1, a2, a3, a4, a5);
}


signed int __fastcall RealmsTransactionHandler::isIdle(RealmsTransactionHandler *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 4);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


void __fastcall RealmsTransactionHandler::_checkReceiptFulfillment_AmazonAppStore(int a1, unsigned __int64 *a2, int *a3)
{
  RealmsTransactionHandler::_checkReceiptFulfillment_AmazonAppStore(a1, a2, a3);
}


void __fastcall RealmsTransactionHandler::_createRealm_OculusStore(int a1, int *a2, int *a3, int *a4, const void **a5, int a6)
{
  RealmsTransactionHandler::_createRealm_OculusStore(a1, a2, a3, a4, a5, a6);
}


signed int __fastcall RealmsTransactionHandler::tryParseRealmsTransactionPayload(int a1, const void ***a2, const void **a3, const void **a4, const void **a5)
{
  int *v5; // r6@1
  int v6; // r9@1
  const void **v7; // r10@1
  const void ***v8; // r4@1
  const Json::Value *v9; // r0@2
  signed int v10; // r7@3
  void *v11; // r0@3
  void *v12; // r0@4
  const Json::Value *v13; // r0@6
  signed int v14; // r7@7
  void *v15; // r0@9
  void *v16; // r0@11
  void *v17; // r0@16
  char *v18; // r1@17
  Json::Value *v19; // r0@19
  int v20; // r4@20
  signed int v21; // r7@20
  signed int v22; // r4@21
  void *v23; // r0@23
  void *v24; // r0@25
  Json::Value *v25; // r0@26
  int v26; // r4@27
  signed int v27; // r6@27
  void *v28; // r0@29
  void *v29; // r0@31
  Json::Value *v30; // r0@32
  int v31; // r4@33
  signed int v32; // r5@33
  void *v33; // r0@35
  void *v34; // r0@37
  char *v35; // r0@40
  unsigned int *v37; // r2@43
  signed int v38; // r1@45
  unsigned int *v39; // r2@51
  signed int v40; // r1@53
  unsigned int *v41; // r2@55
  signed int v42; // r1@57
  unsigned int *v43; // r2@59
  signed int v44; // r1@61
  unsigned int *v45; // r2@63
  signed int v46; // r1@65
  unsigned int *v47; // r2@67
  signed int v48; // r1@69
  unsigned int *v49; // r2@71
  signed int v50; // r1@73
  unsigned int *v51; // r2@75
  signed int v52; // r1@77
  unsigned int *v53; // r2@83
  signed int v54; // r1@85
  unsigned int *v55; // r2@91
  signed int v56; // r1@93
  unsigned int *v57; // r2@110
  signed int v58; // r1@112
  unsigned int *v59; // r2@126
  signed int v60; // r1@128
  int v61; // [sp+8h] [bp-1A8h]@33
  int v62; // [sp+Ch] [bp-1A4h]@33
  int v63; // [sp+18h] [bp-198h]@27
  int v64; // [sp+1Ch] [bp-194h]@27
  int v65; // [sp+28h] [bp-188h]@20
  int v66; // [sp+2Ch] [bp-184h]@20
  char v67; // [sp+30h] [bp-180h]@18
  char v68; // [sp+44h] [bp-16Ch]@18
  int v69; // [sp+B4h] [bp-FCh]@16
  int v70; // [sp+C0h] [bp-F0h]@7
  int v71; // [sp+C4h] [bp-ECh]@7
  char v72; // [sp+C8h] [bp-E8h]@6
  int v73; // [sp+E0h] [bp-D0h]@3
  int v74; // [sp+E4h] [bp-CCh]@3
  char v75; // [sp+E8h] [bp-C8h]@3
  char v76; // [sp+F8h] [bp-B8h]@2
  char v77; // [sp+108h] [bp-A8h]@1
  char v78; // [sp+118h] [bp-98h]@1
  char *v79; // [sp+188h] [bp-28h]@1

  v5 = (int *)a3;
  v6 = a1;
  v7 = a4;
  v8 = a2;
  sub_119CA68(a3, 0, *((_BYTE **)*a3 - 3), 0);
  sub_119CA68(v7, 0, *((_BYTE **)*v7 - 3), 0);
  sub_119CA68(a5, 0, *((_BYTE **)*a5 - 3), 0);
  v79 = (char *)&unk_28898CC;
  Json::Reader::Reader((Json::Reader *)&v78);
  Json::Value::Value(&v77, 0);
  if ( Json::Reader::parse((int)&v78, (int *)*v8 + 2, (int)&v77, 1) == 1 )
  {
    v9 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v77, "originaljson");
    Json::Value::Value((Json::Value *)&v76, v9);
    if ( Json::Value::isString((Json::Value *)&v76) == 1 )
    {
      Json::Value::Value(&v75, 0);
      sub_119C884((void **)&v73, (const char *)&unk_257BC67);
      Json::Value::asString(&v74, (int)&v76, &v73);
      v10 = Json::Reader::parse((int)&v78, &v74, (int)&v75, 1);
      v11 = (void *)(v74 - 12);
      if ( (int *)(v74 - 12) != &dword_28898C0 )
      {
        v47 = (unsigned int *)(v74 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
        }
        else
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v11);
      }
      v12 = (void *)(v73 - 12);
      if ( (int *)(v73 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v73 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v12);
      if ( v10 == 1 )
        v13 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v75, "developerPayload");
        Json::Value::Value((Json::Value *)&v72, v13);
        if ( Json::Value::isString((Json::Value *)&v72) == 1 )
          sub_119C884((void **)&v70, (const char *)&unk_257BC67);
          Json::Value::asString(&v71, (int)&v72, &v70);
          v14 = 1;
          sub_119C884((void **)&v71, (const char *)&unk_257BC67);
          v14 = 0;
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&v79,
          &v71);
        v15 = (void *)(v71 - 12);
        if ( (int *)(v71 - 12) != &dword_28898C0 )
          v57 = (unsigned int *)(v71 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v58 = __ldrex(v57);
            while ( __strex(v58 - 1, v57) );
          }
          else
            v58 = (*v57)--;
          if ( v58 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v15);
        if ( v14 == 1 )
          v16 = (void *)(v70 - 12);
          if ( (int *)(v70 - 12) != &dword_28898C0 )
            v59 = (unsigned int *)(v70 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v60 = __ldrex(v59);
              while ( __strex(v60 - 1, v59) );
            }
            else
              v60 = (*v59)--;
            if ( v60 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v16);
        Json::Value::~Value((Json::Value *)&v72);
      Json::Value::~Value((Json::Value *)&v75);
    }
    Json::Value::~Value((Json::Value *)&v76);
  }
  Json::Value::~Value((Json::Value *)&v77);
  Json::Reader::~Reader((Json::Reader *)&v78);
  if ( *((_DWORD *)v79 - 3) )
    goto LABEL_140;
  PurchaseCache::tryGetPayloadFromRecord(&v69, *(_DWORD *)(v6 + 12), *v8);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v79,
    &v69);
  v17 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v69 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
    else
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = v79;
LABEL_140:
    Json::Reader::Reader((Json::Reader *)&v68);
    Json::Value::Value(&v67, 0);
    if ( Json::Reader::parse((int)&v68, (int *)&v79, (int)&v67, 1) == 1 )
      v19 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v67, "xuid");
      if ( Json::Value::isString(v19) == 1 )
        v20 = Json::Value::operator[]((Json::Value *)&v67, "xuid");
        sub_119C884((void **)&v65, (const char *)&unk_257BC67);
        Json::Value::asString(&v66, v20, &v65);
        v21 = 1;
      else
        sub_119C884((void **)&v66, (const char *)&unk_257BC67);
        v21 = 0;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v66);
      v23 = (void *)(v66 - 12);
      if ( (int *)(v66 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v66 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      if ( v21 == 1 )
        v24 = (void *)(v65 - 12);
        if ( (int *)(v65 - 12) != &dword_28898C0 )
          v51 = (unsigned int *)(v65 - 4);
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
            v52 = (*v51)--;
          if ( v52 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v24);
      v25 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v67, "world_name");
      if ( Json::Value::isString(v25) == 1 )
        v26 = Json::Value::operator[]((Json::Value *)&v67, "world_name");
        sub_119C884((void **)&v63, (const char *)&unk_257BC67);
        Json::Value::asString(&v64, v26, &v63);
        v27 = 1;
        sub_119C884((void **)&v64, (const char *)&unk_257BC67);
        v27 = 0;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v7,
        &v64);
      v28 = (void *)(v64 - 12);
      if ( (int *)(v64 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v64 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v28);
      if ( v27 == 1 )
        v29 = (void *)(v63 - 12);
        if ( (int *)(v63 - 12) != &dword_28898C0 )
          v53 = (unsigned int *)(v63 - 4);
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
            v54 = (*v53)--;
          if ( v54 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v29);
      v30 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v67, "subscription_id");
      if ( Json::Value::isString(v30) == 1 )
        v31 = Json::Value::operator[]((Json::Value *)&v67, "subscription_id");
        sub_119C884((void **)&v61, (const char *)&unk_257BC67);
        Json::Value::asString(&v62, v31, &v61);
        v32 = 1;
        sub_119C884((void **)&v62, (const char *)&unk_257BC67);
        v32 = 0;
        (int *)a5,
        &v62);
      v33 = (void *)(v62 - 12);
      if ( (int *)(v62 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v62 - 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v33);
      if ( v32 == 1 )
        v34 = (void *)(v61 - 12);
        if ( (int *)(v61 - 12) != &dword_28898C0 )
          v55 = (unsigned int *)(v61 - 4);
              v56 = __ldrex(v55);
            while ( __strex(v56 - 1, v55) );
            v56 = (*v55)--;
          if ( v56 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v34);
      v22 = 1;
      v22 = 0;
    Json::Value::~Value((Json::Value *)&v67);
    Json::Reader::~Reader((Json::Reader *)&v68);
    v18 = v79;
  else
    v22 = 0;
  v35 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v18 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  return v22;
}


void __fastcall RealmsTransactionHandler::_createRealm_GooglePlayStore(int a1, int *a2, int *a3, int *a4, const void **a5, int a6)
{
  int *v6; // r6@1
  int v7; // r4@1
  int *v8; // r9@1
  int v9; // r7@1
  char v10; // r8@1
  int v11; // r4@1
  void (__fastcall *v12)(char *, int, signed int); // r3@1
  char *v13; // r0@7
  char *v14; // r0@8
  char *v15; // r0@9
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  int *v22; // [sp+10h] [bp-48h]@1
  char v23; // [sp+14h] [bp-44h]@2
  void (*v24)(void); // [sp+1Ch] [bp-3Ch]@1
  int v25; // [sp+20h] [bp-38h]@2
  char *v26; // [sp+24h] [bp-34h]@1
  char *v27; // [sp+28h] [bp-30h]@1
  char *v28; // [sp+2Ch] [bp-2Ch]@1

  v6 = a2;
  v7 = a1;
  v22 = a4;
  v8 = a3;
  v9 = sub_119C9E8(a5, "fake_receipt");
  v28 = (char *)&unk_28898CC;
  v26 = (char *)&unk_28898CC;
  v27 = (char *)&unk_28898CC;
  sub_10DBC44((int *)a5, (int *)&v28, (int *)&v27, (int *)&v26);
  v10 = 0;
  v11 = *(_DWORD *)(v7 + 20);
  v24 = 0;
  v12 = *(void (__fastcall **)(char *, int, signed int))(a6 + 8);
  if ( v12 )
  {
    v12(&v23, a6, 2);
    v25 = *(_DWORD *)(a6 + 12);
    v24 = *(void (**)(void))(a6 + 8);
  }
  if ( !v9 )
    v10 = 1;
  RealmsPaymentService::sendReceiptFromGooglePlayStore(v11, v6, v8, v22, (int *)&v28, (int *)&v27, v10, (int)&v23);
  if ( v24 )
    v24();
  v13 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = v27 - 12;
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v27 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v28 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
}


void __fastcall RealmsTransactionHandler::~RealmsTransactionHandler(RealmsTransactionHandler *this)
{
  RealmsTransactionHandler *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DF9AC;
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 5) = 0;
  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr((_DWORD *)v1 + 4);
  TransactionHandler::~TransactionHandler(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall RealmsTransactionHandler::update(RealmsTransactionHandler *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 5);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 8))();
  return result;
}


void __fastcall RealmsTransactionHandler::_createRealm_OculusStore(int a1, int *a2, int *a3, int *a4, const void **a5, int a6)
{
  int *v6; // r11@1
  int v7; // r8@1
  int *v8; // r9@1
  int *v9; // r10@1
  Json::Value *v10; // r0@2
  Json::Value *v11; // r0@3
  int v12; // r1@3
  int v13; // r5@3 OVERLAPPED
  int v14; // r6@3 OVERLAPPED
  unsigned __int64 v15; // kr00_8@3
  Json::Value *v16; // r0@6
  int v17; // r7@7
  signed int v18; // r7@7
  void *v19; // r0@9
  void *v20; // r0@11
  Json::Value *v21; // r0@12
  int v22; // r7@13
  signed int v23; // r7@13
  void *v24; // r0@15
  void *v25; // r0@17
  int v26; // r4@18
  void (__fastcall *v27)(char *, int, signed int); // r3@18
  char v28; // r1@20
  char *v29; // r0@24
  char *v30; // r0@25
  unsigned int *v31; // r2@27
  signed int v32; // r1@29
  unsigned int *v33; // r2@31
  signed int v34; // r1@33
  unsigned int *v35; // r2@35
  signed int v36; // r1@37
  unsigned int *v37; // r2@47
  signed int v38; // r1@49
  unsigned int *v39; // r2@51
  signed int v40; // r1@53
  unsigned int *v41; // r2@59
  signed int v42; // r1@61
  int v43; // [sp+4h] [bp-FCh]@0
  int v44; // [sp+1Ch] [bp-E4h]@1
  char v45; // [sp+20h] [bp-E0h]@19
  void (*v46)(void); // [sp+28h] [bp-D8h]@18
  int v47; // [sp+2Ch] [bp-D4h]@19
  char *v48; // [sp+30h] [bp-D0h]@1
  char *v49; // [sp+34h] [bp-CCh]@1
  int v50; // [sp+40h] [bp-C0h]@13
  int v51; // [sp+44h] [bp-BCh]@13
  int v52; // [sp+50h] [bp-B0h]@7
  int v53; // [sp+54h] [bp-ACh]@7
  char v54; // [sp+58h] [bp-A8h]@1
  char v55; // [sp+68h] [bp-98h]@1

  v6 = a2;
  v7 = a1;
  v8 = a4;
  v9 = a3;
  v44 = sub_119C9E8(a5, "fake_receipt");
  v48 = (char *)&unk_28898CC;
  v49 = (char *)&unk_28898CC;
  Json::Reader::Reader((Json::Reader *)&v55);
  Json::Value::Value(&v54, 0);
  if ( Json::Reader::parse((int)&v55, (int *)a5, (int)&v54, 1) == 1 )
  {
    v10 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v54, "purchase_id");
    if ( Json::Value::isUInt(v10) == 1 )
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v54, "purchase_id");
      v15 = Json::Value::asUInt64(v11, v12, 0LL);
      v14 = HIDWORD(v15);
      v13 = v15;
    }
    else
      v13 = 0;
      v14 = 0;
    v16 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v54, "user_token");
    if ( Json::Value::isString(v16) == 1 )
      v17 = Json::Value::operator[]((Json::Value *)&v54, "user_token");
      sub_119C884((void **)&v52, (const char *)&unk_257BC67);
      Json::Value::asString(&v53, v17, &v52);
      v18 = 1;
      sub_119C884((void **)&v53, (const char *)&unk_257BC67);
      v18 = 0;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v49,
      &v53);
    v19 = (void *)(v53 - 12);
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v53 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
      }
      else
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    if ( v18 == 1 )
      v20 = (void *)(v52 - 12);
      if ( (int *)(v52 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v52 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
        }
        else
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
    v21 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v54, "platform");
    if ( Json::Value::isString(v21) == 1 )
      v22 = Json::Value::operator[]((Json::Value *)&v54, "platform");
      sub_119C884((void **)&v50, (const char *)&unk_257BC67);
      Json::Value::asString(&v51, v22, &v50);
      v23 = 1;
      sub_119C884((void **)&v51, (const char *)&unk_257BC67);
      v23 = 0;
      (int *)&v48,
      &v51);
    v24 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v51 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v24);
    if ( v23 == 1 )
      v25 = (void *)(v50 - 12);
      if ( (int *)(v50 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v50 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v25);
  }
  else
    v13 = 0;
    v14 = 0;
  Json::Value::~Value((Json::Value *)&v54);
  Json::Reader::~Reader((Json::Reader *)&v55);
  v26 = *(_DWORD *)(v7 + 20);
  v46 = 0;
  v27 = *(void (__fastcall **)(char *, int, signed int))(a6 + 8);
  if ( v27 )
    v27(&v45, a6, 2);
    v47 = *(_DWORD *)(a6 + 12);
    v46 = *(void (**)(void))(a6 + 8);
  v28 = 0;
  if ( !v44 )
    v28 = 1;
  RealmsPaymentService::sendReceiptFromOculusStore(
    v26,
    v6,
    v9,
    v8,
    (int *)&v49,
    v43,
    *(__int64 *)&v13,
    (int *)&v48,
    v28,
    (int)&v45);
  if ( v46 )
    v46();
  v29 = v48 - 12;
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v48 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  v30 = v49 - 12;
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v49 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
}


void __fastcall RealmsTransactionHandler::_createRealm_AmazonAppStore(int a1, int *a2, int *a3, int *a4, const void **a5, int a6)
{
  int *v6; // r6@1
  int v7; // r4@1
  int *v8; // r9@1
  int v9; // r7@1
  char v10; // r8@1
  int v11; // r4@1
  void (__fastcall *v12)(char *, int, signed int); // r3@1
  char *v13; // r0@7
  char *v14; // r0@8
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  int *v19; // [sp+14h] [bp-44h]@1
  char v20; // [sp+18h] [bp-40h]@2
  void (*v21)(void); // [sp+20h] [bp-38h]@1
  int v22; // [sp+24h] [bp-34h]@2
  char *v23; // [sp+28h] [bp-30h]@1
  char *v24; // [sp+2Ch] [bp-2Ch]@1

  v6 = a2;
  v7 = a1;
  v19 = a4;
  v8 = a3;
  v9 = sub_119C9E8(a5, "fake_receipt");
  v23 = (char *)&unk_28898CC;
  v24 = (char *)&unk_28898CC;
  sub_10DC3E0((int *)a5, (int *)&v24, (int *)&v23);
  v10 = 0;
  v11 = *(_DWORD *)(v7 + 20);
  v21 = 0;
  v12 = *(void (__fastcall **)(char *, int, signed int))(a6 + 8);
  if ( v12 )
  {
    v12(&v20, a6, 2);
    v22 = *(_DWORD *)(a6 + 12);
    v21 = *(void (**)(void))(a6 + 8);
  }
  if ( !v9 )
    v10 = 1;
  RealmsPaymentService::sendReceiptFromAmazonAppStore(v11, v6, v8, v19, (int *)&v24, (int *)&v23, v10, (int)&v20);
  if ( v21 )
    v21();
  v13 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v23 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = v24 - 12;
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v24 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
}


void __fastcall RealmsTransactionHandler::_handleCheckReceiptFulfillment(int a1, unsigned __int64 *a2, int a3, unsigned __int64 *a4, int (__fastcall *a5)(unsigned int, int))
{
  int v5; // r6@2
  int v6; // r8@3
  int j; // r11@3
  int v8; // r10@6
  unsigned int v9; // r1@7
  unsigned int *v10; // r0@7
  unsigned int v11; // r2@10
  unsigned int v12; // r3@11
  unsigned int v13; // r1@12
  unsigned int v14; // r7@12
  unsigned int *v15; // r4@20
  unsigned int v16; // r0@22
  int v17; // r4@30
  void *v18; // r0@30
  int v19; // r0@31
  unsigned int *v20; // r2@34
  signed int v21; // r1@36
  int i; // [sp+8h] [bp-40h]@2
  unsigned __int64 *v23; // [sp+Ch] [bp-3Ch]@1
  int v24; // [sp+10h] [bp-38h]@1
  int v25; // [sp+18h] [bp-30h]@30

  v23 = a2;
  v24 = a1;
  if ( a3 == 1 )
  {
    v5 = *a4;
    for ( i = *a4 >> 32; v5 != i; v5 += 32 )
    {
      v6 = *v23 >> 32;
      for ( j = *v23; j != v6; j += 8 )
      {
        v8 = *(_DWORD *)(j + 4);
        if ( v8 )
        {
          v9 = *(_DWORD *)(v8 + 4);
          v10 = (unsigned int *)(v8 + 4);
          while ( v9 )
          {
            __dmb();
            v11 = __ldrex(v10);
            if ( v11 == v9 )
            {
              v12 = __strex(v9 + 1, v10);
              v9 = v11;
              if ( !v12 )
              {
                __dmb();
                v13 = *v10;
                v14 = *(_DWORD *)j;
                if ( !*v10 )
                  v14 = *v10;
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v13 = __ldrex(v10);
                  while ( __strex(v13 - 1, v10) );
                }
                else
                  *v10 = v13 - 1;
                if ( v13 == 1 )
                  v15 = (unsigned int *)(v8 + 8);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
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
                    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
                if ( v14 && a5(v14, v5) == 1 )
                  if ( *(_BYTE *)(v5 + 28) )
                    v17 = *(_DWORD *)(v24 + 12);
                    sub_119C884((void **)&v25, (const char *)&unk_257BC67);
                    PurchaseCache::updateRecord(v17, (const void **)v14, &v25, 1);
                    v18 = (void *)(v25 - 12);
                    if ( (int *)(v25 - 12) != &dword_28898C0 )
                    {
                      v20 = (unsigned int *)(v25 - 4);
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
                        j_j_j_j_j__ZdlPv_9_1(v18);
                    }
                    GameStore::acknowledgePurchase(*(_DWORD *)(v24 + 8));
                    v19 = *(_BYTE *)(v5 + 28);
                    v19 = 0;
                  *(_DWORD *)(v14 + 16) = v19;
                break;
              }
            }
            else
              __clrex();
          }
        }
      }
    }
  }
  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::reset((int *)(v24 + 16), 0);
}


void __fastcall RealmsTransactionHandler::_checkReceiptFulfillment_GooglePlayStore(int a1, unsigned __int64 *a2, int *a3)
{
  RealmsTransactionHandler::_checkReceiptFulfillment_GooglePlayStore(a1, a2, a3);
}


void __fastcall RealmsTransactionHandler::_checkReceiptFulfillment_AmazonAppStore(int a1, unsigned __int64 *a2, int *a3)
{
  int *v3; // r8@1
  int v4; // r5@1
  int i; // r9@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@19
  signed int v11; // r1@21
  unsigned int *v12; // r2@23
  signed int v13; // r1@25
  int v14; // r7@35
  unsigned int v15; // r1@36
  unsigned int *v16; // r0@36
  unsigned int v17; // r2@39
  unsigned int v18; // r3@40
  unsigned int v19; // r1@41
  unsigned int v20; // r4@41
  int *v21; // r5@51
  unsigned int *v22; // r8@51
  unsigned int v23; // r0@53
  char **v24; // r0@60
  char *v25; // r1@61
  char *v26; // r0@63
  char *v27; // r0@64
  char *v28; // r0@65
  char *v29; // r0@66
  char *v30; // r10@68
  int v31; // r1@68
  int v32; // r1@68 OVERLAPPED
  int v33; // r2@68 OVERLAPPED
  int v34; // r8@68
  signed int v35; // r0@68
  unsigned int v36; // r4@71
  int v37; // r12@72
  char *v38; // r6@72
  int v39; // r5@73
  unsigned int *v40; // r5@74
  unsigned int v41; // r4@76
  char *v42; // r7@81
  _DWORD *v43; // r9@81
  unsigned int v44; // r5@81
  char *v45; // r1@85
  char *v46; // r2@85
  int v47; // r3@86
  unsigned int *v48; // r3@87
  unsigned int v49; // r5@89
  __int64 v50; // r0@94
  char *v51; // r6@97
  int v52; // r0@98
  unsigned int *v53; // r2@99
  unsigned int v54; // r1@101
  int v55; // r4@109
  char **v56; // r6@109
  unsigned int *v57; // r2@111
  signed int v58; // r1@113
  unsigned int *v59; // r2@115
  signed int v60; // r1@117
  int v61; // r1@127
  void *v62; // r0@127
  int *v63; // r0@128
  int v64; // [sp+0h] [bp-68h]@51
  unsigned __int64 *v65; // [sp+4h] [bp-64h]@1
  int v66; // [sp+8h] [bp-60h]@1
  _DWORD *v67; // [sp+14h] [bp-54h]@94
  void (*v68)(void); // [sp+1Ch] [bp-4Ch]@81
  char *v69; // [sp+24h] [bp-44h]@23
  char *v70; // [sp+28h] [bp-40h]@60
  char *v71; // [sp+2Ch] [bp-3Ch]@3
  char *v72; // [sp+30h] [bp-38h]@7
  char **v73; // [sp+34h] [bp-34h]@1
  char **v74; // [sp+38h] [bp-30h]@1
  char **v75; // [sp+3Ch] [bp-2Ch]@1

  v65 = a2;
  v66 = a1;
  v73 = 0;
  v74 = 0;
  v3 = a3;
  v75 = 0;
  v4 = *a2 >> 32;
  for ( i = *a2; i != v4; i += 8 )
  {
    v14 = *(_DWORD *)(i + 4);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 4);
      v16 = (unsigned int *)(v14 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v15 )
          {
            v20 = 0;
            goto LABEL_59;
          }
          __dmb();
          v17 = __ldrex(v16);
          if ( v17 == v15 )
            break;
          __clrex();
          v15 = v17;
        }
        v18 = __strex(v15 + 1, v16);
        v15 = v17;
      }
      while ( v18 );
      __dmb();
      v19 = *v16;
      v20 = *(_DWORD *)i;
      if ( !*v16 )
        v20 = *v16;
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v16);
        while ( __strex(v19 - 1, v16) );
      else
        *v16 = v19 - 1;
      if ( v19 == 1 )
        v64 = v4;
        v21 = v3;
        v22 = (unsigned int *)(v14 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
        if ( &pthread_create )
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        else
          v23 = (*v22)--;
        v3 = v21;
        if ( v23 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
        v4 = v64;
    }
    else
      v20 = 0;
LABEL_59:
    v71 = (char *)&unk_28898CC;
    v72 = (char *)&unk_28898CC;
    if ( sub_10DC3E0((int *)(v20 + 8), (int *)&v72, (int *)&v71) == 1 )
      sub_119C854((int *)&v69, (int *)&v72);
      sub_119C854((int *)&v70, (int *)&v71);
      v24 = v74;
      if ( v74 == v75 )
        std::vector<ReceiptData_Amazon,std::allocator<ReceiptData_Amazon>>::_M_emplace_back_aux<ReceiptData_Amazon>(
          (unsigned __int64 *)&v73,
          (int)&v69);
        v25 = v70;
        *v74 = v69;
        v69 = (char *)&unk_28898CC;
        v24[1] = v70;
        v70 = (char *)&unk_28898CC;
        v25 = (char *)&unk_28898CC;
        v74 = v24 + 2;
      v26 = v25 - 12;
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v25 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v26);
      v27 = v69 - 12;
      if ( (int *)(v69 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v69 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v27);
    v28 = v71 - 12;
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v71 - 4);
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v28);
    v29 = v72 - 12;
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v72 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v29);
  }
  v30 = 0;
  v31 = *v3;
  *v3 = 0;
  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::reset((int *)(v66 + 16), v31);
  *(_QWORD *)&v32 = *v65;
  v34 = *(_DWORD *)(v66 + 20);
  v35 = v33 - v32;
  if ( 0 != (v33 - v32) >> 3 )
    if ( (unsigned int)(v35 >> 3) >= 0x20000000 )
      sub_119C874();
    v30 = (char *)operator new(v35);
    *(_QWORD *)&v32 = *v65;
  v36 = (unsigned int)v30;
  if ( v32 != v33 )
    v37 = -v32;
    v38 = v30;
    do
      *(_DWORD *)v38 = *(_DWORD *)v32;
      v39 = *(_DWORD *)(v32 + 4);
      *((_DWORD *)v38 + 1) = v39;
      if ( v39 )
        v40 = (unsigned int *)(v39 + 8);
            v41 = __ldrex(v40);
          while ( __strex(v41 + 1, v40) );
          ++*v40;
      v32 += 8;
      v38 += 8;
    while ( v32 != v33 );
    v36 = (unsigned int)&v30[((v33 - 8 + v37) & 0xFFFFFFF8) + 8];
  v42 = 0;
  v68 = 0;
  v43 = operator new(0x10u);
  *v43 = v66;
  v43[1] = 0;
  v43[2] = 0;
  v43[3] = 0;
  v44 = (signed int)(v36 - (_DWORD)v30) >> 3;
  if ( 0 != v44 )
    if ( v44 >= 0x20000000 )
    v42 = (char *)operator new(v36 - (_DWORD)v30);
  v43[1] = v42;
  v43[2] = v42;
  v43[3] = &v42[8 * v44];
  if ( v30 != (char *)v36 )
    v45 = v30;
    v46 = v42;
      *(_DWORD *)v46 = *(_DWORD *)v45;
      v47 = *((_DWORD *)v45 + 1);
      *((_DWORD *)v46 + 1) = v47;
      if ( v47 )
        v48 = (unsigned int *)(v47 + 8);
            v49 = __ldrex(v48);
          while ( __strex(v49 + 1, v48) );
          ++*v48;
      v45 += 8;
      v46 += 8;
    while ( v45 != (char *)v36 );
    v42 += ((v36 - 8 - (_DWORD)v30) & 0xFFFFFFF8) + 8;
  LODWORD(v50) = sub_10DDC78;
  HIDWORD(v50) = sub_10DDBFC;
  v67 = v43;
  *(_QWORD *)&v68 = v50;
  RealmsPaymentService::checkReceiptsForAmazonAppStore(v34, (__int64 *)&v73, (int)&v67);
  if ( v68 )
    v68();
    v51 = v30;
      v52 = *((_DWORD *)v51 + 1);
      if ( v52 )
        v53 = (unsigned int *)(v52 + 8);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 == 1 )
          (*(void (**)(void))(*(_DWORD *)v52 + 12))();
      v51 += 8;
    while ( v51 != (char *)v36 );
  if ( v30 )
    operator delete(v30);
  v56 = v74;
  v55 = (int)v73;
  if ( v73 != v74 )
      v61 = *(_DWORD *)(v55 + 4);
      v62 = (void *)(v61 - 12);
      if ( (int *)(v61 - 12) != &dword_28898C0 )
        v57 = (unsigned int *)(v61 - 4);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v62);
      v63 = (int *)(*(_DWORD *)v55 - 12);
      if ( v63 != &dword_28898C0 )
        v59 = (unsigned int *)(*(_DWORD *)v55 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v63);
      v55 += 8;
    while ( (char **)v55 != v56 );
    v55 = (int)v73;
  if ( v55 )
    operator delete((void *)v55);
}


int __fastcall RealmsTransactionHandler::checkRealmsPaymentService(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void (__fastcall *v4)(int *); // r3@2
  int result; // r0@4
  int v6; // [sp+0h] [bp-20h]@3
  int (*v7)(void); // [sp+8h] [bp-18h]@2
  int v8; // [sp+Ch] [bp-14h]@3

  v2 = *(_DWORD *)(a1 + 20);
  v3 = a2;
  if ( v2 )
  {
    v7 = 0;
    v4 = *(void (__fastcall **)(int *))(a2 + 8);
    if ( v4 )
    {
      v4(&v6);
      v8 = *(_DWORD *)(v3 + 12);
      v7 = *(int (**)(void))(v3 + 8);
    }
    result = RealmsPaymentService::getServiceStatus(v2, (int)&v6);
    if ( v7 )
      result = v7();
  }
  else
    if ( !*(_DWORD *)(a2 + 8) )
      sub_119C8E4();
    result = (*(int (__fastcall **)(int, _DWORD))(a2 + 12))(a2, 0);
  return result;
}


void __fastcall RealmsTransactionHandler::_createRealm_UWPStore(int a1, int *a2, int *a3, int *a4, int *a5, const void **a6, const unsigned __int8 **a7, int a8)
{
  RealmsTransactionHandler::_createRealm_UWPStore(a1, a2, a3, a4, a5, a6, a7, a8);
}


void __fastcall RealmsTransactionHandler::_checkReceiptFulfillment_GooglePlayStore(int a1, unsigned __int64 *a2, int *a3)
{
  char *v3; // r8@1
  unsigned __int64 *v4; // r10@1
  int v5; // r7@1
  int i; // r11@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  unsigned int *v13; // r2@27
  signed int v14; // r1@29
  unsigned int *v15; // r2@31
  signed int v16; // r1@33
  unsigned int *v17; // r2@35
  signed int v18; // r1@37
  int v19; // r5@51
  unsigned int v20; // r1@52
  unsigned int *v21; // r0@52
  unsigned int v22; // r2@55
  unsigned int v23; // r3@56
  unsigned int v24; // r1@57
  unsigned int v25; // r4@57
  unsigned __int64 *v26; // r8@67
  unsigned int *v27; // r10@67
  unsigned int v28; // r0@69
  char **v29; // r0@76
  char *v30; // r1@77
  char *v31; // r0@79
  char *v32; // r0@80
  char *v33; // r0@81
  char *v34; // r0@82
  char *v35; // r0@83
  char *v36; // r0@84
  int v37; // r1@86
  int v38; // r1@86 OVERLAPPED
  int v39; // r2@86 OVERLAPPED
  int v40; // r9@86
  signed int v41; // r0@86
  unsigned int v42; // r4@89
  int v43; // r12@90
  char *v44; // r6@90
  int v45; // r5@91
  unsigned int *v46; // r5@92
  unsigned int v47; // r4@94
  char *v48; // r7@99
  _DWORD *v49; // r10@99
  unsigned int v50; // r5@99
  char *v51; // r1@103
  char *v52; // r2@103
  int v53; // r3@104
  unsigned int *v54; // r3@105
  unsigned int v55; // r5@107
  __int64 v56; // r0@112
  char *v57; // r6@115
  int v58; // r0@116
  unsigned int *v59; // r2@117
  unsigned int v60; // r1@119
  int v61; // r4@127
  char **v62; // r6@127
  unsigned int *v63; // r2@129
  signed int v64; // r1@131
  unsigned int *v65; // r2@133
  signed int v66; // r1@135
  unsigned int *v67; // r2@137
  signed int v68; // r1@139
  int v69; // r1@153
  void *v70; // r0@153
  int v71; // r1@154
  void *v72; // r0@154
  int *v73; // r0@155
  int *v74; // [sp+0h] [bp-70h]@1
  int v75; // [sp+4h] [bp-6Ch]@1
  _DWORD *v76; // [sp+14h] [bp-5Ch]@112
  void (*v77)(void); // [sp+1Ch] [bp-54h]@99
  char *v78; // [sp+24h] [bp-4Ch]@35
  char *v79; // [sp+28h] [bp-48h]@31
  char *v80; // [sp+2Ch] [bp-44h]@76
  char *v81; // [sp+30h] [bp-40h]@3
  char *v82; // [sp+34h] [bp-3Ch]@7
  char *v83; // [sp+38h] [bp-38h]@11
  char **v84; // [sp+3Ch] [bp-34h]@1
  char **v85; // [sp+40h] [bp-30h]@1
  char **v86; // [sp+44h] [bp-2Ch]@1

  v3 = 0;
  v74 = a3;
  v75 = a1;
  v4 = a2;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v5 = *a2 >> 32;
  for ( i = *a2; i != v5; i += 8 )
  {
    v19 = *(_DWORD *)(i + 4);
    if ( v19 )
    {
      v20 = *(_DWORD *)(v19 + 4);
      v21 = (unsigned int *)(v19 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v20 )
          {
            v25 = 0;
            goto LABEL_75;
          }
          __dmb();
          v22 = __ldrex(v21);
          if ( v22 == v20 )
            break;
          __clrex();
          v20 = v22;
        }
        v23 = __strex(v20 + 1, v21);
        v20 = v22;
      }
      while ( v23 );
      __dmb();
      v24 = *v21;
      v25 = *(_DWORD *)i;
      if ( !*v21 )
        v25 = *v21;
      if ( &pthread_create )
        __dmb();
        do
          v24 = __ldrex(v21);
        while ( __strex(v24 - 1, v21) );
      else
        *v21 = v24 - 1;
      if ( v24 == 1 )
        v26 = v4;
        v27 = (unsigned int *)(v19 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
        if ( &pthread_create )
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        else
          v28 = (*v27)--;
        v4 = v26;
        if ( v28 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
        v3 = 0;
    }
    else
      v25 = 0;
LABEL_75:
    v83 = (char *)&unk_28898CC;
    v81 = (char *)&unk_28898CC;
    v82 = (char *)&unk_28898CC;
    if ( sub_10DBC44((int *)(v25 + 8), (int *)&v83, (int *)&v82, (int *)&v81) == 1 )
      sub_119C854((int *)&v78, (int *)&v83);
      sub_119C854((int *)&v79, (int *)&v82);
      sub_119C854((int *)&v80, (int *)&v81);
      v29 = v85;
      if ( v85 == v86 )
        std::vector<ReceiptData_Google,std::allocator<ReceiptData_Google>>::_M_emplace_back_aux<ReceiptData_Google>(
          &v84,
          (int)&v78);
        v30 = v80;
        *v85 = v78;
        v78 = (char *)&unk_28898CC;
        v29[1] = v79;
        v79 = (char *)&unk_28898CC;
        v29[2] = v80;
        v80 = (char *)&unk_28898CC;
        v30 = (char *)&unk_28898CC;
        v85 = v29 + 3;
      v31 = v30 - 12;
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v30 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v31);
      v32 = v79 - 12;
      if ( (int *)(v79 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v79 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v32);
      v33 = v78 - 12;
      if ( (int *)(v78 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v78 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v33);
    v34 = v81 - 12;
    if ( (int *)(v81 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v81 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v34);
    v35 = v82 - 12;
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v82 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v35);
    v36 = v83 - 12;
    if ( (int *)(v83 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v83 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v36);
  }
  v37 = *v74;
  *v74 = 0;
  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::reset((int *)(v75 + 16), v37);
  *(_QWORD *)&v38 = *v4;
  v40 = *(_DWORD *)(v75 + 20);
  v41 = v39 - v38;
  if ( 0 != (v39 - v38) >> 3 )
    if ( (unsigned int)(v41 >> 3) >= 0x20000000 )
      sub_119C874();
    v3 = (char *)operator new(v41);
    *(_QWORD *)&v38 = *v4;
  v42 = (unsigned int)v3;
  if ( v38 != v39 )
    v43 = -v38;
    v44 = v3;
    do
      *(_DWORD *)v44 = *(_DWORD *)v38;
      v45 = *(_DWORD *)(v38 + 4);
      *((_DWORD *)v44 + 1) = v45;
      if ( v45 )
        v46 = (unsigned int *)(v45 + 8);
            v47 = __ldrex(v46);
          while ( __strex(v47 + 1, v46) );
          ++*v46;
      v38 += 8;
      v44 += 8;
    while ( v38 != v39 );
    v42 = (unsigned int)&v3[((v39 - 8 + v43) & 0xFFFFFFF8) + 8];
  v48 = 0;
  v77 = 0;
  v49 = operator new(0x10u);
  *v49 = v75;
  v49[1] = 0;
  v49[2] = 0;
  v49[3] = 0;
  v50 = (signed int)(v42 - (_DWORD)v3) >> 3;
  if ( 0 != v50 )
    if ( v50 >= 0x20000000 )
    v48 = (char *)operator new(v42 - (_DWORD)v3);
  v49[1] = v48;
  v49[2] = v48;
  v49[3] = &v48[8 * v50];
  if ( v3 != (char *)v42 )
    v51 = v3;
    v52 = v48;
      *(_DWORD *)v52 = *(_DWORD *)v51;
      v53 = *((_DWORD *)v51 + 1);
      *((_DWORD *)v52 + 1) = v53;
      if ( v53 )
        v54 = (unsigned int *)(v53 + 8);
            v55 = __ldrex(v54);
          while ( __strex(v55 + 1, v54) );
          ++*v54;
      v51 += 8;
      v52 += 8;
    while ( v51 != (char *)v42 );
    v48 += ((v42 - 8 - (_DWORD)v3) & 0xFFFFFFF8) + 8;
  LODWORD(v56) = sub_10DD4A0;
  HIDWORD(v56) = sub_10DD424;
  v76 = v49;
  *(_QWORD *)&v77 = v56;
  RealmsPaymentService::checkReceiptsForGooglePlayStore(v40, (__int64 *)&v84, (int)&v76);
  if ( v77 )
    v77();
    v57 = v3;
      v58 = *((_DWORD *)v57 + 1);
      if ( v58 )
        v59 = (unsigned int *)(v58 + 8);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 == 1 )
          (*(void (**)(void))(*(_DWORD *)v58 + 12))();
      v57 += 8;
    while ( v57 != (char *)v42 );
  if ( v3 )
    operator delete(v3);
  v62 = v85;
  v61 = (int)v84;
  if ( v84 != v85 )
      v69 = *(_DWORD *)(v61 + 8);
      v70 = (void *)(v69 - 12);
      if ( (int *)(v69 - 12) != &dword_28898C0 )
        v63 = (unsigned int *)(v69 - 4);
            v64 = __ldrex(v63);
          while ( __strex(v64 - 1, v63) );
          v64 = (*v63)--;
        if ( v64 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v70);
      v71 = *(_DWORD *)(v61 + 4);
      v72 = (void *)(v71 - 12);
      if ( (int *)(v71 - 12) != &dword_28898C0 )
        v65 = (unsigned int *)(v71 - 4);
            v66 = __ldrex(v65);
          while ( __strex(v66 - 1, v65) );
          v66 = (*v65)--;
        if ( v66 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v72);
      v73 = (int *)(*(_DWORD *)v61 - 12);
      if ( v73 != &dword_28898C0 )
        v67 = (unsigned int *)(*(_DWORD *)v61 - 4);
            v68 = __ldrex(v67);
          while ( __strex(v68 - 1, v67) );
          v68 = (*v67)--;
        if ( v68 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v73);
      v61 += 12;
    while ( (char **)v61 != v62 );
    v61 = (int)v84;
  if ( v61 )
    operator delete((void *)v61);
}
