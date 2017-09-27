

void __fastcall TestManager::handleTestMessages(TestClientInterface **a1, unsigned int *a2)
{
  TestManager::handleTestMessages(a1, a2);
}


int __fastcall TestManager::executeAllFnTests(TestClientInterface **a1)
{
  int v1; // r0@1

  v1 = TestClientInterface::getFunctionalTestRunner(*a1);
  return (*(int (**)(void))(*(_DWORD *)v1 + 12))();
}


void __fastcall TestManager::sendMessagesToConsole(TestClientInterface **a1, unsigned int *a2)
{
  TestManager::sendMessagesToConsole(a1, a2);
}


void __fastcall TestManager::getTestResults(TestManager *this)
{
  TestClientInterface **v1; // r5@1
  int v2; // r0@1
  void *v3; // r0@1
  char *v4; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+0h] [bp-28h]@1
  char *v10; // [sp+4h] [bp-24h]@1

  v1 = (TestClientInterface **)this;
  v10 = (char *)&unk_28898CC;
  v2 = TestClientInterface::getUnitTestRunner(*(TestClientInterface **)this);
  (*(void (__fastcall **)(int *))(*(_DWORD *)v2 + 20))(&v9);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v10,
    &v9);
  v3 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  TestManager::sendMessagesToConsole(v1, (unsigned int *)&v10);
  v4 = v10 - 12;
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v10 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
}


void __fastcall TestManager::sendMessagesToConsole(TestClientInterface **a1, unsigned int *a2)
{
  unsigned int *v2; // r4@1
  int v3; // r5@1
  int *v4; // r4@1
  int *v5; // r6@1
  int *v6; // r6@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  int *v9; // r0@13
  __int64 v10; // [sp+4h] [bp-34h]@1
  int v11; // [sp+Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = TestClientInterface::getGuiData(*a1);
  v10 = 0LL;
  v11 = 0;
  Util::splitString(v2, 10, (int)&v10);
  v5 = (int *)HIDWORD(v10);
  v4 = (int *)v10;
  if ( (_DWORD)v10 != HIDWORD(v10) )
  {
    do
    {
      GuiData::displayDevConsoleMessage(v3, v4);
      ++v4;
    }
    while ( v5 != v4 );
    v4 = (int *)HIDWORD(v10);
    v6 = (int *)v10;
    if ( (_DWORD)v10 != HIDWORD(v10) )
      do
      {
        v9 = (int *)(*v6 - 12);
        if ( v9 != &dword_28898C0 )
        {
          v7 = (unsigned int *)(*v6 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v9);
        }
        ++v6;
      }
      while ( v6 != v4 );
      v4 = (int *)v10;
  }
  if ( v4 )
    operator delete(v4);
}


int __fastcall TestManager::executeAllUnitTests(TestClientInterface **a1)
{
  int v1; // r0@1

  v1 = TestClientInterface::getUnitTestRunner(*a1);
  return (*(int (**)(void))(*(_DWORD *)v1 + 12))();
}


void __fastcall TestManager::handleTestMessages(TestClientInterface **a1, unsigned int *a2)
{
  unsigned int *v2; // r4@1
  int v3; // r5@1
  int *v4; // r4@1
  int *v5; // r6@1
  int *v6; // r6@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  int *v9; // r0@13
  __int64 v10; // [sp+4h] [bp-34h]@1
  int v11; // [sp+Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = TestClientInterface::getGuiData(*a1);
  v10 = 0LL;
  v11 = 0;
  Util::splitString(v2, 10, (int)&v10);
  v5 = (int *)HIDWORD(v10);
  v4 = (int *)v10;
  if ( (_DWORD)v10 != HIDWORD(v10) )
  {
    do
    {
      GuiData::displayDevConsoleMessage(v3, v4);
      ++v4;
    }
    while ( v5 != v4 );
    v4 = (int *)HIDWORD(v10);
    v6 = (int *)v10;
    if ( (_DWORD)v10 != HIDWORD(v10) )
      do
      {
        v9 = (int *)(*v6 - 12);
        if ( v9 != &dword_28898C0 )
        {
          v7 = (unsigned int *)(*v6 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v9);
        }
        ++v6;
      }
      while ( v6 != v4 );
      v4 = (int *)v10;
  }
  if ( v4 )
    operator delete(v4);
}


_DWORD *__fastcall TestManager::TestManager(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}
