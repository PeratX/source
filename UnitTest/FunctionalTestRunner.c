

void __fastcall FunctionalTestRunner::~FunctionalTestRunner(FunctionalTestRunner *this)
{
  FunctionalTestRunner *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26DF1D4;
  *(_QWORD *)&v2 = *((_QWORD *)this + 11);
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
    v2 = *((_DWORD *)v1 + 22);
  }
  if ( v2 )
    operator delete((void *)v2);
  TestRunner::~TestRunner(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall FunctionalTestRunner::FunctionalTestRunner(__int64 a1, int a2)
{
  int v2; // r11@1
  int v3; // r5@1
  void *v4; // r5@1 OVERLAPPED
  void *v5; // r6@1 OVERLAPPED
  void *v6; // r7@2
  void *v7; // r0@3
  void *v8; // r0@5
  int v9; // r0@7
  int v10; // r5@12 OVERLAPPED
  int v11; // r6@12 OVERLAPPED
  void *v12; // r0@13
  void *v13; // r0@15
  int v14; // r0@17
  MinecraftUnitTest::TestClassData *v15; // r5@23
  int *v16; // r8@25
  int v17; // r6@26
  unsigned int *v18; // r2@29
  signed int v19; // r1@31
  unsigned int *v20; // r2@37
  signed int v21; // r1@39
  const char *v22; // r0@45
  unsigned int v23; // r8@45
  unsigned int v24; // r9@45
  int v25; // r7@45
  int v26; // r4@45
  int v27; // r5@46
  _DWORD *v28; // r10@46
  int v29; // r6@46
  _DWORD *v30; // r1@48
  size_t v31; // r2@48
  int v32; // r11@50
  const char *v33; // r0@56
  char *v34; // r6@56
  unsigned int v35; // r0@56
  void *v36; // r0@56
  const char *v37; // r0@61
  unsigned __int64 *v39; // [sp+4h] [bp-8Ch]@24
  int v40; // [sp+8h] [bp-88h]@1
  MinecraftUnitTest::TestClassData *v41; // [sp+10h] [bp-80h]@23
  MinecraftUnitTest::TestClassData *v42; // [sp+14h] [bp-7Ch]@46
  char v43; // [sp+18h] [bp-78h]@61
  void *ptr; // [sp+20h] [bp-70h]@61
  int v45; // [sp+48h] [bp-48h]@37
  int v46; // [sp+50h] [bp-40h]@56
  void *s1; // [sp+58h] [bp-38h]@45
  int v48; // [sp+5Ch] [bp-34h]@1
  int v49; // [sp+60h] [bp-30h]@1
  int v50; // [sp+64h] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  v40 = a1;
  TestRunner::TestRunner(a1);
  *(_DWORD *)v2 = &off_26DF1D4;
  *(_DWORD *)(v2 + 84) = v3;
  *(_DWORD *)(v2 + 88) = 0;
  *(_DWORD *)(v2 + 92) = 0;
  *(_DWORD *)(v2 + 96) = 0;
  MinecraftUnitTest::TestClassBase::generateAllFnTestClassData((MinecraftUnitTest::TestClassBase *)&v48);
  *(_QWORD *)&v4 = *(_QWORD *)(v2 + 88);
  *(_DWORD *)(v2 + 88) = v48;
  v48 = 0;
  *(_DWORD *)(v2 + 92) = v49;
  v49 = 0;
  *(_DWORD *)(v2 + 96) = v50;
  v50 = 0;
  if ( v4 != v5 )
  {
    v6 = v4;
    do
    {
      v7 = (void *)*((_DWORD *)v6 + 6);
      if ( v7 )
        operator delete(v7);
      v8 = (void *)*((_DWORD *)v6 + 3);
      if ( v8 )
        operator delete(v8);
      v9 = *((_DWORD *)v6 + 2);
      if ( v9 )
        (*(void (**)(void))(*(_DWORD *)v9 + 4))();
      *((_DWORD *)v6 + 2) = 0;
      v6 = (char *)v6 + 36;
    }
    while ( v5 != v6 );
  }
  if ( v4 )
    operator delete(v4);
  *(_QWORD *)&v10 = *(_QWORD *)&v48;
  if ( v48 != v49 )
      v12 = *(void **)(v10 + 24);
      if ( v12 )
        operator delete(v12);
      v13 = *(void **)(v10 + 12);
      if ( v13 )
        operator delete(v13);
      v14 = *(_DWORD *)(v10 + 8);
      if ( v14 )
        (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      *(_DWORD *)(v10 + 8) = 0;
      v10 += 36;
    while ( v11 != v10 );
    v10 = v48;
  if ( v10 )
    operator delete((void *)v10);
  v15 = (MinecraftUnitTest::TestClassData *)*(_QWORD *)(v2 + 88);
  v41 = (MinecraftUnitTest::TestClassData *)(*(_QWORD *)(v2 + 88) >> 32);
  if ( v15 != v41 )
    v39 = (unsigned __int64 *)(v2 + 4);
    while ( 1 )
      v22 = (const char *)MinecraftUnitTest::TestClassData::getName(v15);
      sub_119C884(&s1, v22);
      v23 = sub_119C9A4((int *)s1, *((_DWORD *)s1 - 3), -955291385);
      v24 = *(_QWORD *)(v2 + 4) >> 32;
      v25 = v23 % v24;
      v26 = *(_DWORD *)(*(_QWORD *)(v2 + 4) + 4 * v25);
      if ( v26 )
      {
        v42 = v15;
        v27 = *(_DWORD *)v26;
        v28 = s1;
        v29 = *(_DWORD *)(*(_DWORD *)v26 + 44);
        while ( 1 )
        {
          if ( v29 == v23 )
          {
            v30 = *(_DWORD **)(v27 + 4);
            v31 = *(v28 - 3);
            if ( v31 == *(v30 - 3) && !memcmp(v28, v30, v31) )
              break;
          }
          v32 = *(_DWORD *)v27;
          if ( *(_DWORD *)v27 )
            v29 = *(_DWORD *)(v32 + 44);
            v26 = v27;
            v27 = *(_DWORD *)v27;
            if ( *(_DWORD *)(v32 + 44) % v24 == v25 )
              continue;
          v15 = v42;
          v17 = 0;
          v16 = &dword_28898C0;
          v2 = v40;
          goto LABEL_54;
        }
        v15 = v42;
        v16 = &dword_28898C0;
        v17 = v26 ? *(_DWORD *)v26 : 0;
        v2 = v40;
      }
      else
        v17 = 0;
LABEL_54:
      if ( v28 - 3 != v16 )
        v18 = v28 - 1;
        if ( &pthread_create )
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        else
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v28 - 3);
      if ( !v17 )
        break;
      sub_119C884((void **)&v46, "The Unit test \"");
      v33 = (const char *)MinecraftUnitTest::TestClassData::getName(v15);
      v34 = (char *)v33;
      v35 = strlen(v33);
      sub_119C894((const void **)&v46, v34, v35);
      sub_119C894((const void **)&v46, "\" does not have a unique name.", 0x1Eu);
      v36 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != v16 )
        v20 = (unsigned int *)(v46 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          goto LABEL_42;
        goto LABEL_41;
LABEL_64:
      v15 = (MinecraftUnitTest::TestClassData *)((char *)v15 + 36);
      if ( v15 == v41 )
        return v2;
    v37 = (const char *)MinecraftUnitTest::TestClassData::getName(v15);
    sub_119C884((void **)&v45, v37);
    TestRunner::Test::Test((int)&ptr, v15, 0, 0);
    std::_Hashtable<std::string,std::pair<std::string const,TestRunner::Test>,std::allocator<std::pair<std::string const,TestRunner::Test>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string,TestRunner::Test>(
      &v43,
      v39,
      (int **)&v45,
      (int)&ptr);
    if ( ptr )
      operator delete(ptr);
    v36 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) == v16 )
      goto LABEL_64;
    v20 = (unsigned int *)(v45 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
LABEL_42:
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v36);
LABEL_41:
    v21 = (*v20)--;
    goto LABEL_42;
  return v2;
}


void __fastcall FunctionalTestRunner::~FunctionalTestRunner(FunctionalTestRunner *this)
{
  FunctionalTestRunner::~FunctionalTestRunner(this);
}


TestRunner *__fastcall FunctionalTestRunner::~FunctionalTestRunner(FunctionalTestRunner *this)
{
  FunctionalTestRunner *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26DF1D4;
  *(_QWORD *)&v2 = *((_QWORD *)this + 11);
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
    v2 = *((_DWORD *)v1 + 22);
  }
  if ( v2 )
    operator delete((void *)v2);
  return j_j_j__ZN10TestRunnerD2Ev(v1);
}
