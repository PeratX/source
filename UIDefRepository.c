

void __fastcall UIDefRepository::loadDefsList(int a1, int a2, unsigned int a3, int a4)
{
  UIDefRepository::loadDefsList(a1, a2, a3, a4);
}


int __fastcall UIDefRepository::UIDefRepository(double a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3

  v1 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = sub_DA7744(a1);
  *(_DWORD *)(v1 + 4) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 24) = 0;
    v4 = (void *)(v1 + 24);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_DA7414();
    v3 = 4 * v2;
    v4 = operator new(4 * v2);
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)v1 = v4;
  Json::Value::Value((_DWORD *)(v1 + 32), 0);
  return v1;
}


void __fastcall UIDefRepository::_traverseTree(int a1, int a2, int a3, Json::Value *this, int a5)
{
  UIDefRepository::_traverseTree(a1, a2, a3, this, a5);
}


void __fastcall UIDefRepository::forEachControl(int a1, int a2)
{
  UIDefRepository::forEachControl(a1, a2);
}


void __fastcall UIDefRepository::validateDefEntries(int a1, int a2, int a3, __int64 *a4)
{
  UIDefRepository::validateDefEntries(a1, a2, a3, a4);
}


int __fastcall UIDefRepository::DefEntry::DefEntry(int a1, int a2)
{
  int v2; // r5@1

  v2 = a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = &unk_28898CC;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = &unk_28898CC;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = &unk_28898CC;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = &unk_28898CC;
  Json::Value::Value((Json::Value *)(a1 + 24), (const Json::Value *)(a2 + 24));
  return v2;
}


void __fastcall UIDefRepository::validateDefEntries(int a1, int a2, int a3, __int64 *a4)
{
  __int64 *v4; // r6@1
  int v5; // r4@1
  __int64 v6; // kr00_8@1
  int v7; // r8@1
  int v8; // r0@1
  PackReport *v9; // r0@2
  unsigned int v10; // r2@5
  unsigned int v11; // r1@5
  int v12; // r5@8
  PackReport *v13; // r0@9
  __int64 v14; // r4@12
  UIDefRepository::DefEntry *v15; // r0@13
  __int64 v16; // [sp+4h] [bp-24h]@12
  int v17; // [sp+Ch] [bp-1Ch]@12

  v4 = a4;
  v5 = a3;
  v6 = *a4;
  v7 = a2;
  v8 = *a4;
  if ( HIDWORD(v6) != (_DWORD)v6 )
  {
    v9 = (PackReport *)v6;
    do
      v9 = (PackReport *)((char *)PackReport::~PackReport(v9) + 104);
    while ( (PackReport *)HIDWORD(v6) != v9 );
    v8 = *(_DWORD *)v4;
  }
  *((_DWORD *)v4 + 1) = v6;
  v10 = -991146299 * (((signed int)v6 - v8) >> 3);
  v11 = -286331153 * ((signed int)((*(_QWORD *)(v5 + 4) >> 32) - *(_QWORD *)(v5 + 4)) >> 3);
  if ( v11 <= v10 )
    if ( v11 < v10 )
    {
      v12 = v8 + 286331160 * ((signed int)((*(_QWORD *)(v5 + 4) >> 32) - *(_QWORD *)(v5 + 4)) >> 3);
      if ( (_DWORD)v6 != v12 )
      {
        v13 = (PackReport *)(v8 + 286331160 * ((signed int)((*(_QWORD *)(v5 + 4) >> 32) - *(_QWORD *)(v5 + 4)) >> 3));
        do
          v13 = (PackReport *)((char *)PackReport::~PackReport(v13) + 104);
        while ( (PackReport *)v6 != v13 );
      }
      *((_DWORD *)v4 + 1) = v12;
    }
  else
    std::vector<PackReport,std::allocator<PackReport>>::_M_default_append((int)v4, v11 - v10);
  v16 = 0LL;
  v17 = 0;
  UIDefRepository::_collectAllDefEntries(0, v7, (void **)v5, (int)&v16, (int)v4);
  v14 = v16;
  if ( (_DWORD)v16 != HIDWORD(v16) )
    v15 = (UIDefRepository::DefEntry *)v16;
      v15 = (UIDefRepository::DefEntry *)((char *)UIDefRepository::DefEntry::~DefEntry(v15) + 40);
    while ( (UIDefRepository::DefEntry *)HIDWORD(v14) != v15 );
  if ( (_DWORD)v14 )
    operator delete((void *)v14);
}


void __fastcall UIDefRepository::_resolveReferences(int a1, unsigned int *a2, __int64 *a3)
{
  unsigned int *v3; // r10@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r4@3
  int *v7; // r6@3
  unsigned int v8; // r7@3
  unsigned int v9; // r8@4
  int v10; // r9@4
  _DWORD *v11; // r0@4
  _DWORD *v12; // r5@5
  int v13; // r6@5
  _DWORD *v14; // r4@7
  bool v15; // zf@10
  _DWORD *v16; // r0@14
  int *v17; // r4@15
  int *v18; // r8@15
  unsigned int *v19; // r6@15
  int *v20; // r5@15
  __int64 v21; // kr00_8@16
  unsigned int v22; // r5@18
  size_t v23; // r4@18
  _DWORD *v24; // r1@19
  _DWORD *v25; // r1@21
  size_t v26; // r2@21
  _DWORD *v27; // r8@23
  _DWORD *v28; // r7@24
  _DWORD *v29; // r0@24
  int v30; // r6@24
  int v31; // r9@26
  bool v32; // zf@29
  _DWORD *v33; // r6@35
  int v34; // r4@35
  _DWORD *v35; // r7@37
  bool v36; // zf@40
  _DWORD *v37; // r0@45
  void *v38; // r1@48
  _DWORD *v39; // r4@48
  signed int v40; // r8@48
  int v41; // r9@48
  unsigned int v42; // r0@48
  unsigned int v43; // r2@50
  unsigned int v44; // r6@50
  void *v45; // r7@58
  char *v46; // r0@63
  char *v47; // r0@64
  unsigned int *v48; // r2@67
  signed int v49; // r1@69
  unsigned int *v50; // r2@71
  signed int v51; // r1@73
  int v52; // r9@66
  int v53; // t1@85
  unsigned int *v54; // r6@85
  int v55; // r10@85
  const Json::Value *v56; // r7@86
  const char *v57; // r0@87
  int v58; // r0@87
  void *v59; // r0@87
  unsigned int *v60; // r2@89
  signed int v61; // r1@91
  void *v62; // r0@99
  void *v63; // r4@100
  void *ptr; // [sp+8h] [bp-A8h]@1
  int v65; // [sp+Ch] [bp-A4h]@1
  char *v66; // [sp+10h] [bp-A0h]@15
  unsigned int *v67; // [sp+18h] [bp-98h]@1
  _DWORD *v68; // [sp+1Ch] [bp-94h]@18
  __int64 *v69; // [sp+20h] [bp-90h]@1
  _DWORD *v70; // [sp+24h] [bp-8Ch]@18
  void *s1; // [sp+28h] [bp-88h]@18
  int v72; // [sp+2Ch] [bp-84h]@23
  unsigned int v73; // [sp+30h] [bp-80h]@18
  int v74; // [sp+34h] [bp-7Ch]@19
  int v75; // [sp+3Ch] [bp-74h]@87
  char v76; // [sp+40h] [bp-70h]@97
  char v77; // [sp+48h] [bp-68h]@85
  char v78; // [sp+50h] [bp-60h]@66
  _DWORD *v79; // [sp+64h] [bp-4Ch]@15
  _DWORD *v80; // [sp+68h] [bp-48h]@15
  void *v81; // [sp+6Ch] [bp-44h]@4
  unsigned int v82; // [sp+70h] [bp-40h]@1
  void *v83; // [sp+74h] [bp-3Ch]@1
  int v84; // [sp+78h] [bp-38h]@1
  signed int v85; // [sp+7Ch] [bp-34h]@1
  int v86; // [sp+80h] [bp-30h]@1
  int v87; // [sp+84h] [bp-2Ch]@102

  v3 = a2;
  v69 = a3;
  v67 = a2;
  v4 = COERCE_DOUBLE(__PAIR__(10, (unsigned int)operator new(4u)));
  *(_DWORD *)LODWORD(v4) = *v3;
  ptr = (void *)LODWORD(v4);
  v65 = LODWORD(v4) + 4;
  v83 = 0;
  v84 = 0;
  v85 = 1065353216;
  v86 = 0;
  LODWORD(v4) = &v85;
  v5 = sub_119C844(v4);
  v82 = v5;
  if ( v5 == 1 )
  {
    v7 = &v87;
    v87 = 0;
    v8 = 1;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_119C874();
    v6 = 4 * v5;
    v7 = (int *)operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
    v8 = v82;
  v81 = v7;
  v9 = *v3;
  v10 = *v3 % v8;
  v11 = (_DWORD *)v7[v10];
  if ( !v11 )
    goto LABEL_14;
  v12 = (_DWORD *)*v11;
  v13 = *(_DWORD *)(*v11 + 4);
  while ( v9 != v13 )
    v14 = (_DWORD *)*v12;
    if ( *v12 )
    {
      v13 = v14[1];
      v11 = v12;
      v12 = (_DWORD *)*v12;
      if ( v14[1] % v8 == v10 )
        continue;
    }
  v15 = v11 == 0;
  if ( v11 )
    v15 = *v11 == 0;
  if ( v15 )
LABEL_14:
    v16 = operator new(8u);
    *v16 = 0;
    v16[1] = *v3;
    std::_Hashtable<int,int,std::allocator<int>,std::__detail::_Identity,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_insert_unique_node(
      (int)&v81,
      v10,
      v9,
      (int)v16);
  v17 = (int *)&v80;
  v18 = (int *)&v79;
  v19 = v3;
  v20 = &dword_28898C0;
  v66 = (char *)v65;
  do
    sub_119C854(v17, (int *)v19 + 4);
    sub_119C854(v18, (int *)v19 + 3);
    v21 = *v69;
    if ( HIDWORD(v21) == (_DWORD)v21 )
      v19 = 0;
      goto LABEL_63;
    v22 = 0;
    v23 = *(v80 - 3);
    v68 = v81;
    v73 = v82;
    s1 = v80;
    v70 = v79;
    while ( 1 )
      v74 = v21 + 40 * v22;
      v24 = *(_DWORD **)(v74 + 8);
      if ( v23 == *(v24 - 3) && !memcmp(s1, v24, v23) )
      {
        v25 = *(_DWORD **)(v74 + 4);
        v26 = *(v70 - 3);
        if ( v26 == *(v25 - 3) && !memcmp(v70, v25, v26) )
          break;
      }
LABEL_32:
      if ( ++v22 >= -858993459 * ((HIDWORD(v21) - (signed int)v21) >> 3) )
        v3 = v67;
        v17 = (int *)&v80;
        v19 = 0;
        v18 = (int *)&v79;
        v20 = &dword_28898C0;
        goto LABEL_63;
    v72 = v22 % v73;
    v27 = (_DWORD *)v68[v22 % v73];
    if ( v27 )
      v28 = (_DWORD *)*v27;
      v29 = (_DWORD *)v68[v22 % v73];
      v30 = *(_DWORD *)(*v27 + 4);
      while ( v22 != v30 )
        v31 = *v28;
        if ( *v28 )
        {
          v30 = *(_DWORD *)(v31 + 4);
          v29 = v28;
          v28 = (_DWORD *)*v28;
          if ( *(_DWORD *)(v31 + 4) % v73 == v72 )
            continue;
        }
        goto LABEL_34;
      v32 = v29 == 0;
      if ( v29 )
        v32 = *v29 == 0;
      if ( !v32 )
        goto LABEL_32;
LABEL_34:
      v3 = v67;
      if ( v27 )
        v33 = (_DWORD *)*v27;
        v34 = *(_DWORD *)(*v27 + 4);
        while ( v22 != v34 )
          v35 = (_DWORD *)*v33;
          if ( *v33 )
          {
            v34 = v35[1];
            v27 = v33;
            v33 = (_DWORD *)*v33;
            if ( v35[1] % v73 == v72 )
              continue;
          }
          goto LABEL_45;
        v36 = v27 == 0;
        if ( v27 )
          v36 = *v27 == 0;
        if ( !v36 )
          goto LABEL_46;
    else
LABEL_45:
    v37 = operator new(8u);
    *v37 = 0;
    v37[1] = v22;
      v72,
      v22,
      (int)v37);
LABEL_46:
    if ( v66 == (char *)v65 )
      v38 = ptr;
      v39 = 0;
      v40 = v66 - (_BYTE *)ptr;
      v41 = (v66 - (_BYTE *)ptr) >> 2;
      v42 = (v66 - (_BYTE *)ptr) >> 2;
      if ( !v42 )
        v42 = 1;
      v43 = v42 + (v40 >> 2);
      v44 = v42 + (v40 >> 2);
      if ( 0 != v43 >> 30 )
        v44 = 0x3FFFFFFF;
      if ( v43 < v42 )
      if ( v44 )
        if ( v44 >= 0x40000000 )
          sub_119C874();
        v39 = operator new(4 * v44);
        v38 = ptr;
      v39[v41] = v22;
      if ( v41 )
        v45 = v38;
        _aeabi_memmove4(v39, v38);
        v38 = v45;
      v66 = (char *)&v39[v41 + 1];
      if ( v38 )
        operator delete(v38);
      ptr = v39;
      v65 = (int)&v39[v44];
      *(_DWORD *)v66 = v22;
      v66 += 4;
    v17 = (int *)&v80;
    v19 = (unsigned int *)(v21 + 40 * v22);
    v18 = (int *)&v79;
    v20 = &dword_28898C0;
LABEL_63:
    v46 = (char *)(v79 - 3);
    if ( v79 - 3 != v20 )
      v48 = v79 - 1;
      if ( &pthread_create )
        __dmb();
        do
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
      else
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v46);
    v47 = (char *)(v80 - 3);
    if ( v80 - 3 != v20 )
      v50 = v80 - 1;
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v47);
  while ( v19 );
  v52 = (int)(v66 - 4);
  Json::Value::Value((Json::Value *)&v78, (const Json::Value *)(*(_DWORD *)v69 + 40 * *((_DWORD *)v66 - 1) + 24));
  for ( ; ptr != (void *)v52; v3 = v54 )
    v53 = *(_DWORD *)(v52 - 4);
    v52 -= 4;
    v54 = v3;
    v55 = *(_DWORD *)v69 + 40 * v53 + 24;
    Json::Value::begin((Json::Value *)&v77, v55);
      Json::Value::end((Json::Value *)&v76, v55);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v77, (const Json::ValueIteratorBase *)&v76) == 1 )
        break;
      v56 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v77);
      if ( !Json::Value::isNull(v56) )
        v57 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v77);
        sub_119C884((void **)&v75, v57);
        v58 = Json::Value::operator[]((Json::Value *)&v78, (const char **)&v75);
        Json::Value::operator=(v58, v56);
        v59 = (void *)(v75 - 12);
        if ( (int *)(v75 - 12) != &dword_28898C0 )
          v60 = (unsigned int *)(v75 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v61 = __ldrex(v60);
            while ( __strex(v61 - 1, v60) );
          else
            v61 = (*v60)--;
          if ( v61 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v59);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v77);
  Json::Value::operator=((int)(v3 + 6), (const Json::Value *)&v78);
  Json::Value::~Value((Json::Value *)&v78);
  v62 = v83;
  if ( v83 )
    do
      v63 = *(void **)v62;
      operator delete(v62);
      v62 = v63;
    while ( v63 );
  _aeabi_memclr4(v81, 4 * v82);
  if ( v81 && &v87 != v81 )
    operator delete(v81);
  if ( ptr )
    operator delete(ptr);
}


int __fastcall UIDefRepository::_forEachControl(int a1, Json::Value *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // r4@1
  Json::Value *v5; // r6@1
  int result; // r0@2
  void *v7; // r6@3
  const void **v8; // r5@4
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  void **v17; // r4@37
  int v18; // r5@37
  int v19; // r1@37
  const char *v20; // r0@38
  char *v21; // r0@38
  void *v22; // r0@38
  int v23; // r10@39
  const void **v24; // r0@39
  void (__fastcall *v25)(char *, _DWORD, signed int); // r3@39
  char *v26; // r0@43
  void *v27; // r0@44
  void *v28; // r0@45
  unsigned __int64 v29; // [sp+14h] [bp-7Ch]@3
  int v30; // [sp+1Ch] [bp-74h]@1
  char v31; // [sp+24h] [bp-6Ch]@40
  void (__fastcall *v32)(char *, char *, signed int); // [sp+2Ch] [bp-64h]@39
  int v33; // [sp+30h] [bp-60h]@40
  int v34; // [sp+34h] [bp-5Ch]@13
  char *v35; // [sp+38h] [bp-58h]@9
  int v36; // [sp+3Ch] [bp-54h]@5
  int v37; // [sp+44h] [bp-4Ch]@4
  char v38; // [sp+48h] [bp-48h]@37
  char v39; // [sp+50h] [bp-40h]@37
  char v40; // [sp+58h] [bp-38h]@3
  char v41; // [sp+60h] [bp-30h]@3

  v4 = __PAIR__(a3, a4);
  v30 = a1;
  v5 = a2;
  if ( !*(_DWORD *)(a4 + 8) )
    sub_119C8E4();
  (*(void (__fastcall **)(unsigned int))(a4 + 12))(a4);
  result = Json::Value::isMember(v5, "controls");
  if ( result == 1 )
  {
    v29 = v4;
    v7 = Json::Value::operator[]((int)v5, "controls");
    Json::Value::begin((Json::Value *)&v41, (int)v7);
    Json::Value::end((Json::Value *)&v40, (int)v7);
    result = Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v41, (const Json::ValueIteratorBase *)&v40);
    if ( !result )
    {
      v8 = (const void **)&v37;
      do
      {
        v17 = (void **)v8;
        v18 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v41);
        Json::Value::begin((Json::Value *)&v39, v18);
        v19 = v18;
        v8 = (const void **)v17;
        Json::Value::end((Json::Value *)&v38, v19);
        if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v39, (const Json::ValueIteratorBase *)&v38) )
        {
          v20 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v39);
          sub_119C884(v17, v20);
          v21 = sub_119C8B4((int *)v17, 64, 0);
          sub_119C8C4((void **)&v36, (int *)v17, 0, (unsigned int)v21);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v17,
            &v36);
          v22 = (void *)(v36 - 12);
          if ( (int *)(v36 - 12) != &dword_28898C0 )
          {
            v9 = (unsigned int *)(v36 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v10 = __ldrex(v9);
              while ( __strex(v10 - 1, v9) );
              v8 = (const void **)v17;
            }
            else
              v10 = (*v9)--;
            if ( v10 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v22);
          }
          v23 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v39);
          sub_119C854(&v34, (int *)HIDWORD(v29));
          sub_119C894((const void **)&v34, "/", 1u);
          v24 = sub_119C8A4((const void **)&v34, v8);
          v35 = (char *)*v24;
          *v24 = &unk_28898CC;
          v32 = 0;
          v25 = *(void (__fastcall **)(char *, _DWORD, signed int))(v29 + 8);
          if ( v25 )
            v25(&v31, v29, 2);
            v33 = *(_DWORD *)(v29 + 12);
            v32 = *(void (__fastcall **)(char *, char *, signed int))(v29 + 8);
          UIDefRepository::_forEachControl(v30, v23, (int)&v35, (int)&v31);
          if ( v32 )
            v32(&v31, &v31, 3);
          v26 = v35 - 12;
          if ( (int *)(v35 - 12) != &dword_28898C0 )
            v11 = (unsigned int *)(v35 - 4);
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
              v12 = (*v11)--;
            if ( v12 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v26);
          v27 = (void *)(v34 - 12);
          if ( (int *)(v34 - 12) != &dword_28898C0 )
            v13 = (unsigned int *)(v34 - 4);
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
              v14 = (*v13)--;
            if ( v14 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v27);
          v28 = (void *)(v37 - 12);
          if ( (int *)(v37 - 12) != &dword_28898C0 )
            v15 = (unsigned int *)(v37 - 4);
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
              v16 = (*v15)--;
            if ( v16 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v28);
        }
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v41);
        result = Json::ValueIteratorBase::isEqual(
                   (Json::ValueIteratorBase *)&v41,
                   (const Json::ValueIteratorBase *)&v40);
      }
      while ( !result );
    }
  }
  return result;
}


UIDefRepository::DefEntry *__fastcall UIDefRepository::DefEntry::DefEntry(UIDefRepository::DefEntry *this, const UIDefRepository::DefEntry *a2)
{
  const UIDefRepository::DefEntry *v2; // r4@1
  UIDefRepository::DefEntry *v3; // r5@1
  int *v4; // r7@1

  v2 = a2;
  v3 = this;
  v4 = (int *)((char *)a2 + 8);
  *(_DWORD *)this = *(_DWORD *)a2;
  sub_119C854((int *)this + 1, (int *)a2 + 1);
  sub_119C854((int *)v3 + 2, v4);
  sub_119C854((int *)v3 + 3, (int *)v2 + 3);
  sub_119C854((int *)v3 + 4, (int *)v2 + 4);
  Json::Value::Value(
    (UIDefRepository::DefEntry *)((char *)v3 + 24),
    (const UIDefRepository::DefEntry *)((char *)v2 + 24));
  return v3;
}


UIDefRepository::DefEntry *__fastcall UIDefRepository::DefEntry::~DefEntry(UIDefRepository::DefEntry *this)
{
  UIDefRepository::DefEntry *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20

  v1 = this;
  Json::Value::~Value((UIDefRepository::DefEntry *)((char *)this + 24));
  v2 = *((_DWORD *)v1 + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 3);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v4 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 2);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v6 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = *((_DWORD *)v1 + 1);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  return v1;
}


void __fastcall UIDefRepository::_resolveReferences(int a1, unsigned int *a2, __int64 *a3)
{
  UIDefRepository::_resolveReferences(a1, a2, a3);
}


void __fastcall UIDefRepository::loadDefsList(int a1, int a2, unsigned int a3, int a4)
{
  int v4; // r8@1
  int v5; // r9@1
  _DWORD *v6; // r6@1
  unsigned int v7; // r10@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  _DWORD *v10; // r5@11
  UIDefNamespace *v11; // r0@11
  int v12; // r1@11
  void *v13; // r0@11
  __int64 v14; // r4@13
  int v15; // r0@13
  PackReport *v16; // r0@14
  unsigned int v17; // r2@17
  unsigned int v18; // r1@17
  int v19; // r5@20
  PackReport *v20; // r0@21
  __int64 v21; // kr00_8@24
  unsigned int v22; // r4@25
  unsigned int v23; // r9@25
  int v24; // r7@25
  int v25; // r0@26
  const Json::Value *v26; // r5@30
  unsigned int v27; // r7@30
  int v28; // r0@31
  UIDefRepository::DefEntry *v29; // r0@35
  int v30; // [sp+8h] [bp-68h]@1
  __int64 v31; // [sp+10h] [bp-60h]@24
  int v32; // [sp+18h] [bp-58h]@24
  char v33; // [sp+1Ch] [bp-54h]@32
  int v34[8]; // [sp+24h] [bp-4Ch]@32
  char v35; // [sp+44h] [bp-2Ch]@33

  v4 = a1;
  v5 = a4;
  v6 = *(_DWORD **)(a1 + 8);
  v7 = a3;
  v30 = a2;
  while ( v6 )
  {
    v10 = v6;
    v11 = (UIDefNamespace *)(v6 + 2);
    v6 = (_DWORD *)*v6;
    UIDefNamespace::~UIDefNamespace(v11);
    v12 = v10[1];
    v13 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v12 - 4);
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
        j_j_j_j_j__ZdlPv_9(v13);
    }
    operator delete(v10);
  }
  _aeabi_memclr4(*(_QWORD *)v4, 4 * (*(_QWORD *)v4 >> 32));
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  v14 = *(_QWORD *)v5;
  v15 = *(_QWORD *)v5;
  if ( HIDWORD(v14) != (_DWORD)v14 )
    v16 = (PackReport *)v14;
    do
      v16 = (PackReport *)((char *)PackReport::~PackReport(v16) + 104);
    while ( (PackReport *)HIDWORD(v14) != v16 );
    v15 = *(_DWORD *)v5;
  *(_DWORD *)(v5 + 4) = v14;
  v17 = -991146299 * (((signed int)v14 - v15) >> 3);
  v18 = -286331153 * ((signed int)((*(_QWORD *)(v7 + 4) >> 32) - *(_QWORD *)(v7 + 4)) >> 3);
  if ( v18 <= v17 )
    if ( v18 < v17 )
      HIDWORD(v14) = v15 + 286331160 * ((signed int)((*(_QWORD *)(v7 + 4) >> 32) - *(_QWORD *)(v7 + 4)) >> 3);
      if ( (_DWORD)v14 != HIDWORD(v14) )
        v20 = (PackReport *)(v15 + 286331160 * ((signed int)((*(_QWORD *)(v7 + 4) >> 32) - *(_QWORD *)(v7 + 4)) >> 3));
          v20 = (PackReport *)((char *)PackReport::~PackReport(v20) + 104);
        while ( (PackReport *)v14 != v20 );
      *(_DWORD *)(v5 + 4) = v19;
  else
    std::vector<PackReport,std::allocator<PackReport>>::_M_default_append(v5, v18 - v17);
  v31 = 0LL;
  v32 = 0;
  UIDefRepository::_collectAllDefEntries(0, v30, (void **)v7, (int)&v31, v5);
  v21 = v31;
  if ( HIDWORD(v31) != (_DWORD)v31 )
    v22 = 0;
    v23 = -858993459 * ((HIDWORD(v31) - (signed int)v31) >> 3);
    v24 = v31;
      v25 = *(_DWORD *)(*(_DWORD *)(v24 + 16) - 12);
      if ( v25 )
        UIDefRepository::_resolveReferences(v25, (unsigned int *)v24, &v31);
      ++v22;
      v24 += 40;
    while ( v22 < v23 );
    if ( HIDWORD(v21) != (_DWORD)v21 )
      v26 = (const Json::Value *)(v21 + 24);
      v27 = 0;
      do
        v28 = std::_Hashtable<std::string,std::pair<std::string const,UIDefNamespace>,std::allocator<std::pair<std::string const,UIDefNamespace>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                (unsigned __int64 *)v4,
                (int **)v26 - 5);
        if ( !v28 )
        {
          UIDefNamespace::UIDefNamespace(v34, (int *)v26 - 5);
          std::_Hashtable<std::string,std::pair<std::string const,UIDefNamespace>,std::allocator<std::pair<std::string const,UIDefNamespace>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,UIDefNamespace>(
            &v33,
            v4,
            (int *)v26 - 5,
            (int)v34);
          UIDefNamespace::~UIDefNamespace((UIDefNamespace *)v34);
          v28 = std::_Hashtable<std::string,std::pair<std::string const,UIDefNamespace>,std::allocator<std::pair<std::string const,UIDefNamespace>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                  (unsigned __int64 *)v4,
                  (int **)v26 - 5);
        }
        std::_Hashtable<std::string,std::pair<std::string const,Json::Value>,std::allocator<std::pair<std::string const,Json::Value>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,Json::Value&>(
          &v35,
          v28 + 12,
          (int *)v26 - 4,
          v26);
        ++v27;
        v26 = (const Json::Value *)((char *)v26 + 40);
      while ( v27 < v23 );
  UIDefRepository::_readGlobalVariables(__PAIR__(v7, v4));
  UIDefRepository::_applyGlobalColorFormat((UIDefRepository *)v4);
  if ( (_DWORD)v21 != HIDWORD(v21) )
    v29 = (UIDefRepository::DefEntry *)v21;
      v29 = (UIDefRepository::DefEntry *)((char *)UIDefRepository::DefEntry::~DefEntry(v29) + 40);
    while ( (UIDefRepository::DefEntry *)HIDWORD(v21) != v29 );
  if ( (_DWORD)v21 )
    operator delete((void *)v21);
}


void __fastcall UIDefRepository::_readGlobalVariables(__int64 this)
{
  UIDefRepository::_readGlobalVariables(this);
}


void __fastcall UIDefRepository::_applyGlobalColorFormat(UIDefRepository *this)
{
  UIDefRepository::_applyGlobalColorFormat(this);
}


void __fastcall UIDefRepository::_readGlobalVariables(__int64 this)
{
  int v1; // r6@1
  int v2; // r4@1
  void *v3; // r0@3
  void (__fastcall *v4)(int, char **, void ***); // r7@4
  char *v5; // r0@4
  char *v6; // r0@5
  void *v7; // r0@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  unsigned int *v12; // r2@18
  signed int v13; // r1@20
  unsigned int *v14; // r2@22
  signed int v15; // r1@24
  char *v16; // [sp+8h] [bp-58h]@4
  char *v17; // [sp+Ch] [bp-54h]@4
  int v18; // [sp+10h] [bp-50h]@4
  char v19; // [sp+14h] [bp-4Ch]@1
  void (*v20)(void); // [sp+1Ch] [bp-44h]@1
  int v21; // [sp+28h] [bp-38h]@1
  void **v22; // [sp+2Ch] [bp-34h]@1
  int v23; // [sp+30h] [bp-30h]@8
  void (*v24)(void); // [sp+40h] [bp-20h]@6

  v2 = HIDWORD(this);
  LODWORD(this) = this + 32;
  v1 = this;
  Json::Value::clear(this);
  sub_119C884((void **)&v21, "ui/_global_variables.json");
  v20 = 0;
  JsonMergeStrategy::JsonMergeStrategy((int)&v22, &v21, v1, (int)&v19);
  if ( v20 )
    v20();
  v3 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v21 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *(void (__fastcall **)(int, char **, void ***))(*(_DWORD *)v2 + 12);
  sub_119C884((void **)&v16, "ui/_global_variables.json");
  v17 = v16;
  v16 = (char *)&unk_28898CC;
  v18 = 0;
  v4(v2, &v17, &v22);
  v5 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v17 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v22 = &off_26EAB00;
  if ( v24 )
    v24();
  v7 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v23 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
}


int __fastcall UIDefRepository::_addNamespace(unsigned __int64 *a1, int **a2)
{
  int *v2; // r4@1
  unsigned __int64 *v3; // r5@1
  int v4; // r0@1
  int v6; // [sp+0h] [bp-38h]@2
  char v7; // [sp+8h] [bp-30h]@2

  v2 = (int *)a2;
  v3 = a1;
  v4 = std::_Hashtable<std::string,std::pair<std::string const,UIDefNamespace>,std::allocator<std::pair<std::string const,UIDefNamespace>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a1,
         a2);
  if ( !v4 )
  {
    UIDefNamespace::UIDefNamespace((int *)&v7, v2);
    std::_Hashtable<std::string,std::pair<std::string const,UIDefNamespace>,std::allocator<std::pair<std::string const,UIDefNamespace>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,UIDefNamespace>(
      &v6,
      (int)v3,
      v2,
      (int)&v7);
    UIDefNamespace::~UIDefNamespace((UIDefNamespace *)&v7);
    v4 = std::_Hashtable<std::string,std::pair<std::string const,UIDefNamespace>,std::allocator<std::pair<std::string const,UIDefNamespace>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
           v3,
           (int **)v2);
  }
  return v4 + 8;
}


void __fastcall UIDefRepository::_traverseTree(int a1, int a2, int a3, Json::Value *this, int a5)
{
  Json::Value *v5; // r5@1
  int v6; // r9@1
  int v7; // r10@1
  _DWORD *v8; // r7@2 OVERLAPPED
  _DWORD *v9; // r8@2 OVERLAPPED
  Json::Value *v10; // r4@4
  void (__fastcall *v11)(char *, int, signed int); // r3@4
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  Json::Value *v14; // r5@22
  void (__fastcall *v15)(char *, int, signed int); // r3@22
  void *v16; // r0@26
  _DWORD *v17; // r5@29
  unsigned int *v18; // r2@31
  signed int v19; // r1@33
  int *v20; // r0@39
  int v21; // [sp+8h] [bp-70h]@1
  char v22; // [sp+Ch] [bp-6Ch]@23
  void (__fastcall *v23)(char *, char *, signed int); // [sp+14h] [bp-64h]@22
  int v24; // [sp+18h] [bp-60h]@23
  int v25; // [sp+20h] [bp-58h]@14
  char v26; // [sp+24h] [bp-54h]@12
  char v27; // [sp+2Ch] [bp-4Ch]@12
  char v28; // [sp+34h] [bp-44h]@5
  void (__fastcall *v29)(char *, char *, signed int); // [sp+3Ch] [bp-3Ch]@4
  int v30; // [sp+40h] [bp-38h]@5
  _DWORD *v31; // [sp+44h] [bp-34h]@2
  _DWORD *v32; // [sp+48h] [bp-30h]@2

  v5 = this;
  v21 = a1;
  v6 = a3;
  v7 = a2;
  if ( Json::Value::isObject(this) == 1 )
  {
    Json::Value::getMemberNames((Json::Value *)&v31, (int)v5);
    *(_QWORD *)&v8 = *(_QWORD *)&v31;
    if ( v31 != v32 )
    {
      do
      {
        if ( !*(_DWORD *)(a5 + 8) )
          sub_119C8E4();
        v10 = (Json::Value *)(*(int (__fastcall **)(int, int, int, _DWORD *))(a5 + 12))(a5, v7, v6, v8);
        v29 = 0;
        v11 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
        if ( v11 )
        {
          v11(&v28, a5, 2);
          v30 = *(_DWORD *)(a5 + 12);
          v29 = *(void (__fastcall **)(char *, char *, signed int))(a5 + 8);
        }
        UIDefRepository::_traverseTree(v21, v7, (int)v8, v10, (int)&v28);
        if ( v29 )
          v29(&v28, &v28, 3);
        ++v8;
      }
      while ( v9 != v8 );
      v8 = v32;
      v17 = v31;
      if ( v31 != v32 )
        do
          v20 = (int *)(*v17 - 12);
          if ( v20 != &dword_28898C0 )
          {
            v18 = (unsigned int *)(*v17 - 4);
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
              j_j_j_j_j__ZdlPv_9_1(v20);
          }
          ++v17;
        while ( v17 != v8 );
        v8 = v31;
    }
    if ( v8 )
      operator delete(v8);
  }
  else if ( Json::Value::isArray(v5) == 1 )
    Json::Value::begin((Json::Value *)&v27, (int)v5);
    Json::Value::end((Json::Value *)&v26, (int)v5);
    while ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v27, (const Json::ValueIteratorBase *)&v26) )
      v14 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v27);
      sub_119C884((void **)&v25, (const char *)&unk_257BC67);
      v23 = 0;
      v15 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
      if ( v15 )
        v15(&v22, a5, 2);
        v24 = *(_DWORD *)(a5 + 12);
        v23 = *(void (__fastcall **)(char *, char *, signed int))(a5 + 8);
      UIDefRepository::_traverseTree(v21, v7, (int)&v25, v14, (int)&v22);
      if ( v23 )
        v23(&v22, &v22, 3);
      v16 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v25 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v16);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v27);
}


char *__fastcall UIDefRepository::getGlobalVariables(UIDefRepository *this)
{
  return (char *)this + 32;
}


void *__fastcall UIDefRepository::findDef(unsigned __int64 *a1, int **a2, int **a3)
{
  int **v3; // r4@1
  int v4; // r0@1
  int v5; // r1@2
  void *result; // r0@2

  v3 = a3;
  v4 = std::_Hashtable<std::string,std::pair<std::string const,UIDefNamespace>,std::allocator<std::pair<std::string const,UIDefNamespace>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a1,
         a2);
  if ( v4 )
  {
    v5 = std::_Hashtable<std::string,std::pair<std::string const,Json::Value>,std::allocator<std::pair<std::string const,Json::Value>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
           (unsigned __int64 *)(v4 + 12),
           v3);
    result = &Json::Value::null;
    if ( v5 )
      result = (void *)(v5 + 16);
  }
  else
  return result;
}


void __fastcall UIDefRepository::_collectAllDefEntries(int a1, int a2, void **a3, int a4, int a5)
{
  void **v5; // r5@1
  int v6; // r4@1
  int v7; // r9@1
  int v8; // r10@1
  int *v9; // r8@3 OVERLAPPED
  int v10; // r4@3
  int *v11; // r7@11 OVERLAPPED
  bool v12; // zf@11
  const void **v13; // r4@14
  size_t v14; // r2@15
  int *v15; // r5@21
  size_t v16; // r2@23
  int *v17; // r5@27
  int *v18; // r6@30
  unsigned int *v19; // r2@31
  signed int v20; // r1@33
  int *v21; // r0@39
  char *v22; // r4@44
  void **v23; // r9@44
  int *v24; // r10@44
  int v25; // r10@46
  void **v26; // r4@47
  void *v27; // r0@47
  const Json::Value *v28; // r4@50
  const char *v29; // r0@51
  __int64 v30; // r0@53
  char *v31; // r0@56
  char *v32; // r0@57
  char *v33; // r0@58
  void *v34; // r0@59
  unsigned int *v35; // r2@61
  signed int v36; // r1@63
  unsigned int *v37; // r2@65
  signed int v38; // r1@67
  unsigned int *v39; // r2@69
  signed int v40; // r1@71
  unsigned int *v41; // r2@73
  signed int v42; // r1@75
  void *v43; // r0@94
  unsigned int *v44; // r2@96
  signed int v45; // r1@98
  unsigned int *v46; // r2@100
  signed int v47; // r1@102
  unsigned int *v48; // r2@104
  signed int v49; // r1@106
  unsigned int *v50; // r2@120
  signed int v51; // r1@122
  unsigned int *v52; // r2@127
  signed int v53; // r1@129
  int (__fastcall *v54)(void **, char **, void ***); // r4@135
  char *v55; // r0@135
  int v56; // r4@135
  char *v57; // r0@135
  char *v58; // r0@136
  void *v59; // r0@142
  unsigned int *v60; // r2@147
  signed int v61; // r1@149
  int *v62; // r0@155
  int v63; // r4@160
  int v64; // r6@160
  unsigned int *v65; // r2@162
  signed int v66; // r1@164
  unsigned int *v67; // r2@166
  signed int v68; // r1@168
  int v69; // r1@178
  void *v70; // r0@178
  int *v71; // r0@179
  unsigned int *v72; // r2@185
  signed int v73; // r1@187
  int v74; // r4@194
  int v75; // r4@195
  void *v76; // r0@195
  char *v77; // r1@196
  char *v78; // r0@198
  void *v79; // r0@199
  unsigned int *v80; // r2@201
  signed int v81; // r1@203
  unsigned int *v82; // r2@205
  signed int v83; // r1@207
  void *v84; // r0@219
  int v85; // [sp+8h] [bp-1C0h]@44
  int v86; // [sp+24h] [bp-1A4h]@1
  void **v87; // [sp+28h] [bp-1A0h]@1
  int v88; // [sp+2Ch] [bp-19Ch]@1
  int v89; // [sp+30h] [bp-198h]@53
  int v90; // [sp+38h] [bp-190h]@53
  int v91; // [sp+3Ch] [bp-18Ch]@53
  int v92; // [sp+40h] [bp-188h]@53
  int v93; // [sp+48h] [bp-180h]@53
  char *v94; // [sp+5Ch] [bp-16Ch]@51
  _DWORD *v95; // [sp+60h] [bp-168h]@51
  char *v96; // [sp+64h] [bp-164h]@51
  int v97; // [sp+6Ch] [bp-15Ch]@51
  char v98; // [sp+70h] [bp-158h]@93
  char v99; // [sp+78h] [bp-150h]@49
  int v100; // [sp+84h] [bp-144h]@44
  int v101; // [sp+8Ch] [bp-13Ch]@46
  char v102; // [sp+90h] [bp-138h]@45
  char *v103; // [sp+A4h] [bp-124h]@100
  char *v104; // [sp+A8h] [bp-120h]@96
  int v105; // [sp+ACh] [bp-11Ch]@135
  void **v106; // [sp+B0h] [bp-118h]@135
  int v107; // [sp+B4h] [bp-114h]@104
  char v108; // [sp+C0h] [bp-108h]@44
  int v109; // [sp+D8h] [bp-F0h]@195
  char *v110; // [sp+DCh] [bp-ECh]@195
  char v111; // [sp+E0h] [bp-E8h]@194
  char v112; // [sp+E8h] [bp-E0h]@2
  int v113; // [sp+F0h] [bp-D8h]@185
  int v114; // [sp+F4h] [bp-D4h]@1
  void *ptr; // [sp+F8h] [bp-D0h]@1
  void *v116; // [sp+FCh] [bp-CCh]@1
  char v117; // [sp+100h] [bp-C8h]@1
  char v118; // [sp+110h] [bp-B8h]@1
  char v119; // [sp+124h] [bp-A4h]@1
  int v120; // [sp+194h] [bp-34h]@1
  int v121; // [sp+198h] [bp-30h]@1
  int v122; // [sp+1C4h] [bp-4h]@185

  v5 = a3;
  v6 = a4;
  v88 = a2;
  (*((void (__fastcall **)(_DWORD, _DWORD))*a3 + 2))(&v120, a3);
  Json::Reader::Reader((Json::Reader *)&v119);
  v86 = v6;
  Json::Value::Value(&v118, 0);
  Json::Value::Value(&v117, 0);
  v87 = v5;
  v114 = 0;
  ptr = 0;
  v116 = 0;
  v7 = v121;
  v8 = v120;
  if ( v120 == v121 )
  {
    v9 = 0;
    v10 = 0;
  }
  else
    v5 = (void **)&v112;
    do
    {
      if ( Json::Reader::parse((int)&v119, (int *)(v8 + 4), (int)&v118, 1) )
      {
        v74 = Json::Value::operator[]((Json::Value *)&v118, "ui_defs");
        Json::Value::begin((Json::Value *)&v112, v74);
        Json::Value::end((Json::Value *)&v111, v74);
        while ( Json::ValueIteratorBase::isEqual(
                  (Json::ValueIteratorBase *)&v112,
                  (const Json::ValueIteratorBase *)&v111) != 1 )
        {
          v75 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v112);
          sub_DA7364((void **)&v109, (const char *)&unk_257BC67);
          Json::Value::asString((int *)&v110, v75, &v109);
          v76 = ptr;
          if ( ptr == v116 )
          {
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
              (unsigned __int64 *)&v114,
              &v110);
            v77 = v110;
          }
          else
            *(_DWORD *)ptr = v110;
            v77 = (char *)&unk_28898CC;
            v110 = (char *)&unk_28898CC;
            ptr = (char *)v76 + 4;
          v78 = v77 - 12;
          if ( (int *)(v77 - 12) != &dword_28898C0 )
            v80 = (unsigned int *)(v77 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v81 = __ldrex(v80);
              while ( __strex(v81 - 1, v80) );
            }
            else
              v81 = (*v80)--;
            if ( v81 <= 0 )
              j_j_j_j_j__ZdlPv_9(v78);
          v79 = (void *)(v109 - 12);
          if ( (int *)(v109 - 12) != &dword_28898C0 )
            v82 = (unsigned int *)(v109 - 4);
                v83 = __ldrex(v82);
              while ( __strex(v83 - 1, v82) );
              v83 = (*v82)--;
            if ( v83 <= 0 )
              j_j_j_j_j__ZdlPv_9(v79);
          Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v112);
        }
      }
      else
        ResourceLocation::getFullPath((ResourceLocation *)&v113, v88);
        reportParseError((const char **)&v113, (int)&v119);
        v84 = (void *)(v113 - 12);
        if ( (int *)(v113 - 12) != &dword_28898C0 )
          v72 = (unsigned int *)(v113 - 4);
          if ( v122 )
            __dmb();
            do
              v73 = __ldrex(v72);
            while ( __strex(v73 - 1, v72) );
            v73 = (*v72)--;
          if ( v73 <= 0 )
            j_j_j_j_j__ZdlPv_9(v84);
      v8 += 8;
    }
    while ( v8 != v7 );
    v9 = (int *)ptr;
    v10 = v114;
  if ( (int *)v10 != v9 )
    v5 = (void **)((char *)v9 - v10);
    std::__introsort_loop<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,int,__gnu_cxx::__ops::_Iter_less_iter>(
      v10,
      v9,
      2 * (31 - __clz(((signed int)v9 - v10) >> 2)));
    if ( (signed int)v9 - v10 < 65 )
      std::__insertion_sort<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_less_iter>(
        v10,
        (const void **)v9);
    else
      v5 = (void **)(v10 + 64);
        (const void **)(v10 + 64));
      if ( (int *)(v10 + 64) != v9 )
        do
          std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Val_less_iter>(v5);
          v5 = (void **)(v10 + 68);
          v12 = v9 - 16 == (int *)(v10 + 4);
          v10 += 4;
        while ( !v12 );
  v11 = (int *)v114;
  v12 = v114 == (_DWORD)v9;
  if ( (int *)v114 != v9 )
    v5 = (void **)(v114 + 4);
    v12 = v114 + 4 == (_DWORD)v9;
  if ( !v12 )
    v13 = (const void **)v114;
    while ( 1 )
      v14 = *((_DWORD *)*v13 - 3);
      if ( v14 == *((_DWORD *)*v5 - 3) && !memcmp(*v13, *v5, v14) )
        break;
      v13 = (const void **)v5;
      v12 = (void **)v9 == v5 + 1;
      ++v5;
      if ( v12 )
        goto LABEL_27;
    if ( (int *)v13 != v9 )
      v15 = (int *)(v13 + 1);
      while ( 1 )
        ++v15;
        if ( v15 == v9 )
          break;
        v16 = *((_DWORD *)*v13 - 3);
        if ( v16 != *(_DWORD *)(*v15 - 12) || memcmp(*v13, (const void *)*v15, v16) )
          ++v13;
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v13,
            v15);
      v9 = (int *)(v13 + 1);
LABEL_27:
  v17 = (int *)ptr;
  if ( v9 == ptr )
    if ( ptr != v9 )
      v18 = v9;
      do
        v21 = (int *)(*v18 - 12);
        if ( v21 != &dword_28898C0 )
          v19 = (unsigned int *)(*v18 - 4);
          if ( &pthread_create )
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j_j__ZdlPv_9(v21);
        ++v18;
      while ( v18 != v17 );
      v11 = (int *)v114;
    ptr = v9;
  if ( v11 != v9 )
    v22 = &v108;
    v23 = (void **)&v100;
    v24 = &dword_28898C0;
    v85 = 0;
      Json::Value::Value(v22, 0);
      UIResourcePackMergeStrategy::UIResourcePackMergeStrategy((int)&v106, v11, (int)v22, a5);
      v54 = (int (__fastcall *)(void **, char **, void ***))*((_DWORD *)*v87 + 3);
      sub_DA73B4((int *)&v103, v11);
      v55 = v103;
      v103 = (char *)&unk_28898CC;
      v104 = v55;
      v105 = 0;
      v56 = v54(v87, &v104, &v106);
      v57 = v104 - 12;
      if ( (int *)(v104 - 12) != v24 )
        v44 = (unsigned int *)(v104 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
        else
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j_j__ZdlPv_9(v57);
      v58 = v103 - 12;
      if ( (int *)(v103 - 12) != v24 )
        v46 = (unsigned int *)(v103 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j_j__ZdlPv_9(v58);
      if ( v56 )
        if ( Json::Value::isNull((Json::Value *)&v108) )
          v22 = &v108;
          Json::Value::get((Json::Value *)&v102, &v108, (const Json::Value *)"namespace", (const Json::Value *)&v117);
          if ( Json::Value::isNull((Json::Value *)&v102) == 1 )
            sub_DA7364((void **)&v101, "_root");
            v25 = v85;
            v26 = v23;
            sub_DA7364(v23, (const char *)&unk_257BC67);
            Json::Value::asString(&v101, (int)&v102, (int *)v23);
            v27 = (void *)(v100 - 12);
            if ( (int *)(v100 - 12) != &dword_28898C0 )
              v50 = (unsigned int *)(v100 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v51 = __ldrex(v50);
                while ( __strex(v51 - 1, v50) );
                v26 = v23;
              }
              else
                v51 = (*v50)--;
              if ( v51 <= 0 )
                j_j_j_j_j__ZdlPv_9(v27);
            v23 = v26;
          Json::Value::begin((Json::Value *)&v99, (int)&v108);
          while ( 1 )
            Json::Value::end((Json::Value *)&v98, (int)&v108);
            if ( Json::ValueIteratorBase::isEqual(
                   (Json::ValueIteratorBase *)&v99,
                   (const Json::ValueIteratorBase *)&v98) == 1 )
              break;
            v28 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v99);
            if ( !Json::Value::isNull(v28) )
              v29 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v99);
              sub_DA7364((void **)&v97, v29);
              v96 = (char *)&unk_28898CC;
              v94 = (char *)&unk_28898CC;
              v95 = &unk_28898CC;
              UIResolvedDef::parseName(&v97, (int *)&v96, (int *)&v95, (void **)&v94, 0);
              if ( !*(v95 - 3) )
                EntityInteraction::setInteractText((int *)&v95, &v101);
              v89 = v25;
              sub_DA73B4((int *)((unsigned int)&v89 | 4), &v101);
              sub_DA73B4(&v90, (int *)&v96);
              sub_DA73B4(&v91, (int *)&v95);
              sub_DA73B4(&v92, (int *)&v94);
              Json::Value::Value((Json::Value *)&v93, v28);
              v30 = *(_QWORD *)(v86 + 4);
              if ( (_DWORD)v30 == HIDWORD(v30) )
                std::vector<UIDefRepository::DefEntry,std::allocator<UIDefRepository::DefEntry>>::_M_emplace_back_aux<UIDefRepository::DefEntry>(
                  (unsigned __int64 *)v86,
                  (int)&v89);
                UIDefRepository::DefEntry::DefEntry(v30, (int)&v89);
                *(_DWORD *)(v86 + 4) += 40;
              UIDefRepository::DefEntry::~DefEntry((UIDefRepository::DefEntry *)&v89);
              v31 = v94 - 12;
              if ( (int *)(v94 - 12) != &dword_28898C0 )
                v35 = (unsigned int *)(v94 - 4);
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
                  j_j_j_j_j__ZdlPv_9(v31);
              v32 = (char *)(v95 - 3);
              if ( v95 - 3 != &dword_28898C0 )
                v37 = v95 - 1;
                    v38 = __ldrex(v37);
                  while ( __strex(v38 - 1, v37) );
                  v38 = (*v37)--;
                if ( v38 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v32);
              v33 = v96 - 12;
              if ( (int *)(v96 - 12) != &dword_28898C0 )
                v39 = (unsigned int *)(v96 - 4);
                    v40 = __ldrex(v39);
                  while ( __strex(v40 - 1, v39) );
                  v40 = (*v39)--;
                if ( v40 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v33);
              ++v25;
              v34 = (void *)(v97 - 12);
              if ( (int *)(v97 - 12) != &dword_28898C0 )
                v41 = (unsigned int *)(v97 - 4);
                    v42 = __ldrex(v41);
                  while ( __strex(v42 - 1, v41) );
                  v42 = (*v41)--;
                if ( v42 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v34);
            Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v99);
          v43 = (void *)(v101 - 12);
          v85 = v25;
          if ( (int *)(v101 - 12) != &dword_28898C0 )
            v52 = (unsigned int *)(v101 - 4);
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
              v22 = &v108;
              v53 = (*v52)--;
            if ( v53 <= 0 )
              j_j_j_j_j__ZdlPv_9(v43);
          Json::Value::~Value((Json::Value *)&v102);
        v24 = &dword_28898C0;
        v22 = &v108;
      v106 = &off_26D9070;
      v59 = (void *)(v107 - 12);
      if ( (int *)(v107 - 12) != v24 )
        v48 = (unsigned int *)(v107 - 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j_j__ZdlPv_9(v59);
      Json::Value::~Value((Json::Value *)v22);
      ++v11;
    while ( v11 != v9 );
    *(_QWORD *)(&v9 - 1) = *(_QWORD *)&v114;
      v62 = (int *)(*v11 - 12);
      if ( v62 != &dword_28898C0 )
        v60 = (unsigned int *)(*v11 - 4);
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j_j__ZdlPv_9(v62);
    v9 = (int *)v114;
  if ( v9 )
    operator delete(v9);
  Json::Value::~Value((Json::Value *)&v117);
  Json::Value::~Value((Json::Value *)&v118);
  Json::Reader::~Reader((Json::Reader *)&v119);
  v64 = v121;
  v63 = v120;
  if ( v120 != v121 )
      v69 = *(_DWORD *)(v63 + 4);
      v70 = (void *)(v69 - 12);
      if ( (int *)(v69 - 12) != &dword_28898C0 )
        v65 = (unsigned int *)(v69 - 4);
            v66 = __ldrex(v65);
          while ( __strex(v66 - 1, v65) );
          v66 = (*v65)--;
        if ( v66 <= 0 )
          j_j_j_j_j__ZdlPv_9(v70);
      v71 = (int *)(*(_DWORD *)v63 - 12);
      if ( v71 != &dword_28898C0 )
        v67 = (unsigned int *)(*(_DWORD *)v63 - 4);
            v68 = __ldrex(v67);
          while ( __strex(v68 - 1, v67) );
          v68 = (*v67)--;
        if ( v68 <= 0 )
          j_j_j_j_j__ZdlPv_9(v71);
      v63 += 8;
    while ( v63 != v64 );
    v63 = v120;
  if ( v63 )
    operator delete((void *)v63);
}


void __fastcall UIDefRepository::forEachControl(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int i; // r8@1
  int j; // r11@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  const void **v10; // r0@22
  void (__fastcall *v11)(char *, int, signed int); // r3@22
  char *v12; // r0@26
  void *v13; // r0@27
  char v14; // [sp+10h] [bp-40h]@23
  void (__fastcall *v15)(char *, char *, signed int); // [sp+18h] [bp-38h]@22
  int v16; // [sp+1Ch] [bp-34h]@23
  int v17; // [sp+20h] [bp-30h]@8
  char *v18; // [sp+24h] [bp-2Ch]@4

  v2 = a1;
  v3 = a2;
  for ( i = *(_DWORD *)(a1 + 8); i; i = *(_DWORD *)i )
  {
    for ( j = *(_DWORD *)(i + 20); j; j = *(_DWORD *)j )
    {
      if ( !Json::Value::isNull((Json::Value *)(j + 16)) && Json::Value::isObject((Json::Value *)(j + 16)) == 1 )
      {
        sub_119C854(&v17, (int *)(i + 4));
        sub_119C894((const void **)&v17, ".", 1u);
        v10 = sub_119C8A4((const void **)&v17, (const void **)(j + 8));
        v18 = (char *)*v10;
        *v10 = &unk_28898CC;
        v15 = 0;
        v11 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
        if ( v11 )
        {
          v11(&v14, v3, 2);
          v16 = *(_DWORD *)(v3 + 12);
          v15 = *(void (__fastcall **)(char *, char *, signed int))(v3 + 8);
        }
        UIDefRepository::_forEachControl(v2, j + 16, (int)&v18, (int)&v14);
        if ( v15 )
          v15(&v14, &v14, 3);
        v12 = v18 - 12;
        if ( (int *)(v18 - 12) != &dword_28898C0 )
          v6 = (unsigned int *)(v18 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v12);
        v13 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
          v8 = (unsigned int *)(v17 - 4);
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v13);
      }
    }
  }
}


void __fastcall UIDefRepository::_collectAllDefEntries(int a1, int a2, void **a3, int a4, int a5)
{
  UIDefRepository::_collectAllDefEntries(a1, a2, a3, a4, a5);
}


void __fastcall UIDefRepository::_applyGlobalColorFormat(UIDefRepository *this)
{
  UIDefRepository *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@2
  void *v4; // r0@3
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  void *v8; // r0@7
  void *v9; // r0@8
  void *v10; // r0@9
  void *v11; // r0@10
  void *v12; // r0@11
  void *v13; // r0@12
  void *v14; // r0@13
  void *v15; // r0@14
  void *v16; // r0@15
  void *v17; // r0@16
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  unsigned int *v26; // r2@34
  signed int v27; // r1@36
  unsigned int *v28; // r2@38
  signed int v29; // r1@40
  unsigned int *v30; // r2@42
  signed int v31; // r1@44
  unsigned int *v32; // r2@46
  signed int v33; // r1@48
  unsigned int *v34; // r2@50
  signed int v35; // r1@52
  unsigned int *v36; // r2@54
  signed int v37; // r1@56
  unsigned int *v38; // r2@58
  signed int v39; // r1@60
  unsigned int *v40; // r2@62
  signed int v41; // r1@64
  unsigned int *v42; // r2@66
  signed int v43; // r1@68
  unsigned int *v44; // r2@70
  signed int v45; // r1@72
  unsigned int *v46; // r2@74
  signed int v47; // r1@76
  unsigned int *v48; // r2@78
  signed int v49; // r1@80
  int v50; // [sp+8h] [bp-190h]@1
  int v51; // [sp+10h] [bp-188h]@1
  int v52; // [sp+18h] [bp-180h]@1
  int v53; // [sp+20h] [bp-178h]@1
  int v54; // [sp+28h] [bp-170h]@1
  int v55; // [sp+30h] [bp-168h]@1
  int v56; // [sp+38h] [bp-160h]@1
  int v57; // [sp+40h] [bp-158h]@1
  int v58; // [sp+48h] [bp-150h]@1
  int v59; // [sp+50h] [bp-148h]@1
  int v60; // [sp+58h] [bp-140h]@1
  int v61; // [sp+60h] [bp-138h]@1
  int v62; // [sp+68h] [bp-130h]@1
  int v63; // [sp+70h] [bp-128h]@1
  int v64; // [sp+78h] [bp-120h]@1
  int v65; // [sp+80h] [bp-118h]@1
  char v66; // [sp+84h] [bp-114h]@1
  int v67; // [sp+94h] [bp-104h]@1
  int v68; // [sp+A4h] [bp-F4h]@1
  int v69; // [sp+B4h] [bp-E4h]@1
  int v70; // [sp+C4h] [bp-D4h]@1
  int v71; // [sp+D4h] [bp-C4h]@1
  int v72; // [sp+E4h] [bp-B4h]@1
  int v73; // [sp+F4h] [bp-A4h]@1
  int v74; // [sp+104h] [bp-94h]@1
  int v75; // [sp+114h] [bp-84h]@1
  int v76; // [sp+124h] [bp-74h]@1
  int v77; // [sp+134h] [bp-64h]@1
  int v78; // [sp+144h] [bp-54h]@1
  int v79; // [sp+154h] [bp-44h]@1
  int v80; // [sp+164h] [bp-34h]@1
  int v81; // [sp+174h] [bp-24h]@1

  v1 = this;
  sub_119C884((void **)&v65, "$0_color_format");
  sub_DACB00((int)&v66, (int)v1, (const char **)&v65);
  sub_119C884((void **)&v64, "$1_color_format");
  sub_DACB00((int)&v67, (int)v1, (const char **)&v64);
  sub_119C884((void **)&v63, "$2_color_format");
  sub_DACB00((int)&v68, (int)v1, (const char **)&v63);
  sub_119C884((void **)&v62, "$3_color_format");
  sub_DACB00((int)&v69, (int)v1, (const char **)&v62);
  sub_119C884((void **)&v61, "$4_color_format");
  sub_DACB00((int)&v70, (int)v1, (const char **)&v61);
  sub_119C884((void **)&v60, "$5_color_format");
  sub_DACB00((int)&v71, (int)v1, (const char **)&v60);
  sub_119C884((void **)&v59, "$6_color_format");
  sub_DACB00((int)&v72, (int)v1, (const char **)&v59);
  sub_119C884((void **)&v58, "$7_color_format");
  sub_DACB00((int)&v73, (int)v1, (const char **)&v58);
  sub_119C884((void **)&v57, "$8_color_format");
  sub_DACB00((int)&v74, (int)v1, (const char **)&v57);
  sub_119C884((void **)&v56, "$9_color_format");
  sub_DACB00((int)&v75, (int)v1, (const char **)&v56);
  sub_119C884((void **)&v55, "$a_color_format");
  sub_DACB00((int)&v76, (int)v1, (const char **)&v55);
  sub_119C884((void **)&v54, "$b_color_format");
  sub_DACB00((int)&v77, (int)v1, (const char **)&v54);
  sub_119C884((void **)&v53, "$c_color_format");
  sub_DACB00((int)&v78, (int)v1, (const char **)&v53);
  sub_119C884((void **)&v52, "$d_color_format");
  sub_DACB00((int)&v79, (int)v1, (const char **)&v52);
  sub_119C884((void **)&v51, "$e_color_format");
  sub_DACB00((int)&v80, (int)v1, (const char **)&v51);
  sub_119C884((void **)&v50, "$f_color_format");
  sub_DACB00((int)&v81, (int)v1, (const char **)&v50);
  ColorFormat::setColors((int)&v66);
  v2 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v50 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  v3 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v51 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  v4 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v52 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  v5 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v53 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v54 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v55 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v56 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v57 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v58 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v59 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v60 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v61 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v62 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v63 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v64 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v65 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
}
