

int __fastcall ScreenController::_handleToggleChangeEvent(int a1, _WORD *a2)
{
  _WORD *v2; // r8@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r7@1
  unsigned int v5; // r6@1
  int *v6; // r0@1
  int *v7; // r4@2
  unsigned __int16 v8; // r2@2
  int v9; // r5@4
  bool v10; // zf@7
  int v11; // r4@10
  int v12; // r6@10
  int i; // r5@10
  int v14; // r0@12
  int result; // r0@13

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 192);
  v4 = *a2;
  v5 = v4 % (unsigned int)(*(_QWORD *)(a1 + 192) >> 32);
  v6 = *(int **)(v3 + 4 * v5);
  if ( !v6 )
    goto LABEL_14;
  v7 = (int *)*v6;
  v8 = *(_WORD *)(*v6 + 4);
  while ( v4 != v8 )
  {
    v9 = *v7;
    if ( *v7 )
    {
      v6 = (int *)v3;
      v8 = *(_WORD *)(v9 + 4);
      v7 = *(int **)v3;
      if ( (unsigned int)*(_WORD *)(v9 + 4) % HIDWORD(v3) == v5 )
        continue;
    }
  }
  v10 = v6 == 0;
  if ( v6 )
    v6 = (int *)*v6;
    v10 = v6 == 0;
  if ( v10 )
LABEL_14:
    result = 0;
  else
    v11 = *((_QWORD *)v6 + 1) >> 32;
    v12 = *((_QWORD *)v6 + 1);
    for ( i = 0; v11 != v12; i |= v14 )
      if ( !*(_DWORD *)(v12 + 8) )
        sub_DA7654();
      v14 = (*(int (__fastcall **)(int, _WORD *))(v12 + 12))(v12, v2);
      v12 += 16;
    result = i;
  return result;
}


void __fastcall ScreenController::bindFloat(int a1, int *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int v7; // r4@1
  int v8; // r9@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  void *v10; // r10@5
  void (__fastcall *v11)(int *, int *, signed int); // r4@5
  _DWORD *v12; // r7@9
  void (*v13)(void); // r3@9
  void (__fastcall *v14)(int *, int *, signed int); // r3@12
  __int64 v15; // r0@14
  __int64 v16; // r4@17
  int v17; // r6@17
  _DWORD *v18; // r0@17
  _DWORD *v19; // r8@18
  int v20; // r4@18
  _DWORD *v21; // r7@20
  bool v22; // zf@23
  void (*v23)(void); // r3@26
  char v24; // [sp+4h] [bp-64h]@2
  void (*v25)(void); // [sp+Ch] [bp-5Ch]@1
  int v26; // [sp+10h] [bp-58h]@2
  int v27; // [sp+14h] [bp-54h]@4
  void (__fastcall *v28)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v29; // [sp+20h] [bp-48h]@4
  char v30; // [sp+24h] [bp-44h]@6
  void (*v31)(void); // [sp+2Ch] [bp-3Ch]@5
  int v32; // [sp+30h] [bp-38h]@6
  int v33; // [sp+34h] [bp-34h]@8
  void (__fastcall *v34)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v35; // [sp+40h] [bp-28h]@8

  v4 = *a2;
  v5 = a4;
  v25 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  v7 = a3;
  v8 = a1;
  if ( v6 )
  {
    v6(&v24, v5, 2);
    v26 = *(_DWORD *)(v5 + 12);
    v25 = *(void (**)(void))(v5 + 8);
  }
  v28 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v7 + 8);
  if ( v9 )
    v9(&v27, v7, 2);
    v29 = *(_DWORD *)(v7 + 12);
    v28 = *(void (__fastcall **)(int *, int *, signed int))(v7 + 8);
  v10 = operator new(0x18u);
  v11 = 0;
  *(_DWORD *)v10 = 0;
  *((_DWORD *)v10 + 1) = v4;
  v31 = 0;
  if ( v25 )
    ((void (__fastcall *)(char *, char *, signed int))v25)(&v30, &v24, 2);
    v32 = v26;
    v31 = v25;
  v34 = 0;
  if ( v28 )
    v28(&v33, &v27, 2);
    v11 = v28;
    v35 = v29;
    v34 = v28;
  *((_DWORD *)v10 + 4) = 0;
  v12 = operator new(0x20u);
  v13 = v31;
  v12[2] = 0;
  if ( v13 )
    v13();
    v11 = v34;
    v12[3] = v32;
    v12[2] = v31;
  v12[6] = 0;
  if ( v11 )
    v11(v12 + 4, &v33, 2);
    v12[7] = v35;
    v14 = v34;
    v12[6] = v34;
    *((_DWORD *)v10 + 2) = v12;
    *((_DWORD *)v10 + 4) = sub_DA38A4;
    *((_DWORD *)v10 + 5) = sub_DA3864;
    if ( v14 )
      v14(&v33, &v33, 3);
  else
    HIDWORD(v15) = sub_DA3864;
    LODWORD(v15) = sub_DA38A4;
    *((_QWORD *)v10 + 2) = v15;
  if ( v31 )
    v31();
  v16 = *(_QWORD *)(v8 + 288);
  v17 = *((_DWORD *)v10 + 1) % (unsigned int)(*(_QWORD *)(v8 + 288) >> 32);
  v18 = *(_DWORD **)(v16 + 4 * v17);
  if ( !v18 )
    goto LABEL_29;
  v19 = (_DWORD *)*v18;
  v20 = *(_DWORD *)(*v18 + 4);
  while ( *((_DWORD *)v10 + 1) != v20 )
    v21 = (_DWORD *)*v19;
    if ( *v19 )
    {
      LODWORD(v16) = v21[1];
      v18 = v19;
      v19 = (_DWORD *)*v19;
      if ( v21[1] % HIDWORD(v16) == v17 )
        continue;
    }
  v22 = v18 == 0;
  if ( v18 )
    v22 = *v18 == 0;
  if ( v22 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 288,
      v17,
      *((_DWORD *)v10 + 1),
      (int)v10);
    v23 = (void (*)(void))*((_DWORD *)v10 + 4);
    if ( v23 )
      v23();
    operator delete(v10);
    ((void (*)(void))v28)();
    v25();
}


void __fastcall ScreenController::registerTextEditChangedEventHandler(int a1, unsigned int a2, int a3)
{
  ScreenController::registerTextEditChangedEventHandler(a1, a2, a3);
}


void __fastcall ScreenController::bindBool(int a1, int *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int v7; // r4@1
  int v8; // r9@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  void *v10; // r10@5
  void (__fastcall *v11)(int *, int *, signed int); // r4@5
  _DWORD *v12; // r7@9
  void (*v13)(void); // r3@9
  void (__fastcall *v14)(int *, int *, signed int); // r3@12
  __int64 v15; // r0@14
  __int64 v16; // r4@17
  int v17; // r6@17
  _DWORD *v18; // r0@17
  _DWORD *v19; // r8@18
  int v20; // r4@18
  _DWORD *v21; // r7@20
  bool v22; // zf@23
  void (*v23)(void); // r3@26
  char v24; // [sp+4h] [bp-64h]@2
  void (*v25)(void); // [sp+Ch] [bp-5Ch]@1
  int v26; // [sp+10h] [bp-58h]@2
  int v27; // [sp+14h] [bp-54h]@4
  void (__fastcall *v28)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v29; // [sp+20h] [bp-48h]@4
  char v30; // [sp+24h] [bp-44h]@6
  void (*v31)(void); // [sp+2Ch] [bp-3Ch]@5
  int v32; // [sp+30h] [bp-38h]@6
  int v33; // [sp+34h] [bp-34h]@8
  void (__fastcall *v34)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v35; // [sp+40h] [bp-28h]@8

  v4 = *a2;
  v5 = a4;
  v25 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  v7 = a3;
  v8 = a1;
  if ( v6 )
  {
    v6(&v24, v5, 2);
    v26 = *(_DWORD *)(v5 + 12);
    v25 = *(void (**)(void))(v5 + 8);
  }
  v28 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v7 + 8);
  if ( v9 )
    v9(&v27, v7, 2);
    v29 = *(_DWORD *)(v7 + 12);
    v28 = *(void (__fastcall **)(int *, int *, signed int))(v7 + 8);
  v10 = operator new(0x18u);
  v11 = 0;
  *(_DWORD *)v10 = 0;
  *((_DWORD *)v10 + 1) = v4;
  v31 = 0;
  if ( v25 )
    ((void (__fastcall *)(char *, char *, signed int))v25)(&v30, &v24, 2);
    v32 = v26;
    v31 = v25;
  v34 = 0;
  if ( v28 )
    v28(&v33, &v27, 2);
    v11 = v28;
    v35 = v29;
    v34 = v28;
  *((_DWORD *)v10 + 4) = 0;
  v12 = operator new(0x20u);
  v13 = v31;
  v12[2] = 0;
  if ( v13 )
    v13();
    v11 = v34;
    v12[3] = v32;
    v12[2] = v31;
  v12[6] = 0;
  if ( v11 )
    v11(v12 + 4, &v33, 2);
    v12[7] = v35;
    v14 = v34;
    v12[6] = v34;
    *((_DWORD *)v10 + 2) = v12;
    *((_DWORD *)v10 + 4) = sub_DA3684;
    *((_DWORD *)v10 + 5) = sub_DA3640;
    if ( v14 )
      v14(&v33, &v33, 3);
  else
    HIDWORD(v15) = sub_DA3640;
    LODWORD(v15) = sub_DA3684;
    *((_QWORD *)v10 + 2) = v15;
  if ( v31 )
    v31();
  v16 = *(_QWORD *)(v8 + 288);
  v17 = *((_DWORD *)v10 + 1) % (unsigned int)(*(_QWORD *)(v8 + 288) >> 32);
  v18 = *(_DWORD **)(v16 + 4 * v17);
  if ( !v18 )
    goto LABEL_29;
  v19 = (_DWORD *)*v18;
  v20 = *(_DWORD *)(*v18 + 4);
  while ( *((_DWORD *)v10 + 1) != v20 )
    v21 = (_DWORD *)*v19;
    if ( *v19 )
    {
      LODWORD(v16) = v21[1];
      v18 = v19;
      v19 = (_DWORD *)*v19;
      if ( v21[1] % HIDWORD(v16) == v17 )
        continue;
    }
  v22 = v18 == 0;
  if ( v18 )
    v22 = *v18 == 0;
  if ( v22 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 288,
      v17,
      *((_DWORD *)v10 + 1),
      (int)v10);
    v23 = (void (*)(void))*((_DWORD *)v10 + 4);
    if ( v23 )
      v23();
    operator delete(v10);
    ((void (*)(void))v28)();
    v25();
}


void __fastcall ScreenController::bindFloatForCollection(int a1, int *a2, int *a3, int a4)
{
  int v4; // r9@1
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1
  void (__fastcall *v8)(char *, int, signed int); // r3@1
  void *v9; // r10@3
  void (__fastcall *v10)(char *, char *, signed int); // r4@3
  char *v11; // r7@5
  void (*v12)(void); // r3@6
  __int64 v13; // r0@8
  __int64 v14; // r4@9
  int v15; // r6@9
  _DWORD *v16; // r0@9
  _DWORD *v17; // r8@10
  int v18; // r4@10
  _DWORD *v19; // r7@12
  bool v20; // zf@15
  void (*v21)(void); // r3@18
  char v22; // [sp+4h] [bp-44h]@2
  void (__fastcall *v23)(char *, char *, signed int); // [sp+Ch] [bp-3Ch]@1
  int v24; // [sp+10h] [bp-38h]@2
  char v25; // [sp+14h] [bp-34h]@4
  void (*v26)(void); // [sp+1Ch] [bp-2Ch]@3
  int v27; // [sp+20h] [bp-28h]@4

  v4 = a1;
  v5 = a4;
  v6 = *a3;
  v7 = *a2;
  v23 = 0;
  v8 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  if ( v8 )
  {
    v8(&v22, v5, 2);
    v24 = *(_DWORD *)(v5 + 12);
    v23 = *(void (__fastcall **)(char *, char *, signed int))(v5 + 8);
  }
  v9 = operator new(0x18u);
  v10 = 0;
  *(_DWORD *)v9 = 0;
  *((_DWORD *)v9 + 1) = v6 ^ v7;
  v26 = 0;
  if ( v23 )
    v23(&v25, &v22, 2);
    v10 = v23;
    v27 = v24;
    v26 = (void (*)(void))v23;
  *((_DWORD *)v9 + 4) = 0;
  v11 = (char *)operator new(0x10u);
  *((_DWORD *)v11 + 2) = 0;
  if ( v10 )
    v10(v11, &v25, 2);
    *((_DWORD *)v11 + 3) = v27;
    v12 = v26;
    v20 = v26 == 0;
    *((_DWORD *)v11 + 2) = v26;
    *((_DWORD *)v9 + 2) = v11;
    *((_DWORD *)v9 + 4) = sub_DA413A;
    *((_DWORD *)v9 + 5) = sub_DA410E;
    if ( !v20 )
      v12();
  else
    HIDWORD(v13) = sub_DA410E;
    LODWORD(v13) = sub_DA413A;
    *((_QWORD *)v9 + 2) = v13;
  v14 = *(_QWORD *)(v4 + 316);
  v15 = *((_DWORD *)v9 + 1) % (unsigned int)(*(_QWORD *)(v4 + 316) >> 32);
  v16 = *(_DWORD **)(v14 + 4 * v15);
  if ( !v16 )
    goto LABEL_21;
  v17 = (_DWORD *)*v16;
  v18 = *(_DWORD *)(*v16 + 4);
  while ( *((_DWORD *)v9 + 1) != v18 )
    v19 = (_DWORD *)*v17;
    if ( *v17 )
    {
      LODWORD(v14) = v19[1];
      v16 = v17;
      v17 = (_DWORD *)*v17;
      if ( v19[1] % HIDWORD(v14) == v15 )
        continue;
    }
  v20 = v16 == 0;
  if ( v16 )
    v20 = *v16 == 0;
  if ( v20 )
LABEL_21:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(int,std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(int,std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v4 + 316,
      v15,
      *((_DWORD *)v9 + 1),
      (int)v9);
    v21 = (void (*)(void))*((_DWORD *)v9 + 4);
    if ( v21 )
      v21();
    operator delete(v9);
    ((void (*)(void))v23)();
}


int __fastcall ScreenController::handleGameEventNotification(int a1)
{
  __int64 v1; // r6@1
  int i; // r4@1
  int v3; // t1@2

  v1 = *(_QWORD *)(a1 + 220);
  for ( i = 0; HIDWORD(v1) != (_DWORD)v1; i |= (*(int (**)(void))(*(_DWORD *)v3 + 32))() )
  {
    v3 = *(_DWORD *)v1;
    LODWORD(v1) = v1 + 8;
  }
  return i;
}


int __fastcall ScreenController::_handleSliderChangeEvent(int a1, _WORD *a2)
{
  _WORD *v2; // r8@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r7@1
  unsigned int v5; // r6@1
  int *v6; // r0@1
  int *v7; // r4@2
  unsigned __int16 v8; // r2@2
  int v9; // r5@4
  bool v10; // zf@7
  __int64 v11; // r6@10
  int i; // r5@10
  int result; // r0@16

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 232);
  v4 = *a2;
  v5 = v4 % (unsigned int)(*(_QWORD *)(a1 + 232) >> 32);
  v6 = *(int **)(v3 + 4 * v5);
  if ( !v6 )
    goto LABEL_17;
  v7 = (int *)*v6;
  v8 = *(_WORD *)(*v6 + 4);
  while ( v4 != v8 )
  {
    v9 = *v7;
    if ( *v7 )
    {
      v6 = (int *)v3;
      v8 = *(_WORD *)(v9 + 4);
      v7 = *(int **)v3;
      if ( (unsigned int)*(_WORD *)(v9 + 4) % HIDWORD(v3) == v5 )
        continue;
    }
  }
  v10 = v6 == 0;
  if ( v6 )
    v6 = (int *)*v6;
    v10 = v6 == 0;
  if ( v10 )
LABEL_17:
    result = 0;
  else
    v11 = *((_QWORD *)v6 + 1);
    for ( i = 0; HIDWORD(v11) != (_DWORD)v11; LODWORD(v11) = v11 + 20 )
      if ( *((_BYTE *)v2 + 12) || !*(_BYTE *)(v11 + 16) )
      {
        if ( !*(_DWORD *)(v11 + 8) )
          sub_DA7654();
        i |= (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(v11 + 12))(
               v11,
               *(_QWORD *)(v2 + 2),
               *(_QWORD *)(v2 + 2) >> 32);
      }
    result = i;
  return result;
}


int __fastcall ScreenController::_handleInputModeChangedEvent(int a1, int a2)
{
  __int64 v2; // r6@1
  int v3; // r5@1
  int i; // r4@1
  int v5; // r0@3

  v2 = *(_QWORD *)(a1 + 128);
  v3 = a2;
  for ( i = 0; HIDWORD(v2) != (_DWORD)v2; i |= v5 )
  {
    if ( !*(_DWORD *)(v2 + 8) )
      sub_DA7654();
    v5 = (*(int (__fastcall **)(_DWORD, int))(v2 + 12))(v2, v3);
    LODWORD(v2) = v2 + 16;
  }
  return i;
}


signed int __fastcall ScreenController::areControllerTabsEnabled(ScreenController *this)
{
  return 1;
}


void __fastcall ScreenController::bindBoolForAnyCollection(int a1, int *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int v7; // r4@1
  int v8; // r9@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  void *v10; // r10@5
  void (__fastcall *v11)(int *, int *, signed int); // r4@5
  _DWORD *v12; // r7@9
  void (*v13)(void); // r3@9
  void (__fastcall *v14)(int *, int *, signed int); // r3@12
  __int64 v15; // r0@14
  __int64 v16; // r4@17
  int v17; // r6@17
  _DWORD *v18; // r0@17
  _DWORD *v19; // r8@18
  int v20; // r4@18
  _DWORD *v21; // r7@20
  bool v22; // zf@23
  void (*v23)(void); // r3@26
  char v24; // [sp+4h] [bp-64h]@2
  void (*v25)(void); // [sp+Ch] [bp-5Ch]@1
  int v26; // [sp+10h] [bp-58h]@2
  int v27; // [sp+14h] [bp-54h]@4
  void (__fastcall *v28)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v29; // [sp+20h] [bp-48h]@4
  char v30; // [sp+24h] [bp-44h]@6
  void (*v31)(void); // [sp+2Ch] [bp-3Ch]@5
  int v32; // [sp+30h] [bp-38h]@6
  int v33; // [sp+34h] [bp-34h]@8
  void (__fastcall *v34)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v35; // [sp+40h] [bp-28h]@8

  v4 = *a2;
  v5 = a4;
  v25 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  v7 = a3;
  v8 = a1;
  if ( v6 )
  {
    v6(&v24, v5, 2);
    v26 = *(_DWORD *)(v5 + 12);
    v25 = *(void (**)(void))(v5 + 8);
  }
  v28 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v7 + 8);
  if ( v9 )
    v9(&v27, v7, 2);
    v29 = *(_DWORD *)(v7 + 12);
    v28 = *(void (__fastcall **)(int *, int *, signed int))(v7 + 8);
  v10 = operator new(0x18u);
  v11 = 0;
  *(_DWORD *)v10 = 0;
  *((_DWORD *)v10 + 1) = v4;
  v31 = 0;
  if ( v25 )
    ((void (__fastcall *)(char *, char *, signed int))v25)(&v30, &v24, 2);
    v32 = v26;
    v31 = v25;
  v34 = 0;
  if ( v28 )
    v28(&v33, &v27, 2);
    v11 = v28;
    v35 = v29;
    v34 = v28;
  *((_DWORD *)v10 + 4) = 0;
  v12 = operator new(0x20u);
  v13 = v31;
  v12[2] = 0;
  if ( v13 )
    v13();
    v11 = v34;
    v12[3] = v32;
    v12[2] = v31;
  v12[6] = 0;
  if ( v11 )
    v11(v12 + 4, &v33, 2);
    v12[7] = v35;
    v14 = v34;
    v12[6] = v34;
    *((_DWORD *)v10 + 2) = v12;
    *((_DWORD *)v10 + 4) = sub_DA4662;
    *((_DWORD *)v10 + 5) = sub_DA460C;
    if ( v14 )
      v14(&v33, &v33, 3);
  else
    HIDWORD(v15) = sub_DA460C;
    LODWORD(v15) = sub_DA4662;
    *((_QWORD *)v10 + 2) = v15;
  if ( v31 )
    v31();
  v16 = *(_QWORD *)(v8 + 344);
  v17 = *((_DWORD *)v10 + 1) % (unsigned int)(*(_QWORD *)(v8 + 344) >> 32);
  v18 = *(_DWORD **)(v16 + 4 * v17);
  if ( !v18 )
    goto LABEL_29;
  v19 = (_DWORD *)*v18;
  v20 = *(_DWORD *)(*v18 + 4);
  while ( *((_DWORD *)v10 + 1) != v20 )
    v21 = (_DWORD *)*v19;
    if ( *v19 )
    {
      LODWORD(v16) = v21[1];
      v18 = v19;
      v19 = (_DWORD *)*v19;
      if ( v21[1] % HIDWORD(v16) == v17 )
        continue;
    }
  v22 = v18 == 0;
  if ( v18 )
    v22 = *v18 == 0;
  if ( v22 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(std::string const&,int,std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(std::string const&,int,std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 344,
      v17,
      *((_DWORD *)v10 + 1),
      (int)v10);
    v23 = (void (*)(void))*((_DWORD *)v10 + 4);
    if ( v23 )
      v23();
    operator delete(v10);
    ((void (*)(void))v28)();
    v25();
}


int *__fastcall ScreenController::onOpen(ScreenController *this, int a2, __int64 a3)
{
  ScreenController *v3; // r8@1
  int *result; // r0@1
  int *v5; // r10@1
  __int64 v6; // kr00_8@1
  int v7; // r9@2
  __int64 *v8; // r5@3
  void (__fastcall *v9)(_DWORD, _DWORD, _DWORD); // r0@3
  void (*v10)(void); // r3@6
  int v11; // r5@10
  __int64 *v12; // r7@11
  void (*v13)(void); // r0@11
  void (*v14)(void); // r3@14
  int v15; // r5@18
  __int64 *v16; // r7@19
  void (*v17)(void); // r0@19
  void (*v18)(void); // r3@22
  int v19; // t1@26
  int *i; // [sp+24h] [bp-8Ch]@1
  char v21; // [sp+28h] [bp-88h]@19
  void (*v22)(void); // [sp+30h] [bp-80h]@18
  int v23; // [sp+34h] [bp-7Ch]@19
  char v24; // [sp+38h] [bp-78h]@11
  void (*v25)(void); // [sp+40h] [bp-70h]@10
  int v26; // [sp+44h] [bp-6Ch]@11
  char v27; // [sp+48h] [bp-68h]@3
  void (__fastcall *v28)(_DWORD, _DWORD, _DWORD); // [sp+50h] [bp-60h]@2
  int v29; // [sp+54h] [bp-5Ch]@3
  __int64 v30; // [sp+58h] [bp-58h]@4
  void (*v31)(void); // [sp+60h] [bp-50h]@3
  int v32; // [sp+64h] [bp-4Ch]@4
  __int64 v33; // [sp+68h] [bp-48h]@12
  void (*v34)(void); // [sp+70h] [bp-40h]@11
  int v35; // [sp+74h] [bp-3Ch]@12
  __int64 v36; // [sp+78h] [bp-38h]@20
  void (*v37)(void); // [sp+80h] [bp-30h]@19
  int v38; // [sp+84h] [bp-2Ch]@20

  v3 = this;
  v6 = *(_QWORD *)((char *)this + 220);
  result = (int *)(*(_QWORD *)((char *)this + 220) >> 32);
  v5 = (int *)v6;
  for ( i = result; i != v5; result = i )
  {
    v7 = *v5;
    v28 = 0;
    HIDWORD(a3) = *((_DWORD *)v3 + 3);
    if ( HIDWORD(a3) )
    {
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(a3))(&v27, (char *)v3 + 4, 2);
      v8 = (__int64 *)(v7 + 4);
      v29 = *((_DWORD *)v3 + 4);
      v9 = 0;
      HIDWORD(a3) = *((_DWORD *)v3 + 3);
      v28 = (void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(a3);
      v31 = 0;
      if ( HIDWORD(a3) )
      {
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(a3))(&v30, &v27, 2);
        a2 = v29;
        v9 = v28;
        v32 = v29;
        v31 = (void (*)(void))v28;
        a3 = v30;
      }
    }
    else
    v30 = *v8;
    *v8 = a3;
    v31 = *(void (**)(void))(v7 + 12);
    v10 = v31;
    *(_DWORD *)(v7 + 12) = v9;
    v32 = *(_DWORD *)(v7 + 16);
    *(_DWORD *)(v7 + 16) = a2;
    if ( v10 )
      v10();
    if ( v28 )
      v28(&v27, &v27, 3);
    v11 = *v5;
    v25 = 0;
    HIDWORD(a3) = *((_DWORD *)v3 + 7);
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(a3))(&v24, (char *)v3 + 20, 2);
      v12 = (__int64 *)(v11 + 20);
      v26 = *((_DWORD *)v3 + 8);
      v13 = 0;
      HIDWORD(a3) = *((_DWORD *)v3 + 7);
      v25 = (void (*)(void))HIDWORD(a3);
      v34 = 0;
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(a3))(&v33, &v24, 2);
        a2 = v26;
        v13 = v25;
        v35 = v26;
        v34 = v25;
        a3 = v33;
    v33 = *v12;
    *v12 = a3;
    v34 = *(void (**)(void))(v11 + 28);
    v14 = v34;
    *(_DWORD *)(v11 + 28) = v13;
    v35 = *(_DWORD *)(v11 + 32);
    *(_DWORD *)(v11 + 32) = a2;
    if ( v14 )
      v14();
    if ( v25 )
      v25();
    v15 = *v5;
    v22 = 0;
    HIDWORD(a3) = *((_DWORD *)v3 + 11);
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(a3))(&v21, (char *)v3 + 36, 2);
      v16 = (__int64 *)(v15 + 36);
      v23 = *((_DWORD *)v3 + 12);
      v17 = 0;
      HIDWORD(a3) = *((_DWORD *)v3 + 11);
      v22 = (void (*)(void))HIDWORD(a3);
      v37 = 0;
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(a3))(&v36, &v21, 2);
        a2 = v23;
        v17 = v22;
        v38 = v23;
        v37 = v22;
        a3 = v36;
    v36 = *v16;
    *v16 = a3;
    v37 = *(void (**)(void))(v15 + 44);
    v18 = v37;
    *(_DWORD *)(v15 + 44) = v17;
    v38 = *(_DWORD *)(v15 + 48);
    *(_DWORD *)(v15 + 48) = a2;
    if ( v18 )
      v18();
    if ( v22 )
      v22();
    v19 = *v5;
    v5 += 2;
    (*(void (**)(void))(*(_DWORD *)v19 + 8))();
  }
  return result;
}


void __fastcall ScreenController::registerButtonEventHandler(int a1, unsigned int a2, int a3, int a4, int a5)
{
  ScreenController::registerButtonEventHandler(a1, a2, a3, a4, a5);
}


void __fastcall ScreenController::bindColor(int a1, int *a2, int a3, int a4)
{
  ScreenController::bindColor(a1, a2, a3, a4);
}


signed int __fastcall ScreenController::canExit(ScreenController *this)
{
  __int64 v1; // r4@1
  int v2; // t1@2
  signed int result; // r0@4

  v1 = *(_QWORD *)((char *)this + 220);
  if ( (_DWORD)v1 == HIDWORD(v1) )
  {
    result = 1;
  }
  else
    while ( 1 )
    {
      v2 = *(_DWORD *)v1;
      LODWORD(v1) = v1 + 8;
      if ( !(*(int (**)(void))(*(_DWORD *)v2 + 16))() )
        break;
      if ( HIDWORD(v1) == (_DWORD)v1 )
        return 1;
    }
    result = 0;
  return result;
}


void __fastcall ScreenController::registerTextEventHandler(int a1, int a2)
{
  ScreenController::registerTextEventHandler(a1, a2);
}


void __fastcall ScreenController::registerToggleChangeEventHandler(int a1, unsigned int a2, int a3)
{
  __int16 v3; // r10@1
  unsigned __int64 *v4; // r9@1
  int v5; // r8@1
  unsigned int v6; // r11@1
  unsigned int v7; // r4@1
  unsigned int *v8; // r0@1
  unsigned int *v9; // r7@2
  unsigned __int16 v10; // r2@2
  _DWORD *v11; // r6@4
  bool v12; // zf@7
  int v13; // r5@10
  void (__fastcall *v14)(int, int, signed int); // r3@11
  int v15; // r0@14
  int v16; // r0@14
  __int64 v17; // kr08_8@14
  int v18; // r5@15
  void (__fastcall *v19)(int, int, signed int); // r3@16
  int v20; // [sp+0h] [bp-48h]@14
  __int16 v21; // [sp+8h] [bp-40h]@14
  int v22; // [sp+Ch] [bp-3Ch]@14
  int v23; // [sp+10h] [bp-38h]@14
  int v24; // [sp+14h] [bp-34h]@14
  int v25; // [sp+18h] [bp-30h]@14
  int v26; // [sp+1Ch] [bp-2Ch]@14
  int v27; // [sp+20h] [bp-28h]@14

  v3 = a2;
  v4 = (unsigned __int64 *)(a1 + 192);
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 196);
  v7 = a2 % *(_DWORD *)(a1 + 196);
  v8 = *(unsigned int **)(*(_DWORD *)(a1 + 192) + 4 * v7);
  if ( !v8 )
    goto LABEL_14;
  v9 = (unsigned int *)*v8;
  v10 = *(_WORD *)(*v8 + 4);
  while ( v10 != a2 )
  {
    v11 = (_DWORD *)*v9;
    if ( *v9 )
    {
      v8 = v9;
      v10 = *((_WORD *)v11 + 2);
      v9 = (unsigned int *)*v9;
      if ( *((_WORD *)v11 + 2) % v6 == v7 )
        continue;
    }
  }
  v12 = v8 == 0;
  if ( v8 )
    v7 = *v8;
    v12 = *v8 == 0;
  if ( v12 )
LABEL_14:
    v25 = 0;
    v26 = 0;
    v27 = 0;
    std::vector<std::function<ui::ViewRequest ()(ToggleChangeEventData &)>,std::allocator<std::function<ui::ViewRequest ()(ToggleChangeEventData &)>>>::_M_emplace_back_aux<std::function<ui::ViewRequest ()(ToggleChangeEventData &)>&>(
      &v25,
      v5);
    v15 = v25;
    v21 = v3;
    v22 = v15;
    v16 = v26;
    v23 = v16;
    v24 = v27;
    std::_Hashtable<short,std::pair<short const,std::vector<std::function<ui::ViewRequest ()(ToggleChangeEventData &)>,std::allocator<std::function<ui::ViewRequest ()(ToggleChangeEventData &)>>>>,std::allocator<std::pair<short const,std::vector<std::function<ui::ViewRequest ()(ToggleChangeEventData &)>,std::allocator<std::function<ui::ViewRequest ()(ToggleChangeEventData &)>>>>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<std::pair<short,std::vector<std::function<ui::ViewRequest ()(ToggleChangeEventData &)>,std::allocator<std::function<ui::ViewRequest ()(ToggleChangeEventData &)>>>>>(
      (int)&v20,
      v4,
      (int)&v21);
    v17 = *(_QWORD *)&v22;
    if ( v22 != v23 )
      v18 = v22;
      do
      {
        v19 = *(void (__fastcall **)(int, int, signed int))(v18 + 8);
        if ( v19 )
          v19(v18, v18, 3);
        v18 += 16;
      }
      while ( HIDWORD(v17) != v18 );
    if ( (_DWORD)v17 )
      operator delete((void *)v17);
  else
    v13 = *(_QWORD *)(v7 + 12);
    if ( v13 == *(_QWORD *)(v7 + 12) >> 32 )
      j_j_j__ZNSt6vectorISt8functionIFN2ui11ViewRequestER21ToggleChangeEventDataEESaIS6_EE19_M_emplace_back_auxIJRS6_EEEvDpOT_(
        (_QWORD *)(v7 + 8),
        v5);
    else
      *(_DWORD *)(v13 + 8) = 0;
      v14 = *(void (__fastcall **)(int, int, signed int))(v5 + 8);
      if ( v14 )
        v14(v13, v5, 2);
        *(_DWORD *)(v13 + 12) = *(_DWORD *)(v5 + 12);
        *(_DWORD *)(v13 + 8) = *(_DWORD *)(v5 + 8);
        v13 = *(_DWORD *)(v7 + 12);
      *(_DWORD *)(v7 + 12) = v13 + 16;
}


ScreenController *__fastcall ScreenController::~ScreenController(ScreenController *this)
{
  ScreenController *v1; // r8@1
  int v2; // r5@1
  void (*v3)(void); // r3@2
  int v4; // r4@2
  char *v5; // r0@5
  int v6; // r5@8
  void (*v7)(void); // r3@9
  int v8; // r4@9
  char *v9; // r0@12
  int v10; // r5@15
  void (*v11)(void); // r3@16
  int v12; // r4@16
  char *v13; // r0@19
  int v14; // r5@22
  int v15; // r4@23
  __int64 v16; // r6@23
  void (__fastcall *v17)(_DWORD, _DWORD, signed int); // r3@24
  char *v18; // r0@31
  int v19; // r5@34
  int v20; // r4@35
  __int64 v21; // r6@35
  void (__fastcall *v22)(_DWORD, _DWORD, signed int); // r3@36
  char *v23; // r0@43
  int v24; // r5@46
  int v25; // r7@46
  int v26; // r4@47
  unsigned int *v27; // r1@48
  unsigned int v28; // r0@50
  unsigned int *v29; // r6@54
  unsigned int v30; // r0@56
  int v31; // r5@65
  int v32; // r4@66
  __int64 v33; // r6@66
  void (__fastcall *v34)(_DWORD, _DWORD, signed int); // r3@67
  char *v35; // r0@74
  int v36; // r5@77
  int v37; // r4@78
  __int64 v38; // r6@78
  void (__fastcall *v39)(_DWORD, _DWORD, signed int); // r3@79
  char *v40; // r0@86
  int v41; // r4@89
  int v42; // r5@89
  void (__fastcall *v43)(int, int, signed int); // r3@90
  int v44; // r4@96
  int v45; // r5@96
  void (__fastcall *v46)(int, int, signed int); // r3@97
  int v47; // r4@103
  int v48; // r5@103
  void (__fastcall *v49)(int, int, signed int); // r3@104
  int v50; // r4@110
  int v51; // r5@110
  void (__fastcall *v52)(int, int, signed int); // r3@111
  void (*v53)(void); // r3@117
  void (*v54)(void); // r3@119
  int v55; // r5@121
  int v56; // r4@122
  __int64 v57; // r6@122
  void (__fastcall *v58)(_DWORD, _DWORD, signed int); // r3@123
  char *v59; // r0@130
  void (*v60)(void); // r3@133
  void (*v61)(void); // r3@135
  void (*v62)(void); // r3@137

  v1 = this;
  *(_DWORD *)this = &off_26D8E74;
  v2 = *((_DWORD *)this + 88);
  if ( v2 )
  {
    do
    {
      v3 = *(void (**)(void))(v2 + 16);
      v4 = *(_DWORD *)v2;
      if ( v3 )
        v3();
      operator delete((void *)v2);
      v2 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 43), 4 * (*((_QWORD *)v1 + 43) >> 32));
  *((_DWORD *)v1 + 88) = 0;
  *((_DWORD *)v1 + 89) = 0;
  v5 = (char *)*((_DWORD *)v1 + 86);
  if ( v5 && (char *)v1 + 368 != v5 )
    operator delete(v5);
  v6 = *((_DWORD *)v1 + 81);
  if ( v6 )
      v7 = *(void (**)(void))(v6 + 16);
      v8 = *(_DWORD *)v6;
      if ( v7 )
        v7();
      operator delete((void *)v6);
      v6 = v8;
    while ( v8 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 316), 4 * (*(_QWORD *)((char *)v1 + 316) >> 32));
  *((_DWORD *)v1 + 81) = 0;
  *((_DWORD *)v1 + 82) = 0;
  v9 = (char *)*((_DWORD *)v1 + 79);
  if ( v9 && (char *)v1 + 340 != v9 )
    operator delete(v9);
  v10 = *((_DWORD *)v1 + 74);
  if ( v10 )
      v11 = *(void (**)(void))(v10 + 16);
      v12 = *(_DWORD *)v10;
      if ( v11 )
        v11();
      operator delete((void *)v10);
      v10 = v12;
    while ( v12 );
  _aeabi_memclr4(*((_QWORD *)v1 + 36), 4 * (*((_QWORD *)v1 + 36) >> 32));
  *((_DWORD *)v1 + 74) = 0;
  *((_DWORD *)v1 + 75) = 0;
  v13 = (char *)*((_DWORD *)v1 + 72);
  if ( v13 && (char *)v1 + 312 != v13 )
    operator delete(v13);
  v14 = *((_DWORD *)v1 + 67);
  if ( v14 )
      v15 = *(_DWORD *)v14;
      v16 = *(_QWORD *)(v14 + 8);
      if ( (_DWORD)v16 != HIDWORD(v16) )
      {
        do
        {
          v17 = *(void (__fastcall **)(_DWORD, _DWORD, signed int))(v16 + 8);
          if ( v17 )
            v17(v16, v16, 3);
          LODWORD(v16) = v16 + 16;
        }
        while ( HIDWORD(v16) != (_DWORD)v16 );
        LODWORD(v16) = *(_DWORD *)(v14 + 8);
      }
      if ( (_DWORD)v16 )
        operator delete((void *)v16);
      operator delete((void *)v14);
      v14 = v15;
    while ( v15 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 260), 4 * (*(_QWORD *)((char *)v1 + 260) >> 32));
  *((_DWORD *)v1 + 67) = 0;
  *((_DWORD *)v1 + 68) = 0;
  v18 = (char *)*((_DWORD *)v1 + 65);
  if ( v18 && (char *)v1 + 284 != v18 )
    operator delete(v18);
  v19 = *((_DWORD *)v1 + 60);
  if ( v19 )
      v20 = *(_DWORD *)v19;
      v21 = *(_QWORD *)(v19 + 8);
      if ( (_DWORD)v21 != HIDWORD(v21) )
          v22 = *(void (__fastcall **)(_DWORD, _DWORD, signed int))(v21 + 8);
          if ( v22 )
            v22(v21, v21, 3);
          LODWORD(v21) = v21 + 20;
        while ( HIDWORD(v21) != (_DWORD)v21 );
        LODWORD(v21) = *(_DWORD *)(v19 + 8);
      if ( (_DWORD)v21 )
        operator delete((void *)v21);
      operator delete((void *)v19);
      v19 = v20;
    while ( v20 );
  _aeabi_memclr4(*((_QWORD *)v1 + 29), 4 * (*((_QWORD *)v1 + 29) >> 32));
  *((_DWORD *)v1 + 60) = 0;
  *((_DWORD *)v1 + 61) = 0;
  v23 = (char *)*((_DWORD *)v1 + 58);
  if ( v23 && (char *)v1 + 256 != v23 )
    operator delete(v23);
  v25 = *(_QWORD *)((char *)v1 + 220) >> 32;
  v24 = *(_QWORD *)((char *)v1 + 220);
  if ( v24 != v25 )
      v26 = *(_DWORD *)(v24 + 4);
      if ( v26 )
        v27 = (unsigned int *)(v26 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        else
          v28 = (*v27)--;
        if ( v28 == 1 )
          v29 = (unsigned int *)(v26 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
          if ( &pthread_create )
          {
            __dmb();
            do
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
          }
          else
            v30 = (*v29)--;
          if ( v30 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
      v24 += 8;
    while ( v24 != v25 );
    v24 = *((_DWORD *)v1 + 55);
  if ( v24 )
    operator delete((void *)v24);
  v31 = *((_DWORD *)v1 + 50);
  if ( v31 )
      v32 = *(_DWORD *)v31;
      v33 = *(_QWORD *)(v31 + 8);
      if ( (_DWORD)v33 != HIDWORD(v33) )
          v34 = *(void (__fastcall **)(_DWORD, _DWORD, signed int))(v33 + 8);
          if ( v34 )
            v34(v33, v33, 3);
          LODWORD(v33) = v33 + 16;
        while ( HIDWORD(v33) != (_DWORD)v33 );
        LODWORD(v33) = *(_DWORD *)(v31 + 8);
      if ( (_DWORD)v33 )
        operator delete((void *)v33);
      operator delete((void *)v31);
      v31 = v32;
    while ( v32 );
  _aeabi_memclr4(*((_QWORD *)v1 + 24), 4 * (*((_QWORD *)v1 + 24) >> 32));
  *((_DWORD *)v1 + 50) = 0;
  *((_DWORD *)v1 + 51) = 0;
  v35 = (char *)*((_DWORD *)v1 + 48);
  if ( v35 && (char *)v1 + 216 != v35 )
    operator delete(v35);
  v36 = *((_DWORD *)v1 + 43);
  if ( v36 )
      v37 = *(_DWORD *)v36;
      v38 = *(_QWORD *)(v36 + 8);
      if ( (_DWORD)v38 != HIDWORD(v38) )
          v39 = *(void (__fastcall **)(_DWORD, _DWORD, signed int))(v38 + 8);
          if ( v39 )
            v39(v38, v38, 3);
          LODWORD(v38) = v38 + 20;
        while ( HIDWORD(v38) != (_DWORD)v38 );
        LODWORD(v38) = *(_DWORD *)(v36 + 8);
      if ( (_DWORD)v38 )
        operator delete((void *)v38);
      operator delete((void *)v36);
      v36 = v37;
    while ( v37 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 164), 4 * (*(_QWORD *)((char *)v1 + 164) >> 32));
  *((_DWORD *)v1 + 43) = 0;
  *((_DWORD *)v1 + 44) = 0;
  v40 = (char *)*((_DWORD *)v1 + 41);
  if ( v40 && (char *)v1 + 188 != v40 )
    operator delete(v40);
  v41 = *((_QWORD *)v1 + 19) >> 32;
  v42 = *((_QWORD *)v1 + 19);
  if ( v42 != v41 )
      v43 = *(void (__fastcall **)(int, int, signed int))(v42 + 8);
      if ( v43 )
        v43(v42, v42, 3);
      v42 += 16;
    while ( v41 != v42 );
    v42 = *((_DWORD *)v1 + 38);
  if ( v42 )
    operator delete((void *)v42);
  v44 = *(_QWORD *)((char *)v1 + 140) >> 32;
  v45 = *(_QWORD *)((char *)v1 + 140);
  if ( v45 != v44 )
      v46 = *(void (__fastcall **)(int, int, signed int))(v45 + 8);
      if ( v46 )
        v46(v45, v45, 3);
      v45 += 16;
    while ( v44 != v45 );
    v45 = *((_DWORD *)v1 + 35);
  if ( v45 )
    operator delete((void *)v45);
  v47 = *((_QWORD *)v1 + 16) >> 32;
  v48 = *((_QWORD *)v1 + 16);
  if ( v48 != v47 )
      v49 = *(void (__fastcall **)(int, int, signed int))(v48 + 8);
      if ( v49 )
        v49(v48, v48, 3);
      v48 += 16;
    while ( v47 != v48 );
    v48 = *((_DWORD *)v1 + 32);
  if ( v48 )
    operator delete((void *)v48);
  v50 = *(_QWORD *)((char *)v1 + 116) >> 32;
  v51 = *(_QWORD *)((char *)v1 + 116);
  if ( v51 != v50 )
      v52 = *(void (__fastcall **)(int, int, signed int))(v51 + 8);
      if ( v52 )
        v52(v51, v51, 3);
      v51 += 16;
    while ( v50 != v51 );
    v51 = *((_DWORD *)v1 + 29);
  if ( v51 )
    operator delete((void *)v51);
  v53 = (void (*)(void))*((_DWORD *)v1 + 27);
  if ( v53 )
    v53();
  v54 = (void (*)(void))*((_DWORD *)v1 + 23);
  if ( v54 )
    v54();
  v55 = *((_DWORD *)v1 + 16);
  if ( v55 )
      v56 = *(_DWORD *)v55;
      v57 = *(_QWORD *)(v55 + 8);
      if ( (_DWORD)v57 != HIDWORD(v57) )
          v58 = *(void (__fastcall **)(_DWORD, _DWORD, signed int))(v57 + 8);
          if ( v58 )
            v58(v57, v57, 3);
          LODWORD(v57) = v57 + 20;
        while ( HIDWORD(v57) != (_DWORD)v57 );
        LODWORD(v57) = *(_DWORD *)(v55 + 8);
      if ( (_DWORD)v57 )
        operator delete((void *)v57);
      operator delete((void *)v55);
      v55 = v56;
    while ( v56 );
  _aeabi_memclr4(*((_QWORD *)v1 + 7), 4 * (*((_QWORD *)v1 + 7) >> 32));
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 17) = 0;
  v59 = (char *)*((_DWORD *)v1 + 14);
  if ( v59 && (char *)v1 + 80 != v59 )
    operator delete(v59);
  v60 = (void (*)(void))*((_DWORD *)v1 + 11);
  if ( v60 )
    v60();
  v61 = (void (*)(void))*((_DWORD *)v1 + 7);
  if ( v61 )
    v61();
  v62 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v62 )
    v62();
  return v1;
}


void __fastcall ScreenController::bindStringForCollection(int a1, int *a2, int *a3, int a4, int a5)
{
  ScreenController::bindStringForCollection(a1, a2, a3, a4, a5);
}


int __fastcall ScreenController::tick(ScreenController *this)
{
  int *v1; // r5@1 OVERLAPPED
  int *v2; // r6@1 OVERLAPPED
  int i; // r4@1
  int v4; // t1@2

  *(_QWORD *)&v1 = *(_QWORD *)((char *)this + 220);
  for ( i = 0; v2 != v1; i |= (*(int (**)(void))(*(_DWORD *)v4 + 36))() )
  {
    v4 = *v1;
    v1 += 2;
  }
  return i;
}


void __fastcall ScreenController::bindString(int a1, int *a2, int a3, int a4)
{
  ScreenController::bindString(a1, a2, a3, a4);
}


char *__fastcall ScreenController::registerHoloInputModeChangedEventHandler(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int); // r3@2
  char *result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 144);
  if ( v4 == *(_QWORD *)(a1 + 144) >> 32 )
  {
    result = j_j_j__ZNSt6vectorISt8functionIFN2ui11ViewRequestER34HoloInputModeChangeScreenEventDataEESaIS6_EE19_M_emplace_back_auxIJRS6_EEEvDpOT_(
               (_QWORD *)(a1 + 140),
               a2);
  }
  else
    *(_DWORD *)(v4 + 8) = 0;
    v5 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v5 )
    {
      v5(v4);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
      v4 = *(_DWORD *)(v2 + 144);
    }
    result = (char *)(v4 + 16);
    *(_DWORD *)(v2 + 144) = v4 + 16;
  return result;
}


int __fastcall ScreenController::_handleButtonEvent(ScreenController *this, ScreenEvent *a2)
{
  ScreenController *v2; // r5@1
  int v3; // r8@1
  int v4; // r9@1
  int v5; // r10@1
  unsigned int v6; // r11@1
  int v7; // r7@4
  int v8; // r4@4
  unsigned int v9; // r6@4
  unsigned int v10; // r5@4
  int v11; // r0@4
  int v12; // r10@5
  int v13; // r4@5
  bool v14; // zf@6
  int v15; // r9@11
  int v17; // r0@17
  bool v18; // zf@17
  unsigned int v19; // r0@22
  unsigned int v20; // r0@28
  unsigned int v21; // r0@35
  int v22; // [sp+0h] [bp-30h]@5
  __int16 v23; // [sp+4h] [bp-2Ch]@1
  int v24; // [sp+8h] [bp-28h]@5

  v2 = this;
  v3 = *((_WORD *)a2 + 2);
  v4 = 0;
  v5 = *((_DWORD *)a2 + 3);
  v6 = (unsigned int)*((_WORD *)a2 + 4) >> 8;
  v23 = *((_WORD *)a2 + 4);
  if ( !v6 && *((_DWORD *)this + 23) )
    v4 = (*((int (__fastcall **)(_DWORD))this + 24))((char *)this + 84);
  v7 = v6 ^ v3;
  v9 = *((_QWORD *)v2 + 7) >> 32;
  v8 = *((_QWORD *)v2 + 7);
  v10 = (v6 ^ v3) % v9;
  v11 = *(_DWORD *)(v8 + 4 * v10);
  if ( v11 )
  {
    v22 = v5;
    v12 = *(_DWORD *)v11;
    v24 = v4;
    v13 = *(_DWORD *)(*(_DWORD *)v11 + 20);
    while ( 1 )
    {
      v14 = v13 == v7;
      if ( v13 == v7 )
        v14 = v3 == *(_WORD *)(v12 + 6);
      if ( v14 && v6 == *(_BYTE *)(v12 + 4) )
        break;
      v15 = *(_DWORD *)v12;
      if ( !*(_DWORD *)v12 )
        return v24;
      v13 = *(_DWORD *)(v15 + 20);
      v11 = v12;
      v12 = *(_DWORD *)v12;
      if ( *(_DWORD *)(v15 + 20) % v9 != v10 )
    }
    if ( v11 )
      v17 = *(_DWORD *)v11;
      v4 = v24;
      v18 = v17 == 0;
      if ( v17 )
      {
        v13 = *(_QWORD *)(v17 + 8) >> 32;
        v9 = *(_QWORD *)(v17 + 8);
        v18 = v9 == v13;
      }
      if ( !v18 )
        if ( (_BYTE)v23 )
        {
          if ( (unsigned __int8)v23 == 1 )
          {
            do
            {
              v19 = *(_DWORD *)(v9 + 16);
              if ( v19 <= 4 && (1 << v19) & 0x13 )
              {
                if ( !*(_DWORD *)(v9 + 8) )
                  goto LABEL_41;
                v4 |= (*(int (__fastcall **)(unsigned int, int))(v9 + 12))(v9, v22);
              }
              v9 += 20;
            }
            while ( v13 != v9 );
          }
          else
              v20 = *(_DWORD *)(v9 + 16);
              if ( v20 <= 4 && (1 << v20) & 0x19 )
        }
        else
          do
            v21 = *(_DWORD *)(v9 + 16);
            if ( v21 <= 3 && v21 != 1 )
              if ( !*(_DWORD *)(v9 + 8) )
LABEL_41:
                sub_DA7654();
              v4 |= (*(int (__fastcall **)(_DWORD, _DWORD))(v9 + 12))(v9, v22);
            v9 += 20;
          while ( v13 != v9 );
    else
  }
  return v4;
}


void __fastcall ScreenController::registerSliderChangedEventHandler(int a1, unsigned int a2, int a3)
{
  int v3; // r6@1
  unsigned int v4; // r9@1
  void (__fastcall *v5)(char *, int, signed int); // r3@1
  int v6; // r8@1
  unsigned int v7; // r4@3
  int v8; // r8@3
  unsigned int v9; // t1@3
  int v10; // r7@3
  unsigned int *v11; // r0@3
  unsigned int *v12; // r6@4
  unsigned __int16 v13; // r2@4
  _DWORD *v14; // r5@6
  bool v15; // zf@9
  __int64 v16; // kr00_8@12
  int v17; // r0@16
  int v18; // r0@16
  __int64 v19; // kr08_8@16
  int v20; // r5@17
  void (__fastcall *v21)(int, int, signed int); // r3@18
  int v22; // [sp+0h] [bp-58h]@16
  __int16 v23; // [sp+8h] [bp-50h]@16
  int v24; // [sp+Ch] [bp-4Ch]@16
  int v25; // [sp+10h] [bp-48h]@16
  int v26; // [sp+14h] [bp-44h]@16
  int v27; // [sp+18h] [bp-40h]@16
  int v28; // [sp+1Ch] [bp-3Ch]@16
  int v29; // [sp+20h] [bp-38h]@16
  char v30; // [sp+24h] [bp-34h]@2
  void (*v31)(void); // [sp+2Ch] [bp-2Ch]@1
  int v32; // [sp+30h] [bp-28h]@2
  char v33; // [sp+34h] [bp-24h]@3

  v3 = a3;
  v31 = 0;
  v4 = a2;
  v5 = *(void (__fastcall **)(char *, int, signed int))(a3 + 8);
  v6 = a1;
  if ( v5 )
  {
    v5(&v30, a3, 2);
    v32 = *(_DWORD *)(v3 + 12);
    v31 = *(void (**)(void))(v3 + 8);
  }
  v33 = 0;
  v9 = *(_DWORD *)(v6 + 232);
  v8 = v6 + 232;
  v7 = v9;
  v10 = v4 % *(_DWORD *)(v8 + 4);
  v11 = *(unsigned int **)(v9 + 4 * v10);
  if ( !v11 )
    goto LABEL_16;
  v12 = (unsigned int *)*v11;
  v13 = *(_WORD *)(*v11 + 4);
  while ( v13 != v4 )
    v14 = (_DWORD *)*v12;
    if ( *v12 )
    {
      v7 = *((_WORD *)v14 + 2);
      v11 = v12;
      v13 = *((_WORD *)v14 + 2);
      v12 = (unsigned int *)*v12;
      if ( v7 % *(_DWORD *)(v8 + 4) == v10 )
        continue;
    }
  v15 = v11 == 0;
  if ( v11 )
    v7 = *v11;
    v15 = *v11 == 0;
  if ( v15 )
LABEL_16:
    v27 = 0;
    v28 = 0;
    v29 = 0;
    std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>>>::_M_emplace_back_aux<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>&>(
      &v27,
      (int)&v30);
    v17 = v27;
    v23 = v4;
    v24 = v17;
    v18 = v28;
    v25 = v18;
    v26 = v29;
    std::_Hashtable<short,std::pair<short const,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>>>>,std::allocator<std::pair<short const,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>>>>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<std::pair<short,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>>>>>(
      (int)&v22,
      (unsigned __int64 *)v8,
      (int)&v23);
    v19 = *(_QWORD *)&v24;
    if ( v24 != v25 )
      v20 = v24;
      do
      {
        v21 = *(void (__fastcall **)(int, int, signed int))(v20 + 8);
        if ( v21 )
          v21(v20, v20, 3);
        v20 += 20;
      }
      while ( HIDWORD(v19) != v20 );
    if ( (_DWORD)v19 )
      operator delete((void *)v19);
  else
    v16 = *(_QWORD *)(v7 + 12);
    if ( (_DWORD)v16 == HIDWORD(v16) )
      std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>>>::_M_emplace_back_aux<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>&>(
        (_QWORD *)(v7 + 8),
        (int)&v30);
    else
      *(_DWORD *)(v16 + 8) = 0;
      if ( v31 )
        ((void (__fastcall *)(_DWORD, char *, signed int))v31)(v16, &v30, 2);
        *(_DWORD *)(v16 + 12) = v32;
        *(_DWORD *)(v16 + 8) = v31;
      *(_BYTE *)(v16 + 16) = v33;
      *(_DWORD *)(v7 + 12) += 20;
  if ( v31 )
    v31();
}


void __fastcall ScreenController::bindGridSize(int a1, int *a2, int a3, int a4)
{
  ScreenController::bindGridSize(a1, a2, a3, a4);
}


void __fastcall ScreenController::~ScreenController(ScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = ScreenController::~ScreenController(this);
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall ScreenController::registerButtonEventHandler(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int v5; // r6@1
  int v6; // r5@1
  int v7; // r10@1
  void (__fastcall *v8)(char *, int, signed int); // r3@1
  unsigned int v9; // r11@1
  int v10; // r7@3
  unsigned int v11; // r4@3
  unsigned int v12; // r6@3
  unsigned int *v13; // r0@3
  unsigned int v14; // r9@4
  int v15; // r7@4
  int v16; // r1@6
  bool v17; // zf@6
  unsigned int v18; // r8@9
  int v19; // r0@11
  int v20; // r0@11
  __int64 v21; // kr00_8@11
  int v22; // r5@12
  void (__fastcall *v23)(int, int, signed int); // r3@13
  bool v24; // zf@21
  __int64 v25; // kr08_8@24
  int v26; // r1@25
  int v27; // r0@26
  unsigned __int64 *v28; // [sp+8h] [bp-60h]@3
  char v29; // [sp+Ch] [bp-5Ch]@11
  unsigned int v30; // [sp+14h] [bp-54h]@11
  int v31; // [sp+18h] [bp-50h]@11
  int v32; // [sp+1Ch] [bp-4Ch]@11
  int v33; // [sp+20h] [bp-48h]@11
  int v34; // [sp+24h] [bp-44h]@11
  int v35; // [sp+28h] [bp-40h]@11
  int v36; // [sp+2Ch] [bp-3Ch]@11
  char v37; // [sp+30h] [bp-38h]@2
  void (*v38)(void); // [sp+38h] [bp-30h]@1
  int v39; // [sp+3Ch] [bp-2Ch]@2
  int v40; // [sp+40h] [bp-28h]@3

  v5 = a1;
  v6 = a4;
  v38 = 0;
  v7 = a3;
  v8 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
  v9 = a2;
  if ( v8 )
  {
    v8(&v37, a5, 2);
    v39 = *(_DWORD *)(a5 + 12);
    v38 = *(void (**)(void))(a5 + 8);
  }
  v40 = v6;
  v10 = *(_DWORD *)(v5 + 56);
  v28 = (unsigned __int64 *)(v5 + 56);
  v11 = *(_DWORD *)(v5 + 60);
  v12 = (v7 ^ v9) % *(_DWORD *)(v5 + 60);
  v13 = *(unsigned int **)(v10 + 4 * v12);
  if ( !v13 )
    goto LABEL_11;
  v14 = *v13;
  v15 = *(_DWORD *)(*v13 + 20);
  while ( 1 )
    if ( v15 == (v7 ^ v9) )
    {
      v16 = *(_WORD *)(v14 + 6);
      v17 = v16 == v9;
      if ( v16 == v9 )
        v17 = *(_BYTE *)(v14 + 4) == v7;
      if ( v17 )
        break;
    }
    v18 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 )
      v15 = *(_DWORD *)(v18 + 20);
      v13 = (unsigned int *)v14;
      v14 = *(_DWORD *)v14;
      if ( *(_DWORD *)(v18 + 20) % v11 == v12 )
        continue;
  v24 = v13 == 0;
  if ( v13 )
    v11 = *v13;
    v24 = *v13 == 0;
  if ( v24 )
LABEL_11:
    v34 = 0;
    v35 = 0;
    v36 = 0;
    std::vector<std::tuple<ScreenController::PreviousButtonStateRequirement,std::function<ui::ViewRequest ()(UIPropertyBag *)>>,std::allocator<std::tuple<ScreenController::PreviousButtonStateRequirement,std::function<ui::ViewRequest ()(UIPropertyBag *)>>>>::_M_emplace_back_aux<std::tuple<ScreenController::PreviousButtonStateRequirement,std::function<ui::ViewRequest ()(UIPropertyBag *)>>&>(
      &v34,
      (int)&v37);
    v30 = v7 | (v9 << 16);
    v19 = v34;
    v31 = v19;
    v20 = v35;
    v32 = v20;
    v33 = v36;
    std::_Hashtable<std::tuple<short,ButtonState>,std::pair<std::tuple<short,ButtonState> const,std::vector<std::tuple<ScreenController::PreviousButtonStateRequirement,std::function<ui::ViewRequest ()(UIPropertyBag *)>>,std::allocator<std::tuple<ScreenController::PreviousButtonStateRequirement,std::function<ui::ViewRequest ()(UIPropertyBag *)>>>>>,std::allocator<std::pair<std::tuple<short,ButtonState> const,std::vector<std::tuple<ScreenController::PreviousButtonStateRequirement,std::function<ui::ViewRequest ()(UIPropertyBag *)>>,std::allocator<std::tuple<ScreenController::PreviousButtonStateRequirement,std::function<ui::ViewRequest ()(UIPropertyBag *)>>>>>>,std::__detail::_Select1st,std::equal_to<std::tuple<short,ButtonState>>,ScreenController::ButtonEventCallbackKeyHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<std::tuple<short,ButtonState>,std::vector<std::tuple<ScreenController::PreviousButtonStateRequirement,std::function<ui::ViewRequest ()(UIPropertyBag *)>>,std::allocator<std::tuple<ScreenController::PreviousButtonStateRequirement,std::function<ui::ViewRequest ()(UIPropertyBag *)>>>>>>(
      (int)&v29,
      v28,
      (int)&v30);
    v21 = *(_QWORD *)&v31;
    if ( v31 != v32 )
      v22 = v31;
      do
      {
        v23 = *(void (__fastcall **)(int, int, signed int))(v22 + 8);
        if ( v23 )
          v23(v22, v22, 3);
        v22 += 20;
      }
      while ( HIDWORD(v21) != v22 );
    if ( (_DWORD)v21 )
      operator delete((void *)v21);
  else
    v25 = *(_QWORD *)(v11 + 12);
    if ( (_DWORD)v25 == HIDWORD(v25) )
      std::vector<std::tuple<ScreenController::PreviousButtonStateRequirement,std::function<ui::ViewRequest ()(UIPropertyBag *)>>,std::allocator<std::tuple<ScreenController::PreviousButtonStateRequirement,std::function<ui::ViewRequest ()(UIPropertyBag *)>>>>::_M_emplace_back_aux<std::tuple<ScreenController::PreviousButtonStateRequirement,std::function<ui::ViewRequest ()(UIPropertyBag *)>>&>(
        (_QWORD *)(v11 + 8),
        (int)&v37);
    else
      v26 = v6;
      *(_DWORD *)(v25 + 8) = 0;
      if ( v38 )
        ((void (__fastcall *)(_DWORD, char *, signed int))v38)(v25, &v37, 2);
        *(_DWORD *)(v25 + 12) = v39;
        *(_DWORD *)(v25 + 8) = v38;
        v27 = *(_DWORD *)(v11 + 12);
        v26 = v40;
      *(_DWORD *)(v25 + 16) = v26;
      *(_DWORD *)(v11 + 12) = HIDWORD(v25) + 20;
  if ( v38 )
    v38();
}


void __fastcall ScreenController::bindIntForAnyCollection(int a1, int *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int v7; // r4@1
  int v8; // r9@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  void *v10; // r10@5
  void (__fastcall *v11)(int *, int *, signed int); // r4@5
  _DWORD *v12; // r7@9
  void (*v13)(void); // r3@9
  void (__fastcall *v14)(int *, int *, signed int); // r3@12
  __int64 v15; // r0@14
  __int64 v16; // r4@17
  int v17; // r6@17
  _DWORD *v18; // r0@17
  _DWORD *v19; // r8@18
  int v20; // r4@18
  _DWORD *v21; // r7@20
  bool v22; // zf@23
  void (*v23)(void); // r3@26
  char v24; // [sp+4h] [bp-64h]@2
  void (*v25)(void); // [sp+Ch] [bp-5Ch]@1
  int v26; // [sp+10h] [bp-58h]@2
  int v27; // [sp+14h] [bp-54h]@4
  void (__fastcall *v28)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v29; // [sp+20h] [bp-48h]@4
  char v30; // [sp+24h] [bp-44h]@6
  void (*v31)(void); // [sp+2Ch] [bp-3Ch]@5
  int v32; // [sp+30h] [bp-38h]@6
  int v33; // [sp+34h] [bp-34h]@8
  void (__fastcall *v34)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v35; // [sp+40h] [bp-28h]@8

  v4 = *a2;
  v5 = a4;
  v25 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  v7 = a3;
  v8 = a1;
  if ( v6 )
  {
    v6(&v24, v5, 2);
    v26 = *(_DWORD *)(v5 + 12);
    v25 = *(void (**)(void))(v5 + 8);
  }
  v28 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v7 + 8);
  if ( v9 )
    v9(&v27, v7, 2);
    v29 = *(_DWORD *)(v7 + 12);
    v28 = *(void (__fastcall **)(int *, int *, signed int))(v7 + 8);
  v10 = operator new(0x18u);
  v11 = 0;
  *(_DWORD *)v10 = 0;
  *((_DWORD *)v10 + 1) = v4;
  v31 = 0;
  if ( v25 )
    ((void (__fastcall *)(char *, char *, signed int))v25)(&v30, &v24, 2);
    v32 = v26;
    v31 = v25;
  v34 = 0;
  if ( v28 )
    v28(&v33, &v27, 2);
    v11 = v28;
    v35 = v29;
    v34 = v28;
  *((_DWORD *)v10 + 4) = 0;
  v12 = operator new(0x20u);
  v13 = v31;
  v12[2] = 0;
  if ( v13 )
    v13();
    v11 = v34;
    v12[3] = v32;
    v12[2] = v31;
  v12[6] = 0;
  if ( v11 )
    v11(v12 + 4, &v33, 2);
    v12[7] = v35;
    v14 = v34;
    v12[6] = v34;
    *((_DWORD *)v10 + 2) = v12;
    *((_DWORD *)v10 + 4) = sub_DA4784;
    *((_DWORD *)v10 + 5) = sub_DA4732;
    if ( v14 )
      v14(&v33, &v33, 3);
  else
    HIDWORD(v15) = sub_DA4732;
    LODWORD(v15) = sub_DA4784;
    *((_QWORD *)v10 + 2) = v15;
  if ( v31 )
    v31();
  v16 = *(_QWORD *)(v8 + 344);
  v17 = *((_DWORD *)v10 + 1) % (unsigned int)(*(_QWORD *)(v8 + 344) >> 32);
  v18 = *(_DWORD **)(v16 + 4 * v17);
  if ( !v18 )
    goto LABEL_29;
  v19 = (_DWORD *)*v18;
  v20 = *(_DWORD *)(*v18 + 4);
  while ( *((_DWORD *)v10 + 1) != v20 )
    v21 = (_DWORD *)*v19;
    if ( *v19 )
    {
      LODWORD(v16) = v21[1];
      v18 = v19;
      v19 = (_DWORD *)*v19;
      if ( v21[1] % HIDWORD(v16) == v17 )
        continue;
    }
  v22 = v18 == 0;
  if ( v18 )
    v22 = *v18 == 0;
  if ( v22 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(std::string const&,int,std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(std::string const&,int,std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 344,
      v17,
      *((_DWORD *)v10 + 1),
      (int)v10);
    v23 = (void (*)(void))*((_DWORD *)v10 + 4);
    if ( v23 )
      v23();
    operator delete(v10);
    ((void (*)(void))v28)();
    v25();
}


char *__fastcall ScreenController::registerInputModechangedEventHandler(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int); // r3@2
  char *result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 132);
  if ( v4 == *(_QWORD *)(a1 + 132) >> 32 )
  {
    result = j_j_j__ZNSt6vectorISt8functionIFN2ui11ViewRequestER30InputModeChangeScreenEventDataEESaIS6_EE19_M_emplace_back_auxIJRS6_EEEvDpOT_(
               (_QWORD *)(a1 + 128),
               a2);
  }
  else
    *(_DWORD *)(v4 + 8) = 0;
    v5 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v5 )
    {
      v5(v4);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
      v4 = *(_DWORD *)(v2 + 132);
    }
    result = (char *)(v4 + 16);
    *(_DWORD *)(v2 + 132) = v4 + 16;
  return result;
}


void __fastcall ScreenController::bindIntForAnyCollection(int a1, int *a2, int a3, int a4)
{
  ScreenController::bindIntForAnyCollection(a1, a2, a3, a4);
}


void __fastcall ScreenController::bindStringForAnyCollection(int a1, int *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int v7; // r4@1
  int v8; // r9@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  void *v10; // r10@5
  void (__fastcall *v11)(int *, int *, signed int); // r4@5
  _DWORD *v12; // r7@9
  void (*v13)(void); // r3@9
  void (__fastcall *v14)(int *, int *, signed int); // r3@12
  __int64 v15; // r0@14
  __int64 v16; // r4@17
  int v17; // r6@17
  _DWORD *v18; // r0@17
  _DWORD *v19; // r8@18
  int v20; // r4@18
  _DWORD *v21; // r7@20
  bool v22; // zf@23
  void (*v23)(void); // r3@26
  char v24; // [sp+4h] [bp-64h]@2
  void (*v25)(void); // [sp+Ch] [bp-5Ch]@1
  int v26; // [sp+10h] [bp-58h]@2
  int v27; // [sp+14h] [bp-54h]@4
  void (__fastcall *v28)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v29; // [sp+20h] [bp-48h]@4
  char v30; // [sp+24h] [bp-44h]@6
  void (*v31)(void); // [sp+2Ch] [bp-3Ch]@5
  int v32; // [sp+30h] [bp-38h]@6
  int v33; // [sp+34h] [bp-34h]@8
  void (__fastcall *v34)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v35; // [sp+40h] [bp-28h]@8

  v4 = *a2;
  v5 = a4;
  v25 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  v7 = a3;
  v8 = a1;
  if ( v6 )
  {
    v6(&v24, v5, 2);
    v26 = *(_DWORD *)(v5 + 12);
    v25 = *(void (**)(void))(v5 + 8);
  }
  v28 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v7 + 8);
  if ( v9 )
    v9(&v27, v7, 2);
    v29 = *(_DWORD *)(v7 + 12);
    v28 = *(void (__fastcall **)(int *, int *, signed int))(v7 + 8);
  v10 = operator new(0x18u);
  v11 = 0;
  *(_DWORD *)v10 = 0;
  *((_DWORD *)v10 + 1) = v4;
  v31 = 0;
  if ( v25 )
    ((void (__fastcall *)(char *, char *, signed int))v25)(&v30, &v24, 2);
    v32 = v26;
    v31 = v25;
  v34 = 0;
  if ( v28 )
    v28(&v33, &v27, 2);
    v11 = v28;
    v35 = v29;
    v34 = v28;
  *((_DWORD *)v10 + 4) = 0;
  v12 = operator new(0x20u);
  v13 = v31;
  v12[2] = 0;
  if ( v13 )
    v13();
    v11 = v34;
    v12[3] = v32;
    v12[2] = v31;
  v12[6] = 0;
  if ( v11 )
    v11(v12 + 4, &v33, 2);
    v12[7] = v35;
    v14 = v34;
    v12[6] = v34;
    *((_DWORD *)v10 + 2) = v12;
    *((_DWORD *)v10 + 4) = sub_DA44A4;
    *((_DWORD *)v10 + 5) = sub_DA43A8;
    if ( v14 )
      v14(&v33, &v33, 3);
  else
    HIDWORD(v15) = sub_DA43A8;
    LODWORD(v15) = sub_DA44A4;
    *((_QWORD *)v10 + 2) = v15;
  if ( v31 )
    v31();
  v16 = *(_QWORD *)(v8 + 344);
  v17 = *((_DWORD *)v10 + 1) % (unsigned int)(*(_QWORD *)(v8 + 344) >> 32);
  v18 = *(_DWORD **)(v16 + 4 * v17);
  if ( !v18 )
    goto LABEL_29;
  v19 = (_DWORD *)*v18;
  v20 = *(_DWORD *)(*v18 + 4);
  while ( *((_DWORD *)v10 + 1) != v20 )
    v21 = (_DWORD *)*v19;
    if ( *v19 )
    {
      LODWORD(v16) = v21[1];
      v18 = v19;
      v19 = (_DWORD *)*v19;
      if ( v21[1] % HIDWORD(v16) == v17 )
        continue;
    }
  v22 = v18 == 0;
  if ( v18 )
    v22 = *v18 == 0;
  if ( v22 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(std::string const&,int,std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(std::string const&,int,std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 344,
      v17,
      *((_DWORD *)v10 + 1),
      (int)v10);
    v23 = (void (*)(void))*((_DWORD *)v10 + 4);
    if ( v23 )
      v23();
    operator delete(v10);
    ((void (*)(void))v28)();
    v25();
}


int __fastcall ScreenController::registerGenericButtonUpEventHandler(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 84;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 84);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 92);
  v10 = v13;
  *(_DWORD *)(v4 + 92) = v8;
  v14 = *(_DWORD *)(v4 + 96);
  *(_DWORD *)(v4 + 96) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


signed int __fastcall ScreenController::tryExit(ScreenController *this)
{
  return 8;
}


void __fastcall ScreenController::_registerSubController(int a1, int a2)
{
  __int64 v2; // r2@1
  int v3; // r1@3
  unsigned int *v4; // r1@4
  unsigned int v5; // r2@6

  v2 = *(_QWORD *)(a1 + 224);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    j_j_j__ZNSt6vectorISt10shared_ptrI16ScreenControllerESaIS2_EE19_M_emplace_back_auxIJRKS2_EEEvDpOT_(
      (unsigned __int64 *)(a1 + 220),
      a2);
  }
  else
    *(_DWORD *)v2 = *(_DWORD *)a2;
    v3 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(v2 + 4) = v3;
    if ( v3 )
    {
      v4 = (unsigned int *)(v3 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 + 1, v4) );
        LODWORD(v2) = *(_DWORD *)(a1 + 224);
      }
      else
        ++*v4;
    }
    *(_DWORD *)(a1 + 224) = v2 + 8;
}


void __fastcall ScreenController::registerButtonClickHandler(int a1, unsigned int a2, int a3)
{
  ScreenController::registerButtonClickHandler(a1, a2, a3);
}


void __fastcall ScreenController::registerTextEventHandler(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void (__fastcall *v4)(char *); // r3@1
  int v5; // r1@3
  __int64 v6; // kr00_8@3
  int v7; // r5@4
  void (__fastcall *v8)(int, int, signed int); // r3@5
  char v9; // [sp+4h] [bp-4Ch]@3
  int v10; // [sp+Ch] [bp-44h]@3
  int v11; // [sp+10h] [bp-40h]@3
  int v12; // [sp+14h] [bp-3Ch]@3
  int v13; // [sp+18h] [bp-38h]@3
  int v14; // [sp+1Ch] [bp-34h]@3
  int v15; // [sp+20h] [bp-30h]@3
  int v16; // [sp+24h] [bp-2Ch]@3
  char v17; // [sp+28h] [bp-28h]@2
  void (*v18)(void); // [sp+30h] [bp-20h]@1
  int v19; // [sp+34h] [bp-1Ch]@2
  char v20; // [sp+38h] [bp-18h]@3

  v2 = a2;
  v18 = 0;
  v3 = a1;
  v4 = *(void (__fastcall **)(char *))(a2 + 8);
  if ( v4 )
  {
    v4(&v17);
    v19 = *(_DWORD *)(v2 + 12);
    v18 = *(void (**)(void))(v2 + 8);
  }
  v20 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>::_M_emplace_back_aux<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>&>(
    &v14,
    (int)&v17);
  v10 = -1;
  v11 = v14;
  v5 = v15;
  v12 = v5;
  v13 = v16;
  std::_Hashtable<short,std::pair<short const,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>>,std::allocator<std::pair<short const,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<std::pair<int,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>>>(
    (int)&v9,
    (unsigned __int64 *)(v3 + 164),
    (int)&v10);
  v6 = *(_QWORD *)&v11;
  if ( v11 != v12 )
    v7 = v11;
    do
    {
      v8 = *(void (__fastcall **)(int, int, signed int))(v7 + 8);
      if ( v8 )
        v8(v7, v7, 3);
      v7 += 20;
    }
    while ( HIDWORD(v6) != v7 );
  if ( (_DWORD)v6 )
    operator delete((void *)v6);
  if ( v18 )
    v18();
}


int __fastcall ScreenController::onTerminate(int result)
{
  __int64 i; // r4@1
  int v2; // t1@2

  for ( i = *(_QWORD *)(result + 220); HIDWORD(i) != (_DWORD)i; result = (*(int (**)(void))(*(_DWORD *)v2 + 12))() )
  {
    v2 = *(_DWORD *)i;
    LODWORD(i) = i + 8;
  }
  return result;
}


int __fastcall ScreenController::_handleTextEditEvent(int a1, _WORD *a2)
{
  _WORD *v2; // r8@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r7@1
  unsigned int v5; // r6@1
  int *v6; // r0@1
  int *v7; // r4@2
  unsigned __int16 v8; // r2@2
  int v9; // r5@4
  bool v10; // zf@7
  __int64 v11; // r6@10
  int i; // r5@10
  int result; // r0@16

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 164);
  v4 = *a2;
  v5 = v4 % (unsigned int)(*(_QWORD *)(a1 + 164) >> 32);
  v6 = *(int **)(v3 + 4 * v5);
  if ( !v6 )
    goto LABEL_17;
  v7 = (int *)*v6;
  v8 = *(_WORD *)(*v6 + 4);
  while ( v4 != v8 )
  {
    v9 = *v7;
    if ( *v7 )
    {
      v6 = (int *)v3;
      v8 = *(_WORD *)(v9 + 4);
      v7 = *(int **)v3;
      if ( (unsigned int)*(_WORD *)(v9 + 4) % HIDWORD(v3) == v5 )
        continue;
    }
  }
  v10 = v6 == 0;
  if ( v6 )
    v6 = (int *)*v6;
    v10 = v6 == 0;
  if ( v10 )
LABEL_17:
    result = 0;
  else
    v11 = *((_QWORD *)v6 + 1);
    for ( i = 0; HIDWORD(v11) != (_DWORD)v11; LODWORD(v11) = v11 + 20 )
      if ( *((_BYTE *)v2 + 8) || !*(_BYTE *)(v11 + 16) )
      {
        if ( !*(_DWORD *)(v11 + 8) )
          sub_DA7654();
        i |= (*(int (__fastcall **)(_DWORD, _WORD *, _DWORD))(v11 + 12))(v11, v2, *((_DWORD *)v2 + 1));
      }
    result = i;
  return result;
}


void __fastcall ScreenController::~ScreenController(ScreenController *this)
{
  ScreenController::~ScreenController(this);
}


int __fastcall ScreenController::setControlFactoryDestroyAllCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 36;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 36);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 44);
  v10 = v13;
  *(_DWORD *)(v4 + 44) = v8;
  v14 = *(_DWORD *)(v4 + 48);
  *(_DWORD *)(v4 + 48) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall ScreenController::setControlFactoryDestroyCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 20;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 20);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 28);
  v10 = v13;
  *(_DWORD *)(v4 + 28) = v8;
  v14 = *(_DWORD *)(v4 + 32);
  *(_DWORD *)(v4 + 32) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


void __fastcall ScreenController::bindInt(int a1, int *a2, int a3, int a4)
{
  ScreenController::bindInt(a1, a2, a3, a4);
}


void __fastcall ScreenController::registerAnimationEventHandler(int a1, unsigned int a2, int a3)
{
  int v3; // r9@1
  __int16 v4; // r10@1
  __int64 v5; // kr00_8@1
  int v6; // r8@1
  unsigned int v7; // r4@1
  unsigned int *v8; // r0@1
  unsigned int *v9; // r7@2
  unsigned __int16 v10; // r2@2
  bool v11; // zf@7
  int v12; // r5@10
  void (__fastcall *v13)(int, int, signed int); // r3@11
  int v14; // r0@14
  int v15; // r0@14
  __int64 v16; // kr10_8@14
  int v17; // r5@15
  void (__fastcall *v18)(int, int, signed int); // r3@16
  int v19; // [sp+0h] [bp-48h]@14
  __int16 v20; // [sp+8h] [bp-40h]@14
  int v21; // [sp+Ch] [bp-3Ch]@14
  int v22; // [sp+10h] [bp-38h]@14
  int v23; // [sp+14h] [bp-34h]@14
  int v24; // [sp+18h] [bp-30h]@14
  int v25; // [sp+1Ch] [bp-2Ch]@14
  int v26; // [sp+20h] [bp-28h]@14

  v3 = a1;
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 260);
  v6 = a3;
  v7 = a2 % HIDWORD(v5);
  v8 = *(unsigned int **)(v5 + 4 * (a2 % HIDWORD(v5)));
  if ( !v8 )
    goto LABEL_14;
  v9 = (unsigned int *)*v8;
  v10 = *(_WORD *)(*v8 + 4);
  while ( v10 != a2 )
  {
    if ( *v9 )
    {
      v8 = v9;
      v10 = *(_WORD *)(v5 + 4);
      v9 = (unsigned int *)*v9;
      if ( (unsigned int)*(_WORD *)(v5 + 4) % HIDWORD(v5) == v7 )
        continue;
    }
  }
  v11 = v8 == 0;
  if ( v8 )
    v7 = *v8;
    v11 = *v8 == 0;
  if ( v11 )
LABEL_14:
    v24 = 0;
    v25 = 0;
    v26 = 0;
    std::vector<std::function<ui::ViewRequest ()(void)>,std::allocator<std::function<ui::ViewRequest ()(void)>>>::_M_emplace_back_aux<std::function<ui::ViewRequest ()(void)>&>(
      &v24,
      v6);
    v14 = v24;
    v20 = v4;
    v21 = v14;
    v15 = v25;
    v22 = v15;
    v23 = v26;
    std::_Hashtable<short,std::pair<short const,std::vector<std::function<ui::ViewRequest ()(void)>,std::allocator<std::function<ui::ViewRequest ()(void)>>>>,std::allocator<std::pair<short const,std::vector<std::function<ui::ViewRequest ()(void)>,std::allocator<std::function<ui::ViewRequest ()(void)>>>>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<std::pair<short,std::vector<std::function<ui::ViewRequest ()(void)>,std::allocator<std::function<ui::ViewRequest ()(void)>>>>>(
      (int)&v19,
      (unsigned __int64 *)(v3 + 260),
      (int)&v20);
    v16 = *(_QWORD *)&v21;
    if ( v21 != v22 )
      v17 = v21;
      do
      {
        v18 = *(void (__fastcall **)(int, int, signed int))(v17 + 8);
        if ( v18 )
          v18(v17, v17, 3);
        v17 += 16;
      }
      while ( HIDWORD(v16) != v17 );
    if ( (_DWORD)v16 )
      operator delete((void *)v16);
  else
    v12 = *(_QWORD *)(v7 + 12);
    if ( v12 == *(_QWORD *)(v7 + 12) >> 32 )
      j_j_j__ZNSt6vectorISt8functionIFN2ui11ViewRequestEvEESaIS4_EE19_M_emplace_back_auxIJRS4_EEEvDpOT_(
        (_QWORD *)(v7 + 8),
        v6);
    else
      *(_DWORD *)(v12 + 8) = 0;
      v13 = *(void (__fastcall **)(int, int, signed int))(v6 + 8);
      if ( v13 )
        v13(v12, v6, 2);
        *(_DWORD *)(v12 + 12) = *(_DWORD *)(v6 + 12);
        *(_DWORD *)(v12 + 8) = *(_DWORD *)(v6 + 8);
        v12 = *(_DWORD *)(v7 + 12);
      *(_DWORD *)(v7 + 12) = v12 + 16;
}


void __fastcall ScreenController::bindStringForAnyCollection(int a1, int *a2, int a3, int a4)
{
  ScreenController::bindStringForAnyCollection(a1, a2, a3, a4);
}


void __fastcall ScreenController::bindGridSize(int a1, int *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int v7; // r4@1
  int v8; // r9@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  void *v10; // r10@5
  void (__fastcall *v11)(int *, int *, signed int); // r4@5
  _DWORD *v12; // r7@9
  void (*v13)(void); // r3@9
  void (__fastcall *v14)(int *, int *, signed int); // r3@12
  __int64 v15; // r0@14
  __int64 v16; // r4@17
  int v17; // r6@17
  _DWORD *v18; // r0@17
  _DWORD *v19; // r8@18
  int v20; // r4@18
  _DWORD *v21; // r7@20
  bool v22; // zf@23
  void (*v23)(void); // r3@26
  char v24; // [sp+4h] [bp-64h]@2
  void (*v25)(void); // [sp+Ch] [bp-5Ch]@1
  int v26; // [sp+10h] [bp-58h]@2
  int v27; // [sp+14h] [bp-54h]@4
  void (__fastcall *v28)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v29; // [sp+20h] [bp-48h]@4
  char v30; // [sp+24h] [bp-44h]@6
  void (*v31)(void); // [sp+2Ch] [bp-3Ch]@5
  int v32; // [sp+30h] [bp-38h]@6
  int v33; // [sp+34h] [bp-34h]@8
  void (__fastcall *v34)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v35; // [sp+40h] [bp-28h]@8

  v4 = *a2;
  v5 = a4;
  v25 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  v7 = a3;
  v8 = a1;
  if ( v6 )
  {
    v6(&v24, v5, 2);
    v26 = *(_DWORD *)(v5 + 12);
    v25 = *(void (**)(void))(v5 + 8);
  }
  v28 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v7 + 8);
  if ( v9 )
    v9(&v27, v7, 2);
    v29 = *(_DWORD *)(v7 + 12);
    v28 = *(void (__fastcall **)(int *, int *, signed int))(v7 + 8);
  v10 = operator new(0x18u);
  v11 = 0;
  *(_DWORD *)v10 = 0;
  *((_DWORD *)v10 + 1) = v4;
  v31 = 0;
  if ( v25 )
    ((void (__fastcall *)(char *, char *, signed int))v25)(&v30, &v24, 2);
    v32 = v26;
    v31 = v25;
  v34 = 0;
  if ( v28 )
    v28(&v33, &v27, 2);
    v11 = v28;
    v35 = v29;
    v34 = v28;
  *((_DWORD *)v10 + 4) = 0;
  v12 = operator new(0x20u);
  v13 = v31;
  v12[2] = 0;
  if ( v13 )
    v13();
    v11 = v34;
    v12[3] = v32;
    v12[2] = v31;
  v12[6] = 0;
  if ( v11 )
    v11(v12 + 4, &v33, 2);
    v12[7] = v35;
    v14 = v34;
    v12[6] = v34;
    *((_DWORD *)v10 + 2) = v12;
    *((_DWORD *)v10 + 4) = sub_DA39B6;
    *((_DWORD *)v10 + 5) = sub_DA3974;
    if ( v14 )
      v14(&v33, &v33, 3);
  else
    HIDWORD(v15) = sub_DA3974;
    LODWORD(v15) = sub_DA39B6;
    *((_QWORD *)v10 + 2) = v15;
  if ( v31 )
    v31();
  v16 = *(_QWORD *)(v8 + 288);
  v17 = *((_DWORD *)v10 + 1) % (unsigned int)(*(_QWORD *)(v8 + 288) >> 32);
  v18 = *(_DWORD **)(v16 + 4 * v17);
  if ( !v18 )
    goto LABEL_29;
  v19 = (_DWORD *)*v18;
  v20 = *(_DWORD *)(*v18 + 4);
  while ( *((_DWORD *)v10 + 1) != v20 )
    v21 = (_DWORD *)*v19;
    if ( *v19 )
    {
      LODWORD(v16) = v21[1];
      v18 = v19;
      v19 = (_DWORD *)*v19;
      if ( v21[1] % HIDWORD(v16) == v17 )
        continue;
    }
  v22 = v18 == 0;
  if ( v18 )
    v22 = *v18 == 0;
  if ( v22 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 288,
      v17,
      *((_DWORD *)v10 + 1),
      (int)v10);
    v23 = (void (*)(void))*((_DWORD *)v10 + 4);
    if ( v23 )
      v23();
    operator delete(v10);
    ((void (*)(void))v28)();
    v25();
}


void __fastcall ScreenController::_registerSubController(int a1, int a2)
{
  ScreenController::_registerSubController(a1, a2);
}


int __fastcall ScreenController::setControlFactoryCreateCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 4;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 4);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 12);
  v10 = v13;
  *(_DWORD *)(v4 + 12) = v8;
  v14 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 16) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


void __fastcall ScreenController::registerSliderFinishedEventHandler(int a1, unsigned int a2, int a3)
{
  int v3; // r8@1
  int v4; // r6@1
  void (__fastcall *v5)(char *, int, signed int); // r3@1
  unsigned int v6; // r9@1
  unsigned int v7; // r4@3
  int v8; // r8@3
  unsigned int v9; // t1@3
  int v10; // r7@3
  unsigned int *v11; // r0@3
  unsigned int *v12; // r6@4
  unsigned __int16 v13; // r2@4
  _DWORD *v14; // r5@6
  bool v15; // zf@9
  __int64 v16; // kr00_8@12
  int v17; // r0@16
  int v18; // r0@16
  __int64 v19; // kr08_8@16
  int v20; // r5@17
  void (__fastcall *v21)(int, int, signed int); // r3@18
  int v22; // [sp+0h] [bp-58h]@16
  __int16 v23; // [sp+8h] [bp-50h]@16
  int v24; // [sp+Ch] [bp-4Ch]@16
  int v25; // [sp+10h] [bp-48h]@16
  int v26; // [sp+14h] [bp-44h]@16
  int v27; // [sp+18h] [bp-40h]@16
  int v28; // [sp+1Ch] [bp-3Ch]@16
  int v29; // [sp+20h] [bp-38h]@16
  char v30; // [sp+24h] [bp-34h]@2
  void (*v31)(void); // [sp+2Ch] [bp-2Ch]@1
  int v32; // [sp+30h] [bp-28h]@2
  char v33; // [sp+34h] [bp-24h]@3

  v3 = a1;
  v4 = a3;
  v31 = 0;
  v5 = *(void (__fastcall **)(char *, int, signed int))(a3 + 8);
  v6 = a2;
  if ( v5 )
  {
    v5(&v30, a3, 2);
    v32 = *(_DWORD *)(v4 + 12);
    v31 = *(void (**)(void))(v4 + 8);
  }
  v33 = 1;
  v9 = *(_DWORD *)(v3 + 232);
  v8 = v3 + 232;
  v7 = v9;
  v10 = v6 % *(_DWORD *)(v8 + 4);
  v11 = *(unsigned int **)(v9 + 4 * v10);
  if ( !v11 )
    goto LABEL_16;
  v12 = (unsigned int *)*v11;
  v13 = *(_WORD *)(*v11 + 4);
  while ( v13 != v6 )
    v14 = (_DWORD *)*v12;
    if ( *v12 )
    {
      v7 = *((_WORD *)v14 + 2);
      v11 = v12;
      v13 = *((_WORD *)v14 + 2);
      v12 = (unsigned int *)*v12;
      if ( v7 % *(_DWORD *)(v8 + 4) == v10 )
        continue;
    }
  v15 = v11 == 0;
  if ( v11 )
    v7 = *v11;
    v15 = *v11 == 0;
  if ( v15 )
LABEL_16:
    v27 = 0;
    v28 = 0;
    v29 = 0;
    std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>>>::_M_emplace_back_aux<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>&>(
      &v27,
      (int)&v30);
    v17 = v27;
    v23 = v6;
    v24 = v17;
    v18 = v28;
    v25 = v18;
    v26 = v29;
    std::_Hashtable<short,std::pair<short const,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>>>>,std::allocator<std::pair<short const,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>>>>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<std::pair<short,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>>>>>(
      (int)&v22,
      (unsigned __int64 *)v8,
      (int)&v23);
    v19 = *(_QWORD *)&v24;
    if ( v24 != v25 )
      v20 = v24;
      do
      {
        v21 = *(void (__fastcall **)(int, int, signed int))(v20 + 8);
        if ( v21 )
          v21(v20, v20, 3);
        v20 += 20;
      }
      while ( HIDWORD(v19) != v20 );
    if ( (_DWORD)v19 )
      operator delete((void *)v19);
  else
    v16 = *(_QWORD *)(v7 + 12);
    if ( (_DWORD)v16 == HIDWORD(v16) )
      std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>>>::_M_emplace_back_aux<std::tuple<bool,std::function<ui::ViewRequest ()(int,float)>>&>(
        (_QWORD *)(v7 + 8),
        (int)&v30);
    else
      *(_DWORD *)(v16 + 8) = 0;
      if ( v31 )
        ((void (__fastcall *)(_DWORD, char *, signed int))v31)(v16, &v30, 2);
        *(_DWORD *)(v16 + 12) = v32;
        *(_DWORD *)(v16 + 8) = v31;
      *(_BYTE *)(v16 + 16) = v33;
      *(_DWORD *)(v7 + 12) += 20;
  if ( v31 )
    v31();
}


int __fastcall ScreenController::setViewCommand(int result, ScreenViewCommand *a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int v4; // t1@2

  for ( *(_QWORD *)&v2 = *(_QWORD *)(result + 220); v3 != v2; result = (*(int (**)(void))(*(_DWORD *)v4 + 72))() )
  {
    v4 = *v2;
    v2 += 2;
  }
  return result;
}


void __fastcall ScreenController::registerButtonClickHandler(int a1, unsigned int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  void (__fastcall *v5)(char *, int, signed int); // r3@1
  unsigned int v6; // r4@1
  char v7; // [sp+8h] [bp-20h]@2
  void (*v8)(void); // [sp+10h] [bp-18h]@1
  int v9; // [sp+14h] [bp-14h]@2

  v3 = a1;
  v4 = a3;
  v8 = 0;
  v5 = *(void (__fastcall **)(char *, int, signed int))(a3 + 8);
  v6 = a2;
  if ( v5 )
  {
    v5(&v7, a3, 2);
    v9 = *(_DWORD *)(v4 + 12);
    v8 = *(void (**)(void))(v4 + 8);
  }
  ScreenController::registerButtonEventHandler(v3, v6, 0, 1, (int)&v7);
  if ( v8 )
    v8();
}


int __fastcall ScreenController::getCallbackInterval(ScreenController *this)
{
  return 0;
}


void __fastcall ScreenController::bindStringForCollection(int a1, int *a2, int *a3, int a4, int a5)
{
  int v5; // r8@1
  int v6; // r4@1
  int v7; // r7@1
  int v8; // r9@1
  void (__fastcall *v9)(char *, int, signed int); // r3@1
  void (__fastcall *v10)(int *, int, signed int); // r3@3
  void *v11; // r10@5
  void (__fastcall *v12)(int *, int *, signed int); // r4@5
  _DWORD *v13; // r7@9
  void (*v14)(void); // r3@9
  void (__fastcall *v15)(int *, int *, signed int); // r3@12
  __int64 v16; // r0@14
  __int64 v17; // r4@17
  int v18; // r6@17
  _DWORD *v19; // r0@17
  _DWORD *v20; // r8@18
  int v21; // r4@18
  _DWORD *v22; // r7@20
  bool v23; // zf@23
  void (*v24)(void); // r3@26
  char v25; // [sp+4h] [bp-64h]@2
  void (*v26)(void); // [sp+Ch] [bp-5Ch]@1
  int v27; // [sp+10h] [bp-58h]@2
  int v28; // [sp+14h] [bp-54h]@4
  void (__fastcall *v29)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v30; // [sp+20h] [bp-48h]@4
  char v31; // [sp+24h] [bp-44h]@6
  void (*v32)(void); // [sp+2Ch] [bp-3Ch]@5
  int v33; // [sp+30h] [bp-38h]@6
  int v34; // [sp+34h] [bp-34h]@8
  void (__fastcall *v35)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v36; // [sp+40h] [bp-28h]@8

  v5 = *a3;
  v6 = a4;
  v7 = *a2;
  v8 = a1;
  v26 = 0;
  v9 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
  if ( v9 )
  {
    v9(&v25, a5, 2);
    v27 = *(_DWORD *)(a5 + 12);
    v26 = *(void (**)(void))(a5 + 8);
  }
  v29 = 0;
  v10 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  if ( v10 )
    v10(&v28, v6, 2);
    v30 = *(_DWORD *)(v6 + 12);
    v29 = *(void (__fastcall **)(int *, int *, signed int))(v6 + 8);
  v11 = operator new(0x18u);
  v12 = 0;
  *(_DWORD *)v11 = 0;
  *((_DWORD *)v11 + 1) = v5 ^ v7;
  v32 = 0;
  if ( v26 )
    ((void (__fastcall *)(char *, char *, signed int))v26)(&v31, &v25, 2);
    v33 = v27;
    v32 = v26;
  v35 = 0;
  if ( v29 )
    v29(&v34, &v28, 2);
    v12 = v29;
    v36 = v30;
    v35 = v29;
  *((_DWORD *)v11 + 4) = 0;
  v13 = operator new(0x20u);
  v14 = v32;
  v13[2] = 0;
  if ( v14 )
    v14();
    v12 = v35;
    v13[3] = v33;
    v13[2] = v32;
  v13[6] = 0;
  if ( v12 )
    v12(v13 + 4, &v34, 2);
    v13[7] = v36;
    v15 = v35;
    v13[6] = v35;
    *((_DWORD *)v11 + 2) = v13;
    *((_DWORD *)v11 + 4) = sub_DA3F20;
    *((_DWORD *)v11 + 5) = sub_DA3E30;
    if ( v15 )
      v15(&v34, &v34, 3);
  else
    HIDWORD(v16) = sub_DA3E30;
    LODWORD(v16) = sub_DA3F20;
    *((_QWORD *)v11 + 2) = v16;
  if ( v32 )
    v32();
  v17 = *(_QWORD *)(v8 + 316);
  v18 = *((_DWORD *)v11 + 1) % (unsigned int)(*(_QWORD *)(v8 + 316) >> 32);
  v19 = *(_DWORD **)(v17 + 4 * v18);
  if ( !v19 )
    goto LABEL_29;
  v20 = (_DWORD *)*v19;
  v21 = *(_DWORD *)(*v19 + 4);
  while ( *((_DWORD *)v11 + 1) != v21 )
    v22 = (_DWORD *)*v20;
    if ( *v20 )
    {
      LODWORD(v17) = v22[1];
      v19 = v20;
      v20 = (_DWORD *)*v20;
      if ( v22[1] % HIDWORD(v17) == v18 )
        continue;
    }
  v23 = v19 == 0;
  if ( v19 )
    v23 = *v19 == 0;
  if ( v23 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(int,std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(int,std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 316,
      v18,
      *((_DWORD *)v11 + 1),
      (int)v11);
    v24 = (void (*)(void))*((_DWORD *)v11 + 4);
    if ( v24 )
      v24();
    operator delete(v11);
    ((void (*)(void))v29)();
    v26();
}


void __fastcall ScreenController::registerAnimationEventHandler(int a1, unsigned int a2, int a3)
{
  ScreenController::registerAnimationEventHandler(a1, a2, a3);
}


void __fastcall ScreenController::registerTextEditChangedEventHandler(int a1, unsigned int a2, int a3)
{
  int v3; // r6@1
  unsigned int v4; // r9@1
  void (__fastcall *v5)(char *, int, signed int); // r3@1
  int v6; // r8@1
  unsigned int v7; // r4@3
  int v8; // r8@3
  unsigned int v9; // t1@3
  int v10; // r7@3
  unsigned int *v11; // r0@3
  unsigned int *v12; // r6@4
  unsigned __int16 v13; // r2@4
  _DWORD *v14; // r5@6
  bool v15; // zf@9
  __int64 v16; // kr00_8@12
  int v17; // r0@16
  int v18; // r0@16
  __int64 v19; // kr08_8@16
  int v20; // r5@17
  void (__fastcall *v21)(int, int, signed int); // r3@18
  int v22; // [sp+0h] [bp-58h]@16
  __int16 v23; // [sp+8h] [bp-50h]@16
  int v24; // [sp+Ch] [bp-4Ch]@16
  int v25; // [sp+10h] [bp-48h]@16
  int v26; // [sp+14h] [bp-44h]@16
  int v27; // [sp+18h] [bp-40h]@16
  int v28; // [sp+1Ch] [bp-3Ch]@16
  int v29; // [sp+20h] [bp-38h]@16
  char v30; // [sp+24h] [bp-34h]@2
  void (*v31)(void); // [sp+2Ch] [bp-2Ch]@1
  int v32; // [sp+30h] [bp-28h]@2
  char v33; // [sp+34h] [bp-24h]@3

  v3 = a3;
  v31 = 0;
  v4 = a2;
  v5 = *(void (__fastcall **)(char *, int, signed int))(a3 + 8);
  v6 = a1;
  if ( v5 )
  {
    v5(&v30, a3, 2);
    v32 = *(_DWORD *)(v3 + 12);
    v31 = *(void (**)(void))(v3 + 8);
  }
  v33 = 0;
  v9 = *(_DWORD *)(v6 + 164);
  v8 = v6 + 164;
  v7 = v9;
  v10 = v4 % *(_DWORD *)(v8 + 4);
  v11 = *(unsigned int **)(v9 + 4 * v10);
  if ( !v11 )
    goto LABEL_16;
  v12 = (unsigned int *)*v11;
  v13 = *(_WORD *)(*v11 + 4);
  while ( v13 != v4 )
    v14 = (_DWORD *)*v12;
    if ( *v12 )
    {
      v7 = *((_WORD *)v14 + 2);
      v11 = v12;
      v13 = *((_WORD *)v14 + 2);
      v12 = (unsigned int *)*v12;
      if ( v7 % *(_DWORD *)(v8 + 4) == v10 )
        continue;
    }
  v15 = v11 == 0;
  if ( v11 )
    v7 = *v11;
    v15 = *v11 == 0;
  if ( v15 )
LABEL_16:
    v27 = 0;
    v28 = 0;
    v29 = 0;
    std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>::_M_emplace_back_aux<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>&>(
      &v27,
      (int)&v30);
    v17 = v27;
    v23 = v4;
    v24 = v17;
    v18 = v28;
    v25 = v18;
    v26 = v29;
    std::_Hashtable<short,std::pair<short const,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>>,std::allocator<std::pair<short const,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<std::pair<short,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>>>(
      (int)&v22,
      (unsigned __int64 *)v8,
      (int)&v23);
    v19 = *(_QWORD *)&v24;
    if ( v24 != v25 )
      v20 = v24;
      do
      {
        v21 = *(void (__fastcall **)(int, int, signed int))(v20 + 8);
        if ( v21 )
          v21(v20, v20, 3);
        v20 += 20;
      }
      while ( HIDWORD(v19) != v20 );
    if ( (_DWORD)v19 )
      operator delete((void *)v19);
  else
    v16 = *(_QWORD *)(v7 + 12);
    if ( (_DWORD)v16 == HIDWORD(v16) )
      std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>::_M_emplace_back_aux<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>&>(
        (_QWORD *)(v7 + 8),
        (int)&v30);
    else
      *(_DWORD *)(v16 + 8) = 0;
      if ( v31 )
        ((void (__fastcall *)(_DWORD, char *, signed int))v31)(v16, &v30, 2);
        *(_DWORD *)(v16 + 12) = v32;
        *(_DWORD *)(v16 + 8) = v31;
      *(_BYTE *)(v16 + 16) = v33;
      *(_DWORD *)(v7 + 12) += 20;
  if ( v31 )
    v31();
}


int __fastcall ScreenController::ButtonEventCallbackKeyHasher::operator()(int a1, int a2)
{
  return *(_WORD *)(a2 + 2) ^ *(_BYTE *)a2;
}


void __fastcall ScreenController::bindInt(int a1, int *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int v7; // r4@1
  int v8; // r9@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  void *v10; // r10@5
  void (__fastcall *v11)(int *, int *, signed int); // r4@5
  _DWORD *v12; // r7@9
  void (*v13)(void); // r3@9
  void (__fastcall *v14)(int *, int *, signed int); // r3@12
  __int64 v15; // r0@14
  __int64 v16; // r4@17
  int v17; // r6@17
  _DWORD *v18; // r0@17
  _DWORD *v19; // r8@18
  int v20; // r4@18
  _DWORD *v21; // r7@20
  bool v22; // zf@23
  void (*v23)(void); // r3@26
  char v24; // [sp+4h] [bp-64h]@2
  void (*v25)(void); // [sp+Ch] [bp-5Ch]@1
  int v26; // [sp+10h] [bp-58h]@2
  int v27; // [sp+14h] [bp-54h]@4
  void (__fastcall *v28)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v29; // [sp+20h] [bp-48h]@4
  char v30; // [sp+24h] [bp-44h]@6
  void (*v31)(void); // [sp+2Ch] [bp-3Ch]@5
  int v32; // [sp+30h] [bp-38h]@6
  int v33; // [sp+34h] [bp-34h]@8
  void (__fastcall *v34)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v35; // [sp+40h] [bp-28h]@8

  v4 = *a2;
  v5 = a4;
  v25 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  v7 = a3;
  v8 = a1;
  if ( v6 )
  {
    v6(&v24, v5, 2);
    v26 = *(_DWORD *)(v5 + 12);
    v25 = *(void (**)(void))(v5 + 8);
  }
  v28 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v7 + 8);
  if ( v9 )
    v9(&v27, v7, 2);
    v29 = *(_DWORD *)(v7 + 12);
    v28 = *(void (__fastcall **)(int *, int *, signed int))(v7 + 8);
  v10 = operator new(0x18u);
  v11 = 0;
  *(_DWORD *)v10 = 0;
  *((_DWORD *)v10 + 1) = v4;
  v31 = 0;
  if ( v25 )
    ((void (__fastcall *)(char *, char *, signed int))v25)(&v30, &v24, 2);
    v32 = v26;
    v31 = v25;
  v34 = 0;
  if ( v28 )
    v28(&v33, &v27, 2);
    v11 = v28;
    v35 = v29;
    v34 = v28;
  *((_DWORD *)v10 + 4) = 0;
  v12 = operator new(0x20u);
  v13 = v31;
  v12[2] = 0;
  if ( v13 )
    v13();
    v11 = v34;
    v12[3] = v32;
    v12[2] = v31;
  v12[6] = 0;
  if ( v11 )
    v11(v12 + 4, &v33, 2);
    v12[7] = v35;
    v14 = v34;
    v12[6] = v34;
    *((_DWORD *)v10 + 2) = v12;
    *((_DWORD *)v10 + 4) = sub_DA3794;
    *((_DWORD *)v10 + 5) = sub_DA3754;
    if ( v14 )
      v14(&v33, &v33, 3);
  else
    HIDWORD(v15) = sub_DA3754;
    LODWORD(v15) = sub_DA3794;
    *((_QWORD *)v10 + 2) = v15;
  if ( v31 )
    v31();
  v16 = *(_QWORD *)(v8 + 288);
  v17 = *((_DWORD *)v10 + 1) % (unsigned int)(*(_QWORD *)(v8 + 288) >> 32);
  v18 = *(_DWORD **)(v16 + 4 * v17);
  if ( !v18 )
    goto LABEL_29;
  v19 = (_DWORD *)*v18;
  v20 = *(_DWORD *)(*v18 + 4);
  while ( *((_DWORD *)v10 + 1) != v20 )
    v21 = (_DWORD *)*v19;
    if ( *v19 )
    {
      LODWORD(v16) = v21[1];
      v18 = v19;
      v19 = (_DWORD *)*v19;
      if ( v21[1] % HIDWORD(v16) == v17 )
        continue;
    }
  v22 = v18 == 0;
  if ( v18 )
    v22 = *v18 == 0;
  if ( v22 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 288,
      v17,
      *((_DWORD *)v10 + 1),
      (int)v10);
    v23 = (void (*)(void))*((_DWORD *)v10 + 4);
    if ( v23 )
      v23();
    operator delete(v10);
    ((void (*)(void))v28)();
    v25();
}


void *__fastcall ScreenController::getEventProperties(ScreenController *this)
{
  char v1; // r0@1
  double v2; // r0@2
  unsigned int v3; // r0@3
  int v4; // r5@5
  void *v5; // r4@5

  v1 = `guard variable for'ScreenController::getEventProperties(void)const::emptyMap[0];
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire(`guard variable for'ScreenController::getEventProperties(void)const::emptyMap) )
  {
    unk_27C3204 = 0;
    unk_27C3208 = 0;
    unk_27C320C = 1065353216;
    LODWORD(v2) = &unk_27C320C;
    unk_27C3210 = 0;
    v3 = sub_DA7744(v2);
    unk_27C3200 = v3;
    if ( v3 == 1 )
    {
      unk_27C3214 = 0;
      v5 = &unk_27C3214;
    }
    else
      if ( v3 >= 0x40000000 )
        sub_DA7414();
      v4 = 4 * v3;
      v5 = operator new(4 * v3);
      _aeabi_memclr4(v5, v4);
    ScreenController::getEventProperties(void)::emptyMapconst = v5;
    _cxa_atexit(std::unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~unordered_map);
    j___cxa_guard_release(`guard variable for'ScreenController::getEventProperties(void)const::emptyMap);
  }
  return &ScreenController::getEventProperties(void)::emptyMapconst;
}


void __fastcall ScreenController::bindBoolForCollection(int a1, int *a2, int *a3, int a4, int a5)
{
  ScreenController::bindBoolForCollection(a1, a2, a3, a4, a5);
}


int __fastcall ScreenController::bind(int a1, int a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // kr00_8@1
  int *v6; // r0@1
  int *v7; // r4@2
  int v8; // r5@2
  int v9; // r7@4
  bool v10; // zf@7
  char v11; // r5@11
  int *i; // r4@12
  int *v13; // r7@12
  int v14; // t1@13
  int v16; // [sp+8h] [bp-28h]@1

  v16 = a1;
  v5 = *(_QWORD *)(a1 + 288);
  v6 = *(int **)(v5 + 4 * (a3 % HIDWORD(v5)));
  if ( !v6 )
    goto LABEL_12;
  v7 = (int *)*v6;
  v8 = *(_DWORD *)(*v6 + 4);
  while ( v8 != a3 )
  {
    v9 = *v7;
    if ( *v7 )
    {
      v8 = *(_DWORD *)(v9 + 4);
      v6 = (int *)v5;
      v7 = *(int **)v5;
      if ( *(_DWORD *)(v9 + 4) % HIDWORD(v5) == a3 % HIDWORD(v5) )
        continue;
    }
  }
  v10 = v6 == 0;
  if ( v6 )
    v6 = (int *)*v6;
    v10 = v6 == 0;
  if ( v10 )
LABEL_12:
    v11 = 0;
    v13 = (int *)(*(_QWORD *)(v16 + 220) >> 32);
    for ( i = (int *)*(_QWORD *)(v16 + 220); v13 != i; v11 |= (*(int (__cdecl **)(int))(*(_DWORD *)v14 + 44))(v14) )
      v14 = *i;
      i += 2;
  else
    if ( !v6[4] )
      sub_DA7654();
    ((void (__fastcall *)(int *, int, int))v6[5])(v6 + 2, a4, a5);
    v11 = 1;
  return v11 & 1;
}


void __fastcall ScreenController::registerTextEditFinishedEventHandler(int a1, unsigned int a2, int a3)
{
  int v3; // r8@1
  int v4; // r6@1
  void (__fastcall *v5)(char *, int, signed int); // r3@1
  unsigned int v6; // r9@1
  unsigned int v7; // r4@3
  int v8; // r8@3
  unsigned int v9; // t1@3
  int v10; // r7@3
  unsigned int *v11; // r0@3
  unsigned int *v12; // r6@4
  unsigned __int16 v13; // r2@4
  _DWORD *v14; // r5@6
  bool v15; // zf@9
  __int64 v16; // kr00_8@12
  int v17; // r0@16
  int v18; // r0@16
  __int64 v19; // kr08_8@16
  int v20; // r5@17
  void (__fastcall *v21)(int, int, signed int); // r3@18
  int v22; // [sp+0h] [bp-58h]@16
  __int16 v23; // [sp+8h] [bp-50h]@16
  int v24; // [sp+Ch] [bp-4Ch]@16
  int v25; // [sp+10h] [bp-48h]@16
  int v26; // [sp+14h] [bp-44h]@16
  int v27; // [sp+18h] [bp-40h]@16
  int v28; // [sp+1Ch] [bp-3Ch]@16
  int v29; // [sp+20h] [bp-38h]@16
  char v30; // [sp+24h] [bp-34h]@2
  void (*v31)(void); // [sp+2Ch] [bp-2Ch]@1
  int v32; // [sp+30h] [bp-28h]@2
  char v33; // [sp+34h] [bp-24h]@3

  v3 = a1;
  v4 = a3;
  v31 = 0;
  v5 = *(void (__fastcall **)(char *, int, signed int))(a3 + 8);
  v6 = a2;
  if ( v5 )
  {
    v5(&v30, a3, 2);
    v32 = *(_DWORD *)(v4 + 12);
    v31 = *(void (**)(void))(v4 + 8);
  }
  v33 = 1;
  v9 = *(_DWORD *)(v3 + 164);
  v8 = v3 + 164;
  v7 = v9;
  v10 = v6 % *(_DWORD *)(v8 + 4);
  v11 = *(unsigned int **)(v9 + 4 * v10);
  if ( !v11 )
    goto LABEL_16;
  v12 = (unsigned int *)*v11;
  v13 = *(_WORD *)(*v11 + 4);
  while ( v13 != v6 )
    v14 = (_DWORD *)*v12;
    if ( *v12 )
    {
      v7 = *((_WORD *)v14 + 2);
      v11 = v12;
      v13 = *((_WORD *)v14 + 2);
      v12 = (unsigned int *)*v12;
      if ( v7 % *(_DWORD *)(v8 + 4) == v10 )
        continue;
    }
  v15 = v11 == 0;
  if ( v11 )
    v7 = *v11;
    v15 = *v11 == 0;
  if ( v15 )
LABEL_16:
    v27 = 0;
    v28 = 0;
    v29 = 0;
    std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>::_M_emplace_back_aux<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>&>(
      &v27,
      (int)&v30);
    v17 = v27;
    v23 = v6;
    v24 = v17;
    v18 = v28;
    v25 = v18;
    v26 = v29;
    std::_Hashtable<short,std::pair<short const,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>>,std::allocator<std::pair<short const,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<std::pair<short,std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>>>(
      (int)&v22,
      (unsigned __int64 *)v8,
      (int)&v23);
    v19 = *(_QWORD *)&v24;
    if ( v24 != v25 )
      v20 = v24;
      do
      {
        v21 = *(void (__fastcall **)(int, int, signed int))(v20 + 8);
        if ( v21 )
          v21(v20, v20, 3);
        v20 += 20;
      }
      while ( HIDWORD(v19) != v20 );
    if ( (_DWORD)v19 )
      operator delete((void *)v19);
  else
    v16 = *(_QWORD *)(v7 + 12);
    if ( (_DWORD)v16 == HIDWORD(v16) )
      std::vector<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>,std::allocator<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>>>::_M_emplace_back_aux<std::tuple<bool,std::function<ui::ViewRequest ()(TextEditScreenEventData &,int)>>&>(
        (_QWORD *)(v7 + 8),
        (int)&v30);
    else
      *(_DWORD *)(v16 + 8) = 0;
      if ( v31 )
        ((void (__fastcall *)(_DWORD, char *, signed int))v31)(v16, &v30, 2);
        *(_DWORD *)(v16 + 12) = v32;
        *(_DWORD *)(v16 + 8) = v31;
      *(_BYTE *)(v16 + 16) = v33;
      *(_DWORD *)(v7 + 12) += 20;
  if ( v31 )
    v31();
}


void __fastcall ScreenController::bindIntForCollection(int a1, int *a2, int *a3, int a4, int a5)
{
  int v5; // r8@1
  int v6; // r4@1
  int v7; // r7@1
  int v8; // r9@1
  void (__fastcall *v9)(char *, int, signed int); // r3@1
  void (__fastcall *v10)(int *, int, signed int); // r3@3
  void *v11; // r10@5
  void (__fastcall *v12)(int *, int *, signed int); // r4@5
  _DWORD *v13; // r7@9
  void (*v14)(void); // r3@9
  void (__fastcall *v15)(int *, int *, signed int); // r3@12
  __int64 v16; // r0@14
  __int64 v17; // r4@17
  int v18; // r6@17
  _DWORD *v19; // r0@17
  _DWORD *v20; // r8@18
  int v21; // r4@18
  _DWORD *v22; // r7@20
  bool v23; // zf@23
  void (*v24)(void); // r3@26
  char v25; // [sp+4h] [bp-64h]@2
  void (*v26)(void); // [sp+Ch] [bp-5Ch]@1
  int v27; // [sp+10h] [bp-58h]@2
  int v28; // [sp+14h] [bp-54h]@4
  void (__fastcall *v29)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v30; // [sp+20h] [bp-48h]@4
  char v31; // [sp+24h] [bp-44h]@6
  void (*v32)(void); // [sp+2Ch] [bp-3Ch]@5
  int v33; // [sp+30h] [bp-38h]@6
  int v34; // [sp+34h] [bp-34h]@8
  void (__fastcall *v35)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v36; // [sp+40h] [bp-28h]@8

  v5 = *a3;
  v6 = a4;
  v7 = *a2;
  v8 = a1;
  v26 = 0;
  v9 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
  if ( v9 )
  {
    v9(&v25, a5, 2);
    v27 = *(_DWORD *)(a5 + 12);
    v26 = *(void (**)(void))(a5 + 8);
  }
  v29 = 0;
  v10 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  if ( v10 )
    v10(&v28, v6, 2);
    v30 = *(_DWORD *)(v6 + 12);
    v29 = *(void (__fastcall **)(int *, int *, signed int))(v6 + 8);
  v11 = operator new(0x18u);
  v12 = 0;
  *(_DWORD *)v11 = 0;
  *((_DWORD *)v11 + 1) = v5 ^ v7;
  v32 = 0;
  if ( v26 )
    ((void (__fastcall *)(char *, char *, signed int))v26)(&v31, &v25, 2);
    v33 = v27;
    v32 = v26;
  v35 = 0;
  if ( v29 )
    v29(&v34, &v28, 2);
    v12 = v29;
    v36 = v30;
    v35 = v29;
  *((_DWORD *)v11 + 4) = 0;
  v13 = operator new(0x20u);
  v14 = v32;
  v13[2] = 0;
  if ( v14 )
    v14();
    v12 = v35;
    v13[3] = v33;
    v13[2] = v32;
  v13[6] = 0;
  if ( v12 )
    v12(v13 + 4, &v34, 2);
    v13[7] = v36;
    v15 = v35;
    v13[6] = v35;
    *((_DWORD *)v11 + 2) = v13;
    *((_DWORD *)v11 + 4) = sub_DA4202;
    *((_DWORD *)v11 + 5) = sub_DA41B8;
    if ( v15 )
      v15(&v34, &v34, 3);
  else
    HIDWORD(v16) = sub_DA41B8;
    LODWORD(v16) = sub_DA4202;
    *((_QWORD *)v11 + 2) = v16;
  if ( v32 )
    v32();
  v17 = *(_QWORD *)(v8 + 316);
  v18 = *((_DWORD *)v11 + 1) % (unsigned int)(*(_QWORD *)(v8 + 316) >> 32);
  v19 = *(_DWORD **)(v17 + 4 * v18);
  if ( !v19 )
    goto LABEL_29;
  v20 = (_DWORD *)*v19;
  v21 = *(_DWORD *)(*v19 + 4);
  while ( *((_DWORD *)v11 + 1) != v21 )
    v22 = (_DWORD *)*v20;
    if ( *v20 )
    {
      LODWORD(v17) = v22[1];
      v19 = v20;
      v20 = (_DWORD *)*v20;
      if ( v22[1] % HIDWORD(v17) == v18 )
        continue;
    }
  v23 = v19 == 0;
  if ( v19 )
    v23 = *v19 == 0;
  if ( v23 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(int,std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(int,std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 316,
      v18,
      *((_DWORD *)v11 + 1),
      (int)v11);
    v24 = (void (*)(void))*((_DWORD *)v11 + 4);
    if ( v24 )
      v24();
    operator delete(v11);
    ((void (*)(void))v29)();
    v26();
}


int __fastcall ScreenController::ScreenController(double a1)
{
  int v1; // r11@1
  unsigned int v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  double v5; // r0@4
  double v6; // r0@4
  int v7; // r7@6
  void *v8; // r6@6
  double v9; // r0@7
  int v10; // r7@9
  void *v11; // r6@9
  double v12; // r0@10
  int v13; // r7@12
  void *v14; // r6@12
  double v15; // r0@13
  int v16; // r7@15
  void *v17; // r6@15
  double v18; // r0@16
  int v19; // r7@18
  void *v20; // r6@18
  double v21; // r0@19
  int v22; // r7@21
  void *v23; // r6@21
  unsigned int v24; // r0@22
  int v25; // r7@24
  void *v26; // r6@24

  v1 = LODWORD(a1);
  *(_DWORD *)LODWORD(a1) = &off_26D8E74;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 28) = 0;
  *(_DWORD *)(LODWORD(a1) + 44) = 0;
  *(_DWORD *)(LODWORD(a1) + 52) = HIDWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 64) = 0;
  *(_DWORD *)(LODWORD(a1) + 68) = 0;
  *(_DWORD *)(LODWORD(a1) + 72) = 1065353216;
  LODWORD(a1) += 72;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = sub_DA7744(a1);
  *(_DWORD *)(v1 + 60) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 80) = 0;
    v4 = (void *)(v1 + 80);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_DA7414();
    v3 = 4 * v2;
    v4 = operator new(4 * v2);
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)(v1 + 56) = v4;
  *(_DWORD *)(v1 + 92) = 0;
  *(_DWORD *)(v1 + 108) = 0;
  *(_DWORD *)(v1 + 172) = 0;
  *(_DWORD *)(v1 + 176) = 0;
  _aeabi_memclr4(v1 + 116, 48);
  *(_DWORD *)(v1 + 180) = 1065353216;
  LODWORD(v5) = v1 + 180;
  *(_DWORD *)(LODWORD(v5) + 4) = 0;
  v6 = COERCE_DOUBLE(__PAIR__(10, sub_DA7744(v5)));
  *(_DWORD *)(v1 + 168) = LODWORD(v6);
  if ( LODWORD(v6) == 1 )
    *(_DWORD *)(v1 + 188) = 0;
    v8 = (void *)(v1 + 188);
    if ( LODWORD(v6) >= 0x40000000 )
    v7 = 4 * LODWORD(v6);
    v8 = operator new(4 * LODWORD(v6));
    _aeabi_memclr4(v8, v7);
  *(_DWORD *)(v1 + 164) = v8;
  *(_DWORD *)(v1 + 200) = 0;
  *(_DWORD *)(v1 + 204) = 0;
  *(_DWORD *)(v1 + 208) = 1065353216;
  LODWORD(v6) = v1 + 208;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  v9 = COERCE_DOUBLE(__PAIR__(10, sub_DA7744(v6)));
  *(_DWORD *)(v1 + 196) = LODWORD(v9);
  if ( LODWORD(v9) == 1 )
    *(_DWORD *)(v1 + 216) = 0;
    v11 = (void *)(v1 + 216);
    if ( LODWORD(v9) >= 0x40000000 )
    v10 = 4 * LODWORD(v9);
    v11 = operator new(4 * LODWORD(v9));
    _aeabi_memclr4(v11, v10);
  *(_DWORD *)(v1 + 192) = v11;
  *(_DWORD *)(v1 + 220) = 0;
  *(_DWORD *)(v1 + 224) = 0;
  *(_DWORD *)(v1 + 228) = 0;
  *(_DWORD *)(v1 + 240) = 0;
  *(_DWORD *)(v1 + 244) = 0;
  *(_DWORD *)(v1 + 248) = 1065353216;
  LODWORD(v9) = v1 + 248;
  *(_DWORD *)(LODWORD(v9) + 4) = 0;
  v12 = COERCE_DOUBLE(__PAIR__(10, sub_DA7744(v9)));
  *(_DWORD *)(v1 + 236) = LODWORD(v12);
  if ( LODWORD(v12) == 1 )
    v14 = (void *)(v1 + 256);
    *(_DWORD *)(v1 + 256) = 0;
    if ( LODWORD(v12) >= 0x40000000 )
    v13 = 4 * LODWORD(v12);
    v14 = operator new(4 * LODWORD(v12));
    _aeabi_memclr4(v14, v13);
  *(_DWORD *)(v1 + 232) = v14;
  *(_DWORD *)(v1 + 268) = 0;
  *(_DWORD *)(v1 + 272) = 0;
  *(_DWORD *)(v1 + 276) = 1065353216;
  *(_DWORD *)(v1 + 280) = 0;
  LODWORD(v12) = v1 + 276;
  v15 = COERCE_DOUBLE(__PAIR__(10, sub_DA7744(v12)));
  *(_DWORD *)(v1 + 264) = LODWORD(v15);
  if ( LODWORD(v15) == 1 )
    v17 = (void *)(v1 + 284);
    *(_DWORD *)(v1 + 284) = 0;
    if ( LODWORD(v15) >= 0x40000000 )
    v16 = 4 * LODWORD(v15);
    v17 = operator new(4 * LODWORD(v15));
    _aeabi_memclr4(v17, v16);
  *(_DWORD *)(v1 + 260) = v17;
  *(_DWORD *)(v1 + 296) = 0;
  *(_DWORD *)(v1 + 300) = 0;
  *(_DWORD *)(v1 + 304) = 1065353216;
  *(_DWORD *)(v1 + 308) = 0;
  LODWORD(v15) = v1 + 304;
  v18 = COERCE_DOUBLE(__PAIR__(10, sub_DA7744(v15)));
  *(_DWORD *)(v1 + 292) = LODWORD(v18);
  if ( LODWORD(v18) == 1 )
    v20 = (void *)(v1 + 312);
    *(_DWORD *)(v1 + 312) = 0;
    if ( LODWORD(v18) >= 0x40000000 )
    v19 = 4 * LODWORD(v18);
    v20 = operator new(4 * LODWORD(v18));
    _aeabi_memclr4(v20, v19);
  *(_DWORD *)(v1 + 288) = v20;
  *(_DWORD *)(v1 + 324) = 0;
  *(_DWORD *)(v1 + 328) = 0;
  *(_DWORD *)(v1 + 332) = 1065353216;
  *(_DWORD *)(v1 + 336) = 0;
  LODWORD(v18) = v1 + 332;
  v21 = COERCE_DOUBLE(__PAIR__(10, sub_DA7744(v18)));
  *(_DWORD *)(v1 + 320) = LODWORD(v21);
  if ( LODWORD(v21) == 1 )
    v23 = (void *)(v1 + 340);
    *(_DWORD *)(v1 + 340) = 0;
    if ( LODWORD(v21) >= 0x40000000 )
    v22 = 4 * LODWORD(v21);
    v23 = operator new(4 * LODWORD(v21));
    _aeabi_memclr4(v23, v22);
  *(_DWORD *)(v1 + 316) = v23;
  *(_DWORD *)(v1 + 352) = 0;
  *(_DWORD *)(v1 + 356) = 0;
  *(_DWORD *)(v1 + 360) = 1065353216;
  *(_DWORD *)(v1 + 364) = 0;
  LODWORD(v21) = v1 + 360;
  v24 = sub_DA7744(v21);
  *(_DWORD *)(v1 + 348) = v24;
  if ( v24 == 1 )
    v26 = (void *)(v1 + 368);
    *(_DWORD *)(v1 + 368) = 0;
    if ( v24 >= 0x40000000 )
    v25 = 4 * v24;
    v26 = operator new(4 * v24);
    _aeabi_memclr4(v26, v25);
  *(_DWORD *)(v1 + 344) = v26;
  return v1;
}


void __fastcall ScreenController::bindColor(int a1, int *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int v7; // r4@1
  int v8; // r9@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  void *v10; // r10@5
  void (__fastcall *v11)(int *, int *, signed int); // r4@5
  _DWORD *v12; // r7@9
  void (*v13)(void); // r3@9
  void (__fastcall *v14)(int *, int *, signed int); // r3@12
  __int64 v15; // r0@14
  __int64 v16; // r4@17
  int v17; // r6@17
  _DWORD *v18; // r0@17
  _DWORD *v19; // r8@18
  int v20; // r4@18
  _DWORD *v21; // r7@20
  bool v22; // zf@23
  void (*v23)(void); // r3@26
  char v24; // [sp+4h] [bp-64h]@2
  void (*v25)(void); // [sp+Ch] [bp-5Ch]@1
  int v26; // [sp+10h] [bp-58h]@2
  int v27; // [sp+14h] [bp-54h]@4
  void (__fastcall *v28)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v29; // [sp+20h] [bp-48h]@4
  char v30; // [sp+24h] [bp-44h]@6
  void (*v31)(void); // [sp+2Ch] [bp-3Ch]@5
  int v32; // [sp+30h] [bp-38h]@6
  int v33; // [sp+34h] [bp-34h]@8
  void (__fastcall *v34)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v35; // [sp+40h] [bp-28h]@8

  v4 = *a2;
  v5 = a4;
  v25 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  v7 = a3;
  v8 = a1;
  if ( v6 )
  {
    v6(&v24, v5, 2);
    v26 = *(_DWORD *)(v5 + 12);
    v25 = *(void (**)(void))(v5 + 8);
  }
  v28 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v7 + 8);
  if ( v9 )
    v9(&v27, v7, 2);
    v29 = *(_DWORD *)(v7 + 12);
    v28 = *(void (__fastcall **)(int *, int *, signed int))(v7 + 8);
  v10 = operator new(0x18u);
  v11 = 0;
  *(_DWORD *)v10 = 0;
  *((_DWORD *)v10 + 1) = v4;
  v31 = 0;
  if ( v25 )
    ((void (__fastcall *)(char *, char *, signed int))v25)(&v30, &v24, 2);
    v32 = v26;
    v31 = v25;
  v34 = 0;
  if ( v28 )
    v28(&v33, &v27, 2);
    v11 = v28;
    v35 = v29;
    v34 = v28;
  *((_DWORD *)v10 + 4) = 0;
  v12 = operator new(0x20u);
  v13 = v31;
  v12[2] = 0;
  if ( v13 )
    v13();
    v11 = v34;
    v12[3] = v32;
    v12[2] = v31;
  v12[6] = 0;
  if ( v11 )
    v11(v12 + 4, &v33, 2);
    v12[7] = v35;
    v14 = v34;
    v12[6] = v34;
    *((_DWORD *)v10 + 2) = v12;
    *((_DWORD *)v10 + 4) = sub_DA3AD0;
    *((_DWORD *)v10 + 5) = sub_DA3A86;
    if ( v14 )
      v14(&v33, &v33, 3);
  else
    HIDWORD(v15) = sub_DA3A86;
    LODWORD(v15) = sub_DA3AD0;
    *((_QWORD *)v10 + 2) = v15;
  if ( v31 )
    v31();
  v16 = *(_QWORD *)(v8 + 288);
  v17 = *((_DWORD *)v10 + 1) % (unsigned int)(*(_QWORD *)(v8 + 288) >> 32);
  v18 = *(_DWORD **)(v16 + 4 * v17);
  if ( !v18 )
    goto LABEL_29;
  v19 = (_DWORD *)*v18;
  v20 = *(_DWORD *)(*v18 + 4);
  while ( *((_DWORD *)v10 + 1) != v20 )
    v21 = (_DWORD *)*v19;
    if ( *v19 )
    {
      LODWORD(v16) = v21[1];
      v18 = v19;
      v19 = (_DWORD *)*v19;
      if ( v21[1] % HIDWORD(v16) == v17 )
        continue;
    }
  v22 = v18 == 0;
  if ( v18 )
    v22 = *v18 == 0;
  if ( v22 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 288,
      v17,
      *((_DWORD *)v10 + 1),
      (int)v10);
    v23 = (void (*)(void))*((_DWORD *)v10 + 4);
    if ( v23 )
      v23();
    operator delete(v10);
    ((void (*)(void))v28)();
    v25();
}


void __fastcall ScreenController::registerSliderFinishedEventHandler(int a1, unsigned int a2, int a3)
{
  ScreenController::registerSliderFinishedEventHandler(a1, a2, a3);
}


void __fastcall ScreenController::bindFloatForAnyCollection(int a1, int *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int v7; // r4@1
  int v8; // r9@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  void *v10; // r10@5
  void (__fastcall *v11)(int *, int *, signed int); // r4@5
  _DWORD *v12; // r7@9
  void (*v13)(void); // r3@9
  void (__fastcall *v14)(int *, int *, signed int); // r3@12
  __int64 v15; // r0@14
  __int64 v16; // r4@17
  int v17; // r6@17
  _DWORD *v18; // r0@17
  _DWORD *v19; // r8@18
  int v20; // r4@18
  _DWORD *v21; // r7@20
  bool v22; // zf@23
  void (*v23)(void); // r3@26
  char v24; // [sp+4h] [bp-64h]@2
  void (*v25)(void); // [sp+Ch] [bp-5Ch]@1
  int v26; // [sp+10h] [bp-58h]@2
  int v27; // [sp+14h] [bp-54h]@4
  void (__fastcall *v28)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v29; // [sp+20h] [bp-48h]@4
  char v30; // [sp+24h] [bp-44h]@6
  void (*v31)(void); // [sp+2Ch] [bp-3Ch]@5
  int v32; // [sp+30h] [bp-38h]@6
  int v33; // [sp+34h] [bp-34h]@8
  void (__fastcall *v34)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v35; // [sp+40h] [bp-28h]@8

  v4 = *a2;
  v5 = a4;
  v25 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  v7 = a3;
  v8 = a1;
  if ( v6 )
  {
    v6(&v24, v5, 2);
    v26 = *(_DWORD *)(v5 + 12);
    v25 = *(void (**)(void))(v5 + 8);
  }
  v28 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v7 + 8);
  if ( v9 )
    v9(&v27, v7, 2);
    v29 = *(_DWORD *)(v7 + 12);
    v28 = *(void (__fastcall **)(int *, int *, signed int))(v7 + 8);
  v10 = operator new(0x18u);
  v11 = 0;
  *(_DWORD *)v10 = 0;
  *((_DWORD *)v10 + 1) = v4;
  v31 = 0;
  if ( v25 )
    ((void (__fastcall *)(char *, char *, signed int))v25)(&v30, &v24, 2);
    v32 = v26;
    v31 = v25;
  v34 = 0;
  if ( v28 )
    v28(&v33, &v27, 2);
    v11 = v28;
    v35 = v29;
    v34 = v28;
  *((_DWORD *)v10 + 4) = 0;
  v12 = operator new(0x20u);
  v13 = v31;
  v12[2] = 0;
  if ( v13 )
    v13();
    v11 = v34;
    v12[3] = v32;
    v12[2] = v31;
  v12[6] = 0;
  if ( v11 )
    v11(v12 + 4, &v33, 2);
    v12[7] = v35;
    v14 = v34;
    v12[6] = v34;
    *((_DWORD *)v10 + 2) = v12;
    *((_DWORD *)v10 + 4) = sub_DA48A6;
    *((_DWORD *)v10 + 5) = sub_DA4854;
    if ( v14 )
      v14(&v33, &v33, 3);
  else
    HIDWORD(v15) = sub_DA4854;
    LODWORD(v15) = sub_DA48A6;
    *((_QWORD *)v10 + 2) = v15;
  if ( v31 )
    v31();
  v16 = *(_QWORD *)(v8 + 344);
  v17 = *((_DWORD *)v10 + 1) % (unsigned int)(*(_QWORD *)(v8 + 344) >> 32);
  v18 = *(_DWORD **)(v16 + 4 * v17);
  if ( !v18 )
    goto LABEL_29;
  v19 = (_DWORD *)*v18;
  v20 = *(_DWORD *)(*v18 + 4);
  while ( *((_DWORD *)v10 + 1) != v20 )
    v21 = (_DWORD *)*v19;
    if ( *v19 )
    {
      LODWORD(v16) = v21[1];
      v18 = v19;
      v19 = (_DWORD *)*v19;
      if ( v21[1] % HIDWORD(v16) == v17 )
        continue;
    }
  v22 = v18 == 0;
  if ( v18 )
    v22 = *v18 == 0;
  if ( v22 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(std::string const&,int,std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(std::string const&,int,std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 344,
      v17,
      *((_DWORD *)v10 + 1),
      (int)v10);
    v23 = (void (*)(void))*((_DWORD *)v10 + 4);
    if ( v23 )
      v23();
    operator delete(v10);
    ((void (*)(void))v28)();
    v25();
}


void __fastcall ScreenController::bindColorForCollection(int a1, int *a2, int *a3, int a4, int a5)
{
  int v5; // r8@1
  int v6; // r4@1
  int v7; // r7@1
  int v8; // r9@1
  void (__fastcall *v9)(char *, int, signed int); // r3@1
  void (__fastcall *v10)(int *, int, signed int); // r3@3
  void *v11; // r10@5
  void (__fastcall *v12)(int *, int *, signed int); // r4@5
  _DWORD *v13; // r7@9
  void (*v14)(void); // r3@9
  void (__fastcall *v15)(int *, int *, signed int); // r3@12
  __int64 v16; // r0@14
  __int64 v17; // r4@17
  int v18; // r6@17
  _DWORD *v19; // r0@17
  _DWORD *v20; // r8@18
  int v21; // r4@18
  _DWORD *v22; // r7@20
  bool v23; // zf@23
  void (*v24)(void); // r3@26
  char v25; // [sp+4h] [bp-64h]@2
  void (*v26)(void); // [sp+Ch] [bp-5Ch]@1
  int v27; // [sp+10h] [bp-58h]@2
  int v28; // [sp+14h] [bp-54h]@4
  void (__fastcall *v29)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v30; // [sp+20h] [bp-48h]@4
  char v31; // [sp+24h] [bp-44h]@6
  void (*v32)(void); // [sp+2Ch] [bp-3Ch]@5
  int v33; // [sp+30h] [bp-38h]@6
  int v34; // [sp+34h] [bp-34h]@8
  void (__fastcall *v35)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v36; // [sp+40h] [bp-28h]@8

  v5 = *a3;
  v6 = a4;
  v7 = *a2;
  v8 = a1;
  v26 = 0;
  v9 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
  if ( v9 )
  {
    v9(&v25, a5, 2);
    v27 = *(_DWORD *)(a5 + 12);
    v26 = *(void (**)(void))(a5 + 8);
  }
  v29 = 0;
  v10 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  if ( v10 )
    v10(&v28, v6, 2);
    v30 = *(_DWORD *)(v6 + 12);
    v29 = *(void (__fastcall **)(int *, int *, signed int))(v6 + 8);
  v11 = operator new(0x18u);
  v12 = 0;
  *(_DWORD *)v11 = 0;
  *((_DWORD *)v11 + 1) = v5 ^ v7;
  v32 = 0;
  if ( v26 )
    ((void (__fastcall *)(char *, char *, signed int))v26)(&v31, &v25, 2);
    v33 = v27;
    v32 = v26;
  v35 = 0;
  if ( v29 )
    v29(&v34, &v28, 2);
    v12 = v29;
    v36 = v30;
    v35 = v29;
  *((_DWORD *)v11 + 4) = 0;
  v13 = operator new(0x20u);
  v14 = v32;
  v13[2] = 0;
  if ( v14 )
    v14();
    v12 = v35;
    v13[3] = v33;
    v13[2] = v32;
  v13[6] = 0;
  if ( v12 )
    v12(v13 + 4, &v34, 2);
    v13[7] = v36;
    v15 = v35;
    v13[6] = v35;
    *((_DWORD *)v11 + 2) = v13;
    *((_DWORD *)v11 + 4) = sub_DA3CC8;
    *((_DWORD *)v11 + 5) = sub_DA3C74;
    if ( v15 )
      v15(&v34, &v34, 3);
  else
    HIDWORD(v16) = sub_DA3C74;
    LODWORD(v16) = sub_DA3CC8;
    *((_QWORD *)v11 + 2) = v16;
  if ( v32 )
    v32();
  v17 = *(_QWORD *)(v8 + 316);
  v18 = *((_DWORD *)v11 + 1) % (unsigned int)(*(_QWORD *)(v8 + 316) >> 32);
  v19 = *(_DWORD **)(v17 + 4 * v18);
  if ( !v19 )
    goto LABEL_29;
  v20 = (_DWORD *)*v19;
  v21 = *(_DWORD *)(*v19 + 4);
  while ( *((_DWORD *)v11 + 1) != v21 )
    v22 = (_DWORD *)*v20;
    if ( *v20 )
    {
      LODWORD(v17) = v22[1];
      v19 = v20;
      v20 = (_DWORD *)*v20;
      if ( v22[1] % HIDWORD(v17) == v18 )
        continue;
    }
  v23 = v19 == 0;
  if ( v19 )
    v23 = *v19 == 0;
  if ( v23 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(int,std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(int,std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 316,
      v18,
      *((_DWORD *)v11 + 1),
      (int)v11);
    v24 = (void (*)(void))*((_DWORD *)v11 + 4);
    if ( v24 )
      v24();
    operator delete(v11);
    ((void (*)(void))v29)();
    v26();
}


void __fastcall ScreenController::bindString(int a1, int *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int v7; // r4@1
  int v8; // r9@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  void *v10; // r10@5
  void (__fastcall *v11)(int *, int *, signed int); // r4@5
  _DWORD *v12; // r7@9
  void (*v13)(void); // r3@9
  void (__fastcall *v14)(int *, int *, signed int); // r3@12
  __int64 v15; // r0@14
  __int64 v16; // r4@17
  int v17; // r6@17
  _DWORD *v18; // r0@17
  _DWORD *v19; // r8@18
  int v20; // r4@18
  _DWORD *v21; // r7@20
  bool v22; // zf@23
  void (*v23)(void); // r3@26
  char v24; // [sp+4h] [bp-64h]@2
  void (*v25)(void); // [sp+Ch] [bp-5Ch]@1
  int v26; // [sp+10h] [bp-58h]@2
  int v27; // [sp+14h] [bp-54h]@4
  void (__fastcall *v28)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v29; // [sp+20h] [bp-48h]@4
  char v30; // [sp+24h] [bp-44h]@6
  void (*v31)(void); // [sp+2Ch] [bp-3Ch]@5
  int v32; // [sp+30h] [bp-38h]@6
  int v33; // [sp+34h] [bp-34h]@8
  void (__fastcall *v34)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v35; // [sp+40h] [bp-28h]@8

  v4 = *a2;
  v5 = a4;
  v25 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  v7 = a3;
  v8 = a1;
  if ( v6 )
  {
    v6(&v24, v5, 2);
    v26 = *(_DWORD *)(v5 + 12);
    v25 = *(void (**)(void))(v5 + 8);
  }
  v28 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v7 + 8);
  if ( v9 )
    v9(&v27, v7, 2);
    v29 = *(_DWORD *)(v7 + 12);
    v28 = *(void (__fastcall **)(int *, int *, signed int))(v7 + 8);
  v10 = operator new(0x18u);
  v11 = 0;
  *(_DWORD *)v10 = 0;
  *((_DWORD *)v10 + 1) = v4;
  v31 = 0;
  if ( v25 )
    ((void (__fastcall *)(char *, char *, signed int))v25)(&v30, &v24, 2);
    v32 = v26;
    v31 = v25;
  v34 = 0;
  if ( v28 )
    v28(&v33, &v27, 2);
    v11 = v28;
    v35 = v29;
    v34 = v28;
  *((_DWORD *)v10 + 4) = 0;
  v12 = operator new(0x20u);
  v13 = v31;
  v12[2] = 0;
  if ( v13 )
    v13();
    v11 = v34;
    v12[3] = v32;
    v12[2] = v31;
  v12[6] = 0;
  if ( v11 )
    v11(v12 + 4, &v33, 2);
    v12[7] = v35;
    v14 = v34;
    v12[6] = v34;
    *((_DWORD *)v10 + 2) = v12;
    *((_DWORD *)v10 + 4) = sub_DA34D8;
    *((_DWORD *)v10 + 5) = sub_DA33F4;
    if ( v14 )
      v14(&v33, &v33, 3);
  else
    HIDWORD(v15) = sub_DA33F4;
    LODWORD(v15) = sub_DA34D8;
    *((_QWORD *)v10 + 2) = v15;
  if ( v31 )
    v31();
  v16 = *(_QWORD *)(v8 + 288);
  v17 = *((_DWORD *)v10 + 1) % (unsigned int)(*(_QWORD *)(v8 + 288) >> 32);
  v18 = *(_DWORD **)(v16 + 4 * v17);
  if ( !v18 )
    goto LABEL_29;
  v19 = (_DWORD *)*v18;
  v20 = *(_DWORD *)(*v18 + 4);
  while ( *((_DWORD *)v10 + 1) != v20 )
    v21 = (_DWORD *)*v19;
    if ( *v19 )
    {
      LODWORD(v16) = v21[1];
      v18 = v19;
      v19 = (_DWORD *)*v19;
      if ( v21[1] % HIDWORD(v16) == v17 )
        continue;
    }
  v22 = v18 == 0;
  if ( v18 )
    v22 = *v18 == 0;
  if ( v22 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 288,
      v17,
      *((_DWORD *)v10 + 1),
      (int)v10);
    v23 = (void (*)(void))*((_DWORD *)v10 + 4);
    if ( v23 )
      v23();
    operator delete(v10);
    ((void (*)(void))v28)();
    v25();
}


signed int __fastcall ScreenController::bindForCollection(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char v5; // [sp+4h] [bp-14h]@1
  int v6; // [sp+Ch] [bp-Ch]@1

  v6 = *a2 ^ *a3;
  return std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(int,std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(int,std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<unsigned int,std::function<void ()(int,std::string const&,UIPropertyBag &)> const&>(
           &v5,
           a1 + 316,
           &v6,
           a4);
}


void __fastcall ScreenController::bindFloat(int a1, int *a2, int a3, int a4)
{
  ScreenController::bindFloat(a1, a2, a3, a4);
}


void __fastcall ScreenController::registerButtonEventHandler(int a1, unsigned int a2, int a3, int a4, int a5)
{
  ScreenController::registerButtonEventHandler(a1, a2, a3, a4, a5);
}


char *__fastcall ScreenController::registerPointerHeldEventHandler(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int); // r3@2
  char *result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 156);
  if ( v4 == *(_QWORD *)(a1 + 156) >> 32 )
  {
    result = j_j_j__ZNSt6vectorISt8functionIFN2ui11ViewRequestER26PointerHeldScreenEventDataEESaIS6_EE19_M_emplace_back_auxIJRS6_EEEvDpOT_(
               (_QWORD *)(a1 + 152),
               a2);
  }
  else
    *(_DWORD *)(v4 + 8) = 0;
    v5 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v5 )
    {
      v5(v4);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
      v4 = *(_DWORD *)(v2 + 156);
    }
    result = (char *)(v4 + 16);
    *(_DWORD *)(v2 + 156) = v4 + 16;
  return result;
}


void __fastcall ScreenController::registerToggleChangeEventHandler(int a1, unsigned int a2, int a3)
{
  ScreenController::registerToggleChangeEventHandler(a1, a2, a3);
}


int __fastcall ScreenController::_handleAnimationEvent(int a1, _WORD *a2)
{
  __int64 v2; // kr00_8@1
  unsigned int v3; // r6@1
  unsigned int v4; // r5@1
  _DWORD *v5; // r0@1
  _DWORD *v6; // r7@2
  unsigned __int16 v7; // r2@2
  int i; // r4@6
  int v9; // r0@9
  int v10; // r5@10 OVERLAPPED
  int v11; // r6@10 OVERLAPPED
  int v12; // r0@12

  v2 = *(_QWORD *)(a1 + 260);
  v3 = *a2;
  v4 = v3 % (unsigned int)(*(_QWORD *)(a1 + 260) >> 32);
  v5 = *(_DWORD **)(v2 + 4 * v4);
  if ( v5 )
  {
    v6 = (_DWORD *)*v5;
    v7 = *(_WORD *)(*v5 + 4);
    while ( v3 != v7 )
    {
      if ( !*v6 )
        return 0;
      v5 = v6;
      v7 = *(_WORD *)(v2 + 4);
      v6 = (_DWORD *)*v6;
      if ( (unsigned int)*(_WORD *)(v2 + 4) % HIDWORD(v2) != v4 )
    }
    if ( v5 )
      v9 = *v5;
      if ( v9 )
      {
        *(_QWORD *)&v10 = *(_QWORD *)(v9 + 8);
        for ( i = 0; v11 != v10; i |= v12 )
        {
          if ( !*(_DWORD *)(v10 + 8) )
            sub_DA7654();
          v12 = (*(int (__fastcall **)(int))(v10 + 12))(v10);
          v10 += 16;
        }
      }
      else
        i = 0;
    else
      i = 0;
  }
  else
    i = 0;
  return i;
}


void __fastcall ScreenController::bindBoolForCollection(int a1, int *a2, int *a3, int a4, int a5)
{
  int v5; // r8@1
  int v6; // r4@1
  int v7; // r7@1
  int v8; // r9@1
  void (__fastcall *v9)(char *, int, signed int); // r3@1
  void (__fastcall *v10)(int *, int, signed int); // r3@3
  void *v11; // r10@5
  void (__fastcall *v12)(int *, int *, signed int); // r4@5
  _DWORD *v13; // r7@9
  void (*v14)(void); // r3@9
  void (__fastcall *v15)(int *, int *, signed int); // r3@12
  __int64 v16; // r0@14
  __int64 v17; // r4@17
  int v18; // r6@17
  _DWORD *v19; // r0@17
  _DWORD *v20; // r8@18
  int v21; // r4@18
  _DWORD *v22; // r7@20
  bool v23; // zf@23
  void (*v24)(void); // r3@26
  char v25; // [sp+4h] [bp-64h]@2
  void (*v26)(void); // [sp+Ch] [bp-5Ch]@1
  int v27; // [sp+10h] [bp-58h]@2
  int v28; // [sp+14h] [bp-54h]@4
  void (__fastcall *v29)(int *, int *, signed int); // [sp+1Ch] [bp-4Ch]@3
  int v30; // [sp+20h] [bp-48h]@4
  char v31; // [sp+24h] [bp-44h]@6
  void (*v32)(void); // [sp+2Ch] [bp-3Ch]@5
  int v33; // [sp+30h] [bp-38h]@6
  int v34; // [sp+34h] [bp-34h]@8
  void (__fastcall *v35)(int *, int *, signed int); // [sp+3Ch] [bp-2Ch]@7
  int v36; // [sp+40h] [bp-28h]@8

  v5 = *a3;
  v6 = a4;
  v7 = *a2;
  v8 = a1;
  v26 = 0;
  v9 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
  if ( v9 )
  {
    v9(&v25, a5, 2);
    v27 = *(_DWORD *)(a5 + 12);
    v26 = *(void (**)(void))(a5 + 8);
  }
  v29 = 0;
  v10 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  if ( v10 )
    v10(&v28, v6, 2);
    v30 = *(_DWORD *)(v6 + 12);
    v29 = *(void (__fastcall **)(int *, int *, signed int))(v6 + 8);
  v11 = operator new(0x18u);
  v12 = 0;
  *(_DWORD *)v11 = 0;
  *((_DWORD *)v11 + 1) = v5 ^ v7;
  v32 = 0;
  if ( v26 )
    ((void (__fastcall *)(char *, char *, signed int))v26)(&v31, &v25, 2);
    v33 = v27;
    v32 = v26;
  v35 = 0;
  if ( v29 )
    v29(&v34, &v28, 2);
    v12 = v29;
    v36 = v30;
    v35 = v29;
  *((_DWORD *)v11 + 4) = 0;
  v13 = operator new(0x20u);
  v14 = v32;
  v13[2] = 0;
  if ( v14 )
    v14();
    v12 = v35;
    v13[3] = v33;
    v13[2] = v32;
  v13[6] = 0;
  if ( v12 )
    v12(v13 + 4, &v34, 2);
    v13[7] = v36;
    v15 = v35;
    v13[6] = v35;
    *((_DWORD *)v11 + 2) = v13;
    *((_DWORD *)v11 + 4) = sub_DA403E;
    *((_DWORD *)v11 + 5) = sub_DA3FF0;
    if ( v15 )
      v15(&v34, &v34, 3);
  else
    HIDWORD(v16) = sub_DA3FF0;
    LODWORD(v16) = sub_DA403E;
    *((_QWORD *)v11 + 2) = v16;
  if ( v32 )
    v32();
  v17 = *(_QWORD *)(v8 + 316);
  v18 = *((_DWORD *)v11 + 1) % (unsigned int)(*(_QWORD *)(v8 + 316) >> 32);
  v19 = *(_DWORD **)(v17 + 4 * v18);
  if ( !v19 )
    goto LABEL_29;
  v20 = (_DWORD *)*v19;
  v21 = *(_DWORD *)(*v19 + 4);
  while ( *((_DWORD *)v11 + 1) != v21 )
    v22 = (_DWORD *)*v20;
    if ( *v20 )
    {
      LODWORD(v17) = v22[1];
      v19 = v20;
      v20 = (_DWORD *)*v20;
      if ( v22[1] % HIDWORD(v17) == v18 )
        continue;
    }
  v23 = v19 == 0;
  if ( v19 )
    v23 = *v19 == 0;
  if ( v23 )
LABEL_29:
    std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(int,std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(int,std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      v8 + 316,
      v18,
      *((_DWORD *)v11 + 1),
      (int)v11);
    v24 = (void (*)(void))*((_DWORD *)v11 + 4);
    if ( v24 )
      v24();
    operator delete(v11);
    ((void (*)(void))v29)();
    v26();
}


int __fastcall ScreenController::_handlePointerHeldEvent(int a1, int a2)
{
  __int64 v2; // r6@1
  int v3; // r5@1
  int i; // r4@1
  int v5; // r0@3

  v2 = *(_QWORD *)(a1 + 152);
  v3 = a2;
  for ( i = 0; HIDWORD(v2) != (_DWORD)v2; i |= v5 )
  {
    if ( !*(_DWORD *)(v2 + 8) )
      sub_DA7654();
    v5 = (*(int (__fastcall **)(_DWORD, int))(v2 + 12))(v2, v3);
    LODWORD(v2) = v2 + 16;
  }
  return i;
}


void __fastcall ScreenController::bindIntForCollection(int a1, int *a2, int *a3, int a4, int a5)
{
  ScreenController::bindIntForCollection(a1, a2, a3, a4, a5);
}


void __fastcall ScreenController::registerTextEditFinishedEventHandler(int a1, unsigned int a2, int a3)
{
  ScreenController::registerTextEditFinishedEventHandler(a1, a2, a3);
}


void __fastcall ScreenController::registerButtonEventHandler(int a1, _QWORD *a2, int a3, int a4, int a5)
{
  _WORD *v5; // r5@1 OVERLAPPED
  _WORD *v6; // r6@1 OVERLAPPED
  int v7; // r8@1
  int v8; // r9@1
  int i; // r10@1
  unsigned int v10; // r11@2
  void (__fastcall *v11)(char *, int, signed int); // r3@2
  char v12; // [sp+4h] [bp-34h]@3
  void (__fastcall *v13)(char *, char *, signed int); // [sp+Ch] [bp-2Ch]@2
  int v14; // [sp+10h] [bp-28h]@3

  *(_QWORD *)&v5 = *a2;
  v7 = a4;
  v8 = a3;
  for ( i = a1; v6 != v5; ++v5 )
  {
    v10 = *v5;
    v13 = 0;
    v11 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
    if ( v11 )
    {
      v11(&v12, a5, 2);
      v14 = *(_DWORD *)(a5 + 12);
      v13 = *(void (__fastcall **)(char *, char *, signed int))(a5 + 8);
    }
    ScreenController::registerButtonEventHandler(i, v10, v8, v7, (int)&v12);
    if ( v13 )
      v13(&v12, &v12, 3);
  }
}


int __fastcall ScreenController::_handleRawInputEvent(int a1)
{
  int result; // r0@2

  if ( *(_DWORD *)(a1 + 108) )
    result = (*(int (__fastcall **)(int))(a1 + 112))(a1 + 100);
  else
    result = 0;
  return result;
}


int __fastcall ScreenController::registerRawInputEventHandler(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 100;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 100);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 108);
  v10 = v13;
  *(_DWORD *)(v4 + 108) = v8;
  v14 = *(_DWORD *)(v4 + 112);
  *(_DWORD *)(v4 + 112) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


void __fastcall ScreenController::registerButtonEventHandler(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int v5; // r6@1
  void (__fastcall *v6)(char *, int, signed int); // r3@5
  int v7; // r8@5
  unsigned int v8; // r5@5
  int v9; // r7@5
  char v10; // [sp+8h] [bp-28h]@6
  void (*v11)(void); // [sp+10h] [bp-20h]@1
  int v12; // [sp+14h] [bp-1Ch]@6

  v5 = 0;
  v11 = 0;
  if ( !a4 )
    v5 = 2;
  if ( a4 == 1 )
    v5 = 1;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( v6 )
  {
    v6(&v10, a5, 2);
    v12 = *(_DWORD *)(a5 + 12);
    v11 = *(void (**)(void))(a5 + 8);
  }
  ScreenController::registerButtonEventHandler(v9, v8, v7, v5, (int)&v10);
  if ( v11 )
    v11();
}


int __fastcall ScreenController::screenHandlesGamepadMenuButton(ScreenController *this)
{
  return 0;
}


int __fastcall ScreenController::addStaticScreenVars(int result, Json::Value *a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int v4; // t1@2

  for ( *(_QWORD *)&v2 = *(_QWORD *)(result + 220); v3 != v2; result = (*(int (**)(void))(*(_DWORD *)v4 + 80))() )
  {
    v4 = *v2;
    v2 += 2;
  }
  return result;
}


char *__fastcall ScreenController::registerFocusMovedEventHandler(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int); // r3@2
  char *result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 == *(_QWORD *)(a1 + 120) >> 32 )
  {
    result = j_j_j__ZNSt6vectorISt8functionIFN2ui11ViewRequestER24FocusMoveScreenEventDataEESaIS6_EE19_M_emplace_back_auxIJRS6_EEEvDpOT_(
               (_QWORD *)(a1 + 116),
               a2);
  }
  else
    *(_DWORD *)(v4 + 8) = 0;
    v5 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v5 )
    {
      v5(v4);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
      v4 = *(_DWORD *)(v2 + 120);
    }
    result = (char *)(v4 + 16);
    *(_DWORD *)(v2 + 120) = v4 + 16;
  return result;
}


void __fastcall ScreenController::bindFloatForAnyCollection(int a1, int *a2, int a3, int a4)
{
  ScreenController::bindFloatForAnyCollection(a1, a2, a3, a4);
}


int __fastcall ScreenController::_handleFocusMoveEvent(int a1, int a2)
{
  __int64 v2; // r6@1
  int v3; // r5@1
  int i; // r4@1
  int v5; // r0@3

  v2 = *(_QWORD *)(a1 + 116);
  v3 = a2;
  for ( i = 0; HIDWORD(v2) != (_DWORD)v2; i |= v5 )
  {
    if ( !*(_DWORD *)(v2 + 8) )
      sub_DA7654();
    v5 = (*(int (__fastcall **)(_DWORD, int))(v2 + 12))(v2, v3);
    LODWORD(v2) = v2 + 16;
  }
  return i;
}


void __fastcall ScreenController::bindColorForCollection(int a1, int *a2, int *a3, int a4, int a5)
{
  ScreenController::bindColorForCollection(a1, a2, a3, a4, a5);
}


void __fastcall ScreenController::bindFloatForCollection(int a1, int *a2, int *a3, int a4)
{
  ScreenController::bindFloatForCollection(a1, a2, a3, a4);
}


void __fastcall ScreenController::bindBoolForAnyCollection(int a1, int *a2, int a3, int a4)
{
  ScreenController::bindBoolForAnyCollection(a1, a2, a3, a4);
}


int __fastcall ScreenController::_handleEvent(ScreenController *this, ScreenEvent *a2)
{
  ScreenEvent *v2; // r9@1
  int i; // r4@1
  int result; // r0@2
  __int64 v5; // r6@3
  int v6; // r0@5
  __int64 v7; // r6@7
  int v8; // r0@9
  __int64 v9; // r6@11
  int v10; // r0@13
  __int64 v11; // r6@15
  int v12; // r0@17
  __int64 v13; // kr00_8@19
  unsigned int v14; // r6@19
  int **v15; // r0@19
  int *v16; // r5@20
  unsigned __int16 v17; // r2@20
  int v18; // r7@22
  __int64 v19; // kr08_8@25
  char *v20; // r9@25
  unsigned int v21; // r7@25
  int **v22; // r0@25
  int *v23; // r5@26
  unsigned __int16 v24; // r2@26
  int v25; // r6@28
  __int64 v26; // kr10_8@33
  unsigned int v27; // r7@33
  int **v28; // r0@33
  int *v29; // r5@34
  unsigned __int16 v30; // r2@34
  int v31; // r6@36
  __int64 v32; // kr18_8@39
  unsigned int v33; // r5@39
  _DWORD *v34; // r0@39
  _DWORD *v35; // r7@40
  unsigned __int16 v36; // r2@40
  int *v37; // r0@51
  int v38; // r6@52
  int v39; // r7@52
  int *v40; // r0@60
  int v41; // r5@61
  int v42; // r6@61
  int v43; // r0@63
  int *v44; // r0@66
  __int64 v45; // r6@67
  int v46; // r0@75
  int v47; // r5@76 OVERLAPPED
  int v48; // r6@76 OVERLAPPED
  int v49; // r0@78

  v2 = a2;
  i = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      return j_j_j__ZN16ScreenController18_handleButtonEventER11ScreenEvent(this, a2);
    case 4:
      v5 = *((_QWORD *)this + 19);
      i = 0;
      if ( (_DWORD)v5 == HIDWORD(v5) )
        return i;
      while ( *(_DWORD *)(v5 + 8) )
      {
        v6 = (*(int (__fastcall **)(_DWORD, char *))(v5 + 12))(v5, (char *)v2 + 4);
        LODWORD(v5) = v5 + 16;
        i |= v6;
        if ( HIDWORD(v5) == (_DWORD)v5 )
          return i;
      }
      goto LABEL_93;
    case 5:
      v7 = *(_QWORD *)((char *)this + 116);
      if ( (_DWORD)v7 == HIDWORD(v7) )
      while ( *(_DWORD *)(v7 + 8) )
        v8 = (*(int (__fastcall **)(_DWORD, char *))(v7 + 12))(v7, (char *)v2 + 4);
        LODWORD(v7) = v7 + 16;
        i |= v8;
        if ( HIDWORD(v7) == (_DWORD)v7 )
    case 7:
      v9 = *((_QWORD *)this + 16);
      if ( (_DWORD)v9 == HIDWORD(v9) )
      while ( *(_DWORD *)(v9 + 8) )
        v10 = (*(int (__fastcall **)(_DWORD, char *))(v9 + 12))(v9, (char *)v2 + 4);
        LODWORD(v9) = v9 + 16;
        i |= v10;
        if ( HIDWORD(v9) == (_DWORD)v9 )
    case 8:
      v11 = *(_QWORD *)((char *)this + 140);
      if ( (_DWORD)v11 == HIDWORD(v11) )
      while ( *(_DWORD *)(v11 + 8) )
        v12 = (*(int (__fastcall **)(_DWORD, char *))(v11 + 12))(v11, (char *)v2 + 4);
        LODWORD(v11) = v11 + 16;
        i |= v12;
        if ( HIDWORD(v11) == (_DWORD)v11 )
    case 0xC:
      v13 = *(_QWORD *)((char *)this + 164);
      v14 = *((_WORD *)a2 + 2) % (unsigned int)(*(_QWORD *)((char *)this + 164) >> 32);
      v15 = *(int ***)(v13 + 4 * v14);
      if ( !v15 )
        return 0;
      v16 = *v15;
      v17 = *((_WORD *)*v15 + 2);
      while ( 2 )
        if ( *((_WORD *)a2 + 2) == v17 )
        {
          if ( v15 )
          {
            v37 = *v15;
            if ( v37 )
            {
              v38 = *((_QWORD *)v37 + 1) >> 32;
              v39 = *((_QWORD *)v37 + 1);
              for ( i = 0; v38 != v39; v39 += 20 )
              {
                if ( *((_BYTE *)v2 + 12) || !*(_BYTE *)(v39 + 16) )
                {
                  if ( !*(_DWORD *)(v39 + 8) )
                    goto LABEL_93;
                  i |= (*(int (__fastcall **)(int, char *, _DWORD))(v39 + 12))(v39, (char *)v2 + 4, *((_DWORD *)v2 + 2));
                }
              }
            }
            else
              i = 0;
          }
          else
            i = 0;
        }
        else
          v18 = *v16;
          if ( *v16 )
            v17 = *(_WORD *)(v18 + 4);
            v15 = (int **)v13;
            v16 = *(int **)v13;
            if ( (unsigned int)*(_WORD *)(v18 + 4) % HIDWORD(v13) != v14 )
              return i;
            continue;
          i = 0;
    case 0xD:
      v19 = *((_QWORD *)this + 24);
      v20 = (char *)a2 + 4;
      v21 = *((_WORD *)a2 + 2) % (unsigned int)(*((_QWORD *)this + 24) >> 32);
      v22 = *(int ***)(v19 + 4 * v21);
      if ( v22 )
        v23 = *v22;
        v24 = *((_WORD *)*v22 + 2);
        while ( *((_WORD *)a2 + 2) != v24 )
          v25 = *v23;
          if ( !*v23 )
            return 0;
          v24 = *(_WORD *)(v25 + 4);
          v22 = (int **)v19;
          v23 = *(int **)v19;
          if ( (unsigned int)*(_WORD *)(v25 + 4) % HIDWORD(v19) != v21 )
            return i;
        if ( !v22 )
          return 0;
        v40 = *v22;
        if ( !v40 )
        v41 = *((_QWORD *)v40 + 1) >> 32;
        v42 = *((_QWORD *)v40 + 1);
        i = 0;
        if ( v42 != v41 )
          while ( *(_DWORD *)(v42 + 8) )
            v43 = (*(int (__fastcall **)(int, char *))(v42 + 12))(v42, v20);
            v42 += 16;
            i |= v43;
            if ( v41 == v42 )
          goto LABEL_93;
      else
      break;
    case 0xF:
      if ( *((_DWORD *)this + 27) )
        return (*((int (__fastcall **)(_DWORD, _DWORD))this + 28))((char *)this + 100, (char *)a2 + 4);
      return 0;
    case 0x10:
      v26 = *((_QWORD *)this + 29);
      v27 = *((_WORD *)a2 + 2) % (unsigned int)(*((_QWORD *)this + 29) >> 32);
      v28 = *(int ***)(v26 + 4 * v27);
      if ( v28 )
        v29 = *v28;
        v30 = *((_WORD *)*v28 + 2);
        while ( *((_WORD *)a2 + 2) != v30 )
          v31 = *v29;
          if ( !*v29 )
          v30 = *(_WORD *)(v31 + 4);
          v28 = (int **)v26;
          v29 = *(int **)v26;
          if ( (unsigned int)*(_WORD *)(v31 + 4) % HIDWORD(v26) != v27 )
        if ( !v28 )
        v44 = *v28;
        if ( !v44 )
        v45 = *((_QWORD *)v44 + 1);
        if ( (_DWORD)v45 != HIDWORD(v45) )
          while ( 1 )
            if ( *((_BYTE *)v2 + 16) || !*(_BYTE *)(v45 + 16) )
              if ( !*(_DWORD *)(v45 + 8) )
                goto LABEL_93;
              i |= (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(v45 + 12))(
                     v45,
                     *((_QWORD *)v2 + 1),
                     *((_QWORD *)v2 + 1) >> 32);
            LODWORD(v45) = v45 + 20;
            if ( HIDWORD(v45) == (_DWORD)v45 )
      return i;
    case 0x11:
      v32 = *(_QWORD *)((char *)this + 260);
      v33 = *((_WORD *)a2 + 2) % (unsigned int)(*(_QWORD *)((char *)this + 260) >> 32);
      v34 = *(_DWORD **)(v32 + 4 * v33);
      if ( v34 )
        v35 = (_DWORD *)*v34;
        v36 = *(_WORD *)(*v34 + 4);
        while ( *((_WORD *)a2 + 2) != v36 )
          if ( !*v35 )
          v36 = *(_WORD *)(v32 + 4);
          v34 = v35;
          v35 = (_DWORD *)*v35;
          if ( (unsigned int)*(_WORD *)(v32 + 4) % HIDWORD(v32) != v33 )
        if ( !v34 )
        v46 = *v34;
        if ( !v46 )
        *(_QWORD *)&v47 = *(_QWORD *)(v46 + 8);
        if ( v47 != v48 )
          while ( *(_DWORD *)(v47 + 8) )
            v49 = (*(int (__fastcall **)(int))(v47 + 12))(v47);
            v47 += 16;
            i |= v49;
            if ( v48 == v47 )
LABEL_93:
          sub_DA7654();
      return result;
    default:
  }
  return i;
}


int __fastcall ScreenController::handleEvent(ScreenController *this, ScreenEvent *a2)
{
  ScreenController *v2; // r8@1
  ScreenEvent *v3; // r9@1
  int v4; // r0@1
  int v5; // r4@1
  __int64 v6; // kr00_8@1
  int v7; // r6@2
  int v8; // r5@2
  bool v9; // zf@4

  v2 = this;
  v3 = a2;
  v6 = *(_QWORD *)((char *)this + 220);
  v4 = *(_QWORD *)((char *)this + 220) >> 32;
  v5 = v6;
  if ( (_DWORD)v6 == v4 )
  {
    v8 = 0;
    return v8 | ScreenController::_handleEvent(v2, v3);
  }
  v7 = v4 - 8;
  v8 = 0;
  do
    v8 |= (*(int (**)(void))(**(_DWORD **)v5 + 28))();
    if ( v8 & 8 )
      break;
    v9 = v7 == v5;
    v5 += 8;
  while ( !v9 );
  if ( !(v8 & 8) )
  return v8;
}


void __fastcall ScreenController::bindBool(int a1, int *a2, int a3, int a4)
{
  ScreenController::bindBool(a1, a2, a3, a4);
}


void __fastcall ScreenController::registerButtonEventHandler(int a1, _QWORD *a2, int a3, int a4, int a5)
{
  ScreenController::registerButtonEventHandler(a1, a2, a3, a4, a5);
}


int __fastcall ScreenController::_handleHoloInputModeChangedEvent(int a1, int a2)
{
  __int64 v2; // r6@1
  int v3; // r5@1
  int i; // r4@1
  int v5; // r0@3

  v2 = *(_QWORD *)(a1 + 140);
  v3 = a2;
  for ( i = 0; HIDWORD(v2) != (_DWORD)v2; i |= v5 )
  {
    if ( !*(_DWORD *)(v2 + 8) )
      sub_DA7654();
    v5 = (*(int (__fastcall **)(_DWORD, int))(v2 + 12))(v2, v3);
    LODWORD(v2) = v2 + 16;
  }
  return i;
}


int __fastcall ScreenController::bind(int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, unsigned int a6, unsigned __int64 a7)
{
  int v7; // r11@1
  __int64 v8; // kr00_8@1
  _DWORD *v9; // r0@1
  _DWORD *v10; // r6@2
  int v11; // r4@2
  _DWORD *v12; // r5@4
  bool v13; // zf@7
  void (__fastcall *v14)(int, unsigned int, _DWORD, _DWORD); // r7@11
  int v15; // r0@11
  unsigned int v16; // r1@11
  unsigned __int64 v17; // r2@11
  __int64 v18; // kr08_8@12
  unsigned int v19; // r4@12
  _DWORD *v20; // r0@12
  _DWORD *v21; // r7@13
  int v22; // r6@13
  bool v23; // zf@18
  char i; // r4@23
  int *v25; // r6@24
  int *v26; // r10@24
  int v27; // t1@25
  unsigned __int64 v29; // [sp+10h] [bp-30h]@1
  unsigned int v30; // [sp+18h] [bp-28h]@1

  v7 = a1;
  v30 = a4;
  v29 = __PAIR__(a2, a3);
  v8 = *(_QWORD *)(a1 + 316);
  v9 = *(_DWORD **)(v8 + 4 * ((a6 ^ a3) % HIDWORD(v8)));
  if ( v9 )
  {
    v10 = (_DWORD *)*v9;
    v11 = *(_DWORD *)(*v9 + 4);
    while ( (a6 ^ a3) != v11 )
    {
      v12 = (_DWORD *)*v10;
      if ( *v10 )
      {
        v11 = v12[1];
        v9 = v10;
        v10 = (_DWORD *)*v10;
        if ( v12[1] % HIDWORD(v8) == (a6 ^ a3) % HIDWORD(v8) )
          continue;
      }
      goto LABEL_12;
    }
    v13 = v9 == 0;
    if ( v9 )
      v9 = (_DWORD *)*v9;
      v13 = v9 == 0;
    if ( !v13 )
      if ( v9[4] )
        v14 = (void (__fastcall *)(int, unsigned int, _DWORD, _DWORD))v9[5];
        v15 = (int)(v9 + 2);
        v16 = a4;
        v17 = a7;
LABEL_23:
        v14(v15, v16, v17, HIDWORD(v17));
        i = 1;
        return i & 1;
      goto LABEL_27;
  }
LABEL_12:
  v18 = *(_QWORD *)(v7 + 344);
  v19 = a6 % (unsigned int)(*(_QWORD *)(v7 + 344) >> 32);
  v20 = *(_DWORD **)(v18 + 4 * v19);
  if ( v20 )
    v21 = (_DWORD *)*v20;
    v22 = *(_DWORD *)(*v20 + 4);
    while ( v22 != a6 )
      if ( *v21 )
        v22 = *(_DWORD *)(v18 + 4);
        v20 = v21;
        v21 = (_DWORD *)*v21;
        if ( *(_DWORD *)(v18 + 4) % HIDWORD(v18) == v19 )
      goto LABEL_24;
    v23 = v20 == 0;
    if ( v20 )
      v20 = (_DWORD *)*v20;
      v23 = v20 == 0;
    if ( !v23 )
      v17 = __PAIR__(a7, a4);
      if ( v20[4] )
        v14 = (void (__fastcall *)(int, unsigned int, _DWORD, _DWORD))v20[5];
        v15 = (int)(v20 + 2);
        v16 = HIDWORD(v29);
        goto LABEL_23;
LABEL_27:
      sub_DA7654();
LABEL_24:
  v26 = (int *)(*(_QWORD *)(v7 + 220) >> 32);
  v25 = (int *)*(_QWORD *)(v7 + 220);
  for ( i = 0;
        v26 != v25;
        i |= (*(int (__cdecl **)(int, _DWORD, _DWORD, unsigned int))(*(_DWORD *)v27 + 40))(v27, HIDWORD(v29), v29, v30) )
    v27 = *v25;
    v25 += 2;
  return i & 1;
}


void __fastcall ScreenController::registerSliderChangedEventHandler(int a1, unsigned int a2, int a3)
{
  ScreenController::registerSliderChangedEventHandler(a1, a2, a3);
}


signed int __fastcall ScreenController::bindForGlobal(int a1, int *a2, int a3)
{
  char v4; // [sp+4h] [bp-14h]@1
  int v5; // [sp+Ch] [bp-Ch]@1

  v5 = *a2;
  return std::_Hashtable<unsigned int,std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>,std::allocator<std::pair<unsigned int const,std::function<void ()(std::string const&,UIPropertyBag &)>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<unsigned int,std::function<void ()(std::string const&,UIPropertyBag &)>&>(
           &v4,
           a1 + 288,
           &v5,
           a3);
}
