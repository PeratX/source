

ScreenViewCommand *__fastcall ScreenViewCommand::~ScreenViewCommand(ScreenViewCommand *this)
{
  ScreenViewCommand *v1; // r4@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  void (*v4)(void); // r3@5
  void (*v5)(void); // r3@7
  void (*v6)(void); // r3@9
  void (*v7)(void); // r3@11
  void (*v8)(void); // r3@13
  void (*v9)(void); // r3@15
  void (*v10)(void); // r3@17
  void (*v11)(void); // r3@19
  void (__fastcall *v12)(ScreenViewCommand *, ScreenViewCommand *, signed int); // r3@21

  v1 = this;
  v2 = (void (*)(void))*((_DWORD *)this + 42);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 38);
  if ( v3 )
    v3();
  v4 = (void (*)(void))*((_DWORD *)v1 + 34);
  if ( v4 )
    v4();
  v5 = (void (*)(void))*((_DWORD *)v1 + 30);
  if ( v5 )
    v5();
  v6 = (void (*)(void))*((_DWORD *)v1 + 26);
  if ( v6 )
    v6();
  v7 = (void (*)(void))*((_DWORD *)v1 + 22);
  if ( v7 )
    v7();
  v8 = (void (*)(void))*((_DWORD *)v1 + 18);
  if ( v8 )
    v8();
  v9 = (void (*)(void))*((_DWORD *)v1 + 14);
  if ( v9 )
    v9();
  v10 = (void (*)(void))*((_DWORD *)v1 + 10);
  if ( v10 )
    v10();
  v11 = (void (*)(void))*((_DWORD *)v1 + 6);
  if ( v11 )
    v11();
  v12 = (void (__fastcall *)(ScreenViewCommand *, ScreenViewCommand *, signed int))*((_DWORD *)v1 + 2);
  if ( v12 )
    v12(v1, v1, 3);
  return v1;
}
