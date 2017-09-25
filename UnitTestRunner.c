

int __fastcall UnitTestRunner::UnitTestRunner(__int64 a1)
{
  int v1; // r11@1
  void *v2; // r5@1 OVERLAPPED
  void *v3; // r6@1 OVERLAPPED
  void *v4; // r7@2
  void *v5; // r0@3
  void *v6; // r0@5
  int v7; // r0@7
  int v8; // r5@12 OVERLAPPED
  int v9; // r6@12 OVERLAPPED
  void *v10; // r0@13
  void *v11; // r0@15
  int v12; // r0@17
  MinecraftUnitTest::TestClassData *v13; // r5@23
  int *v14; // r8@25
  int v15; // r6@26
  unsigned int *v16; // r2@29
  signed int v17; // r1@31
  unsigned int *v18; // r2@37
  signed int v19; // r1@39
  const char *v20; // r0@45
  unsigned int v21; // r8@45
  unsigned int v22; // r9@45
  int v23; // r7@45
  int v24; // r4@45
  int v25; // r5@46
  _DWORD *v26; // r10@46
  int v27; // r6@46
  _DWORD *v28; // r1@48
  size_t v29; // r2@48
  int v30; // r11@50
  const char *v31; // r0@56
  char *v32; // r6@56
  unsigned int v33; // r0@56
  void *v34; // r0@56
  const char *v35; // r0@61
  unsigned __int64 *v37; // [sp+4h] [bp-8Ch]@24
  int v38; // [sp+8h] [bp-88h]@1
  MinecraftUnitTest::TestClassData *v39; // [sp+10h] [bp-80h]@23
  MinecraftUnitTest::TestClassData *v40; // [sp+14h] [bp-7Ch]@46
  char v41; // [sp+18h] [bp-78h]@61
  void *ptr; // [sp+20h] [bp-70h]@61
  int v43; // [sp+48h] [bp-48h]@37
  int v44; // [sp+50h] [bp-40h]@56
  void *s1; // [sp+58h] [bp-38h]@45
  int v46; // [sp+5Ch] [bp-34h]@1
  int v47; // [sp+60h] [bp-30h]@1
  int v48; // [sp+64h] [bp-2Ch]@1

  v1 = a1;
  v38 = a1;
  TestRunner::TestRunner(a1);
  *(_DWORD *)v1 = &off_26DF380;
  *(_DWORD *)(v1 + 84) = 0;
  *(_DWORD *)(v1 + 88) = 0;
  *(_DWORD *)(v1 + 92) = 0;
  MinecraftUnitTest::TestClassBase::generateAllTestClassData((MinecraftUnitTest::TestClassBase *)&v46);
  *(_QWORD *)&v2 = *(_QWORD *)(v1 + 84);
  *(_DWORD *)(v1 + 84) = v46;
  v46 = 0;
  *(_DWORD *)(v1 + 88) = v47;
  v47 = 0;
  *(_DWORD *)(v1 + 92) = v48;
  v48 = 0;
  if ( v2 != v3 )
  {
    v4 = v2;
    do
    {
      v5 = (void *)*((_DWORD *)v4 + 6);
      if ( v5 )
        operator delete(v5);
      v6 = (void *)*((_DWORD *)v4 + 3);
      if ( v6 )
        operator delete(v6);
      v7 = *((_DWORD *)v4 + 2);
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      *((_DWORD *)v4 + 2) = 0;
      v4 = (char *)v4 + 36;
    }
    while ( v3 != v4 );
  }
  if ( v2 )
    operator delete(v2);
  *(_QWORD *)&v8 = *(_QWORD *)&v46;
  if ( v46 != v47 )
      v10 = *(void **)(v8 + 24);
      if ( v10 )
        operator delete(v10);
      v11 = *(void **)(v8 + 12);
      if ( v11 )
        operator delete(v11);
      v12 = *(_DWORD *)(v8 + 8);
      if ( v12 )
        (*(void (**)(void))(*(_DWORD *)v12 + 4))();
      *(_DWORD *)(v8 + 8) = 0;
      v8 += 36;
    while ( v9 != v8 );
    v8 = v46;
  if ( v8 )
    operator delete((void *)v8);
  v13 = (MinecraftUnitTest::TestClassData *)*(_QWORD *)(v1 + 84);
  v39 = (MinecraftUnitTest::TestClassData *)(*(_QWORD *)(v1 + 84) >> 32);
  if ( v13 != v39 )
    v37 = (unsigned __int64 *)(v1 + 4);
    while ( 1 )
      v20 = (const char *)MinecraftUnitTest::TestClassData::getName(v13);
      sub_119C884(&s1, v20);
      v21 = sub_119C9A4((int *)s1, *((_DWORD *)s1 - 3), -955291385);
      v22 = *(_QWORD *)(v1 + 4) >> 32;
      v23 = v21 % v22;
      v24 = *(_DWORD *)(*(_QWORD *)(v1 + 4) + 4 * v23);
      if ( v24 )
      {
        v40 = v13;
        v25 = *(_DWORD *)v24;
        v26 = s1;
        v27 = *(_DWORD *)(*(_DWORD *)v24 + 44);
        while ( 1 )
        {
          if ( v27 == v21 )
          {
            v28 = *(_DWORD **)(v25 + 4);
            v29 = *(v26 - 3);
            if ( v29 == *(v28 - 3) && !memcmp(v26, v28, v29) )
              break;
          }
          v30 = *(_DWORD *)v25;
          if ( *(_DWORD *)v25 )
            v27 = *(_DWORD *)(v30 + 44);
            v24 = v25;
            v25 = *(_DWORD *)v25;
            if ( *(_DWORD *)(v30 + 44) % v22 == v23 )
              continue;
          v13 = v40;
          v15 = 0;
          v14 = &dword_28898C0;
          v1 = v38;
          goto LABEL_54;
        }
        v13 = v40;
        v14 = &dword_28898C0;
        v15 = v24 ? *(_DWORD *)v24 : 0;
        v1 = v38;
      }
      else
        v15 = 0;
LABEL_54:
      if ( v26 - 3 != v14 )
        v16 = v26 - 1;
        if ( &pthread_create )
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        else
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v26 - 3);
      if ( !v15 )
        break;
      sub_119C884((void **)&v44, "The Unit test \"");
      v31 = (const char *)MinecraftUnitTest::TestClassData::getName(v13);
      v32 = (char *)v31;
      v33 = strlen(v31);
      sub_119C894((const void **)&v44, v32, v33);
      sub_119C894((const void **)&v44, "\" does not have a unique name.", 0x1Eu);
      v34 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != v14 )
        v18 = (unsigned int *)(v44 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          goto LABEL_42;
        goto LABEL_41;
LABEL_64:
      v13 = (MinecraftUnitTest::TestClassData *)((char *)v13 + 36);
      if ( v13 == v39 )
        return v1;
    v35 = (const char *)MinecraftUnitTest::TestClassData::getName(v13);
    sub_119C884((void **)&v43, v35);
    TestRunner::Test::Test((int)&ptr, v13, 0, 0);
    std::_Hashtable<std::string,std::pair<std::string const,TestRunner::Test>,std::allocator<std::pair<std::string const,TestRunner::Test>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string,TestRunner::Test>(
      &v41,
      v37,
      (int **)&v43,
      (int)&ptr);
    if ( ptr )
      operator delete(ptr);
    v34 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) == v14 )
      goto LABEL_64;
    v18 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
LABEL_42:
      if ( v19 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v34);
LABEL_41:
    v19 = (*v18)--;
    goto LABEL_42;
  return v1;
}


void __fastcall UnitTestRunner::~UnitTestRunner(UnitTestRunner *this)
{
  UnitTestRunner *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26DF380;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 84);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 24);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 12);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 36;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 21);
  }
  if ( v2 )
    operator delete((void *)v2);
  TestRunner::~TestRunner(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall UnitTestRunner::~UnitTestRunner(UnitTestRunner *this)
{
  UnitTestRunner::~UnitTestRunner(this);
}


TestRunner *__fastcall UnitTestRunner::~UnitTestRunner(UnitTestRunner *this)
{
  UnitTestRunner *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26DF380;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 84);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 24);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 12);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 36;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 21);
  }
  if ( v2 )
    operator delete((void *)v2);
  return j_j_j__ZN10TestRunnerD2Ev(v1);
}
