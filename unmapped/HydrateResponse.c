

int __fastcall HydrateResponse::HydrateResponse(double a1)
{
  int v1; // r4@1
  double v2; // r0@1
  int v3; // r6@3
  void *v4; // r7@3
  unsigned int v5; // r0@4
  int v6; // r7@6
  void *v7; // r5@6

  v1 = LODWORD(a1);
  *(_DWORD *)LODWORD(a1) = &unk_28898CC;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 1065353216;
  *(_DWORD *)(LODWORD(a1) + 24) = 0;
  LODWORD(a1) += 20;
  v2 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(a1)));
  *(_DWORD *)(v1 + 8) = LODWORD(v2);
  if ( LODWORD(v2) == 1 )
  {
    *(_DWORD *)(v1 + 28) = 0;
    v4 = (void *)(v1 + 28);
  }
  else
    if ( LODWORD(v2) >= 0x40000000 )
      sub_119C874();
    v3 = 4 * LODWORD(v2);
    v4 = operator new(4 * LODWORD(v2));
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)(v1 + 4) = v4;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 0;
  *(_DWORD *)(v1 + 48) = 1065353216;
  LODWORD(v2) = v1 + 48;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v5 = sub_119C844(v2);
  *(_DWORD *)(v1 + 36) = v5;
  if ( v5 == 1 )
    *(_DWORD *)(v1 + 56) = 0;
    v7 = (void *)(v1 + 56);
    if ( v5 >= 0x40000000 )
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v1 + 32) = v7;
  *(_DWORD *)(v1 + 60) = &unk_28898CC;
  *(_DWORD *)(v1 + 64) = &unk_28898CC;
  *(_DWORD *)(v1 + 68) = &unk_28898CC;
  *(_DWORD *)(v1 + 72) = &unk_28898CC;
  _aeabi_memclr4(v1 + 76, 36);
  return v1;
}


HydrateResponse *__fastcall HydrateResponse::~HydrateResponse(HydrateResponse *this)
{
  HydrateResponse *v1; // r8@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20
  int v11; // r5@25
  int v12; // r7@25
  unsigned int *v13; // r2@27
  signed int v14; // r1@29
  unsigned int *v15; // r2@31
  signed int v16; // r1@33
  unsigned int *v17; // r2@35
  signed int v18; // r1@37
  int v19; // r1@51
  void *v20; // r0@51
  int v21; // r1@52
  void *v22; // r0@52
  int *v23; // r0@53
  void *v24; // r5@58
  void *v25; // r7@58
  unsigned int *v26; // r2@60
  signed int v27; // r1@62
  int *v28; // r0@68
  int v29; // r1@73
  void *v30; // r0@73
  int v31; // r1@74
  void *v32; // r0@74
  int v33; // r1@75
  void *v34; // r0@75
  int v35; // r1@76
  void *v36; // r0@76
  char *v37; // r0@77
  char *v38; // r0@80
  int *v39; // r0@83
  unsigned int *v41; // r2@85
  signed int v42; // r1@87
  unsigned int *v43; // r2@89
  signed int v44; // r1@91
  unsigned int *v45; // r2@93
  signed int v46; // r1@95
  unsigned int *v47; // r2@97
  signed int v48; // r1@99
  unsigned int *v49; // r2@101
  signed int v50; // r1@103

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 100);
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
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 25);
  }
  if ( v2 )
    operator delete((void *)v2);
  v12 = *((_QWORD *)v1 + 11) >> 32;
  v11 = *((_QWORD *)v1 + 11);
  if ( v11 != v12 )
      v19 = *(_DWORD *)(v11 + 8);
      v20 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v19 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
      v21 = *(_DWORD *)(v11 + 4);
      v22 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v21 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
      v23 = (int *)(*(_DWORD *)v11 - 12);
      if ( v23 != &dword_28898C0 )
        v17 = (unsigned int *)(*(_DWORD *)v11 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      v11 += 12;
    while ( v11 != v12 );
    v11 = *((_DWORD *)v1 + 22);
  if ( v11 )
    operator delete((void *)v11);
  v25 = (void *)(*(_QWORD *)((char *)v1 + 76) >> 32);
  v24 = (void *)*(_QWORD *)((char *)v1 + 76);
  if ( v24 != v25 )
      v28 = (int *)(*(_DWORD *)v24 - 12);
      if ( v28 != &dword_28898C0 )
        v26 = (unsigned int *)(*(_DWORD *)v24 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v28);
      v24 = (char *)v24 + 4;
    while ( v24 != v25 );
    v24 = (void *)*((_DWORD *)v1 + 19);
  if ( v24 )
    operator delete(v24);
  v29 = *((_DWORD *)v1 + 18);
  v30 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
    else
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = *((_DWORD *)v1 + 17);
  v32 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v31 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  v33 = *((_DWORD *)v1 + 16);
  v34 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v33 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = *((_DWORD *)v1 + 15);
  v36 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v35 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 32);
  v37 = (char *)*((_DWORD *)v1 + 8);
  if ( v37 && (char *)v1 + 56 != v37 )
    operator delete(v37);
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 4);
  v38 = (char *)*((_DWORD *)v1 + 1);
  if ( v38 && (char *)v1 + 28 != v38 )
    operator delete(v38);
  v39 = (int *)(*(_DWORD *)v1 - 12);
  if ( v39 != &dword_28898C0 )
    v49 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  return v1;
}
