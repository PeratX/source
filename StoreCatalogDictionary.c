

int __fastcall StoreCatalogDictionary::StoreCatalogDictionary(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_BYTE *)(result + 8) = 0;
  return result;
}


void __fastcall StoreCatalogDictionary::getLocalizedText(int *a1, web::json::value **a2, int *a3)
{
  StoreCatalogDictionary::getLocalizedText(a1, a2, a3);
}


void __fastcall StoreCatalogDictionary::getLocalizedText(int *a1, web::json::value **a2, int *a3)
{
  int *v3; // r4@1
  int *v4; // r5@1
  const void **v5; // r0@2
  web::json::value *v6; // r6@2
  I18n *v7; // r0@2
  int v8; // r0@3
  char *v9; // r0@3
  signed int v10; // r6@5
  void *v11; // r0@6
  char *v12; // r0@7
  void *v13; // r0@8
  signed int *v14; // r0@9
  void *v15; // r0@12
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  unsigned int *v18; // r2@20
  signed int v19; // r1@22
  unsigned int *v20; // r2@32
  signed int v21; // r1@34
  unsigned int *v22; // r2@36
  signed int v23; // r1@38
  unsigned int *v24; // r2@40
  signed int v25; // r1@42
  unsigned int *v26; // r2@56
  signed int v27; // r1@58
  char *v28; // [sp+0h] [bp-30h]@6
  int v29; // [sp+8h] [bp-28h]@6
  int v30; // [sp+Ch] [bp-24h]@6
  char *v31; // [sp+10h] [bp-20h]@3
  int v32; // [sp+14h] [bp-1Ch]@3

  v3 = a1;
  v4 = a3;
  if ( !*a2 )
    goto LABEL_66;
  v5 = webjson::getFieldAsObject(*a2, a3);
  v6 = (web::json::value *)v5;
  v7 = (I18n *)web::json::value::type((web::json::value *)v5);
  if ( v7 == (I18n *)5 )
  v8 = I18n::getCurrentLanguage(v7);
  Localization::getFullLanguageCode((Localization *)&v32, v8);
  v31 = (char *)&unk_28898CC;
  webjson::getFieldAsString(v3, v6, &v32, (int *)&v31);
  v9 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v31 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  if ( *(_DWORD *)(*v3 - 12) )
    v10 = 1;
  else
    sub_21E94B4((void **)&v29, "neutral");
    v28 = (char *)&unk_28898CC;
    webjson::getFieldAsString(&v30, v6, &v29, (int *)&v28);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v30);
    v11 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v30 - 4);
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
        j_j_j_j__ZdlPv_9(v11);
    v12 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v28 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v29 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (signed int *)(*v3 - 12);
    v10 = *v14;
    if ( *v14 )
      v10 = 1;
    else if ( v14 != &dword_28898C0 )
      v26 = (unsigned int *)(*v3 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v32 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  if ( !v10 )
LABEL_66:
    I18n::get(v3, (int **)v4);
}


char *__fastcall StoreCatalogDictionary::parseDictionary(int a1, int *a2)
{
  int v2; // r9@1
  int v3; // r7@1
  int v4; // r5@1
  void *v5; // r0@2
  _DWORD *v6; // r0@4
  _DWORD *v7; // r0@4
  void *v8; // r6@4
  void *v9; // r0@10
  void *v10; // r0@11
  unsigned __int64 v11; // r2@12
  char *result; // r0@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  unsigned int *v17; // r2@26
  signed int v18; // r1@28
  RakNet *v19; // [sp+4h] [bp-11CCh]@1
  int v20; // [sp+8h] [bp-11C8h]@3
  int v21; // [sp+Ch] [bp-11C4h]@3
  int v22; // [sp+10h] [bp-11C0h]@3
  int v23; // [sp+14h] [bp-11BCh]@2
  int v24; // [sp+18h] [bp-11B8h]@2
  void **v25; // [sp+1Ch] [bp-11B4h]@1
  void **v26; // [sp+20h] [bp-11B0h]@2
  int v27; // [sp+3Ch] [bp-1194h]@12
  int v28; // [sp+44h] [bp-118Ch]@11
  int v29; // [sp+48h] [bp-1188h]@12
  int v30[3]; // [sp+D0h] [bp-1100h]@1
  void **v31; // [sp+E0h] [bp-10F0h]@1
  int v32; // [sp+E4h] [bp-10ECh]@12
  void **v33; // [sp+E8h] [bp-10E8h]@1
  int v34; // [sp+ECh] [bp-10E4h]@12
  void **v35; // [sp+111Ch] [bp-B4h]@1
  char v36; // [sp+1130h] [bp-A0h]@1
  int v37; // [sp+118Ch] [bp-44h]@1
  __int16 v38; // [sp+1190h] [bp-40h]@1
  int v39; // [sp+1194h] [bp-3Ch]@1
  int v40; // [sp+1198h] [bp-38h]@1
  int v41; // [sp+119Ch] [bp-34h]@1
  int v42; // [sp+11A0h] [bp-30h]@1

  v2 = a1;
  v19 = _stack_chk_guard;
  v3 = *a2;
  v4 = *(_DWORD *)(*a2 - 12);
  sub_21B6308((int)&v35);
  v35 = &off_26D3AF0;
  v37 = 0;
  v38 = 0;
  v42 = 0;
  v41 = 0;
  v40 = 0;
  v39 = 0;
  v30[0] = v3;
  v30[1] = v4;
  Core::FileStream::FileStream((int)&v31, (int)off_26D7EA4, (__int64 *)v30, 8);
  v31 = &off_26D7E64;
  v35 = &off_26D7E8C;
  v33 = &off_26D7E78;
  sub_21D0A10((int)&v25, 16);
  if ( !(v36 & 5) )
  {
    sub_21CBB54((char *)&v25, v39);
    sub_21CFED8(&v23, (int)&v26);
    utility::conversions::to_string_t(&v24, &v23);
    v5 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
    {
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
        j_j_j_j__ZdlPv_9(v5);
    }
    v21 = 0;
    v22 = ((int (*)(void))byte_21E9640)();
    web::json::value::parse((web::json::value *)&v20, &v24, &v21);
    if ( !v21 )
      v6 = operator new(4u);
      v7 = web::json::value::value(v6, &v20);
      v8 = *(void **)v2;
      *(_DWORD *)v2 = v7;
      if ( v8 )
        if ( *(_DWORD *)v8 )
          (*(void (**)(void))(**(_DWORD **)v8 + 96))();
        operator delete(v8);
    if ( v20 )
      (*(void (**)(void))(*(_DWORD *)v20 + 96))();
    v9 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v24 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
  }
  *(_BYTE *)(v2 + 8) = 1;
  v25 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v25) = off_26D3F34;
  v26 = &off_27734E8;
  v10 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v26 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v27);
  sub_21B6560(&v29);
  v31 = &off_26D7EEC;
  v35 = &off_26D7F14;
  v33 = &off_26D7F00;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v34, (int)&off_26D7F14, v11);
  v31 = &off_26D7F6C;
  v35 = &off_26D7F80;
  v32 = 0;
  sub_21B6560(&v35);
  result = (char *)(_stack_chk_guard - v19);
  if ( _stack_chk_guard != v19 )
    _stack_chk_fail(result);
  return result;
}
