

void __fastcall InputMapping::getButtonDifference(__int64 this, int a2)
{
  int v2; // r8@1
  int v3; // r10@1
  int v4; // r9@1
  unsigned int v5; // r0@1
  int v6; // r5@3
  int *v7; // r4@3
  int **i; // r7@4
  int **v9; // r11@4
  int **v10; // r4@6
  int **j; // r7@6
  int **v12; // r4@8
  int **k; // r7@8
  int **v14; // r4@10
  int **l; // r7@10
  int **v16; // r4@18
  int **m; // r7@18
  int **v18; // r4@20
  int **n; // r7@20
  int **v20; // r4@22
  int **ii; // r7@22
  int **v22; // r4@24
  int **jj; // r7@24
  int **v24; // r4@26
  int **kk; // r7@26
  int **v26; // r4@28
  int **ll; // r7@28
  int **v28; // r4@30
  int **mm; // r7@30
  int **v30; // r4@32
  int **nn; // r7@32
  int **v32; // r4@34
  int **i1; // r7@34
  int **v34; // r4@36
  int **i2; // r7@36
  int **v36; // r4@38
  int **i3; // r7@38
  int **v38; // r5@41
  int **i4; // r6@41
  int **v40; // r5@43
  int **i5; // r6@43
  int **v42; // r5@45
  int **i6; // r6@45
  int **v44; // r5@47
  int **i7; // r6@47
  int **v46; // r5@55
  int **i8; // r6@55
  int **v48; // r5@57
  int **i9; // r6@57
  int **v50; // r5@59
  int **i10; // r6@59
  int **v52; // r5@61
  int **i11; // r6@61
  int **v54; // r5@63
  int **i12; // r6@63
  int **v56; // r5@65
  int **i13; // r6@65
  int **v58; // r5@67
  int **i14; // r6@67
  int **v60; // r5@69
  int **i15; // r6@69
  int **v62; // r5@71
  int **i16; // r6@71
  int **v64; // r5@73
  int **i17; // r6@73
  int **v66; // r5@75
  int **i18; // r6@75
  int v68; // r6@77
  unsigned int v69; // r4@77
  _DWORD *v70; // r0@78
  int *v71; // r0@81
  int *v72; // r0@82
  unsigned int *v73; // r2@87
  signed int v74; // r1@89
  void *v75; // r5@95
  int v76; // r1@95
  void *v77; // r0@95
  char v78; // [sp+4h] [bp-4Ch]@5
  void *ptr; // [sp+Ch] [bp-44h]@4
  unsigned int v80; // [sp+10h] [bp-40h]@1
  int v81; // [sp+14h] [bp-3Ch]@1
  int v82; // [sp+18h] [bp-38h]@1
  signed int v83; // [sp+1Ch] [bp-34h]@1
  int v84; // [sp+20h] [bp-30h]@1
  int v85; // [sp+24h] [bp-2Ch]@98

  v2 = this;
  v81 = 0;
  v82 = 0;
  v3 = HIDWORD(this);
  v83 = 1065353216;
  v84 = 0;
  LODWORD(this) = &v83;
  v4 = a2;
  v5 = sub_21E6254(*(double *)&this);
  v80 = v5;
  if ( v5 == 1 )
  {
    v85 = 0;
    v7 = &v85;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = (int *)operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  ptr = v7;
  v9 = (int **)(*(_QWORD *)v3 >> 32);
  for ( i = (int **)*(_QWORD *)v3; v9 != i; i += 3 )
    std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<std::string const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
      (int *)&v78,
      (unsigned __int64 *)&ptr,
      i);
  v10 = (int **)(*(_QWORD *)(v3 + 12) >> 32);
  for ( j = (int **)*(_QWORD *)(v3 + 12); v10 != j; j += 2 )
      j);
  v12 = (int **)(*(_QWORD *)(v3 + 64) >> 32);
  for ( k = (int **)*(_QWORD *)(v3 + 64); v12 != k; k += 19 )
      k);
  v14 = (int **)(*(_QWORD *)(v3 + 52) >> 32);
  for ( l = (int **)*(_QWORD *)(v3 + 52); v14 != l; l += 18 )
      l);
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 84) - 12) )
      (int **)(v3 + 84));
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 80) - 12) )
      (int **)(v3 + 80));
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 76) - 12) )
      (int **)(v3 + 76));
  v16 = (int **)(*(_QWORD *)(v3 + 112) >> 32);
  for ( m = (int **)*(_QWORD *)(v3 + 112); v16 != m; m += 3 )
      m);
  v18 = (int **)(*(_QWORD *)(v3 + 136) >> 32);
  for ( n = (int **)*(_QWORD *)(v3 + 136); v18 != n; n += 3 )
      n);
  v20 = (int **)(*(_QWORD *)(v3 + 164) >> 32);
  for ( ii = (int **)*(_QWORD *)(v3 + 164); v20 != ii; ii += 3 )
      ii);
  v22 = (int **)(*(_QWORD *)(v3 + 188) >> 32);
  for ( jj = (int **)*(_QWORD *)(v3 + 188); v22 != jj; jj += 3 )
      jj);
  v24 = (int **)(*(_QWORD *)(v3 + 240) >> 32);
  for ( kk = (int **)*(_QWORD *)(v3 + 240); v24 != kk; kk += 2 )
      kk);
  v26 = (int **)(*(_QWORD *)(v3 + 216) >> 32);
  for ( ll = (int **)*(_QWORD *)(v3 + 216); v26 != ll; ll += 2 )
      ll);
  v28 = (int **)(*(_QWORD *)(v3 + 228) >> 32);
  for ( mm = (int **)*(_QWORD *)(v3 + 228); v28 != mm; mm += 2 )
      mm);
  v30 = (int **)(*(_QWORD *)(v3 + 252) >> 32);
  for ( nn = (int **)*(_QWORD *)(v3 + 252); v30 != nn; nn += 2 )
      nn);
  v32 = (int **)(*(_QWORD *)(v3 + 276) >> 32);
  for ( i1 = (int **)*(_QWORD *)(v3 + 276); v32 != i1; i1 += 4 )
      i1);
  v34 = (int **)(*(_QWORD *)(v3 + 264) >> 32);
  for ( i2 = (int **)*(_QWORD *)(v3 + 264); v34 != i2; i2 += 2 )
      i2);
  v36 = (int **)(*(_QWORD *)(v3 + 288) >> 32);
  for ( i3 = (int **)*(_QWORD *)(v3 + 288); v36 != i3; i3 += 2 )
      i3);
  if ( v4 )
    v38 = (int **)(*(_QWORD *)v4 >> 32);
    for ( i4 = (int **)*(_QWORD *)v4; v38 != i4; i4 += 3 )
      std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_erase(
        (unsigned __int64 *)&ptr,
        i4);
    v40 = (int **)(*(_QWORD *)(v4 + 12) >> 32);
    for ( i5 = (int **)*(_QWORD *)(v4 + 12); v40 != i5; i5 += 2 )
        i5);
    v42 = (int **)(*(_QWORD *)(v4 + 64) >> 32);
    for ( i6 = (int **)*(_QWORD *)(v4 + 64); v42 != i6; i6 += 19 )
        i6);
    v44 = (int **)(*(_QWORD *)(v4 + 52) >> 32);
    for ( i7 = (int **)*(_QWORD *)(v4 + 52); v44 != i7; i7 += 18 )
        i7);
    if ( *(_DWORD *)(*(_DWORD *)(v4 + 84) - 12) )
        (int **)(v4 + 84));
    if ( *(_DWORD *)(*(_DWORD *)(v4 + 80) - 12) )
        (int **)(v4 + 80));
    if ( *(_DWORD *)(*(_DWORD *)(v4 + 76) - 12) )
        (int **)(v4 + 76));
    v46 = (int **)(*(_QWORD *)(v4 + 112) >> 32);
    for ( i8 = (int **)*(_QWORD *)(v4 + 112); v46 != i8; i8 += 3 )
        i8);
    v48 = (int **)(*(_QWORD *)(v4 + 136) >> 32);
    for ( i9 = (int **)*(_QWORD *)(v4 + 136); v48 != i9; i9 += 3 )
        i9);
    v50 = (int **)(*(_QWORD *)(v4 + 164) >> 32);
    for ( i10 = (int **)*(_QWORD *)(v4 + 164); v50 != i10; i10 += 3 )
        i10);
    v52 = (int **)(*(_QWORD *)(v4 + 188) >> 32);
    for ( i11 = (int **)*(_QWORD *)(v4 + 188); v52 != i11; i11 += 3 )
        i11);
    v54 = (int **)(*(_QWORD *)(v4 + 240) >> 32);
    for ( i12 = (int **)*(_QWORD *)(v4 + 240); v54 != i12; i12 += 2 )
        i12);
    v56 = (int **)(*(_QWORD *)(v4 + 216) >> 32);
    for ( i13 = (int **)*(_QWORD *)(v4 + 216); v56 != i13; i13 += 2 )
        i13);
    v58 = (int **)(*(_QWORD *)(v4 + 228) >> 32);
    for ( i14 = (int **)*(_QWORD *)(v4 + 228); v58 != i14; i14 += 2 )
        i14);
    v60 = (int **)(*(_QWORD *)(v4 + 252) >> 32);
    for ( i15 = (int **)*(_QWORD *)(v4 + 252); v60 != i15; i15 += 2 )
        i15);
    v62 = (int **)(*(_QWORD *)(v4 + 276) >> 32);
    for ( i16 = (int **)*(_QWORD *)(v4 + 276); v62 != i16; i16 += 4 )
        i16);
    v64 = (int **)(*(_QWORD *)(v4 + 264) >> 32);
    for ( i17 = (int **)*(_QWORD *)(v4 + 264); v64 != i17; i17 += 2 )
        i17);
    v66 = (int **)(*(_QWORD *)(v4 + 288) >> 32);
    for ( i18 = (int **)*(_QWORD *)(v4 + 288); v66 != i18; i18 += 2 )
        i18);
  v68 = v81;
  v69 = 0;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  if ( v68 )
    v70 = (_DWORD *)v68;
    do
    {
      v70 = (_DWORD *)*v70;
      ++v69;
    }
    while ( v70 );
    if ( v69 >= 0x40000000 )
    v71 = (int *)operator new(4 * v69);
    *(_DWORD *)v2 = v71;
    *(_DWORD *)(v2 + 8) = &v71[v69];
      v72 = sub_21E8AF4(v71, (int *)(v68 + 4));
      v68 = *(_DWORD *)v68;
      v71 = v72 + 1;
    while ( v68 );
    v68 = v81;
    v69 = (unsigned int)v71;
    *(_DWORD *)v2 = 0;
    *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 4) = v69;
  while ( v68 )
    v75 = (void *)v68;
    v76 = *(_QWORD *)v68 >> 32;
    v68 = *(_QWORD *)v68;
    v77 = (void *)(v76 - 12);
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v73 = (unsigned int *)(v76 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
      }
      else
        v74 = (*v73)--;
      if ( v74 <= 0 )
        j_j_j_j__ZdlPv_9(v77);
    operator delete(v75);
  _aeabi_memclr4(ptr, 4 * v80);
  if ( ptr )
    if ( &v85 != ptr )
      operator delete(ptr);
}


int __fastcall InputMapping::InputMapping(int a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r5@1
  int v3; // r9@1

  v2 = a2;
  v3 = a1;
  std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::vector(a1, a2);
  MouseInputMapping::MouseInputMapping(v3 + 12, (unsigned __int64 *)((char *)v2 + 12));
  TouchInputMapping::TouchInputMapping(v3 + 52, (unsigned __int64 *)((char *)v2 + 52));
  GameControllerInputMapping::GameControllerInputMapping(v3 + 112, v2 + 14);
  GameControllerInputMapping::GameControllerInputMapping(v3 + 164, (unsigned __int64 *)((char *)v2 + 164));
  GGVInputMapping::GGVInputMapping(v3 + 216, v2 + 27);
  std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::vector(v3 + 264, v2 + 33);
  std::vector<ChordButtonMapping,std::allocator<ChordButtonMapping>>::vector(
    v3 + 276,
    (unsigned __int64 *)((char *)v2 + 276));
  std::vector<DeviceButtonMapping,std::allocator<DeviceButtonMapping>>::vector(v3 + 288, v2 + 36);
  return v3;
}


void __fastcall InputMapping::getStickDifference(__int64 this, int a2)
{
  InputMapping::getStickDifference(this, a2);
}


void __fastcall InputMapping::registerNames(InputMapping *this, NameRegistry *a2)
{
  InputMapping::registerNames(this, a2);
}


int __fastcall InputMapping::InputMapping(int a1)
{
  int v1; // r4@1

  v1 = a1;
  _aeabi_memclr4(a1, 48);
  TouchInputMapping::TouchInputMapping((TouchInputMapping *)(v1 + 52));
  _aeabi_memclr4(v1 + 112, 48);
  _aeabi_memclr4(v1 + 164, 48);
  _aeabi_memclr4(v1 + 216, 84);
  return v1;
}


int __fastcall InputMapping::InputMapping(int a1, unsigned __int64 *a2, unsigned __int64 *a3, unsigned __int64 *a4, unsigned __int64 *a5, unsigned __int64 *a6, unsigned __int64 *a7, __int64 *a8, unsigned __int64 *a9, __int64 *a10)
{
  unsigned __int64 *v10; // r7@1
  int v11; // r4@1
  unsigned __int64 *v12; // r11@1
  unsigned __int64 *v13; // r6@1
  signed int v14; // r1@1
  int *v15; // r0@1
  unsigned int v16; // r5@1
  int v17; // r5@4
  int v18; // r7@4
  unsigned __int64 v19; // kr00_8@4
  int *v20; // r0@5
  char v21; // r1@5
  int v22; // r2@5
  __int64 v23; // r0@7
  char *v24; // r5@7
  signed int v25; // r0@7
  unsigned int v26; // r6@7
  __int64 v27; // kr08_8@10
  int v28; // r7@11
  int *v29; // r0@11
  int *v30; // r0@12
  int v31; // r1@12
  __int64 v32; // r0@14
  char *v33; // r5@14
  signed int v34; // r0@14
  unsigned int v35; // r6@14
  __int64 v36; // r6@17
  int v37; // r8@18
  int *v38; // r0@18
  int *v39; // r0@19
  int v40; // r1@19

  v10 = a2;
  v11 = a1;
  v12 = a4;
  v13 = a3;
  v14 = (*a2 >> 32) - *a2;
  v15 = 0;
  *(_DWORD *)v11 = 0;
  *(_DWORD *)(v11 + 4) = 0;
  v16 = -1431655765 * (v14 >> 2);
  *(_DWORD *)(v11 + 8) = 0;
  if ( v14 )
  {
    if ( v16 >= 0x15555556 )
      goto LABEL_22;
    v15 = (int *)operator new(v14);
  }
  *(_DWORD *)v11 = v15;
  *(_DWORD *)(v11 + 4) = v15;
  *(_DWORD *)(v11 + 8) = &v15[3 * v16];
  v19 = *v10;
  v18 = *v10 >> 32;
  v17 = v19;
  while ( v17 != v18 )
    v20 = sub_21E8AF4(v15, (int *)v17);
    v21 = *(_BYTE *)(v17 + 8);
    v22 = *(_DWORD *)(v17 + 4);
    v17 += 12;
    *((_BYTE *)v20 + 8) = v21;
    v20[1] = v22;
    v15 = v20 + 3;
  MouseInputMapping::MouseInputMapping(v11 + 12, v13);
  TouchInputMapping::TouchInputMapping(v11 + 52, v12);
  GameControllerInputMapping::GameControllerInputMapping(v11 + 112, a5);
  GameControllerInputMapping::GameControllerInputMapping(v11 + 164, a6);
  GGVInputMapping::GGVInputMapping(v11 + 216, a7);
  v23 = *a8;
  v24 = 0;
  *(_DWORD *)(v11 + 264) = 0;
  *(_DWORD *)(v11 + 268) = 0;
  v25 = HIDWORD(v23) - v23;
  *(_DWORD *)(v11 + 272) = 0;
  v26 = v25 >> 3;
  if ( v25 >> 3 )
    if ( v26 >= 0x20000000 )
    v24 = (char *)operator new(v25);
  *(_DWORD *)(v11 + 264) = v24;
  *(_DWORD *)(v11 + 268) = v24;
  *(_DWORD *)(v11 + 272) = &v24[8 * v26];
  v27 = *a8;
  if ( (_DWORD)v27 != HIDWORD(v27) )
    v28 = v27;
    v29 = (int *)v24;
    do
    {
      v30 = sub_21E8AF4(v29, (int *)v28);
      v31 = *(_DWORD *)(v28 + 4);
      v28 += 8;
      v30[1] = v31;
      v29 = v30 + 2;
    }
    while ( v28 != HIDWORD(v27) );
    v24 += ((HIDWORD(v27) - 8 - v27) & 0xFFFFFFF8) + 8;
  std::vector<ChordButtonMapping,std::allocator<ChordButtonMapping>>::vector(v11 + 276, a9);
  v32 = *a10;
  v33 = 0;
  *(_DWORD *)(v11 + 288) = 0;
  *(_DWORD *)(v11 + 292) = 0;
  v34 = HIDWORD(v32) - v32;
  *(_DWORD *)(v11 + 296) = 0;
  v35 = v34 >> 3;
  if ( v34 >> 3 )
    if ( v35 < 0x20000000 )
      v33 = (char *)operator new(v34);
      goto LABEL_17;
LABEL_22:
    sub_21E57F4();
LABEL_17:
  *(_DWORD *)(v11 + 288) = v33;
  *(_DWORD *)(v11 + 292) = v33;
  *(_DWORD *)(v11 + 296) = &v33[8 * v35];
  v36 = *a10;
  if ( (_DWORD)v36 != HIDWORD(v36) )
    v37 = -(signed int)v36;
    v38 = (int *)v33;
      v39 = sub_21E8AF4(v38, (int *)v36);
      v40 = *(_DWORD *)(v36 + 4);
      LODWORD(v36) = v36 + 8;
      v39[1] = v40;
      v38 = v39 + 2;
    while ( (_DWORD)v36 != HIDWORD(v36) );
    v33 += ((HIDWORD(v36) - 8 + v37) & 0xFFFFFFF8) + 8;
  return v11;
}


void __fastcall InputMapping::registerNames(InputMapping *this, NameRegistry *a2)
{
  unsigned __int64 *v2; // r5@1
  __int64 v3; // r0@1
  int **v4; // r4@1
  int **v5; // r7@1
  int **v6; // r6@2
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  int *v9; // r0@14
  int **v10; // [sp+4h] [bp-2Ch]@1
  int **v11; // [sp+8h] [bp-28h]@1

  v2 = (unsigned __int64 *)a2;
  HIDWORD(v3) = this;
  LODWORD(v3) = &v10;
  InputMapping::getButtonDifference(v3, 0);
  v5 = v11;
  v4 = v10;
  if ( v10 != v11 )
  {
    v6 = v10;
    do
    {
      NameRegistry::registerName(v2, v6);
      ++v6;
    }
    while ( v5 != v6 );
    if ( v4 != v5 )
      do
      {
        v9 = *v4 - 3;
        if ( v9 != &dword_28898C0 )
        {
          v7 = (unsigned int *)(*v4 - 1);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        }
        ++v4;
      }
      while ( v4 != v5 );
      v4 = v10;
  }
  if ( v4 )
    operator delete(v4);
}


InputMapping *__fastcall InputMapping::~InputMapping(InputMapping *this)
{
  InputMapping *v1; // r11@1
  __int64 v2; // kr00_8@1
  _DWORD *v3; // r6@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  _DWORD *v7; // r10@13
  _DWORD *v8; // r7@13
  _DWORD *v9; // r6@14
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  int *v12; // r0@23
  __int64 v13; // kr08_8@25
  _DWORD *v14; // r6@26
  unsigned int *v15; // r2@27
  signed int v16; // r1@29
  int *v17; // r0@35
  __int64 v18; // kr10_8@37
  _DWORD *v19; // r6@38
  unsigned int *v20; // r2@39
  signed int v21; // r1@41
  int *v22; // r0@47
  TouchTextButtonBinding *v23; // r4@49
  TouchTextButtonBinding *v24; // r5@49
  TouchTextButtonBinding *v25; // r0@50
  __int64 v26; // kr18_8@52
  _DWORD *v27; // r6@53
  unsigned int *v28; // r2@54
  signed int v29; // r1@56
  int *v30; // r0@62
  _DWORD *v31; // r10@64
  _DWORD *v32; // r7@64
  _DWORD *v33; // r6@65
  unsigned int *v34; // r2@66
  signed int v35; // r1@68
  int *v36; // r0@74
  __int64 v37; // kr20_8@76
  _DWORD *v38; // r6@77
  unsigned int *v39; // r2@78
  signed int v40; // r1@80
  int *v41; // r0@86
  __int64 v42; // kr28_8@88
  int v43; // r6@89
  unsigned int *v44; // r2@90
  signed int v45; // r1@92
  int v46; // r1@98
  void *v47; // r0@98
  _DWORD *v48; // r10@100
  _DWORD *v49; // r7@100
  _DWORD *v50; // r5@101
  unsigned int *v51; // r2@102
  signed int v52; // r1@104
  int *v53; // r0@110
  __int64 v54; // kr30_8@112
  _DWORD *v55; // r5@113
  unsigned int *v56; // r2@114
  signed int v57; // r1@116
  int *v58; // r0@122
  __int64 v59; // kr38_8@124
  int v60; // r5@125
  unsigned int *v61; // r2@126
  signed int v62; // r1@128
  int v63; // r1@134
  void *v64; // r0@134
  _DWORD *v65; // r4@136
  _DWORD *v66; // r8@136
  char *v67; // r1@137
  _DWORD *v68; // r5@137
  unsigned int *v69; // r2@138
  signed int v70; // r6@140
  char *v71; // r6@144
  int *v72; // r0@145
  __int64 v73; // kr40_8@147
  _DWORD *v74; // r5@148
  unsigned int *v75; // r2@149
  signed int v76; // r1@151
  int *v77; // r0@157
  __int64 v78; // kr48_8@159
  _DWORD *v79; // r5@160
  unsigned int *v80; // r2@161
  signed int v81; // r1@163
  int *v82; // r0@169
  __int64 v83; // kr50_8@171
  _DWORD *v84; // r5@172
  unsigned int *v85; // r2@173
  signed int v86; // r1@175
  int *v87; // r0@181
  __int64 v88; // kr58_8@183
  _DWORD *v89; // r5@184
  unsigned int *v90; // r2@185
  signed int v91; // r1@187
  int *v92; // r0@193
  __int64 v93; // kr60_8@195
  _DWORD *v94; // r5@195
  _DWORD *v95; // r8@195
  _DWORD *v96; // r7@196
  unsigned int *v97; // r2@197
  signed int v98; // r1@199
  int *v99; // r0@205
  _DWORD *v100; // r5@207
  unsigned int *v101; // r2@209
  signed int v102; // r1@211
  int *v103; // r0@217
  void *v104; // r0@223
  void *v105; // r5@225
  void *v106; // r7@225
  unsigned int *v107; // r2@227
  signed int v108; // r1@229
  int *v109; // r0@235
  void *v110; // r5@240
  void *v111; // r7@240
  unsigned int *v112; // r2@242
  signed int v113; // r1@244
  int *v114; // r0@250
  char v116; // [sp+18h] [bp-28h]@137

  v1 = this;
  v2 = *(_QWORD *)this;
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (_DWORD *)v2;
    do
    {
      v6 = (int *)(*v3 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*v3 - 4);
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
      v3 += 3;
    }
    while ( v3 != (_DWORD *)HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 1) = v2;
  v7 = (_DWORD *)*((_DWORD *)v1 + 3);
  v8 = (_DWORD *)*((_DWORD *)v1 + 4);
  if ( v8 != v7 )
    v9 = (_DWORD *)*((_DWORD *)v1 + 3);
      v12 = (int *)(*v9 - 12);
      if ( v12 != &dword_28898C0 )
        v10 = (unsigned int *)(*v9 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v9 += 2;
    while ( v9 != v8 );
  *((_DWORD *)v1 + 4) = v7;
  v13 = *((_QWORD *)v1 + 3);
  if ( HIDWORD(v13) != (_DWORD)v13 )
    v14 = (_DWORD *)v13;
      v17 = (int *)(*v14 - 12);
      if ( v17 != &dword_28898C0 )
        v15 = (unsigned int *)(*v14 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      ++v14;
    while ( v14 != (_DWORD *)HIDWORD(v13) );
  *((_DWORD *)v1 + 7) = v13;
  v18 = *(_QWORD *)((char *)v1 + 36);
  if ( HIDWORD(v18) != (_DWORD)v18 )
    v19 = (_DWORD *)v18;
      v22 = (int *)(*v19 - 12);
      if ( v22 != &dword_28898C0 )
        v20 = (unsigned int *)(*v19 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      ++v19;
    while ( v19 != (_DWORD *)HIDWORD(v18) );
  *((_DWORD *)v1 + 10) = v18;
  v23 = (TouchTextButtonBinding *)*((_DWORD *)v1 + 13);
  v24 = (TouchTextButtonBinding *)*((_DWORD *)v1 + 14);
  if ( v24 != v23 )
    v25 = (TouchTextButtonBinding *)*((_DWORD *)v1 + 13);
      v25 = (TouchTextButtonBinding *)((char *)TouchTextButtonBinding::~TouchTextButtonBinding(v25) + 72);
    while ( v24 != v25 );
  *((_DWORD *)v1 + 14) = v23;
  std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_erase_at_end(
    (int)v1 + 64,
    *((_DWORD *)v1 + 16));
  v26 = *((_QWORD *)v1 + 12);
  if ( HIDWORD(v26) != (_DWORD)v26 )
    v27 = (_DWORD *)v26;
      v30 = (int *)(*v27 - 12);
      if ( v30 != &dword_28898C0 )
        v28 = (unsigned int *)(*v27 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      ++v27;
    while ( v27 != (_DWORD *)HIDWORD(v26) );
  *((_DWORD *)v1 + 25) = v26;
  v31 = (_DWORD *)*((_DWORD *)v1 + 28);
  v32 = (_DWORD *)*((_DWORD *)v1 + 29);
  if ( v32 != v31 )
    v33 = (_DWORD *)*((_DWORD *)v1 + 28);
      v36 = (int *)(*v33 - 12);
      if ( v36 != &dword_28898C0 )
        v34 = (unsigned int *)(*v33 - 4);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j__ZdlPv_9(v36);
      v33 += 3;
    while ( v33 != v32 );
  *((_DWORD *)v1 + 29) = v31;
  *((_DWORD *)v1 + 32) = *((_DWORD *)v1 + 31);
  v37 = *((_QWORD *)v1 + 17);
  if ( HIDWORD(v37) != (_DWORD)v37 )
    v38 = (_DWORD *)v37;
      v41 = (int *)(*v38 - 12);
      if ( v41 != &dword_28898C0 )
        v39 = (unsigned int *)(*v38 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j__ZdlPv_9(v41);
      v38 += 3;
    while ( v38 != (_DWORD *)HIDWORD(v37) );
  *((_DWORD *)v1 + 35) = v37;
  v42 = *(_QWORD *)((char *)v1 + 148);
  if ( HIDWORD(v42) != (_DWORD)v42 )
    v43 = v42;
      v46 = *(_DWORD *)(v43 + 8);
      v47 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v46 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j__ZdlPv_9(v47);
      v43 += 16;
    while ( v43 != HIDWORD(v42) );
  *((_DWORD *)v1 + 38) = v42;
  v48 = (_DWORD *)*((_DWORD *)v1 + 41);
  v49 = (_DWORD *)*((_DWORD *)v1 + 42);
  if ( v49 != v48 )
    v50 = (_DWORD *)*((_DWORD *)v1 + 41);
      v53 = (int *)(*v50 - 12);
      if ( v53 != &dword_28898C0 )
        v51 = (unsigned int *)(*v50 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
      v50 += 3;
    while ( v50 != v49 );
  *((_DWORD *)v1 + 42) = v48;
  *((_DWORD *)v1 + 45) = *((_DWORD *)v1 + 44);
  v54 = *(_QWORD *)((char *)v1 + 188);
  if ( HIDWORD(v54) != (_DWORD)v54 )
    v55 = (_DWORD *)v54;
      v58 = (int *)(*v55 - 12);
      if ( v58 != &dword_28898C0 )
        v56 = (unsigned int *)(*v55 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j__ZdlPv_9(v58);
      v55 += 3;
    while ( v55 != (_DWORD *)HIDWORD(v54) );
  *((_DWORD *)v1 + 48) = v54;
  v59 = *((_QWORD *)v1 + 25);
  if ( HIDWORD(v59) != (_DWORD)v59 )
    v60 = v59;
      v63 = *(_DWORD *)(v60 + 8);
      v64 = (void *)(v63 - 12);
      if ( (int *)(v63 - 12) != &dword_28898C0 )
        v61 = (unsigned int *)(v63 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j__ZdlPv_9(v64);
      v60 += 16;
    while ( v60 != HIDWORD(v59) );
  *((_DWORD *)v1 + 51) = v59;
  v65 = (_DWORD *)*((_DWORD *)v1 + 54);
  v66 = (_DWORD *)*((_DWORD *)v1 + 55);
  if ( v66 != v65 )
    v67 = &v116;
    v68 = (_DWORD *)*((_DWORD *)v1 + 54);
      v72 = (int *)(*v68 - 12);
      if ( v72 != &dword_28898C0 )
        v69 = (unsigned int *)(*v68 - 4);
            v70 = __ldrex(v69);
          while ( __strex(v70 - 1, v69) );
          v70 = (*v69)--;
        if ( v70 <= 0 )
          v71 = v67;
          j_j_j_j__ZdlPv_9(v72);
          v67 = v71;
      v68 += 2;
    while ( v68 != v66 );
  *((_DWORD *)v1 + 55) = v65;
  v73 = *(_QWORD *)((char *)v1 + 228);
  if ( HIDWORD(v73) != (_DWORD)v73 )
    v74 = (_DWORD *)v73;
      v77 = (int *)(*v74 - 12);
      if ( v77 != &dword_28898C0 )
        v75 = (unsigned int *)(*v74 - 4);
            v76 = __ldrex(v75);
          while ( __strex(v76 - 1, v75) );
          v76 = (*v75)--;
        if ( v76 <= 0 )
          j_j_j_j__ZdlPv_9(v77);
      v74 += 2;
    while ( v74 != (_DWORD *)HIDWORD(v73) );
  *((_DWORD *)v1 + 58) = v73;
  v78 = *((_QWORD *)v1 + 30);
  if ( HIDWORD(v78) != (_DWORD)v78 )
    v79 = (_DWORD *)v78;
      v82 = (int *)(*v79 - 12);
      if ( v82 != &dword_28898C0 )
        v80 = (unsigned int *)(*v79 - 4);
            v81 = __ldrex(v80);
          while ( __strex(v81 - 1, v80) );
          v81 = (*v80)--;
        if ( v81 <= 0 )
          j_j_j_j__ZdlPv_9(v82);
      v79 += 2;
    while ( v79 != (_DWORD *)HIDWORD(v78) );
  *((_DWORD *)v1 + 61) = v78;
  v83 = *(_QWORD *)((char *)v1 + 252);
  if ( HIDWORD(v83) != (_DWORD)v83 )
    v84 = (_DWORD *)v83;
      v87 = (int *)(*v84 - 12);
      if ( v87 != &dword_28898C0 )
        v85 = (unsigned int *)(*v84 - 4);
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 <= 0 )
          j_j_j_j__ZdlPv_9(v87);
      v84 += 2;
    while ( v84 != (_DWORD *)HIDWORD(v83) );
  *((_DWORD *)v1 + 64) = v83;
  v88 = *((_QWORD *)v1 + 33);
  if ( HIDWORD(v88) != (_DWORD)v88 )
    v89 = (_DWORD *)v88;
      v92 = (int *)(*v89 - 12);
      if ( v92 != &dword_28898C0 )
        v90 = (unsigned int *)(*v89 - 4);
            v91 = __ldrex(v90);
          while ( __strex(v91 - 1, v90) );
          v91 = (*v90)--;
        if ( v91 <= 0 )
          j_j_j_j__ZdlPv_9(v92);
      v89 += 2;
    while ( v89 != (_DWORD *)HIDWORD(v88) );
  *((_DWORD *)v1 + 67) = v88;
  v93 = *(_QWORD *)((char *)v1 + 276);
  std::_Destroy_aux<false>::__destroy<ChordButtonMapping *>(*(_QWORD *)((char *)v1 + 276), SHIDWORD(v93));
  *((_DWORD *)v1 + 70) = v93;
  v94 = (_DWORD *)(*((_QWORD *)v1 + 36) >> 32);
  v95 = (_DWORD *)*((_QWORD *)v1 + 36);
  if ( v94 == v95 )
    *((_DWORD *)v1 + 73) = v95;
  else
    v96 = (_DWORD *)*((_QWORD *)v1 + 36);
      v99 = (int *)(*v96 - 12);
      if ( v99 != &dword_28898C0 )
        v97 = (unsigned int *)(*v96 - 4);
            v98 = __ldrex(v97);
          while ( __strex(v98 - 1, v97) );
          v98 = (*v97)--;
        if ( v98 <= 0 )
          j_j_j_j__ZdlPv_9(v99);
      v96 += 2;
    while ( v96 != v94 );
    v100 = (_DWORD *)*((_DWORD *)v1 + 72);
    if ( v100 != v95 )
      do
        v103 = (int *)(*v100 - 12);
        if ( v103 != &dword_28898C0 )
          v101 = (unsigned int *)(*v100 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v102 = __ldrex(v101);
            while ( __strex(v102 - 1, v101) );
          }
          else
            v102 = (*v101)--;
          if ( v102 <= 0 )
            j_j_j_j__ZdlPv_9(v103);
        v100 += 2;
      while ( v100 != v95 );
      v95 = (_DWORD *)*((_DWORD *)v1 + 72);
  if ( v95 )
    operator delete(v95);
  std::_Destroy_aux<false>::__destroy<ChordButtonMapping *>(
    *(_QWORD *)((char *)v1 + 276),
    *(_QWORD *)((char *)v1 + 276) >> 32);
  v104 = (void *)*((_DWORD *)v1 + 69);
  if ( v104 )
    operator delete(v104);
  v105 = (void *)(*((_QWORD *)v1 + 33) >> 32);
  v106 = (void *)*((_QWORD *)v1 + 33);
  if ( v106 != v105 )
      v109 = (int *)(*(_DWORD *)v106 - 12);
      if ( v109 != &dword_28898C0 )
        v107 = (unsigned int *)(*(_DWORD *)v106 - 4);
            v108 = __ldrex(v107);
          while ( __strex(v108 - 1, v107) );
          v108 = (*v107)--;
        if ( v108 <= 0 )
          j_j_j_j__ZdlPv_9(v109);
      v106 = (char *)v106 + 8;
    while ( v106 != v105 );
    v106 = (void *)*((_DWORD *)v1 + 66);
  if ( v106 )
    operator delete(v106);
  GGVInputMapping::~GGVInputMapping((InputMapping *)((char *)v1 + 216));
  GameControllerInputMapping::~GameControllerInputMapping((InputMapping *)((char *)v1 + 164));
  GameControllerInputMapping::~GameControllerInputMapping((InputMapping *)((char *)v1 + 112));
  TouchInputMapping::~TouchInputMapping((InputMapping *)((char *)v1 + 52));
  MouseInputMapping::~MouseInputMapping((InputMapping *)((char *)v1 + 12));
  v111 = (void *)(*(_QWORD *)v1 >> 32);
  v110 = (void *)*(_QWORD *)v1;
  if ( v110 != v111 )
      v114 = (int *)(*(_DWORD *)v110 - 12);
      if ( v114 != &dword_28898C0 )
        v112 = (unsigned int *)(*(_DWORD *)v110 - 4);
            v113 = __ldrex(v112);
          while ( __strex(v113 - 1, v112) );
          v113 = (*v112)--;
        if ( v113 <= 0 )
          j_j_j_j__ZdlPv_9(v114);
      v110 = (char *)v110 + 12;
    while ( v110 != v111 );
    v110 = *(void **)v1;
  if ( v110 )
    operator delete(v110);
  return v1;
}


void __fastcall InputMapping::getButtonDifference(__int64 this, int a2)
{
  InputMapping::getButtonDifference(this, a2);
}


void __fastcall InputMapping::getStickDifference(__int64 this, int a2)
{
  int v2; // r8@1
  int v3; // r10@1
  int v4; // r9@1
  unsigned int v5; // r0@1
  int v6; // r5@3
  int *v7; // r4@3
  unsigned int *i; // r7@4
  unsigned int *v9; // r11@4
  unsigned int *v10; // r4@6
  unsigned int *j; // r7@6
  unsigned int *v12; // r5@9
  unsigned int *k; // r6@9
  unsigned int *v14; // r5@11
  unsigned int *l; // r6@11
  _DWORD *v16; // r5@13
  unsigned int v17; // r4@13
  _DWORD *v18; // r0@14
  _DWORD *v19; // r0@17
  _DWORD *v20; // r4@22
  char v21; // [sp+4h] [bp-4Ch]@5
  void *v22; // [sp+Ch] [bp-44h]@4
  unsigned int v23; // [sp+10h] [bp-40h]@1
  void *ptr; // [sp+14h] [bp-3Ch]@1
  int v25; // [sp+18h] [bp-38h]@1
  signed int v26; // [sp+1Ch] [bp-34h]@1
  int v27; // [sp+20h] [bp-30h]@1
  int v28; // [sp+24h] [bp-2Ch]@24

  v2 = this;
  ptr = 0;
  v25 = 0;
  v3 = HIDWORD(this);
  v26 = 1065353216;
  v27 = 0;
  LODWORD(this) = &v26;
  v4 = a2;
  v5 = sub_21E6254(*(double *)&this);
  v23 = v5;
  if ( v5 == 1 )
  {
    v28 = 0;
    v7 = &v28;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = (int *)operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  v22 = v7;
  v9 = (unsigned int *)(*(_QWORD *)(v3 + 124) >> 32);
  for ( i = (unsigned int *)*(_QWORD *)(v3 + 124); v9 != i; i += 3 )
    std::_Hashtable<DirectionId,DirectionId,std::allocator<DirectionId>,std::__detail::_Identity,std::equal_to<DirectionId>,DirectionIdHash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<DirectionId const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<DirectionId,true>>>>(
      &v21,
      (unsigned __int64 *)&v22,
      i);
  v10 = (unsigned int *)(*(_QWORD *)(v3 + 176) >> 32);
  for ( j = (unsigned int *)*(_QWORD *)(v3 + 176); v10 != j; j += 3 )
      j);
  if ( v4 )
    v12 = (unsigned int *)(*(_QWORD *)(v4 + 124) >> 32);
    for ( k = (unsigned int *)*(_QWORD *)(v4 + 124); v12 != k; k += 3 )
      std::unordered_set<DirectionId,DirectionIdHash,std::equal_to<DirectionId>,std::allocator<DirectionId>>::erase(
        (unsigned __int64 *)&v22,
        k);
    v14 = (unsigned int *)(*(_QWORD *)(v4 + 176) >> 32);
    for ( l = (unsigned int *)*(_QWORD *)(v4 + 176); v14 != l; l += 3 )
        l);
  v16 = ptr;
  v17 = 0;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  if ( v16 )
    v18 = v16;
    do
    {
      v18 = (_DWORD *)*v18;
      ++v17;
    }
    while ( v18 );
    if ( v17 >= 0x40000000 )
    v19 = operator new(4 * v17);
    *(_DWORD *)v2 = v19;
    *(_DWORD *)(v2 + 8) = &v19[v17];
      *v19 = v16[1];
      ++v19;
      v16 = (_DWORD *)*v16;
    while ( v16 );
    v16 = ptr;
    v17 = (unsigned int)v19;
    *(_DWORD *)v2 = 0;
    *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 4) = v17;
      v20 = (_DWORD *)*v16;
      operator delete(v16);
      v16 = v20;
    while ( v20 );
  _aeabi_memclr4(v22, 4 * v23);
  if ( v22 )
    if ( &v28 != v22 )
      operator delete(v22);
}
