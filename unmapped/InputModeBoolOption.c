

int __fastcall InputModeBoolOption::getValue(int a1, unsigned int a2)
{
  unsigned int v2; // r4@1
  int v3; // r1@1
  int v4; // r0@1
  int *v5; // r2@1
  int v6; // r2@2
  bool v7; // zf@2

  v2 = a2;
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 68) + 4 * (a2 % (unsigned int)(*(_QWORD *)(a1 + 68) >> 32)));
  v4 = *(_DWORD *)v3;
  v5 = (int *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = *v5;
    v7 = v6 == v2;
    if ( v6 == v2 )
      v7 = *(_DWORD *)(v4 + 4) == v2;
    if ( v7 )
      break;
    v3 = v4;
    v5 = (int *)(*(_DWORD *)v4 + 12);
    v4 = *(_DWORD *)v4;
  }
  return *(_BYTE *)(*(_DWORD *)v3 + 8);
}


Option *__fastcall InputModeBoolOption::~InputModeBoolOption(InputModeBoolOption *this)
{
  InputModeBoolOption *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3
  void *v5; // r0@6
  void *v6; // r5@7
  char *v7; // r0@8

  v1 = this;
  *(_DWORD *)this = &off_26D9A50;
  v2 = (void *)*((_DWORD *)this + 26);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 12), 4 * (*((_QWORD *)v1 + 12) >> 32));
  *((_DWORD *)v1 + 26) = 0;
  *((_DWORD *)v1 + 27) = 0;
  v4 = (char *)*((_DWORD *)v1 + 24);
  if ( v4 && (char *)v1 + 120 != v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 19);
  if ( v5 )
      v6 = *(void **)v5;
      operator delete(v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 68), 4 * (*(_QWORD *)((char *)v1 + 68) >> 32));
  *((_DWORD *)v1 + 19) = 0;
  *((_DWORD *)v1 + 20) = 0;
  v7 = (char *)*((_DWORD *)v1 + 17);
  if ( v7 && (char *)v1 + 92 != v7 )
    operator delete(v7);
  return j_j_j__ZN6OptionD2Ev(v1);
}


int __fastcall InputModeBoolOption::InputModeBoolOption(int a1, unsigned int a2, unsigned int a3, int a4, int *a5, int *a6, char a7)
{
  int v7; // r11@1
  double v8; // r0@1
  double v9; // r0@1
  int v10; // r7@3
  void *v11; // r5@3
  unsigned int v12; // r0@4
  int v13; // r5@6
  void *v14; // r7@6
  int v15; // r6@7
  unsigned int v16; // r7@7
  int v17; // r10@7
  int v18; // r0@9
  int v19; // r8@10
  int v20; // r5@10
  bool v21; // zf@11
  int v22; // r4@14
  bool v23; // zf@17
  _BYTE *v24; // r0@21
  int v25; // r0@22
  int v26; // r6@23
  int v27; // r5@23
  bool v28; // zf@24
  int v29; // r4@27
  bool v30; // zf@30
  _BYTE *v31; // r0@34
  int v32; // r0@35
  int v33; // r6@36
  int v34; // r5@36
  bool v35; // zf@37
  int v36; // r4@40
  bool v37; // zf@43
  _BYTE *v38; // r0@47
  int v39; // r0@48
  int v40; // r6@49
  int v41; // r5@49
  bool v42; // zf@50
  int v43; // r4@53
  bool v44; // zf@56
  _BYTE *v45; // r0@60
  int v46; // r10@61
  unsigned int v47; // r6@61
  int v48; // r9@61
  int v49; // r0@63
  int v50; // r7@64
  int v51; // r5@64
  bool v52; // zf@65
  int v53; // r4@68
  bool v54; // zf@71
  _BYTE *v55; // r0@75
  int v56; // r0@76
  int v57; // r7@77
  int v58; // r5@77
  bool v59; // zf@78
  int v60; // r4@81
  bool v61; // zf@84
  _BYTE *v62; // r0@88
  int v63; // r0@89
  int v64; // r7@90
  int v65; // r5@90
  bool v66; // zf@91
  int v67; // r4@94
  bool v68; // zf@97
  _BYTE *v69; // r0@101
  int v70; // r0@102
  int v71; // r7@103
  int v72; // r5@103
  bool v73; // zf@104
  int v74; // r4@107
  bool v75; // zf@110
  _BYTE *v76; // r0@114
  int v78; // [sp+10h] [bp-28h]@7

  v7 = a1;
  Option::Option(a1, a2, a3, a4, a5, a6, 1);
  *(_DWORD *)v7 = &off_26D9A50;
  *(_DWORD *)(v7 + 76) = 0;
  *(_DWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 84) = 1065353216;
  *(_DWORD *)(v7 + 88) = 0;
  LODWORD(v8) = v7 + 84;
  v9 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v8)));
  *(_DWORD *)(v7 + 72) = LODWORD(v9);
  if ( LODWORD(v9) == 1 )
  {
    *(_DWORD *)(v7 + 92) = 0;
    v11 = (void *)(v7 + 92);
  }
  else
    if ( LODWORD(v9) >= 0x40000000 )
      sub_119C874();
    v10 = 4 * LODWORD(v9);
    v11 = operator new(4 * LODWORD(v9));
    _aeabi_memclr4(v11, v10);
  *(_DWORD *)(v7 + 68) = v11;
  *(_DWORD *)(v7 + 104) = 0;
  *(_DWORD *)(v7 + 108) = 0;
  *(_DWORD *)(v7 + 112) = 1065353216;
  *(_DWORD *)(v7 + 116) = 0;
  LODWORD(v9) = v7 + 112;
  v12 = sub_119C844(v9);
  *(_DWORD *)(v7 + 100) = v12;
  if ( v12 == 1 )
    *(_DWORD *)(v7 + 120) = 0;
    v14 = (void *)(v7 + 120);
    if ( v12 >= 0x40000000 )
    v13 = 4 * v12;
    v14 = operator new(4 * v12);
    _aeabi_memclr4(v14, v13);
  *(_DWORD *)(v7 + 96) = v14;
  v78 = v7 + 68;
  v15 = 0;
  v16 = *(_QWORD *)(v7 + 68) >> 32;
  v17 = *(_QWORD *)(v7 + 68);
  if ( v16 != 1 )
    v15 = 1;
  v18 = *(_DWORD *)(v17 + 4 * v15);
  if ( !v18 )
    goto LABEL_21;
  v19 = *(_DWORD *)v18;
  v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
  while ( 1 )
    v21 = v20 == 1;
    if ( v20 == 1 )
      v21 = *(_DWORD *)(v19 + 4) == 1;
    if ( v21 )
      break;
    v22 = *(_DWORD *)v19;
    if ( *(_DWORD *)v19 )
    {
      v20 = *(_DWORD *)(v22 + 12);
      v18 = v19;
      v19 = *(_DWORD *)v19;
      if ( *(_DWORD *)(v22 + 12) % v16 == v15 )
        continue;
    }
  v23 = v18 == 0;
  if ( v18 )
    v18 = *(_DWORD *)v18;
    v23 = v18 == 0;
  if ( v23 )
LABEL_21:
    v24 = operator new(0x10u);
    *(_QWORD *)v24 = 0x100000000LL;
    v24[8] = 0;
    v18 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v78,
            v15,
            1u,
            (int)v24);
    v16 = *(_QWORD *)(v7 + 68) >> 32;
    v17 = *(_QWORD *)(v7 + 68);
  *(_BYTE *)(v18 + 8) = a7;
  v25 = *(_DWORD *)(v17 + 4 * (2 % v16));
  if ( !v25 )
    goto LABEL_34;
  v26 = *(_DWORD *)v25;
  v27 = *(_DWORD *)(*(_DWORD *)v25 + 12);
    v28 = v27 == 2;
    if ( v27 == 2 )
      v28 = *(_DWORD *)(v26 + 4) == 2;
    if ( v28 )
    v29 = *(_DWORD *)v26;
    if ( *(_DWORD *)v26 )
      v27 = *(_DWORD *)(v29 + 12);
      v25 = v26;
      v26 = *(_DWORD *)v26;
      if ( *(_DWORD *)(v29 + 12) % v16 == 2 % v16 )
  v30 = v25 == 0;
  if ( v25 )
    v25 = *(_DWORD *)v25;
    v30 = v25 == 0;
  if ( v30 )
LABEL_34:
    v31 = operator new(0x10u);
    *(_QWORD *)v31 = 0x200000000LL;
    v31[8] = 0;
    v25 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            2 % v16,
            2u,
            (int)v31);
  *(_BYTE *)(v25 + 8) = a7;
  v32 = *(_DWORD *)(v17 + 4 * (3 % v16));
  if ( !v32 )
    goto LABEL_47;
  v33 = *(_DWORD *)v32;
  v34 = *(_DWORD *)(*(_DWORD *)v32 + 12);
    v35 = v34 == 3;
    if ( v34 == 3 )
      v35 = *(_DWORD *)(v33 + 4) == 3;
    if ( v35 )
    v36 = *(_DWORD *)v33;
    if ( *(_DWORD *)v33 )
      v34 = *(_DWORD *)(v36 + 12);
      v32 = v33;
      v33 = *(_DWORD *)v33;
      if ( *(_DWORD *)(v36 + 12) % v16 == 3 % v16 )
  v37 = v32 == 0;
  if ( v32 )
    v32 = *(_DWORD *)v32;
    v37 = v32 == 0;
  if ( v37 )
LABEL_47:
    v38 = operator new(0x10u);
    *(_QWORD *)v38 = 12884901888LL;
    v38[8] = 0;
    v32 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            3 % v16,
            3u,
            (int)v38);
  *(_BYTE *)(v32 + 8) = a7;
  v39 = *(_DWORD *)(v17 + 4 * (4 % v16));
  if ( !v39 )
    goto LABEL_60;
  v40 = *(_DWORD *)v39;
  v41 = *(_DWORD *)(*(_DWORD *)v39 + 12);
    v42 = v41 == 4;
    if ( v41 == 4 )
      v42 = *(_DWORD *)(v40 + 4) == 4;
    if ( v42 )
    v43 = *(_DWORD *)v40;
    if ( *(_DWORD *)v40 )
      v41 = *(_DWORD *)(v43 + 12);
      v39 = v40;
      v40 = *(_DWORD *)v40;
      if ( *(_DWORD *)(v43 + 12) % v16 == 4 % v16 )
  v44 = v39 == 0;
  if ( v39 )
    v39 = *(_DWORD *)v39;
    v44 = v39 == 0;
  if ( v44 )
LABEL_60:
    v45 = operator new(0x10u);
    *(_QWORD *)v45 = 0x400000000LL;
    v45[8] = 0;
    v39 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            4 % v16,
            4u,
            (int)v45);
  *(_BYTE *)(v39 + 8) = a7;
  v46 = 0;
  v47 = *(_QWORD *)(v7 + 96) >> 32;
  v48 = *(_QWORD *)(v7 + 96);
  if ( v47 != 1 )
    v46 = 1;
  v49 = *(_DWORD *)(v48 + 4 * v46);
  if ( !v49 )
    goto LABEL_75;
  v50 = *(_DWORD *)v49;
  v51 = *(_DWORD *)(*(_DWORD *)v49 + 12);
    v52 = v51 == 1;
    if ( v51 == 1 )
      v52 = *(_DWORD *)(v50 + 4) == 1;
    if ( v52 )
    v53 = *(_DWORD *)v50;
    if ( *(_DWORD *)v50 )
      v51 = *(_DWORD *)(v53 + 12);
      v49 = v50;
      v50 = *(_DWORD *)v50;
      if ( *(_DWORD *)(v53 + 12) % v47 == v46 )
  v54 = v49 == 0;
  if ( v49 )
    v49 = *(_DWORD *)v49;
    v54 = v49 == 0;
  if ( v54 )
LABEL_75:
    v55 = operator new(0x10u);
    *(_QWORD *)v55 = 0x100000000LL;
    v55[8] = 0;
    v49 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v7 + 96,
            v46,
            (int)v55);
    v47 = *(_QWORD *)(v7 + 96) >> 32;
    v48 = *(_QWORD *)(v7 + 96);
  *(_BYTE *)(v49 + 8) = a7;
  v56 = *(_DWORD *)(v48 + 4 * (2 % v47));
  if ( !v56 )
    goto LABEL_88;
  v57 = *(_DWORD *)v56;
  v58 = *(_DWORD *)(*(_DWORD *)v56 + 12);
    v59 = v58 == 2;
    if ( v58 == 2 )
      v59 = *(_DWORD *)(v57 + 4) == 2;
    if ( v59 )
    v60 = *(_DWORD *)v57;
    if ( *(_DWORD *)v57 )
      v58 = *(_DWORD *)(v60 + 12);
      v56 = v57;
      v57 = *(_DWORD *)v57;
      if ( *(_DWORD *)(v60 + 12) % v47 == 2 % v47 )
  v61 = v56 == 0;
  if ( v56 )
    v56 = *(_DWORD *)v56;
    v61 = v56 == 0;
  if ( v61 )
LABEL_88:
    v62 = operator new(0x10u);
    *(_QWORD *)v62 = 0x200000000LL;
    v62[8] = 0;
    v56 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            2 % v47,
            (int)v62);
  *(_BYTE *)(v56 + 8) = a7;
  v63 = *(_DWORD *)(v48 + 4 * (3 % v47));
  if ( !v63 )
    goto LABEL_101;
  v64 = *(_DWORD *)v63;
  v65 = *(_DWORD *)(*(_DWORD *)v63 + 12);
    v66 = v65 == 3;
    if ( v65 == 3 )
      v66 = *(_DWORD *)(v64 + 4) == 3;
    if ( v66 )
    v67 = *(_DWORD *)v64;
    if ( *(_DWORD *)v64 )
      v65 = *(_DWORD *)(v67 + 12);
      v63 = v64;
      v64 = *(_DWORD *)v64;
      if ( *(_DWORD *)(v67 + 12) % v47 == 3 % v47 )
  v68 = v63 == 0;
  if ( v63 )
    v63 = *(_DWORD *)v63;
    v68 = v63 == 0;
  if ( v68 )
LABEL_101:
    v69 = operator new(0x10u);
    *(_QWORD *)v69 = 12884901888LL;
    v69[8] = 0;
    v63 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            3 % v47,
            (int)v69);
  *(_BYTE *)(v63 + 8) = a7;
  v70 = *(_DWORD *)(v48 + 4 * (4 % v47));
  if ( !v70 )
    goto LABEL_114;
  v71 = *(_DWORD *)v70;
  v72 = *(_DWORD *)(*(_DWORD *)v70 + 12);
    v73 = v72 == 4;
    if ( v72 == 4 )
      v73 = *(_DWORD *)(v71 + 4) == 4;
    if ( v73 )
    v74 = *(_DWORD *)v71;
    if ( *(_DWORD *)v71 )
      v72 = *(_DWORD *)(v74 + 12);
      v70 = v71;
      v71 = *(_DWORD *)v71;
      if ( *(_DWORD *)(v74 + 12) % v47 == 4 % v47 )
  v75 = v70 == 0;
  if ( v70 )
    v70 = *(_DWORD *)v70;
    v75 = v70 == 0;
  if ( v75 )
LABEL_114:
    v76 = operator new(0x10u);
    *(_QWORD *)v76 = 0x400000000LL;
    v76[8] = 0;
    v70 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            4 % v47,
            (int)v76);
  *(_BYTE *)(v70 + 8) = a7;
  return v7;
}


int __fastcall InputModeBoolOption::InputModeBoolOption(int a1, unsigned int a2, unsigned int a3, int a4, int *a5, int *a6, char a7, char a8, char a9, char a10)
{
  int v10; // r10@1
  double v11; // r0@1
  double v12; // r0@1
  int v13; // r7@3
  void *v14; // r5@3
  unsigned int v15; // r0@4
  int v16; // r5@6
  void *v17; // r7@6
  int v18; // r6@7
  unsigned int v19; // r7@7
  int v20; // r11@7
  int v21; // r0@9
  int v22; // r8@10
  int v23; // r5@10
  bool v24; // zf@11
  int v25; // r4@14
  bool v26; // zf@17
  _BYTE *v27; // r0@21
  int v28; // r0@22
  int v29; // r6@23
  int v30; // r5@23
  bool v31; // zf@24
  int v32; // r4@27
  bool v33; // zf@30
  _BYTE *v34; // r0@34
  int v35; // r0@35
  int v36; // r6@36
  int v37; // r5@36
  bool v38; // zf@37
  int v39; // r4@40
  bool v40; // zf@43
  _BYTE *v41; // r0@47
  int v42; // r0@48
  int v43; // r6@49
  int v44; // r5@49
  bool v45; // zf@50
  int v46; // r4@53
  bool v47; // zf@56
  _BYTE *v48; // r0@60
  int v49; // r11@61
  unsigned int v50; // r6@61
  int v51; // r9@61
  int v52; // r0@63
  int v53; // r7@64
  int v54; // r5@64
  bool v55; // zf@65
  int v56; // r4@68
  bool v57; // zf@71
  _BYTE *v58; // r0@75
  int v59; // r0@76
  int v60; // r7@77
  int v61; // r5@77
  bool v62; // zf@78
  int v63; // r4@81
  bool v64; // zf@84
  _BYTE *v65; // r0@88
  int v66; // r0@89
  int v67; // r7@90
  int v68; // r5@90
  bool v69; // zf@91
  int v70; // r4@94
  bool v71; // zf@97
  _BYTE *v72; // r0@101
  int v73; // r0@102
  int v74; // r7@103
  int v75; // r5@103
  bool v76; // zf@104
  int v77; // r4@107
  bool v78; // zf@110
  _BYTE *v79; // r0@114
  int v81; // [sp+10h] [bp-28h]@7

  v10 = a1;
  Option::Option(a1, a2, a3, a4, a5, a6, 1);
  *(_DWORD *)v10 = &off_26D9A50;
  *(_DWORD *)(v10 + 76) = 0;
  *(_DWORD *)(v10 + 80) = 0;
  *(_DWORD *)(v10 + 84) = 1065353216;
  *(_DWORD *)(v10 + 88) = 0;
  LODWORD(v11) = v10 + 84;
  v12 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v11)));
  *(_DWORD *)(v10 + 72) = LODWORD(v12);
  if ( LODWORD(v12) == 1 )
  {
    *(_DWORD *)(v10 + 92) = 0;
    v14 = (void *)(v10 + 92);
  }
  else
    if ( LODWORD(v12) >= 0x40000000 )
      sub_119C874();
    v13 = 4 * LODWORD(v12);
    v14 = operator new(4 * LODWORD(v12));
    _aeabi_memclr4(v14, v13);
  *(_DWORD *)(v10 + 68) = v14;
  *(_DWORD *)(v10 + 104) = 0;
  *(_DWORD *)(v10 + 108) = 0;
  *(_DWORD *)(v10 + 112) = 1065353216;
  *(_DWORD *)(v10 + 116) = 0;
  LODWORD(v12) = v10 + 112;
  v15 = sub_119C844(v12);
  *(_DWORD *)(v10 + 100) = v15;
  if ( v15 == 1 )
    *(_DWORD *)(v10 + 120) = 0;
    v17 = (void *)(v10 + 120);
    if ( v15 >= 0x40000000 )
    v16 = 4 * v15;
    v17 = operator new(4 * v15);
    _aeabi_memclr4(v17, v16);
  *(_DWORD *)(v10 + 96) = v17;
  v81 = v10 + 68;
  v18 = 0;
  v19 = *(_QWORD *)(v10 + 68) >> 32;
  v20 = *(_QWORD *)(v10 + 68);
  if ( v19 != 1 )
    v18 = 1;
  v21 = *(_DWORD *)(v20 + 4 * v18);
  if ( !v21 )
    goto LABEL_21;
  v22 = *(_DWORD *)v21;
  v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
  while ( 1 )
    v24 = v23 == 1;
    if ( v23 == 1 )
      v24 = *(_DWORD *)(v22 + 4) == 1;
    if ( v24 )
      break;
    v25 = *(_DWORD *)v22;
    if ( *(_DWORD *)v22 )
    {
      v23 = *(_DWORD *)(v25 + 12);
      v21 = v22;
      v22 = *(_DWORD *)v22;
      if ( *(_DWORD *)(v25 + 12) % v19 == v18 )
        continue;
    }
  v26 = v21 == 0;
  if ( v21 )
    v21 = *(_DWORD *)v21;
    v26 = v21 == 0;
  if ( v26 )
LABEL_21:
    v27 = operator new(0x10u);
    *(_QWORD *)v27 = 0x100000000LL;
    v27[8] = 0;
    v21 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v81,
            v18,
            1u,
            (int)v27);
    v19 = *(_QWORD *)(v10 + 68) >> 32;
    v20 = *(_QWORD *)(v10 + 68);
  *(_BYTE *)(v21 + 8) = a7;
  v28 = *(_DWORD *)(v20 + 4 * (2 % v19));
  if ( !v28 )
    goto LABEL_34;
  v29 = *(_DWORD *)v28;
  v30 = *(_DWORD *)(*(_DWORD *)v28 + 12);
    v31 = v30 == 2;
    if ( v30 == 2 )
      v31 = *(_DWORD *)(v29 + 4) == 2;
    if ( v31 )
    v32 = *(_DWORD *)v29;
    if ( *(_DWORD *)v29 )
      v30 = *(_DWORD *)(v32 + 12);
      v28 = v29;
      v29 = *(_DWORD *)v29;
      if ( *(_DWORD *)(v32 + 12) % v19 == 2 % v19 )
  v33 = v28 == 0;
  if ( v28 )
    v28 = *(_DWORD *)v28;
    v33 = v28 == 0;
  if ( v33 )
LABEL_34:
    v34 = operator new(0x10u);
    *(_QWORD *)v34 = 0x200000000LL;
    v34[8] = 0;
    v28 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            2 % v19,
            2u,
            (int)v34);
  *(_BYTE *)(v28 + 8) = a8;
  v35 = *(_DWORD *)(v20 + 4 * (3 % v19));
  if ( !v35 )
    goto LABEL_47;
  v36 = *(_DWORD *)v35;
  v37 = *(_DWORD *)(*(_DWORD *)v35 + 12);
    v38 = v37 == 3;
    if ( v37 == 3 )
      v38 = *(_DWORD *)(v36 + 4) == 3;
    if ( v38 )
    v39 = *(_DWORD *)v36;
    if ( *(_DWORD *)v36 )
      v37 = *(_DWORD *)(v39 + 12);
      v35 = v36;
      v36 = *(_DWORD *)v36;
      if ( *(_DWORD *)(v39 + 12) % v19 == 3 % v19 )
  v40 = v35 == 0;
  if ( v35 )
    v35 = *(_DWORD *)v35;
    v40 = v35 == 0;
  if ( v40 )
LABEL_47:
    v41 = operator new(0x10u);
    *(_QWORD *)v41 = 12884901888LL;
    v41[8] = 0;
    v35 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            3 % v19,
            3u,
            (int)v41);
  *(_BYTE *)(v35 + 8) = a9;
  v42 = *(_DWORD *)(v20 + 4 * (4 % v19));
  if ( !v42 )
    goto LABEL_60;
  v43 = *(_DWORD *)v42;
  v44 = *(_DWORD *)(*(_DWORD *)v42 + 12);
    v45 = v44 == 4;
    if ( v44 == 4 )
      v45 = *(_DWORD *)(v43 + 4) == 4;
    if ( v45 )
    v46 = *(_DWORD *)v43;
    if ( *(_DWORD *)v43 )
      v44 = *(_DWORD *)(v46 + 12);
      v42 = v43;
      v43 = *(_DWORD *)v43;
      if ( *(_DWORD *)(v46 + 12) % v19 == 4 % v19 )
  v47 = v42 == 0;
  if ( v42 )
    v42 = *(_DWORD *)v42;
    v47 = v42 == 0;
  if ( v47 )
LABEL_60:
    v48 = operator new(0x10u);
    *(_QWORD *)v48 = 0x400000000LL;
    v48[8] = 0;
    v42 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            4 % v19,
            4u,
            (int)v48);
  *(_BYTE *)(v42 + 8) = a10;
  v49 = 0;
  v50 = *(_QWORD *)(v10 + 96) >> 32;
  v51 = *(_QWORD *)(v10 + 96);
  if ( v50 != 1 )
    v49 = 1;
  v52 = *(_DWORD *)(v51 + 4 * v49);
  if ( !v52 )
    goto LABEL_75;
  v53 = *(_DWORD *)v52;
  v54 = *(_DWORD *)(*(_DWORD *)v52 + 12);
    v55 = v54 == 1;
    if ( v54 == 1 )
      v55 = *(_DWORD *)(v53 + 4) == 1;
    if ( v55 )
    v56 = *(_DWORD *)v53;
    if ( *(_DWORD *)v53 )
      v54 = *(_DWORD *)(v56 + 12);
      v52 = v53;
      v53 = *(_DWORD *)v53;
      if ( *(_DWORD *)(v56 + 12) % v50 == v49 )
  v57 = v52 == 0;
  if ( v52 )
    v52 = *(_DWORD *)v52;
    v57 = v52 == 0;
  if ( v57 )
LABEL_75:
    v58 = operator new(0x10u);
    *(_QWORD *)v58 = 0x100000000LL;
    v58[8] = 0;
    v52 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v10 + 96,
            v49,
            (int)v58);
    v50 = *(_QWORD *)(v10 + 96) >> 32;
    v51 = *(_QWORD *)(v10 + 96);
  *(_BYTE *)(v52 + 8) = a7;
  v59 = *(_DWORD *)(v51 + 4 * (2 % v50));
  if ( !v59 )
    goto LABEL_88;
  v60 = *(_DWORD *)v59;
  v61 = *(_DWORD *)(*(_DWORD *)v59 + 12);
    v62 = v61 == 2;
    if ( v61 == 2 )
      v62 = *(_DWORD *)(v60 + 4) == 2;
    if ( v62 )
    v63 = *(_DWORD *)v60;
    if ( *(_DWORD *)v60 )
      v61 = *(_DWORD *)(v63 + 12);
      v59 = v60;
      v60 = *(_DWORD *)v60;
      if ( *(_DWORD *)(v63 + 12) % v50 == 2 % v50 )
  v64 = v59 == 0;
  if ( v59 )
    v59 = *(_DWORD *)v59;
    v64 = v59 == 0;
  if ( v64 )
LABEL_88:
    v65 = operator new(0x10u);
    *(_QWORD *)v65 = 0x200000000LL;
    v65[8] = 0;
    v59 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            2 % v50,
            (int)v65);
  *(_BYTE *)(v59 + 8) = a8;
  v66 = *(_DWORD *)(v51 + 4 * (3 % v50));
  if ( !v66 )
    goto LABEL_101;
  v67 = *(_DWORD *)v66;
  v68 = *(_DWORD *)(*(_DWORD *)v66 + 12);
    v69 = v68 == 3;
    if ( v68 == 3 )
      v69 = *(_DWORD *)(v67 + 4) == 3;
    if ( v69 )
    v70 = *(_DWORD *)v67;
    if ( *(_DWORD *)v67 )
      v68 = *(_DWORD *)(v70 + 12);
      v66 = v67;
      v67 = *(_DWORD *)v67;
      if ( *(_DWORD *)(v70 + 12) % v50 == 3 % v50 )
  v71 = v66 == 0;
  if ( v66 )
    v66 = *(_DWORD *)v66;
    v71 = v66 == 0;
  if ( v71 )
LABEL_101:
    v72 = operator new(0x10u);
    *(_QWORD *)v72 = 12884901888LL;
    v72[8] = 0;
    v66 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            3 % v50,
            (int)v72);
  *(_BYTE *)(v66 + 8) = a9;
  v73 = *(_DWORD *)(v51 + 4 * (4 % v50));
  if ( !v73 )
    goto LABEL_114;
  v74 = *(_DWORD *)v73;
  v75 = *(_DWORD *)(*(_DWORD *)v73 + 12);
    v76 = v75 == 4;
    if ( v75 == 4 )
      v76 = *(_DWORD *)(v74 + 4) == 4;
    if ( v76 )
    v77 = *(_DWORD *)v74;
    if ( *(_DWORD *)v74 )
      v75 = *(_DWORD *)(v77 + 12);
      v73 = v74;
      v74 = *(_DWORD *)v74;
      if ( *(_DWORD *)(v77 + 12) % v50 == 4 % v50 )
  v78 = v73 == 0;
  if ( v73 )
    v73 = *(_DWORD *)v73;
    v78 = v73 == 0;
  if ( v78 )
LABEL_114:
    v79 = operator new(0x10u);
    *(_QWORD *)v79 = 0x400000000LL;
    v79[8] = 0;
    v73 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            4 % v50,
            (int)v79);
  *(_BYTE *)(v73 + 8) = a10;
  return v10;
}


void __fastcall InputModeBoolOption::~InputModeBoolOption(InputModeBoolOption *this)
{
  Option *v1; // r0@1

  v1 = InputModeBoolOption::~InputModeBoolOption(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall InputModeBoolOption::save(Option *a1, int a2)
{
  InputModeBoolOption::save(a1, a2);
}


void __fastcall InputModeBoolOption::load(Option *a1, int a2)
{
  InputModeBoolOption::load(a1, a2);
}


void __fastcall InputModeBoolOption::~InputModeBoolOption(InputModeBoolOption *this)
{
  InputModeBoolOption::~InputModeBoolOption(this);
}


int __fastcall InputModeBoolOption::set(int a1, unsigned int a2, int a3)
{
  int v3; // r9@1
  __int64 v4; // kr00_8@1
  int v5; // r0@1
  int v6; // r7@2
  int v7; // r6@2
  bool v8; // zf@3
  int result; // r0@8

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 68);
  v5 = *(_DWORD *)(v4 + 4 * (a2 % HIDWORD(v4)));
  if ( v5 )
  {
    v6 = *(_DWORD *)v5;
    v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    while ( 1 )
    {
      v8 = v7 == a2;
      if ( v7 == a2 )
        v8 = *(_DWORD *)(v6 + 4) == a2;
      if ( v8 )
        break;
      if ( !*(_DWORD *)v6 )
      {
        result = 0;
        goto LABEL_14;
      }
      v7 = *(_DWORD *)(v4 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v4 + 12) % HIDWORD(v4) != a2 % HIDWORD(v4) )
    }
    if ( v5 )
      result = *(_DWORD *)v5;
    else
      result = 0;
  }
  else
    result = 0;
LABEL_14:
  if ( *(_BYTE *)(result + 8) != a3 )
    *(_BYTE *)(result + 8) = a3;
    result = j_j_j__ZN6Option24notifyOptionValueChangedE9InputMode(v3, a2);
  return result;
}


int __fastcall InputModeBoolOption::reset(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r8@1
  int v4; // r7@4
  unsigned int v5; // r5@4
  int v6; // r0@6
  int v7; // r10@7
  int v8; // r4@7
  bool v9; // zf@8
  int v10; // r6@11
  unsigned int v11; // r5@14
  int v12; // r7@14
  int *v13; // r0@14
  int v14; // r10@15
  int v15; // r4@15
  bool v16; // zf@16
  int v17; // r6@19
  unsigned int v18; // r5@22
  int v19; // r7@22
  int *v20; // r0@22
  int v21; // r10@23
  int v22; // r4@23
  bool v23; // zf@24
  int v24; // r6@27
  bool v25; // zf@30
  _DWORD *v26; // r0@34
  signed int v27; // r7@35
  unsigned int v28; // r5@35
  int v29; // r0@37
  int v30; // r10@38
  int v31; // r4@38
  bool v32; // zf@39
  int v33; // r11@42
  bool v34; // zf@45
  _DWORD *v35; // r0@49
  unsigned int v36; // r7@50
  int v37; // r10@51
  int v38; // r4@51
  bool v39; // zf@52
  int v40; // r11@55
  bool v41; // zf@58
  _DWORD *v42; // r0@62
  unsigned int v43; // r7@63
  int v44; // r10@64
  int v45; // r4@64
  bool v46; // zf@65
  int v47; // r11@68
  bool v48; // zf@71
  _DWORD *v49; // r0@75
  int v50; // r3@75
  unsigned int v51; // r2@75
  int v52; // r0@75
  int v53; // r1@75
  bool v54; // zf@76
  _DWORD *v55; // r0@80
  bool v56; // zf@81
  _DWORD *v57; // r0@85
  char v59; // [sp+0h] [bp-28h]@35

  v2 = a2;
  v3 = a1;
  if ( a2 == 3 )
  {
    v11 = *(_DWORD *)(a1 + 100);
    v12 = 3u % *(_DWORD *)(a1 + 100);
    v13 = *(int **)(*(_DWORD *)(a1 + 96) + 4 * v12);
    if ( !v13 )
      goto LABEL_49;
    v14 = *v13;
    v15 = *(_DWORD *)(*v13 + 12);
    while ( 1 )
    {
      v16 = v15 == 3;
      if ( v15 == 3 )
        v16 = *(_DWORD *)(v14 + 4) == 3;
      if ( v16 )
        break;
      v17 = *(_DWORD *)v14;
      if ( *(_DWORD *)v14 )
      {
        v15 = *(_DWORD *)(v17 + 12);
        v13 = (int *)v14;
        v14 = *(_DWORD *)v14;
        if ( *(_DWORD *)(v17 + 12) % v11 == v12 )
          continue;
      }
    }
    v34 = v13 == 0;
    if ( v13 )
      v14 = *v13;
      v34 = *v13 == 0;
    if ( v34 )
LABEL_49:
      v35 = operator new(0x10u);
      *v35 = 0;
      v35[1] = 3;
      *((_BYTE *)v35 + 8) = 0;
      v14 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v3 + 96,
              v12,
              3u,
              (int)v35);
    v36 = 3u % *(_DWORD *)(v3 + 72);
    v59 = *(_BYTE *)(v14 + 8);
    v29 = *(_DWORD *)(*(_DWORD *)(v3 + 68) + 4 * v36);
    if ( v29 )
      v37 = *(_DWORD *)v29;
      v38 = *(_DWORD *)(*(_DWORD *)v29 + 12);
      while ( 1 )
        v39 = v38 == 3;
        if ( v38 == 3 )
          v39 = *(_DWORD *)(v37 + 4) == 3;
        if ( v39 )
          break;
        v40 = *(_DWORD *)v37;
        if ( *(_DWORD *)v37 )
        {
          v38 = *(_DWORD *)(v40 + 12);
          v29 = v37;
          v37 = *(_DWORD *)v37;
          if ( *(_DWORD *)(v40 + 12) % *(_DWORD *)(v3 + 72) == v36 )
            continue;
        }
        goto LABEL_80;
      v54 = v29 == 0;
      if ( v29 )
        v29 = *(_DWORD *)v29;
        v54 = v29 == 0;
      if ( !v54 )
        goto LABEL_87;
LABEL_80:
    v55 = operator new(0x10u);
    v50 = (int)v55;
    *v55 = 0;
    v55[1] = 3;
    v53 = v36;
    *((_BYTE *)v55 + 8) = 0;
    v52 = v3 + 68;
    v51 = 3;
    goto LABEL_86;
  }
  if ( a2 == 2 )
    v18 = *(_DWORD *)(a1 + 100);
    v19 = 2u % *(_DWORD *)(a1 + 100);
    v20 = *(int **)(*(_DWORD *)(a1 + 96) + 4 * v19);
    if ( !v20 )
      goto LABEL_62;
    v21 = *v20;
    v22 = *(_DWORD *)(*v20 + 12);
      v23 = v22 == 2;
      if ( v22 == 2 )
        v23 = *(_DWORD *)(v21 + 4) == 2;
      if ( v23 )
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v22 = *(_DWORD *)(v24 + 12);
        v20 = (int *)v21;
        v21 = *(_DWORD *)v21;
        if ( *(_DWORD *)(v24 + 12) % v18 == v19 )
    v41 = v20 == 0;
    if ( v20 )
      v21 = *v20;
      v41 = *v20 == 0;
    if ( v41 )
LABEL_62:
      v42 = operator new(0x10u);
      *v42 = 0;
      v42[1] = 2;
      *((_BYTE *)v42 + 8) = 0;
      v21 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v19,
              2u,
              (int)v42);
    v43 = 2u % *(_DWORD *)(v3 + 72);
    v59 = *(_BYTE *)(v21 + 8);
    v29 = *(_DWORD *)(*(_DWORD *)(v3 + 68) + 4 * v43);
      v44 = *(_DWORD *)v29;
      v45 = *(_DWORD *)(*(_DWORD *)v29 + 12);
        v46 = v45 == 2;
        if ( v45 == 2 )
          v46 = *(_DWORD *)(v44 + 4) == 2;
        if ( v46 )
        v47 = *(_DWORD *)v44;
        if ( *(_DWORD *)v44 )
          v45 = *(_DWORD *)(v47 + 12);
          v29 = v44;
          v44 = *(_DWORD *)v44;
          if ( *(_DWORD *)(v47 + 12) % *(_DWORD *)(v3 + 72) == v43 )
        goto LABEL_85;
      v56 = v29 == 0;
        v56 = v29 == 0;
      if ( !v56 )
LABEL_85:
    v57 = operator new(0x10u);
    v50 = (int)v57;
    *v57 = 0;
    v57[1] = 2;
    v53 = v43;
    *((_BYTE *)v57 + 8) = 0;
    v51 = 2;
  if ( a2 == 1 )
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 100);
    if ( v5 != 1 )
      v4 = 1;
    v6 = *(_DWORD *)(*(_DWORD *)(a1 + 96) + 4 * v4);
    if ( !v6 )
      goto LABEL_34;
    v7 = *(_DWORD *)v6;
    v8 = *(_DWORD *)(*(_DWORD *)v6 + 12);
      v9 = v8 == 1;
      if ( v8 == 1 )
        v9 = *(_DWORD *)(v7 + 4) == 1;
      if ( v9 )
      v10 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 )
        v8 = *(_DWORD *)(v10 + 12);
        v6 = v7;
        v7 = *(_DWORD *)v7;
        if ( *(_DWORD *)(v10 + 12) % v5 == v4 )
    v25 = v6 == 0;
    if ( v6 )
      v6 = *(_DWORD *)v6;
      v25 = v6 == 0;
    if ( v25 )
LABEL_34:
      v26 = operator new(0x10u);
      *v26 = 0;
      v26[1] = 1;
      *((_BYTE *)v26 + 8) = 0;
      v6 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v3 + 96,
             v4,
             1u,
             (int)v26);
    v27 = 0;
    v28 = *(_DWORD *)(v3 + 72);
    v59 = *(_BYTE *)(v6 + 8);
    if ( v28 != 1 )
      v27 = 1;
    v29 = *(_DWORD *)(*(_DWORD *)(v3 + 68) + 4 * v27);
      v30 = *(_DWORD *)v29;
      v31 = *(_DWORD *)(*(_DWORD *)v29 + 12);
        v32 = v31 == 1;
        if ( v31 == 1 )
          v32 = *(_DWORD *)(v30 + 4) == 1;
        if ( v32 )
        v33 = *(_DWORD *)v30;
        if ( *(_DWORD *)v30 )
          v31 = *(_DWORD *)(v33 + 12);
          v29 = v30;
          v30 = *(_DWORD *)v30;
          if ( *(_DWORD *)(v33 + 12) % v28 == v27 )
        goto LABEL_75;
      v48 = v29 == 0;
        v48 = v29 == 0;
      if ( !v48 )
LABEL_75:
    v49 = operator new(0x10u);
    v50 = (int)v49;
    v51 = 1;
    *v49 = 0;
    v49[1] = 1;
    *(_BYTE *)(v50 + 8) = 0;
    v53 = v27;
LABEL_86:
    v29 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v52,
            v53,
            v51,
            v50);
LABEL_87:
    *(_BYTE *)(v29 + 8) = v59;
  return j_j_j__ZN6Option24notifyOptionValueChangedE9InputMode(v3, v2);
}


void __fastcall InputModeBoolOption::_saveForInputMode(Option *a1, int a2, unsigned int a3)
{
  InputModeBoolOption::_saveForInputMode(a1, a2, a3);
}


void __fastcall InputModeBoolOption::load(Option *a1, int a2)
{
  int v2; // r10@1
  unsigned int v3; // r9@1
  int *v4; // r4@1
  unsigned int *v5; // r2@2
  signed int v6; // r1@4
  signed int v7; // r1@6
  char *i; // r0@1
  __int64 v9; // r2@15
  void *v10; // r0@15
  int v11; // r4@16
  int v12; // r0@16
  void *v13; // r6@17
  int v14; // r8@17
  size_t v15; // r5@17
  _DWORD *v16; // r0@19
  size_t v17; // r7@19
  size_t v18; // r2@19
  int v19; // r0@21
  _DWORD *v20; // r1@28
  unsigned int v21; // r5@28
  unsigned int v22; // r6@28
  size_t v23; // r2@28
  int v24; // r0@30
  __int64 v25; // kr00_8@35
  int v26; // r11@35
  int v27; // r0@35
  int v28; // r5@36
  int v29; // r6@36
  bool v30; // zf@37
  int v31; // r7@40
  unsigned int *v32; // r2@43
  bool v33; // zf@47
  _DWORD *v34; // r0@51
  char *v35; // r0@53
  int (**v36)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+0h] [bp-50h]@1
  char *v37; // [sp+4h] [bp-4Ch]@1
  int v38; // [sp+Ch] [bp-44h]@1
  Option *v39; // [sp+10h] [bp-40h]@1
  unsigned int v40; // [sp+14h] [bp-3Ch]@15
  void *s2; // [sp+18h] [bp-38h]@2

  v38 = a2;
  v39 = a1;
  v37 = (char *)a1 + 68;
  v2 = a2 + 4;
  v3 = 1;
  v4 = &dword_28898C0;
  v36 = &pthread_create;
  for ( i = Option::getSaveTag(a1); ; i = Option::getSaveTag(v39) )
  {
    LODWORD(v9) = *(_DWORD *)i;
    HIDWORD(v9) = off_26D9AD4[v3 - 1];
    Util::format((Util *)&v40, "%s_%s", v9, v36);
    Util::toLower(&s2, *(_DWORD *)(v40 - 12), v40);
    v10 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != v4 )
    {
      v32 = (unsigned int *)(v40 - 4);
      if ( v36 )
      {
        __dmb();
        do
          v7 = __ldrex(v32);
        while ( __strex(v7 - 1, v32) );
      }
      else
        v7 = (*v32)--;
      if ( v7 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    }
    v11 = v2;
    v12 = *(_DWORD *)(v38 + 8);
    if ( v12 )
      v13 = s2;
      v14 = v2;
      v15 = *((_DWORD *)s2 - 3);
      do
        v11 = v12;
        while ( 1 )
        {
          v16 = *(_DWORD **)(v11 + 16);
          v17 = *(v16 - 3);
          v18 = *(v16 - 3);
          if ( v17 > v15 )
            v18 = v15;
          v19 = memcmp(v16, v13, v18);
          if ( !v19 )
            v19 = v17 - v15;
          if ( v19 >= 0 )
            break;
          v11 = *(_DWORD *)(v11 + 12);
          if ( !v11 )
          {
            v11 = v14;
            goto LABEL_27;
          }
        }
        v12 = *(_DWORD *)(v11 + 8);
        v14 = v11;
      while ( v12 );
LABEL_27:
    if ( v11 != v2 )
      v20 = *(_DWORD **)(v11 + 16);
      v21 = *((_DWORD *)s2 - 3);
      v22 = *(v20 - 3);
      v23 = *((_DWORD *)s2 - 3);
      if ( v21 > v22 )
        v23 = *(v20 - 3);
      v24 = memcmp(s2, v20, v23);
      if ( !v24 )
        v24 = v21 - v22;
      if ( v24 < 0 )
        v11 = v2;
      if ( v11 != v2 )
        v25 = *(_QWORD *)((char *)v39 + 68);
        v26 = v3 % (unsigned int)(*(_QWORD *)((char *)v39 + 68) >> 32);
        v27 = *(_DWORD *)(v25 + 4 * v26);
        if ( !v27 )
          goto LABEL_51;
        v28 = *(_DWORD *)v27;
        v29 = *(_DWORD *)(*(_DWORD *)v27 + 12);
          v30 = v29 == v3;
          if ( v29 == v3 )
            v30 = v3 == *(_DWORD *)(v28 + 4);
          if ( v30 )
          v31 = *(_DWORD *)v28;
          if ( *(_DWORD *)v28 )
            v29 = *(_DWORD *)(v31 + 12);
            v27 = v25;
            v28 = *(_DWORD *)v25;
            if ( *(_DWORD *)(v31 + 12) % HIDWORD(v25) == v26 )
              continue;
        v33 = v27 == 0;
        if ( v27 )
          v27 = *(_DWORD *)v27;
          v33 = v27 == 0;
        if ( v33 )
LABEL_51:
          v34 = operator new(0x10u);
          *v34 = 0;
          v34[1] = v3;
          *((_BYTE *)v34 + 8) = 0;
          v27 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)v37,
                  v26,
                  v3,
                  (int)v34);
        Option::read((int *)(v11 + 20), (_BYTE *)(v27 + 8));
        Option::notifyOptionValueChanged((int)v39, v3);
    v4 = &dword_28898C0;
    v35 = (char *)s2 - 12;
    if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
      v5 = (unsigned int *)((char *)s2 - 4);
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v35);
    if ( ++v3 >= 5 )
      break;
  }
}


void __fastcall InputModeBoolOption::save(Option *a1, int a2)
{
  int v2; // r4@1
  Option *v3; // r5@1

  v2 = a2;
  v3 = a1;
  InputModeBoolOption::_saveForInputMode(a1, a2, 1u);
  InputModeBoolOption::_saveForInputMode(v3, v2, 2u);
  InputModeBoolOption::_saveForInputMode(v3, v2, 3u);
  j_j_j__ZN19InputModeBoolOption17_saveForInputModeERSt6vectorIN12PropertyFile8PropertyESaIS2_EE9InputMode(v3, v2, 4u);
}


void __fastcall InputModeBoolOption::_saveForInputMode(Option *a1, int a2, unsigned int a3)
{
  unsigned int v3; // r4@1
  int v4; // r6@1
  Option *v5; // r11@1
  int *v6; // r0@1
  int *v7; // r0@1
  const char *v8; // r5@2
  unsigned int v9; // r0@4
  const void **v10; // r0@4
  void *v11; // r0@4
  int v12; // r11@5
  int v13; // t1@5
  int v14; // r5@5
  int v15; // r0@5
  int v16; // r9@6
  int v17; // r6@6
  bool v18; // zf@7
  int v19; // r8@10
  bool v20; // zf@13
  _DWORD *v21; // r0@17
  int v22; // r1@18
  int *v23; // r4@18
  __int64 v24; // kr00_8@18
  char *v25; // r1@19
  char *v26; // r0@21
  char *v27; // r0@22
  void **v28; // r0@23
  void *v29; // r0@23
  unsigned int *v30; // r2@26
  signed int v31; // r1@28
  unsigned int *v32; // r2@30
  signed int v33; // r1@32
  unsigned int *v34; // r2@34
  signed int v35; // r1@36
  unsigned int *v36; // r2@38
  signed int v37; // r1@40
  unsigned int *v38; // r1@42
  signed int v39; // r0@44
  int v40; // [sp+0h] [bp-F8h]@4
  unsigned int v41; // [sp+4h] [bp-F4h]@4
  char *v42; // [sp+8h] [bp-F0h]@18
  char *v43; // [sp+Ch] [bp-ECh]@18
  void **v44; // [sp+10h] [bp-E8h]@5
  int v45; // [sp+14h] [bp-E4h]@24
  void **v46; // [sp+18h] [bp-E0h]@18
  void **v47; // [sp+1Ch] [bp-DCh]@18
  int v48; // [sp+38h] [bp-C0h]@24
  int v49; // [sp+40h] [bp-B8h]@23
  int v50; // [sp+44h] [bp-B4h]@24
  int v51; // [sp+CCh] [bp-2Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = (int *)Option::getSaveTag(a1);
  v7 = sub_119C854(&v51, v6);
  sub_119C894((const void **)v7, "_", 1u);
  if ( v3 - 1 > 3 )
    v8 = "Undefined";
  else
    v8 = off_26D9AD4[v3 - 1];
  v9 = strlen(v8);
  v10 = sub_119C894((const void **)&v51, (char *)v8, v9);
  v40 = v4;
  v41 = (unsigned int)*v10;
  *v10 = &unk_28898CC;
  v11 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v51 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    }
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  }
  sub_119CB58((int)&v44, 24);
  v13 = *((_DWORD *)v5 + 17);
  v12 = (int)v5 + 68;
  v14 = v3 % *(_DWORD *)(v12 + 4);
  v15 = *(_DWORD *)(v13 + 4 * v14);
  if ( !v15 )
    goto LABEL_17;
  v16 = *(_DWORD *)v15;
  v17 = *(_DWORD *)(*(_DWORD *)v15 + 12);
  while ( 1 )
    v18 = v17 == v3;
    if ( v17 == v3 )
      v18 = *(_DWORD *)(v16 + 4) == v3;
    if ( v18 )
      break;
    v19 = *(_DWORD *)v16;
    if ( *(_DWORD *)v16 )
      v17 = *(_DWORD *)(v19 + 12);
      v15 = v16;
      v16 = *(_DWORD *)v16;
      if ( *(_DWORD *)(v19 + 12) % *(_DWORD *)(v12 + 4) == v14 )
        continue;
  v20 = v15 == 0;
  if ( v15 )
    v15 = *(_DWORD *)v15;
    v20 = v15 == 0;
  if ( v20 )
LABEL_17:
    v21 = operator new(0x10u);
    *v21 = 0;
    v21[1] = v3;
    *((_BYTE *)v21 + 8) = 0;
    v15 = std::_Hashtable<InputMode,std::pair<InputMode const,bool>,std::allocator<std::pair<InputMode const,bool>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v12,
            v14,
            v3,
            (int)v21);
  v22 = *(_BYTE *)(v15 + 8);
  sub_119D6CC((char *)&v46);
  v23 = (int *)(v41 - 12);
  Util::toLower((void **)&v42, *(_DWORD *)(v41 - 12), v41);
  sub_119D48C((int *)&v43, (int)&v47);
  v24 = *(_QWORD *)(v40 + 4);
  if ( (_DWORD)v24 == HIDWORD(v24) )
    std::vector<PropertyFile::Property,std::allocator<PropertyFile::Property>>::_M_emplace_back_aux<PropertyFile::Property>(
      (unsigned __int64 *)v40,
      (int)&v42);
    v25 = v43;
    *(_DWORD *)v24 = v42;
    v25 = (char *)&unk_28898CC;
    v42 = (char *)&unk_28898CC;
    *(_DWORD *)(v24 + 4) = v43;
    v43 = (char *)&unk_28898CC;
    *(_DWORD *)(v40 + 4) = v24 + 8;
  v26 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v25 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  v27 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v42 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v28 = off_26D3F84;
  v44 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v44) = off_26D3F80[0];
  v46 = v28;
  v47 = &off_27734E8;
  v29 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v49 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  v47 = &off_26D40A8;
  sub_119C954((unsigned int **)&v48);
  v44 = (void **)off_26D3F68;
  *(void ***)((char *)&v44 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v45 = 0;
  sub_119C964(&v50);
  if ( v23 != &dword_28898C0 )
    v38 = (unsigned int *)(v41 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
}
