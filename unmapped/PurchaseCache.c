

signed int __fastcall PurchaseCache::isPurchaseFulfilled(int a1, const void **a2)
{
  __int64 v2; // r6@1
  const void *v3; // r4@2
  size_t v4; // r5@2
  signed int result; // r0@6

  v2 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v2 == HIDWORD(v2) )
    goto LABEL_6;
  v3 = *a2;
  v4 = *((_DWORD *)*a2 - 3);
  while ( *(_DWORD *)(*(_DWORD *)v2 - 12) != v4 || memcmp(*(const void **)v2, v3, v4) )
  {
    LODWORD(v2) = v2 + 12;
    if ( HIDWORD(v2) == (_DWORD)v2 )
      goto LABEL_6;
  }
  if ( (_DWORD)v2 )
    result = *(_BYTE *)(v2 + 8);
    if ( *(_BYTE *)(v2 + 8) )
      result = 1;
  else
LABEL_6:
    result = 0;
  return result;
}


const void **__fastcall PurchaseCache::_findTransactionRecord(int a1, const void **a2)
{
  const void **v2; // r4@1
  const void **v3; // r7@1
  const void *v4; // r5@2
  size_t v5; // r6@2

  v3 = (const void **)(*(_QWORD *)(a1 + 8) >> 32);
  v2 = (const void **)*(_QWORD *)(a1 + 8);
  if ( v2 == v3 )
  {
LABEL_6:
    v2 = 0;
  }
  else
    v4 = *a2;
    v5 = *((_DWORD *)*a2 - 3);
    while ( *((_DWORD *)*v2 - 3) != v5 || memcmp(*v2, v4, v5) )
    {
      v2 += 3;
      if ( v3 == v2 )
        goto LABEL_6;
    }
  return v2;
}


int __fastcall PurchaseCache::PurchaseCache(int a1, int *a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r0@1
  int v6; // r1@1
  int v8; // [sp+0h] [bp-440h]@1
  int v9; // [sp+4h] [bp-43Ch]@1
  const char *v10; // [sp+8h] [bp-438h]@1
  int v11; // [sp+Ch] [bp-434h]@1
  char v12; // [sp+10h] [bp-430h]@1
  int v13; // [sp+14h] [bp-42Ch]@1
  RakNet *v14; // [sp+418h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v14 = _stack_chk_guard;
  v5 = *a2;
  v6 = *(_DWORD *)(*a2 - 12);
  v8 = v5;
  v9 = v6;
  v10 = "purchase_cache";
  v11 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v12, (int)&v8, 2);
  sub_119C884((void **)v3, (const char *)&v13);
  sub_119C854((int *)(v3 + 4), v4);
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  PurchaseCache::_load((PurchaseCache *)v3);
  if ( _stack_chk_guard != v14 )
    _stack_chk_fail(_stack_chk_guard - v14);
  return v3;
}


int __fastcall PurchaseCache::createRecord(int result, const void **a2, int *a3)
{
  int *v3; // r10@1
  int *v4; // r8@1
  const void *v5; // r5@1
  int v6; // r9@1
  size_t v7; // r4@1
  int v8; // r6@2
  int v9; // r7@2
  int *v10; // r0@6
  __int64 v11; // r0@6
  int *v12; // r0@7
  char *v13; // r1@7
  char *v14; // r0@9
  void *v15; // r0@10
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  int v20; // [sp+0h] [bp-30h]@6
  char *v21; // [sp+4h] [bp-2Ch]@7
  char v22; // [sp+8h] [bp-28h]@6

  v3 = (int *)a2;
  v4 = a3;
  v5 = *a2;
  v6 = result;
  v7 = *((_DWORD *)*a2 - 3);
  if ( v7 )
  {
    v8 = *(_QWORD *)(result + 8) >> 32;
    v9 = *(_QWORD *)(result + 8);
    if ( v9 == v8 )
      goto LABEL_6;
    while ( *(_DWORD *)(*(_DWORD *)v9 - 12) != v7 || memcmp(*(const void **)v9, v5, v7) )
    {
      v9 += 12;
      if ( v8 == v9 )
        goto LABEL_6;
    }
    if ( v9 )
      EntityInteraction::setInteractText((int *)v9, v3);
      EntityInteraction::setInteractText((int *)(v9 + 4), v4);
      *(_BYTE *)(v9 + 8) = 0;
    else
LABEL_6:
      v10 = sub_119C854(&v20, v3);
      sub_119C854(v10 + 1, v4);
      v22 = 0;
      v11 = *(_QWORD *)(v6 + 12);
      if ( (_DWORD)v11 == HIDWORD(v11) )
      {
        std::vector<TransactionRecord,std::allocator<TransactionRecord>>::_M_emplace_back_aux<TransactionRecord>(
          (unsigned __int64 *)(v6 + 8),
          (int)&v20);
        v13 = v21;
      }
      else
        v12 = sub_119C854((int *)v11, &v20);
        v12[1] = (int)v21;
        v13 = (char *)&unk_28898CC;
        v21 = (char *)&unk_28898CC;
        *((_BYTE *)v12 + 8) = v22;
        *(_DWORD *)(v6 + 12) += 12;
      v14 = v13 - 12;
      if ( (int *)(v13 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v13 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v14);
      v15 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v20 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
    result = (int)PurchaseCache::_save((PurchaseCache *)v6);
  }
  return result;
}


int __fastcall PurchaseCache::removeRecord(int result, const void **a2)
{
  const void *v2; // r5@1
  PurchaseCache *v3; // r8@1
  size_t v4; // r6@1
  const void **v5; // r4@2
  const void **v6; // r7@2

  v2 = *a2;
  v3 = (PurchaseCache *)result;
  v4 = *((_DWORD *)*a2 - 3);
  if ( v4 )
  {
    v5 = *(const void ***)(result + 8);
    v6 = *(const void ***)(result + 12);
    if ( v5 != v6 )
    {
      while ( *((_DWORD *)*v5 - 3) != v4 || memcmp(*v5, v2, v4) )
      {
        v5 += 3;
        if ( v6 == v5 )
          goto LABEL_9;
      }
      std::vector<TransactionRecord,std::allocator<TransactionRecord>>::_M_erase((int)v3 + 8, (int)v5);
    }
LABEL_9:
    result = (int)j_j_j__ZN13PurchaseCache5_saveEv(v3);
  }
  return result;
}


int *__fastcall PurchaseCache::getCachedPurchaseIdSet(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int *result; // r0@1
  int *i; // r6@1
  __int64 v6; // kr00_8@1
  char v7; // [sp+4h] [bp-1Ch]@2

  v2 = a1;
  v3 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  result = (int *)(*(_QWORD *)(a1 + 8) >> 32);
  for ( i = (int *)v6; i != result; result = *(int **)(v2 + 12) )
  {
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_emplace_unique<std::string &>(
      (int)&v7,
      v3,
      i);
    i += 3;
  }
  return result;
}


PurchaseCache *__fastcall PurchaseCache::~PurchaseCache(PurchaseCache *this)
{
  PurchaseCache *v1; // r11@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20
  int v11; // r1@25
  void *v12; // r0@25
  int *v13; // r0@26
  unsigned int *v15; // r2@28
  signed int v16; // r1@30
  unsigned int *v17; // r2@32
  signed int v18; // r1@34

  v1 = this;
  *(_QWORD *)&v2 = *((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
    {
      v8 = *(_DWORD *)(v2 + 4);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v9);
      }
      v10 = (int *)(*(_DWORD *)v2 - 12);
      if ( v10 != &dword_28898C0 )
        v6 = (unsigned int *)(*(_DWORD *)v2 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v10);
      v2 += 12;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 2);
  }
  if ( v2 )
    operator delete((void *)v2);
  v11 = *((_DWORD *)v1 + 1);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (int *)(*(_DWORD *)v1 - 12);
  if ( v13 != &dword_28898C0 )
    v17 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  return v1;
}


int *__fastcall PurchaseCache::tryGetPayloadFromRecord(int *a1, int a2, const void **a3)
{
  int v3; // r4@1
  int v4; // r7@1
  int *v5; // r8@1
  const void *v6; // r5@2
  size_t v7; // r6@2
  int *result; // r0@6

  v3 = *(_QWORD *)(a2 + 8) >> 32;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = a1;
  if ( v4 == v3 )
    goto LABEL_6;
  v6 = *a3;
  v7 = *((_DWORD *)*a3 - 3);
  while ( *(_DWORD *)(*(_DWORD *)v4 - 12) != v7 || memcmp(*(const void **)v4, v6, v7) )
  {
    v4 += 12;
    if ( v3 == v4 )
      goto LABEL_6;
  }
  if ( v4 )
    result = sub_119C854(v5, (int *)(v4 + 4));
  else
LABEL_6:
    result = (int *)&unk_28898CC;
    *v5 = (int)&unk_28898CC;
  return result;
}


void __fastcall PurchaseCache::_readTransactionRecord(int a1, char *a2, int a3)
{
  char *v3; // r5@1
  int v4; // r4@1
  char *v5; // r0@3
  size_t v6; // r2@4
  char *v7; // r0@8
  char v8; // r6@9
  int *v9; // r0@14
  __int64 v10; // r0@14
  int *v11; // r0@15
  char *v12; // r1@15
  char *v13; // r0@17
  void *v14; // r0@18
  void *v15; // r0@19
  void *v16; // r0@20
  char *v17; // r0@21
  char *v18; // r0@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  unsigned int *v23; // r2@32
  signed int v24; // r1@34
  unsigned int *v25; // r2@36
  signed int v26; // r1@38
  unsigned int *v27; // r2@40
  signed int v28; // r1@42
  unsigned int *v29; // r2@44
  signed int v30; // r1@46
  unsigned int *v31; // r2@48
  signed int v32; // r1@50
  unsigned int *v33; // r2@52
  signed int v34; // r1@54
  int v35; // [sp+4h] [bp-3Ch]@14
  char *v36; // [sp+8h] [bp-38h]@15
  char v37; // [sp+Ch] [bp-34h]@14
  int v38; // [sp+10h] [bp-30h]@12
  int v39; // [sp+14h] [bp-2Ch]@12
  char *v40; // [sp+18h] [bp-28h]@6
  char *v41; // [sp+1Ch] [bp-24h]@1
  char *v42; // [sp+20h] [bp-20h]@1
  void *s1; // [sp+24h] [bp-1Ch]@1
  char v44; // [sp+2Bh] [bp-15h]@9

  v3 = a2;
  v4 = a3;
  s1 = &unk_28898CC;
  v41 = (char *)&unk_28898CC;
  v42 = (char *)&unk_28898CC;
  if ( !(a2[*(_DWORD *)(*(_DWORD *)a2 - 12) + 20] & 2) )
    sub_119EB1C(a2, (const void **)&v41);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&s1,
    (int *)&v41);
  v5 = v41 - 12;
  if ( (int *)(v41 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v41 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v6 = *((_DWORD *)s1 - 3);
  if ( v6 != *((_DWORD *)PurchaseCache::mSectionDelimiter[0] - 3) || memcmp(s1, PurchaseCache::mSectionDelimiter[0], v6) )
    v40 = (char *)&unk_28898CC;
    if ( !(v3[*(_DWORD *)(*(_DWORD *)v3 - 12) + 20] & 2) )
      sub_119EB1C(v3, (const void **)&v40);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v42,
      (int *)&v40);
    v7 = v40 - 12;
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v40 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v7);
    v8 = 0;
    v44 = 0;
      sub_119EB2C(v3);
      v8 = v44;
      if ( v44 )
        v8 = 1;
    Util::base64_decode((const void **)&v39, (int *)&s1);
    Util::base64_decode((const void **)&v38, (int *)&v42);
    if ( !sub_119C9E8((const void **)&v38, "_") )
      sub_119CA68((const void **)&v38, 0, *(_BYTE **)(v38 - 12), 0);
    v9 = sub_119C854(&v35, &v39);
    sub_119C854(v9 + 1, &v38);
    v37 = v8;
    v10 = *(_QWORD *)(v4 + 4);
    if ( (_DWORD)v10 == HIDWORD(v10) )
      std::vector<TransactionRecord,std::allocator<TransactionRecord>>::_M_emplace_back_aux<TransactionRecord>(
        (unsigned __int64 *)v4,
        (int)&v35);
      v12 = v36;
      v11 = sub_119C854((int *)v10, &v35);
      v11[1] = (int)v36;
      v12 = (char *)&unk_28898CC;
      v36 = (char *)&unk_28898CC;
      *((_BYTE *)v11 + 8) = v37;
      *(_DWORD *)(v4 + 4) += 12;
    v13 = v12 - 12;
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v12 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    v14 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v35 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v38 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v39 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v42 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)((char *)s1 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
}


RakNet *__fastcall PurchaseCache::_save(PurchaseCache *this)
{
  PurchaseCache *v1; // r5@1
  int v2; // r4@1
  int v3; // r6@1
  char *v4; // r7@1
  int v5; // r4@1
  char v6; // r1@3
  char *v7; // r0@5
  void *v8; // r0@5
  int i; // r7@6
  int v10; // r11@6
  char *v11; // r4@13
  char *v12; // r4@13
  int v13; // r1@13
  char *v14; // r5@13
  int v15; // r4@13
  char v16; // r1@15
  char *v17; // r0@17
  void *v18; // r0@17
  void *v19; // r0@18
  unsigned __int8 *v20; // r0@19
  unsigned __int8 *v21; // r0@20
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  unsigned int *v26; // r2@31
  signed int v27; // r1@33
  unsigned int *v28; // r2@35
  signed int v29; // r1@37
  char *v30; // r5@56
  int v31; // r4@56
  char v32; // r1@58
  char *v33; // r0@60
  unsigned __int64 v34; // r2@60
  RakNet *result; // r0@60
  unsigned int *v36; // r2@62
  signed int v37; // r1@64
  RakNet *v38; // [sp+10h] [bp-1120h]@1
  int v39; // [sp+14h] [bp-111Ch]@13
  int v40; // [sp+18h] [bp-1118h]@13
  unsigned __int8 *v41; // [sp+20h] [bp-1110h]@11
  unsigned __int8 *v42; // [sp+28h] [bp-1108h]@8
  int v43; // [sp+2Ch] [bp-1104h]@1
  int v44[3]; // [sp+30h] [bp-1100h]@1
  void **v45; // [sp+40h] [bp-10F0h]@1
  int v46; // [sp+44h] [bp-10ECh]@60
  void **v47; // [sp+48h] [bp-10E8h]@1
  int v48; // [sp+4Ch] [bp-10E4h]@60
  void **v49; // [sp+107Ch] [bp-B4h]@1
  int v50; // [sp+10ECh] [bp-44h]@1
  __int16 v51; // [sp+10F0h] [bp-40h]@1
  int v52; // [sp+10F4h] [bp-3Ch]@1
  int v53; // [sp+10F8h] [bp-38h]@1
  int v54; // [sp+10FCh] [bp-34h]@1
  int v55; // [sp+1100h] [bp-30h]@1

  v1 = this;
  v38 = _stack_chk_guard;
  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)(*(_DWORD *)this - 12);
  sub_119D70C((int)&v49);
  v49 = &off_26D3AF0;
  v50 = 0;
  v51 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v44[0] = v2;
  v44[1] = v3;
  Core::FileStream::FileStream((int)&v45, (int)off_26D81A4, (__int64 *)v44, 16);
  v45 = &off_26D8170;
  v49 = &off_26D8198;
  v47 = &off_26D8184;
  PurchaseCache::_signRecords((void **)&v43, (int)v1, (__int64 *)v1 + 1);
  v4 = sub_119C904((char *)&v47, v43, *(_DWORD *)(v43 - 12));
  v5 = *(_DWORD *)&v4[*(_DWORD *)(*(_DWORD *)v4 - 12) + 124];
  if ( !v5 )
    sub_119C994();
  if ( *(_BYTE *)(v5 + 28) )
  {
    v6 = *(_BYTE *)(v5 + 39);
  }
  else
    sub_119C924(v5);
    v6 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v5 + 24))(v5, 10);
  v7 = sub_119C934(v4, v6);
  sub_119C944(v7);
  v8 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
    }
    else
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v10 = *((_QWORD *)v1 + 1) >> 32;
  for ( i = *((_QWORD *)v1 + 1); i != v10; i += 12 )
    if ( *(_DWORD *)(*(_DWORD *)i - 12) )
      sub_119C854((int *)&v42, (int *)i);
      sub_119C884((void **)&v42, "_");
    if ( *(_DWORD *)(*(_DWORD *)(i + 4) - 12) )
      sub_119C854((int *)&v41, (int *)(i + 4));
      sub_119C884((void **)&v41, "_");
    Util::base64_encode((Util *)&v40, v42, *((_DWORD *)v42 - 3), 1);
    Util::base64_encode((Util *)&v39, v41, *((_DWORD *)v41 - 3), 1);
    v11 = sub_119C904((char *)&v47, v40, *(_DWORD *)(v40 - 12));
    sub_119C904(v11, (int)" ", 1);
    v12 = sub_119C904(v11, v39, *(_DWORD *)(v39 - 12));
    sub_119C904(v12, (int)" ", 1);
    v13 = *(_BYTE *)(i + 8);
    v14 = sub_119D6CC(v12);
    v15 = *(_DWORD *)&v14[*(_DWORD *)(*(_DWORD *)v14 - 12) + 124];
    if ( !v15 )
      sub_119C994();
    if ( *(_BYTE *)(v15 + 28) )
      v16 = *(_BYTE *)(v15 + 39);
      sub_119C924(v15);
      v16 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v15 + 24))(v15, 10);
    v17 = sub_119C934(v14, v16);
    sub_119C944(v17);
    v18 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v39 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v18);
    v19 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v40 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    v20 = v41 - 12;
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v41 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
    v21 = v42 - 12;
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v42 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v21);
  v30 = sub_119C904(
          (char *)&v47,
          (int)PurchaseCache::mSectionDelimiter[0],
          *((_DWORD *)PurchaseCache::mSectionDelimiter[0] - 3));
  v31 = *(_DWORD *)&v30[*(_DWORD *)(*(_DWORD *)v30 - 12) + 124];
  if ( !v31 )
  if ( *(_BYTE *)(v31 + 28) )
    v32 = *(_BYTE *)(v31 + 39);
    sub_119C924(v31);
    v32 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v31 + 24))(v31, 10);
  v33 = sub_119C934(v30, v32);
  sub_119C944(v33);
  v45 = &off_26D679C;
  v49 = &off_26D67C4;
  v47 = &off_26D67B0;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v48, (int)&off_26D67C4, v34);
  v45 = &off_26D67DC;
  v49 = &off_26D67F0;
  v46 = 0;
  sub_119C964(&v49);
  result = (RakNet *)(_stack_chk_guard - v38);
  if ( _stack_chk_guard != v38 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall PurchaseCache::updateRecord(int result, const void **a2, int *a3, char a4)
{
  int *v4; // r11@1
  char v5; // r8@1
  const void *v6; // r5@1
  int *v7; // r9@1
  int v8; // r10@1
  size_t v9; // r6@1
  int v10; // r4@2
  int v11; // r7@2
  int *v12; // r0@6
  __int64 v13; // r0@6
  int *v14; // r0@7
  char *v15; // r1@7
  char *v16; // r0@9
  void *v17; // r0@10
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  int v22; // [sp+4h] [bp-34h]@6
  char *v23; // [sp+8h] [bp-30h]@7
  char v24; // [sp+Ch] [bp-2Ch]@6

  v4 = (int *)a2;
  v5 = a4;
  v6 = *a2;
  v7 = a3;
  v8 = result;
  v9 = *((_DWORD *)*a2 - 3);
  if ( v9 )
  {
    v11 = *(_QWORD *)(result + 8) >> 32;
    v10 = *(_QWORD *)(result + 8);
    if ( v10 == v11 )
      goto LABEL_6;
    while ( *(_DWORD *)(*(_DWORD *)v10 - 12) != v9 || memcmp(*(const void **)v10, v6, v9) )
    {
      v10 += 12;
      if ( v11 == v10 )
        goto LABEL_6;
    }
    if ( v10 )
      *(_BYTE *)(v10 + 8) = v5;
    else
LABEL_6:
      v12 = sub_119C854(&v22, v4);
      sub_119C854(v12 + 1, v7);
      v24 = v5;
      v13 = *(_QWORD *)(v8 + 12);
      if ( (_DWORD)v13 == HIDWORD(v13) )
      {
        std::vector<TransactionRecord,std::allocator<TransactionRecord>>::_M_emplace_back_aux<TransactionRecord>(
          (unsigned __int64 *)(v8 + 8),
          (int)&v22);
        v15 = v23;
      }
      else
        v14 = sub_119C854((int *)v13, &v22);
        v14[1] = (int)v23;
        v15 = (char *)&unk_28898CC;
        v23 = (char *)&unk_28898CC;
        *((_BYTE *)v14 + 8) = v24;
        *(_DWORD *)(v8 + 12) += 12;
      v16 = v15 - 12;
      if ( (int *)(v15 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v15 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v16);
      v17 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v22 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v17);
    result = (int)PurchaseCache::_save((PurchaseCache *)v8);
  }
  return result;
}


char *__fastcall PurchaseCache::getTransactionRecords(PurchaseCache *this)
{
  return (char *)this + 8;
}


RakNet *__fastcall PurchaseCache::_load(PurchaseCache *this)
{
  PurchaseCache *v1; // r7@1
  __int64 v2; // r5@1
  int v3; // r4@1
  int v4; // r2@3
  int v5; // r9@5
  void **v6; // r11@6
  void **v7; // r10@6
  int v8; // r0@10
  void *v9; // r0@10
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // r2@22
  char *v13; // r0@24
  int v14; // r0@24
  char *v15; // r5@25
  signed int v16; // r6@25
  char *v17; // r4@25
  unsigned __int64 v18; // r2@25
  int v19; // r4@31
  int v20; // r6@31
  int v21; // r2@33
  signed int v22; // r1@35
  int v23; // r2@37
  signed int v24; // r1@39
  int v25; // r1@49
  void *v26; // r0@49
  int *v27; // r0@50
  char *v28; // r0@55
  char *v29; // r0@56
  RakNet *result; // r0@57
  unsigned int *v31; // r1@59
  signed int v32; // r0@61
  int v33; // r2@63
  signed int v34; // r1@65
  signed int v35; // r1@69
  void **v36; // [sp+14h] [bp-FCh]@6
  void **v37; // [sp+18h] [bp-F8h]@6
  void **v38; // [sp+1Ch] [bp-F4h]@6
  RakNet *v39; // [sp+28h] [bp-E8h]@1
  void *s2; // [sp+2Ch] [bp-E4h]@25
  void **v41; // [sp+30h] [bp-E0h]@10
  int v42; // [sp+34h] [bp-DCh]@11
  void **v43; // [sp+38h] [bp-D8h]@10
  void **v44; // [sp+3Ch] [bp-D4h]@10
  int v45; // [sp+58h] [bp-B8h]@11
  int v46; // [sp+60h] [bp-B0h]@10
  int v47; // [sp+64h] [bp-ACh]@11
  __int64 v48; // [sp+ECh] [bp-24h]@5
  int v49; // [sp+F4h] [bp-1Ch]@5
  char *v50; // [sp+F8h] [bp-18h]@5
  void *s1; // [sp+FCh] [bp-14h]@1
  __int64 v52; // [sp+100h] [bp-10h]@1
  void **v53; // [sp+110h] [bp+0h]@1
  int v54; // [sp+114h] [bp+4h]@57
  void **v55; // [sp+118h] [bp+8h]@1
  int v56; // [sp+11Ch] [bp+Ch]@57
  void **v57; // [sp+114Ch] [bp+103Ch]@1
  int v58; // [sp+11BCh] [bp+10ACh]@1
  __int16 v59; // [sp+11C0h] [bp+10B0h]@1
  int v60; // [sp+11C4h] [bp+10B4h]@1
  int v61; // [sp+11C8h] [bp+10B8h]@1
  int v62; // [sp+11CCh] [bp+10BCh]@1
  int v63; // [sp+11D0h] [bp+10C0h]@1

  v1 = this;
  v39 = _stack_chk_guard;
  LODWORD(v2) = *(_DWORD *)this;
  HIDWORD(v2) = *(_DWORD *)(*(_DWORD *)this - 12);
  sub_119D70C((int)&v57);
  v57 = &off_26D3AF0;
  v58 = 0;
  v59 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  v52 = v2;
  Core::FileStream::FileStream((int)&v53, (int)off_26D7EA4, &v52, 8);
  v53 = &off_26D7E64;
  v57 = &off_26D7E8C;
  v55 = &off_26D7E78;
  v3 = v61;
  s1 = &unk_28898CC;
  if ( !v61 )
    sub_119C994();
  if ( *(_BYTE *)(v61 + 28) )
  {
    v4 = *(_BYTE *)(v61 + 39);
  }
  else
    sub_119C924(v61);
    v4 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 24))(v3, 10);
  sub_119D71C((char *)&v53, (const void **)&s1, v4);
  v50 = (char *)&unk_28898CC;
  v48 = 0LL;
  v49 = 0;
  v5 = *(_DWORD *)((char *)*(v53 - 3) + (_DWORD)&v53 + 124);
  if ( !v5 )
LABEL_8:
  v38 = (void **)off_26D3F6C;
  v6 = off_26D3F60;
  v7 = (void **)off_26D3F68;
  v36 = off_26D3F84;
  v37 = off_26D3F80[0];
  while ( 1 )
    if ( *(_BYTE *)(v5 + 28) )
    {
      v12 = *(_BYTE *)(v5 + 39);
    }
    else
      sub_119C924(v5);
      v12 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v5 + 24))(v5, 10);
    v13 = sub_119D71C((char *)&v53, (const void **)&v50, v12);
    v14 = (int)&v13[*(_DWORD *)(*(_DWORD *)v13 - 12)];
    if ( !v14 || *(_DWORD *)(v14 + 20) & 5 )
      break;
    v8 = sub_119DC40((int)&v41, (unsigned int *)&v50, 24);
    PurchaseCache::_readTransactionRecord(v8, (char *)&v41, (int)&v48);
    v41 = v6;
    *(_DWORD *)((char *)*(v6 - 3) + (_DWORD)&v41) = v37;
    v43 = v36;
    v44 = &off_27734E8;
    v9 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v46 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v9);
    v44 = &off_26D40A8;
    sub_119C954((unsigned int **)&v45);
    v41 = v7;
    *(_DWORD *)((char *)*(v7 - 3) + (_DWORD)&v41) = v38;
    v42 = 0;
    sub_119C964(&v47);
    v5 = *(_DWORD *)((char *)*(v53 - 3) + (_DWORD)&v53 + 124);
    if ( !v5 )
      goto LABEL_8;
  PurchaseCache::_signRecords(&s2, (int)v1, &v48);
  v15 = (char *)s2;
  v16 = 0;
  v17 = (char *)s2 - 12;
  LODWORD(v18) = *((_DWORD *)s1 - 3);
  if ( (_DWORD)v18 == *((_DWORD *)s2 - 3) && !memcmp(s1, s2, v18) )
    v16 = 1;
  if ( (int *)v17 != &dword_28898C0 )
    v31 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v32 = __ldrex(v31);
        HIDWORD(v18) = __strex(v32 - 1, v31);
      while ( HIDWORD(v18) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  if ( v16 == 1 )
    std::vector<TransactionRecord,std::allocator<TransactionRecord>>::_M_move_assign((int)v1 + 8, (int)&v48);
  v20 = HIDWORD(v48);
  v19 = v48;
  if ( (_DWORD)v48 != HIDWORD(v48) )
    do
      v25 = *(_DWORD *)(v19 + 4);
      v26 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v21 = v25 - 4;
        if ( &pthread_create )
        {
          __dmb();
          do
          {
            v22 = __ldrex((unsigned int *)v18);
            HIDWORD(v18) = v22 - 1;
          }
          while ( __strex(v22 - 1, (unsigned int *)v18) );
        }
        else
          v22 = *(_DWORD *)v18;
          HIDWORD(v18) = *(_DWORD *)v18 - 1;
          *(_DWORD *)v18 = HIDWORD(v18);
        if ( v22 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v26);
      v27 = (int *)(*(_DWORD *)v19 - 12);
      if ( v27 != &dword_28898C0 )
        v23 = *(_DWORD *)v19 - 4;
            v24 = __ldrex((unsigned int *)v18);
            HIDWORD(v18) = v24 - 1;
          while ( __strex(v24 - 1, (unsigned int *)v18) );
          v24 = *(_DWORD *)v18;
        if ( v24 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v27);
      v19 += 12;
    while ( v19 != v20 );
    v19 = v48;
  if ( v19 )
    operator delete((void *)v19);
  v28 = v50 - 12;
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v33 = (int)(v50 - 4);
        v34 = __ldrex((unsigned int *)v18);
        HIDWORD(v18) = v34 - 1;
      while ( __strex(v34 - 1, (unsigned int *)v18) );
      v34 = *(_DWORD *)v18;
      HIDWORD(v18) = *(_DWORD *)v18 - 1;
      *(_DWORD *)v18 = HIDWORD(v18);
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  LODWORD(v18) = &dword_28898C0;
  v29 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    LODWORD(v18) = (char *)s1 - 4;
        v35 = __ldrex((unsigned int *)v18);
        HIDWORD(v18) = v35 - 1;
      while ( __strex(v35 - 1, (unsigned int *)v18) );
      v35 = *(_DWORD *)v18;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  v53 = &off_26D7EEC;
  v57 = &off_26D7F14;
  v55 = &off_26D7F00;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v56, (int)&off_26D7F14, v18);
  v53 = &off_26D7F6C;
  v57 = &off_26D7F80;
  v54 = 0;
  sub_119C964(&v57);
  result = (RakNet *)(_stack_chk_guard - v39);
  if ( _stack_chk_guard != v39 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall PurchaseCache::_readTransactionRecord(int a1, char *a2, int a3)
{
  PurchaseCache::_readTransactionRecord(a1, a2, a3);
}


RakNet *__fastcall PurchaseCache::_signRecords(void **a1, int a2, __int64 *a3)
{
  void **v3; // r4@1
  __int64 *v4; // r5@1
  int v5; // r6@1
  CSHA1 *v6; // r0@1
  __int64 i; // r6@1
  RakNet *result; // r0@3
  char v9; // [sp+8h] [bp-160h]@3
  char v10; // [sp+8Ch] [bp-DCh]@1
  RakNet *v11; // [sp+150h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v11 = _stack_chk_guard;
  v6 = (CSHA1 *)CSHA1::CSHA1((CSHA1 *)&v10);
  CSHA1::Update(v6, *(const unsigned __int8 **)(v5 + 4), *(_DWORD *)(*(_DWORD *)(v5 + 4) - 12));
  for ( i = *v4; (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 4 )
  {
    CSHA1::Update((CSHA1 *)&v10, *(const unsigned __int8 **)i, *(_DWORD *)(*(_DWORD *)i - 12));
    CSHA1::Update((CSHA1 *)&v10, *(const unsigned __int8 **)(i + 4), *(_DWORD *)(*(_DWORD *)(i + 4) - 12));
    LODWORD(i) = i + 8;
    CSHA1::Update((CSHA1 *)&v10, (const unsigned __int8 *)i, 1u);
  }
  CSHA1::Update(
    (CSHA1 *)&v10,
    (const unsigned __int8 *)PurchaseCache::mSectionDelimiter[0],
    *((_DWORD *)PurchaseCache::mSectionDelimiter[0] - 3));
  _aeabi_memclr8(&v9, 128);
  CSHA1::Final((CSHA1 *)&v10);
  CSHA1::ReportHash_a((int)&v10, &v9, 0);
  sub_119C884(v3, &v9);
  CSHA1::~CSHA1((CSHA1 *)&v10);
  result = (RakNet *)(_stack_chk_guard - v11);
  if ( _stack_chk_guard != v11 )
    _stack_chk_fail(result);
  return result;
}
