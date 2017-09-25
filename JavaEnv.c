

JavaEnv *__fastcall JavaEnv::~JavaEnv(JavaEnv *this)
{
  JavaEnv *v1; // r4@1
  int v2; // r0@1
  bool v3; // zf@1
  int v4; // r0@9

  v1 = this;
  v2 = *((_BYTE *)this + 5);
  v3 = v2 == 0;
  if ( v2 )
  {
    v2 = *(_DWORD *)v1;
    v3 = *(_DWORD *)v1 == 0;
  }
  if ( !v3 )
    (*(void (**)(void))(*(_DWORD *)v2 + 80))();
  if ( *(_DWORD *)v1 && (*(int (**)(void))(**(_DWORD **)v1 + 60))() )
    (*(void (**)(void))(**(_DWORD **)v1 + 64))();
  if ( *((_BYTE *)v1 + 4) )
    v4 = JavaUtil::getVM((JavaUtil *)*((_BYTE *)v1 + 4));
    (*(void (**)(void))(*(_DWORD *)v4 + 20))();
  return v1;
}


int __fastcall JavaEnv::JavaEnv(int a1)
{
  int v1; // r4@1
  char v2; // r5@1
  int v3; // r0@1
  JavaUtil *v4; // r0@1
  int v5; // r0@2
  int v6; // r0@2
  int v7; // r1@2

  v1 = a1;
  v2 = 0;
  *(_DWORD *)a1 = 0;
  *(_WORD *)(a1 + 4) = 0;
  v3 = JavaUtil::getVM((JavaUtil *)a1);
  v4 = (JavaUtil *)(*(int (**)(void))(*(_DWORD *)v3 + 24))();
  if ( v4 )
  {
    v5 = JavaUtil::getVM(v4);
    (*(void (**)(void))(*(_DWORD *)v5 + 16))();
    v6 = *(_DWORD *)v1;
    v7 = *(_DWORD *)v1;
    if ( *(_DWORD *)v1 )
      LOBYTE(v7) = 1;
    *(_BYTE *)(v1 + 4) = v7;
    if ( !(*(int (**)(void))(*(_DWORD *)v6 + 76))() )
      v2 = 1;
    *(_BYTE *)(v1 + 5) = v2;
  }
  return v1;
}
