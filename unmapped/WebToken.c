

WebToken *__fastcall WebToken::~WebToken(WebToken *this)
{
  WebToken *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int *v6; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15

  v1 = this;
  v2 = *((_DWORD *)this + 12);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  Json::Value::~Value((WebToken *)((char *)v1 + 32));
  v4 = *((_DWORD *)v1 + 6);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  Json::Value::~Value((WebToken *)((char *)v1 + 8));
  v6 = (int *)(*(_DWORD *)v1 - 12);
  if ( v6 != &dword_28898C0 )
    v12 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  return v1;
}


Json::Value *__fastcall WebToken::getSignerPublicKey(WebToken *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-3Ch]@1
  char v9; // [sp+8h] [bp-38h]@1
  char v10; // [sp+18h] [bp-28h]@1

  v2 = a2;
  v3 = (int *)this;
  Json::Value::Value((Json::Value *)&v9, (const char *)&unk_257BC67);
  Json::Value::get((Json::Value *)&v10, (const char *)(v2 + 8), (const Json::Value *)"x5u", (const Json::Value *)&v9);
  sub_21E94B4((void **)&v8, (const char *)&unk_257BC67);
  Json::Value::asString(v3, (int)&v10, &v8);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  Json::Value::~Value((Json::Value *)&v10);
  return Json::Value::~Value((Json::Value *)&v9);
}


void __fastcall WebToken::DERToSignature(int a1, int *a2, signed int a3)
{
  int v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+0h] [bp-28h]@1
  int v11; // [sp+4h] [bp-24h]@1

  v3 = a1;
  WebToken::DERToBinary((void **)&v10, a2, a3);
  sub_1459970(&v11, (const unsigned __int8 **)&v10);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 48),
    &v11);
  v4 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


Json::Reader *__fastcall WebToken::parse(int a1, int a2, int *a3)
{
  int *v3; // r5@1
  int v4; // r4@1
  void *v5; // r0@2
  void *v6; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  int v12; // [sp+4h] [bp-8Ch]@2
  int v13; // [sp+8h] [bp-88h]@2
  char v14; // [sp+Ch] [bp-84h]@1

  v3 = a3;
  v4 = a2;
  Json::Reader::Reader((Json::Reader *)&v14);
  if ( sub_21E7D6C((const void **)v3, (const char *)&unk_257BC67) )
  {
    sub_21E8AF4(&v12, v3);
    sub_14595CC((const void **)&v13, &v12);
    Json::Reader::parse((int)&v14, &v13, v4, 0);
    v5 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v13 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
    v6 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v12 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  }
  return Json::Reader::~Reader((Json::Reader *)&v14);
}


int *__fastcall WebToken::WebToken(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  Json::Value::Value((Json::Value *)(v3 + 2), (const Json::Value *)(v2 + 2));
  sub_21E8AF4(v3 + 6, v2 + 6);
  Json::Value::Value((Json::Value *)(v3 + 8), (const Json::Value *)(v2 + 8));
  sub_21E8AF4(v3 + 12, v2 + 12);
  return v3;
}


int __fastcall WebToken::WebToken(int a1)
{
  int v1; // r5@1

  v1 = a1;
  *(_DWORD *)a1 = &unk_28898CC;
  Json::Value::Value((_DWORD *)(a1 + 8), 0);
  *(_DWORD *)(v1 + 24) = &unk_28898CC;
  Json::Value::Value((_DWORD *)(v1 + 32), 0);
  *(_DWORD *)(v1 + 48) = &unk_28898CC;
  return v1;
}


void **__fastcall WebToken::DERToBinary(void **a1, int *a2, signed int a3)
{
  int v3; // r6@1
  void **v4; // r11@1
  unsigned int v5; // r0@1
  int v6; // r1@3
  signed int v7; // r4@4
  void **result; // r0@5
  int v9; // lr@8
  signed int v10; // r3@8
  int v11; // r7@8
  int v12; // r9@8
  int v13; // r12@8
  _BYTE *v14; // r1@9
  signed int v15; // r5@9
  unsigned __int8 v16; // vf@11
  signed int v17; // r3@15
  int v18; // r8@15
  int v19; // r1@16
  signed int v20; // r7@16
  _BYTE *v21; // r1@16
  int v22; // r3@22
  int v23; // r0@22
  signed int v24; // r10@22
  int v25; // r1@26
  int v26; // r1@28
  bool v27; // zf@28
  signed int v28; // r4@34
  signed int v29; // r0@35
  signed int v30; // r10@37
  void **v31; // r0@40
  char v32; // r9@40
  int v33; // r0@42
  int v34; // r9@48
  signed int v35; // r5@48
  int v36; // r10@48
  void **v37; // r0@49
  char v38; // r6@49
  int v39; // r0@51
  int v40; // [sp+4h] [bp-4Ch]@39
  int v41; // [sp+8h] [bp-48h]@39
  signed int v42; // [sp+Ch] [bp-44h]@22
  int v43; // [sp+10h] [bp-40h]@16
  int v44; // [sp+14h] [bp-3Ch]@9
  void **v45; // [sp+18h] [bp-38h]@34

  v3 = *a2;
  v4 = a1;
  v5 = *(_DWORD *)(*a2 - 12);
  if ( v5 < 8 || *(_BYTE *)v3 != 48 )
    return sub_21E94B4(v4, (const char *)&unk_257BC67);
  v6 = *(_BYTE *)(v3 + 1);
  if ( v6 <= 0 )
  {
    if ( (unsigned __int8)v6 != 129 )
      return sub_21E94B4(v4, (const char *)&unk_257BC67);
    v7 = 3;
  }
  else
    v7 = 2;
  v9 = v7 + v3;
  v10 = *(_BYTE *)(v7 + v3 + 1);
  v11 = v7 + v10;
  v12 = -v10;
  v13 = v7 + v10 + 2;
  if ( v10 < 1 )
    v44 = *(_BYTE *)(v7 + v3 + 1);
    v15 = *(_BYTE *)(v7 + v3 + 1);
    v14 = (_BYTE *)(v9 + 2);
    do
    {
      if ( *v14 )
        break;
      ++v14;
      ++v12;
      v16 = __OFSUB__(v15--, 1);
    }
    while ( !((unsigned __int8)((v15 < 0) ^ v16) | (v15 == 0)) );
  v17 = *(_BYTE *)(v13 + v3 + 1);
  v18 = -v17;
  if ( v17 < 1 )
    v20 = *(_BYTE *)(v13 + v3 + 1);
    v43 = *(_BYTE *)(v13 + v3 + 1);
    v19 = v11 + v3;
    v21 = (_BYTE *)(v19 + 4);
      if ( *v21 )
      ++v21;
      ++v18;
      v16 = __OFSUB__(v20--, 1);
    while ( !((unsigned __int8)((v20 < 0) ^ v16) | (v20 == 0)) );
  v22 = v5 - v7;
  v23 = v15;
  v24 = a3 + ((unsigned int)a3 >> 31);
  v42 = v7;
  if ( v15 < v20 )
    v23 = v20;
  if ( v23 < a3 / 2 )
    v23 = a3 / 2;
  v25 = *(_BYTE *)(v9 - 1);
  if ( v25 != v22 || v25 != v44 + v43 + 4 )
    goto LABEL_55;
  v26 = *(_BYTE *)(v3 + v7);
  v27 = v26 == 2;
  if ( v26 == 2 )
    v27 = *(_BYTE *)(v3 + v13) == 2;
  if ( v27 )
    v45 = (void **)&unk_28898CC;
    sub_21E849C((char *)&v45, 2 * v23, 0);
    v28 = v24 >> 1;
    if ( v15 >= 1 )
      v29 = v20;
      if ( v15 > v20 )
        v29 = v15;
      v30 = 0;
      if ( v29 <= v28 )
        v29 = v28;
      v40 = v29 + v12;
      v41 = v42 + v12 + v44 + v3 + 2;
      do
      {
        v31 = v45;
        v32 = *(_BYTE *)(v41 + v30);
        if ( (signed int)*(v45 - 1) >= 0 )
        {
          sub_21E8010((const void **)&v45);
          v31 = v45;
        }
        v33 = (int)v31 + v30++;
        *(_BYTE *)(v33 + v40) = v32;
      }
      while ( v30 < v15 );
    if ( v20 >= 1 )
      if ( v15 <= v20 )
        v15 = v20;
      if ( v15 <= v28 )
        v15 = v28;
      v34 = v18 + 2 * v15;
      v35 = 0;
      v36 = v42 + v18 + v44 + v43 + v3 + 4;
        v37 = v45;
        v38 = *(_BYTE *)(v36 + v35);
          v37 = v45;
        v39 = (int)v37 + v35++;
        *(_BYTE *)(v39 + v34) = v38;
      while ( v35 < v20 );
    result = v45;
    *v4 = v45;
LABEL_55:
    result = sub_21E94B4(v4, (const char *)&unk_257BC67);
  return result;
}


void __fastcall WebToken::signatureToDER(WebToken *this, int a2)
{
  void **v2; // r8@1
  void *v3; // r0@1
  signed int v4; // r6@2
  unsigned int v5; // r3@2
  signed int v6; // r4@2
  _BYTE *v7; // r2@3
  unsigned __int8 v8; // vf@5
  unsigned int v9; // r7@7
  int v10; // r0@7
  int v11; // r10@7
  _BYTE *v12; // r1@8
  unsigned int v13; // r1@14
  int v14; // r11@14
  int v15; // r0@14
  int v16; // r9@14
  signed int v17; // r0@17
  _BYTE *v18; // r0@18
  _BYTE *v19; // r0@21
  _BYTE *v20; // r0@23
  _BYTE *v21; // r0@25
  _BYTE *v22; // r0@27
  int v23; // r7@29
  signed int v24; // r9@30
  char *v25; // r0@31
  char v26; // r8@31
  int v27; // r0@33
  _BYTE *v28; // r0@34
  _BYTE *v29; // r0@36
  signed int v30; // r5@39
  int v31; // r6@39
  _BYTE *v32; // r0@40
  char v33; // r7@40
  _BYTE *v34; // r0@44
  unsigned int *v35; // r2@46
  signed int v36; // r1@48
  unsigned int *v37; // r2@50
  signed int v38; // r1@52
  unsigned int v39; // [sp+4h] [bp-54h]@16
  void **v40; // [sp+Ch] [bp-4Ch]@29
  int v41; // [sp+10h] [bp-48h]@16
  unsigned int v42; // [sp+14h] [bp-44h]@16
  unsigned int v43; // [sp+18h] [bp-40h]@16
  signed int v44; // [sp+1Ch] [bp-3Ch]@21
  _BYTE *v45; // [sp+20h] [bp-38h]@16
  int v46; // [sp+28h] [bp-30h]@1
  _BYTE *v47; // [sp+2Ch] [bp-2Ch]@1

  v2 = (void **)this;
  sub_21E8AF4(&v46, (int *)(a2 + 48));
  sub_14595CC((const void **)&v47, &v46);
  v3 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v46 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = 0;
  v5 = *((_DWORD *)v47 - 3);
  v6 = v5 >> 1;
  if ( v5 >> 1 )
    v7 = v47;
    v4 = v5 >> 1;
    do
      if ( *v7 )
        break;
      ++v7;
      v8 = __OFSUB__(v4--, 1);
    while ( !((unsigned __int8)((v4 < 0) ^ v8) | (v4 == 0)) );
  v9 = v47[v6 - v4];
  v10 = 2 * v6;
  v11 = v4 + (v9 >> 7);
  if ( v6 )
    v12 = &v47[v5 >> 1];
      if ( *v12 )
      ++v12;
      v8 = __OFSUB__(v6--, 1);
    while ( !((unsigned __int8)((v6 < 0) ^ v8) | (v6 == 0)) );
  else
    v6 = 0;
  v13 = v47[v10 - v6];
  v14 = v6 + (v13 >> 7);
  v15 = v11 + v14;
  v16 = v11 + v14 + 4;
  if ( v16 < 256 )
    v39 = v13;
    v41 = (int)v47;
    v42 = v9;
    v43 = *((_DWORD *)v47 - 3);
    v45 = &unk_28898CC;
    if ( v16 > 127 )
      sub_21E849C((char *)&v45, v15 + 7, 0);
      v18 = v45;
      if ( *((_DWORD *)v45 - 1) >= 0 )
      {
        sub_21E8010((const void **)&v45);
        v18 = v45;
      }
      v18[1] = -127;
      v17 = 2;
      sub_21E849C((char *)&v45, v15 + 6, 0);
      v17 = 1;
    v44 = v17;
    v19 = v45;
    if ( *((_DWORD *)v45 - 1) >= 0 )
      sub_21E8010((const void **)&v45);
      v19 = v45;
    *v19 = 48;
    v20 = v45;
      v20 = v45;
    v20[v44] = v16;
    v21 = v45;
      v21 = v45;
    v21[v44 + 1] = 2;
    v22 = v45;
      v22 = v45;
    v40 = v2;
    v23 = v4 + (v9 >> 7);
    v22[v44 + 2] = v11;
    if ( v4 >= 1 )
      v24 = 0;
        v25 = v45;
        v26 = *(_BYTE *)(v41 + (v43 >> 1) - v4 + v24);
        if ( *((_DWORD *)v45 - 1) >= 0 )
        {
          sub_21E8010((const void **)&v45);
          v25 = v45;
        }
        v27 = (int)&v25[v24++];
        *(_BYTE *)(v27 + v44 + (v42 >> 7) + 3) = v26;
      while ( v24 < v4 );
    v28 = v45;
      v28 = v45;
    *(&v28[v44 + 3] + v23) = 2;
    v29 = v45;
      v29 = v45;
    *(&v29[v44 + 4] + v23) = v14;
    if ( v6 >= 1 )
      v30 = 0;
      v31 = ((v39 >> 7) | 2) + v44 + v4 + (v42 >> 7) + 3;
        v32 = v45;
        v33 = *(_BYTE *)(v41 + (v43 & 0xFFFFFFFE) - v6 + v30);
          v32 = v45;
        *(&v32[v31] + v30++) = v33;
      while ( v30 < v6 );
    *v40 = v45;
    sub_21E94B4(v2, (const char *)&unk_257BC67);
  v34 = v47 - 12;
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v47 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
}


Json::Value *__fastcall WebToken::createFromData(WebToken *this, const Json::Value *a2, const PrivateKeyManager *a3)
{
  WebToken *v3; // r8@1
  const Json::Value *v4; // r5@1
  const PrivateKeyManager *v5; // r7@1
  int v6; // r4@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  int *v9; // r6@1
  int v10; // r4@4
  int v11; // r4@4
  void *v12; // r0@4
  void *v13; // r0@5
  void *v14; // r0@6
  const void **v15; // r0@7
  int v16; // r3@7
  char *v17; // r0@7
  void *v18; // r0@8
  void *v19; // r7@10
  signed int v20; // r2@10
  void *v21; // r0@15
  void *v22; // r0@16
  void *v23; // r0@18
  void *v24; // r0@19
  void *v25; // r0@20
  void *v26; // r0@21
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
  unsigned int *v38; // r2@44
  signed int v39; // r1@46
  unsigned int *v40; // r2@48
  signed int v41; // r1@50
  unsigned int *v42; // r2@52
  signed int v43; // r1@54
  unsigned int *v44; // r2@56
  signed int v45; // r1@58
  unsigned int *v46; // r2@60
  signed int v47; // r1@62
  unsigned int *v48; // r2@64
  signed int v49; // r1@66
  int v50; // [sp+4h] [bp-94h]@11
  int v51; // [sp+8h] [bp-90h]@15
  int v52; // [sp+Ch] [bp-8Ch]@7
  char *v53; // [sp+10h] [bp-88h]@7
  int v54; // [sp+14h] [bp-84h]@7
  int v55; // [sp+18h] [bp-80h]@6
  int v56; // [sp+1Ch] [bp-7Ch]@6
  int v57; // [sp+20h] [bp-78h]@5
  int v58; // [sp+24h] [bp-74h]@5
  void **v59; // [sp+28h] [bp-70h]@5
  int v60; // [sp+2Ch] [bp-6Ch]@21
  int v61; // [sp+34h] [bp-64h]@4
  char v62; // [sp+38h] [bp-60h]@4
  char v63; // [sp+48h] [bp-50h]@4
  char v64; // [sp+58h] [bp-40h]@1
  _DWORD *v65; // [sp+6Ch] [bp-2Ch]@1
  __int64 v66; // [sp+74h] [bp-24h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  Json::Value::Value(&v64, 0);
  v6 = *(_DWORD *)(*((_DWORD *)v5 + 2) + 4);
  v7 = operator new(4u);
  LODWORD(v8) = sub_145B558;
  *v7 = v6;
  HIDWORD(v8) = sub_145B548;
  v65 = v7;
  v66 = v8;
  v9 = sub_145B214((int)&v65);
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  if ( v9 )
  {
    v10 = Json::Value::operator[]((Json::Value *)&v64, "alg");
    Json::Value::Value((int)&v63, (const char **)v9 + 1);
    Json::Value::operator=(v10, (const Json::Value *)&v63);
    Json::Value::~Value((Json::Value *)&v63);
    v11 = Json::Value::operator[]((Json::Value *)&v64, "x5u");
    KeyManager::getPublicKey((KeyManager *)&v61, (int)v5);
    Json::Value::Value((int)&v62, (const char **)&v61);
    Json::Value::operator=(v11, (const Json::Value *)&v62);
    Json::Value::~Value((Json::Value *)&v62);
    v12 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
    {
      v28 = (unsigned int *)(v61 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      }
      else
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    }
    Json::FastWriter::FastWriter((Json::FastWriter *)&v59);
    Json::FastWriter::write((Json::FastWriter *)&v57, (const Json::Value *)&v59, (const Json::Value *)&v64);
    sub_1459970(&v58, (const unsigned __int8 **)&v57);
    v13 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v57 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    Json::FastWriter::write((Json::FastWriter *)&v55, (const Json::Value *)&v59, v4);
    sub_1459970(&v56, (const unsigned __int8 **)&v55);
    v14 = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v55 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    sub_21E8AF4(&v52, &v58);
    sub_21E7408((const void **)&v52, ".", 1u);
    v15 = sub_21E72F0((const void **)&v52, (const void **)&v56);
    v53 = (char *)*v15;
    *v15 = &unk_28898CC;
    v16 = v9[2];
    PrivateKeyManager::sign((int)&v54, (int)v5, (int)&v53);
    v17 = v53 - 12;
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v53 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v18 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v52 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    if ( sub_21E7D6C((const void **)&v54, (const char *)&unk_257BC67) )
      v19 = operator new(0x38u);
      WebToken::WebToken((int)v19);
      EntityInteraction::setInteractText((int *)v19, &v58);
      Json::Value::operator=((int)v19 + 8, (const Json::Value *)&v64);
      EntityInteraction::setInteractText((int *)v19 + 6, &v56);
      Json::Value::operator=((int)v19 + 32, v4);
      v20 = v9[3];
      if ( v20 )
        WebToken::DERToBinary((void **)&v50, &v54, v20);
        sub_21E8AF4(&v50, &v54);
      sub_1459970(&v51, (const unsigned __int8 **)&v50);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v19 + 12,
        &v51);
      v21 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v51 - 4);
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
          j_j_j_j__ZdlPv_9(v21);
      v22 = (void *)(v50 - 12);
      if ( (int *)(v50 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v50 - 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      *(_DWORD *)v3 = v19;
    else
      *(_DWORD *)v3 = 0;
    v23 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v54 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v56 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v58 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v59 = &off_2725B14;
    v26 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v60 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    Json::Writer::~Writer((Json::Writer *)&v59);
  }
  else
    *(_DWORD *)v3 = 0;
  return Json::Value::~Value((Json::Value *)&v64);
}


void __fastcall WebToken::toString(WebToken *this, int *a2)
{
  WebToken::toString(this, a2);
}


void __fastcall WebToken::signatureToDER(WebToken *this, int a2)
{
  WebToken::signatureToDER(this, a2);
}


void __fastcall WebToken::toString(WebToken *this, int *a2)
{
  WebToken *v2; // r4@1
  int *v3; // r5@1
  int *v4; // r0@1
  const void **v5; // r0@1
  const void **v6; // r0@1
  const void **v7; // r0@1
  char *v8; // r0@1
  char *v9; // r0@2
  void *v10; // r0@3
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  int v17; // [sp+0h] [bp-20h]@1
  char *v18; // [sp+4h] [bp-1Ch]@1
  char *v19; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = sub_21E8AF4(&v17, a2);
  sub_21E7408((const void **)v4, ".", 1u);
  v5 = sub_21E72F0((const void **)&v17, (const void **)v3 + 6);
  v18 = (char *)*v5;
  *v5 = &unk_28898CC;
  v6 = sub_21E7408((const void **)&v18, ".", 1u);
  v19 = (char *)*v6;
  *v6 = &unk_28898CC;
  v7 = sub_21E72F0((const void **)&v19, (const void **)v3 + 12);
  *(_DWORD *)v2 = *v7;
  *v7 = &unk_28898CC;
  v8 = v19 - 12;
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
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


int __fastcall WebToken::verify(int a1, __int64 *a2)
{
  __int64 *v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  _DWORD *v6; // r0@3
  int *v7; // r6@3
  __int64 v8; // kr00_8@7
  const void **v9; // r0@8
  void *v10; // r0@8
  int v11; // r4@11
  int v12; // r3@14
  void *v13; // r0@16
  void *v14; // r0@17
  char *v15; // r0@18
  void *v16; // r0@19
  void *v17; // r0@20
  void *v18; // r0@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  unsigned int *v26; // r2@35
  signed int v27; // r1@37
  unsigned int *v28; // r2@55
  signed int v29; // r1@57
  unsigned int *v30; // r2@59
  signed int v31; // r1@61
  unsigned int *v32; // r2@63
  signed int v33; // r1@65
  unsigned int *v34; // r2@67
  signed int v35; // r1@69
  unsigned int *v36; // r2@71
  signed int v37; // r1@73
  void **v38; // [sp+4h] [bp-54h]@14
  int v39; // [sp+8h] [bp-50h]@16
  int v40; // [sp+Ch] [bp-4Ch]@14
  int v41; // [sp+10h] [bp-48h]@10
  int v42; // [sp+14h] [bp-44h]@8
  char *v43; // [sp+18h] [bp-40h]@8
  int v44; // [sp+1Ch] [bp-3Ch]@7
  int v45; // [sp+24h] [bp-34h]@2
  char v46; // [sp+28h] [bp-30h]@2
  char v47; // [sp+38h] [bp-20h]@2
  int v48; // [sp+4Ch] [bp-Ch]@2
  int v49; // [sp+54h] [bp-4h]@1
  char v50; // [sp+58h] [bp+0h]@1
  char v51; // [sp+68h] [bp+10h]@1
  int v52; // [sp+7Ch] [bp+24h]@1
  _DWORD *v53; // [sp+80h] [bp+28h]@3
  void (*v54)(void); // [sp+88h] [bp+30h]@3
  signed int (__fastcall *v55)(const void ****, int); // [sp+8Ch] [bp+34h]@3

  v2 = a2;
  v3 = a1;
  Json::Value::Value((Json::Value *)&v50, (const char *)&unk_257BC67);
  Json::Value::get((Json::Value *)&v51, (const char *)(v3 + 8), (const Json::Value *)"x5u", (const Json::Value *)&v50);
  sub_21E94B4((void **)&v49, (const char *)&unk_257BC67);
  Json::Value::asString(&v52, (int)&v51, &v49);
  v4 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v49 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v21 = __ldrex(v20);
        __strex(v21 - 1, v20);
      }
      while ( &v50 );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  Json::Value::~Value((Json::Value *)&v51);
  Json::Value::~Value((Json::Value *)&v50);
  Json::Value::Value((Json::Value *)&v46, (const char *)&unk_257BC67);
  Json::Value::get((Json::Value *)&v47, (const char *)(v3 + 8), (const Json::Value *)"alg", (const Json::Value *)&v46);
  sub_21E94B4((void **)&v45, (const char *)&unk_257BC67);
  Json::Value::asString(&v48, (int)&v47, &v45);
  v5 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v45 - 4);
        v23 = __ldrex(v22);
        __strex(v23 - 1, v22);
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  Json::Value::~Value((Json::Value *)&v47);
  Json::Value::~Value((Json::Value *)&v46);
  v6 = operator new(4u);
  *v6 = &v48;
  v53 = v6;
  v54 = (void (*)(void))sub_145B512;
  v55 = sub_145B4EC;
  v7 = sub_145B214((int)&v53);
  if ( v54 )
    v54();
  if ( v7 && sub_21E7D6C((const void **)&v52, (const char *)&unk_257BC67) )
    sub_21E8AF4(&v44, &v52);
    v8 = *v2;
    if ( std::__find_if<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
           v8,
           (const void **)HIDWORD(v8),
           (const void **)&v44) == (const void **)HIDWORD(v8) )
      v11 = 0;
      sub_21E8AF4(&v42, (int *)v3);
      sub_21E7408((const void **)&v42, ".", 1u);
      v9 = sub_21E72F0((const void **)&v42, (const void **)(v3 + 24));
      v43 = (char *)*v9;
      *v9 = &unk_28898CC;
      v10 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) != &dword_28898C0 )
        v30 = (unsigned int *)(v42 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
          {
            v31 = __ldrex(v30);
            __strex(v31 - 1, v30);
          }
          while ( &v50 );
        }
        else
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      if ( v7[3] )
        WebToken::signatureToDER((WebToken *)&v41, v3);
      else
        sub_21E8AF4(&v41, (int *)(v3 + 48));
      KeyManager::KeyManager((int)&v38, &v44, *v7);
      v12 = v7[2];
      v11 = KeyManager::verify((int)&v38);
      v38 = &off_26D4D8C;
      if ( v40 )
        (*(void (**)(void))(*(_DWORD *)v40 + 4))();
      v40 = 0;
      v13 = (void *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
        v32 = (unsigned int *)(v39 - 4);
            v33 = __ldrex(v32);
            __strex(v33 - 1, v32);
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v14 = (void *)(v41 - 12);
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v34 = (unsigned int *)(v41 - 4);
            v35 = __ldrex(v34);
            __strex(v35 - 1, v34);
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v15 = v43 - 12;
      if ( (int *)(v43 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v43 - 4);
            v37 = __ldrex(v36);
            __strex(v37 - 1, v36);
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v44 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v29 = __ldrex(v28);
          __strex(v29 - 1, v28);
        while ( &v50 );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
  else
    v11 = 0;
  v17 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v48 - 4);
        v25 = __ldrex(v24);
        __strex(v25 - 1, v24);
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v52 - 4);
        v27 = __ldrex(v26);
        __strex(v27 - 1, v26);
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  return v11;
}


int __fastcall WebToken::WebToken(int a1, int *a2)
{
  int v2; // r6@1
  int *v3; // r4@1
  int v4; // r0@2
  char *v5; // r1@3
  char *v6; // r0@5
  _BYTE *v7; // r2@6
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int v10; // r10@17
  int *v11; // r7@19
  int v12; // r11@19
  int *v13; // r0@19
  int *v14; // r4@19
  int *v15; // r5@21
  int *v16; // r0@21
  Json::Reader *v17; // r0@23
  unsigned int *v18; // r2@25
  signed int v19; // r1@27
  int *v20; // r0@33
  _DWORD *v22; // [sp+10h] [bp-40h]@1
  char *v23; // [sp+18h] [bp-38h]@2
  int *v24; // [sp+1Ch] [bp-34h]@1
  int *v25; // [sp+20h] [bp-30h]@1
  int *v26; // [sp+24h] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &unk_28898CC;
  v22 = Json::Value::Value((_DWORD *)(a1 + 8), 0);
  *(_DWORD *)(v2 + 24) = &unk_28898CC;
  Json::Value::Value((_DWORD *)(v2 + 32), 0);
  *(_DWORD *)(v2 + 48) = &unk_28898CC;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  while ( 1 )
  {
    v10 = sub_21E76A0(v3, ".", 0, 1u);
    if ( v10 == -1 )
      break;
    sub_21E9040((void **)&v23, v3, 0, v10);
    v4 = (int)v25;
    if ( v25 == v26 )
    {
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)&v24,
        &v23);
      v5 = v23;
    }
    else
      *v25 = (int)v23;
      v5 = (char *)&unk_28898CC;
      v23 = (char *)&unk_28898CC;
      v25 = (int *)(v4 + 4);
    v6 = v5 - 12;
    if ( (int *)(v5 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v5 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    v7 = *(_BYTE **)(*v3 - 12);
    if ( (unsigned int)v7 > v10 + 1 )
      v7 = (_BYTE *)(v10 + 1);
    sub_21E7EE0((const void **)v3, 0, v7, 0);
  }
  if ( v25 == v26 )
    v11 = (int *)(v2 + 24);
    v12 = (int)v22;
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(
      (unsigned __int64 *)&v24,
      v3);
    v14 = v25;
  else
    v13 = sub_21E8AF4(v25, v3);
    v14 = v13 + 1;
    v25 = v13 + 1;
  v15 = v24;
  v16 = (int *)((char *)v14 - (char *)v24);
  if ( (char *)v14 - (char *)v24 == 12 )
    EntityInteraction::setInteractText((int *)v2, v24);
    EntityInteraction::setInteractText(v11, v15 + 1);
    v16 = EntityInteraction::setInteractText((int *)(v2 + 48), v15 + 2);
  v17 = WebToken::parse((int)v16, v12, (int *)v2);
  WebToken::parse((int)v17, v2 + 32, v11);
  if ( v15 != v14 )
    do
      v20 = (int *)(*v15 - 12);
      if ( v20 != &dword_28898C0 )
        v18 = (unsigned int *)(*v15 - 4);
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
          j_j_j_j__ZdlPv_9(v20);
      ++v15;
    while ( v15 != v14 );
    v14 = v24;
  if ( v14 )
    operator delete(v14);
  return v2;
}
