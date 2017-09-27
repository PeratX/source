

int __fastcall Entitlement::Entitlement(int a1)
{
  int v1; // r5@1

  v1 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  sub_119C884((void **)(a1 + 16), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 20), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 24), (const char *)&unk_257BC67);
  *(_DWORD *)(v1 + 28) = &unk_28898CC;
  *(_DWORD *)(v1 + 32) = 0;
  sub_119C884((void **)(v1 + 36), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 40), (const char *)&unk_257BC67);
  *(_WORD *)(v1 + 44) = 0;
  return v1;
}


int __fastcall Entitlement::Entitlement(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r2@1
  int v5; // r7@1
  int v6; // r1@1

  v2 = a1;
  v3 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)v2 = v3;
  *(_DWORD *)(v2 + 4) = v4;
  *(_DWORD *)(v2 + 8) = v5;
  *(_DWORD *)(v2 + 12) = v6;
  sub_119C884((void **)(v2 + 16), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 20), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 24), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 28), (const char *)&unk_257BC67);
  *(_DWORD *)(v2 + 32) = 0;
  sub_119C884((void **)(v2 + 36), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 40), (const char *)&unk_257BC67);
  *(_WORD *)(v2 + 44) = 0;
  return v2;
}


int __fastcall Entitlement::Entitlement(int a1, int *a2, web::json::value *a3)
{
  int *v3; // r5@1
  int v4; // r6@1
  web::json::value *v5; // r7@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  sub_119C884((void **)(a1 + 16), (const char *)&unk_257BC67);
  sub_119C884((void **)(v4 + 20), (const char *)&unk_257BC67);
  sub_119C884((void **)(v4 + 24), (const char *)&unk_257BC67);
  sub_119C854((int *)(v4 + 28), v3);
  *(_DWORD *)(v4 + 32) = 0;
  sub_119C884((void **)(v4 + 36), (const char *)&unk_257BC67);
  sub_119C884((void **)(v4 + 40), (const char *)&unk_257BC67);
  *(_BYTE *)(v4 + 44) = 0;
  Entitlement::fillInFromJSON(v4, v3, v5);
  return v4;
}


int __fastcall Entitlement::fillInFromJSON(int a1, int *a2, web::json::value *a3)
{
  int v3; // r4@1
  web::json::value *v4; // r6@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  void *v8; // r0@1
  char *v9; // r0@2
  void *v10; // r0@3
  void *v11; // r0@4
  void *v12; // r0@5
  char *v13; // r0@6
  void *v14; // r0@7
  void *v15; // r0@8
  char *v16; // r0@9
  void *v17; // r0@10
  void *v18; // r0@11
  char *v19; // r0@12
  void *v20; // r0@13
  void *v21; // r0@14
  char *v22; // r0@15
  void *v23; // r0@16
  unsigned int *v25; // r2@18
  signed int v26; // r1@20
  unsigned int *v27; // r2@22
  signed int v28; // r1@24
  unsigned int *v29; // r2@26
  signed int v30; // r1@28
  unsigned int *v31; // r2@30
  signed int v32; // r1@32
  unsigned int *v33; // r2@34
  signed int v34; // r1@36
  unsigned int *v35; // r2@38
  signed int v36; // r1@40
  unsigned int *v37; // r2@42
  signed int v38; // r1@44
  unsigned int *v39; // r2@46
  signed int v40; // r1@48
  unsigned int *v41; // r2@50
  signed int v42; // r1@52
  unsigned int *v43; // r2@54
  signed int v44; // r1@56
  unsigned int *v45; // r2@58
  signed int v46; // r1@60
  unsigned int *v47; // r2@62
  signed int v48; // r1@64
  unsigned int *v49; // r2@66
  signed int v50; // r1@68
  unsigned int *v51; // r2@70
  signed int v52; // r1@72
  unsigned int *v53; // r2@74
  signed int v54; // r1@76
  unsigned int *v55; // r2@78
  signed int v56; // r1@80
  char *v57; // [sp+0h] [bp-80h]@14
  int v58; // [sp+8h] [bp-78h]@14
  int v59; // [sp+Ch] [bp-74h]@14
  char *v60; // [sp+10h] [bp-70h]@11
  int v61; // [sp+18h] [bp-68h]@11
  int v62; // [sp+1Ch] [bp-64h]@11
  char *v63; // [sp+20h] [bp-60h]@8
  int v64; // [sp+28h] [bp-58h]@8
  int v65; // [sp+2Ch] [bp-54h]@8
  char *v66; // [sp+30h] [bp-50h]@5
  int v67; // [sp+38h] [bp-48h]@5
  int v68; // [sp+3Ch] [bp-44h]@5
  int v69; // [sp+44h] [bp-3Ch]@4
  char *v70; // [sp+48h] [bp-38h]@1
  int v71; // [sp+50h] [bp-30h]@1
  int v72; // [sp+54h] [bp-2Ch]@1
  char v73; // [sp+58h] [bp-28h]@1
  int v74; // [sp+5Ch] [bp-24h]@1
  int v75; // [sp+60h] [bp-20h]@1
  int v76; // [sp+64h] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  EntityInteraction::setInteractText((int *)(a1 + 28), a2);
  sub_119C884((void **)&v71, "type");
  v70 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v72, v4, &v71, (int *)&v70);
  mce::UUID::fromString((int)&v73, &v72);
  v5 = v74;
  v6 = v75;
  v7 = v76;
  *(_DWORD *)v3 = *(_DWORD *)&v73;
  *(_DWORD *)(v3 + 4) = v5;
  *(_DWORD *)(v3 + 8) = v6;
  *(_DWORD *)(v3 + 12) = v7;
  v8 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v72 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v8);
  }
  v9 = v70 - 12;
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v70 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v71 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v69, "quantity");
  *(_DWORD *)(v3 + 32) += webjson::getFieldAsInt(v4, &v69, 0);
  v11 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v69 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v67, "productId");
  v66 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v68, v4, &v67, (int *)&v66);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 16),
    &v68);
  v12 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v68 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = v66 - 12;
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v66 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v67 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C884((void **)&v64, "friendlyName");
  v63 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v65, v4, &v64, (int *)&v63);
    (int *)(v3 + 20),
    &v65);
  v15 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v65 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = v63 - 12;
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v63 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v64 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v61, "purchaseReceipt");
  v60 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v62, v4, &v61, (int *)&v60);
    (int *)(v3 + 36),
    &v62);
  v18 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v62 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = v60 - 12;
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v60 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v61 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  sub_119C884((void **)&v58, "creatorId");
  v57 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v59, v4, &v58, (int *)&v57);
    (int *)(v3 + 24),
    &v59);
  v21 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v59 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = v57 - 12;
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v57 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v58 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  return Entitlement::_verifyProofOfPurchaseReceipt((Entitlement *)v3);
}


void __fastcall Entitlement::_getKey(Entitlement *this, int a2)
{
  Entitlement::_getKey(this, a2);
}


void __fastcall Entitlement::getContentKey(Entitlement *this, int a2)
{
  Entitlement::getContentKey(this, a2);
}


int __fastcall Entitlement::Entitlement(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(v2 + 8);
  v7 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)v3 = v4;
  *(_DWORD *)(v3 + 4) = v5;
  *(_DWORD *)(v3 + 8) = v6;
  *(_DWORD *)(v3 + 12) = v7;
  sub_DA73B4((int *)(v3 + 16), (int *)(v2 + 16));
  sub_DA73B4((int *)(v3 + 20), (int *)(v2 + 20));
  sub_DA73B4((int *)(v3 + 24), (int *)(v2 + 24));
  sub_DA73B4((int *)(v3 + 28), (int *)(v2 + 28));
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v2 + 32);
  sub_DA73B4((int *)(v3 + 36), (int *)(v2 + 36));
  sub_DA73B4((int *)(v3 + 40), (int *)(v2 + 40));
  *(_WORD *)(v3 + 44) = *(_WORD *)(v2 + 44);
  return v3;
}


int __fastcall Entitlement::Entitlement(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  mce::UUID::fromString(a1, a2);
  sub_119C884((void **)(v2 + 16), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 20), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 24), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 28), (const char *)&unk_257BC67);
  *(_DWORD *)(v2 + 32) = 0;
  sub_119C884((void **)(v2 + 36), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 40), (const char *)&unk_257BC67);
  *(_WORD *)(v2 + 44) = 0;
  return v2;
}


signed int __fastcall Entitlement::isOwned(Entitlement *this)
{
  int v1; // r1@2
  bool v2; // zf@2
  signed int result; // r0@5

  if ( !*((_BYTE *)this + 44) )
    goto LABEL_9;
  v1 = *(_DWORD *)(*((_DWORD *)this + 9) - 12);
  v2 = v1 == 0;
  if ( v1 )
    v2 = *((_DWORD *)this + 8) == 0;
  if ( v2 )
LABEL_9:
    result = 0;
  else
    result = 1;
  return result;
}


signed int __fastcall Entitlement::markDeviceOwnership(int a1, int *a2)
{
  int v2; // r4@1
  signed int result; // r0@1

  v2 = a1;
  *(_WORD *)(a1 + 44) = 257;
  EntityInteraction::setInteractText((int *)(a1 + 36), a2);
  result = 1;
  *(_DWORD *)(v2 + 32) = 1;
  return result;
}


int __fastcall Entitlement::_verifyProofOfPurchaseReceipt(Entitlement *this)
{
  int *v1; // r6@0
  int v2; // r7@0
  Entitlement *v3; // r5@1
  Crypto::Pkcs7::Pkcs7Verifier *v4; // r4@1
  _WORD *v5; // r4@1
  signed int v6; // r5@2
  int v7; // r9@2
  char *i; // r2@2
  __int64 v9; // r0@4
  __int16 v10; // r10@4
  char *v11; // r0@7
  void *v12; // r0@10
  void *v13; // r0@12
  void *v14; // r0@13
  char *v15; // r0@14
  void *v16; // r0@15
  char *v17; // r0@16
  void *v18; // r0@17
  char *v19; // r0@18
  void *v20; // r0@19
  size_t v21; // r2@22
  bool v22; // zf@22
  _DWORD *v23; // r1@27
  _DWORD *v24; // r1@29
  char *v25; // r0@33
  void *v26; // r0@38
  char *v27; // r0@39
  unsigned int *v29; // r2@43
  signed int v30; // r1@45
  unsigned int *v31; // r2@47
  signed int v32; // r1@49
  unsigned int *v33; // r2@51
  signed int v34; // r1@53
  unsigned int *v35; // r2@55
  signed int v36; // r1@57
  unsigned int *v37; // r2@59
  signed int v38; // r1@61
  unsigned int *v39; // r2@63
  signed int v40; // r1@65
  unsigned int *v41; // r2@67
  signed int v42; // r1@69
  unsigned int *v43; // r2@71
  signed int v44; // r1@73
  unsigned int *v45; // r2@75
  signed int v46; // r1@77
  unsigned int *v47; // r2@79
  signed int v48; // r1@81
  unsigned int *v49; // r2@83
  signed int v50; // r1@85
  unsigned int *v51; // r2@87
  signed int v52; // r1@89
  unsigned int *v53; // r2@91
  signed int v54; // r1@93
  Entitlement *v55; // [sp+0h] [bp-90h]@1
  Crypto::Pkcs7::Pkcs7Verifier *v56; // [sp+4h] [bp-8Ch]@1
  char *v57; // [sp+8h] [bp-88h]@18
  int v58; // [sp+10h] [bp-80h]@18
  int *v59; // [sp+14h] [bp-7Ch]@18
  char *v60; // [sp+18h] [bp-78h]@16
  int v61; // [sp+20h] [bp-70h]@16
  void *s1; // [sp+24h] [bp-6Ch]@16
  char *v63; // [sp+28h] [bp-68h]@13
  int v64; // [sp+30h] [bp-60h]@13
  int v65; // [sp+34h] [bp-5Ch]@13
  __int64 v66; // [sp+38h] [bp-58h]@13
  __int64 v67; // [sp+40h] [bp-50h]@21
  int v68; // [sp+48h] [bp-48h]@12
  int v69; // [sp+4Ch] [bp-44h]@13
  int v70; // [sp+50h] [bp-40h]@10
  int v71; // [sp+54h] [bp-3Ch]@10
  char *v72; // [sp+58h] [bp-38h]@1
  void *ptr; // [sp+5Ch] [bp-34h]@1
  int v74; // [sp+60h] [bp-30h]@1

  v3 = this;
  v4 = (Crypto::Pkcs7::Pkcs7Verifier *)operator new(8u);
  Crypto::Pkcs7::Pkcs7Verifier::Pkcs7Verifier(v4);
  v55 = v3;
  v56 = v4;
  (*(void (__fastcall **)(void **, Crypto::Pkcs7::Pkcs7Verifier *, char *))(*(_DWORD *)v4 + 8))(
    &ptr,
    v4,
    (char *)v3 + 36);
  v72 = (char *)&unk_28898CC;
  v5 = ptr;
  if ( (unsigned int)(v74 - (_DWORD)ptr) >> 1 )
  {
    v6 = (unsigned int)(v74 - (_DWORD)ptr) >> 1;
    v7 = 0;
    v1 = &dword_28898C0;
    for ( i = (char *)&unk_28898CC; ; i = v72 )
    {
      v9 = *(_QWORD *)(i - 12);
      v10 = v5[v7];
      v2 = v9 + 1;
      if ( (unsigned int)(v9 + 1) > HIDWORD(v9) || *((_DWORD *)i - 1) >= 1 )
      {
        sub_119CAF8((const void **)&v72, v2);
        i = v72;
        LODWORD(v9) = *((_DWORD *)v72 - 3);
      }
      i[v9] = v10;
      v11 = v72;
      if ( (int *)(v72 - 12) != &dword_28898C0 )
        *((_DWORD *)v72 - 1) = 0;
        *((_DWORD *)v11 - 3) = v2;
        v11[v2] = byte_26C67B8[0];
      if ( ++v7 >= v6 )
        break;
    }
  }
  sub_119C854(&v70, (int *)&v72);
  utility::conversions::to_utf8string(&v71, &v70);
  v12 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v70 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
        v2 = __strex(v30 - 1, v29);
      while ( v2 );
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  if ( *(_DWORD *)(v71 - 12) )
    utility::conversions::to_string_t(&v68, &v71);
    web::json::value::parse();
    v13 = (void *)(v68 - 12);
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v68 - 4);
      if ( &pthread_create )
        __dmb();
        do
        {
          v36 = __ldrex(v35);
          v2 = __strex(v36 - 1, v35);
        }
        while ( v2 );
      else
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    sub_119C884((void **)&v64, "itemType");
    v63 = (char *)&unk_28898CC;
    webjson::getFieldAsString(&v65, (web::json::value *)&v69, &v64, (int *)&v63);
    mce::UUID::fromString((int)&v66, &v65);
    v14 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v65 - 4);
          v38 = __ldrex(v37);
          v2 = __strex(v38 - 1, v37);
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = v63 - 12;
    if ( (int *)(v63 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v63 - 4);
          v40 = __ldrex(v39);
          v2 = __strex(v40 - 1, v39);
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v64 - 4);
          v42 = __ldrex(v41);
          v2 = __strex(v42 - 1, v41);
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    sub_119C884((void **)&v61, "creatorId");
    v60 = (char *)&unk_28898CC;
    webjson::getFieldAsString((int *)&s1, (web::json::value *)&v69, &v61, (int *)&v60);
    v17 = v60 - 12;
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v60 - 4);
          v44 = __ldrex(v43);
          v2 = __strex(v44 - 1, v43);
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    v18 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v61 - 4);
          v46 = __ldrex(v45);
          v2 = __strex(v46 - 1, v45);
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
    sub_119C884((void **)&v58, "ownerId");
    v57 = (char *)&unk_28898CC;
    webjson::getFieldAsString((int *)&v59, (web::json::value *)&v69, &v58, (int *)&v57);
    v19 = v57 - 12;
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v57 - 4);
          v48 = __ldrex(v47);
          v2 = __strex(v48 - 1, v47);
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    v20 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v58 - 4);
          v50 = __ldrex(v49);
          v2 = __strex(v50 - 1, v49);
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
    if ( *(_QWORD *)&mce::UUID::EMPTY == v66 )
      v1 = (int *)HIDWORD(qword_287E930);
      v2 = HIDWORD(v67) ^ HIDWORD(qword_287E930);
      if ( qword_287E930 == v67 )
        goto LABEL_150;
    v21 = *((_DWORD *)s1 - 3);
    v22 = v21 == 0;
    if ( v21 )
      v1 = v59;
      v2 = *(v59 - 3);
      v22 = v2 == 0;
    if ( !v22
      && *(_QWORD *)v55 == v66
      && *((_QWORD *)v55 + 1) == v67
      && (v23 = (_DWORD *)*((_DWORD *)v55 + 6), v21 == *(v23 - 3))
      && !memcmp(s1, v23, v21)
      && (v24 = (_DWORD *)*((_DWORD *)v55 + 7), v2 == *(v24 - 3))
      && !memcmp(v1, v24, v2) )
      *((_BYTE *)v55 + 44) = 1;
LABEL_150:
      *((_BYTE *)v55 + 44) = 0;
      sub_119CAD8((void **)v55 + 10, (char *)&unk_257BC67, 0);
    if ( v1 - 3 != &dword_28898C0 )
      v51 = (unsigned int *)(v1 - 1);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v1 - 3);
    v25 = (char *)s1 - 12;
    if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)((char *)s1 - 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v25);
    if ( v69 )
      (*(void (**)(void))(*(_DWORD *)v69 + 96))();
  else
    *((_BYTE *)v55 + 44) = 0;
    sub_119CAD8((void **)v55 + 10, (char *)&unk_257BC67, 0);
  v26 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v71 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  v27 = v72 - 12;
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v72 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  if ( ptr )
    operator delete(ptr);
  return (*(int (__fastcall **)(Crypto::Pkcs7::Pkcs7Verifier *))(*(_DWORD *)v56 + 4))(v56);
}


int __fastcall Entitlement::Entitlement(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r2@1
  int v5; // r7@1
  int v6; // r1@1

  v2 = a1;
  v3 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)v2 = v3;
  *(_DWORD *)(v2 + 4) = v4;
  *(_DWORD *)(v2 + 8) = v5;
  *(_DWORD *)(v2 + 12) = v6;
  sub_119C884((void **)(v2 + 16), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 20), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 24), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 28), (const char *)&unk_257BC67);
  *(_DWORD *)(v2 + 32) = 0;
  sub_119C884((void **)(v2 + 36), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 40), (const char *)&unk_257BC67);
  *(_WORD *)(v2 + 44) = 0;
  return v2;
}


void __fastcall Entitlement::getContentKey(Entitlement *this, int a2)
{
  void **v2; // r4@1
  int v3; // r0@2
  bool v4; // zf@2
  void *v5; // r0@9
  unsigned int *v6; // r2@10
  signed int v7; // r1@12
  int v8; // [sp+4h] [bp-1Ch]@9

  v2 = (void **)this;
  if ( !*(_BYTE *)(a2 + 44) )
    goto LABEL_19;
  v3 = *(_DWORD *)(*(_DWORD *)(a2 + 36) - 12);
  v4 = v3 == 0;
  if ( v3 )
    v4 = *(_DWORD *)(a2 + 32) == 0;
  if ( v4 )
  {
LABEL_19:
    sub_119C884(v2, (const char *)&unk_257BC67);
  }
  else if ( *(_DWORD *)(*(_DWORD *)(a2 + 40) - 12) )
    Entitlement::_getKey((Entitlement *)v2, a2);
  else
    mce::UUID::asString((mce::UUID *)&v8);
    PackManifestFactory::contentKeyLookup((char **)v2, (int **)&v8);
    v5 = (void *)(v8 - 12);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
}


void __fastcall Entitlement::_getKey(Entitlement *this, int a2)
{
  const char *v2; // r5@0
  void **v3; // r9@1
  int v4; // r8@1
  void *v5; // r0@2
  void *v6; // r0@4
  int v7; // r0@5
  const char *v8; // r6@6
  int v9; // r1@6
  bool v10; // zf@6
  int *v11; // r8@9
  int v12; // t1@9
  _BYTE *v13; // r11@10
  int v14; // r7@10
  _BYTE *v15; // r10@11
  _BYTE *v16; // r4@11
  int v17; // r6@14
  unsigned int v18; // r9@17
  int v19; // r1@18
  _BYTE *v20; // r4@18
  unsigned int v21; // r5@19
  unsigned int v22; // r6@19
  void *v23; // r0@21
  unsigned int v24; // r4@22
  _BYTE *v25; // r8@23
  __int64 v26; // kr00_8@24
  char *v27; // r2@28
  unsigned int v28; // r9@29
  __int64 v29; // r0@30
  __int16 v30; // r10@30
  unsigned int v31; // r5@30
  char *v32; // r0@36
  char *v33; // r0@47
  char *v34; // r0@48
  unsigned int *v35; // r2@50
  signed int v36; // r1@52
  unsigned int *v37; // r2@54
  signed int v38; // r1@56
  unsigned int *v39; // r2@58
  signed int v40; // r1@60
  unsigned int *v41; // r2@62
  signed int v42; // r1@64
  unsigned int *v43; // r2@82
  signed int v44; // r1@84
  unsigned int *v45; // r2@86
  signed int v46; // r1@88
  void **v47; // [sp+4h] [bp-64h]@15
  void *v48; // [sp+8h] [bp-60h]@23
  void *v49; // [sp+Ch] [bp-5Ch]@23
  _BYTE *v50; // [sp+10h] [bp-58h]@22
  void *v51; // [sp+14h] [bp-54h]@36
  char *v52; // [sp+18h] [bp-50h]@28
  int v53; // [sp+1Ch] [bp-4Ch]@21
  void *ptr; // [sp+20h] [bp-48h]@21
  _BYTE *v55; // [sp+24h] [bp-44h]@22
  int v56; // [sp+30h] [bp-38h]@5
  const char *v57; // [sp+34h] [bp-34h]@5
  int v58; // [sp+38h] [bp-30h]@4
  const char *v59; // [sp+3Ch] [bp-2Ch]@4

  v3 = (void **)this;
  v4 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v5 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v5 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v5 + 488))(&v58);
  utility::conversions::utf8_to_utf16(&v59, &v58);
  v6 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v58 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  Util::toLower((void **)&v56, *(_DWORD *)(*(_DWORD *)(v4 + 28) - 12), *(_DWORD *)(v4 + 28));
  utility::conversions::utf8_to_utf16(&v57, &v56);
  v7 = v56 - 12;
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v56 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1((void *)v7);
  v8 = v59;
  v9 = *((_DWORD *)v59 - 3);
  v10 = v9 == 0;
  if ( v9 )
    v2 = v57;
    v7 = *((_DWORD *)v57 - 3);
    v10 = v7 == 0;
  if ( v10 || (v12 = *(_DWORD *)(v4 + 40), v11 = (int *)(v4 + 40), !*(_DWORD *)(v12 - 12)) )
    sub_119C884(v3, (const char *)&unk_257BC67);
    v13 = 0;
    v14 = 2 * v9;
    if ( 2 * v9 )
      v15 = operator new(2 * v9);
      _aeabi_memcpy(v15, v8, v14);
      v2 = v57;
      v16 = v15;
      v7 = *((_DWORD *)v57 - 3);
      v15 = 0;
      v16 = 0;
    v17 = 2 * v7;
    if ( 0 == 2 * v7 )
      v47 = v3;
      v13 = operator new(2 * v7);
      _aeabi_memcpy(v13, v2, v17);
    v18 = &v16[v14] - v15;
    if ( &v16[v14] == v15 )
      v19 = &v16[v14] - v15;
      v20 = 0;
      _aeabi_memclr8(0, v19);
      v20 = operator new(&v16[v14] - v15);
      _aeabi_memclr(v20, v18);
      v21 = v17;
      v22 = 0;
      {
        v20[v22] = v13[v22 % v21] ^ v15[v22];
        ++v22;
      }
      while ( v18 != v22 );
    utility::conversions::to_string_t(&v53, v11);
    utility::conversions::from_base64((int)&ptr, &v53);
    v23 = (void *)(v53 - 12);
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v53 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
      else
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v23);
    v50 = v20;
    v24 = v55 - (_BYTE *)ptr;
    if ( v55 == ptr )
      v48 = v13;
      v49 = v15;
      v25 = 0;
      _aeabi_memclr8(0, v55 - (_BYTE *)ptr);
      v25 = operator new(v55 - (_BYTE *)ptr);
      v26 = *(_QWORD *)&ptr;
      _aeabi_memclr(v25, v24);
      if ( HIDWORD(v26) == (_DWORD)v26 )
        v48 = v13;
          v25[HIDWORD(v26)] = v50[HIDWORD(v26) % v18] ^ *(_BYTE *)(v26 + HIDWORD(v26));
        while ( HIDWORD(v26) + 1 < (unsigned int)(HIDWORD(v26) - v26) );
    v27 = (char *)&unk_27D67A0;
    v52 = (char *)&unk_27D67A0;
    if ( v24 >> 1 )
      v28 = 0;
        v29 = *(_QWORD *)(v27 - 12);
        v30 = *(_WORD *)&v25[2 * v28];
        v31 = v29 + 1;
        if ( (unsigned int)(v29 + 1) > HIDWORD(v29) || *((_DWORD *)v27 - 1) >= 1 )
        {
          j__ZNSbIDsSt11char_traitsIDsESaIDsEE7reserveEj((_WORD **)&v52, v31);
          v27 = v52;
          LODWORD(v29) = *((_DWORD *)v52 - 3);
        }
        *(_WORD *)&v27[2 * v29] = v30;
        if ( (_UNKNOWN *)(v27 - 12) != &ZNSbIDsSt11char_traitsIDsESaIDsEE4_Rep20_S_empty_rep_storageE )
          *((_DWORD *)v27 - 1) = 0;
          *((_DWORD *)v27 - 3) = v31;
          *(_WORD *)&v27[2 * v31] = 0;
        ++v28;
      while ( v28 < v24 >> 1 );
    utility::conversions::to_utf8string((const void **)&v51, &v52);
    *v47 = v51;
    v32 = v52 - 12;
    if ( (_UNKNOWN *)(v52 - 12) != &ZNSbIDsSt11char_traitsIDsESaIDsEE4_Rep20_S_empty_rep_storageE )
      v45 = (unsigned int *)(v52 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        operator delete(v32);
    if ( v25 )
      operator delete(v25);
    if ( ptr )
      operator delete(ptr);
    if ( v50 )
      operator delete(v50);
    if ( v48 )
      operator delete(v48);
    if ( v49 )
      operator delete(v49);
  v33 = (char *)(v57 - 12);
  if ( (_UNKNOWN *)(v57 - 12) != &ZNSbIDsSt11char_traitsIDsESaIDsEE4_Rep20_S_empty_rep_storageE )
    v39 = (unsigned int *)(v57 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      operator delete(v33);
  v34 = (char *)(v59 - 12);
  if ( (_UNKNOWN *)(v59 - 12) != &ZNSbIDsSt11char_traitsIDsESaIDsEE4_Rep20_S_empty_rep_storageE )
    v41 = (unsigned int *)(v59 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      operator delete(v34);
}


const void **__fastcall Entitlement::clear(Entitlement *this, int a2)
{
  Entitlement *v2; // r4@1
  const void **result; // r0@1

  v2 = this;
  result = (const void **)*((_BYTE *)this + 45);
  if ( result == (const void **)a2 )
  {
    *((_BYTE *)v2 + 44) = 0;
    sub_119CAD8((void **)v2 + 9, (char *)&unk_257BC67, 0);
    result = sub_119CAD8((void **)v2 + 10, (char *)&unk_257BC67, 0);
    *((_DWORD *)v2 + 8) = 0;
    *((_BYTE *)v2 + 45) = 0;
  }
  return result;
}


Entitlement *__fastcall Entitlement::~Entitlement(Entitlement *this)
{
  Entitlement *v1; // r5@1
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
  v2 = *((_DWORD *)this + 10);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 9);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v4 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 7);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v6 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 6);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v8 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 5);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v10 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 4);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v12 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  return v1;
}
