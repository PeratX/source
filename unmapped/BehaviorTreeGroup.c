

_DWORD *__fastcall BehaviorTreeGroup::_addRef(BehaviorTreeGroup *this, BehaviorTreeDefinitionPtr *a2)
{
  BehaviorTreeDefinitionPtr *v2; // r4@1
  char *v3; // r8@1
  unsigned int v4; // r7@1
  int v5; // r9@1
  _DWORD *result; // r0@1
  _DWORD *v7; // r6@2
  int v8; // r5@4
  bool v9; // zf@7
  _DWORD *v10; // r0@11

  v2 = a2;
  v3 = (char *)this + 36;
  v4 = *((_DWORD *)this + 10);
  v5 = (unsigned int)a2 % *((_DWORD *)this + 10);
  result = *(_DWORD **)(*((_DWORD *)this + 9) + 4 * v5);
  if ( !result )
    goto LABEL_11;
  v7 = (_DWORD *)*result;
  while ( (BehaviorTreeDefinitionPtr *)v7[1] != a2 )
  {
    v8 = *v7;
    if ( *v7 )
    {
      result = v7;
      v7 = (_DWORD *)*v7;
      if ( *(_DWORD *)(v8 + 4) % v4 == v5 )
        continue;
    }
  }
  v9 = result == 0;
  if ( result )
    result = (_DWORD *)*result;
    v9 = result == 0;
  if ( v9 )
LABEL_11:
    v10 = j_operator new(8u);
    *v10 = 0;
    v10[1] = v2;
    result = (_DWORD *)j_j_j__ZNSt10_HashtableIP25BehaviorTreeDefinitionPtrS1_SaIS1_ENSt8__detail9_IdentityESt8equal_toIS1_ESt4hashIS1_ENS3_18_Mod_range_hashingENS3_20_Default_ranged_hashENS3_20_Prime_rehash_policyENS3_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEjjPNS3_10_Hash_nodeIS1_Lb0EEE(
                         (int)v3,
                         v5,
                         (unsigned int)v2,
                         (int)v10);
  return result;
}


void __fastcall BehaviorTreeGroup::addBehaviorTree(int a1, BehaviorTreeDefinition **a2)
{
  BehaviorTreeGroup::addBehaviorTree(a1, a2);
}


void __fastcall BehaviorTreeGroup::_loadTrees(BehaviorTreeGroup *this)
{
  BehaviorTreeGroup *v1; // r7@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  int *v5; // r4@3
  PackReport *v6; // r5@4
  int *v7; // r0@5
  int *v8; // r7@5
  void **v9; // r8@5
  const char *v10; // r9@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  int v13; // r6@15
  __int64 v14; // r0@15
  int v15; // r7@15
  PackReport *v16; // r5@15
  void *v17; // r0@15
  const void **v18; // r8@16
  const void **v19; // r9@16
  unsigned int *v20; // r2@18
  signed int v21; // r1@20
  unsigned int *v22; // r2@22
  signed int v23; // r1@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  unsigned int *v26; // r2@30
  signed int v27; // r1@32
  unsigned int *v28; // r2@50
  signed int v29; // r1@52
  unsigned int *v30; // r2@54
  signed int v31; // r1@56
  unsigned int *v32; // r2@58
  signed int v33; // r1@60
  char *v34; // r1@74
  const void **v35; // r0@75
  const void **v36; // r0@75
  int v37; // r0@75
  char *v38; // r0@75
  char *v39; // r0@76
  void *v40; // r0@77
  Json::Value *v41; // r0@78
  const Json::Value *v42; // r0@78
  void *v43; // r0@80
  int v44; // r1@81
  int v45; // r7@82
  void *v46; // r0@82
  void *v47; // r0@84
  char *v48; // r0@86
  const void **v49; // r5@88
  unsigned int *v50; // r2@90
  signed int v51; // r1@92
  int *v52; // r0@98
  int v53; // r7@105
  unsigned int *v54; // r2@107
  signed int v55; // r1@109
  char *v56; // r0@115
  unsigned int *v57; // r2@120
  signed int v58; // r1@122
  unsigned int *v59; // r2@124
  signed int v60; // r1@126
  int v61; // r5@136
  int v62; // r1@136
  void *v63; // r0@136
  int v64; // r1@137
  void *v65; // r0@137
  PackReport *v66; // r0@142
  PackReport *v67; // r4@142
  PackReport *v68; // [sp+18h] [bp-1B0h]@15
  int *v69; // [sp+1Ch] [bp-1ACh]@3
  char *v70; // [sp+20h] [bp-1A8h]@107
  int v71; // [sp+24h] [bp-1A4h]@58
  int v72; // [sp+28h] [bp-1A0h]@82
  int v73; // [sp+30h] [bp-198h]@50
  int v74; // [sp+34h] [bp-194h]@80
  char v75; // [sp+38h] [bp-190h]@78
  char v76; // [sp+48h] [bp-180h]@75
  int v77; // [sp+5Ch] [bp-16Ch]@30
  char *v78; // [sp+60h] [bp-168h]@26
  char *v79; // [sp+64h] [bp-164h]@22
  char v80; // [sp+68h] [bp-160h]@75
  char v81; // [sp+78h] [bp-150h]@75
  char *v82; // [sp+E8h] [bp-E0h]@74
  int v83; // [sp+F0h] [bp-D8h]@5
  const void **v84; // [sp+F4h] [bp-D4h]@15
  const void **v85; // [sp+F8h] [bp-D0h]@16
  char v86; // [sp+100h] [bp-C8h]@5
  int v87; // [sp+168h] [bp-60h]@5
  void *ptr; // [sp+178h] [bp-50h]@4
  unsigned int v89; // [sp+17Ch] [bp-4Ch]@1
  int v90; // [sp+180h] [bp-48h]@1
  int v91; // [sp+184h] [bp-44h]@1
  signed int v92; // [sp+188h] [bp-40h]@1
  int v93; // [sp+18Ch] [bp-3Ch]@1
  int v94; // [sp+190h] [bp-38h]@6
  PackReport *v95; // [sp+194h] [bp-34h]@1
  PackReport *v96; // [sp+198h] [bp-30h]@4

  v1 = this;
  j_std::vector<PackInstance,std::allocator<PackInstance>>::vector(
    (int)&v95,
    (unsigned __int64 *)(*(_DWORD *)(*(_DWORD *)this + 64) + 4));
  v90 = 0;
  v91 = 0;
  v92 = 1065353216;
  v93 = 0;
  HIDWORD(v2) = 10;
  LODWORD(v2) = &v92;
  v3 = sub_21E6254(v2);
  v89 = v3;
  if ( v3 == 1 )
  {
    v69 = (int *)v1;
    v94 = 0;
    v5 = &v94;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = (int *)j_operator new(4 * v3);
    j___aeabi_memclr4_0((int)v5, v4);
  ptr = v5;
  v6 = v96;
  if ( v96 != v95 )
    v7 = (int *)&v86;
    v8 = &v87;
    v9 = (void **)&v83;
    v10 = "behavior_trees";
    do
    {
      v68 = (PackReport *)((char *)v6 - 120);
      v13 = (int)v7;
      j_PackReport::PackReport(v7, (int *)v6 - 30);
      v14 = *((_QWORD *)v6 - 2);
      *((_BYTE *)v8 + 8) = *((_BYTE *)v6 - 8);
      *(_QWORD *)v8 = v14;
      v15 = *v69;
      sub_21E94B4(v9, v10);
      v16 = (PackReport *)v13;
      j_ResourcePackManager::getResourcesOfGroup((int)&v84, v15, v13, (int)v9);
      v17 = (void *)(v83 - 12);
      if ( (int *)(v83 - 12) != &dword_28898C0 )
      {
        v11 = (unsigned int *)(v83 - 4);
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
          j_j_j_j__ZdlPv_9(v17);
      }
      v18 = v85;
      v19 = v84;
      if ( v84 != v85 )
        do
          v82 = (char *)&unk_28898CC;
          j_PackInstance::getResource(v13, (int)v19, &v82);
          v34 = v82;
          if ( *((_DWORD *)v82 - 3) )
          {
            j_Json::Reader::Reader((Json::Reader *)&v81);
            j_Json::Value::Value(&v80, 0);
            j_PackInstance::getPackId((PackInstance *)&v76, v13);
            j_mce::UUID::asString((mce::UUID *)&v77);
            v35 = sub_21E7408((const void **)&v77, ":", 1u);
            v78 = (char *)*v35;
            *v35 = &unk_28898CC;
            v36 = sub_21E72F0((const void **)&v78, v19);
            v79 = (char *)*v36;
            *v36 = &unk_28898CC;
            v37 = j_Json::Reader::parse((int)&v81, (int *)&v82, (int)&v80, 1);
            j_JSONReadVerifier::verifyRead((const char **)&v79, (int)&v81, v37);
            v38 = v79 - 12;
            if ( (int *)(v79 - 12) != &dword_28898C0 )
            {
              v22 = (unsigned int *)(v79 - 4);
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
                j_j_j_j__ZdlPv_9(v38);
            }
            v39 = v78 - 12;
            if ( (int *)(v78 - 12) != &dword_28898C0 )
              v24 = (unsigned int *)(v78 - 4);
                  v25 = __ldrex(v24);
                while ( __strex(v25 - 1, v24) );
                v25 = (*v24)--;
              if ( v25 <= 0 )
                j_j_j_j__ZdlPv_9(v39);
            v40 = (void *)(v77 - 12);
            if ( (int *)(v77 - 12) != &dword_28898C0 )
              v26 = (unsigned int *)(v77 - 4);
                  v27 = __ldrex(v26);
                while ( __strex(v27 - 1, v26) );
                v27 = (*v26)--;
              if ( v27 <= 0 )
                j_j_j_j__ZdlPv_9(v40);
            v41 = (Json::Value *)j_Json::Value::operator[]((Json::Value *)&v80, "minecraft:behavior_tree");
            v42 = (const Json::Value *)j_Json::Value::operator[](v41, "minecraft:name");
            j_Json::Value::Value((Json::Value *)&v75, v42);
            if ( !j_Json::Value::isNull((Json::Value *)&v75) && j_Json::Value::isString((Json::Value *)&v75) )
              sub_21E94B4((void **)&v73, (const char *)&unk_257BC67);
              j_Json::Value::asString(&v74, (int)&v75, &v73);
              v43 = (void *)(v73 - 12);
              if ( (int *)(v73 - 12) != &dword_28898C0 )
                v28 = (unsigned int *)(v73 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v29 = __ldrex(v28);
                  while ( __strex(v29 - 1, v28) );
                }
                else
                  v29 = (*v28)--;
                if ( v29 <= 0 )
                  j_j_j_j__ZdlPv_9(v43);
              v44 = v74;
              if ( *(_DWORD *)(v74 - 12) )
                v45 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::pair<std::string,PackInstance *>>,std::allocator<std::pair<std::string const,std::pair<std::string,PackInstance *>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                        (unsigned __int64 *)&ptr,
                        (int **)&v74);
                sub_21E8AF4(&v71, (int *)v19);
                v72 = v13;
                xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                  (int *)v45,
                  &v71);
                *(_DWORD *)(v45 + 4) = v72;
                v46 = (void *)(v71 - 12);
                if ( (int *)(v71 - 12) != &dword_28898C0 )
                  v32 = (unsigned int *)(v71 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v33 = __ldrex(v32);
                    while ( __strex(v33 - 1, v32) );
                  }
                  else
                    v33 = (*v32)--;
                  if ( v33 <= 0 )
                    j_j_j_j__ZdlPv_9(v46);
                v44 = v74;
              v47 = (void *)(v44 - 12);
              if ( (int *)(v44 - 12) != &dword_28898C0 )
                v30 = (unsigned int *)(v44 - 4);
                    v31 = __ldrex(v30);
                  while ( __strex(v31 - 1, v30) );
                  v31 = (*v30)--;
                if ( v31 <= 0 )
                  j_j_j_j__ZdlPv_9(v47);
            j_Json::Value::~Value((Json::Value *)&v75);
            j_Json::Value::~Value((Json::Value *)&v80);
            j_Json::Reader::~Reader((Json::Reader *)&v81);
            v34 = v82;
          }
          v48 = v34 - 12;
          if ( (int *)(v34 - 12) != &dword_28898C0 )
            v20 = (unsigned int *)(v34 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v21 = __ldrex(v20);
              while ( __strex(v21 - 1, v20) );
            else
              v21 = (*v20)--;
            if ( v21 <= 0 )
              j_j_j_j__ZdlPv_9(v48);
          ++v19;
        while ( v19 != v18 );
        v19 = v85;
        v49 = v84;
        if ( v84 != v85 )
            v52 = (int *)((char *)*v49 - 12);
            if ( v52 != &dword_28898C0 )
              v50 = (unsigned int *)((char *)*v49 - 4);
                  v51 = __ldrex(v50);
                while ( __strex(v51 - 1, v50) );
                v51 = (*v50)--;
              if ( v51 <= 0 )
                j_j_j_j__ZdlPv_9(v52);
            ++v49;
          while ( v49 != v19 );
          v19 = v84;
        v16 = (PackReport *)v13;
      v9 = (void **)&v83;
      if ( v19 )
        j_operator delete(v19);
      j_PackReport::~PackReport(v16);
      v10 = "behavior_trees";
      v8 = &v87;
      v7 = (int *)v16;
      v6 = v68;
    }
    while ( v68 != v95 );
  v53 = v90;
  if ( v90 )
      v70 = (char *)&unk_28898CC;
      j_PackInstance::getResource(*(_DWORD *)(v53 + 12), v53 + 8, &v70);
      j_BehaviorTreeGroup::loadTree((int)v69, (int *)&v70);
      v56 = v70 - 12;
      if ( (int *)(v70 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v70 - 4);
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j__ZdlPv_9(v56);
      v53 = *(_DWORD *)v53;
    while ( v53 );
    v53 = v90;
  while ( v53 )
    v61 = v53;
    v62 = *(_DWORD *)(v53 + 8);
    v53 = *(_DWORD *)v53;
    v63 = (void *)(v62 - 12);
    if ( (int *)(v62 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v62 - 4);
      if ( &pthread_create )
        __dmb();
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
      else
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v63);
    v64 = *(_DWORD *)(v61 + 4);
    v65 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v64 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v65);
    j_operator delete((void *)v61);
  j___aeabi_memclr4_0((int)ptr, 4 * v89);
  if ( ptr && &v94 != ptr )
    j_operator delete(ptr);
  v67 = v96;
  v66 = v95;
  if ( v95 != v96 )
      v66 = (PackReport *)((char *)j_PackReport::~PackReport(v66) + 120);
    while ( v67 != v66 );
    v66 = v95;
  if ( v66 )
    j_operator delete((void *)v66);
}


BehaviorTreeDefinitionPtr *__fastcall BehaviorTreeGroup::tryGetDefinition(BehaviorTreeDefinitionPtr *a1, int a2, int **a3)
{
  BehaviorTreeGroup *v3; // r5@1
  BehaviorTreeDefinitionPtr *v4; // r4@1
  int v5; // r0@1
  BehaviorTreeDefinitionPtr *result; // r0@2

  v3 = (BehaviorTreeGroup *)a2;
  v4 = a1;
  v5 = j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorTreeDefinition,std::default_delete<BehaviorTreeDefinition>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorTreeDefinition,std::default_delete<BehaviorTreeDefinition>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a2 + 8),
         a3);
  if ( v5 )
    result = j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr(v4, v3, *(_DWORD *)(v5 + 8));
  else
    result = j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr(v4, (int)&BehaviorTreeDefinitionPtr::NONE);
  return result;
}


int __fastcall BehaviorTreeGroup::BehaviorTreeGroup(double a1, int a2)
{
  int v2; // r4@1
  double v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  unsigned int v6; // r0@4
  int v7; // r6@6
  void *v8; // r5@6

  v2 = LODWORD(a1);
  *(_QWORD *)LODWORD(a1) = *(_QWORD *)((char *)&a1 + 4);
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 0;
  *(_DWORD *)(LODWORD(a1) + 24) = 1065353216;
  LODWORD(a1) += 24;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v3 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(a1)));
  *(_DWORD *)(v2 + 12) = LODWORD(v3);
  if ( LODWORD(v3) == 1 )
  {
    *(_DWORD *)(v2 + 32) = 0;
    v5 = (void *)(v2 + 32);
  }
  else
    if ( LODWORD(v3) >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * LODWORD(v3);
    v5 = j_operator new(4 * LODWORD(v3));
    j___aeabi_memclr4_0((int)v5, v4);
  *(_DWORD *)(v2 + 8) = v5;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 52) = 1065353216;
  LODWORD(v3) = v2 + 52;
  *(_DWORD *)(LODWORD(v3) + 4) = 0;
  v6 = sub_21E6254(v3);
  *(_DWORD *)(v2 + 40) = v6;
  if ( v6 == 1 )
    *(_DWORD *)(v2 + 60) = 0;
    v8 = (void *)(v2 + 60);
    if ( v6 >= 0x40000000 )
    v7 = 4 * v6;
    v8 = j_operator new(4 * v6);
    j___aeabi_memclr4_0((int)v8, v7);
  *(_DWORD *)(v2 + 36) = v8;
  return v2;
}


void __fastcall BehaviorTreeGroup::addBehaviorTree(int a1, BehaviorTreeDefinition **a2)
{
  BehaviorTreeDefinition **v2; // r4@1
  int v3; // r5@1
  int **v4; // r1@1
  BehaviorTreeDefinition **v5; // r0@2
  BehaviorTreeDefinition *v6; // r1@2
  BehaviorTreeDefinition *v7; // r4@2
  int v8; // r0@3
  int v9; // r1@5
  void *v10; // r0@5
  int *v11; // r0@6
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15

  v2 = a2;
  v3 = a1;
  v4 = (int **)j_BehaviorTreeDefinition::getName(*a2);
  if ( *(*v4 - 3) )
  {
    v5 = (BehaviorTreeDefinition **)j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<BehaviorTreeDefinition,std::default_delete<BehaviorTreeDefinition>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorTreeDefinition,std::default_delete<BehaviorTreeDefinition>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                      v3 + 8,
                                      v4);
    v6 = *v2;
    *v2 = 0;
    v7 = *v5;
    *v5 = v6;
    if ( v7 )
    {
      v8 = *((_DWORD *)v7 + 2);
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 4))();
      *((_DWORD *)v7 + 2) = 0;
      v9 = *((_DWORD *)v7 + 1);
      v10 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
      {
        v12 = (unsigned int *)(v9 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      }
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
        v14 = (unsigned int *)(*(_DWORD *)v7 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      j_operator delete((void *)v7);
    }
  }
}


int *__fastcall BehaviorTreeGroup::loadTree(int a1, Json::Value *a2, int *a3)
{
  int v3; // r9@1
  int *v4; // r6@1
  Json::Value *v5; // r7@1
  int *v6; // r11@1
  Json::Value *v7; // r0@1
  const Json::Value *v8; // r0@1
  int *v9; // r5@2
  int v10; // r7@5
  int v11; // r0@6
  int v12; // r1@8
  void *v13; // r0@8
  int *v14; // r0@9
  int v15; // r0@11
  __int64 v16; // r6@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  int *v19; // r0@26
  unsigned __int64 *v20; // r5@31
  int v21; // r1@31
  int v22; // r0@32
  void *v23; // r0@35
  int v24; // r0@38
  int v25; // r1@40
  void *v26; // r0@40
  int *v27; // r0@41
  unsigned int *v29; // r2@44
  signed int v30; // r1@46
  unsigned int *v31; // r2@48
  signed int v32; // r1@50
  unsigned int *v33; // r2@60
  signed int v34; // r1@62
  unsigned int *v35; // r2@64
  signed int v36; // r1@66
  unsigned int *v37; // r2@68
  signed int v38; // r1@70
  char v39; // [sp+8h] [bp-68h]@31
  int v40; // [sp+18h] [bp-58h]@31
  int *v41; // [sp+1Ch] [bp-54h]@16
  int *v42; // [sp+20h] [bp-50h]@16
  int v43; // [sp+28h] [bp-48h]@16
  char v44; // [sp+2Ch] [bp-44h]@12
  int *v45; // [sp+34h] [bp-3Ch]@5
  char v46; // [sp+38h] [bp-38h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (int *)j_operator new(0xCu);
  j_BehaviorTreeDefinition::BehaviorTreeDefinition(v6, v4);
  v7 = (Json::Value *)j_Json::Value::operator[](v5, "minecraft:behavior_tree");
  v8 = (const Json::Value *)j_Json::Value::operator[](v7, "minecraft:root");
  j_Json::Value::Value((Json::Value *)&v46, v8);
  if ( j_Json::Value::isNull((Json::Value *)&v46) )
  {
    v9 = 0;
  }
  else if ( j_Json::Value::isObject((Json::Value *)&v46) == 1 )
    if ( j_Json::Value::size((Json::Value *)&v46) == 1 )
    {
      v45 = v6;
      j_BehaviorTreeGroup::addBehaviorTree(v3, (BehaviorTreeDefinition **)&v45);
      v10 = (int)v45;
      if ( v45 )
      {
        v11 = v45[2];
        if ( v11 )
          (*(void (**)(void))(*(_DWORD *)v11 + 4))();
        *(_DWORD *)(v10 + 8) = 0;
        v12 = *(_DWORD *)(v10 + 4);
        v13 = (void *)(v12 - 12);
        if ( (int *)(v12 - 12) != &dword_28898C0 )
        {
          v35 = (unsigned int *)(v12 - 4);
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
            j_j_j_j__ZdlPv_9(v13);
        }
        v14 = (int *)(*(_DWORD *)v10 - 12);
        if ( v14 != &dword_28898C0 )
          v37 = (unsigned int *)(*(_DWORD *)v10 - 4);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        j_operator delete((void *)v10);
      }
      v45 = 0;
      v15 = j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorTreeDefinition,std::default_delete<BehaviorTreeDefinition>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorTreeDefinition,std::default_delete<BehaviorTreeDefinition>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
              (unsigned __int64 *)(v3 + 8),
              (int **)v4);
      if ( v15 )
        j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr(
          (BehaviorTreeDefinitionPtr *)&v44,
          (BehaviorTreeGroup *)v3,
          *(_DWORD *)(v15 + 8));
      else
          (int)&BehaviorTreeDefinitionPtr::NONE);
      j_Json::Value::getMemberNames((Json::Value *)&v41, (int)&v46);
      sub_21E8AF4(&v43, v41);
      v16 = *(_QWORD *)&v41;
      if ( v41 != v42 )
        do
          v19 = (int *)(*(_DWORD *)v16 - 12);
          if ( v19 != &dword_28898C0 )
            v17 = (unsigned int *)(*(_DWORD *)v16 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v18 = __ldrex(v17);
              while ( __strex(v18 - 1, v17) );
            }
            else
              v18 = (*v17)--;
            if ( v18 <= 0 )
              j_j_j_j__ZdlPv_9(v19);
          LODWORD(v16) = v16 + 4;
        while ( (_DWORD)v16 != HIDWORD(v16) );
        LODWORD(v16) = v41;
      if ( (_DWORD)v16 )
        j_operator delete((void *)v16);
      v20 = *(unsigned __int64 **)(v3 + 4);
      j_Json::Value::Value((Json::Value *)&v39, (const Json::Value *)&v46);
      j_BehaviorFactory::loadNodeDefinition(&v40, v20, (int **)&v43, (Json::Value *)&v39, (int)&v44);
      j_Json::Value::~Value((Json::Value *)&v39);
      v21 = v40;
      v9 = 0;
      if ( v40 )
        v22 = v6[2];
        v40 = 0;
        v9 = v6;
        v6[2] = v21;
        if ( v22 )
          (*(void (**)(void))(*(_DWORD *)v22 + 4))();
          v9 = v6;
          if ( v40 )
            (*(void (**)(void))(*(_DWORD *)v40 + 4))();
            v9 = v6;
      v23 = (void *)(v43 - 12);
      if ( (int *)(v43 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v43 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
        else
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BehaviorTreeDefinitionPtr *)&v44);
      v6 = 0;
    }
    else
  else
  j_Json::Value::~Value((Json::Value *)&v46);
  if ( v6 )
    v24 = v6[2];
    if ( v24 )
      (*(void (**)(void))(*(_DWORD *)v24 + 4))();
    v6[2] = 0;
    v25 = v6[1];
    v26 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
        __dmb();
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v27 = (int *)(*v6 - 12);
    if ( v27 != &dword_28898C0 )
      v31 = (unsigned int *)(*v6 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    j_operator delete(v6);
  return v9;
}


int __fastcall BehaviorTreeGroup::getDefinitionIdentifiers(int result, int a2)
{
  int v2; // r9@1
  int *v3; // r2@1
  _DWORD *v4; // r4@1
  int *i; // r0@2
  int *v6; // r1@4

  v2 = result;
  v3 = 0;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  v4 = *(_DWORD **)(a2 + 16);
  if ( v4 )
  {
    for ( i = 0; ; i = (int *)*(_QWORD *)(v2 + 4) )
    {
      v6 = v4 + 1;
      if ( i == v3 )
      {
        result = (int)j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
                        (unsigned __int64 *)v2,
                        v6);
      }
      else
        result = (int)(sub_21E8AF4(i, v6) + 1);
        *(_DWORD *)(v2 + 4) = result;
      v4 = (_DWORD *)*v4;
      if ( !v4 )
        break;
      v3 = (int *)(*(_QWORD *)(v2 + 4) >> 32);
    }
  }
  return result;
}


int *__fastcall BehaviorTreeGroup::loadTree(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int *v4; // r5@2
  Json::Value *v5; // r0@3
  int v6; // r6@3
  void *v7; // r0@3
  void *v8; // r0@4
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int v14; // [sp+8h] [bp-B0h]@3
  int v15; // [sp+Ch] [bp-ACh]@3
  char v16; // [sp+10h] [bp-A8h]@3
  char v17; // [sp+20h] [bp-98h]@1
  char v18; // [sp+34h] [bp-84h]@1

  v2 = a1;
  v3 = a2;
  j_Json::Reader::Reader((Json::Reader *)&v18);
  j_Json::Value::Value(&v17, 0);
  j_Json::Reader::parse((int)&v18, v3, (int)&v17, 1);
  if ( j_Json::Value::isNull((Json::Value *)&v17) )
  {
    v4 = 0;
  }
  else
    j_Json::Value::Value((Json::Value *)&v16, (const Json::Value *)&v17);
    v5 = (Json::Value *)j_Json::Value::operator[]((Json::Value *)&v17, "minecraft:behavior_tree");
    v6 = j_Json::Value::operator[](v5, "minecraft:name");
    sub_21E94B4((void **)&v14, (const char *)&unk_257BC67);
    j_Json::Value::asString(&v15, v6, &v14);
    v4 = j_BehaviorTreeGroup::loadTree(v2, (Json::Value *)&v16, &v15);
    v7 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v15 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
    v8 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v14 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    j_Json::Value::~Value((Json::Value *)&v16);
    if ( v4 )
      EntityInteraction::setInteractText(v4 + 1, v3);
    else
      v4 = 0;
  j_Json::Value::~Value((Json::Value *)&v17);
  j_Json::Reader::~Reader((Json::Reader *)&v18);
  return v4;
}


BehaviorTreeDefinitionPtr *__fastcall BehaviorTreeGroup::_removeRef(BehaviorTreeGroup *this, BehaviorTreeDefinitionPtr *a2)
{
  BehaviorTreeGroup *v2; // r9@1
  BehaviorTreeDefinitionPtr *v3; // r7@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@1
  int v6; // r4@1
  BehaviorTreeDefinitionPtr *result; // r0@1
  unsigned int v8; // r1@1
  unsigned int v9; // r11@1
  void **v10; // r10@1
  void **v11; // r8@2
  void **v12; // r4@2
  unsigned int v13; // r0@5
  int v14; // r1@5
  void **v15; // r7@8
  int v16; // r1@10
  _DWORD *v17; // r5@13
  int v18; // r1@14
  int v19; // r1@15
  int v20; // [sp+0h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 10);
  v5 = (unsigned int)a2;
  v6 = *((_DWORD *)v2 + 9);
  v20 = *((_DWORD *)v2 + 9);
  v8 = (unsigned int)a2 % v4;
  result = (BehaviorTreeDefinitionPtr *)(v5 / v4);
  v9 = v8;
  v10 = *(void ***)(v6 + 4 * v8);
  if ( v10 )
  {
    v11 = (void **)*v10;
    v12 = *(void ***)(v6 + 4 * v8);
    while ( 1 )
    {
      result = (BehaviorTreeDefinitionPtr *)v11[1];
      if ( result == v3 )
        break;
      if ( *v11 )
      {
        v13 = *((_DWORD *)*v11 + 1);
        v14 = v13 % v4;
        result = (BehaviorTreeDefinitionPtr *)(v13 / v4);
        v12 = v11;
        v11 = (void **)*v11;
        if ( v14 == v9 )
          continue;
      }
      return result;
    }
    if ( v12 )
      v15 = (void **)*v12;
      if ( v10 != v12 )
        if ( *v15 )
        {
          v16 = *((_DWORD *)*v15 + 1) % v4;
          if ( v16 != v9 )
            *(_DWORD *)(v20 + 4 * v16) = v12;
        }
        goto LABEL_20;
      v17 = *v15;
      if ( *v15 )
        v18 = v17[1] % v4;
        if ( v18 == v9 )
LABEL_20:
          *v12 = *v15;
          j_operator delete(v15);
          result = (BehaviorTreeDefinitionPtr *)(*((_DWORD *)v2 + 12) - 1);
          *((_DWORD *)v2 + 12) = result;
          return result;
        *(_DWORD *)(v20 + 4 * v18) = v10;
        v19 = *((_DWORD *)v2 + 9);
        v10 = *(void ***)(v19 + 4 * v9);
      else
      if ( (void **)((char *)v2 + 44) == v10 )
        *v10 = v17;
      *(_DWORD *)(v19 + 4 * v9) = 0;
      goto LABEL_20;
  }
  return result;
}


BehaviorTreeGroup *__fastcall BehaviorTreeGroup::~BehaviorTreeGroup(BehaviorTreeGroup *this)
{
  BehaviorTreeGroup *v1; // r10@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r2@2
  int v4; // r3@3
  _DWORD *v5; // r5@5
  char *v6; // r0@6
  _DWORD *v7; // r7@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  _DWORD *v10; // r6@19
  _DWORD *v11; // r0@19
  int v12; // r1@19
  void *v13; // r0@19
  char *v14; // r0@21

  v1 = this;
  v2 = (_DWORD *)*((_DWORD *)this + 11);
  if ( v2 )
  {
    v3 = v2;
    do
    {
      v4 = v3[1];
      *(_DWORD *)v4 = 0;
      *(_DWORD *)(v4 + 4) = 0;
      v3 = (_DWORD *)*v3;
    }
    while ( v3 );
    if ( v2 )
      do
      {
        v5 = (_DWORD *)*v2;
        j_operator delete(v2);
        v2 = v5;
      }
      while ( v5 );
  }
  j___aeabi_memclr4_0(*(_QWORD *)((char *)v1 + 36), 4 * (*(_QWORD *)((char *)v1 + 36) >> 32));
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 0;
  v6 = (char *)*((_DWORD *)v1 + 9);
  if ( v6 && (char *)v1 + 60 != v6 )
    j_operator delete(v6);
  v7 = (_DWORD *)*((_DWORD *)v1 + 4);
  while ( v7 )
    v10 = v7;
    v11 = v7 + 2;
    v7 = (_DWORD *)*v7;
    j_std::unique_ptr<BehaviorTreeDefinition,std::default_delete<BehaviorTreeDefinition>>::~unique_ptr(v11);
    v12 = v10[1];
    v13 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      else
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    j_operator delete(v10);
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  v14 = (char *)*((_DWORD *)v1 + 2);
  if ( v14 && (char *)v1 + 32 != v14 )
    j_operator delete(v14);
  return v1;
}
