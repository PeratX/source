

void __fastcall EnumOption::~EnumOption(EnumOption *this)
{
  EnumOption::~EnumOption(this);
}


void __fastcall EnumOption::~EnumOption(EnumOption *this)
{
  EnumOption *v1; // r4@1
  void (*v2)(void); // r3@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26D9A6C;
  v2 = (void (*)(void))*((_DWORD *)this + 27);
  if ( v2 )
    v2();
  v3 = (void *)*((_DWORD *)v1 + 22);
  if ( v3 )
    operator delete(v3);
  Option::~Option(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall EnumOption::EnumOption(int a1, unsigned int a2, unsigned int a3, int a4, int *a5, int *a6, int a7, __int64 *a8, int a9)
{
  int v9; // r4@1

  v9 = a1;
  IntOption::IntOption(a1, a2, a3, a4, a5, a6, a7, a8, 1);
  *(_DWORD *)v9 = &off_26D9A88;
  *(_DWORD *)(v9 + 116) = a9;
  Option::setOptionType(v9, 6);
  return v9;
}
