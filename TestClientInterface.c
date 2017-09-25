

int __fastcall TestClientInterface::getGuiData(TestClientInterface *this)
{
  ClientInstanceTestInterface *v1; // r0@1

  v1 = (ClientInstanceTestInterface *)MinecraftGame::getPrimaryClientInstanceTestInterface(*((MinecraftGame **)this + 1));
  return ClientInstanceTestInterface::getGuiData(v1);
}


int __fastcall TestClientInterface::getAppOptions(TestClientInterface *this)
{
  ClientInstanceTestInterface *v1; // r0@1

  v1 = (ClientInstanceTestInterface *)MinecraftGame::getPrimaryClientInstanceTestInterface(*((MinecraftGame **)this + 1));
  return ClientInstanceTestInterface::getOptions(v1);
}


int __fastcall TestClientInterface::TestClientInterface(int result, int a2)
{
  *(_DWORD *)result = &off_26D69D0;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


int __fastcall TestClientInterface::update(TestClientInterface *this)
{
  TestClientInterface *v1; // r4@1

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 3) + 8))();
  return (*(int (**)(void))(**((_DWORD **)v1 + 4) + 8))();
}


void __fastcall TestClientInterface::~TestClientInterface(TestClientInterface *this)
{
  TestClientInterface::~TestClientInterface(this);
}


int __fastcall TestClientInterface::init(TestClientInterface *this)
{
  TestClientInterface *v1; // r4@1
  TestManager *v2; // r5@1
  void *v3; // r0@1
  int v4; // r5@2
  __int64 v5; // r0@3
  int v6; // r6@3
  int v7; // r0@3
  int v8; // r6@5
  __int64 v9; // r0@5
  int v10; // r5@5
  int result; // r0@5

  v1 = this;
  v2 = (TestManager *)operator new(4u);
  TestManager::TestManager(v2, v1);
  v3 = (void *)*((_DWORD *)v1 + 2);
  *((_DWORD *)v1 + 2) = v2;
  if ( v3 )
  {
    operator delete(v3);
    v4 = *((_DWORD *)v1 + 2);
  }
  LODWORD(v5) = operator new(0x60u);
  v6 = v5;
  UnitTestRunner::UnitTestRunner(v5);
  v7 = *((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = v6;
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  v8 = *((_DWORD *)v1 + 2);
  LODWORD(v9) = operator new(0x68u);
  v10 = v9;
  FunctionalTestRunner::FunctionalTestRunner(v9, v1);
  result = *((_DWORD *)v1 + 4);
  *((_DWORD *)v1 + 4) = v10;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


void __fastcall TestClientInterface::~TestClientInterface(TestClientInterface *this)
{
  TestClientInterface *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  void *v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26D69D0;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  v3 = *((_DWORD *)v1 + 3);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 3) = 0;
  v4 = (void *)*((_DWORD *)v1 + 2);
  if ( v4 )
    operator delete(v4);
  j_j_j__ZdlPv_3((void *)v1);
}


TestClientInterface *__fastcall TestClientInterface::~TestClientInterface(TestClientInterface *this)
{
  TestClientInterface *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  void *v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26D69D0;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  v3 = *((_DWORD *)v1 + 3);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 3) = 0;
  v4 = (void *)*((_DWORD *)v1 + 2);
  if ( v4 )
    operator delete(v4);
  *((_DWORD *)v1 + 2) = 0;
  return v1;
}
