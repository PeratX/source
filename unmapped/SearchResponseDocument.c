

int __fastcall SearchResponseDocument::SearchResponseDocument(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r9@1
  int *v4; // r4@1

  v2 = a2;
  v3 = a1;
  v4 = (int *)(a2 + 8);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  sub_DA73B4((int *)(a1 + 4), (int *)(a2 + 4));
  sub_DA73B4((int *)(v3 + 8), v4);
  sub_DA73B4((int *)(v3 + 12), (int *)(v2 + 12));
  sub_DA73B4((int *)(v3 + 16), (int *)(v2 + 16));
  sub_DA73B4((int *)(v3 + 20), (int *)(v2 + 20));
  sub_DA73B4((int *)(v3 + 24), (int *)(v2 + 24));
  std::vector<std::string,std::allocator<std::string>>::vector(v3 + 28, (unsigned __int64 *)(v2 + 28));
  sub_DA73B4((int *)(v3 + 40), (int *)(v2 + 40));
  sub_DA73B4((int *)(v3 + 44), (int *)(v2 + 44));
  sub_DA73B4((int *)(v3 + 48), (int *)(v2 + 48));
  sub_DA73B4((int *)(v3 + 52), (int *)(v2 + 52));
  sub_DA73B4((int *)(v3 + 56), (int *)(v2 + 56));
  sub_DA73B4((int *)(v3 + 60), (int *)(v2 + 60));
  sub_DA73B4((int *)(v3 + 64), (int *)(v2 + 64));
  return v3;
}


SearchResponseDocument *__fastcall SearchResponseDocument::~SearchResponseDocument(SearchResponseDocument *this)
{
  SearchResponseDocument *v1; // r10@1
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
  int v14; // r1@7
  void *v15; // r0@7
  void *v16; // r5@8
  void *v17; // r7@8
  unsigned int *v18; // r2@10
  signed int v19; // r1@12
  int *v20; // r0@18
  int v21; // r1@23
  void *v22; // r0@23
  int v23; // r1@24
  void *v24; // r0@24
  int v25; // r1@25
  void *v26; // r0@25
  int v27; // r1@26
  void *v28; // r0@26
  int v29; // r1@27
  void *v30; // r0@27
  int v31; // r1@28
  void *v32; // r0@28
  unsigned int *v34; // r2@30
  signed int v35; // r1@32
  unsigned int *v36; // r2@34
  signed int v37; // r1@36
  unsigned int *v38; // r2@38
  signed int v39; // r1@40
  unsigned int *v40; // r2@42
  signed int v41; // r1@44
  unsigned int *v42; // r2@46
  signed int v43; // r1@48
  unsigned int *v44; // r2@50
  signed int v45; // r1@52
  unsigned int *v46; // r2@54
  signed int v47; // r1@56
  unsigned int *v48; // r2@58
  signed int v49; // r1@60
  unsigned int *v50; // r2@62
  signed int v51; // r1@64
  unsigned int *v52; // r2@66
  signed int v53; // r1@68
  unsigned int *v54; // r2@70
  signed int v55; // r1@72
  unsigned int *v56; // r2@74
  signed int v57; // r1@76
  unsigned int *v58; // r2@78
  signed int v59; // r1@80

  v1 = this;
  v2 = *((_DWORD *)this + 16);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v34 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
    }
    else
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 15);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v4 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 14);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v6 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 13);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v8 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 12);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v10 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 11);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v12 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = *((_DWORD *)v1 + 10);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v14 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  v17 = (void *)(*(_QWORD *)((char *)v1 + 28) >> 32);
  v16 = (void *)*(_QWORD *)((char *)v1 + 28);
  if ( v16 != v17 )
    do
      v20 = (int *)(*(_DWORD *)v16 - 12);
      if ( v20 != &dword_28898C0 )
      {
        v18 = (unsigned int *)(*(_DWORD *)v16 - 4);
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
          j_j_j_j_j__ZdlPv_9(v20);
      }
      v16 = (char *)v16 + 4;
    while ( v16 != v17 );
    v16 = (void *)*((_DWORD *)v1 + 7);
  if ( v16 )
    operator delete(v16);
  v21 = *((_DWORD *)v1 + 6);
  v22 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v21 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  v23 = *((_DWORD *)v1 + 5);
  v24 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v23 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  v25 = *((_DWORD *)v1 + 4);
  v26 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v25 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  v27 = *((_DWORD *)v1 + 3);
  v28 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v27 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9(v28);
  v29 = *((_DWORD *)v1 + 2);
  v30 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v29 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9(v30);
  v31 = *((_DWORD *)v1 + 1);
  v32 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v31 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9(v32);
  return v1;
}
