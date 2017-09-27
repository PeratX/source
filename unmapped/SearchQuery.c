

int *__fastcall SearchQuery::SearchQuery(int *a1, int *a2)
{
  int *v2; // r7@1
  int *v3; // r4@1

  v2 = a2;
  v3 = a1;
  sub_DA73B4(a1, a2);
  sub_DA73B4(v3 + 1, v2 + 1);
  sub_DA73B4(v3 + 2, v2 + 2);
  std::vector<std::string,std::allocator<std::string>>::vector((int)(v3 + 3), (unsigned __int64 *)(v2 + 3));
  sub_DA73B4(v3 + 6, v2 + 6);
  sub_DA73B4(v3 + 7, v2 + 7);
  sub_DA73B4(v3 + 8, v2 + 8);
  *(_QWORD *)(v3 + 9) = *(_QWORD *)(v2 + 9);
  return v3;
}


int __fastcall SearchQuery::setTop(int result, int a2)
{
  *(_DWORD *)(result + 40) = a2;
  return result;
}


char *__fastcall SearchQuery::getCreationStartDate(SearchQuery *this)
{
  return (char *)this + 28;
}


signed int __fastcall SearchQuery::addTags(int a1, unsigned __int64 *a2)
{
  return j_j_j__ZNSt6vectorISsSaISsEE15_M_range_insertIN9__gnu_cxx17__normal_iteratorIPKSsS1_EEEEvNS4_IPSsS1_EET_SA_St20forward_iterator_tag(
           a1 + 12,
           *(int **)(a1 + 16),
           (int *)*a2,
           *a2 >> 32);
}


char *__fastcall SearchQuery::getTags(SearchQuery *this)
{
  return (char *)this + 12;
}


char *__fastcall SearchQuery::getPlatform(SearchQuery *this)
{
  return (char *)this + 8;
}


char *__fastcall SearchQuery::getCreatorID(SearchQuery *this)
{
  return (char *)this + 24;
}


_BYTE *__fastcall SearchQuery::setAcceptLanguage(char *a1, _DWORD *a2)
{
  _DWORD *v2; // r5@1
  const void **v3; // r4@1
  _BYTE *v4; // r5@1
  _BYTE *result; // r0@1
  int v6; // r6@1
  char v7; // r1@4
  int v8; // t1@4

  v2 = a2;
  v3 = (const void **)a1;
  sub_119E388(a1, *(_DWORD *)(*a2 - 12), 0);
  v4 = (_BYTE *)*v2;
  result = *v3;
  v6 = *((_DWORD *)v4 - 3);
  if ( *((_DWORD *)*v3 - 1) > -1 )
  {
    sub_119CB68(v3);
    result = *v3;
  }
  for ( ; v6; ++result )
    v8 = *v4++;
    v7 = v8;
    if ( v8 == 95 )
      v7 = 45;
    --v6;
    *result = v7;
  return result;
}


char *__fastcall SearchQuery::getContentType(SearchQuery *this)
{
  return (char *)this + 4;
}


void __fastcall SearchQuery::generateCachedFileName(SearchQuery *this, int a2, __int64 a3)
{
  int v3; // r9@1
  Util *v4; // r8@1
  const char **v5; // r4@1
  const char **v6; // r10@1
  unsigned int i; // r5@1
  const char *v8; // r7@2
  size_t v9; // r0@2
  int j; // r1@2
  int v11; // t1@3
  _BYTE *v12; // r7@5
  size_t v13; // r0@6
  int k; // r1@6
  int v15; // t1@7
  void *v16; // r0@10
  void *v17; // r0@12
  const void **v18; // r0@13
  __int64 v19; // kr08_8@13
  unsigned int v20; // r1@13
  const void **v21; // r0@15
  const void **v22; // r0@17
  char *v23; // r0@17
  char *v24; // r0@18
  void *v25; // r0@19
  void *v26; // r0@20
  char *v27; // r0@21
  char *v28; // r0@22
  unsigned int *v29; // r2@24
  signed int v30; // r1@26
  unsigned int *v31; // r2@28
  signed int v32; // r1@30
  unsigned int *v33; // r2@32
  signed int v34; // r1@34
  unsigned int *v35; // r2@36
  signed int v36; // r1@38
  unsigned int *v37; // r2@40
  signed int v38; // r1@42
  unsigned int *v39; // r2@44
  signed int v40; // r1@46
  signed int v41; // r1@50
  unsigned int *v42; // r2@52
  signed int v43; // r1@54
  int v44; // [sp+4h] [bp-44h]@13
  char *v45; // [sp+8h] [bp-40h]@13
  unsigned int v46; // [sp+Ch] [bp-3Ch]@13
  char *v47; // [sp+10h] [bp-38h]@17
  char *v48; // [sp+14h] [bp-34h]@17
  int v49; // [sp+18h] [bp-30h]@12
  int v50; // [sp+1Ch] [bp-2Ch]@10
  char *v51; // [sp+20h] [bp-28h]@9

  v3 = a2;
  v4 = this;
  v6 = (const char **)(*(_QWORD *)(a2 + 12) >> 32);
  v5 = (const char **)*(_QWORD *)(a2 + 12);
  for ( i = 0; v5 != v6; i ^= j )
  {
    v8 = *v5;
    v9 = strlen(*v5);
    for ( j = -2128831035; v9; j = 16777619 * (j ^ v11) )
    {
      v11 = *v8++;
      --v9;
    }
    ++v5;
  }
  v12 = *(_BYTE **)(v3 + 24);
  if ( *((_DWORD *)v12 - 3) )
    v13 = strlen(*(const char **)(v3 + 24));
    for ( k = -2128831035; v13; k = 16777619 * (k ^ v15) )
      v15 = *v12++;
      HIDWORD(a3) = v15;
      --v13;
    i ^= k;
  v51 = (char *)&unk_28898CC;
  LODWORD(a3) = *(_DWORD *)(v3 + 36);
  if ( (_DWORD)a3 != -1 )
    Util::format((Util *)&v50, "_skip_%d", a3);
    sub_119C8A4((const void **)&v51, (const void **)&v50);
    v16 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      LODWORD(a3) = v50 - 4;
      if ( &pthread_create )
      {
        __dmb();
        do
        {
          v41 = __ldrex((unsigned int *)a3);
          HIDWORD(a3) = v41 - 1;
        }
        while ( __strex(v41 - 1, (unsigned int *)a3) );
      }
      else
        v41 = *(_DWORD *)a3;
        HIDWORD(a3) = *(_DWORD *)a3 - 1;
        *(_DWORD *)a3 = HIDWORD(a3);
      if ( v41 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
  LODWORD(a3) = *(_DWORD *)(v3 + 40);
    Util::format((Util *)&v49, "_top_%d", a3);
    sub_119C8A4((const void **)&v51, (const void **)&v49);
    v17 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v49 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
  v45 = (char *)&unk_28898CC;
  sub_119CAF8((const void **)&v45, *(_DWORD *)(*(_DWORD *)(v3 + 4) - 12) + 7);
  sub_119C894((const void **)&v45, "search_", 7u);
  sub_119C8A4((const void **)&v45, (const void **)(v3 + 4));
  v18 = sub_119C894((const void **)&v45, "_", 1u);
  v46 = (unsigned int)*v18;
  *v18 = &unk_28898CC;
  Util::toString<unsigned int,(void *)0,(void *)0>((void **)&v44, i);
  v19 = *(_QWORD *)(v46 - 12);
  v20 = *(_DWORD *)(v44 - 12) + v19;
  if ( v20 > HIDWORD(v19) && v20 <= *(_DWORD *)(v44 - 8) )
    v21 = sub_119C984((const void **)&v44, 0, v46, (_BYTE *)v19);
  else
    v21 = sub_119C8A4((const void **)&v46, (const void **)&v44);
  v47 = (char *)*v21;
  *v21 = &unk_28898CC;
  v22 = sub_119C8A4((const void **)&v47, (const void **)&v51);
  v48 = (char *)*v22;
  *v22 = &unk_28898CC;
  Util::base64_encode(v4, (const unsigned __int8 **)&v48, 1);
  v23 = v48 - 12;
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v48 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v24 = v47 - 12;
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v47 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v44 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v26 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v46 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  v27 = v45 - 12;
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v45 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v28 = v51 - 12;
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v51 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
}


SearchQuery *__fastcall SearchQuery::~SearchQuery(SearchQuery *this)
{
  SearchQuery *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  void *v8; // r5@4
  void *v9; // r7@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int *v12; // r0@14
  int v13; // r1@19
  void *v14; // r0@19
  int v15; // r1@20
  void *v16; // r0@20
  int *v17; // r0@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  unsigned int *v23; // r2@31
  signed int v24; // r1@33
  unsigned int *v25; // r2@35
  signed int v26; // r1@37
  unsigned int *v27; // r2@39
  signed int v28; // r1@41
  unsigned int *v29; // r2@43
  signed int v30; // r1@45

  v1 = this;
  v2 = *((_DWORD *)this + 8);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 7);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v4 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 6);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v6 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v9 = (void *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v8 = (void *)*(_QWORD *)((char *)v1 + 12);
  if ( v8 != v9 )
    do
      v12 = (int *)(*(_DWORD *)v8 - 12);
      if ( v12 != &dword_28898C0 )
      {
        v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
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
          j_j_j_j_j__ZdlPv_9(v12);
      }
      v8 = (char *)v8 + 4;
    while ( v8 != v9 );
    v8 = (void *)*((_DWORD *)v1 + 3);
  if ( v8 )
    operator delete(v8);
  v13 = *((_DWORD *)v1 + 2);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v13 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  v15 = *((_DWORD *)v1 + 1);
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v15 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  v17 = (int *)(*(_DWORD *)v1 - 12);
  if ( v17 != &dword_28898C0 )
    v29 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  return v1;
}


void __fastcall SearchQuery::generateCachedFileName(SearchQuery *this, int a2, __int64 a3)
{
  SearchQuery::generateCachedFileName(this, a2, a3);
}


int __fastcall SearchQuery::setSkip(int result, int a2)
{
  *(_DWORD *)(result + 36) = a2;
  return result;
}


int __fastcall SearchQuery::SearchQuery(int a1, int *a2)
{
  int v2; // r5@1

  v2 = a1;
  *(_DWORD *)a1 = &unk_28898CC;
  sub_119C854((int *)(a1 + 4), a2);
  *(_QWORD *)(v2 + 8) = (unsigned int)&unk_28898CC;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = &unk_28898CC;
  *(_DWORD *)(v2 + 28) = &unk_28898CC;
  *(_DWORD *)(v2 + 32) = &unk_28898CC;
  *(_DWORD *)(v2 + 36) = -1;
  *(_DWORD *)(v2 + 40) = 100;
  return v2;
}


char *__fastcall SearchQuery::getCreationEndDate(SearchQuery *this)
{
  return (char *)this + 32;
}


char *__fastcall SearchQuery::addTag(int a1, int *a2)
{
  int v2; // r4@1
  __int64 v3; // kr00_8@1
  char *result; // r0@2

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 16);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = j_j_j__ZNSt6vectorISsSaISsEE19_M_emplace_back_auxIJRKSsEEEvDpOT__2((unsigned __int64 *)(a1 + 12), a2);
  }
  else
    sub_119C854((int *)v3, a2);
    result = (char *)(*(_DWORD *)(v2 + 16) + 4);
    *(_DWORD *)(v2 + 16) = result;
  return result;
}
