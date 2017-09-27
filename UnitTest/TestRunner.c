

int __fastcall TestRunner::_countTestResults(int result, int *a2, int *a3, int *a4)
{
  int *v4; // r6@1
  int *v5; // r4@1
  int *v6; // r5@1
  int i; // r9@1
  unsigned int v8; // r7@2
  int v9; // r1@9
  unsigned int v10; // r2@9
  char v11; // r7@10
  int v12; // r3@10

  v4 = a2;
  v5 = a4;
  v6 = a3;
  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  for ( i = *(_DWORD *)(result + 12); i; i = *(_DWORD *)i )
  {
    v8 = *(_DWORD *)(i + 36);
    result = MinecraftUnitTest::TestClassData::getTestCount(*(MinecraftUnitTest::TestClassData **)(i + 28));
    if ( v8 <= 3 )
    {
      switch ( v8 )
      {
        case 0u:
        case 1u:
          result += *v5;
          *v5 = result;
          break;
        case 2u:
          for ( ; result; ++*v5 )
          {
            --result;
            ++*v4;
            ++*v6;
          }
        case 3u:
          if ( result )
            v9 = *(_DWORD *)(i + 8);
            v10 = 0;
            do
            {
              v11 = v10 & 0x1F;
              v12 = *(_DWORD *)(v9 + 4 * (v10++ >> 5));
              if ( v12 & (1 << v11) )
                ++*v4;
              ++*v6;
              ++*v5;
            }
            while ( result != v10 );
        default:
          continue;
      }
    }
  }
  return result;
}


void __fastcall TestRunner::_addMessage(int a1, unsigned int *a2)
{
  TestRunner::_addMessage(a1, a2);
}


void __fastcall TestRunner::getTestResults(TestRunner *this, const char *a2, const char *a3)
{
  const char *v3; // r5@1
  const char *v4; // r4@1
  int *v5; // r10@1
  unsigned int v6; // r0@1
  int *v7; // r6@1
  char *v8; // r0@1
  int v9; // r8@1
  void **v10; // r5@2
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  const char *v13; // r0@11
  char *v14; // r0@12
  char *v15; // r0@13
  unsigned int v16; // r7@14
  int *v17; // r11@14
  int *v18; // r10@14
  unsigned int v19; // r5@15
  const char *v20; // r6@16
  char *v21; // r0@16
  char *v22; // r4@16
  int v23; // r0@17
  char *v24; // r4@20
  char *v25; // r0@20
  unsigned int v26; // r11@21
  int *v27; // r7@21
  unsigned int v28; // r10@22
  const char *v29; // r5@23
  char *v30; // r0@24
  char *v31; // r4@24
  int v32; // r0@25
  char *v33; // r0@26
  char *v34; // r4@26
  int v35; // r0@27
  char *v36; // r4@33
  char *v37; // r0@33
  void *v38; // r0@34
  void **v39; // r0@36
  void *v40; // r0@36
  void *v41; // r0@37
  void *v42; // r0@38
  unsigned int *v43; // r2@40
  signed int v44; // r1@42
  unsigned int *v45; // r2@44
  signed int v46; // r1@46
  unsigned int *v47; // r2@48
  signed int v48; // r1@50
  int v49; // [sp+10h] [bp-F8h]@2
  void **v50; // [sp+14h] [bp-F4h]@1
  int v51; // [sp+18h] [bp-F0h]@37
  void **v52; // [sp+1Ch] [bp-ECh]@1
  void **v53; // [sp+20h] [bp-E8h]@36
  int v54; // [sp+44h] [bp-C4h]@36
  int v55; // [sp+D4h] [bp-34h]@1
  int v56; // [sp+DCh] [bp-2Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = (int *)this;
  sub_119C884((void **)&v56, ".... ");
  v6 = strlen(v4);
  sub_119C894((const void **)&v56, (char *)v4, v6);
  sub_119C894((const void **)&v56, " Test Results ", 0xEu);
  sub_119E50C(&v55, 80 - *(_DWORD *)(v56 - 12), 46);
  sub_119C8A4((const void **)&v55, (const void **)&v55);
  v7 = (int *)&v50;
  sub_119CB58((int)&v50, 24);
  v8 = sub_119C904((char *)&v52, v56, *(_DWORD *)(v56 - 12));
  sub_119C904(v8, (int)"\n", 1);
  v9 = *((_DWORD *)v3 + 3);
  if ( v9 )
  {
    v10 = (void **)&v49;
    do
    {
      v13 = (const char *)MinecraftUnitTest::TestClassData::getName(*(MinecraftUnitTest::TestClassData **)(v9 + 28));
      sub_119C884(v10, v13);
      switch ( *(_DWORD *)(v9 + 36) )
      {
        case 0:
          v14 = sub_119C904((char *)&v52, v49, *(_DWORD *)(v49 - 12));
          sub_119C904(v14, (int)" not run.\n", 10);
          break;
        case 1:
          v15 = sub_119C904((char *)&v52, v49, *(_DWORD *)(v49 - 12));
          sub_119C904(v15, (int)" in progress.\n", 14);
        case 2:
          v16 = MinecraftUnitTest::TestClassData::getTestCount(*(MinecraftUnitTest::TestClassData **)(v9 + 28));
          v17 = v5;
          v18 = v7;
          if ( v16 )
          {
            v19 = 0;
            do
            {
              v20 = *(const char **)MinecraftUnitTest::TestClassData::getTestData(
                                      *(MinecraftUnitTest::TestClassData **)(v9 + 28),
                                      v19);
              v21 = sub_119C904((char *)&v52, dword_27D5A90, *(_DWORD *)(dword_27D5A90 - 12));
              v22 = v21;
              if ( v20 )
              {
                v23 = strlen(v20);
                sub_119C904(v22, (int)v20, v23);
              }
              else
                sub_119C974(
                  (int)&v21[*(_DWORD *)(*(_DWORD *)v21 - 12)],
                  *(_DWORD *)&v21[*(_DWORD *)(*(_DWORD *)v21 - 12) + 20] | 1);
              sub_119C904(v22, (int)" passed!\n", 9);
              ++v19;
            }
            while ( v19 < v16 );
          }
          v7 = v18;
          v24 = sub_119C904((char *)&v52, dword_27D5A90, *(_DWORD *)(dword_27D5A90 - 12));
          v10 = (void **)&v49;
          v5 = v17;
          sub_119C904(v24, (int)"All tests in ", 13);
          v25 = sub_119C904(v24, v49, *(_DWORD *)(v49 - 12));
          sub_119C904(v25, (int)" have passed!\n", 14);
        case 3:
          v26 = MinecraftUnitTest::TestClassData::getTestCount(*(MinecraftUnitTest::TestClassData **)(v9 + 28));
          v27 = v5;
          if ( v26 )
            v28 = 0;
              v29 = *(const char **)MinecraftUnitTest::TestClassData::getTestData(
                                      v28);
              if ( *(_DWORD *)(*(_DWORD *)(v9 + 8) + 4 * (v28 >> 5)) & (1 << (v28 & 0x1F)) )
                v30 = sub_119C904((char *)&v52, dword_27D5A90, *(_DWORD *)(dword_27D5A90 - 12));
                v31 = v30;
                if ( v29 )
                {
                  v32 = strlen(v29);
                  sub_119C904(v31, (int)v29, v32);
                }
                else
                  sub_119C974(
                    (int)&v30[*(_DWORD *)(*(_DWORD *)v30 - 12)],
                    *(_DWORD *)&v30[*(_DWORD *)(*(_DWORD *)v30 - 12) + 20] | 1);
                sub_119C904(v31, (int)" passed!\n", 9);
                v33 = sub_119C904((char *)&v52, dword_27D5A98, *(_DWORD *)(dword_27D5A98 - 12));
                v34 = v33;
                  v35 = strlen(v29);
                  sub_119C904(v34, (int)v29, v35);
                    (int)&v33[*(_DWORD *)(*(_DWORD *)v33 - 12)],
                    *(_DWORD *)&v33[*(_DWORD *)(*(_DWORD *)v33 - 12) + 20] | 1);
                sub_119C904(v34, (int)" failed.\n", 9);
              ++v28;
            while ( v28 < v26 );
          v36 = sub_119C904((char *)&v52, dword_27D5A98, *(_DWORD *)(dword_27D5A98 - 12));
          v5 = v27;
          sub_119C904(v36, (int)"One or more test in ", 20);
          v37 = sub_119C904(v36, v49, *(_DWORD *)(v49 - 12));
          sub_119C904(v37, (int)" have failed.\n", 14);
        default:
      }
      v38 = (void *)(v49 - 12);
      if ( (int *)(v49 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v49 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v38);
      v9 = *(_DWORD *)v9;
    }
    while ( v9 );
  }
  sub_119C904((char *)&v52, (int)"................................................\n", 49);
  sub_119D48C(v5, (int)(v7 + 3));
  v39 = off_26D3F84;
  v50 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)v7) = off_26D3F80[0];
  v52 = v39;
  v53 = &off_27734E8;
  v40 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v54 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
    else
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  v53 = &off_26D40A8;
  sub_119C954((unsigned int **)v7 + 10);
  v50 = (void **)off_26D3F68;
  *(int *)((char *)v7 + *((_DWORD *)off_26D3F68 - 3)) = (int)off_26D3F6C;
  v51 = 0;
  sub_119C964(v7 + 13);
  v41 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v55 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
  v42 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v56 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
}


void __fastcall TestRunner::_runTests(TestRunner *this, TestRunner::Test *a2, MinecraftUnitTest::TestClassData *a3, int a4)
{
  MinecraftUnitTest::TestClassData *v4; // r5@1
  TestRunner *v5; // r8@1
  int v6; // r9@1
  TestRunner::Test *v7; // r4@1
  unsigned int v8; // r0@1
  unsigned int v9; // r7@1
  MinecraftUnitTest::TestClassData::TestFunctionData *v10; // r0@4
  int v11; // r0@7
  signed int v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  void *v15; // r0@12
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  void *v18; // r0@22
  void *v19; // r0@23
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  unsigned int *v22; // r2@30
  signed int v23; // r1@32
  unsigned int *v24; // r2@34
  signed int v25; // r1@36
  unsigned int *v26; // r2@38
  signed int v27; // r1@40
  int v28; // [sp+0h] [bp-40h]@2
  int v29; // [sp+8h] [bp-38h]@2
  int v30; // [sp+10h] [bp-30h]@2
  const char *v31; // [sp+14h] [bp-2Ch]@2
  const char *v32; // [sp+18h] [bp-28h]@2
  unsigned int v33; // [sp+1Ch] [bp-24h]@2

  v4 = a3;
  v5 = this;
  v6 = a4;
  v7 = a2;
  v8 = MinecraftUnitTest::TestClassData::getTestCount(a3);
  v9 = *((_DWORD *)v7 + 8);
  if ( v9 >= v8 )
  {
    v11 = *((_DWORD *)v7 + 6);
    if ( v11 == 1 )
    {
      v12 = 2;
    }
    else
      if ( v11 )
        return;
      v12 = 1;
    *((_DWORD *)v7 + 6) = v12;
    return;
  }
  MinecraftUnitTest::TestClassData::getTestLineInfo(
    (MinecraftUnitTest::TestClassData *)&v31,
    (unsigned int)v4,
    *((_DWORD *)v7 + 8));
  sub_119C884((void **)&v30, v31);
  sub_119C884((void **)&v29, v32);
  Util::toString<unsigned int,(void *)0,(void *)0>((void **)&v28, v33);
  if ( (*(int (**)(void))(**((_DWORD **)v5 + 18) + 8))() )
    MinecraftUnitTest::TestClassData::runTest(v4, v9);
    if ( v6 )
      v10 = (MinecraftUnitTest::TestClassData::TestFunctionData *)MinecraftUnitTest::TestClassData::getTestData(v4, v9);
      if ( MinecraftUnitTest::TestClassData::TestFunctionData::getIsFinished(v10) == 1
        && (*(int (**)(void))(**((_DWORD **)v5 + 18) + 12))() == 1 )
      {
        TestRunner::_onTestFinished(v5, v7, v9, v4);
LABEL_22:
        v18 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
        {
          v24 = (unsigned int *)(v28 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
          }
          else
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v18);
        }
        v19 = (void *)(v29 - 12);
        if ( (int *)(v29 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v29 - 4);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v19);
        v15 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) == &dword_28898C0 )
          return;
        v16 = (unsigned int *)(v30 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          goto LABEL_47;
LABEL_46:
        v17 = (*v16)--;
LABEL_47:
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
      }
    else if ( (*(int (**)(void))(**((_DWORD **)v5 + 18) + 12))() == 1 )
      TestRunner::_onTestFinished(v5, v7, v9, v4);
      goto LABEL_22;
    (*(void (**)(void))(**((_DWORD **)v5 + 18) + 12))();
    goto LABEL_22;
  v13 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v29 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v30 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      goto LABEL_47;
    goto LABEL_46;
}


signed int __fastcall TestRunner::_advanceTestState(TestRunner *this, TestRunner::Test *a2)
{
  signed int result; // r0@1

  result = *((_DWORD *)a2 + 6);
  if ( result == 1 )
  {
    result = 2;
  }
  else
    if ( result )
      return result;
    result = 1;
  *((_DWORD *)a2 + 6) = result;
  return result;
}


int __fastcall TestRunner::Test::setResult(int result, _DWORD *a2)
{
  *(_DWORD *)(result + 28) = *a2;
  return result;
}


int __fastcall TestRunner::Test::flagAsFailed(int result)
{
  *(_DWORD *)(result + 28) = 3;
  return result;
}


signed int __fastcall TestRunner::_startTesting(TestRunner *this, TestRunner::Test *a2)
{
  signed int result; // r0@1

  result = 1;
  *((_DWORD *)a2 + 7) = 1;
  return result;
}


void __fastcall TestRunner::_addMessage(int a1, unsigned int *a2)
{
  j_j_j__ZNK11TestManager18handleTestMessagesERKSs(*(TestClientInterface ***)(a1 + 80), a2);
}


void __fastcall TestRunner::~TestRunner(TestRunner *this)
{
  TestRunner::~TestRunner(this);
}


int __fastcall TestRunner::Test::flagTestAsFailed(TestRunner::Test *this, unsigned int a2)
{
  int result; // r0@1

  result = *(_DWORD *)this;
  *(_DWORD *)(result + 4 * (a2 >> 5)) &= ~(1 << (a2 & 0x1F));
  return result;
}


void __fastcall TestRunner::_reportTestClassResult(TestRunner *this, const char *a2, int a3)
{
  TestRunner::_reportTestClassResult(this, a2, a3);
}


void __fastcall TestRunner::executeAllTests(int a1, unsigned __int64 *a2)
{
  int v2; // r10@1
  unsigned __int64 *v3; // r6@1
  int v4; // r9@1
  int *v5; // r8@2
  int *v6; // r0@3
  int v7; // r0@4
  int v8; // r0@7
  char *v9; // r1@9
  unsigned int *v10; // r5@9
  char v11; // r6@10
  void **v12; // r7@10
  const char **v13; // r11@12
  unsigned int *v14; // r1@14
  signed int v15; // r0@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  int v20; // r9@37
  char *v21; // r8@37
  size_t v22; // r2@37
  signed int v23; // r10@38
  void *v24; // r0@43
  char *v25; // r0@44
  signed int v26; // r0@45
  int v27; // r3@50
  int *v28; // r9@50
  int *v29; // r1@50 OVERLAPPED
  int v30; // r2@50 OVERLAPPED
  int *v31; // r0@51
  int v32; // r3@51
  int *v33; // r1@51 OVERLAPPED
  int v34; // r2@51 OVERLAPPED
  int v35; // r6@54
  signed int v36; // r5@55
  signed int v37; // r5@58
  int *v38; // r0@60
  int v39; // r0@61
  int v40; // r6@64
  void **v41; // r5@64
  signed int v42; // r7@65
  signed int v43; // r6@68
  int v44; // r0@72
  int *v45; // r5@77
  int *i; // r7@77
  void *v47; // r0@79
  int v48; // r0@80
  int v49; // r2@80
  int v50; // r0@81
  int v51; // r2@81
  TestClientInterface **v52; // r4@82
  void *v53; // r0@82
  void **v54; // r0@83
  void *v55; // r0@83
  void *v56; // r0@84
  unsigned int *v57; // r2@86
  signed int v58; // r1@88
  unsigned int *v59; // r2@90
  signed int v60; // r1@92
  unsigned int *v61; // r2@94
  signed int v62; // r1@96
  unsigned int *v63; // r2@98
  signed int v64; // r1@100
  int v65; // [sp+0h] [bp-128h]@2
  unsigned __int64 *v66; // [sp+4h] [bp-124h]@1
  int v67; // [sp+8h] [bp-120h]@1
  int v68; // [sp+Ch] [bp-11Ch]@9
  int v69; // [sp+10h] [bp-118h]@10
  unsigned int *v70; // [sp+14h] [bp-114h]@9
  char *v71; // [sp+18h] [bp-110h]@9
  const char **v72; // [sp+20h] [bp-108h]@12
  int v73; // [sp+24h] [bp-104h]@82
  int v74; // [sp+28h] [bp-100h]@79
  void **v75; // [sp+2Ch] [bp-FCh]@77
  int v76; // [sp+30h] [bp-F8h]@84
  void **v77; // [sp+34h] [bp-F4h]@78
  void **v78; // [sp+38h] [bp-F0h]@79
  int v79; // [sp+54h] [bp-D4h]@84
  int v80; // [sp+5Ch] [bp-CCh]@83
  int v81; // [sp+60h] [bp-C8h]@84
  int v82; // [sp+ECh] [bp-3Ch]@77
  unsigned int v83; // [sp+F4h] [bp-34h]@18
  char *v84; // [sp+F8h] [bp-30h]@37
  _DWORD *v85; // [sp+FCh] [bp-2Ch]@2

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 12);
  v66 = a2;
  v67 = a1;
  if ( v4 )
  {
    v65 = a1 + 32;
    v5 = (int *)&v85;
    do
    {
      v9 = MinecraftUnitTest::TestClassData::getTags(*(MinecraftUnitTest::TestClassData **)(v4 + 28));
      v71 = v9;
      v10 = (unsigned int *)*v3;
      v68 = v4 + 8;
      v70 = (unsigned int *)(*v3 >> 32);
      if ( v10 == v70 )
      {
        *(_DWORD *)(v4 + 32) = 0;
        *(_DWORD *)(v4 + 36) = 0;
        v32 = *(_QWORD *)(v4 + 8) >> 32;
        v31 = (int *)*(_QWORD *)(v4 + 8);
        *(_QWORD *)&v33 = *(_QWORD *)(v4 + 16);
        while ( v31 != v33 )
        {
          v35 = *v31;
          do
          {
            v36 = 1 << v32++;
            v35 |= v36;
          }
          while ( v32 != 32 );
          *v31 = v35;
LABEL_52:
          ++v31;
          v32 = 0;
        }
        while ( v34 != v32 )
          v37 = 1 << v32++;
          *v33 |= v37;
          if ( v32 == 32 )
            goto LABEL_52;
        *(_DWORD *)(v4 + 40) = 0;
        v38 = *(int **)(v2 + 56);
        if ( v38 == (int *)(*(_DWORD *)(v2 + 64) - 4) )
          v69 = v4;
          if ( (unsigned int)((*(_QWORD *)(v2 + 32) >> 32)
                            - ((signed int)(*(_DWORD *)(v2 + 68) - *(_QWORD *)(v2 + 32)) >> 2)) <= 1 )
            std::deque<TestRunner::Test *,std::allocator<TestRunner::Test *>>::_M_reallocate_map(v65, 1u, 0);
          *(_DWORD *)(*(_DWORD *)(v2 + 68) + 4) = operator new(0x200u);
          **(_DWORD **)(v2 + 56) = v68;
          v44 = *(_DWORD *)(v2 + 68);
          *(_DWORD *)(v2 + 68) = v44 + 4;
          v39 = *(_DWORD *)(v44 + 4);
          *(_DWORD *)(v2 + 60) = v39;
          *(_DWORD *)(v2 + 64) = v39 + 512;
        else
          *v38 = v68;
          v39 = *(_DWORD *)(v2 + 56) + 4;
        *(_DWORD *)(v2 + 56) = v39;
        v12 = (void **)v5;
      }
      else
        v11 = 0;
        v69 = v4;
        while ( !(v11 & 1) )
          v13 = (const char **)*(_QWORD *)v9;
          v11 = 0;
          v72 = (const char **)(*(_QWORD *)v9 >> 32);
          if ( v13 != v72 )
            do
            {
              Util::toLower(v12, *(_DWORD *)(*v10 - 12), *v10);
              sub_119C884((void **)&v83, *v13);
              Util::toLower((void **)&v84, *(_DWORD *)(v83 - 12), v83);
              v20 = (int)v84;
              v21 = v84 - 12;
              v22 = *(v85 - 3);
              if ( v22 == *((_DWORD *)v84 - 3) )
              {
                v23 = 0;
                if ( !memcmp(v85, v84, v22) )
                  v23 = 1;
              }
              else
              if ( (int *)v21 != &dword_28898C0 )
                v14 = (unsigned int *)(v20 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v15 = __ldrex(v14);
                  while ( __strex(v15 - 1, v14) );
                }
                else
                  v15 = (*v14)--;
                if ( v15 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v21);
              v24 = (void *)(v83 - 12);
              if ( (int *)(v83 - 12) != &dword_28898C0 )
                v16 = (unsigned int *)(v83 - 4);
                    v17 = __ldrex(v16);
                  while ( __strex(v17 - 1, v16) );
                  v17 = (*v16)--;
                if ( v17 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v24);
              v25 = (char *)(v85 - 3);
              if ( v85 - 3 != &dword_28898C0 )
                v18 = v85 - 1;
                    v19 = __ldrex(v18);
                  while ( __strex(v19 - 1, v18) );
                  v19 = (*v18)--;
                if ( v19 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v25);
              ++v13;
              v11 |= v23;
              v26 = 0;
              if ( v13 == v72 )
                v26 = 1;
            }
            while ( !(v26 | v23) );
          v9 = v71;
          ++v10;
          if ( v10 == v70 )
            if ( !(v11 & 1) )
              goto LABEL_74;
            break;
        *(_DWORD *)(v69 + 32) = 0;
        *(_DWORD *)(v69 + 36) = 0;
        v27 = *(_QWORD *)(v69 + 8) >> 32;
        v28 = (int *)*(_QWORD *)(v69 + 8);
        *(_QWORD *)&v29 = *(_QWORD *)(v69 + 16);
        while ( v28 != v29 )
          v40 = *v28;
          v41 = v12;
            v42 = 1 << v27++;
            v40 |= v42;
          while ( v27 != 32 );
          *v28 = v40;
          v12 = v41;
LABEL_62:
          ++v28;
          v27 = 0;
        while ( v30 != v27 )
          v43 = 1 << v27++;
          *v29 |= v43;
          if ( v27 == 32 )
            goto LABEL_62;
        *(_DWORD *)(v69 + 40) = 0;
        v6 = *(int **)(v67 + 56);
        if ( v6 == (int *)(*(_DWORD *)(v67 + 64) - 4) )
          if ( (unsigned int)((*(_QWORD *)(v67 + 32) >> 32)
                            - ((signed int)(*(_DWORD *)(v67 + 68) - *(_QWORD *)(v67 + 32)) >> 2)) <= 1 )
          *(_DWORD *)(*(_DWORD *)(v67 + 68) + 4) = operator new(0x200u);
          **(_DWORD **)(v67 + 56) = v68;
          v8 = *(_DWORD *)(v67 + 68);
          *(_DWORD *)(v67 + 68) = v8 + 4;
          v7 = *(_DWORD *)(v8 + 4);
          *(_DWORD *)(v67 + 60) = v7;
          *(_DWORD *)(v67 + 64) = v7 + 512;
          *v6 = v68;
          v7 = *(_DWORD *)(v67 + 56) + 4;
        *(_DWORD *)(v67 + 56) = v7;
LABEL_74:
      v5 = (int *)v12;
      v3 = v66;
      v2 = v67;
      v4 = *(_DWORD *)v69;
    }
    while ( *(_DWORD *)v69 );
  }
  if ( (unsigned int)*v3 != *v3 >> 32 && *(_DWORD *)(v2 + 56) == *(_DWORD *)(v2 + 40) )
    sub_119C884((void **)&v82, "Found no tests containing at least one of these tags { ");
    sub_119CB58((int)&v75, 24);
    v45 = (int *)(*v3 >> 32);
    for ( i = (int *)*v3; v45 != i; ++i )
      sub_119C904((char *)&v77, *i, *(_DWORD *)(*i - 12));
      sub_119C904((char *)&v77, (int)", ", 2);
    sub_119D48C(&v74, (int)&v78);
    sub_119C8A4((const void **)&v82, (const void **)&v74);
    v47 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v74 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v47);
    v48 = *(_DWORD *)(v82 - 12);
    v49 = v48 - 1;
    if ( !v48 )
      sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", v49, 0);
    sub_119CA68((const void **)&v82, v49, (_BYTE *)1, 0);
    v50 = *(_DWORD *)(v82 - 12);
    v51 = v50 - 1;
    if ( !v50 )
      sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", v51, 0);
    sub_119CA68((const void **)&v82, v51, (_BYTE *)1, 0);
    sub_119C894((const void **)&v82, " }", 2u);
    v52 = *(TestClientInterface ***)(v2 + 80);
    sub_119C854(&v73, &dword_27D5A98);
    sub_119C8A4((const void **)&v73, (const void **)&v82);
    TestManager::handleTestMessages(v52, (unsigned int *)&v73);
    v53 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v73 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v53);
    v54 = off_26D3F84;
    v75 = off_26D3F60;
    *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v75) = off_26D3F80[0];
    v77 = v54;
    v78 = &off_27734E8;
    v55 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v80 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v55);
    v78 = &off_26D40A8;
    sub_119C954((unsigned int **)&v79);
    v75 = (void **)off_26D3F68;
    *(void ***)((char *)&v75 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
    v76 = 0;
    sub_119C964(&v81);
    v56 = (void *)(v82 - 12);
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v82 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v56);
}


void __fastcall TestRunner::executeAllTests(int a1, unsigned __int64 *a2)
{
  TestRunner::executeAllTests(a1, a2);
}


int __fastcall TestRunner::Test::setState(int result, _DWORD *a2)
{
  *(_DWORD *)(result + 24) = *a2;
  return result;
}


_DWORD *__fastcall TestRunner::_giveTestReport(TestRunner *this)
{
  TestRunner *v1; // r9@1
  int v3; // r4@1
  int v5; // r11@2
  unsigned int v6; // r5@3
  int v7; // r0@3
  unsigned int v8; // r2@10
  char v9; // r3@11
  int v10; // r5@11
  TestClientInterface **v15; // r4@20
  void *v16; // r0@20
  void **v17; // r0@21
  void *v18; // r0@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  int v24; // [sp+0h] [bp-E8h]@20
  void **v25; // [sp+4h] [bp-E4h]@20
  int v26; // [sp+8h] [bp-E0h]@22
  void **v27; // [sp+Ch] [bp-DCh]@20
  void **v28; // [sp+10h] [bp-D8h]@20
  int v29; // [sp+2Ch] [bp-BCh]@22
  int v30; // [sp+34h] [bp-B4h]@21
  int v31; // [sp+38h] [bp-B0h]@22

  v1 = this;
  _R7 = 0;
  v3 = *((_DWORD *)this + 3);
  if ( v3 )
  {
    _R10 = 0;
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)(v3 + 36);
      v7 = MinecraftUnitTest::TestClassData::getTestCount(*(MinecraftUnitTest::TestClassData **)(v3 + 28));
      if ( v6 <= 3 )
      {
        switch ( v6 )
        {
          case 0u:
          case 1u:
            v5 += v7;
            break;
          case 2u:
            if ( v7 )
            {
              _R7 += v7;
              v5 += v7;
              _R10 += v7;
            }
          case 3u:
              v8 = 0;
              do
              {
                v9 = v8 & 0x1F;
                v10 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4 * (v8++ >> 5));
                if ( (1 << v9) & v10 )
                  ++_R7;
              }
              while ( v7 != v8 );
          default:
        }
      }
      v3 = *(_DWORD *)v3;
    }
    while ( v3 );
    if ( v5 )
      __asm
        VMOV            S0, R10
        VMOV            S2, R7
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VDIV.F32        S0, S2, S0
        VLDR            S2, =100.0
        VMUL.F32        S0, S0, S2
        VCVTR.S32.F32   S0, S0
        VMOV            R7, S0
    else
      v5 = 0;
      _R7 = 0;
  }
  else
  sub_119CB58((int)&v25, 24);
  sub_119C904((char *)&v27, dword_27D5A9C, *(_DWORD *)(dword_27D5A9C - 12));
  sub_119C904((char *)&v27, (int)"Test Summary: ", 14);
  sub_119C914((int)&v27, _R7);
  sub_119C904((char *)&v27, (int)"% of tests passed out of ", 25);
  sub_119C914((int)&v27, _R10);
  sub_119C904((char *)&v27, (int)" tests ran. There are ", 22);
  sub_119C914((int)&v27, v5 - _R10);
  sub_119C904((char *)&v27, (int)" tests that have not been ran.", 30);
  v15 = (TestClientInterface **)*((_DWORD *)v1 + 20);
  sub_119D48C(&v24, (int)&v28);
  TestManager::handleTestMessages(v15, (unsigned int *)&v24);
  v16 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = off_26D3F84;
  v25 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v25) = off_26D3F80[0];
  v27 = v17;
  v28 = &off_27734E8;
  v18 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v30 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v28 = &off_26D40A8;
  sub_119C954((unsigned int **)&v29);
  v25 = (void **)off_26D3F68;
  *(void ***)((char *)&v25 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v26 = 0;
  return sub_119C964(&v31);
}


void __fastcall TestRunner::_onTestFinished(TestRunner *this, TestRunner::Test *a2, int a3, MinecraftUnitTest::TestClassData *a4)
{
  MinecraftUnitTest::TestClassData *v4; // r8@1
  unsigned int v5; // r11@1
  TestRunner::Test *v6; // r10@1
  const char *v7; // r7@1
  size_t v8; // r0@1
  int v9; // r4@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r5@8
  unsigned int v13; // r0@10
  void *v14; // r0@15
  char *v15; // r2@17
  int v16; // r6@22
  _BYTE *v17; // r2@25
  int v18; // r5@31
  const char *v19; // r4@33
  _BYTE *v20; // r0@33
  const void **v21; // r0@33
  unsigned int v22; // r0@33
  const void **v23; // r0@33
  char *v24; // r0@33
  char *v25; // r0@34
  void *v26; // r0@35
  char *v27; // r0@38
  unsigned int *v28; // r2@40
  signed int v29; // r1@42
  unsigned int *v30; // r2@44
  signed int v31; // r1@46
  unsigned int *v32; // r2@48
  signed int v33; // r1@50
  unsigned int *v34; // r2@52
  signed int v35; // r1@54
  unsigned int *v36; // r2@56
  signed int v37; // r1@58
  TestRunner *v38; // [sp+8h] [bp-68h]@1
  int v39; // [sp+10h] [bp-60h]@33
  char *v40; // [sp+14h] [bp-5Ch]@33
  char *v41; // [sp+18h] [bp-58h]@33
  char v42; // [sp+1Ch] [bp-54h]@1
  int v43; // [sp+20h] [bp-50h]@16
  int v44; // [sp+24h] [bp-4Ch]@15
  int v45; // [sp+2Ch] [bp-44h]@1
  void *ptr; // [sp+30h] [bp-40h]@1
  char *v47; // [sp+34h] [bp-3Ch]@1
  int v48; // [sp+38h] [bp-38h]@1
  char *v49; // [sp+44h] [bp-2Ch]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v38 = this;
  v7 = *(const char **)MinecraftUnitTest::TestClassData::getTestData(a4, a3);
  v49 = (char *)&unk_28898CC;
  ptr = 0;
  v47 = 0;
  v48 = 0;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex<char const*>((int)&v42, "generateTestDataFor_", "", 16);
  v8 = strlen(v7);
  std::__detail::__regex_algo_impl<char const*,std::allocator<std::sub_match<char const*>>,char,std::regex_traits<char>,(std::__detail::_RegexExecutorPolicy)0,false>(
    (int)v7,
    (int)&v7[v8],
    (int)&ptr,
    (int)&v42,
    0);
  v9 = v45;
  if ( v45 )
  {
    v10 = (unsigned int *)(v45 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  }
  v14 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v44 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C954((unsigned int **)&v43);
  if ( v47 == ptr )
    v15 = (char *)&std::__unmatched_sub<char const*>(void)::__unmatched;
  else
    if ( v47 - (_BYTE *)ptr != 24 && *((_BYTE *)ptr + 8) )
      v15 = v47 - 24;
  if ( v15[8] )
    v16 = (*(_QWORD *)v15 >> 32) - *(_QWORD *)v15;
    v16 = 0;
    v17 = &std::__unmatched_sub<char const*>(void)::__unmatched;
    if ( *((_BYTE *)ptr + 8) )
      v17 = ptr;
    if ( v47 - (_BYTE *)ptr == 24 )
      v17 = &std::__unmatched_sub<char const*>(void)::__unmatched;
  if ( v17[8] )
    v18 = (*(_QWORD *)v17 >> 32) - *(_QWORD *)v17;
    v18 = 0;
  v19 = (const char *)MinecraftUnitTest::TestClassData::getName(v4);
  sub_119C884((void **)&v39, "::");
  v20 = (_BYTE *)strlen(v19);
  v21 = sub_119C984((const void **)&v39, 0, (unsigned int)v19, v20);
  v40 = (char *)*v21;
  *v21 = &unk_28898CC;
  v22 = strlen(&v7[v16] + v18);
  v23 = sub_119C894((const void **)&v40, (char *)&v7[v16] + v18, v22);
  v41 = (char *)*v23;
  *v23 = &unk_28898CC;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v49,
    (int *)&v41);
  v24 = v41 - 12;
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v41 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v40 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v26 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v39 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  TestRunner::_reportTestResult(v38, v49, ((1 << (v5 & 0x1F)) & *(_DWORD *)(*(_DWORD *)v6 + 4 * (v5 >> 5))) != 0);
  ++*((_DWORD *)v6 + 8);
  if ( ptr )
    operator delete(ptr);
  v27 = v49 - 12;
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v49 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
}


void __fastcall TestRunner::~TestRunner(TestRunner *this)
{
  TestRunner *v1; // r10@1
  int v2; // r0@1
  void *v3; // r0@3
  unsigned int v4; // r5@4
  unsigned int v5; // r1@4
  unsigned int v6; // r6@5
  void *v7; // t1@6
  int v8; // r7@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // r6@19
  void *v12; // r0@19
  int v13; // r1@21
  void *v14; // r0@21
  char *v15; // r0@23

  v1 = this;
  *(_DWORD *)this = &off_26DF1F8;
  v2 = *((_DWORD *)this + 18);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 18) = 0;
  v3 = (void *)*((_DWORD *)v1 + 8);
  if ( v3 )
  {
    v4 = *((_DWORD *)v1 + 17);
    v5 = *((_DWORD *)v1 + 13);
    if ( v5 < v4 + 4 )
    {
      v6 = v5 - 4;
      do
      {
        v7 = *(void **)(v6 + 4);
        v6 += 4;
        operator delete(v7);
      }
      while ( v6 < v4 );
      v3 = (void *)*((_DWORD *)v1 + 8);
    }
    operator delete(v3);
  }
  v8 = *((_DWORD *)v1 + 3);
  while ( v8 )
    v11 = v8;
    v12 = *(void **)(v8 + 8);
    v8 = *(_DWORD *)v8;
    if ( v12 )
      operator delete(v12);
    v13 = *(_DWORD *)(v11 + 4);
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    operator delete((void *)v11);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v15 = (char *)*((_DWORD *)v1 + 1);
  if ( v15 && (char *)v1 + 28 != v15 )
    operator delete(v15);
  operator delete((void *)v1);
}


int __fastcall TestRunner::_onTestClassFinished(TestRunner *this, TestRunner::Test *a2, MinecraftUnitTest::TestClassData *a3)
{
  MinecraftUnitTest::TestClassData *v3; // r5@1
  TestRunner *v4; // r4@1
  TestRunner::Test *v5; // r6@1
  const char *v6; // r1@1
  int v7; // r2@2
  int v8; // r0@4
  int result; // r0@5
  int v10; // r0@6

  v3 = a3;
  v4 = this;
  v5 = a2;
  v6 = (const char *)MinecraftUnitTest::TestClassData::getName(a3);
  if ( *((_DWORD *)v5 + 7) == 3 )
  {
    v7 = 0;
  }
  else
    v7 = 1;
    *((_DWORD *)v5 + 7) = 2;
  TestRunner::_reportTestClassResult(v4, v6, v7);
  MinecraftUnitTest::TestClassData::cleanUp(v3);
  v8 = *((_DWORD *)v4 + 10);
  if ( v8 == *((_DWORD *)v4 + 12) - 4 )
    operator delete(*((void **)v4 + 11));
    v10 = *((_DWORD *)v4 + 13);
    *((_DWORD *)v4 + 13) = v10 + 4;
    result = *(_DWORD *)(v10 + 4);
    *((_DWORD *)v4 + 11) = result;
    *((_DWORD *)v4 + 12) = result + 512;
    *((_DWORD *)v4 + 10) = result;
    result = v8 + 4;
  return result;
}


int __fastcall TestRunner::executeTest(int a1, int **a2)
{
  int v2; // r9@1
  int result; // r0@1
  int *v4; // r1@2
  int v5; // r8@2
  int *v6; // r2@2
  int v7; // r6@2
  int v8; // r3@2
  int v9; // r7@5
  signed int v10; // r4@6
  signed int v11; // r4@9
  int *v12; // r0@11
  int v13; // r0@15

  v2 = a1;
  result = std::_Hashtable<std::string,std::pair<std::string const,TestRunner::Test>,std::allocator<std::pair<std::string const,TestRunner::Test>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             (unsigned __int64 *)(a1 + 4),
             a2);
  if ( result )
  {
    *(_DWORD *)(result + 32) = 0;
    *(_DWORD *)(result + 36) = 0;
    v5 = result + 8;
    v4 = *(int **)(result + 8);
    v6 = (int *)(*(_QWORD *)(result + 12) >> 32);
    v7 = *(_QWORD *)(result + 12);
    v8 = *(_DWORD *)(result + 20);
    while ( v4 != v6 )
    {
      v9 = *v4;
      do
      {
        v10 = 1 << v7++;
        v9 |= v10;
      }
      while ( v7 != 32 );
      *v4 = v9;
LABEL_3:
      ++v4;
      v7 = 0;
    }
    while ( v8 != v7 )
      v11 = 1 << v7++;
      *v6 |= v11;
      if ( v7 == 32 )
        goto LABEL_3;
    *(_DWORD *)(result + 40) = 0;
    v12 = *(int **)(v2 + 56);
    if ( v12 == (int *)(*(_DWORD *)(v2 + 64) - 4) )
      if ( (unsigned int)((*(_QWORD *)(v2 + 32) >> 32) - ((signed int)(*(_DWORD *)(v2 + 68) - *(_QWORD *)(v2 + 32)) >> 2)) <= 1 )
        std::deque<TestRunner::Test *,std::allocator<TestRunner::Test *>>::_M_reallocate_map(v2 + 32, 1u, 0);
      *(_DWORD *)(*(_DWORD *)(v2 + 68) + 4) = operator new(0x200u);
      **(_DWORD **)(v2 + 56) = v5;
      v13 = *(_DWORD *)(v2 + 68);
      *(_DWORD *)(v2 + 68) = v13 + 4;
      result = *(_DWORD *)(v13 + 4);
      *(_DWORD *)(v2 + 60) = result;
      *(_DWORD *)(v2 + 64) = result + 512;
    else
      *v12 = v5;
      result = *(_DWORD *)(v2 + 56) + 4;
    *(_DWORD *)(v2 + 56) = result;
  }
  return result;
}


void __fastcall TestRunner::_runTests(TestRunner *this, TestRunner::Test *a2, MinecraftUnitTest::TestClassData *a3, int a4)
{
  TestRunner::_runTests(this, a2, a3, a4);
}


void __fastcall TestRunner::_onTestFinished(TestRunner *this, TestRunner::Test *a2, int a3, MinecraftUnitTest::TestClassData *a4)
{
  TestRunner::_onTestFinished(this, a2, a3, a4);
}


void __fastcall TestRunner::getTestResults(TestRunner *this, const char *a2, const char *a3)
{
  TestRunner::getTestResults(this, a2, a3);
}


void __fastcall TestRunner::_reportTestResult(TestRunner *this, const char *a2, int a3)
{
  const char *v3; // r5@1
  TestRunner *v4; // r4@1
  unsigned int v5; // r0@2
  const void **v6; // r0@2
  void *v7; // r0@2
  char *v8; // r0@3
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int v11; // r0@8
  const void **v12; // r0@8
  void *v13; // r0@8
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  int v18; // [sp+4h] [bp-24h]@8
  char *v19; // [sp+8h] [bp-20h]@8
  int v20; // [sp+Ch] [bp-1Ch]@2
  char *v21; // [sp+10h] [bp-18h]@2

  v3 = a2;
  v4 = this;
  if ( a3 == 1 )
  {
    sub_119C854(&v20, &dword_27D5A90);
    v5 = strlen(v3);
    sub_119C894((const void **)&v20, (char *)v3, v5);
    v6 = sub_119C894((const void **)&v20, " passed!", 8u);
    v21 = (char *)*v6;
    *v6 = &unk_28898CC;
    v7 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    }
    TestManager::handleTestMessages(*((TestClientInterface ***)v4 + 20), (unsigned int *)&v21);
    v8 = v21 - 12;
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v21 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        goto LABEL_24;
LABEL_23:
      v10 = (*v9)--;
LABEL_24:
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
      return;
  }
  else
    sub_119C854(&v18, &dword_27D5A98);
    v11 = strlen(v3);
    sub_119C894((const void **)&v18, (char *)v3, v11);
    v12 = sub_119C894((const void **)&v18, " failed.", 8u);
    v19 = (char *)*v12;
    *v12 = &unk_28898CC;
    v13 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v18 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    TestManager::handleTestMessages(*((TestClientInterface ***)v4 + 20), (unsigned int *)&v19);
    v8 = v19 - 12;
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v19 - 4);
      goto LABEL_23;
}


int __fastcall TestRunner::Test::reset(int result)
{
  int v1; // r3@1
  int *v2; // r12@1
  __int64 v3; // kr08_8@1
  int v4; // r4@4
  signed int v5; // r5@5
  signed int v6; // r5@8

  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  v1 = *(_QWORD *)result >> 32;
  v2 = (int *)*(_QWORD *)result;
  v3 = *(_QWORD *)(result + 8);
  while ( v2 != (int *)v3 )
  {
    v4 = *v2;
    do
    {
      v5 = 1 << v1++;
      v4 |= v5;
    }
    while ( v1 != 32 );
    *v2 = v4;
LABEL_2:
    ++v2;
    v1 = 0;
  }
  while ( HIDWORD(v3) != v1 )
    v6 = 1 << v1++;
    *(_DWORD *)v3 |= v6;
    if ( v1 == 32 )
      goto LABEL_2;
  *(_DWORD *)(result + 32) = 0;
  return result;
}


int __fastcall TestRunner::TestRunner(double a1)
{
  double v1; // kr00_8@1
  unsigned int v2; // r0@1
  int v3; // r7@3
  void *v4; // r5@3
  int v5; // r1@4
  __int64 v6; // kr08_8@5
  __int64 v7; // kr10_8@5
  __int64 v8; // kr18_8@5
  __int64 v9; // kr20_8@5
  __int64 v10; // kr28_8@5
  __int64 v11; // kr30_8@5
  void *v12; // r7@5
  int v13; // r0@5
  unsigned int v14; // r6@7
  void *v15; // t1@8
  _DWORD *v16; // r6@10
  _DWORD *v17; // r0@10
  __int64 v18; // r1@10
  int v19; // r6@12
  _DWORD *v20; // r0@12
  __int64 v21; // r1@12
  _DWORD *v23; // [sp+0h] [bp-70h]@12
  __int64 v24; // [sp+8h] [bp-68h]@12
  _DWORD *v25; // [sp+10h] [bp-60h]@10
  __int64 v26; // [sp+18h] [bp-58h]@10
  int v27; // [sp+20h] [bp-50h]@4
  int v28; // [sp+24h] [bp-4Ch]@5
  __int64 v29; // [sp+28h] [bp-48h]@5
  __int64 v30; // [sp+30h] [bp-40h]@5
  __int64 v31; // [sp+38h] [bp-38h]@5
  __int64 v32; // [sp+40h] [bp-30h]@5

  v1 = a1;
  *(_DWORD *)LODWORD(a1) = &off_26DF1F8;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 1065353216;
  LODWORD(a1) += 20;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = sub_119C844(a1);
  *(_DWORD *)(LODWORD(v1) + 8) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(LODWORD(v1) + 28) = 0;
    v4 = (void *)(LODWORD(v1) + 28);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_119C874();
    v3 = 4 * v2;
    v4 = operator new(4 * v2);
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)(LODWORD(v1) + 4) = v4;
  _aeabi_memclr8(&v27, 40);
  std::_Deque_base<TestRunner::Test *,std::allocator<TestRunner::Test *>>::_M_initialize_map((int)&v27, 0);
  _aeabi_memclr4(LODWORD(v1) + 32, 40);
  std::_Deque_base<TestRunner::Test *,std::allocator<TestRunner::Test *>>::_M_initialize_map(LODWORD(v1) + 32, 0);
  v5 = v27;
  if ( v27 )
    v6 = *(_QWORD *)(LODWORD(v1) + 40);
    v7 = *(_QWORD *)(LODWORD(v1) + 48);
    v8 = v29;
    *(_QWORD *)(LODWORD(v1) + 48) = v30;
    *(_QWORD *)(LODWORD(v1) + 40) = v8;
    v29 = v6;
    v30 = v7;
    v9 = *(_QWORD *)(LODWORD(v1) + 56);
    v10 = *(_QWORD *)(LODWORD(v1) + 64);
    v11 = v31;
    *(_QWORD *)(LODWORD(v1) + 64) = v32;
    *(_QWORD *)(LODWORD(v1) + 56) = v11;
    v31 = v9;
    v32 = v10;
    v12 = *(void **)(LODWORD(v1) + 32);
    *(_DWORD *)(LODWORD(v1) + 32) = v5;
    v27 = (int)v12;
    v13 = *(_DWORD *)(LODWORD(v1) + 36);
    *(_DWORD *)(LODWORD(v1) + 36) = v28;
    v28 = v13;
    if ( v12 )
    {
      if ( HIDWORD(v7) < HIDWORD(v10) + 4 )
      {
        v14 = HIDWORD(v7) - 4;
        do
        {
          v15 = *(void **)(v14 + 4);
          v14 += 4;
          operator delete(v15);
        }
        while ( v14 < HIDWORD(v10) );
      }
      operator delete(v12);
    }
  *(_DWORD *)(LODWORD(v1) + 72) = 0;
  *(_DWORD *)(LODWORD(v1) + 80) = HIDWORD(v1);
  v16 = operator new(0x28u);
  _aeabi_memclr4(v16, 40);
  v16[1] = &unk_28898CC;
  *v16 = &off_26E7994;
  v16[4] = 0;
  v16[8] = 0;
  *(_DWORD *)(LODWORD(v1) + 72) = v16;
  v17 = operator new(4u);
  LODWORD(v18) = sub_1079788;
  *v17 = LODWORD(v1);
  HIDWORD(v18) = &loc_107977E;
  v25 = v17;
  v26 = v18;
  MinecraftUnitTest::TestLogger::registerLogMessageCallback((int)v16, (int)&v25);
  if ( (_DWORD)v26 )
    ((void (*)(void))v26)();
  v19 = *(_DWORD *)(LODWORD(v1) + 72);
  v20 = operator new(4u);
  LODWORD(v21) = sub_10797EA;
  *v20 = LODWORD(v1);
  HIDWORD(v21) = sub_10797BE;
  v23 = v20;
  v24 = v21;
  MinecraftUnitTest::TestLogger::registerOnAssertFailCallback(v19, (int)&v23);
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  return LODWORD(v1);
}


_DWORD *__fastcall TestRunner::_updateTests(TestRunner *this, int a2, TestInterface *a3)
{
  TestRunner *v3; // r4@1
  _DWORD *result; // r0@1
  TestInterface *v5; // r7@1
  int v6; // r6@2
  __int64 v7; // kr00_8@2
  int v8; // r0@5
  const char *v9; // r1@10
  int v10; // r2@11
  int v11; // r0@13
  int v12; // r0@14
  int v13; // r0@16

  v3 = this;
  result = (_DWORD *)*((_DWORD *)this + 10);
  v5 = a3;
  if ( *((_DWORD **)v3 + 14) != result )
  {
    v6 = *result;
    v7 = *(_QWORD *)(*result + 20);
    if ( HIDWORD(v7) == 2 )
    {
      v9 = (const char *)MinecraftUnitTest::TestClassData::getName((MinecraftUnitTest::TestClassData *)v7);
      if ( *(_DWORD *)(v6 + 28) == 3 )
      {
        v10 = 0;
      }
      else
        v10 = 1;
        *(_DWORD *)(v6 + 28) = 2;
      TestRunner::_reportTestClassResult(v3, v9, v10);
      MinecraftUnitTest::TestClassData::cleanUp((MinecraftUnitTest::TestClassData *)v7);
      v11 = *((_DWORD *)v3 + 10);
      if ( v11 == *((_DWORD *)v3 + 12) - 4 )
        operator delete(*((void **)v3 + 11));
        v13 = *((_DWORD *)v3 + 13);
        *((_DWORD *)v3 + 13) = v13 + 4;
        v12 = *(_DWORD *)(v13 + 4);
        *((_DWORD *)v3 + 11) = v12;
        *((_DWORD *)v3 + 12) = v12 + 512;
        v12 = v11 + 4;
      *((_DWORD *)v3 + 10) = v12;
    }
    else if ( HIDWORD(v7) == 1 )
      TestRunner::_runTests(v3, (TestRunner::Test *)v6, (MinecraftUnitTest::TestClassData *)v7, a2);
    else if ( !HIDWORD(v7) )
      *(_DWORD *)(v6 + 28) = 1;
      MinecraftUnitTest::TestClassData::resetTestResults((MinecraftUnitTest::TestClassData *)v7);
      MinecraftUnitTest::TestClassData::initialize((MinecraftUnitTest::TestClassData *)v7);
      MinecraftUnitTest::TestClassData::setTestInterface((MinecraftUnitTest::TestClassData *)v7, v5);
      v8 = *(_DWORD *)(v6 + 24);
      if ( v8 == 1 )
        *(_DWORD *)(v6 + 24) = 2;
      else if ( !v8 )
        *(_DWORD *)(v6 + 24) = 1;
    result = (_DWORD *)*((_DWORD *)v3 + 10);
    if ( *((_DWORD **)v3 + 14) == result )
      result = j_j_j__ZN10TestRunner15_giveTestReportEv(v3);
  }
  return result;
}


void __fastcall TestRunner::_reportTestClassResult(TestRunner *this, const char *a2, int a3)
{
  const char *v3; // r5@1
  TestRunner *v4; // r4@1
  int *v5; // r0@2
  unsigned int v6; // r0@2
  const void **v7; // r0@2
  const void **v8; // r0@2
  char *v9; // r0@2
  void *v10; // r0@3
  char *v11; // r0@4
  unsigned int *v12; // r2@5
  signed int v13; // r1@7
  int *v14; // r0@9
  unsigned int v15; // r0@9
  const void **v16; // r0@9
  const void **v17; // r0@9
  char *v18; // r0@9
  void *v19; // r0@10
  unsigned int *v20; // r2@13
  signed int v21; // r1@15
  unsigned int *v22; // r2@17
  signed int v23; // r1@19
  unsigned int *v24; // r2@21
  signed int v25; // r1@23
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  int v28; // [sp+4h] [bp-2Ch]@9
  char *v29; // [sp+8h] [bp-28h]@9
  char *v30; // [sp+Ch] [bp-24h]@9
  int v31; // [sp+10h] [bp-20h]@2
  char *v32; // [sp+14h] [bp-1Ch]@2
  char *v33; // [sp+18h] [bp-18h]@2

  v3 = a2;
  v4 = this;
  if ( a3 == 1 )
  {
    v5 = sub_119C854(&v31, &dword_27D5A90);
    sub_119C894((const void **)v5, "All tests in ", 0xDu);
    v6 = strlen(v3);
    v7 = sub_119C894((const void **)&v31, (char *)v3, v6);
    v32 = (char *)*v7;
    *v7 = &unk_28898CC;
    v8 = sub_119C894((const void **)&v32, " passed!", 8u);
    v33 = (char *)*v8;
    *v8 = &unk_28898CC;
    v9 = v32 - 12;
    if ( (int *)(v32 - 12) != &dword_28898C0 )
    {
      v20 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    }
    v10 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v31 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    TestManager::handleTestMessages(*((TestClientInterface ***)v4 + 20), (unsigned int *)&v33);
    v11 = v33 - 12;
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v33 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        goto LABEL_34;
LABEL_33:
      v13 = (*v12)--;
LABEL_34:
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
      return;
  }
  else
    v14 = sub_119C854(&v28, &dword_27D5A98);
    sub_119C894((const void **)v14, "One or more tests in ", 0x15u);
    v15 = strlen(v3);
    v16 = sub_119C894((const void **)&v28, (char *)v3, v15);
    v29 = (char *)*v16;
    *v16 = &unk_28898CC;
    v17 = sub_119C894((const void **)&v29, " failed.", 8u);
    v30 = (char *)*v17;
    *v17 = &unk_28898CC;
    v18 = v29 - 12;
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v29 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
    v19 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v28 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    TestManager::handleTestMessages(*((TestClientInterface ***)v4 + 20), (unsigned int *)&v30);
    v11 = v30 - 12;
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v30 - 4);
      goto LABEL_33;
}


int __fastcall TestRunner::Test::Test(int a1, MinecraftUnitTest::TestClassData *a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r12@1
  int v6; // r7@1
  unsigned int v7; // r9@1
  char *v8; // r6@1
  signed int v9; // kr00_4@1
  int v10; // r7@1
  int v11; // r5@1
  void *v12; // r0@5
  int v13; // r1@5

  v4 = a1;
  v5 = a1 + 16;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)v5 = 0;
  *(_DWORD *)(v5 + 4) = a2;
  *(_DWORD *)(v5 + 8) = a3;
  *(_DWORD *)(v5 + 12) = a4;
  *(_DWORD *)(a1 + 32) = 0;
  v6 = MinecraftUnitTest::TestClassData::getTestCount(a2);
  v7 = (unsigned int)(v6 + 31) >> 5;
  v8 = (char *)operator new(4 * v7);
  v9 = v6;
  v10 = v6 % 32;
  v11 = (int)&v8[4 * (v9 / 32)];
  if ( v10 < 0 )
  {
    v11 -= 4;
    v10 += 32;
  }
  if ( 0 != 4 * v7 )
    _aeabi_memset4(v8, 4 * v7, 255);
  v12 = *(void **)v4;
  v13 = v4 + 8;
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)v13 = v11;
  *(_DWORD *)(v13 + 4) = v10;
  *(_DWORD *)(v13 + 8) = &v8[4 * v7];
  if ( v12 )
    operator delete(v12);
  return v4;
}


void __fastcall TestRunner::_reportTestResult(TestRunner *this, const char *a2, int a3)
{
  TestRunner::_reportTestResult(this, a2, a3);
}


TestRunner *__fastcall TestRunner::~TestRunner(TestRunner *this)
{
  TestRunner *v1; // r10@1
  int v2; // r0@1
  void *v3; // r0@3
  unsigned int v4; // r5@4
  unsigned int v5; // r1@4
  unsigned int v6; // r6@5
  void *v7; // t1@6
  int v8; // r7@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // r6@19
  void *v12; // r0@19
  int v13; // r1@21
  void *v14; // r0@21
  char *v15; // r0@23

  v1 = this;
  *(_DWORD *)this = &off_26DF1F8;
  v2 = *((_DWORD *)this + 18);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 18) = 0;
  v3 = (void *)*((_DWORD *)v1 + 8);
  if ( v3 )
  {
    v4 = *((_DWORD *)v1 + 17);
    v5 = *((_DWORD *)v1 + 13);
    if ( v5 < v4 + 4 )
    {
      v6 = v5 - 4;
      do
      {
        v7 = *(void **)(v6 + 4);
        v6 += 4;
        operator delete(v7);
      }
      while ( v6 < v4 );
      v3 = (void *)*((_DWORD *)v1 + 8);
    }
    operator delete(v3);
  }
  v8 = *((_DWORD *)v1 + 3);
  while ( v8 )
    v11 = v8;
    v12 = *(void **)(v8 + 8);
    v8 = *(_DWORD *)v8;
    if ( v12 )
      operator delete(v12);
    v13 = *(_DWORD *)(v11 + 4);
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    operator delete((void *)v11);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v15 = (char *)*((_DWORD *)v1 + 1);
  if ( v15 && (char *)v1 + 28 != v15 )
    operator delete(v15);
  return v1;
}
