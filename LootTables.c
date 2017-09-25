

int __fastcall LootTables::lookupByName(int a1, unsigned int *a2, int a3)
{
  unsigned int *v3; // r7@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r0@2
  unsigned int v7; // r4@3
  __int64 v8; // kr00_8@3
  unsigned int v9; // r6@3
  int *v10; // r10@3
  int v11; // r11@4
  _DWORD *v12; // r7@4
  int v13; // r8@4
  const void *v14; // r1@6
  size_t v15; // r2@6
  int v16; // r0@7
  int v17; // r9@8
  int (__fastcall *v18)(int, char **, char **); // r4@10
  int v19; // r4@10
  char *v20; // r0@10
  char *v21; // r0@11
  int v22; // r4@13
  int *v23; // r9@13
  int v24; // r6@13
  int v25; // r8@13
  void *v26; // r10@14
  void *v27; // r11@14
  int v28; // r4@15
  void *v29; // r0@16
  char *v30; // r5@18 OVERLAPPED
  char *v31; // r6@18 OVERLAPPED
  char *v32; // r5@25 OVERLAPPED
  char *v33; // r6@25 OVERLAPPED
  int *v34; // r0@37
  char *v35; // r0@41
  void *v36; // r0@42
  char *v37; // r0@45
  bool v39; // zf@47
  unsigned int *v40; // r2@51
  signed int v41; // r1@53
  unsigned int *v42; // r2@55
  signed int v43; // r1@57
  unsigned int *v44; // r2@59
  signed int v45; // r1@61
  unsigned int *v46; // r2@63
  signed int v47; // r1@65
  unsigned int *v48; // r2@67
  signed int v49; // r1@69
  unsigned int *v50; // r2@90
  signed int v51; // r1@92
  pthread_mutex_t *mutex; // [sp+4h] [bp-ECh]@3
  int v53; // [sp+8h] [bp-E8h]@3
  unsigned int *v54; // [sp+10h] [bp-E0h]@3
  void *s1; // [sp+14h] [bp-DCh]@1
  char v56; // [sp+18h] [bp-D8h]@13
  int v57; // [sp+2Ch] [bp-C4h]@13
  char *v58; // [sp+30h] [bp-C0h]@10
  char *v59; // [sp+34h] [bp-BCh]@10
  int v60; // [sp+38h] [bp-B8h]@10
  char *v61; // [sp+3Ch] [bp-B4h]@10
  char v62; // [sp+40h] [bp-B0h]@10
  char v63; // [sp+B0h] [bp-40h]@10
  int v64; // [sp+C4h] [bp-2Ch]@10

  v3 = a2;
  v4 = a3;
  v5 = a1;
  j_Util::toLower(&s1, *(_DWORD *)(*a2 - 12), *a2);
  if ( &pthread_create )
  {
    v6 = j_pthread_mutex_lock((pthread_mutex_t *)(v5 + 28));
    if ( v6 )
      sub_21E5E14(v6);
  }
  v54 = v3;
  mutex = (pthread_mutex_t *)(v5 + 28);
  v7 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v8 = *(_QWORD *)v5;
  v53 = v5;
  v9 = v7 % (unsigned int)(*(_QWORD *)v5 >> 32);
  v10 = *(int **)(v8 + 4 * v9);
  if ( !v10 )
    goto LABEL_10;
  v11 = *v10;
  v12 = s1;
  v13 = *(_DWORD *)(*v10 + 12);
  while ( 1 )
    if ( v13 == v7 )
    {
      v14 = *(const void **)(v11 + 4);
      v15 = *(v12 - 3);
      if ( v15 == *((_DWORD *)v14 - 3) )
      {
        v16 = j_memcmp(v12, v14, v15);
        if ( !v16 )
          break;
      }
    }
    v17 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 )
      v13 = *(_DWORD *)(v17 + 12);
      v10 = (int *)v11;
      v11 = *(_DWORD *)v11;
      if ( *(_DWORD *)(v17 + 12) % HIDWORD(v8) == v9 )
        continue;
  v39 = v10 == 0;
  if ( v10 )
    v16 = *v10;
    v39 = *v10 == 0;
  if ( v39 )
LABEL_10:
    j_Util::toLower((void **)&v64, *(_DWORD *)(*v54 - 12), *v54);
    j_Json::Value::Value(&v63, 0);
    j_Json::Reader::Reader((Json::Reader *)&v62);
    v61 = (char *)&unk_28898CC;
    v18 = *(int (__fastcall **)(int, char **, char **))(*(_DWORD *)v4 + 8);
    sub_21E8AF4((int *)&v58, (int *)v54);
    v59 = v58;
    v58 = (char *)&unk_28898CC;
    v60 = 6;
    v19 = v18(v4, &v59, &v61);
    v20 = v59 - 12;
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v59 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
      else
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = v58 - 12;
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v58 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    if ( v19 == 1 )
      j_Json::Reader::parse((int)&v62, (int *)&v61, (int)&v63, 1);
      std::make_unique<LootTable,std::string &>((int **)&v57, &v64);
      v22 = v57;
      j_Json::Value::Value((Json::Value *)&v56, (const Json::Value *)&v63);
      LootTable::deserialize(v22, (Json::Value *)&v56);
      j_Json::Value::~Value((Json::Value *)&v56);
      v23 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<LootTable,std::default_delete<LootTable>>>,std::allocator<std::pair<std::string const,std::unique_ptr<LootTable,std::default_delete<LootTable>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     v53,
                     (int **)&v64);
      v24 = v57;
      v57 = 0;
      v25 = *v23;
      *v23 = v24;
      if ( v25 )
        v26 = (void *)(*(_QWORD *)(v25 + 4) >> 32);
        v27 = (void *)*(_QWORD *)(v25 + 4);
        if ( v27 != v26 )
        {
          do
          {
            v28 = *(_DWORD *)v27;
            if ( *(_DWORD *)v27 )
            {
              v29 = *(void **)(v28 + 24);
              if ( v29 )
                j_operator delete(v29);
              *(_DWORD *)(v28 + 24) = 0;
              *(_QWORD *)&v30 = *(_QWORD *)(v28 + 12);
              if ( v30 != v31 )
              {
                do
                {
                  if ( *(_DWORD *)v30 )
                    (*(void (**)(void))(**(_DWORD **)v30 + 4))();
                  *(_DWORD *)v30 = 0;
                  v30 += 4;
                }
                while ( v31 != v30 );
                v30 = *(char **)(v28 + 12);
              }
              if ( v30 )
                j_operator delete(v30);
              *(_QWORD *)&v32 = *(_QWORD *)v28;
              if ( v32 != v33 )
                  if ( *(_DWORD *)v32 )
                    (*(void (**)(void))(**(_DWORD **)v32 + 8))();
                  *(_DWORD *)v32 = 0;
                  v32 += 4;
                while ( v33 != v32 );
                v32 = *(char **)v28;
              if ( v32 )
                j_operator delete(v32);
              j_operator delete((void *)v28);
            }
            *(_DWORD *)v27 = 0;
            v27 = (char *)v27 + 4;
          }
          while ( v27 != v26 );
          v27 = *(void **)(v25 + 4);
        }
        if ( v27 )
          j_operator delete(v27);
        v34 = (int *)(*(_DWORD *)v25 - 12);
        if ( v34 != &dword_28898C0 )
          v50 = (unsigned int *)(*(_DWORD *)v25 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
          else
            v51 = (*v50)--;
          if ( v51 <= 0 )
            j_j_j_j__ZdlPv_9(v34);
        j_operator delete((void *)v25);
        v24 = *v23;
      std::unique_ptr<LootTable,std::default_delete<LootTable>>::~unique_ptr(&v57);
    else
      v24 = 0;
    v35 = v61 - 12;
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v61 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    j_Json::Reader::~Reader((Json::Reader *)&v62);
    j_Json::Value::~Value((Json::Value *)&v63);
    v36 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v64 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
  else
    v24 = *(_DWORD *)(v16 + 8);
    j_pthread_mutex_unlock(mutex);
  v37 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)((char *)s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  return v24;
}
