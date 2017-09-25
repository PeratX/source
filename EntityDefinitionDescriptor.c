

EntityDefinitionDescriptor *__fastcall EntityDefinitionDescriptor::subtract(EntityDefinitionDescriptor *this, const EntityDefinitionDescriptor *a2)
{
  const EntityDefinitionDescriptor *v2; // r11@1
  EntityDefinitionDescriptor *v3; // r8@1
  const void **v4; // r4@1
  const void **v5; // r10@1
  int v6; // r5@4
  int v7; // r9@4
  const void *v8; // r7@5
  size_t v9; // r6@5
  int v10; // r0@10
  signed int v11; // r1@11
  int v12; // r7@12
  GoalDefinition *v13; // r0@15
  __int64 v14; // r0@16
  _DWORD *v15; // r4@17
  signed int v16; // r0@18
  int v17; // r10@20
  const void **v18; // r9@21
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  int v21; // r4@29
  int v22; // r5@29
  const void *v23; // r7@30
  size_t v24; // r6@30
  int v25; // r0@35
  signed int v26; // r1@36
  int v27; // r4@37
  int v28; // r1@38
  int v29; // r2@38
  int v30; // r3@38
  int v31; // r1@40
  void *v32; // r0@40
  int i; // r4@42
  int v34; // r0@43
  int v35; // r7@43
  int v36; // r1@44
  _DWORD *v37; // r0@44
  _DWORD *v38; // r2@45
  int j; // r4@250
  _DWORD *v40; // r7@254
  unsigned int *v41; // r2@255
  signed int v42; // r1@257
  int *v43; // r0@263
  GoalDefinition *v44; // r0@267
  GoalDefinition *v45; // r4@267
  _DWORD *ptr; // [sp+8h] [bp-40h]@20
  void *v48; // [sp+Ch] [bp-3Ch]@1
  const void **v49; // [sp+10h] [bp-38h]@1

  v2 = a2;
  v3 = this;
  std::vector<GoalDefinition,std::allocator<GoalDefinition>>::vector((int)&v48, (unsigned __int64 *)((char *)a2 + 36));
  v5 = v49;
  v4 = (const void **)v48;
  while ( v4 != v5 )
  {
    v7 = *(_QWORD *)((char *)v3 + 36) >> 32;
    v6 = *(_QWORD *)((char *)v3 + 36);
    if ( v6 == v7 )
    {
LABEL_2:
      v4 += 91;
    }
    else
      v8 = *v4;
      v9 = *((_DWORD *)*v4 - 3);
      while ( *(_DWORD *)(*(_DWORD *)v6 - 12) != v9 || memcmp(*(const void **)v6, v8, v9) )
      {
        v6 += 364;
        if ( v7 == v6 )
          goto LABEL_2;
      }
      v10 = v6 + 364;
      if ( v6 + 364 != v7 )
        v11 = v7 - v10;
        v10 = v7;
        if ( v11 >= 1 )
        {
          v12 = -755159085 * (v11 >> 2) + 1;
          do
          {
            GoalDefinition::operator=((int *)v6, (int *)(v6 + 364));
            --v12;
            v6 += 364;
          }
          while ( v12 > 1 );
          v10 = *((_DWORD *)v3 + 10);
        }
      v13 = (GoalDefinition *)(v10 - 364);
      *((_DWORD *)v3 + 10) = v13;
      GoalDefinition::~GoalDefinition(v13);
      v5 = v49;
  }
  v14 = *((_QWORD *)v2 + 6);
  if ( HIDWORD(v14) == (_DWORD)v14 )
    v15 = 0;
    LODWORD(v14) = HIDWORD(v14);
  else
    v16 = HIDWORD(v14) - v14;
    if ( (unsigned int)(-858993459 * (v16 >> 2)) >= 0xCCCCCCD )
      sub_21E57F4();
    v15 = operator new(v16);
    v14 = *((_QWORD *)v2 + 6);
  v17 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<EntityDefinitionAttribute const*,std::vector<EntityDefinitionAttribute,std::allocator<EntityDefinitionAttribute>>>,EntityDefinitionAttribute*>(
          v14,
          SHIDWORD(v14),
          (int)v15);
  ptr = v15;
  if ( v15 != (_DWORD *)v17 )
    v18 = (const void **)v15;
    do
      v21 = *((_QWORD *)v3 + 6) >> 32;
      v22 = *((_QWORD *)v3 + 6);
      if ( v22 != v21 )
        v23 = *v18;
        v24 = *((_DWORD *)*v18 - 3);
        while ( *(_DWORD *)(*(_DWORD *)v22 - 12) != v24 || memcmp(*(const void **)v22, v23, v24) )
          v22 += 20;
          if ( v21 == v22 )
            goto LABEL_41;
        v25 = v22 + 20;
        if ( v22 + 20 != v21 )
          v26 = v21 - v25;
          v25 = v21;
          if ( v26 >= 1 )
            v27 = -858993459 * (v26 >> 2) + 1;
            do
            {
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                (int *)v22,
                (int *)(v22 + 20));
              --v27;
              v28 = *(_DWORD *)(v22 + 28);
              v29 = *(_DWORD *)(v22 + 32);
              v30 = *(_DWORD *)(v22 + 36);
              v22 += 20;
              *(_DWORD *)(v22 - 16) = *(_DWORD *)(v22 + 4);
              *(_DWORD *)(v22 - 12) = v28;
              *(_DWORD *)(v22 - 8) = v29;
              *(_DWORD *)(v22 - 4) = v30;
            }
            while ( v27 > 1 );
            v25 = *((_DWORD *)v3 + 13);
        *((_DWORD *)v3 + 13) = v25 - 20;
        v31 = *(_DWORD *)(v25 - 20);
        v32 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v31 - 4);
          if ( &pthread_create )
            __dmb();
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          else
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v32);
LABEL_41:
      v18 += 5;
    while ( v18 != (const void **)v17 );
  for ( i = *((_DWORD *)v2 + 17); i; i = *(_DWORD *)i )
    v34 = std::_Hashtable<std::string,std::pair<std::string const,DefinitionEvent>,std::allocator<std::pair<std::string const,DefinitionEvent>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
            (unsigned __int64 *)((char *)v3 + 60),
            (int **)(i + 4));
    v35 = v34;
    if ( v34 )
      v36 = *(_DWORD *)(v34 + 88) % (unsigned int)(*(_QWORD *)((char *)v3 + 60) >> 32);
      v37 = *(_DWORD **)(*(_QWORD *)((char *)v3 + 60) + 4 * v36);
      do
        v38 = v37;
        v37 = (_DWORD *)*v37;
      while ( v37 != (_DWORD *)v35 );
      std::_Hashtable<std::string,std::pair<std::string const,DefinitionEvent>,std::allocator<std::pair<std::string const,DefinitionEvent>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
        (int)v3 + 60,
        v36,
        v38,
        v35);
  if ( *((_DWORD *)v2 + 22) )
    *((_DWORD *)v3 + 22) = 0;
  if ( *((_DWORD *)v2 + 23) )
    *((_DWORD *)v3 + 23) = 0;
  if ( *((_DWORD *)v2 + 24) )
    *((_DWORD *)v3 + 24) = 0;
  if ( *((_DWORD *)v2 + 25) )
    *((_DWORD *)v3 + 25) = 0;
  if ( *((_DWORD *)v2 + 26) )
    *((_DWORD *)v3 + 26) = 0;
  if ( *((_DWORD *)v2 + 27) )
    *((_DWORD *)v3 + 27) = 0;
  if ( *((_DWORD *)v2 + 28) )
    *((_DWORD *)v3 + 28) = 0;
  if ( *((_DWORD *)v2 + 29) )
    *((_DWORD *)v3 + 29) = 0;
  if ( *((_DWORD *)v2 + 30) )
    *((_DWORD *)v3 + 30) = 0;
  if ( *((_DWORD *)v2 + 31) )
    *((_DWORD *)v3 + 31) = 0;
  if ( *((_DWORD *)v2 + 32) )
    *((_DWORD *)v3 + 32) = 0;
  if ( *((_DWORD *)v2 + 33) )
    *((_DWORD *)v3 + 33) = 0;
  if ( *((_DWORD *)v2 + 34) )
    *((_DWORD *)v3 + 34) = 0;
  if ( *((_DWORD *)v2 + 35) )
    *((_DWORD *)v3 + 35) = 0;
  if ( *((_DWORD *)v2 + 36) )
    *((_DWORD *)v3 + 36) = 0;
  if ( *((_DWORD *)v2 + 37) )
    *((_DWORD *)v3 + 37) = 0;
  if ( *((_DWORD *)v2 + 38) )
    *((_DWORD *)v3 + 38) = 0;
  if ( *((_DWORD *)v2 + 39) )
    *((_DWORD *)v3 + 39) = 0;
  if ( *((_DWORD *)v2 + 40) )
    *((_DWORD *)v3 + 40) = 0;
  if ( *((_DWORD *)v2 + 41) )
    *((_DWORD *)v3 + 41) = 0;
  if ( *((_DWORD *)v2 + 42) )
    *((_DWORD *)v3 + 42) = 0;
  if ( *((_DWORD *)v2 + 43) )
    *((_DWORD *)v3 + 43) = 0;
  if ( *((_DWORD *)v2 + 44) )
    *((_DWORD *)v3 + 44) = 0;
  if ( *((_DWORD *)v2 + 45) )
    *((_DWORD *)v3 + 45) = 0;
  if ( *((_DWORD *)v2 + 46) )
    *((_DWORD *)v3 + 46) = 0;
  if ( *((_DWORD *)v2 + 47) )
    *((_DWORD *)v3 + 47) = 0;
  if ( *((_DWORD *)v2 + 48) )
    *((_DWORD *)v3 + 48) = 0;
  if ( *((_DWORD *)v2 + 49) )
    *((_DWORD *)v3 + 49) = 0;
  if ( *((_DWORD *)v2 + 50) )
    *((_DWORD *)v3 + 50) = 0;
  if ( *((_DWORD *)v2 + 51) )
    *((_DWORD *)v3 + 51) = 0;
  if ( *((_DWORD *)v2 + 52) )
    *((_DWORD *)v3 + 52) = 0;
  if ( *((_DWORD *)v2 + 53) )
    *((_DWORD *)v3 + 53) = 0;
  if ( *((_DWORD *)v2 + 54) )
    *((_DWORD *)v3 + 54) = 0;
  if ( *((_DWORD *)v2 + 55) )
    *((_DWORD *)v3 + 55) = 0;
  if ( *((_DWORD *)v2 + 56) )
    *((_DWORD *)v3 + 56) = 0;
  if ( *((_DWORD *)v2 + 57) )
    *((_DWORD *)v3 + 57) = 0;
  if ( *((_DWORD *)v2 + 58) )
    *((_DWORD *)v3 + 58) = 0;
  if ( *((_DWORD *)v2 + 59) )
    *((_DWORD *)v3 + 59) = 0;
  if ( *((_DWORD *)v2 + 60) )
    *((_DWORD *)v3 + 60) = 0;
  if ( *((_DWORD *)v2 + 61) )
    *((_DWORD *)v3 + 61) = 0;
  if ( *((_DWORD *)v2 + 62) )
    *((_DWORD *)v3 + 62) = 0;
  if ( *((_DWORD *)v2 + 63) )
    *((_DWORD *)v3 + 63) = 0;
  if ( *((_DWORD *)v2 + 64) )
    *((_DWORD *)v3 + 64) = 0;
  if ( *((_DWORD *)v2 + 65) )
    *((_DWORD *)v3 + 65) = 0;
  if ( *((_DWORD *)v2 + 66) )
    *((_DWORD *)v3 + 66) = 0;
  if ( *((_DWORD *)v2 + 67) )
    *((_DWORD *)v3 + 67) = 0;
  if ( *((_DWORD *)v2 + 68) )
    *((_DWORD *)v3 + 68) = 0;
  if ( *((_DWORD *)v2 + 69) )
    *((_DWORD *)v3 + 69) = 0;
  if ( *((_DWORD *)v2 + 70) )
    *((_DWORD *)v3 + 70) = 0;
  if ( *((_DWORD *)v2 + 71) )
    *((_DWORD *)v3 + 71) = 0;
  if ( *((_DWORD *)v2 + 72) )
    *((_DWORD *)v3 + 72) = 0;
  if ( *((_DWORD *)v2 + 73) )
    *((_DWORD *)v3 + 73) = 0;
  if ( *((_DWORD *)v2 + 74) )
    *((_DWORD *)v3 + 74) = 0;
  if ( *((_DWORD *)v2 + 75) )
    *((_DWORD *)v3 + 75) = 0;
  if ( *((_DWORD *)v2 + 76) )
    *((_DWORD *)v3 + 76) = 0;
  if ( *((_DWORD *)v2 + 77) )
    *((_DWORD *)v3 + 77) = 0;
  if ( *((_DWORD *)v2 + 78) )
    *((_DWORD *)v3 + 78) = 0;
  if ( *((_DWORD *)v2 + 79) )
    *((_DWORD *)v3 + 79) = 0;
  if ( *((_DWORD *)v2 + 80) )
    *((_DWORD *)v3 + 80) = 0;
  if ( *((_DWORD *)v2 + 81) )
    *((_DWORD *)v3 + 81) = 0;
  if ( *((_DWORD *)v2 + 82) )
    *((_DWORD *)v3 + 82) = 0;
  if ( *((_DWORD *)v2 + 83) )
    *((_DWORD *)v3 + 83) = 0;
  if ( *((_DWORD *)v2 + 84) )
    *((_DWORD *)v3 + 84) = 0;
  if ( *((_DWORD *)v2 + 85) )
    *((_DWORD *)v3 + 85) = 0;
  if ( *((_DWORD *)v2 + 86) )
    *((_DWORD *)v3 + 86) = 0;
  if ( *((_DWORD *)v2 + 87) )
    *((_DWORD *)v3 + 87) = 0;
  if ( *((_DWORD *)v2 + 88) )
    *((_DWORD *)v3 + 88) = 0;
  if ( *((_DWORD *)v2 + 89) )
    *((_DWORD *)v3 + 89) = 0;
  if ( *((_DWORD *)v2 + 90) )
    *((_DWORD *)v3 + 90) = 0;
  if ( *((_DWORD *)v2 + 91) )
    *((_DWORD *)v3 + 91) = 0;
  if ( *((_DWORD *)v2 + 92) )
    *((_DWORD *)v3 + 92) = 0;
  if ( *((_DWORD *)v2 + 93) )
    *((_DWORD *)v3 + 93) = 0;
  if ( *((_DWORD *)v2 + 94) )
    *((_DWORD *)v3 + 94) = 0;
  if ( *((_DWORD *)v2 + 95) )
    *((_DWORD *)v3 + 95) = 0;
  if ( *((_DWORD *)v2 + 96) )
    *((_DWORD *)v3 + 96) = 0;
  if ( *((_DWORD *)v2 + 97) )
    *((_DWORD *)v3 + 97) = 0;
  if ( *((_DWORD *)v2 + 98) )
    *((_DWORD *)v3 + 98) = 0;
  if ( *((_DWORD *)v2 + 99) )
    *((_DWORD *)v3 + 99) = 0;
  if ( *((_DWORD *)v2 + 100) )
    *((_DWORD *)v3 + 100) = 0;
  if ( *((_DWORD *)v2 + 101) )
    *((_DWORD *)v3 + 101) = 0;
  if ( *((_DWORD *)v2 + 102) )
    *((_DWORD *)v3 + 102) = 0;
  if ( *((_DWORD *)v2 + 103) )
    *((_DWORD *)v3 + 103) = 0;
  if ( *((_DWORD *)v2 + 104) )
    *((_DWORD *)v3 + 104) = 0;
  if ( *((_DWORD *)v2 + 105) )
    *((_DWORD *)v3 + 105) = 0;
  if ( *((_DWORD *)v2 + 106) )
    *((_DWORD *)v3 + 106) = 0;
  if ( *((_DWORD *)v2 + 107) )
    *((_DWORD *)v3 + 107) = 0;
  if ( *((_DWORD *)v2 + 108) )
    *((_DWORD *)v3 + 108) = 0;
  if ( *((_DWORD *)v2 + 109) )
    *((_DWORD *)v3 + 109) = 0;
  if ( *((_DWORD *)v2 + 110) )
    *((_DWORD *)v3 + 110) = 0;
  if ( *((_DWORD *)v2 + 111) )
    *((_DWORD *)v3 + 111) = 0;
  if ( *((_DWORD *)v2 + 112) )
    *((_DWORD *)v3 + 112) = 0;
  if ( *((_DWORD *)v2 + 113) )
    *((_DWORD *)v3 + 113) = 0;
  if ( *((_DWORD *)v2 + 114) )
    *((_DWORD *)v3 + 114) = 0;
  if ( *((_DWORD *)v2 + 115) )
    *((_DWORD *)v3 + 115) = 0;
  if ( *((_DWORD *)v2 + 116) )
    *((_DWORD *)v3 + 116) = 0;
  if ( *((_DWORD *)v2 + 117) )
    *((_DWORD *)v3 + 117) = 0;
  if ( *((_DWORD *)v2 + 118) )
    *((_DWORD *)v3 + 118) = 0;
  if ( *((_DWORD *)v2 + 119) )
    *((_DWORD *)v3 + 119) = 0;
  if ( *((_DWORD *)v2 + 120) )
    *((_DWORD *)v3 + 120) = 0;
  if ( *((_DWORD *)v2 + 121) )
    *((_DWORD *)v3 + 121) = 0;
  if ( *((_DWORD *)v2 + 122) )
    *((_DWORD *)v3 + 122) = 0;
  for ( j = *((_DWORD *)v2 + 2); j; j = *(_DWORD *)j )
    std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_erase(
      (unsigned __int64 *)v3,
      (int **)(j + 4));
  if ( ptr != (_DWORD *)v17 )
    v40 = ptr;
      v43 = (int *)(*v40 - 12);
      if ( v43 != &dword_28898C0 )
        v41 = (unsigned int *)(*v40 - 4);
        if ( &pthread_create )
          __dmb();
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
        else
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
      v40 += 5;
    while ( v40 != (_DWORD *)v17 );
  if ( ptr )
    operator delete(ptr);
  v45 = (GoalDefinition *)v49;
  v44 = (GoalDefinition *)v48;
  if ( v48 != v49 )
      v44 = (GoalDefinition *)((char *)GoalDefinition::~GoalDefinition(v44) + 364);
    while ( v45 != v44 );
    v44 = (GoalDefinition *)v48;
  if ( v44 )
    operator delete((void *)v44);
  return v3;
}


EntityDefinitionDescriptor *__fastcall EntityDefinitionDescriptor::~EntityDefinitionDescriptor(EntityDefinitionDescriptor *this)
{
  EntityDefinitionDescriptor *v1; // r10@1
  _DWORD *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  _DWORD *v5; // r6@11
  DefinitionEvent *v6; // r0@11
  int v7; // r1@11
  void *v8; // r0@11
  char *v9; // r0@13
  void *v10; // r5@16
  void *v11; // r7@16
  unsigned int *v12; // r2@18
  signed int v13; // r1@20
  int *v14; // r0@26
  GoalDefinition *v15; // r0@31
  GoalDefinition *v16; // r5@31
  int v17; // r1@36
  void *v18; // r0@36
  unsigned __int64 *v19; // r7@37
  unsigned int *v20; // r2@39
  signed int v21; // r1@41
  unsigned __int64 *v22; // r6@47
  int v23; // r1@47
  void *v24; // r0@47
  char *v25; // r0@49
  unsigned int *v27; // r2@53
  signed int v28; // r1@55

  v1 = this;
  v2 = (_DWORD *)*((_DWORD *)this + 17);
  while ( v2 )
  {
    v5 = v2;
    v6 = (DefinitionEvent *)(v2 + 2);
    v2 = (_DWORD *)*v2;
    DefinitionEvent::~DefinitionEvent(v6);
    v7 = v5[1];
    v8 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v7 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    operator delete(v5);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 60), 4 * (*(_QWORD *)((char *)v1 + 60) >> 32));
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  v9 = (char *)*((_DWORD *)v1 + 15);
  if ( v9 && (char *)v1 + 84 != v9 )
    operator delete(v9);
  v11 = (void *)(*((_QWORD *)v1 + 6) >> 32);
  v10 = (void *)*((_QWORD *)v1 + 6);
  if ( v10 != v11 )
    do
      v14 = (int *)(*(_DWORD *)v10 - 12);
      if ( v14 != &dword_28898C0 )
        v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
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
          j_j_j_j__ZdlPv_9(v14);
      v10 = (char *)v10 + 20;
    while ( v10 != v11 );
    v10 = (void *)*((_DWORD *)v1 + 12);
  if ( v10 )
    operator delete(v10);
  v16 = (GoalDefinition *)(*(_QWORD *)((char *)v1 + 36) >> 32);
  v15 = (GoalDefinition *)*(_QWORD *)((char *)v1 + 36);
  if ( v15 != v16 )
      v15 = (GoalDefinition *)((char *)GoalDefinition::~GoalDefinition(v15) + 364);
    while ( v16 != v15 );
    v15 = (GoalDefinition *)*((_DWORD *)v1 + 9);
  if ( v15 )
    operator delete((void *)v15);
  *((_DWORD *)v1 + 7) = &off_271ED2C;
  v17 = *((_DWORD *)v1 + 8);
  v18 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (unsigned __int64 *)*((_DWORD *)v1 + 2);
  while ( v19 )
    v22 = v19;
    v23 = *v19 >> 32;
    v19 = (unsigned __int64 *)*v19;
    v24 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v23 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    operator delete(v22);
  _aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  v25 = *(char **)v1;
  if ( *(_DWORD *)v1 && (char *)v1 + 24 != v25 )
    operator delete(v25);
  return v1;
}


_BOOL4 __fastcall EntityDefinitionDescriptor::hasComponent(unsigned __int64 *a1, int **a2)
{
  return std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::find(
           a1,
           a2) != 0;
}


signed int __fastcall EntityDefinitionDescriptor::executeTrigger(int a1, const Entity *a2, DefinitionTrigger *a3, const VariantParameterList *a4)
{
  DefinitionTrigger *v4; // r5@1
  const VariantParameterList *v5; // r4@1
  Entity *v6; // r6@1
  signed int result; // r0@2

  v4 = a3;
  v5 = a4;
  v6 = a2;
  if ( DefinitionTrigger::canTrigger(a3, a2, a4) == 1 )
  {
    EntityDefinitionDescriptor::forceExecuteTrigger((EntityDefinitionDescriptor *)1, v6, v4, v5);
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall EntityDefinitionDescriptor::overlaps(EntityDefinitionDescriptor *this, const EntityDefinitionDescriptor *a2)
{
  const void **v2; // r7@0
  const void **v3; // r9@0
  EntityDefinitionDescriptor *v4; // r10@1
  const void **v5; // r6@1
  const void **v6; // r11@1
  bool v7; // zf@1
  const void *v8; // r4@4
  const void **v9; // r8@4
  size_t v10; // r5@4
  const EntityDefinitionDescriptor *v11; // r5@9
  __int64 v12; // r0@9
  const void **v13; // r4@10
  signed int v14; // r9@11
  signed int v15; // r0@12
  EntityDefinitionDescriptor *v16; // r11@14
  int v17; // r0@14
  bool v18; // zf@14
  const void **v19; // r10@16
  const void **v20; // r8@17
  const void *v21; // r4@18
  const void **v22; // r7@18
  size_t v23; // r6@18
  const void **v24; // r8@23
  int v25; // r5@23
  int v26; // r0@26
  bool v27; // zf@26
  int v28; // r0@30
  const void **v29; // r5@30
  bool v30; // zf@30
  const void **v31; // r7@37
  unsigned int *v32; // r2@38
  signed int v33; // r1@40
  int *v34; // r0@46
  GoalDefinition *v35; // r0@50
  GoalDefinition *v36; // r4@50
  int v38; // r0@56
  bool v39; // zf@56
  int v40; // r0@60
  bool v41; // zf@60
  int v42; // r0@64
  bool v43; // zf@64
  int v44; // r0@68
  bool v45; // zf@68
  int v46; // r0@72
  bool v47; // zf@72
  int v48; // r0@76
  bool v49; // zf@76
  int v50; // r0@80
  bool v51; // zf@80
  int v52; // r0@84
  bool v53; // zf@84
  int v54; // r0@88
  bool v55; // zf@88
  int v56; // r0@92
  bool v57; // zf@92
  int v58; // r0@96
  bool v59; // zf@96
  int v60; // r0@100
  bool v61; // zf@100
  int v62; // r0@104
  bool v63; // zf@104
  int v64; // r0@108
  bool v65; // zf@108
  int v66; // r0@112
  bool v67; // zf@112
  int v68; // r0@116
  bool v69; // zf@116
  int v70; // r0@120
  bool v71; // zf@120
  int v72; // r0@124
  bool v73; // zf@124
  int v74; // r0@128
  bool v75; // zf@128
  int v76; // r0@132
  bool v77; // zf@132
  int v78; // r0@136
  bool v79; // zf@136
  int v80; // r0@140
  bool v81; // zf@140
  int v82; // r0@144
  bool v83; // zf@144
  int v84; // r0@148
  bool v85; // zf@148
  int v86; // r0@152
  bool v87; // zf@152
  int v88; // r0@156
  bool v89; // zf@156
  int v90; // r0@160
  bool v91; // zf@160
  int v92; // r0@164
  bool v93; // zf@164
  int v94; // r0@168
  bool v95; // zf@168
  int v96; // r0@172
  bool v97; // zf@172
  int v98; // r0@176
  bool v99; // zf@176
  int v100; // r0@180
  bool v101; // zf@180
  int v102; // r0@184
  bool v103; // zf@184
  int v104; // r0@188
  bool v105; // zf@188
  int v106; // r0@192
  bool v107; // zf@192
  int v108; // r0@196
  bool v109; // zf@196
  int v110; // r0@200
  bool v111; // zf@200
  int v112; // r0@204
  bool v113; // zf@204
  int v114; // r0@208
  bool v115; // zf@208
  int v116; // r0@212
  bool v117; // zf@212
  int v118; // r0@216
  bool v119; // zf@216
  int v120; // r0@220
  bool v121; // zf@220
  int v122; // r0@224
  bool v123; // zf@224
  int v124; // r0@228
  bool v125; // zf@228
  int v126; // r0@232
  bool v127; // zf@232
  int v128; // r0@236
  bool v129; // zf@236
  int v130; // r0@240
  bool v131; // zf@240
  int v132; // r0@244
  bool v133; // zf@244
  int v134; // r0@248
  bool v135; // zf@248
  int v136; // r0@252
  bool v137; // zf@252
  int v138; // r0@256
  bool v139; // zf@256
  int v140; // r0@260
  bool v141; // zf@260
  int v142; // r0@264
  bool v143; // zf@264
  int v144; // r0@268
  bool v145; // zf@268
  int v146; // r0@272
  bool v147; // zf@272
  int v148; // r0@276
  bool v149; // zf@276
  int v150; // r0@280
  bool v151; // zf@280
  int v152; // r0@284
  bool v153; // zf@284
  int v154; // r0@288
  bool v155; // zf@288
  int v156; // r0@292
  bool v157; // zf@292
  int v158; // r0@296
  bool v159; // zf@296
  int v160; // r0@300
  bool v161; // zf@300
  int v162; // r0@304
  bool v163; // zf@304
  int v164; // r0@308
  bool v165; // zf@308
  int v166; // r0@312
  bool v167; // zf@312
  int v168; // r0@316
  bool v169; // zf@316
  int v170; // r0@320
  bool v171; // zf@320
  int v172; // r0@324
  bool v173; // zf@324
  int v174; // r0@328
  bool v175; // zf@328
  int v176; // r0@332
  bool v177; // zf@332
  int v178; // r0@336
  bool v179; // zf@336
  int v180; // r0@340
  bool v181; // zf@340
  int v182; // r0@344
  bool v183; // zf@344
  int v184; // r0@348
  bool v185; // zf@348
  int v186; // r0@352
  bool v187; // zf@352
  int v188; // r0@356
  bool v189; // zf@356
  int v190; // r0@360
  bool v191; // zf@360
  int v192; // r0@364
  bool v193; // zf@364
  int v194; // r0@368
  bool v195; // zf@368
  int v196; // r0@372
  bool v197; // zf@372
  int v198; // r0@376
  bool v199; // zf@376
  int v200; // r0@380
  bool v201; // zf@380
  int v202; // r0@384
  bool v203; // zf@384
  int v204; // r0@388
  bool v205; // zf@388
  int v206; // r0@392
  bool v207; // zf@392
  int v208; // r0@396
  bool v209; // zf@396
  int v210; // r0@400
  bool v211; // zf@400
  int v212; // r0@404
  bool v213; // zf@404
  int v214; // r0@408
  bool v215; // zf@408
  int v216; // r0@412
  bool v217; // zf@412
  int v218; // r0@416
  bool v219; // zf@416
  int v220; // r0@420
  bool v221; // zf@420
  int v222; // r0@424
  bool v223; // zf@424
  int v224; // r0@428
  bool v225; // zf@428
  int v226; // r0@432
  bool v227; // zf@432
  int v228; // r0@436
  bool v229; // zf@436
  int v230; // r0@440
  bool v231; // zf@440
  int v232; // r0@444
  bool v233; // zf@444
  int v234; // r0@448
  bool v235; // zf@448
  const void **v236; // [sp+4h] [bp-3Ch]@14
  const EntityDefinitionDescriptor *v237; // [sp+8h] [bp-38h]@1
  void *ptr; // [sp+Ch] [bp-34h]@1
  const void **v239; // [sp+10h] [bp-30h]@1

  v237 = a2;
  v4 = this;
  std::vector<GoalDefinition,std::allocator<GoalDefinition>>::vector((int)&ptr, (unsigned __int64 *)((char *)a2 + 36));
  v6 = v239;
  v5 = (const void **)ptr;
  v7 = ptr == v239;
  if ( ptr != v239 )
  {
    v2 = (const void **)(*(_QWORD *)((char *)v4 + 36) >> 32);
    v3 = (const void **)*(_QWORD *)((char *)v4 + 36);
    v7 = v3 == v2;
  }
  if ( !v7 )
    while ( 2 )
    {
      v8 = *v5;
      v9 = v3;
      v10 = *((_DWORD *)*v5 - 3);
      do
      {
        if ( *((_DWORD *)*v9 - 3) == v10 && !memcmp(*v9, v8, v10) )
        {
          v14 = 1;
          goto LABEL_50;
        }
        v9 += 91;
      }
      while ( v2 != v9 );
      v5 += 91;
      if ( v5 != v6 )
        continue;
      break;
    }
  v11 = v237;
  v12 = *((_QWORD *)v237 + 6);
  if ( HIDWORD(v12) == (_DWORD)v12 )
    v13 = 0;
    LODWORD(v12) = *((_QWORD *)v237 + 6) >> 32;
  else
    v15 = HIDWORD(v12) - v12;
    if ( (unsigned int)(-858993459 * (v15 >> 2)) >= 0xCCCCCCD )
      sub_21E57F4();
    v13 = (const void **)operator new(v15);
    v12 = *((_QWORD *)v237 + 6);
  v16 = v4;
  v17 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<EntityDefinitionAttribute const*,std::vector<EntityDefinitionAttribute,std::allocator<EntityDefinitionAttribute>>>,EntityDefinitionAttribute*>(
          v12,
          SHIDWORD(v12),
          (int)v13);
  v18 = v13 == (const void **)v17;
  v236 = (const void **)v17;
  if ( v13 != (const void **)v17 )
    v11 = (const EntityDefinitionDescriptor *)(*((_QWORD *)v4 + 6) >> 32);
    v3 = (const void **)*((_QWORD *)v4 + 6);
    v18 = (const EntityDefinitionDescriptor *)v3 == v11;
  v19 = v13;
  if ( !v18 )
    v20 = v13;
      v21 = *v20;
      v22 = v3;
      v23 = *((_DWORD *)*v20 - 3);
        if ( *((_DWORD *)*v22 - 3) == v23 && !memcmp(*v22, v21, v23) )
          v24 = v19;
          v29 = v236;
          goto LABEL_36;
        v22 += 5;
      while ( (const void **)v11 != v22 );
      v20 += 5;
      if ( v20 != v236 )
  v24 = v19;
  v25 = *((_DWORD *)v237 + 17);
  if ( v25 )
    while ( !std::_Hashtable<std::string,std::pair<std::string const,DefinitionEvent>,std::allocator<std::pair<std::string const,DefinitionEvent>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
               (unsigned __int64 *)((char *)v16 + 60),
               (int **)(v25 + 4)) )
      v25 = *(_DWORD *)v25;
      if ( !v25 )
        goto LABEL_26;
LABEL_26:
    v26 = *((_DWORD *)v237 + 22);
    v27 = v26 == 0;
    if ( v26 )
      v27 = *((_DWORD *)v16 + 22) == 0;
    if ( v27 )
      v28 = *((_DWORD *)v237 + 23);
      v29 = v236;
      v30 = v28 == 0;
      if ( v28 )
        v30 = *((_DWORD *)v16 + 23) == 0;
      if ( v30 )
        v38 = *((_DWORD *)v237 + 24);
        v39 = v38 == 0;
        if ( v38 )
          v39 = *((_DWORD *)v16 + 24) == 0;
        if ( v39 )
          v40 = *((_DWORD *)v237 + 25);
          v41 = v40 == 0;
          if ( v40 )
            v41 = *((_DWORD *)v16 + 25) == 0;
          if ( v41 )
          {
            v42 = *((_DWORD *)v237 + 26);
            v43 = v42 == 0;
            if ( v42 )
              v43 = *((_DWORD *)v16 + 26) == 0;
            if ( v43 )
            {
              v44 = *((_DWORD *)v237 + 27);
              v45 = v44 == 0;
              if ( v44 )
                v45 = *((_DWORD *)v16 + 27) == 0;
              if ( v45 )
              {
                v46 = *((_DWORD *)v237 + 28);
                v47 = v46 == 0;
                if ( v46 )
                  v47 = *((_DWORD *)v16 + 28) == 0;
                if ( v47 )
                {
                  v48 = *((_DWORD *)v237 + 29);
                  v49 = v48 == 0;
                  if ( v48 )
                    v49 = *((_DWORD *)v16 + 29) == 0;
                  if ( v49 )
                  {
                    v50 = *((_DWORD *)v237 + 30);
                    v51 = v50 == 0;
                    if ( v50 )
                      v51 = *((_DWORD *)v16 + 30) == 0;
                    if ( v51 )
                    {
                      v52 = *((_DWORD *)v237 + 31);
                      v53 = v52 == 0;
                      if ( v52 )
                        v53 = *((_DWORD *)v16 + 31) == 0;
                      if ( v53 )
                      {
                        v54 = *((_DWORD *)v237 + 32);
                        v55 = v54 == 0;
                        if ( v54 )
                          v55 = *((_DWORD *)v16 + 32) == 0;
                        if ( v55 )
                        {
                          v56 = *((_DWORD *)v237 + 33);
                          v57 = v56 == 0;
                          if ( v56 )
                            v57 = *((_DWORD *)v16 + 33) == 0;
                          if ( v57 )
                          {
                            v58 = *((_DWORD *)v237 + 34);
                            v59 = v58 == 0;
                            if ( v58 )
                              v59 = *((_DWORD *)v16 + 34) == 0;
                            if ( v59 )
                            {
                              v60 = *((_DWORD *)v237 + 35);
                              v61 = v60 == 0;
                              if ( v60 )
                                v61 = *((_DWORD *)v16 + 35) == 0;
                              if ( v61 )
                              {
                                v62 = *((_DWORD *)v237 + 36);
                                v63 = v62 == 0;
                                if ( v62 )
                                  v63 = *((_DWORD *)v16 + 36) == 0;
                                if ( v63 )
                                {
                                  v64 = *((_DWORD *)v237 + 37);
                                  v65 = v64 == 0;
                                  if ( v64 )
                                    v65 = *((_DWORD *)v16 + 37) == 0;
                                  if ( v65 )
                                  {
                                    v66 = *((_DWORD *)v237 + 38);
                                    v67 = v66 == 0;
                                    if ( v66 )
                                      v67 = *((_DWORD *)v16 + 38) == 0;
                                    if ( v67 )
                                    {
                                      v68 = *((_DWORD *)v237 + 39);
                                      v69 = v68 == 0;
                                      if ( v68 )
                                        v69 = *((_DWORD *)v16 + 39) == 0;
                                      if ( !v69 )
                                        goto LABEL_458;
                                      v70 = *((_DWORD *)v237 + 40);
                                      v71 = v70 == 0;
                                      if ( v70 )
                                        v71 = *((_DWORD *)v16 + 40) == 0;
                                      if ( !v71 )
                                      v72 = *((_DWORD *)v237 + 41);
                                      v73 = v72 == 0;
                                      if ( v72 )
                                        v73 = *((_DWORD *)v16 + 41) == 0;
                                      if ( !v73 )
                                      v74 = *((_DWORD *)v237 + 42);
                                      v75 = v74 == 0;
                                      if ( v74 )
                                        v75 = *((_DWORD *)v16 + 42) == 0;
                                      if ( !v75 )
                                      v76 = *((_DWORD *)v237 + 43);
                                      v77 = v76 == 0;
                                      if ( v76 )
                                        v77 = *((_DWORD *)v16 + 43) == 0;
                                      if ( !v77 )
                                      v78 = *((_DWORD *)v237 + 44);
                                      v79 = v78 == 0;
                                      if ( v78 )
                                        v79 = *((_DWORD *)v16 + 44) == 0;
                                      if ( !v79 )
                                      v80 = *((_DWORD *)v237 + 45);
                                      v81 = v80 == 0;
                                      if ( v80 )
                                        v81 = *((_DWORD *)v16 + 45) == 0;
                                      if ( !v81 )
                                      v82 = *((_DWORD *)v237 + 46);
                                      v83 = v82 == 0;
                                      if ( v82 )
                                        v83 = *((_DWORD *)v16 + 46) == 0;
                                      if ( !v83 )
                                      v84 = *((_DWORD *)v237 + 47);
                                      v85 = v84 == 0;
                                      if ( v84 )
                                        v85 = *((_DWORD *)v16 + 47) == 0;
                                      if ( !v85 )
                                      v86 = *((_DWORD *)v237 + 48);
                                      v87 = v86 == 0;
                                      if ( v86 )
                                        v87 = *((_DWORD *)v16 + 48) == 0;
                                      if ( !v87 )
                                      v88 = *((_DWORD *)v237 + 49);
                                      v89 = v88 == 0;
                                      if ( v88 )
                                        v89 = *((_DWORD *)v16 + 49) == 0;
                                      if ( !v89 )
                                      v90 = *((_DWORD *)v237 + 50);
                                      v91 = v90 == 0;
                                      if ( v90 )
                                        v91 = *((_DWORD *)v16 + 50) == 0;
                                      if ( !v91 )
                                      v92 = *((_DWORD *)v237 + 51);
                                      v93 = v92 == 0;
                                      if ( v92 )
                                        v93 = *((_DWORD *)v16 + 51) == 0;
                                      if ( !v93 )
                                      v94 = *((_DWORD *)v237 + 52);
                                      v95 = v94 == 0;
                                      if ( v94 )
                                        v95 = *((_DWORD *)v16 + 52) == 0;
                                      if ( !v95 )
                                      v96 = *((_DWORD *)v237 + 53);
                                      v97 = v96 == 0;
                                      if ( v96 )
                                        v97 = *((_DWORD *)v16 + 53) == 0;
                                      if ( !v97 )
                                      v98 = *((_DWORD *)v237 + 54);
                                      v99 = v98 == 0;
                                      if ( v98 )
                                        v99 = *((_DWORD *)v16 + 54) == 0;
                                      if ( !v99 )
                                      v100 = *((_DWORD *)v237 + 55);
                                      v101 = v100 == 0;
                                      if ( v100 )
                                        v101 = *((_DWORD *)v16 + 55) == 0;
                                      if ( !v101 )
                                      v102 = *((_DWORD *)v237 + 56);
                                      v103 = v102 == 0;
                                      if ( v102 )
                                        v103 = *((_DWORD *)v16 + 56) == 0;
                                      if ( !v103 )
                                      v104 = *((_DWORD *)v237 + 57);
                                      v105 = v104 == 0;
                                      if ( v104 )
                                        v105 = *((_DWORD *)v16 + 57) == 0;
                                      if ( !v105 )
                                      v106 = *((_DWORD *)v237 + 58);
                                      v107 = v106 == 0;
                                      if ( v106 )
                                        v107 = *((_DWORD *)v16 + 58) == 0;
                                      if ( !v107 )
                                      v108 = *((_DWORD *)v237 + 59);
                                      v109 = v108 == 0;
                                      if ( v108 )
                                        v109 = *((_DWORD *)v16 + 59) == 0;
                                      if ( !v109 )
                                      v110 = *((_DWORD *)v237 + 60);
                                      v111 = v110 == 0;
                                      if ( v110 )
                                        v111 = *((_DWORD *)v16 + 60) == 0;
                                      if ( !v111 )
                                      v112 = *((_DWORD *)v237 + 61);
                                      v113 = v112 == 0;
                                      if ( v112 )
                                        v113 = *((_DWORD *)v16 + 61) == 0;
                                      if ( !v113 )
                                      v114 = *((_DWORD *)v237 + 62);
                                      v115 = v114 == 0;
                                      if ( v114 )
                                        v115 = *((_DWORD *)v16 + 62) == 0;
                                      if ( !v115 )
                                      v116 = *((_DWORD *)v237 + 63);
                                      v117 = v116 == 0;
                                      if ( v116 )
                                        v117 = *((_DWORD *)v16 + 63) == 0;
                                      if ( !v117 )
                                      v118 = *((_DWORD *)v237 + 64);
                                      v119 = v118 == 0;
                                      if ( v118 )
                                        v119 = *((_DWORD *)v16 + 64) == 0;
                                      if ( !v119 )
                                      v120 = *((_DWORD *)v237 + 65);
                                      v121 = v120 == 0;
                                      if ( v120 )
                                        v121 = *((_DWORD *)v16 + 65) == 0;
                                      if ( !v121 )
                                      v122 = *((_DWORD *)v237 + 66);
                                      v123 = v122 == 0;
                                      if ( v122 )
                                        v123 = *((_DWORD *)v16 + 66) == 0;
                                      if ( !v123 )
                                      v124 = *((_DWORD *)v237 + 67);
                                      v125 = v124 == 0;
                                      if ( v124 )
                                        v125 = *((_DWORD *)v16 + 67) == 0;
                                      if ( !v125 )
                                      v126 = *((_DWORD *)v237 + 68);
                                      v127 = v126 == 0;
                                      if ( v126 )
                                        v127 = *((_DWORD *)v16 + 68) == 0;
                                      if ( !v127 )
                                      v128 = *((_DWORD *)v237 + 69);
                                      v129 = v128 == 0;
                                      if ( v128 )
                                        v129 = *((_DWORD *)v16 + 69) == 0;
                                      if ( !v129 )
                                      v130 = *((_DWORD *)v237 + 70);
                                      v131 = v130 == 0;
                                      if ( v130 )
                                        v131 = *((_DWORD *)v16 + 70) == 0;
                                      if ( !v131 )
                                      v132 = *((_DWORD *)v237 + 71);
                                      v133 = v132 == 0;
                                      if ( v132 )
                                        v133 = *((_DWORD *)v16 + 71) == 0;
                                      if ( !v133 )
                                      v134 = *((_DWORD *)v237 + 72);
                                      v135 = v134 == 0;
                                      if ( v134 )
                                        v135 = *((_DWORD *)v16 + 72) == 0;
                                      if ( !v135 )
                                      v136 = *((_DWORD *)v237 + 73);
                                      v137 = v136 == 0;
                                      if ( v136 )
                                        v137 = *((_DWORD *)v16 + 73) == 0;
                                      if ( !v137 )
                                      v138 = *((_DWORD *)v237 + 74);
                                      v139 = v138 == 0;
                                      if ( v138 )
                                        v139 = *((_DWORD *)v16 + 74) == 0;
                                      if ( !v139 )
                                      v140 = *((_DWORD *)v237 + 75);
                                      v141 = v140 == 0;
                                      if ( v140 )
                                        v141 = *((_DWORD *)v16 + 75) == 0;
                                      if ( !v141 )
                                      v142 = *((_DWORD *)v237 + 76);
                                      v143 = v142 == 0;
                                      if ( v142 )
                                        v143 = *((_DWORD *)v16 + 76) == 0;
                                      if ( !v143 )
                                      v144 = *((_DWORD *)v237 + 77);
                                      v145 = v144 == 0;
                                      if ( v144 )
                                        v145 = *((_DWORD *)v16 + 77) == 0;
                                      if ( !v145 )
                                      v146 = *((_DWORD *)v237 + 78);
                                      v147 = v146 == 0;
                                      if ( v146 )
                                        v147 = *((_DWORD *)v16 + 78) == 0;
                                      if ( !v147 )
                                      v148 = *((_DWORD *)v237 + 79);
                                      v149 = v148 == 0;
                                      if ( v148 )
                                        v149 = *((_DWORD *)v16 + 79) == 0;
                                      if ( !v149 )
                                      v150 = *((_DWORD *)v237 + 80);
                                      v151 = v150 == 0;
                                      if ( v150 )
                                        v151 = *((_DWORD *)v16 + 80) == 0;
                                      if ( !v151 )
                                      v152 = *((_DWORD *)v237 + 81);
                                      v153 = v152 == 0;
                                      if ( v152 )
                                        v153 = *((_DWORD *)v16 + 81) == 0;
                                      if ( !v153 )
                                      v154 = *((_DWORD *)v237 + 82);
                                      v155 = v154 == 0;
                                      if ( v154 )
                                        v155 = *((_DWORD *)v16 + 82) == 0;
                                      if ( !v155 )
                                      v156 = *((_DWORD *)v237 + 83);
                                      v157 = v156 == 0;
                                      if ( v156 )
                                        v157 = *((_DWORD *)v16 + 83) == 0;
                                      if ( !v157 )
                                      v158 = *((_DWORD *)v237 + 84);
                                      v159 = v158 == 0;
                                      if ( v158 )
                                        v159 = *((_DWORD *)v16 + 84) == 0;
                                      if ( !v159 )
                                      v160 = *((_DWORD *)v237 + 85);
                                      v161 = v160 == 0;
                                      if ( v160 )
                                        v161 = *((_DWORD *)v16 + 85) == 0;
                                      if ( !v161 )
                                      v162 = *((_DWORD *)v237 + 86);
                                      v163 = v162 == 0;
                                      if ( v162 )
                                        v163 = *((_DWORD *)v16 + 86) == 0;
                                      if ( !v163 )
                                      v164 = *((_DWORD *)v237 + 87);
                                      v165 = v164 == 0;
                                      if ( v164 )
                                        v165 = *((_DWORD *)v16 + 87) == 0;
                                      if ( !v165 )
                                      v166 = *((_DWORD *)v237 + 88);
                                      v167 = v166 == 0;
                                      if ( v166 )
                                        v167 = *((_DWORD *)v16 + 88) == 0;
                                      if ( !v167 )
                                      v168 = *((_DWORD *)v237 + 89);
                                      v169 = v168 == 0;
                                      if ( v168 )
                                        v169 = *((_DWORD *)v16 + 89) == 0;
                                      if ( !v169 )
                                      v170 = *((_DWORD *)v237 + 90);
                                      v171 = v170 == 0;
                                      if ( v170 )
                                        v171 = *((_DWORD *)v16 + 90) == 0;
                                      if ( !v171 )
                                      v172 = *((_DWORD *)v237 + 91);
                                      v173 = v172 == 0;
                                      if ( v172 )
                                        v173 = *((_DWORD *)v16 + 91) == 0;
                                      if ( !v173 )
                                      v174 = *((_DWORD *)v237 + 92);
                                      v175 = v174 == 0;
                                      if ( v174 )
                                        v175 = *((_DWORD *)v16 + 92) == 0;
                                      if ( !v175 )
                                      v176 = *((_DWORD *)v237 + 93);
                                      v177 = v176 == 0;
                                      if ( v176 )
                                        v177 = *((_DWORD *)v16 + 93) == 0;
                                      if ( !v177 )
                                      v178 = *((_DWORD *)v237 + 94);
                                      v179 = v178 == 0;
                                      if ( v178 )
                                        v179 = *((_DWORD *)v16 + 94) == 0;
                                      if ( !v179 )
                                      v180 = *((_DWORD *)v237 + 95);
                                      v181 = v180 == 0;
                                      if ( v180 )
                                        v181 = *((_DWORD *)v16 + 95) == 0;
                                      if ( !v181 )
                                      v182 = *((_DWORD *)v237 + 96);
                                      v183 = v182 == 0;
                                      if ( v182 )
                                        v183 = *((_DWORD *)v16 + 96) == 0;
                                      if ( !v183 )
                                      v184 = *((_DWORD *)v237 + 97);
                                      v185 = v184 == 0;
                                      if ( v184 )
                                        v185 = *((_DWORD *)v16 + 97) == 0;
                                      if ( !v185 )
                                      v186 = *((_DWORD *)v237 + 98);
                                      v187 = v186 == 0;
                                      if ( v186 )
                                        v187 = *((_DWORD *)v16 + 98) == 0;
                                      if ( !v187 )
                                      v188 = *((_DWORD *)v237 + 99);
                                      v189 = v188 == 0;
                                      if ( v188 )
                                        v189 = *((_DWORD *)v16 + 99) == 0;
                                      if ( !v189 )
                                      v190 = *((_DWORD *)v237 + 100);
                                      v191 = v190 == 0;
                                      if ( v190 )
                                        v191 = *((_DWORD *)v16 + 100) == 0;
                                      if ( !v191 )
                                      v192 = *((_DWORD *)v237 + 101);
                                      v193 = v192 == 0;
                                      if ( v192 )
                                        v193 = *((_DWORD *)v16 + 101) == 0;
                                      if ( !v193 )
                                      v194 = *((_DWORD *)v237 + 102);
                                      v195 = v194 == 0;
                                      if ( v194 )
                                        v195 = *((_DWORD *)v16 + 102) == 0;
                                      if ( !v195 )
                                      v196 = *((_DWORD *)v237 + 103);
                                      v197 = v196 == 0;
                                      if ( v196 )
                                        v197 = *((_DWORD *)v16 + 103) == 0;
                                      if ( !v197 )
                                      v198 = *((_DWORD *)v237 + 104);
                                      v199 = v198 == 0;
                                      if ( v198 )
                                        v199 = *((_DWORD *)v16 + 104) == 0;
                                      if ( !v199 )
                                      v200 = *((_DWORD *)v237 + 105);
                                      v201 = v200 == 0;
                                      if ( v200 )
                                        v201 = *((_DWORD *)v16 + 105) == 0;
                                      if ( !v201 )
                                      v202 = *((_DWORD *)v237 + 106);
                                      v203 = v202 == 0;
                                      if ( v202 )
                                        v203 = *((_DWORD *)v16 + 106) == 0;
                                      if ( !v203 )
                                      v204 = *((_DWORD *)v237 + 107);
                                      v205 = v204 == 0;
                                      if ( v204 )
                                        v205 = *((_DWORD *)v16 + 107) == 0;
                                      if ( !v205 )
                                      v206 = *((_DWORD *)v237 + 108);
                                      v207 = v206 == 0;
                                      if ( v206 )
                                        v207 = *((_DWORD *)v16 + 108) == 0;
                                      if ( !v207 )
                                      v208 = *((_DWORD *)v237 + 109);
                                      v209 = v208 == 0;
                                      if ( v208 )
                                        v209 = *((_DWORD *)v16 + 109) == 0;
                                      if ( !v209 )
                                      v210 = *((_DWORD *)v237 + 110);
                                      v211 = v210 == 0;
                                      if ( v210 )
                                        v211 = *((_DWORD *)v16 + 110) == 0;
                                      if ( !v211 )
                                      v212 = *((_DWORD *)v237 + 111);
                                      v213 = v212 == 0;
                                      if ( v212 )
                                        v213 = *((_DWORD *)v16 + 111) == 0;
                                      if ( !v213 )
                                      v214 = *((_DWORD *)v237 + 112);
                                      v215 = v214 == 0;
                                      if ( v214 )
                                        v215 = *((_DWORD *)v16 + 112) == 0;
                                      if ( !v215 )
                                      v216 = *((_DWORD *)v237 + 113);
                                      v217 = v216 == 0;
                                      if ( v216 )
                                        v217 = *((_DWORD *)v16 + 113) == 0;
                                      if ( !v217 )
                                      v218 = *((_DWORD *)v237 + 114);
                                      v219 = v218 == 0;
                                      if ( v218 )
                                        v219 = *((_DWORD *)v16 + 114) == 0;
                                      if ( !v219 )
                                      v220 = *((_DWORD *)v237 + 115);
                                      v221 = v220 == 0;
                                      if ( v220 )
                                        v221 = *((_DWORD *)v16 + 115) == 0;
                                      if ( !v221 )
                                      v222 = *((_DWORD *)v237 + 116);
                                      v223 = v222 == 0;
                                      if ( v222 )
                                        v223 = *((_DWORD *)v16 + 116) == 0;
                                      if ( !v223 )
                                      v224 = *((_DWORD *)v237 + 117);
                                      v225 = v224 == 0;
                                      if ( v224 )
                                        v225 = *((_DWORD *)v16 + 117) == 0;
                                      if ( !v225 )
                                      v226 = *((_DWORD *)v237 + 118);
                                      v227 = v226 == 0;
                                      if ( v226 )
                                        v227 = *((_DWORD *)v16 + 118) == 0;
                                      if ( !v227 )
                                      v228 = *((_DWORD *)v237 + 119);
                                      v229 = v228 == 0;
                                      if ( v228 )
                                        v229 = *((_DWORD *)v16 + 119) == 0;
                                      if ( !v229 )
                                      v230 = *((_DWORD *)v237 + 120);
                                      v231 = v230 == 0;
                                      if ( v230 )
                                        v231 = *((_DWORD *)v16 + 120) == 0;
                                      if ( !v231 )
                                      v232 = *((_DWORD *)v237 + 121);
                                      v233 = v232 == 0;
                                      if ( v232 )
                                        v233 = *((_DWORD *)v16 + 121) == 0;
                                      if ( !v233 )
                                      v234 = *((_DWORD *)v237 + 122);
                                      v235 = v234 == 0;
                                      if ( v234 )
                                        v235 = *((_DWORD *)v16 + 122) == 0;
                                      if ( v235 )
                                        v14 = 0;
                                      else
LABEL_458:
                                        v14 = 1;
                                    }
                                    else
                                      v14 = 1;
                                  }
                                  else
                                    v14 = 1;
                                }
                                else
                                  v14 = 1;
                              }
                              else
                                v14 = 1;
                            }
                            else
                              v14 = 1;
                          }
                          else
                            v14 = 1;
                        }
                        else
                          v14 = 1;
                      }
                      else
                        v14 = 1;
                    }
                    else
                      v14 = 1;
                  }
                  else
                    v14 = 1;
                }
                else
                  v14 = 1;
              }
              else
                v14 = 1;
            }
            else
              v14 = 1;
          }
          else
            v14 = 1;
        else
      else
        v14 = 1;
      goto LABEL_36;
  v14 = 1;
  v29 = v236;
LABEL_36:
  if ( v24 != v29 )
    v31 = v24;
    do
      v34 = (int *)((char *)*v31 - 12);
      if ( v34 != &dword_28898C0 )
        v32 = (unsigned int *)((char *)*v31 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      v31 += 5;
    while ( v31 != v29 );
  if ( v24 )
    operator delete(v24);
LABEL_50:
  v36 = (GoalDefinition *)v239;
  v35 = (GoalDefinition *)ptr;
      v35 = (GoalDefinition *)((char *)GoalDefinition::~GoalDefinition(v35) + 364);
    while ( v36 != v35 );
    v35 = (GoalDefinition *)ptr;
  if ( v35 )
    operator delete((void *)v35);
  return v14;
}


EntityDefinitionDescriptor *__fastcall EntityDefinitionDescriptor::combine(EntityDefinitionDescriptor *this, const EntityDefinitionDescriptor *a2)
{
  const EntityDefinitionDescriptor *v2; // r11@1
  EntityDefinitionDescriptor *v3; // r4@1
  int v4; // r0@1
  int *v5; // r5@1
  signed int v6; // r8@1
  int *v7; // r10@1
  char *v8; // r7@2
  char *v9; // r9@2
  const void *v10; // r6@3
  size_t v11; // r4@3
  int v12; // r0@8
  signed int v13; // r2@9
  int v14; // r6@10
  __int64 v15; // r0@16
  int *v16; // r6@17
  signed int v17; // r0@18
  int v18; // r7@20
  int *v19; // r4@20
  int *v20; // r5@20
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  const void *v23; // r8@31
  int *v24; // r10@31
  size_t v25; // r9@31
  int v26; // r12@36
  int v27; // r1@36
  int v28; // r2@36
  int v29; // r3@36
  int *v30; // r8@36
  signed int v31; // r0@37
  int v32; // r6@38
  int v33; // r1@39
  int v34; // r2@39
  int v35; // r3@39
  int v36; // r1@40
  int v37; // t1@40
  void *v38; // r0@40
  int *v39; // r8@43
  int i; // r6@43
  int v41; // r5@44
  int v42; // r0@45
  int v43; // r0@47
  int v44; // r0@49
  int v45; // r0@51
  int v46; // r0@53
  int v47; // r0@55
  int v48; // r0@57
  int v49; // r0@59
  int v50; // r0@61
  int v51; // r0@63
  int v52; // r0@65
  int v53; // r0@67
  int v54; // r0@69
  int v55; // r0@71
  int v56; // r0@73
  int v57; // r0@75
  int v58; // r0@77
  int v59; // r0@79
  int v60; // r0@81
  int v61; // r0@83
  int v62; // r0@85
  int v63; // r0@87
  int v64; // r0@89
  int v65; // r0@91
  int v66; // r0@93
  int v67; // r0@95
  int v68; // r0@97
  int v69; // r0@99
  int v70; // r0@101
  int v71; // r0@103
  int v72; // r0@105
  int v73; // r0@107
  int v74; // r0@109
  int v75; // r0@111
  int v76; // r0@113
  int v77; // r0@115
  int v78; // r0@117
  int v79; // r0@119
  int v80; // r0@121
  int v81; // r0@123
  int v82; // r0@125
  int v83; // r0@127
  int v84; // r0@129
  int v85; // r0@131
  int v86; // r0@133
  int v87; // r0@135
  int v88; // r0@137
  int v89; // r0@139
  int v90; // r0@141
  int v91; // r0@143
  int v92; // r0@145
  int v93; // r0@147
  int v94; // r0@149
  int v95; // r0@151
  int v96; // r0@153
  int v97; // r0@155
  int v98; // r0@157
  int v99; // r0@159
  int v100; // r0@161
  int v101; // r0@163
  int v102; // r0@165
  int v103; // r0@167
  int v104; // r0@169
  int v105; // r0@171
  int v106; // r0@173
  int v107; // r0@175
  int v108; // r0@177
  int v109; // r0@179
  int v110; // r0@181
  int v111; // r0@183
  int v112; // r0@185
  int v113; // r0@187
  int v114; // r0@189
  int v115; // r0@191
  int v116; // r0@193
  int v117; // r0@195
  int v118; // r0@197
  int v119; // r0@199
  int v120; // r0@201
  int v121; // r0@203
  int v122; // r0@205
  int v123; // r0@207
  int v124; // r0@209
  int v125; // r0@211
  int v126; // r0@213
  int v127; // r0@215
  int v128; // r0@217
  int v129; // r0@219
  int v130; // r0@221
  int v131; // r0@223
  int v132; // r0@225
  int v133; // r0@227
  int v134; // r0@229
  int v135; // r0@231
  int v136; // r0@233
  int v137; // r0@235
  int v138; // r0@237
  int v139; // r0@239
  int v140; // r0@241
  int v141; // r0@243
  int v142; // r0@245
  int *v143; // r4@248
  unsigned int *v144; // r2@249
  signed int v145; // r1@251
  int *v146; // r0@257
  GoalDefinition *v147; // r0@261
  GoalDefinition *v148; // r4@261
  EntityDefinitionDescriptor *v150; // [sp+14h] [bp-3Ch]@1
  void *ptr; // [sp+18h] [bp-38h]@1
  char *v152; // [sp+1Ch] [bp-34h]@2

  v2 = a2;
  v3 = this;
  v150 = this;
  v4 = std::vector<GoalDefinition,std::allocator<GoalDefinition>>::vector(
         (int)&ptr,
         (unsigned __int64 *)((char *)a2 + 36))
     + 4;
  v6 = (signed int)v3 + 36;
  v5 = (int *)*((_DWORD *)v3 + 9);
  v7 = (int *)*((_DWORD *)v3 + 10);
  if ( v5 != v7 )
  {
    do
    {
      v9 = v152;
      v8 = (char *)ptr;
      if ( ptr != v152 )
      {
        v10 = (const void *)*v5;
        v11 = *(_DWORD *)(*v5 - 12);
        while ( v11 != *(_DWORD *)(*(_DWORD *)v8 - 12) || memcmp(v10, *(const void **)v8, v11) )
        {
          v8 += 364;
          if ( v9 == v8 )
            goto LABEL_14;
        }
        GoalDefinition::operator=(v5, (int *)v8);
        v12 = (int)(v8 + 364);
        if ( v8 + 364 != v152 )
          v13 = (signed int)&v152[-v12];
          v12 = (int)v152;
          if ( v13 >= 1 )
          {
            v14 = -755159085 * (v13 >> 2) + 1;
            do
            {
              GoalDefinition::operator=((int *)v8, (int *)v8 + 91);
              --v14;
              v8 += 364;
            }
            while ( v14 > 1 );
            v12 = (int)v152;
          }
        v152 = (char *)(v12 - 364);
        GoalDefinition::~GoalDefinition((GoalDefinition *)(v12 - 364));
        v7 = (int *)*((_DWORD *)v150 + 10);
      }
LABEL_14:
      v5 += 91;
    }
    while ( v5 != v7 );
    v5 = v7;
  }
  std::vector<GoalDefinition,std::allocator<GoalDefinition>>::_M_range_insert<__gnu_cxx::__normal_iterator<GoalDefinition*,std::vector<GoalDefinition,std::allocator<GoalDefinition>>>>(
    v6,
    v5,
    (int *)ptr,
    (int *)v152);
  v15 = *((_QWORD *)v2 + 6);
  if ( HIDWORD(v15) == (_DWORD)v15 )
    v16 = 0;
    LODWORD(v15) = HIDWORD(v15);
  else
    v17 = HIDWORD(v15) - v15;
    if ( (unsigned int)(-858993459 * (v17 >> 2)) >= 0xCCCCCCD )
      sub_21E57F4();
    v16 = (int *)operator new(v17);
    v15 = *((_QWORD *)v2 + 6);
  v18 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<EntityDefinitionAttribute const*,std::vector<EntityDefinitionAttribute,std::allocator<EntityDefinitionAttribute>>>,EntityDefinitionAttribute*>(
          v15,
          SHIDWORD(v15),
          (int)v16);
  v19 = (int *)*((_DWORD *)v150 + 12);
  v20 = (int *)*((_DWORD *)v150 + 13);
  if ( v19 == v20 )
    v20 = (int *)*((_DWORD *)v150 + 12);
      if ( v16 != (int *)v18 )
        v23 = (const void *)*v19;
        v24 = v16;
        v25 = *(_DWORD *)(*v19 - 12);
        while ( v25 != *(_DWORD *)(*v24 - 12) || memcmp(v23, (const void *)*v24, v25) )
          v24 += 5;
          if ( (int *)v18 == v24 )
            goto LABEL_42;
        EntityInteraction::setInteractText(v19, v24);
        v26 = (int)(v19 + 1);
        v27 = v24[2];
        v28 = v24[3];
        v29 = v24[4];
        v30 = v16;
        *(_DWORD *)v26 = v24[1];
        *(_DWORD *)(v26 + 4) = v27;
        *(_DWORD *)(v26 + 8) = v28;
        *(_DWORD *)(v26 + 12) = v29;
        if ( v24 + 5 != (int *)v18 )
          v31 = v18 - (_DWORD)(v24 + 5);
          if ( v31 >= 1 )
            v32 = -858993459 * (v31 >> 2) + 1;
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                v24,
                v24 + 5);
              --v32;
              v33 = v24[7];
              v34 = v24[8];
              v35 = v24[9];
              v24 += 5;
              *(v24 - 4) = v24[1];
              *(v24 - 3) = v33;
              *(v24 - 2) = v34;
              *(v24 - 1) = v35;
            while ( v32 > 1 );
        v37 = *(_DWORD *)(v18 - 20);
        v18 -= 20;
        v36 = v37;
        v16 = v30;
        v38 = (void *)(v37 - 12);
        if ( (int *)(v37 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v36 - 4);
          if ( &pthread_create )
            __dmb();
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v16 = v30;
          else
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v38);
        v20 = (int *)*((_DWORD *)v150 + 13);
LABEL_42:
      v19 += 5;
    while ( v19 != v20 );
  std::vector<EntityDefinitionAttribute,std::allocator<EntityDefinitionAttribute>>::_M_range_insert<__gnu_cxx::__normal_iterator<EntityDefinitionAttribute*,std::vector<EntityDefinitionAttribute,std::allocator<EntityDefinitionAttribute>>>>(
    (signed int)v150 + 48,
    v20,
    v16,
    v18);
  v39 = v16;
  for ( i = *((_DWORD *)v2 + 17); i; i = *(_DWORD *)i )
    v41 = std::__detail::_Map_base<std::string,std::pair<std::string const,DefinitionEvent>,std::allocator<std::pair<std::string const,DefinitionEvent>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (unsigned __int64 *)((char *)v150 + 60),
            (int **)(i + 4));
    *(_DWORD *)v41 = *(_DWORD *)(i + 8);
    *(_DWORD *)(v41 + 8) = *(_DWORD *)(i + 16);
    std::vector<std::shared_ptr<FilterGroup>,std::allocator<std::shared_ptr<FilterGroup>>>::operator=(
      v41 + 12,
      (__int64 *)(i + 20));
    std::vector<std::shared_ptr<FilterTest>,std::allocator<std::shared_ptr<FilterTest>>>::operator=(
      v41 + 24,
      (__int64 *)(i + 32));
    EntityInteraction::setInteractText((int *)(v41 + 36), (int *)(i + 44));
    *(_DWORD *)(v41 + 40) = *(_DWORD *)(i + 48);
    std::vector<std::string,std::allocator<std::string>>::operator=(v41 + 44, (unsigned __int64 *)(i + 52));
    std::vector<std::string,std::allocator<std::string>>::operator=(v41 + 56, (unsigned __int64 *)(i + 64));
    std::vector<DefinitionEvent,std::allocator<DefinitionEvent>>::operator=(v41 + 68, i + 76);
  v42 = *((_DWORD *)v2 + 22);
  if ( v42 )
    *((_DWORD *)v150 + 22) = v42;
  v43 = *((_DWORD *)v2 + 23);
  if ( v43 )
    *((_DWORD *)v150 + 23) = v43;
  v44 = *((_DWORD *)v2 + 24);
  if ( v44 )
    *((_DWORD *)v150 + 24) = v44;
  v45 = *((_DWORD *)v2 + 25);
  if ( v45 )
    *((_DWORD *)v150 + 25) = v45;
  v46 = *((_DWORD *)v2 + 26);
  if ( v46 )
    *((_DWORD *)v150 + 26) = v46;
  v47 = *((_DWORD *)v2 + 27);
  if ( v47 )
    *((_DWORD *)v150 + 27) = v47;
  v48 = *((_DWORD *)v2 + 28);
  if ( v48 )
    *((_DWORD *)v150 + 28) = v48;
  v49 = *((_DWORD *)v2 + 29);
  if ( v49 )
    *((_DWORD *)v150 + 29) = v49;
  v50 = *((_DWORD *)v2 + 30);
  if ( v50 )
    *((_DWORD *)v150 + 30) = v50;
  v51 = *((_DWORD *)v2 + 31);
  if ( v51 )
    *((_DWORD *)v150 + 31) = v51;
  v52 = *((_DWORD *)v2 + 32);
  if ( v52 )
    *((_DWORD *)v150 + 32) = v52;
  v53 = *((_DWORD *)v2 + 33);
  if ( v53 )
    *((_DWORD *)v150 + 33) = v53;
  v54 = *((_DWORD *)v2 + 34);
  if ( v54 )
    *((_DWORD *)v150 + 34) = v54;
  v55 = *((_DWORD *)v2 + 35);
  if ( v55 )
    *((_DWORD *)v150 + 35) = v55;
  v56 = *((_DWORD *)v2 + 36);
  if ( v56 )
    *((_DWORD *)v150 + 36) = v56;
  v57 = *((_DWORD *)v2 + 37);
  if ( v57 )
    *((_DWORD *)v150 + 37) = v57;
  v58 = *((_DWORD *)v2 + 38);
  if ( v58 )
    *((_DWORD *)v150 + 38) = v58;
  v59 = *((_DWORD *)v2 + 39);
  if ( v59 )
    *((_DWORD *)v150 + 39) = v59;
  v60 = *((_DWORD *)v2 + 40);
  if ( v60 )
    *((_DWORD *)v150 + 40) = v60;
  v61 = *((_DWORD *)v2 + 41);
  if ( v61 )
    *((_DWORD *)v150 + 41) = v61;
  v62 = *((_DWORD *)v2 + 42);
  if ( v62 )
    *((_DWORD *)v150 + 42) = v62;
  v63 = *((_DWORD *)v2 + 43);
  if ( v63 )
    *((_DWORD *)v150 + 43) = v63;
  v64 = *((_DWORD *)v2 + 44);
  if ( v64 )
    *((_DWORD *)v150 + 44) = v64;
  v65 = *((_DWORD *)v2 + 45);
  if ( v65 )
    *((_DWORD *)v150 + 45) = v65;
  v66 = *((_DWORD *)v2 + 46);
  if ( v66 )
    *((_DWORD *)v150 + 46) = v66;
  v67 = *((_DWORD *)v2 + 47);
  if ( v67 )
    *((_DWORD *)v150 + 47) = v67;
  v68 = *((_DWORD *)v2 + 48);
  if ( v68 )
    *((_DWORD *)v150 + 48) = v68;
  v69 = *((_DWORD *)v2 + 49);
  if ( v69 )
    *((_DWORD *)v150 + 49) = v69;
  v70 = *((_DWORD *)v2 + 50);
  if ( v70 )
    *((_DWORD *)v150 + 50) = v70;
  v71 = *((_DWORD *)v2 + 51);
  if ( v71 )
    *((_DWORD *)v150 + 51) = v71;
  v72 = *((_DWORD *)v2 + 52);
  if ( v72 )
    *((_DWORD *)v150 + 52) = v72;
  v73 = *((_DWORD *)v2 + 53);
  if ( v73 )
    *((_DWORD *)v150 + 53) = v73;
  v74 = *((_DWORD *)v2 + 54);
  if ( v74 )
    *((_DWORD *)v150 + 54) = v74;
  v75 = *((_DWORD *)v2 + 55);
  if ( v75 )
    *((_DWORD *)v150 + 55) = v75;
  v76 = *((_DWORD *)v2 + 56);
  if ( v76 )
    *((_DWORD *)v150 + 56) = v76;
  v77 = *((_DWORD *)v2 + 57);
  if ( v77 )
    *((_DWORD *)v150 + 57) = v77;
  v78 = *((_DWORD *)v2 + 58);
  if ( v78 )
    *((_DWORD *)v150 + 58) = v78;
  v79 = *((_DWORD *)v2 + 59);
  if ( v79 )
    *((_DWORD *)v150 + 59) = v79;
  v80 = *((_DWORD *)v2 + 60);
  if ( v80 )
    *((_DWORD *)v150 + 60) = v80;
  v81 = *((_DWORD *)v2 + 61);
  if ( v81 )
    *((_DWORD *)v150 + 61) = v81;
  v82 = *((_DWORD *)v2 + 62);
  if ( v82 )
    *((_DWORD *)v150 + 62) = v82;
  v83 = *((_DWORD *)v2 + 63);
  if ( v83 )
    *((_DWORD *)v150 + 63) = v83;
  v84 = *((_DWORD *)v2 + 64);
  if ( v84 )
    *((_DWORD *)v150 + 64) = v84;
  v85 = *((_DWORD *)v2 + 65);
  if ( v85 )
    *((_DWORD *)v150 + 65) = v85;
  v86 = *((_DWORD *)v2 + 66);
  if ( v86 )
    *((_DWORD *)v150 + 66) = v86;
  v87 = *((_DWORD *)v2 + 67);
  if ( v87 )
    *((_DWORD *)v150 + 67) = v87;
  v88 = *((_DWORD *)v2 + 68);
  if ( v88 )
    *((_DWORD *)v150 + 68) = v88;
  v89 = *((_DWORD *)v2 + 69);
  if ( v89 )
    *((_DWORD *)v150 + 69) = v89;
  v90 = *((_DWORD *)v2 + 70);
  if ( v90 )
    *((_DWORD *)v150 + 70) = v90;
  v91 = *((_DWORD *)v2 + 71);
  if ( v91 )
    *((_DWORD *)v150 + 71) = v91;
  v92 = *((_DWORD *)v2 + 72);
  if ( v92 )
    *((_DWORD *)v150 + 72) = v92;
  v93 = *((_DWORD *)v2 + 73);
  if ( v93 )
    *((_DWORD *)v150 + 73) = v93;
  v94 = *((_DWORD *)v2 + 74);
  if ( v94 )
    *((_DWORD *)v150 + 74) = v94;
  v95 = *((_DWORD *)v2 + 75);
  if ( v95 )
    *((_DWORD *)v150 + 75) = v95;
  v96 = *((_DWORD *)v2 + 76);
  if ( v96 )
    *((_DWORD *)v150 + 76) = v96;
  v97 = *((_DWORD *)v2 + 77);
  if ( v97 )
    *((_DWORD *)v150 + 77) = v97;
  v98 = *((_DWORD *)v2 + 78);
  if ( v98 )
    *((_DWORD *)v150 + 78) = v98;
  v99 = *((_DWORD *)v2 + 79);
  if ( v99 )
    *((_DWORD *)v150 + 79) = v99;
  v100 = *((_DWORD *)v2 + 80);
  if ( v100 )
    *((_DWORD *)v150 + 80) = v100;
  v101 = *((_DWORD *)v2 + 81);
  if ( v101 )
    *((_DWORD *)v150 + 81) = v101;
  v102 = *((_DWORD *)v2 + 82);
  if ( v102 )
    *((_DWORD *)v150 + 82) = v102;
  v103 = *((_DWORD *)v2 + 83);
  if ( v103 )
    *((_DWORD *)v150 + 83) = v103;
  v104 = *((_DWORD *)v2 + 84);
  if ( v104 )
    *((_DWORD *)v150 + 84) = v104;
  v105 = *((_DWORD *)v2 + 85);
  if ( v105 )
    *((_DWORD *)v150 + 85) = v105;
  v106 = *((_DWORD *)v2 + 86);
  if ( v106 )
    *((_DWORD *)v150 + 86) = v106;
  v107 = *((_DWORD *)v2 + 87);
  if ( v107 )
    *((_DWORD *)v150 + 87) = v107;
  v108 = *((_DWORD *)v2 + 88);
  if ( v108 )
    *((_DWORD *)v150 + 88) = v108;
  v109 = *((_DWORD *)v2 + 89);
  if ( v109 )
    *((_DWORD *)v150 + 89) = v109;
  v110 = *((_DWORD *)v2 + 90);
  if ( v110 )
    *((_DWORD *)v150 + 90) = v110;
  v111 = *((_DWORD *)v2 + 91);
  if ( v111 )
    *((_DWORD *)v150 + 91) = v111;
  v112 = *((_DWORD *)v2 + 92);
  if ( v112 )
    *((_DWORD *)v150 + 92) = v112;
  v113 = *((_DWORD *)v2 + 93);
  if ( v113 )
    *((_DWORD *)v150 + 93) = v113;
  v114 = *((_DWORD *)v2 + 94);
  if ( v114 )
    *((_DWORD *)v150 + 94) = v114;
  v115 = *((_DWORD *)v2 + 95);
  if ( v115 )
    *((_DWORD *)v150 + 95) = v115;
  v116 = *((_DWORD *)v2 + 96);
  if ( v116 )
    *((_DWORD *)v150 + 96) = v116;
  v117 = *((_DWORD *)v2 + 97);
  if ( v117 )
    *((_DWORD *)v150 + 97) = v117;
  v118 = *((_DWORD *)v2 + 98);
  if ( v118 )
    *((_DWORD *)v150 + 98) = v118;
  v119 = *((_DWORD *)v2 + 99);
  if ( v119 )
    *((_DWORD *)v150 + 99) = v119;
  v120 = *((_DWORD *)v2 + 100);
  if ( v120 )
    *((_DWORD *)v150 + 100) = v120;
  v121 = *((_DWORD *)v2 + 101);
  if ( v121 )
    *((_DWORD *)v150 + 101) = v121;
  v122 = *((_DWORD *)v2 + 102);
  if ( v122 )
    *((_DWORD *)v150 + 102) = v122;
  v123 = *((_DWORD *)v2 + 103);
  if ( v123 )
    *((_DWORD *)v150 + 103) = v123;
  v124 = *((_DWORD *)v2 + 104);
  if ( v124 )
    *((_DWORD *)v150 + 104) = v124;
  v125 = *((_DWORD *)v2 + 105);
  if ( v125 )
    *((_DWORD *)v150 + 105) = v125;
  v126 = *((_DWORD *)v2 + 106);
  if ( v126 )
    *((_DWORD *)v150 + 106) = v126;
  v127 = *((_DWORD *)v2 + 107);
  if ( v127 )
    *((_DWORD *)v150 + 107) = v127;
  v128 = *((_DWORD *)v2 + 108);
  if ( v128 )
    *((_DWORD *)v150 + 108) = v128;
  v129 = *((_DWORD *)v2 + 109);
  if ( v129 )
    *((_DWORD *)v150 + 109) = v129;
  v130 = *((_DWORD *)v2 + 110);
  if ( v130 )
    *((_DWORD *)v150 + 110) = v130;
  v131 = *((_DWORD *)v2 + 111);
  if ( v131 )
    *((_DWORD *)v150 + 111) = v131;
  v132 = *((_DWORD *)v2 + 112);
  if ( v132 )
    *((_DWORD *)v150 + 112) = v132;
  v133 = *((_DWORD *)v2 + 113);
  if ( v133 )
    *((_DWORD *)v150 + 113) = v133;
  v134 = *((_DWORD *)v2 + 114);
  if ( v134 )
    *((_DWORD *)v150 + 114) = v134;
  v135 = *((_DWORD *)v2 + 115);
  if ( v135 )
    *((_DWORD *)v150 + 115) = v135;
  v136 = *((_DWORD *)v2 + 116);
  if ( v136 )
    *((_DWORD *)v150 + 116) = v136;
  v137 = *((_DWORD *)v2 + 117);
  if ( v137 )
    *((_DWORD *)v150 + 117) = v137;
  v138 = *((_DWORD *)v2 + 118);
  if ( v138 )
    *((_DWORD *)v150 + 118) = v138;
  v139 = *((_DWORD *)v2 + 119);
  if ( v139 )
    *((_DWORD *)v150 + 119) = v139;
  v140 = *((_DWORD *)v2 + 120);
  if ( v140 )
    *((_DWORD *)v150 + 120) = v140;
  v141 = *((_DWORD *)v2 + 121);
  if ( v141 )
    *((_DWORD *)v150 + 121) = v141;
  v142 = *((_DWORD *)v2 + 122);
  if ( v142 )
    *((_DWORD *)v150 + 122) = v142;
  std::__detail::_Insert_base<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_range<std::__detail::_Node_const_iterator<std::string,true,true>,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
    (int)v150,
    *((int **)v2 + 2),
    0);
  if ( v39 != (int *)v18 )
    v143 = v39;
      v146 = (int *)(*v143 - 12);
      if ( v146 != &dword_28898C0 )
        v144 = (unsigned int *)(*v143 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v145 = __ldrex(v144);
          while ( __strex(v145 - 1, v144) );
        else
          v145 = (*v144)--;
        if ( v145 <= 0 )
          j_j_j_j__ZdlPv_9(v146);
      v143 += 5;
    while ( v143 != (int *)v18 );
  if ( v39 )
    operator delete(v39);
  v148 = (GoalDefinition *)v152;
  v147 = (GoalDefinition *)ptr;
  if ( ptr != v152 )
      v147 = (GoalDefinition *)((char *)GoalDefinition::~GoalDefinition(v147) + 364);
    while ( v148 != v147 );
    v147 = (GoalDefinition *)ptr;
  if ( v147 )
    operator delete((void *)v147);
  return v150;
}


signed int __fastcall EntityDefinitionDescriptor::empty(EntityDefinitionDescriptor *this)
{
  __int64 v1; // r1@1
  bool v2; // zf@1
  signed int result; // r0@4
  int v4; // r1@5
  bool v5; // zf@5
  int v6; // r1@9
  bool v7; // zf@9
  int v8; // r1@13
  bool v9; // zf@13
  int v10; // r1@17
  bool v11; // zf@17
  int v12; // r1@21
  bool v13; // zf@21
  int v14; // r1@25
  bool v15; // zf@25
  int v16; // r1@29
  bool v17; // zf@29
  int v18; // r1@33
  bool v19; // zf@33
  int v20; // r1@37
  bool v21; // zf@37
  int v22; // r1@41
  bool v23; // zf@41
  int v24; // r1@45
  bool v25; // zf@45
  int v26; // r1@49
  bool v27; // zf@49
  int v28; // r1@53
  bool v29; // zf@53
  int v30; // r1@57
  bool v31; // zf@57
  int v32; // r1@61
  bool v33; // zf@61
  int v34; // r1@65
  bool v35; // zf@65
  int v36; // r1@69
  bool v37; // zf@69
  int v38; // r1@73
  bool v39; // zf@73
  int v40; // r1@77
  bool v41; // zf@77
  int v42; // r1@81
  bool v43; // zf@81
  int v44; // r1@85
  bool v45; // zf@85
  int v46; // r1@89
  bool v47; // zf@89
  int v48; // r1@93
  bool v49; // zf@93
  int v50; // r1@97
  bool v51; // zf@97
  int v52; // r1@101
  bool v53; // zf@101
  int v54; // r1@105
  bool v55; // zf@105
  int v56; // r1@109
  bool v57; // zf@109
  int v58; // r1@113
  bool v59; // zf@113
  int v60; // r1@117
  bool v61; // zf@117
  int v62; // r1@121
  bool v63; // zf@121
  int v64; // r1@125
  bool v65; // zf@125
  int v66; // r1@129
  bool v67; // zf@129
  int v68; // r1@133
  bool v69; // zf@133
  int v70; // r1@137
  bool v71; // zf@137
  int v72; // r1@141
  bool v73; // zf@141
  int v74; // r1@145
  bool v75; // zf@145
  int v76; // r1@149
  bool v77; // zf@149
  int v78; // r1@153
  bool v79; // zf@153
  int v80; // r1@157
  bool v81; // zf@157
  int v82; // r1@161
  bool v83; // zf@161
  int v84; // r1@165
  bool v85; // zf@165
  int v86; // r1@169
  bool v87; // zf@169
  int v88; // r1@173
  bool v89; // zf@173
  int v90; // r1@177
  bool v91; // zf@177
  int v92; // r1@181
  bool v93; // zf@181
  int v94; // r1@185
  bool v95; // zf@185
  int v96; // r1@189
  bool v97; // zf@189
  int v98; // r1@193
  bool v99; // zf@193
  int v100; // r1@197
  bool v101; // zf@197
  int v102; // r1@201
  bool v103; // zf@201
  signed int v104; // r1@205

  v1 = *(_QWORD *)((char *)this + 36);
  v2 = (_DWORD)v1 == HIDWORD(v1);
  if ( (_DWORD)v1 == HIDWORD(v1) )
    v2 = (unsigned int)*((_QWORD *)this + 6) == *((_QWORD *)this + 6) >> 32;
  if ( !v2 )
    goto LABEL_211;
  v4 = *((_DWORD *)this + 18);
  v5 = v4 == 0;
  if ( !v4 )
    v5 = *((_DWORD *)this + 22) == 0;
  if ( !v5 )
  v6 = *((_DWORD *)this + 23);
  v7 = v6 == 0;
  if ( !v6 )
    v7 = *((_DWORD *)this + 24) == 0;
  if ( !v7 )
  v8 = *((_DWORD *)this + 25);
  v9 = v8 == 0;
  if ( !v8 )
    v9 = *((_DWORD *)this + 26) == 0;
  if ( !v9 )
  v10 = *((_DWORD *)this + 27);
  v11 = v10 == 0;
  if ( !v10 )
    v11 = *((_DWORD *)this + 28) == 0;
  if ( !v11 )
  v12 = *((_DWORD *)this + 29);
  v13 = v12 == 0;
  if ( !v12 )
    v13 = *((_DWORD *)this + 30) == 0;
  if ( !v13 )
  v14 = *((_DWORD *)this + 31);
  v15 = v14 == 0;
  if ( !v14 )
    v15 = *((_DWORD *)this + 32) == 0;
  if ( !v15 )
  v16 = *((_DWORD *)this + 33);
  v17 = v16 == 0;
  if ( !v16 )
    v17 = *((_DWORD *)this + 34) == 0;
  if ( !v17 )
  v18 = *((_DWORD *)this + 35);
  v19 = v18 == 0;
  if ( !v18 )
    v19 = *((_DWORD *)this + 36) == 0;
  if ( !v19 )
  v20 = *((_DWORD *)this + 37);
  v21 = v20 == 0;
  if ( !v20 )
    v21 = *((_DWORD *)this + 38) == 0;
  if ( !v21 )
  v22 = *((_DWORD *)this + 39);
  v23 = v22 == 0;
  if ( !v22 )
    v23 = *((_DWORD *)this + 40) == 0;
  if ( !v23 )
  v24 = *((_DWORD *)this + 41);
  v25 = v24 == 0;
  if ( !v24 )
    v25 = *((_DWORD *)this + 42) == 0;
  if ( !v25 )
  v26 = *((_DWORD *)this + 43);
  v27 = v26 == 0;
  if ( !v26 )
    v27 = *((_DWORD *)this + 44) == 0;
  if ( !v27 )
  v28 = *((_DWORD *)this + 45);
  v29 = v28 == 0;
  if ( !v28 )
    v29 = *((_DWORD *)this + 46) == 0;
  if ( !v29 )
  v30 = *((_DWORD *)this + 47);
  v31 = v30 == 0;
  if ( !v30 )
    v31 = *((_DWORD *)this + 48) == 0;
  if ( !v31 )
  v32 = *((_DWORD *)this + 49);
  v33 = v32 == 0;
  if ( !v32 )
    v33 = *((_DWORD *)this + 50) == 0;
  if ( !v33 )
  v34 = *((_DWORD *)this + 51);
  v35 = v34 == 0;
  if ( !v34 )
    v35 = *((_DWORD *)this + 52) == 0;
  if ( !v35 )
  v36 = *((_DWORD *)this + 53);
  v37 = v36 == 0;
  if ( !v36 )
    v37 = *((_DWORD *)this + 54) == 0;
  if ( !v37 )
  v38 = *((_DWORD *)this + 55);
  v39 = v38 == 0;
  if ( !v38 )
    v39 = *((_DWORD *)this + 56) == 0;
  if ( !v39 )
  v40 = *((_DWORD *)this + 57);
  v41 = v40 == 0;
  if ( !v40 )
    v41 = *((_DWORD *)this + 58) == 0;
  if ( !v41 )
  v42 = *((_DWORD *)this + 59);
  v43 = v42 == 0;
  if ( !v42 )
    v43 = *((_DWORD *)this + 60) == 0;
  if ( !v43 )
  v44 = *((_DWORD *)this + 61);
  v45 = v44 == 0;
  if ( !v44 )
    v45 = *((_DWORD *)this + 62) == 0;
  if ( !v45 )
  v46 = *((_DWORD *)this + 63);
  v47 = v46 == 0;
  if ( !v46 )
    v47 = *((_DWORD *)this + 64) == 0;
  if ( !v47 )
  v48 = *((_DWORD *)this + 65);
  v49 = v48 == 0;
  if ( !v48 )
    v49 = *((_DWORD *)this + 66) == 0;
  if ( !v49 )
  v50 = *((_DWORD *)this + 67);
  v51 = v50 == 0;
  if ( !v50 )
    v51 = *((_DWORD *)this + 68) == 0;
  if ( !v51 )
  v52 = *((_DWORD *)this + 69);
  v53 = v52 == 0;
  if ( !v52 )
    v53 = *((_DWORD *)this + 70) == 0;
  if ( !v53 )
  v54 = *((_DWORD *)this + 71);
  v55 = v54 == 0;
  if ( !v54 )
    v55 = *((_DWORD *)this + 72) == 0;
  if ( !v55 )
  v56 = *((_DWORD *)this + 73);
  v57 = v56 == 0;
  if ( !v56 )
    v57 = *((_DWORD *)this + 74) == 0;
  if ( !v57 )
  v58 = *((_DWORD *)this + 75);
  v59 = v58 == 0;
  if ( !v58 )
    v59 = *((_DWORD *)this + 76) == 0;
  if ( !v59 )
  v60 = *((_DWORD *)this + 77);
  v61 = v60 == 0;
  if ( !v60 )
    v61 = *((_DWORD *)this + 78) == 0;
  if ( !v61 )
  v62 = *((_DWORD *)this + 79);
  v63 = v62 == 0;
  if ( !v62 )
    v63 = *((_DWORD *)this + 80) == 0;
  if ( !v63 )
  v64 = *((_DWORD *)this + 81);
  v65 = v64 == 0;
  if ( !v64 )
    v65 = *((_DWORD *)this + 82) == 0;
  if ( !v65 )
  v66 = *((_DWORD *)this + 83);
  v67 = v66 == 0;
  if ( !v66 )
    v67 = *((_DWORD *)this + 84) == 0;
  if ( !v67 )
  v68 = *((_DWORD *)this + 85);
  v69 = v68 == 0;
  if ( !v68 )
    v69 = *((_DWORD *)this + 86) == 0;
  if ( !v69 )
  v70 = *((_DWORD *)this + 87);
  v71 = v70 == 0;
  if ( !v70 )
    v71 = *((_DWORD *)this + 88) == 0;
  if ( !v71 )
  v72 = *((_DWORD *)this + 89);
  v73 = v72 == 0;
  if ( !v72 )
    v73 = *((_DWORD *)this + 90) == 0;
  if ( !v73 )
  v74 = *((_DWORD *)this + 91);
  v75 = v74 == 0;
  if ( !v74 )
    v75 = *((_DWORD *)this + 92) == 0;
  if ( !v75 )
  v76 = *((_DWORD *)this + 93);
  v77 = v76 == 0;
  if ( !v76 )
    v77 = *((_DWORD *)this + 94) == 0;
  if ( !v77 )
  v78 = *((_DWORD *)this + 95);
  v79 = v78 == 0;
  if ( !v78 )
    v79 = *((_DWORD *)this + 96) == 0;
  if ( !v79 )
  v80 = *((_DWORD *)this + 97);
  v81 = v80 == 0;
  if ( !v80 )
    v81 = *((_DWORD *)this + 98) == 0;
  if ( !v81 )
  v82 = *((_DWORD *)this + 99);
  v83 = v82 == 0;
  if ( !v82 )
    v83 = *((_DWORD *)this + 100) == 0;
  if ( !v83 )
  v84 = *((_DWORD *)this + 101);
  v85 = v84 == 0;
  if ( !v84 )
    v85 = *((_DWORD *)this + 102) == 0;
  if ( !v85 )
  v86 = *((_DWORD *)this + 103);
  v87 = v86 == 0;
  if ( !v86 )
    v87 = *((_DWORD *)this + 104) == 0;
  if ( !v87 )
  v88 = *((_DWORD *)this + 105);
  v89 = v88 == 0;
  if ( !v88 )
    v89 = *((_DWORD *)this + 106) == 0;
  if ( !v89 )
  v90 = *((_DWORD *)this + 107);
  v91 = v90 == 0;
  if ( !v90 )
    v91 = *((_DWORD *)this + 108) == 0;
  if ( !v91 )
  v92 = *((_DWORD *)this + 109);
  v93 = v92 == 0;
  if ( !v92 )
    v93 = *((_DWORD *)this + 110) == 0;
  if ( !v93 )
  v94 = *((_DWORD *)this + 111);
  v95 = v94 == 0;
  if ( !v94 )
    v95 = *((_DWORD *)this + 112) == 0;
  if ( !v95 )
  v96 = *((_DWORD *)this + 113);
  v97 = v96 == 0;
  if ( !v96 )
    v97 = *((_DWORD *)this + 114) == 0;
  if ( !v97 )
  v98 = *((_DWORD *)this + 115);
  v99 = v98 == 0;
  if ( !v98 )
    v99 = *((_DWORD *)this + 116) == 0;
  if ( !v99 )
  v100 = *((_DWORD *)this + 117);
  v101 = v100 == 0;
  if ( !v100 )
    v101 = *((_DWORD *)this + 118) == 0;
  if ( !v101 )
  v102 = *((_DWORD *)this + 119);
  v103 = v102 == 0;
  if ( !v102 )
    v103 = *((_DWORD *)this + 120) == 0;
  if ( v103 )
  {
    v104 = 0;
    if ( !*((_DWORD *)this + 121) && !*((_DWORD *)this + 122) )
      v104 = 1;
    result = v104;
  }
  else
LABEL_211:
    result = 0;
  return result;
}


void __fastcall EntityDefinitionDescriptor::forceExecuteTrigger(EntityDefinitionDescriptor *this, Entity *a2, const DefinitionTrigger *a3, const VariantParameterList *a4)
{
  EntityDefinitionDescriptor::forceExecuteTrigger(this, a2, a3, a4);
}


int __fastcall EntityDefinitionDescriptor::contains(EntityDefinitionDescriptor *this, const EntityDefinitionDescriptor *a2)
{
  const EntityDefinitionDescriptor *v2; // r4@1
  EntityDefinitionDescriptor *v3; // r10@1
  const void **v4; // r6@1
  const void **v5; // r11@1
  __int64 v6; // kr08_8@2
  const EntityDefinitionDescriptor *v7; // r10@3
  const void *v8; // r4@3
  const void **v9; // r8@3
  size_t v10; // r5@3
  __int64 v11; // r0@9
  void *v12; // r6@10
  int v13; // r9@7
  signed int v14; // r0@12
  int v15; // r11@14
  __int64 v16; // kr10_8@15
  const void **v17; // r8@16
  const void *v18; // r4@17
  const void **v19; // r7@17
  void *v20; // r10@17
  size_t v21; // r6@17
  int v22; // r5@23
  void *v23; // r8@334
  unsigned int *v24; // r2@335
  signed int v25; // r1@337
  int *v26; // r0@343
  GoalDefinition *v27; // r0@348
  GoalDefinition *v28; // r4@348
  const EntityDefinitionDescriptor *v30; // [sp+4h] [bp-3Ch]@14
  EntityDefinitionDescriptor *v31; // [sp+8h] [bp-38h]@3
  EntityDefinitionDescriptor *v32; // [sp+8h] [bp-38h]@17
  void *ptr; // [sp+Ch] [bp-34h]@1
  const void **v34; // [sp+10h] [bp-30h]@1

  v2 = a2;
  v3 = this;
  std::vector<GoalDefinition,std::allocator<GoalDefinition>>::vector((int)&ptr, (unsigned __int64 *)((char *)a2 + 36));
  v5 = v34;
  v4 = (const void **)ptr;
  if ( ptr != v34 )
  {
    v6 = *(_QWORD *)((char *)v3 + 36);
    if ( (_DWORD)v6 == HIDWORD(v6) )
    {
      v13 = 0;
      goto LABEL_348;
    }
    do
      v31 = v3;
      v7 = v2;
      v8 = *v4;
      v9 = (const void **)v6;
      v10 = *((_DWORD *)*v4 - 3);
      while ( *((_DWORD *)*v9 - 3) != v10 || memcmp(*v9, v8, v10) )
      {
        v9 += 91;
        if ( (const void **)HIDWORD(v6) == v9 )
        {
          v13 = 0;
          goto LABEL_348;
        }
      }
      v2 = v7;
      v3 = v31;
      v4 += 91;
    while ( v4 != v5 );
  }
  v11 = *((_QWORD *)v2 + 6);
  if ( HIDWORD(v11) == (_DWORD)v11 )
    v12 = 0;
    LODWORD(v11) = HIDWORD(v11);
  else
    v14 = HIDWORD(v11) - v11;
    if ( (unsigned int)(-858993459 * (v14 >> 2)) >= 0xCCCCCCD )
      sub_21E57F4();
    v12 = operator new(v14);
    v11 = *((_QWORD *)v2 + 6);
  v30 = v2;
  v15 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<EntityDefinitionAttribute const*,std::vector<EntityDefinitionAttribute,std::allocator<EntityDefinitionAttribute>>>,EntityDefinitionAttribute*>(
          v11,
          SHIDWORD(v11),
          (int)v12);
  if ( v12 == (void *)v15 )
LABEL_23:
    v22 = *((_DWORD *)v30 + 17);
    if ( v22 )
      while ( std::_Hashtable<std::string,std::pair<std::string const,DefinitionEvent>,std::allocator<std::pair<std::string const,DefinitionEvent>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                (unsigned __int64 *)((char *)v3 + 60),
                (int **)(v22 + 4)) )
        v22 = *(_DWORD *)v22;
        if ( !v22 )
          goto LABEL_26;
    else
LABEL_26:
      if ( *((_DWORD *)v30 + 22) && !*((_DWORD *)v3 + 22) )
        v13 = 0;
      else if ( *((_DWORD *)v30 + 23) && !*((_DWORD *)v3 + 23) )
      else if ( *((_DWORD *)v30 + 24) && !*((_DWORD *)v3 + 24) )
      else if ( *((_DWORD *)v30 + 25) && !*((_DWORD *)v3 + 25) )
      else if ( *((_DWORD *)v30 + 26) && !*((_DWORD *)v3 + 26) )
      else if ( *((_DWORD *)v30 + 27) && !*((_DWORD *)v3 + 27) )
      else if ( *((_DWORD *)v30 + 28) && !*((_DWORD *)v3 + 28) )
      else if ( *((_DWORD *)v30 + 29) && !*((_DWORD *)v3 + 29) )
      else if ( *((_DWORD *)v30 + 30) && !*((_DWORD *)v3 + 30) )
      else if ( *((_DWORD *)v30 + 31) && !*((_DWORD *)v3 + 31) )
      else if ( *((_DWORD *)v30 + 32) && !*((_DWORD *)v3 + 32) )
      else if ( *((_DWORD *)v30 + 33) && !*((_DWORD *)v3 + 33) )
      else if ( *((_DWORD *)v30 + 34) && !*((_DWORD *)v3 + 34) )
      else if ( *((_DWORD *)v30 + 35) && !*((_DWORD *)v3 + 35) )
      else if ( *((_DWORD *)v30 + 36) && !*((_DWORD *)v3 + 36) )
      else if ( *((_DWORD *)v30 + 37) && !*((_DWORD *)v3 + 37) )
      else if ( *((_DWORD *)v30 + 38) && !*((_DWORD *)v3 + 38) )
      else if ( *((_DWORD *)v30 + 39) && !*((_DWORD *)v3 + 39) )
      else if ( *((_DWORD *)v30 + 40) && !*((_DWORD *)v3 + 40) )
      else if ( *((_DWORD *)v30 + 41) && !*((_DWORD *)v3 + 41) )
      else if ( *((_DWORD *)v30 + 42) && !*((_DWORD *)v3 + 42) )
      else if ( *((_DWORD *)v30 + 43) && !*((_DWORD *)v3 + 43) )
      else if ( *((_DWORD *)v30 + 44) && !*((_DWORD *)v3 + 44) )
      else if ( *((_DWORD *)v30 + 45) && !*((_DWORD *)v3 + 45) )
      else if ( *((_DWORD *)v30 + 46) && !*((_DWORD *)v3 + 46) )
      else if ( *((_DWORD *)v30 + 47) && !*((_DWORD *)v3 + 47) )
      else if ( *((_DWORD *)v30 + 48) && !*((_DWORD *)v3 + 48) )
      else if ( *((_DWORD *)v30 + 49) && !*((_DWORD *)v3 + 49) )
      else if ( *((_DWORD *)v30 + 50) && !*((_DWORD *)v3 + 50) )
      else if ( *((_DWORD *)v30 + 51) && !*((_DWORD *)v3 + 51) )
      else if ( *((_DWORD *)v30 + 52) && !*((_DWORD *)v3 + 52) )
      else if ( *((_DWORD *)v30 + 53) && !*((_DWORD *)v3 + 53) )
      else if ( *((_DWORD *)v30 + 54) && !*((_DWORD *)v3 + 54) )
      else if ( *((_DWORD *)v30 + 55) && !*((_DWORD *)v3 + 55) )
      else if ( *((_DWORD *)v30 + 56) && !*((_DWORD *)v3 + 56) )
      else if ( *((_DWORD *)v30 + 57) && !*((_DWORD *)v3 + 57) )
      else if ( *((_DWORD *)v30 + 58) && !*((_DWORD *)v3 + 58) )
      else if ( *((_DWORD *)v30 + 59) && !*((_DWORD *)v3 + 59) )
      else if ( *((_DWORD *)v30 + 60) && !*((_DWORD *)v3 + 60) )
      else if ( *((_DWORD *)v30 + 61) && !*((_DWORD *)v3 + 61) )
      else if ( *((_DWORD *)v30 + 62) && !*((_DWORD *)v3 + 62) )
      else if ( *((_DWORD *)v30 + 63) && !*((_DWORD *)v3 + 63) )
      else if ( *((_DWORD *)v30 + 64) && !*((_DWORD *)v3 + 64) )
      else if ( *((_DWORD *)v30 + 65) && !*((_DWORD *)v3 + 65) )
      else if ( *((_DWORD *)v30 + 66) && !*((_DWORD *)v3 + 66) )
      else if ( *((_DWORD *)v30 + 67) && !*((_DWORD *)v3 + 67) )
      else if ( *((_DWORD *)v30 + 68) && !*((_DWORD *)v3 + 68) )
      else if ( *((_DWORD *)v30 + 69) && !*((_DWORD *)v3 + 69) )
      else if ( *((_DWORD *)v30 + 70) && !*((_DWORD *)v3 + 70) )
      else if ( *((_DWORD *)v30 + 71) && !*((_DWORD *)v3 + 71) )
      else if ( *((_DWORD *)v30 + 72) && !*((_DWORD *)v3 + 72) )
      else if ( *((_DWORD *)v30 + 73) && !*((_DWORD *)v3 + 73) )
      else if ( *((_DWORD *)v30 + 74) && !*((_DWORD *)v3 + 74) )
      else if ( *((_DWORD *)v30 + 75) && !*((_DWORD *)v3 + 75) )
      else if ( *((_DWORD *)v30 + 76) && !*((_DWORD *)v3 + 76) )
      else if ( *((_DWORD *)v30 + 77) && !*((_DWORD *)v3 + 77) )
      else if ( *((_DWORD *)v30 + 78) && !*((_DWORD *)v3 + 78) )
      else if ( *((_DWORD *)v30 + 79) && !*((_DWORD *)v3 + 79) )
      else if ( *((_DWORD *)v30 + 80) && !*((_DWORD *)v3 + 80) )
      else if ( *((_DWORD *)v30 + 81) && !*((_DWORD *)v3 + 81) )
      else if ( *((_DWORD *)v30 + 82) && !*((_DWORD *)v3 + 82) )
      else if ( *((_DWORD *)v30 + 83) && !*((_DWORD *)v3 + 83) )
      else if ( *((_DWORD *)v30 + 84) && !*((_DWORD *)v3 + 84) )
      else if ( *((_DWORD *)v30 + 85) && !*((_DWORD *)v3 + 85) )
      else if ( *((_DWORD *)v30 + 86) && !*((_DWORD *)v3 + 86) )
      else if ( *((_DWORD *)v30 + 87) && !*((_DWORD *)v3 + 87) )
      else if ( *((_DWORD *)v30 + 88) && !*((_DWORD *)v3 + 88) )
      else if ( *((_DWORD *)v30 + 89) && !*((_DWORD *)v3 + 89) )
      else if ( *((_DWORD *)v30 + 90) && !*((_DWORD *)v3 + 90) )
      else if ( *((_DWORD *)v30 + 91) && !*((_DWORD *)v3 + 91) )
      else if ( *((_DWORD *)v30 + 92) && !*((_DWORD *)v3 + 92) )
      else if ( *((_DWORD *)v30 + 93) && !*((_DWORD *)v3 + 93) )
      else if ( *((_DWORD *)v30 + 94) && !*((_DWORD *)v3 + 94) )
      else if ( *((_DWORD *)v30 + 95) && !*((_DWORD *)v3 + 95) )
      else if ( *((_DWORD *)v30 + 96) && !*((_DWORD *)v3 + 96) )
      else if ( *((_DWORD *)v30 + 97) && !*((_DWORD *)v3 + 97) )
      else if ( *((_DWORD *)v30 + 98) && !*((_DWORD *)v3 + 98) )
      else if ( *((_DWORD *)v30 + 99) && !*((_DWORD *)v3 + 99) )
      else if ( *((_DWORD *)v30 + 100) && !*((_DWORD *)v3 + 100) )
      else if ( *((_DWORD *)v30 + 101) && !*((_DWORD *)v3 + 101) )
      else if ( *((_DWORD *)v30 + 102) && !*((_DWORD *)v3 + 102) )
      else if ( *((_DWORD *)v30 + 103) && !*((_DWORD *)v3 + 103) )
      else if ( *((_DWORD *)v30 + 104) && !*((_DWORD *)v3 + 104) )
      else if ( *((_DWORD *)v30 + 105) && !*((_DWORD *)v3 + 105) )
      else if ( *((_DWORD *)v30 + 106) && !*((_DWORD *)v3 + 106) )
      else if ( *((_DWORD *)v30 + 107) && !*((_DWORD *)v3 + 107) )
      else if ( *((_DWORD *)v30 + 108) && !*((_DWORD *)v3 + 108) )
      else if ( *((_DWORD *)v30 + 109) && !*((_DWORD *)v3 + 109) )
      else if ( *((_DWORD *)v30 + 110) && !*((_DWORD *)v3 + 110) )
      else if ( *((_DWORD *)v30 + 111) && !*((_DWORD *)v3 + 111) )
      else if ( *((_DWORD *)v30 + 112) && !*((_DWORD *)v3 + 112) )
      else if ( *((_DWORD *)v30 + 113) && !*((_DWORD *)v3 + 113) )
      else if ( *((_DWORD *)v30 + 114) && !*((_DWORD *)v3 + 114) )
      else if ( *((_DWORD *)v30 + 115) && !*((_DWORD *)v3 + 115) )
      else if ( *((_DWORD *)v30 + 116) && !*((_DWORD *)v3 + 116) )
      else if ( *((_DWORD *)v30 + 117) && !*((_DWORD *)v3 + 117) )
      else if ( *((_DWORD *)v30 + 118) && !*((_DWORD *)v3 + 118) )
      else if ( *((_DWORD *)v30 + 119) && !*((_DWORD *)v3 + 119) )
      else if ( *((_DWORD *)v30 + 120) && !*((_DWORD *)v3 + 120) )
      else if ( *((_DWORD *)v30 + 121) && !*((_DWORD *)v3 + 121) )
      else
        v13 = !*((_DWORD *)v30 + 122) || *((_DWORD *)v3 + 122);
LABEL_333:
    if ( v12 == (void *)v15 )
      goto LABEL_346;
    goto LABEL_334;
  v16 = *((_QWORD *)v3 + 6);
  if ( (_DWORD)v16 != HIDWORD(v16) )
    v17 = (const void **)v12;
      v18 = *v17;
      v19 = (const void **)v16;
      v32 = v3;
      v20 = v12;
      v21 = *((_DWORD *)*v17 - 3);
      while ( *((_DWORD *)*v19 - 3) != v21 || memcmp(*v19, v18, v21) )
        v19 += 5;
        if ( (const void **)HIDWORD(v16) == v19 )
          v12 = v20;
          goto LABEL_333;
      v12 = v20;
      v3 = v32;
      v17 += 5;
    while ( v17 != (const void **)v15 );
    goto LABEL_23;
  v13 = 0;
LABEL_334:
  v23 = v12;
  do
    v26 = (int *)(*(_DWORD *)v12 - 12);
    if ( v26 != &dword_28898C0 )
      v24 = (unsigned int *)(*(_DWORD *)v12 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v12 = (char *)v12 + 20;
  while ( v12 != (void *)v15 );
  v12 = v23;
LABEL_346:
  if ( v12 )
    operator delete(v12);
LABEL_348:
  v28 = (GoalDefinition *)v34;
  v27 = (GoalDefinition *)ptr;
      v27 = (GoalDefinition *)((char *)GoalDefinition::~GoalDefinition(v27) + 364);
    while ( v28 != v27 );
    v27 = (GoalDefinition *)ptr;
  if ( v27 )
    operator delete((void *)v27);
  return v13;
}


int __fastcall EntityDefinitionDescriptor::EntityDefinitionDescriptor(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r7@1
  int v5; // r6@1
  unsigned int v6; // r1@1
  int v7; // r0@1
  _DWORD *v8; // r2@1
  int v9; // r1@5
  int v10; // r1@5
  int v11; // r0@5
  int v12; // r0@5
  int v13; // r6@5
  unsigned int v14; // r1@5
  int v15; // r0@5
  _DWORD *v16; // r2@5

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)a2;
  v5 = a2 + 24;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v6 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 4) = v6;
  v7 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v3 + 8) = v7;
  *(_DWORD *)(v3 + 12) = *(_DWORD *)(v2 + 12);
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(v2 + 16);
  v8 = *(_DWORD **)v2;
  if ( v5 == *(_DWORD *)v2 )
  {
    v4 = v3 + 24;
    *(_DWORD *)v3 = v3 + 24;
    *(_DWORD *)(v3 + 24) = *v8;
  }
  if ( v7 )
    *(_DWORD *)(v4 + 4 * (*(_DWORD *)(v7 + 8) % v6)) = v3 + 8;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 4) = 1;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)v2 = v5;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v3 + 28) = &off_271ED2C;
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 32) = &unk_28898CC;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 36) = *(_DWORD *)(v2 + 36);
  *(_DWORD *)(v2 + 36) = 0;
  v9 = *(_DWORD *)(v3 + 40);
  *(_DWORD *)(v3 + 40) = *(_DWORD *)(v2 + 40);
  *(_DWORD *)(v2 + 40) = v9;
  v10 = *(_DWORD *)(v3 + 44);
  *(_DWORD *)(v3 + 44) = *(_DWORD *)(v2 + 44);
  *(_DWORD *)(v2 + 44) = v10;
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 48) = *(_DWORD *)(v2 + 48);
  *(_DWORD *)(v2 + 48) = 0;
  v11 = *(_DWORD *)(v3 + 52);
  *(_DWORD *)(v3 + 52) = *(_DWORD *)(v2 + 52);
  *(_DWORD *)(v2 + 52) = v11;
  v12 = *(_DWORD *)(v3 + 56);
  *(_DWORD *)(v3 + 56) = *(_DWORD *)(v2 + 56);
  *(_DWORD *)(v2 + 56) = v12;
  v13 = *(_DWORD *)(v2 + 60);
  *(_DWORD *)(v3 + 60) = v13;
  v14 = *(_DWORD *)(v2 + 64);
  *(_DWORD *)(v3 + 64) = v14;
  v15 = *(_DWORD *)(v2 + 68);
  *(_DWORD *)(v3 + 68) = v15;
  *(_DWORD *)(v3 + 72) = *(_DWORD *)(v2 + 72);
  *(_QWORD *)(v3 + 76) = *(_QWORD *)(v2 + 76);
  v16 = *(_DWORD **)(v2 + 60);
  if ( (_DWORD *)(v2 + 84) == v16 )
    v13 = v3 + 84;
    *(_DWORD *)(v3 + 60) = v3 + 84;
    *(_DWORD *)(v3 + 84) = *v16;
  if ( v15 )
    *(_DWORD *)(v13 + 4 * (*(_DWORD *)(v15 + 88) % v14)) = v3 + 68;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 84) = 0;
  *(_DWORD *)(v2 + 60) = v2 + 84;
  *(_DWORD *)(v2 + 64) = 1;
  *(_DWORD *)(v2 + 68) = 0;
  *(_DWORD *)(v2 + 72) = 0;
  _aeabi_memcpy4(v3 + 88, v2 + 88, 404);
  return v3;
}


void __fastcall EntityDefinitionDescriptor::forceExecuteTrigger(EntityDefinitionDescriptor *this, Entity *a2, const DefinitionTrigger *a3, const VariantParameterList *a4)
{
  Entity *v4; // r5@1
  int **v5; // r9@1
  const void **v6; // r4@1
  const VariantParameterList *v7; // r6@1
  int v8; // r4@5
  int v9; // r1@5
  int v10; // r0@5
  __int64 v11; // kr00_8@9
  char v12; // r0@9
  ClassID *v13; // r0@10
  signed int v14; // r4@12
  int *v15; // r0@12
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  void *v18; // r0@20
  unsigned int v19; // r11@22
  unsigned int v20; // r6@22 OVERLAPPED
  int v21; // r5@22
  int v22; // r8@22
  int v23; // r9@23
  _DWORD *v24; // r10@23
  int v25; // r7@23
  _DWORD *v26; // r1@25
  size_t v27; // r2@25
  int v28; // r5@27
  int v29; // r6@29
  double v30; // r0@31
  unsigned int v31; // r0@32
  int v32; // r5@34
  int *v33; // r4@34
  char v34; // r0@35
  ClassID *v35; // r0@36
  __int64 v36; // kr08_8@38
  int v37; // r0@38
  void *v38; // r0@38
  char v39; // r0@39
  ClassID *v40; // r0@40
  __int64 v41; // kr10_8@42
  int v42; // r0@42
  void *v43; // r0@42
  int v44; // r0@43
  int v45; // r6@45
  unsigned int *v46; // r2@47
  signed int v47; // r1@49
  void *v48; // r5@55
  int v49; // r1@55
  void *v50; // r0@55
  unsigned int *v51; // r2@61
  signed int v52; // r1@63
  unsigned int *v53; // r2@74
  unsigned int *v54; // r2@79
  signed int v55; // r1@81
  unsigned int *v56; // r2@83
  signed int v57; // r1@85
  int **v58; // [sp+4h] [bp-74h]@23
  Entity *v59; // [sp+8h] [bp-70h]@22
  int v60; // [sp+10h] [bp-68h]@39
  int v61; // [sp+18h] [bp-60h]@35
  void *ptr; // [sp+1Ch] [bp-5Ch]@35
  unsigned int v63; // [sp+20h] [bp-58h]@32
  int v64; // [sp+24h] [bp-54h]@32
  int v65; // [sp+28h] [bp-50h]@32
  signed int v66; // [sp+2Ch] [bp-4Ch]@32
  int v67; // [sp+30h] [bp-48h]@32
  int v68; // [sp+34h] [bp-44h]@58
  void *s1; // [sp+3Ch] [bp-3Ch]@22
  int v70; // [sp+44h] [bp-34h]@9
  int v71; // [sp+4Ch] [bp-2Ch]@8

  v4 = a2;
  v5 = (int **)a3;
  v6 = (const void **)((char *)a3 + 4);
  v7 = a4;
  if ( !sub_21E7D6C((const void **)a3 + 1, "self") )
  {
    v10 = *((_DWORD *)v4 + 12);
    v9 = (int)v4;
    goto LABEL_7;
  }
  if ( sub_21E7D6C(v6, "baby") )
    if ( !sub_21E7D6C(v6, "target") && Entity::getTarget(v4) )
    {
      v8 = *((_DWORD *)v4 + 12);
      v9 = Entity::getTarget(v4);
      v10 = v8;
LABEL_7:
      j_j_j__ZN26EntityDefinitionDescriptor12executeEventER6EntityRKSsRK20VariantParameterList_0(v10, v9, v5, v7);
      return;
    }
  else
    sub_21E94B4((void **)&v71, "baby");
    if ( VariantParameterList::hasParameter((unsigned __int64 *)v7, (int **)&v71) == 1 )
      sub_21E94B4((void **)&v70, "baby");
      v11 = VariantParameterList::getParameterType((unsigned __int64 *)v7, (int **)&v70);
      v12 = `guard variable for'unsigned long long ClassID::getID<Mob>(void)::id[0];
      __dmb();
      if ( !(v12 & 1) )
      {
        v13 = (ClassID *)j___cxa_guard_acquire(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
        if ( v13 )
        {
          ClassID::getID<Mob>(void)::id = ClassID::getNextID(v13);
          j___cxa_guard_release(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
        }
      }
      v14 = 0;
      v15 = (int *)(v70 - 12);
      if ( ClassID::getID<Mob>(void)::id == v11 )
        v14 = 1;
      if ( v15 != &dword_28898C0 )
        v16 = (unsigned int *)(v70 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        else
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
    else
    v18 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v71 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
      else
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    if ( v14 == 1 )
      sub_21E94B4(&s1, "baby");
      v19 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
      v59 = v4;
      *(_QWORD *)(&v20 - 1) = *(_QWORD *)v7;
      v22 = *(_DWORD *)(v21 + 4 * (v19 % v20));
      if ( v22 )
        v58 = v5;
        v23 = *(_DWORD *)v22;
        v24 = s1;
        v25 = *(_DWORD *)(*(_DWORD *)v22 + 32);
        while ( 1 )
          if ( v25 == v19 )
          {
            v26 = *(_DWORD **)(v23 + 8);
            v27 = *(v24 - 3);
            if ( v27 == *(v26 - 3) && !memcmp(v24, v26, v27) )
              break;
          }
          v28 = *(_DWORD *)v23;
          if ( *(_DWORD *)v23 )
            v25 = *(_DWORD *)(v28 + 32);
            v22 = v23;
            v23 = *(_DWORD *)v23;
            if ( *(_DWORD *)(v28 + 32) % v20 == v19 % v20 )
              continue;
          v29 = 0;
          v5 = v58;
          goto LABEL_31;
        v5 = v58;
        if ( v22 )
          if ( *(_DWORD *)v22 )
            v29 = *(_DWORD *)(*(_DWORD *)v22 + 24);
          else
            v29 = 0;
        v29 = 0;
LABEL_31:
      HIDWORD(v30) = &dword_28898C0;
      if ( v24 - 3 != &dword_28898C0 )
        v53 = v24 - 1;
            HIDWORD(v30) = __ldrex(v53);
          while ( __strex(HIDWORD(v30) - 1, v53) );
          HIDWORD(v30) = (*v53)--;
        if ( SHIDWORD(v30) <= 0 )
          j_j_j_j__ZdlPv_9(v24 - 3);
      v64 = 0;
      v65 = 0;
      v66 = 1065353216;
      v67 = 0;
      LODWORD(v30) = &v66;
      v31 = sub_21E6254(v30);
      v63 = v31;
      if ( v31 == 1 )
        v68 = 0;
        v33 = &v68;
        if ( v31 >= 0x40000000 )
          sub_21E57F4();
        v32 = 4 * v31;
        v33 = (int *)operator new(4 * v31);
        _aeabi_memclr4(v33, v32);
      ptr = v33;
      sub_21E94B4((void **)&v61, "self");
      v34 = `guard variable for'unsigned long long ClassID::getID<Mob>(void)::id[0];
      if ( !(v34 & 1) )
        v35 = (ClassID *)j___cxa_guard_acquire(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
        if ( v35 )
          ClassID::getID<Mob>(void)::id = ClassID::getNextID(v35);
      v36 = ClassID::getID<Mob>(void)::id;
      v37 = std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)&ptr,
              (int **)&v61);
      *(_QWORD *)v37 = v36;
      *(_DWORD *)(v37 + 8) = v29;
      v38 = (void *)(v61 - 12);
      if ( (int *)(v61 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v61 - 4);
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
      sub_21E94B4((void **)&v60, "other");
      v39 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
      if ( !(v39 & 1) )
        v40 = (ClassID *)j___cxa_guard_acquire(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        if ( v40 )
          ClassID::getID<Entity>(void)::id = ClassID::getNextID(v40);
          j___cxa_guard_release(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      v41 = ClassID::getID<Entity>(void)::id;
      v42 = std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (int **)&v60);
      *(_QWORD *)v42 = v41;
      *(_DWORD *)(v42 + 8) = v59;
      v43 = (void *)(v60 - 12);
      if ( (int *)(v60 - 12) != &dword_28898C0 )
        v56 = (unsigned int *)(v60 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
      v44 = *(_DWORD *)(v29 + 48);
      if ( v44 )
        EntityDefinitionDescriptor::executeEvent(v44, v29, v5, (const VariantParameterList *)&ptr);
      v45 = v64;
      while ( v45 )
        v48 = (void *)v45;
        v49 = *(_DWORD *)(v45 + 8);
        v45 = *(_DWORD *)v45;
        v50 = (void *)(v49 - 12);
        if ( (int *)(v49 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v49 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v50);
        operator delete(v48);
      _aeabi_memclr4(ptr, 4 * v63);
      if ( ptr && &v68 != ptr )
        operator delete(ptr);
}


void __fastcall EntityDefinitionDescriptor::executeEvent(int a1, int a2, int **a3, const VariantParameterList *a4)
{
  EntityDefinitionDescriptor::executeEvent(a1, a2, a3, a4);
}


int __fastcall EntityDefinitionDescriptor::EntityDefinitionDescriptor(double a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  double v5; // r0@4
  unsigned int v6; // r0@4
  int v7; // r6@6
  void *v8; // r5@6

  v1 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = sub_21E6254(a1);
  *(_DWORD *)(v1 + 4) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 24) = 0;
    v4 = (void *)(v1 + 24);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * v2;
    v4 = operator new(4 * v2);
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)v1 = v4;
  *(_DWORD *)(v1 + 28) = &off_271ED2C;
  sub_21E94B4((void **)(v1 + 32), (const char *)&unk_257BC67);
  *(_DWORD *)(v1 + 68) = 0;
  *(_DWORD *)(v1 + 72) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 52) = 0;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 0;
  *(_DWORD *)(v1 + 36) = 0;
  *(_DWORD *)(v1 + 76) = 1065353216;
  LODWORD(v5) = v1 + 76;
  *(_DWORD *)(LODWORD(v5) + 4) = 0;
  v6 = sub_21E6254(v5);
  *(_DWORD *)(v1 + 64) = v6;
  if ( v6 == 1 )
    *(_DWORD *)(v1 + 84) = 0;
    v8 = (void *)(v1 + 84);
    if ( v6 >= 0x40000000 )
    v7 = 4 * v6;
    v8 = operator new(4 * v6);
    _aeabi_memclr4(v8, v7);
  *(_DWORD *)(v1 + 60) = v8;
  _aeabi_memclr4(v1 + 88, 404);
  return v1;
}


void __fastcall EntityDefinitionDescriptor::executeEvent(int a1, int a2, int **a3, const VariantParameterList *a4)
{
  int v4; // r5@1
  const VariantParameterList *v5; // r4@1
  int v6; // r0@1
  int v7; // r4@2
  int v8; // r8@2
  __int64 i; // r6@3
  __int64 j; // r6@5
  DefinitionModifier *v11; // r0@8
  __int64 v12; // [sp+4h] [bp-24h]@2
  int v13; // [sp+Ch] [bp-1Ch]@2

  v4 = a2;
  v5 = a4;
  v6 = std::_Hashtable<std::string,std::pair<std::string const,DefinitionEvent>,std::allocator<std::pair<std::string const,DefinitionEvent>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a1 + 60),
         a3);
  if ( v6 )
  {
    v12 = 0LL;
    v13 = 0;
    DefinitionEvent::evaluateGroups(v6 + 8, v4, (int)&v12, v5);
    v8 = HIDWORD(v12);
    v7 = v12;
    if ( (_DWORD)v12 != HIDWORD(v12) )
    {
      do
      {
        for ( i = *(_QWORD *)(v7 + 12); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
          Entity::removeDefinitionGroup(v4, (int **)i);
        for ( j = *(_QWORD *)v7; HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 4 )
          Entity::addDefinitionGroup(v4, (int **)j);
        v7 += 24;
      }
      while ( v7 != v8 );
      v7 = HIDWORD(v12);
      v11 = (DefinitionModifier *)v12;
      if ( (_DWORD)v12 != HIDWORD(v12) )
        do
          v11 = (DefinitionModifier *)((char *)DefinitionModifier::~DefinitionModifier(v11) + 24);
        while ( (DefinitionModifier *)v7 != v11 );
        v7 = v12;
    }
    if ( v7 )
      operator delete((void *)v7);
  }
}
