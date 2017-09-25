

int __fastcall TradeTables::fetchTable(unsigned __int64 *a1, int **a2)
{
  int v2; // r0@1
  int result; // r0@2

  v2 = std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<TradeTable,std::default_delete<TradeTable>>>,std::allocator<std::pair<std::string const,std::unique_ptr<TradeTable,std::default_delete<TradeTable>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a1,
         a2);
  if ( v2 )
    result = *(_DWORD *)(v2 + 8);
  else
    result = 0;
  return result;
}


void __fastcall TradeTables::reload(TradeTables *this, Level *a2)
{
  Level *v2; // r4@1
  TradeTables *v3; // r7@1
  int v4; // r0@1
  _DWORD *v5; // r1@2
  int v6; // r6@2
  _DWORD *v7; // r5@3
  int v8; // r1@4
  int i; // r8@6
  int v10; // r0@9
  int *v11; // r9@10
  void *v12; // r4@10
  int v13; // r10@10
  int (__fastcall *v14)(int, int *, int *); // r6@10
  int v15; // r7@10
  void *v16; // r0@10
  void *v17; // r0@11
  int v18; // r2@13
  int v19; // r3@13
  int *v20; // r0@16
  int v21; // r7@16
  void *v22; // r4@17
  void *v23; // r6@17
  Trade *v24; // r0@18
  Trade *v25; // r5@18
  int *v26; // r0@27
  void *v27; // r0@30
  void *v28; // r6@32
  void *v29; // r7@32
  Trade *v30; // r0@33
  Trade *v31; // r5@33
  int *v32; // r0@42
  unsigned int *v33; // r2@44
  signed int v34; // r1@46
  unsigned int *v35; // r2@48
  signed int v36; // r1@50
  unsigned int *v37; // r2@52
  signed int v38; // r1@54
  unsigned int *v39; // r2@56
  signed int v40; // r1@58
  unsigned int *v41; // r2@72
  signed int v42; // r1@74
  int v43; // [sp+0h] [bp-D0h]@0
  int (**v44)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+4h] [bp-CCh]@5
  int *v45; // [sp+8h] [bp-C8h]@6
  int v46; // [sp+Ch] [bp-C4h]@6
  void *v47; // [sp+10h] [bp-C0h]@5
  int v48; // [sp+14h] [bp-BCh]@4
  int v49; // [sp+18h] [bp-B8h]@10
  int v50; // [sp+1Ch] [bp-B4h]@10
  int v51; // [sp+20h] [bp-B0h]@10
  int v52; // [sp+24h] [bp-ACh]@10
  int v53[4]; // [sp+28h] [bp-A8h]@10
  int v54[28]; // [sp+38h] [bp-98h]@10

  v2 = a2;
  v3 = this;
  v4 = (*(int (__fastcall **)(Level *))(*(_DWORD *)a2 + 120))(a2);
  if ( v4 )
  {
    v5 = (_DWORD *)*((_DWORD *)v3 + 2);
    v6 = v4;
    if ( v5 )
    {
      do
      {
        v7 = (_DWORD *)*v5;
        std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,std::unique_ptr<TradeTable,std::default_delete<TradeTable>>>,true>>>::_M_deallocate_node(
          (int)v3,
          (int)v5);
        v5 = v7;
      }
      while ( v7 );
    }
    _aeabi_memclr4(*(_QWORD *)v3, 4 * (*(_QWORD *)v3 >> 32));
    *((_DWORD *)v3 + 2) = 0;
    *((_DWORD *)v3 + 3) = 0;
    v8 = *(_DWORD *)(Level::getEntityDefinitions(v2) + 68);
    v48 = v6;
    if ( v8 )
      v47 = &unk_28898CC;
      v44 = &pthread_create;
        v45 = (int *)v8;
        v46 = (int)v3;
        for ( i = *(_DWORD *)(v8 + 16); i; i = *(_DWORD *)i )
        {
          v10 = *(_DWORD *)(i + 8);
          if ( *(_DWORD *)(*(_DWORD *)(v10 + 3040) - 12) )
          {
            v11 = (int *)(v10 + 3040);
            v12 = operator new(0x10u);
            sub_21E8AF4((int *)v12, v11);
            *((_DWORD *)v12 + 1) = 0;
            v13 = (int)v12 + 4;
            *(_DWORD *)(v13 + 4) = 0;
            *(_DWORD *)(v13 + 8) = 0;
            Json::Reader::Reader((Json::Reader *)v54);
            Json::Value::Value(v53, 0);
            v52 = (int)v47;
            v14 = *(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v48 + 8);
            sub_21E8AF4(&v49, v11);
            v50 = v49;
            v49 = (int)v47;
            v51 = 0;
            v15 = v14(v48, &v50, &v52);
            v16 = (void *)(v50 - 12);
            if ( (int *)(v50 - 12) != &dword_28898C0 )
            {
              v33 = (unsigned int *)(v50 - 4);
              if ( v44 )
              {
                __dmb();
                do
                  v34 = __ldrex(v33);
                while ( __strex(v34 - 1, v33) );
              }
              else
                v34 = (*v33)--;
              if ( v34 <= 0 )
                j_j_j_j__ZdlPv_9(v16);
            }
            v17 = (void *)(v49 - 12);
            if ( (int *)(v49 - 12) != &dword_28898C0 )
              v35 = (unsigned int *)(v49 - 4);
                  v36 = __ldrex(v35);
                while ( __strex(v36 - 1, v35) );
                v36 = (*v35)--;
              if ( v36 <= 0 )
                j_j_j_j__ZdlPv_9(v17);
            if ( v15 == 1 && Json::Reader::parse((int)v54, &v52, (int)v53, 1) == 1 )
              parseAllTradeJson(
                (int)v12 + 4,
                (Json::Value *)v53,
                v18,
                v19,
                v43,
                (int)v44,
                (int)v45,
                v46,
                (int)v47,
                v48,
                v49,
                v50,
                v51,
                v52,
                v53[0],
                v53[1],
                v53[2],
                v53[3],
                v54[0],
                v54[1],
                v54[2],
                v54[3],
                v54[4],
                v54[5]);
            if ( (unsigned int)*(_QWORD *)((char *)v12 + 4) != *(_QWORD *)((char *)v12 + 4) >> 32 )
              v20 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<TradeTable,std::default_delete<TradeTable>>>,std::allocator<std::pair<std::string const,std::unique_ptr<TradeTable,std::default_delete<TradeTable>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                             v46,
                             (int **)v11);
              v21 = *v20;
              *v20 = (int)v12;
              if ( v21 )
                v23 = (void *)(*(_QWORD *)(v21 + 4) >> 32);
                v22 = (void *)*(_QWORD *)(v21 + 4);
                if ( v22 != v23 )
                {
                  do
                  {
                    v25 = (Trade *)(*(_QWORD *)v22 >> 32);
                    v24 = (Trade *)*(_QWORD *)v22;
                    if ( v24 != v25 )
                    {
                      do
                        v24 = (Trade *)((char *)Trade::~Trade(v24) + 32);
                      while ( v25 != v24 );
                      v24 = *(Trade **)v22;
                    }
                    if ( v24 )
                      operator delete((void *)v24);
                    v22 = (char *)v22 + 12;
                  }
                  while ( v22 != v23 );
                  v22 = *(void **)(v21 + 4);
                }
                if ( v22 )
                  operator delete(v22);
                v26 = (int *)(*(_DWORD *)v21 - 12);
                if ( v26 != &dword_28898C0 )
                  v41 = (unsigned int *)(*(_DWORD *)v21 - 4);
                  if ( v44 )
                    __dmb();
                    do
                      v42 = __ldrex(v41);
                    while ( __strex(v42 - 1, v41) );
                  else
                    v42 = (*v41)--;
                  if ( v42 <= 0 )
                    j_j_j_j__ZdlPv_9(v26);
                operator delete((void *)v21);
              v12 = 0;
            v27 = (void *)(v52 - 12);
            if ( (int *)(v52 - 12) != &dword_28898C0 )
              v37 = (unsigned int *)(v52 - 4);
                  v38 = __ldrex(v37);
                while ( __strex(v38 - 1, v37) );
                v38 = (*v37)--;
              if ( v38 <= 0 )
                j_j_j_j__ZdlPv_9(v27);
            Json::Value::~Value((Json::Value *)v53);
            Json::Reader::~Reader((Json::Reader *)v54);
            if ( v12 )
              v28 = (void *)(*(_QWORD *)((char *)v12 + 4) >> 32);
              v29 = (void *)*(_QWORD *)((char *)v12 + 4);
              if ( v29 != v28 )
                  v31 = (Trade *)(*(_QWORD *)v29 >> 32);
                  v30 = (Trade *)*(_QWORD *)v29;
                  if ( v30 != v31 )
                      v30 = (Trade *)((char *)Trade::~Trade(v30) + 32);
                    while ( v31 != v30 );
                    v30 = *(Trade **)v29;
                  if ( v30 )
                    operator delete((void *)v30);
                  v29 = (char *)v29 + 12;
                while ( v29 != v28 );
                v29 = (void *)*((_DWORD *)v12 + 1);
              if ( v29 )
                operator delete(v29);
              v32 = (int *)(*(_DWORD *)v12 - 12);
              if ( v32 != &dword_28898C0 )
                v39 = (unsigned int *)(*(_DWORD *)v12 - 4);
                if ( v44 )
                  __dmb();
                    v40 = __ldrex(v39);
                  while ( __strex(v40 - 1, v39) );
                else
                  v40 = (*v39)--;
                if ( v40 <= 0 )
                  j_j_j_j__ZdlPv_9(v32);
              operator delete(v12);
          }
        }
        v3 = (TradeTables *)v46;
        v8 = *v45;
      while ( *v45 );
  }
}


void __fastcall TradeTables::reload(TradeTables *this, Level *a2)
{
  TradeTables::reload(this, a2);
}
