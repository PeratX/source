

signed int __fastcall RemixPreviewScreenController::RemixUploadData::getTagCount(RemixPreviewScreenController::RemixUploadData *this)
{
  return (signed int)((*((_QWORD *)this + 1) >> 32) - *((_QWORD *)this + 1)) >> 2;
}


int __fastcall RemixPreviewScreenController::_onEulaAgreed(RemixPreviewScreenController *this)
{
  *((_BYTE *)this + 530) = 0;
  return (*(int (**)(void))(**((_DWORD **)this + 130) + 12))();
}


void __fastcall RemixPreviewScreenController::_finalizeUpload(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@3
  int *v4; // r0@7
  void *v5; // r0@8
  void *v6; // r0@10
  int v7; // r0@11
  int v8; // r1@11
  unsigned int *v9; // r1@12
  unsigned int v10; // r2@14
  int v11; // r4@17
  unsigned int *v12; // r1@18
  unsigned int v13; // r0@20
  unsigned int *v14; // r5@24
  unsigned int v15; // r0@26
  void *v16; // r0@31
  void *v17; // r0@32
  unsigned int *v18; // r2@34
  signed int v19; // r1@36
  unsigned int *v20; // r2@38
  signed int v21; // r1@40
  unsigned int *v22; // r2@42
  signed int v23; // r1@44
  unsigned int *v24; // r2@46
  signed int v25; // r1@48
  int v26; // [sp+4h] [bp-2Ch]@11
  int v27; // [sp+8h] [bp-28h]@11
  int v28; // [sp+Ch] [bp-24h]@10
  int v29; // [sp+10h] [bp-20h]@9
  int v30; // [sp+14h] [bp-1Ch]@8
  int v31; // [sp+18h] [bp-18h]@7

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 130) + 16))();
  v2 = *((_DWORD *)v1 + 114);
  if ( v2 == 1 )
  {
    v3 = 4;
  }
  else if ( v2 == 2 )
    v3 = 5;
  else
    v3 = 0;
    if ( *((_DWORD *)v1 + 115) > 12499 )
      v3 = 1;
  v4 = sub_21E8AF4(&v31, (int *)v1 + 123);
  if ( Util::utf8len(v4, 1) >= 31 )
    Util::utf8substring((const void **)&v30, &v31, 0, 30);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v31, &v30);
    v5 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
    {
      v22 = (unsigned int *)(v30 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
  sub_21E8AF4(&v29, (int *)v1 + 124);
  if ( Util::utf8len(&v29, 1) > 500 )
    Util::utf8substring((const void **)&v28, &v29, 0, 500);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v29, &v28);
    v6 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v28 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  RemixProgressTracker::setCatalogInfo(*((_DWORD *)v1 + 130), &v31, &v29, (unsigned __int64 *)((char *)v1 + 500), v3);
  (*(void (__fastcall **)(RemixPreviewScreenController *))(*(_DWORD *)v1 + 92))(v1);
  v7 = *((_DWORD *)v1 + 106);
  v26 = *((_DWORD *)v1 + 130);
  v8 = *((_DWORD *)v1 + 131);
  v27 = v8;
  if ( v8 )
    v9 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    else
      ++*v9;
  MinecraftScreenModel::navigateToRemixUploadScreen(v7, (int)&v26);
  v11 = v27;
  if ( v27 )
    v12 = (unsigned int *)(v27 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v16 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v29 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v31 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
}


int __fastcall RemixPreviewScreenController::_onEulaDeclined(RemixPreviewScreenController *this)
{
  *((_BYTE *)this + 530) = 0;
  return (*(int (**)(void))(*(_DWORD *)this + 92))();
}


void __fastcall RemixPreviewScreenController::_getTextEditValue(int *a1, int a2, int a3)
{
  RemixPreviewScreenController::_getTextEditValue(a1, a2, a3);
}


void __fastcall RemixPreviewScreenController::_onEulaViewRequested(RemixPreviewScreenController *this)
{
  int v1; // r4@1
  void *v2; // r0@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int v5; // [sp+4h] [bp-1Ch]@1

  v1 = *((_DWORD *)this + 106);
  sub_21E94B4((void **)&v5, "http://go.microsoft.com/fwlink/?LinkID=530144");
  MinecraftScreenModel::openUriLink();
  v2 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
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
      j_j_j_j__ZdlPv_9(v2);
  }
}


signed int __fastcall RemixPreviewScreenController::_validateTag(int a1, int *a2)
{
  int *v2; // r8@1
  int v3; // r10@1
  int v4; // r7@2
  unsigned int *v5; // r9@2
  void *v6; // r0@2
  int v7; // r0@3
  int v8; // r5@4
  unsigned int *v9; // r6@5
  int v10; // r0@11
  void *v11; // r0@23
  void *v12; // r0@24
  void *v13; // r0@25
  unsigned int *v14; // r4@26
  void *v15; // r0@26
  signed int v16; // r6@29
  char *v18; // r0@33
  int v19; // r0@33
  unsigned int *v20; // r2@39
  signed int v21; // r1@41
  unsigned int *v22; // r2@43
  signed int v23; // r1@45
  unsigned int *v24; // r2@47
  signed int v25; // r1@49
  unsigned int *v26; // r2@51
  signed int v27; // r1@53
  unsigned int *v28; // r2@55
  signed int v29; // r1@57
  char *v30; // r0@63
  void **v31; // r0@66
  void *v32; // r0@66
  int *v33; // r4@67
  int *v34; // r7@67
  unsigned int *v35; // r2@69
  signed int v36; // r1@71
  int *v37; // r0@77
  unsigned int *v38; // r2@98
  signed int v39; // r1@100
  unsigned int *v40; // r2@102
  signed int v41; // r1@104
  _DWORD *v42; // [sp+4h] [bp-104h]@32
  void **v43; // [sp+8h] [bp-100h]@32
  int v44; // [sp+Ch] [bp-FCh]@67
  void **v45; // [sp+10h] [bp-F8h]@66
  void **v46; // [sp+14h] [bp-F4h]@66
  int v47; // [sp+30h] [bp-D8h]@67
  int v48; // [sp+38h] [bp-D0h]@66
  int v49; // [sp+3Ch] [bp-CCh]@67
  int *v50; // [sp+C4h] [bp-44h]@32
  int *v51; // [sp+C8h] [bp-40h]@32
  int *v52; // [sp+CCh] [bp-3Ch]@32
  int v53; // [sp+D0h] [bp-38h]@2
  int v54; // [sp+D4h] [bp-34h]@2
  int v55; // [sp+D8h] [bp-30h]@2
  int v56; // [sp+DCh] [bp-2Ch]@2
  int v57; // [sp+E0h] [bp-28h]@3

  v2 = a2;
  v3 = a1;
  if ( (unsigned int)(Util::utf8len(a2, 1) - 2) > 0x1E )
    return 0;
  v5 = (unsigned int *)(*(_QWORD *)(v3 + 500) >> 32);
  v4 = *(_QWORD *)(v3 + 500);
  sub_21E8AF4(&v53, v2);
  sub_21E8AF4(&v54, &v53);
  sub_21E8AF4(&v56, &v54);
  sub_21E8AF4(&v55, &v56);
  v6 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v56 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E8AF4(&v57, &v55);
  v7 = ((signed int)v5 - v4) >> 4;
  if ( v7 >= 1 )
    v8 = v7 + 1;
    do
      v9 = (unsigned int *)v4;
      if ( sub_122BE98((unsigned int *)&v57, (unsigned int *)v4) )
        goto LABEL_23;
      v9 = (unsigned int *)(v4 + 4);
      if ( sub_122BE98((unsigned int *)&v57, (unsigned int *)(v4 + 4)) )
      v9 = (unsigned int *)(v4 + 8);
      if ( sub_122BE98((unsigned int *)&v57, (unsigned int *)(v4 + 8)) )
      v9 = (unsigned int *)(v4 + 12);
      if ( sub_122BE98((unsigned int *)&v57, (unsigned int *)(v4 + 12)) )
      --v8;
      v4 += 16;
    while ( v8 > 1 );
  if ( 1 == ((signed int)v5 - v4) >> 2 )
    v9 = (unsigned int *)v4;
LABEL_19:
    if ( !sub_122BE98((unsigned int *)&v57, v9) )
      v9 = v5;
    goto LABEL_23;
  v10 = ((signed int)v5 - v4) >> 2;
  if ( v10 == 2 )
    goto LABEL_17;
  if ( v10 != 3 )
    v9 = v5;
  v9 = (unsigned int *)v4;
  if ( !sub_122BE98((unsigned int *)&v57, (unsigned int *)v4) )
    v9 = (unsigned int *)(v4 + 4);
LABEL_17:
    if ( sub_122BE98((unsigned int *)&v57, v9) )
      goto LABEL_23;
    ++v9;
    goto LABEL_19;
LABEL_23:
  v11 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v57 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v55 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v54 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = *(unsigned int **)(v3 + 504);
  v15 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v53 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  if ( v9 != v14 || *(_BYTE *)*v2 == 32 )
  v16 = 0;
  if ( *(_BYTE *)(*v2 + *(_DWORD *)(*v2 - 12) - 1) != 32 )
    v50 = 0;
    v51 = 0;
    v52 = 0;
    sub_21D12A4((int)&v43, (unsigned int *)v2, 24);
    v42 = &unk_28898CC;
    while ( 1 )
      v18 = sub_21BBAF0((char *)&v43, (const void **)&v42, 32);
      v19 = (int)&v18[*(_DWORD *)(*(_DWORD *)v18 - 12)];
      if ( !v19 || *(_DWORD *)(v19 + 20) & 5 )
        break;
      if ( *(v42 - 3) )
      {
        if ( v51 == v52 )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
            (unsigned __int64 *)&v50,
            (int *)&v42);
        else
          v51 = sub_21E8AF4(v51, (int *)&v42) + 1;
      }
    v16 = 0;
    v30 = (char *)(v42 - 3);
    if ( (unsigned int)(v51 - v50) < 4 )
      v16 = 1;
    if ( (int *)v30 != &dword_28898C0 )
      v38 = v42 - 1;
      if ( &pthread_create )
        __dmb();
        do
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
      else
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    v31 = off_26D3F84;
    v43 = off_26D3F60;
    *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v43) = off_26D3F80[0];
    v45 = v31;
    v46 = &off_27734E8;
    v32 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v48 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    v46 = &off_26D40A8;
    sub_21C802C((unsigned int **)&v47);
    v43 = (void **)off_26D3F68;
    *(void ***)((char *)&v43 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
    v44 = 0;
    sub_21B6560(&v49);
    v34 = v51;
    v33 = v50;
    if ( v50 != v51 )
        v37 = (int *)(*v33 - 12);
        if ( v37 != &dword_28898C0 )
        {
          v35 = (unsigned int *)(*v33 - 4);
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
            j_j_j_j__ZdlPv_9(v37);
        }
        ++v33;
      while ( v33 != v34 );
      v33 = v50;
    if ( v33 )
      operator delete(v33);
  return v16;
}


void __fastcall RemixPreviewScreenController::_getTextEditValue(int *a1, int a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  Json::Value *v5; // r5@1
  Json::Value *v6; // r6@3
  const char *v7; // r6@4
  Json::Value *v8; // r5@8
  char *v9; // r1@9
  char *v10; // r0@11
  char *v11; // r0@12
  char *v12; // r0@13
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  unsigned int *v15; // r2@19
  signed int v16; // r1@21
  unsigned int *v17; // r2@23
  signed int v18; // r1@25
  char *v19; // [sp+4h] [bp-2Ch]@6
  const char *v20; // [sp+Ch] [bp-24h]@1
  const char *v21; // [sp+10h] [bp-20h]@4
  char v22; // [sp+14h] [bp-1Ch]@4
  char v23; // [sp+18h] [bp-18h]@9

  v3 = a1;
  v4 = *(_DWORD *)(a3 + 12);
  sub_21E94B4((void **)&v20, (const char *)&unk_257BC67);
  v5 = (Json::Value *)(v4 + 8);
  if ( Json::Value::isNull(v5)
    || Json::Value::isObject(v5) != 1
    || (v6 = (Json::Value *)Json::Value::operator[]((int)v5, "#property_field"), Json::Value::isString(v6) != 1) )
  {
    v7 = v20;
    v21 = v20;
    v20 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v21, (int)&v22, (int)v6);
    v7 = v21;
  sub_21E94B4((void **)&v19, (const char *)&unk_257BC67);
    || (v8 = (Json::Value *)Json::Value::operator[]((int)v5, v7), Json::Value::isString(v8) != 1) )
    *v3 = (int)v19;
    v9 = (char *)&unk_28898CC;
    v19 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as(v3, (int)&v23, (int)v8);
    v9 = v19;
  v10 = v9 - 12;
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  v11 = (char *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v21 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (char *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v20 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}


RemixPreviewScreenController::RemixUploadData *__fastcall RemixPreviewScreenController::RemixUploadData::~RemixUploadData(RemixPreviewScreenController::RemixUploadData *this)
{
  RemixPreviewScreenController::RemixUploadData *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r1@16
  void *v8; // r0@16
  int *v9; // r0@17
  unsigned int *v11; // r2@19
  signed int v12; // r1@21
  unsigned int *v13; // r2@23
  signed int v14; // r1@25

  v1 = this;
  v3 = (void *)(*((_QWORD *)this + 1) >> 32);
  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    operator delete(v2);
  v7 = *((_DWORD *)v1 + 1);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (int *)(*(_DWORD *)v1 - 12);
  if ( v9 != &dword_28898C0 )
    v13 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return v1;
}


void __fastcall RemixPreviewScreenController::_onEulaViewRequested(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController::_onEulaViewRequested(this);
}


void __fastcall RemixPreviewScreenController::_registerEventHandlers(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController::_registerEventHandlers(this);
}


int __fastcall RemixPreviewScreenController::_triggerEula(int result)
{
  *(_BYTE *)(result + 530) = 1;
  return result;
}


void __fastcall RemixPreviewScreenController::~RemixPreviewScreenController(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController *v1; // r0@1

  v1 = RemixPreviewScreenController::~RemixPreviewScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall RemixPreviewScreenController::~RemixPreviewScreenController(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController::~RemixPreviewScreenController(this);
}


void __fastcall RemixPreviewScreenController::_registerBindings(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController::_registerBindings(this);
}


RemixPreviewScreenController *__fastcall RemixPreviewScreenController::~RemixPreviewScreenController(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r1@15
  void *v8; // r0@15
  int v9; // r1@16
  void *v10; // r0@16
  int v11; // r1@17
  void *v12; // r0@17
  int v13; // r1@18
  void *v14; // r0@18
  int v15; // r1@19
  void *v16; // r0@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  unsigned int *v20; // r2@25
  signed int v21; // r1@27
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  unsigned int *v24; // r2@33
  signed int v25; // r1@35
  unsigned int *v26; // r2@37
  signed int v27; // r1@39

  v1 = this;
  *(_DWORD *)this = &off_26E32EC;
  v2 = *((_DWORD *)this + 131);
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
  v7 = *((_DWORD *)v1 + 128);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v7 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  RemixPreviewScreenController::RemixUploadData::~RemixUploadData((RemixPreviewScreenController *)((char *)v1 + 492));
  v9 = *((_DWORD *)v1 + 122);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v9 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = *((_DWORD *)v1 + 110);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v11 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = *((_DWORD *)v1 + 109);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v13 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = *((_DWORD *)v1 + 108);
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v15 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  return v1;
}


  if ( *(_BYTE *)(v2 + 8) && RemixPreviewScreenController::_validateTag(v3, (int *)(v3 + 512)) == 1 )
{
    if ( (signed int)((*(_QWORD *)(v3 + 500) >> 32) - *(_QWORD *)(v3 + 500)) <= 56
      && RemixPreviewScreenController::_validateTag(v3, (int *)(v3 + 512)) == 1 )
    {
      v5 = *(_QWORD *)(v3 + 504);
      if ( (_DWORD)v5 == HIDWORD(v5) )
      {
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)(v3 + 500),
          (int *)(v3 + 512));
      }
      else
        sub_21E8AF4((int *)v5, (int *)(v3 + 512));
        *(_DWORD *)(v3 + 504) += 4;
      *(_BYTE *)(v3 + 529) = 1;
    }
    EntityInteraction::setInteractText((int *)(v3 + 512), (int *)&Util::EMPTY_STRING);
    v6 = 0;
  }
  else
  {
    v6 = 1;
  *(_BYTE *)(v3 + 528) = v6;
  return 1;
}


signed int __fastcall RemixPreviewScreenController::_initiateXBLSignin(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController *v1; // r4@1
  signed int result; // r0@1
  int v3; // [sp+0h] [bp-18h]@2
  int (*v4)(void); // [sp+8h] [bp-10h]@2

  v1 = this;
  result = MinecraftScreenModel::tryNavigateToXblFirstLaunchScreen(*((MinecraftScreenModel **)this + 106));
  if ( !result )
  {
    v4 = 0;
    result = MinecraftScreenController::_attemptSignIn((int)v1, (int)&v3);
    if ( v4 )
      result = v4();
  }
  return result;
}


void __fastcall RemixPreviewScreenController::_removeTag(RemixPreviewScreenController *this, int a2)
{
  RemixPreviewScreenController::_removeTag(this, a2);
}


void __fastcall RemixPreviewScreenController::_finalizeUpload(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController::_finalizeUpload(this);
}


ModalScreenData *__fastcall RemixPreviewScreenController::_dialogNotSignedIn(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1 OVERLAPPED
  _DWORD *v5; // [sp+0h] [bp-58h]@1
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
  sub_21E8190(&v7, "xbox.signinFirst", (_BYTE *)0x10);
  sub_21E8190(&v11, "remix_export.XBL_signin", (_BYTE *)0x17);
  sub_21E8190(&v16, "store.popup.xblRequired.title", (_BYTE *)0x1D);
  sub_21E8190(&v18, "store.popup.goBack", (_BYTE *)0x12);
  v2 = operator new(4u);
  LODWORD(v3) = sub_122BE62;
  *v2 = v1;
  HIDWORD(v3) = sub_122BE06;
  v5 = v2;
  v6 = v3;
  HIDWORD(v3) = &v5;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v7, *(__int64 *)((char *)&v3 + 4));
  if ( (_DWORD)v6 )
    ((void (*)(void))v6)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v7);
}


int __fastcall RemixPreviewScreenController::RemixPreviewScreenController(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  RemixService *v13; // r0@21
  int v14; // r0@21
  __int64 v15; // r0@21
  int v16; // r6@21
  unsigned int *v17; // r1@22
  unsigned int v18; // r0@24
  unsigned int *v19; // r5@28
  unsigned int v20; // r0@30
  int v21; // r5@35
  unsigned int *v22; // r1@36
  unsigned int v23; // r0@38
  unsigned int *v24; // r6@42
  unsigned int v25; // r0@44
  void *v26; // r0@50
  __int64 v27; // r0@51
  int v28; // r1@52
  void *v29; // r0@54
  unsigned int *v31; // r2@56
  signed int v32; // r1@58
  unsigned int *v33; // r2@60
  signed int v34; // r1@62
  void *v35; // [sp+Ch] [bp-3Ch]@51
  int v36; // [sp+10h] [bp-38h]@50
  char v37; // [sp+14h] [bp-34h]@21
  int v38; // [sp+18h] [bp-30h]@21
  int v39; // [sp+1Ch] [bp-2Ch]@1
  int v40; // [sp+20h] [bp-28h]@1

  v3 = a1;
  v39 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v40 = v5;
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
  ClientInstanceScreenController::ClientInstanceScreenController(v3, (int)&v39);
  v8 = v40;
  if ( v40 )
    v9 = (unsigned int *)(v40 + 4);
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
  *(_DWORD *)v3 = &off_26E32EC;
  glTFExportData::glTFExportData((int *)(v3 + 432), (int *)v4);
  sub_21E8AF4((int *)(v3 + 488), (int *)(v4 + 4));
  *(_DWORD *)(v3 + 492) = &unk_28898CC;
  *(_DWORD *)(v3 + 496) = &unk_28898CC;
  *(_DWORD *)(v3 + 500) = 0;
  *(_DWORD *)(v3 + 504) = 0;
  *(_DWORD *)(v3 + 508) = 0;
  *(_DWORD *)(v3 + 512) = &unk_28898CC;
  *(_BYTE *)(v3 + 530) = 0;
  *(_WORD *)(v3 + 528) = 0;
  *(_DWORD *)(v3 + 524) = 0;
  *(_DWORD *)(v3 + 516) = 0;
  *(_DWORD *)(v3 + 520) = 0;
  *(_BYTE *)(v3 + 531) = 1;
  v13 = (RemixService *)MinecraftScreenModel::getRemixService(*(MinecraftScreenModel **)(v3 + 424));
  RemixService::hydrateFilters(v13);
  v14 = MinecraftScreenModel::getRemixService(*(MinecraftScreenModel **)(v3 + 424));
  RemixService::createRemixRequest(
    (int)&v37,
    v14,
    (int *)(v4 + 8),
    (int *)(v3 + 488),
    *(_QWORD *)(v4 + 32),
    *(_QWORD *)(v4 + 32) >> 32);
  v15 = *(_QWORD *)&v37;
  *(_DWORD *)&v37 = 0;
  v38 = 0;
  *(_DWORD *)(v3 + 520) = v15;
  v16 = *(_DWORD *)(v3 + 524);
  *(_DWORD *)(v3 + 524) = HIDWORD(v15);
  if ( v16 )
    v17 = (unsigned int *)(v16 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v21 = v38;
  if ( v38 )
    v22 = (unsigned int *)(v38 + 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      v24 = (unsigned int *)(v21 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  EntityInteraction::setInteractText((int *)(v3 + 492), (int *)(v3 + 432));
  if ( Util::utf8len((int *)(v3 + 492), 1) >= 31 )
    Util::utf8substring((const void **)&v36, (int *)(v3 + 492), 0, 30);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v3 + 492),
      &v36);
    v26 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v36 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4(&v35, "Minecraft");
  v27 = *(_QWORD *)(v3 + 504);
  if ( (_DWORD)v27 == HIDWORD(v27) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
      (unsigned __int64 *)(v3 + 500),
      &v35);
    v28 = (int)v35;
  else
    *(_DWORD *)v27 = v35;
    HIDWORD(v27) = &unk_28898CC;
    v35 = &unk_28898CC;
    *(_DWORD *)(v3 + 504) = v27 + 4;
  v29 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v28 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  RemixPreviewScreenController::_registerEventHandlers((RemixPreviewScreenController *)v3);
  RemixPreviewScreenController::_registerBindings((RemixPreviewScreenController *)v3);
  return v3;
}


void __fastcall RemixPreviewScreenController::_registerEventHandlers(RemixPreviewScreenController *this)
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
  unsigned int *v38; // r2@29
  signed int v39; // r1@31
  unsigned int *v40; // r2@33
  signed int v41; // r1@35
  unsigned int *v42; // r2@37
  signed int v43; // r1@39
  unsigned int *v44; // r2@41
  signed int v45; // r1@43
  unsigned int *v46; // r2@45
  signed int v47; // r1@47
  unsigned int *v48; // r2@49
  signed int v49; // r1@51
  unsigned int *v50; // r2@53
  signed int v51; // r1@55
  unsigned int *v52; // r2@57
  signed int v53; // r1@59
  unsigned int *v54; // r2@61
  signed int v55; // r1@63
  _DWORD *v56; // [sp+4h] [bp-ECh]@25
  __int64 v57; // [sp+Ch] [bp-E4h]@25
  int v58; // [sp+18h] [bp-D8h]@25
  _DWORD *v59; // [sp+1Ch] [bp-D4h]@22
  __int64 v60; // [sp+24h] [bp-CCh]@22
  int v61; // [sp+30h] [bp-C0h]@22
  _DWORD *v62; // [sp+34h] [bp-BCh]@19
  __int64 v63; // [sp+3Ch] [bp-B4h]@19
  int v64; // [sp+48h] [bp-A8h]@19
  _DWORD *v65; // [sp+4Ch] [bp-A4h]@16
  __int64 v66; // [sp+54h] [bp-9Ch]@16
  int v67; // [sp+60h] [bp-90h]@16
  _DWORD *v68; // [sp+64h] [bp-8Ch]@13
  __int64 v69; // [sp+6Ch] [bp-84h]@13
  int v70; // [sp+78h] [bp-78h]@13
  _DWORD *v71; // [sp+7Ch] [bp-74h]@10
  __int64 v72; // [sp+84h] [bp-6Ch]@10
  int v73; // [sp+90h] [bp-60h]@10
  _DWORD *v74; // [sp+94h] [bp-5Ch]@7
  __int64 v75; // [sp+9Ch] [bp-54h]@7
  int v76; // [sp+A8h] [bp-48h]@7
  _DWORD *v77; // [sp+ACh] [bp-44h]@4
  __int64 v78; // [sp+B4h] [bp-3Ch]@4
  int v79; // [sp+C0h] [bp-30h]@4
  _DWORD *v80; // [sp+C4h] [bp-2Ch]@1
  __int64 v81; // [sp+CCh] [bp-24h]@1
  int v82; // [sp+D8h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v82, "#remix_name");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v82);
  v3 = operator new(4u);
  LODWORD(v4) = sub_122B59C;
  *v3 = v1;
  HIDWORD(v4) = sub_122B4C4;
  v80 = v3;
  v81 = v4;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v2, (int)&v80);
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  v5 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
  {
    v38 = (unsigned int *)(v82 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
    }
    else
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v79, "#remix_description");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v79);
  v7 = operator new(4u);
  LODWORD(v8) = sub_122B6A8;
  *v7 = v1;
  HIDWORD(v8) = sub_122B5D4;
  v77 = v7;
  v78 = v8;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v6, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  v9 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v79 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v76, "#remix_tag");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v76);
  v11 = operator new(4u);
  LODWORD(v12) = sub_122B814;
  *v11 = v1;
  HIDWORD(v12) = sub_122B6E0;
  v74 = v11;
  v75 = v12;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v10, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  v13 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v76 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v73, "button.remix_tag");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v73);
  v15 = operator new(4u);
  LODWORD(v16) = sub_122B8B0;
  *v15 = v1;
  HIDWORD(v16) = sub_122B84C;
  v71 = v15;
  v72 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v71);
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  v17 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v73 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v70, "button.remix_preview_cancel");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v70);
  v19 = operator new(4u);
  LODWORD(v20) = sub_122B8F6;
  *v19 = v1;
  HIDWORD(v20) = sub_122B8E6;
  v68 = v19;
  v69 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v68);
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  v21 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v70 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v67, "button.remix_preview_upload");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v67);
  v23 = operator new(4u);
  LODWORD(v24) = sub_122B950;
  *v23 = v1;
  HIDWORD(v24) = sub_122B92C;
  v65 = v23;
  v66 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v65);
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  v25 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v67 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v64, "button.eula_close");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v64);
  v27 = operator new(4u);
  LODWORD(v28) = sub_122B99C;
  *v27 = v1;
  HIDWORD(v28) = sub_122B986;
  v62 = v27;
  v63 = v28;
  ScreenController::registerButtonClickHandler((int)v1, v26, (int)&v62);
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  v29 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v64 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v61, "button.eula_agree");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v61);
  v31 = operator new(4u);
  LODWORD(v32) = sub_122B9EC;
  *v31 = v1;
  HIDWORD(v32) = sub_122B9D2;
  v59 = v31;
  v60 = v32;
  ScreenController::registerButtonClickHandler((int)v1, v30, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  v33 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v61 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v58, "button.eula_view_terms");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v58);
  v35 = operator new(4u);
  LODWORD(v36) = sub_122BA30;
  *v35 = v1;
  HIDWORD(v36) = sub_122BA22;
  v56 = v35;
  v57 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v56);
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  v37 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v58 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
}


signed int __fastcall RemixPreviewScreenController::_addTag(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  signed int result; // r0@1
  __int64 v5; // r0@3

  v2 = a1;
  v3 = a2;
  result = (*(_QWORD *)(a1 + 500) >> 32) - *(_QWORD *)(a1 + 500);
  if ( result <= 56 )
  {
    result = RemixPreviewScreenController::_validateTag(v2, a2);
    if ( result == 1 )
    {
      v5 = *(_QWORD *)(v2 + 504);
      if ( (_DWORD)v5 == HIDWORD(v5) )
      {
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)(v2 + 500),
          v3);
      }
      else
        sub_21E8AF4((int *)v5, v3);
        *(_DWORD *)(v2 + 504) += 4;
      result = 1;
      *(_BYTE *)(v2 + 529) = 1;
    }
  }
  return result;
}


void __fastcall RemixPreviewScreenController::_registerBindings(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1
  _DWORD *v6; // r0@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@5
  __int64 v9; // r1@5
  _DWORD *v10; // r0@9
  __int64 v11; // r1@9
  _DWORD *v12; // r0@9
  __int64 v13; // r1@9
  _DWORD *v14; // r0@13
  __int64 v15; // r1@13
  __int64 v16; // r1@13
  _DWORD *v17; // r0@17
  __int64 v18; // r1@17
  __int64 v19; // r1@17
  _DWORD *v20; // r0@21
  __int64 v21; // r1@21
  __int64 v22; // r1@21
  _DWORD *v23; // r0@25
  __int64 v24; // r1@25
  __int64 v25; // r1@25
  _DWORD *v26; // r0@29
  __int64 v27; // r1@29
  __int64 v28; // r1@29
  _DWORD *v29; // r0@33
  __int64 v30; // r1@33
  __int64 v31; // r1@33
  void *v32; // [sp+8h] [bp-150h]@33
  __int64 v33; // [sp+10h] [bp-148h]@33
  _DWORD *v34; // [sp+18h] [bp-140h]@33
  __int64 v35; // [sp+20h] [bp-138h]@33
  int v36; // [sp+28h] [bp-130h]@33
  int v37; // [sp+2Ch] [bp-12Ch]@33
  void *v38; // [sp+30h] [bp-128h]@29
  __int64 v39; // [sp+38h] [bp-120h]@29
  _DWORD *v40; // [sp+40h] [bp-118h]@29
  __int64 v41; // [sp+48h] [bp-110h]@29
  int v42; // [sp+50h] [bp-108h]@29
  void *v43; // [sp+54h] [bp-104h]@25
  __int64 v44; // [sp+5Ch] [bp-FCh]@25
  _DWORD *v45; // [sp+64h] [bp-F4h]@25
  __int64 v46; // [sp+6Ch] [bp-ECh]@25
  int v47; // [sp+74h] [bp-E4h]@25
  void *v48; // [sp+78h] [bp-E0h]@21
  __int64 v49; // [sp+80h] [bp-D8h]@21
  _DWORD *v50; // [sp+88h] [bp-D0h]@21
  __int64 v51; // [sp+90h] [bp-C8h]@21
  int v52; // [sp+98h] [bp-C0h]@21
  void *v53; // [sp+9Ch] [bp-BCh]@17
  __int64 v54; // [sp+A4h] [bp-B4h]@17
  _DWORD *v55; // [sp+ACh] [bp-ACh]@17
  __int64 v56; // [sp+B4h] [bp-A4h]@17
  int v57; // [sp+BCh] [bp-9Ch]@17
  void *v58; // [sp+C0h] [bp-98h]@13
  __int64 v59; // [sp+C8h] [bp-90h]@13
  _DWORD *v60; // [sp+D0h] [bp-88h]@13
  __int64 v61; // [sp+D8h] [bp-80h]@13
  int v62; // [sp+E0h] [bp-78h]@13
  _DWORD *v63; // [sp+E4h] [bp-74h]@9
  __int64 v64; // [sp+ECh] [bp-6Ch]@9
  _DWORD *v65; // [sp+F4h] [bp-64h]@9
  __int64 v66; // [sp+FCh] [bp-5Ch]@9
  int v67; // [sp+104h] [bp-54h]@9
  _DWORD *v68; // [sp+108h] [bp-50h]@5
  __int64 v69; // [sp+110h] [bp-48h]@5
  _DWORD *v70; // [sp+118h] [bp-40h]@5
  __int64 v71; // [sp+120h] [bp-38h]@5
  int v72; // [sp+128h] [bp-30h]@5
  _DWORD *v73; // [sp+12Ch] [bp-2Ch]@1
  __int64 v74; // [sp+134h] [bp-24h]@1
  _DWORD *v75; // [sp+13Ch] [bp-1Ch]@1
  __int64 v76; // [sp+144h] [bp-14h]@1
  char v77; // [sp+14Ch] [bp-Ch]@1

  v1 = this;
  StringHash::StringHash<char [33]>(&v77, (int)"#remix_name_content_binding_name");
  v2 = operator new(4u);
  LODWORD(v3) = sub_122BA76;
  *v2 = v1;
  HIDWORD(v3) = sub_122BA66;
  v75 = v2;
  v76 = v3;
  v4 = operator new(4u);
  LODWORD(v5) = sub_122BABE;
  *v4 = v1;
  HIDWORD(v5) = sub_122BAAC;
  v73 = v4;
  v74 = v5;
  ScreenController::bindString((int)v1, (int *)&v77, (int)&v75, (int)&v73);
  if ( (_DWORD)v74 )
    ((void (*)(void))v74)();
  if ( (_DWORD)v76 )
    ((void (*)(void))v76)();
  StringHash::StringHash<char [40]>(&v72, (int)"#remix_description_content_binding_name");
  v6 = operator new(4u);
  LODWORD(v7) = sub_122BB04;
  *v6 = v1;
  HIDWORD(v7) = sub_122BAF4;
  v70 = v6;
  v71 = v7;
  v8 = operator new(4u);
  LODWORD(v9) = sub_122BB4C;
  *v8 = v1;
  HIDWORD(v9) = sub_122BB3A;
  v68 = v8;
  v69 = v9;
  ScreenController::bindString((int)v1, &v72, (int)&v70, (int)&v68);
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  if ( (_DWORD)v71 )
    ((void (*)(void))v71)();
  StringHash::StringHash<char [32]>(&v67, (int)"#remix_tag_content_binding_name");
  v10 = operator new(4u);
  LODWORD(v11) = sub_122BB92;
  *v10 = v1;
  HIDWORD(v11) = sub_122BB82;
  v65 = v10;
  v66 = v11;
  v12 = operator new(4u);
  LODWORD(v13) = sub_122BBDA;
  *v12 = v1;
  HIDWORD(v13) = sub_122BBC8;
  v63 = v12;
  v64 = v13;
  ScreenController::bindString((int)v1, &v67, (int)&v65, (int)&v63);
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  v62 = -220021374;
  v14 = operator new(4u);
  LODWORD(v15) = sub_122BC24;
  *v14 = v1;
  HIDWORD(v15) = sub_122BC10;
  v60 = v14;
  v61 = v15;
  v58 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v59 = v16;
  ScreenController::bindBool((int)v1, &v62, (int)&v60, (int)&v58);
  if ( (_DWORD)v59 )
    ((void (*)(void))v59)();
  if ( (_DWORD)v61 )
    ((void (*)(void))v61)();
  StringHash::StringHash<char [23]>(&v57, (int)"#upload_button_enabled");
  v17 = operator new(4u);
  LODWORD(v18) = sub_122BC8E;
  *v17 = v1;
  HIDWORD(v18) = sub_122BC5A;
  v55 = v17;
  v56 = v18;
  v53 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v54 = v19;
  ScreenController::bindBool((int)v1, &v57, (int)&v55, (int)&v53);
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  v52 = -305596734;
  v20 = operator new(4u);
  LODWORD(v21) = sub_122BCD4;
  *v20 = v1;
  HIDWORD(v21) = sub_122BCC4;
  v50 = v20;
  v51 = v21;
  v48 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v49 = v22;
  ScreenController::bindBool((int)v1, &v52, (int)&v50, (int)&v48);
  if ( (_DWORD)v49 )
    ((void (*)(void))v49)();
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  v47 = -1577039776;
  v23 = operator new(4u);
  LODWORD(v24) = sub_122BD1E;
  *v23 = v1;
  HIDWORD(v24) = sub_122BD0A;
  v45 = v23;
  v46 = v24;
  v43 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v44 = v25;
  ScreenController::bindInt((int)v1, &v47, (int)&v45, (int)&v43);
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  StringHash::StringHash<char [28]>(&v42, (int)"#minecraft_tag_text_binding");
  v26 = operator new(4u);
  LODWORD(v27) = sub_122BD64;
  *v26 = v1;
  HIDWORD(v27) = sub_122BD54;
  v40 = v26;
  v41 = v27;
  v38 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v39 = v28;
  ScreenController::bindString((int)v1, &v42, (int)&v40, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  StringHash::StringHash<char [23]>(&v37, (int)"tag_factory_collection");
  v36 = 2143590818;
  v29 = operator new(4u);
  LODWORD(v30) = sub_122BDD0;
  *v29 = v1;
  HIDWORD(v30) = sub_122BD9C;
  v34 = v29;
  v35 = v30;
  v32 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v33 = v31;
  ScreenController::bindStringForCollection((int)v1, &v37, &v36, (int)&v34, (int)&v32);
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  if ( (_DWORD)v35 )
    ((void (*)(void))v35)();
}


ModalScreenData *__fastcall RemixPreviewScreenController::_tryRemixLogin(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController *v1; // r4@1
  ModalScreenData *result; // r0@2

  v1 = this;
  if ( MinecraftScreenModel::isSignedInToXBL(*((MinecraftScreenModel **)this + 106)) == 1 )
  {
    result = (ModalScreenData *)RemixProgressTracker::getState(*((RemixProgressTracker **)v1 + 130));
    if ( result != (ModalScreenData *)1 )
      result = (ModalScreenData *)(*(int (**)(void))(**((_DWORD **)v1 + 130) + 8))();
  }
  else
    result = (ModalScreenData *)*((_BYTE *)v1 + 531);
    if ( *((_BYTE *)v1 + 531) )
    {
      *((_BYTE *)v1 + 531) = 0;
      result = j_j_j__ZN28RemixPreviewScreenController18_dialogNotSignedInEv(v1);
    }
  return result;
}


int __fastcall RemixPreviewScreenController::RemixUploadData::RemixUploadData(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


int __fastcall RemixPreviewScreenController::_getCollectionIndex(RemixPreviewScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r4@1
  Json::Value *v3; // r4@3
  int result; // r0@5

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8))
    || Json::Value::isObject(v2) != 1
    || (v3 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index"), !Json::Value::isInt(v3))
    && Json::Value::isUInt(v3) != 1 )
  {
    result = -1;
  }
  else
    result = j_j_j__ZNK4Json5Value5asIntEi_2(v3, 0);
  return result;
}


int __fastcall RemixPreviewScreenController::tick(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController *v1; // r5@1
  int v2; // r4@1
  __int64 v3; // kr00_8@1
  int v4; // r0@2

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  v3 = *(_QWORD *)((char *)v1 + 516);
  if ( (_DWORD)v3 != RemixProgressTracker::getState((RemixProgressTracker *)HIDWORD(v3)) )
  {
    v4 = RemixProgressTracker::getState(*((RemixProgressTracker **)v1 + 130));
    *((_DWORD *)v1 + 129) = v4;
    if ( v4 == 10 )
      RemixPreviewScreenController::_onFailed(v1);
    v2 |= 5u;
  }
  if ( !RemixProgressTracker::getState(*((RemixProgressTracker **)v1 + 130)) )
    if ( MinecraftScreenModel::isSignedInToXBL(*((MinecraftScreenModel **)v1 + 106)) == 1 )
    {
      if ( RemixProgressTracker::getState(*((RemixProgressTracker **)v1 + 130)) != 1 )
        (*(void (**)(void))(**((_DWORD **)v1 + 130) + 8))();
    }
    else if ( *((_BYTE *)v1 + 531) )
      *((_BYTE *)v1 + 531) = 0;
      RemixPreviewScreenController::_dialogNotSignedIn(v1);
  if ( *((_BYTE *)v1 + 529) )
    *((_BYTE *)v1 + 529) = 0;
    v2 |= 4u;
  return v2;
}


ModalScreenData *__fastcall RemixPreviewScreenController::_onFailed(RemixPreviewScreenController *this)
{
  RemixPreviewScreenController *v1; // r4@1
  unsigned int v2; // r0@1
  signed int v3; // r0@2
  _DWORD *v4; // r0@7
  __int64 v5; // r1@7 OVERLAPPED
  _DWORD *v7; // [sp+0h] [bp-58h]@7
  __int64 v8; // [sp+8h] [bp-50h]@7
  void *v9; // [sp+10h] [bp-48h]@1
  int v10; // [sp+14h] [bp-44h]@1
  int v11; // [sp+18h] [bp-40h]@1
  int v12; // [sp+1Ch] [bp-3Ch]@1
  void *v13; // [sp+20h] [bp-38h]@1
  int v14; // [sp+24h] [bp-34h]@1
  int v15; // [sp+28h] [bp-30h]@1
  int v16; // [sp+2Ch] [bp-2Ch]@1
  void *v17; // [sp+30h] [bp-28h]@1
  void *v18; // [sp+34h] [bp-24h]@1
  void *v19; // [sp+38h] [bp-20h]@1
  void *v20; // [sp+3Ch] [bp-1Ch]@1
  int v21; // [sp+40h] [bp-18h]@1
  char v22; // [sp+44h] [bp-14h]@1

  v1 = this;
  v9 = &unk_28898CC;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = &unk_28898CC;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = &unk_28898CC;
  v18 = &unk_28898CC;
  v19 = &unk_28898CC;
  v20 = &unk_28898CC;
  v22 = 0;
  v21 = 2;
  sub_21E8190(&v19, "gui.cancel", (_BYTE *)0xA);
  v2 = RemixProgressTracker::getLastResult(*((RemixProgressTracker **)v1 + 130));
  if ( v2 <= 6 )
  {
    v3 = 1 << v2;
    if ( v3 & 0xB )
    {
      sub_21E8190(&v13, "remix_export.fail.generic", (_BYTE *)0x19);
    }
    else if ( v3 & 0x34 )
      sub_21E8190(&v13, "remix_export.fail.no_permission", (_BYTE *)0x1F);
    else
  }
  v4 = operator new(4u);
  LODWORD(v5) = sub_122BFD2;
  *v4 = v1;
  HIDWORD(v5) = sub_122BFC8;
  v7 = v4;
  v8 = v5;
  HIDWORD(v5) = &v7;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v9, *(__int64 *)((char *)&v5 + 4));
  if ( (_DWORD)v8 )
    ((void (*)(void))v8)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v9);
}


int __fastcall RemixPreviewScreenController::_isLoggingInToRemixService(RemixPreviewScreenController *this)
{
  int result; // r0@1

  result = RemixProgressTracker::getState(*((RemixProgressTracker **)this + 130));
  if ( result != 1 )
    result = 0;
  return result;
}


void __fastcall RemixPreviewScreenController::_removeTag(RemixPreviewScreenController *this, int a2)
{
  RemixPreviewScreenController *v2; // r4@1
  int v3; // r0@2
  int v4; // r1@2
  __int64 v5; // r2@2
  int v6; // r0@3
  int v7; // r6@5
  int v8; // r5@6
  int v9; // r1@8
  void *v10; // r0@8
  void *v11; // r0@10
  void *v12; // r0@11
  int v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int v19; // [sp+4h] [bp-2Ch]@9
  int v20; // [sp+8h] [bp-28h]@9

  v2 = this;
  if ( a2 >= 0 )
  {
    v3 = a2 + 1;
    v4 = *(_QWORD *)((char *)v2 + 500) >> 32;
    LODWORD(v5) = *(_QWORD *)((char *)v2 + 500);
    HIDWORD(v5) = v4 - v5;
    if ( v3 < (v4 - (signed int)v5) >> 2 )
    {
      v6 = v5 + 4 * v3;
      LODWORD(v5) = v6 + 4;
      if ( v6 + 4 != v4 )
      {
        HIDWORD(v5) = v4 - v5;
        LODWORD(v5) = *(_QWORD *)((char *)v2 + 500) >> 32;
        if ( SHIDWORD(v5) >= 1 )
        {
          v7 = (SHIDWORD(v5) >> 2) + 1;
          do
          {
            v8 = v6 + 4;
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              (int *)v6,
              (int *)(v6 + 4));
            --v7;
            v6 = v8;
          }
          while ( v7 > 1 );
          LODWORD(v5) = *((_DWORD *)v2 + 126);
        }
      }
      *((_DWORD *)v2 + 126) = v5 - 4;
      v9 = *(_DWORD *)(v5 - 4);
      v10 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
        v13 = v9 - 4;
        if ( &pthread_create )
          __dmb();
            v14 = __ldrex((unsigned int *)v5);
            HIDWORD(v5) = v14 - 1;
          while ( __strex(v14 - 1, (unsigned int *)v5) );
        else
          v14 = *(_DWORD *)v5;
          HIDWORD(v5) = *(_DWORD *)v5 - 1;
          *(_DWORD *)v5 = HIDWORD(v5);
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      LODWORD(v5) = ((signed int)((*(_QWORD *)((char *)v2 + 500) >> 32) - *(_QWORD *)((char *)v2 + 500)) >> 2) - 1;
      Util::format((Util *)&v20, "remix_tag_item_%d", v5);
      sub_21E94B4((void **)&v19, "remix_tag_factory");
      if ( !*((_DWORD *)v2 + 7) )
        sub_21E5F48();
      (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v2 + 8))((char *)v2 + 20, &v19, &v20);
      v11 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v19 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      *((_BYTE *)v2 + 529) = 1;
      v12 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v20 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
    }
  }
}
