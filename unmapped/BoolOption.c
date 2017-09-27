

int __fastcall BoolOption::load(int a1, int *a2)
{
  Option *v2; // r4@1

  v2 = (Option *)a1;
  Option::read(a2, (_BYTE *)(a1 + 68));
  return j_j_j__ZN6Option24notifyOptionValueChangedEv(v2);
}


void __fastcall BoolOption::~BoolOption(BoolOption *this)
{
  Option *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26D9A34;
  v2 = (void (*)(void))*((_DWORD *)this + 20);
  if ( v2 )
    v2();
  Option::~Option(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall BoolOption::set(BoolOption *this, int a2)
{
  int v2; // r5@1
  BoolOption *v3; // r4@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  result = Option::canModify(this);
  if ( result == 1 )
  {
    result = *((_BYTE *)v3 + 68);
    if ( result != v2 )
    {
      if ( *((_DWORD *)v3 + 20) )
        LOBYTE(v2) = (*((int (__fastcall **)(_DWORD, _DWORD))v3 + 21))((char *)v3 + 72, v2);
      *((_BYTE *)v3 + 68) = v2;
      result = j_j_j__ZN6Option24notifyOptionValueChangedEv(v3);
    }
  }
  return result;
}


int __fastcall BoolOption::BoolOption(int a1, unsigned int a2, unsigned int a3, int a4, int *a5, int *a6, char a7)
{
  int result; // r0@1

  result = Option::Option(a1, a2, a3, a4, a5, a6, 0);
  *(_DWORD *)result = &off_26D9A34;
  *(_BYTE *)(result + 68) = a7;
  *(_BYTE *)(result + 69) = a7;
  *(_DWORD *)(result + 80) = 0;
  return result;
}


_DWORD *__fastcall BoolOption::save(Option *a1, int a2)
{
  int v2; // r2@1

  v2 = *((_BYTE *)a1 + 68);
  return j_j_j__ZN6Option5_saveIbEEvRSt6vectorIN12PropertyFile8PropertyESaIS3_EET_(a1, a2);
}


int __fastcall BoolOption::setCoerceValueCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 72;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 72);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 80);
  v10 = v13;
  *(_DWORD *)(v4 + 80) = v8;
  v14 = *(_DWORD *)(v4 + 84);
  *(_DWORD *)(v4 + 84) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


void __fastcall BoolOption::~BoolOption(BoolOption *this)
{
  BoolOption::~BoolOption(this);
}


int __fastcall BoolOption::toggle(BoolOption *this)
{
  BoolOption *v1; // r4@1
  char v2; // r5@1
  int v3; // r6@1
  int result; // r0@3
  signed int v5; // r1@6

  v1 = this;
  v2 = 0;
  v3 = *((_BYTE *)this + 68);
  if ( !*((_BYTE *)this + 68) )
    v2 = 1;
  result = Option::canModify(this);
  if ( result == 1 )
  {
    result = *((_BYTE *)v1 + 68);
    if ( result != (v3 ^ 1) )
    {
      if ( *((_DWORD *)v1 + 20) )
      {
        v5 = 0;
        if ( !v3 )
          v5 = 1;
        v2 = (*((int (__fastcall **)(_DWORD, _DWORD))v1 + 21))((char *)v1 + 72, v5);
      }
      *((_BYTE *)v1 + 68) = v2;
      result = j_j_j__ZN6Option24notifyOptionValueChangedEv(v1);
    }
  }
  return result;
}


Option *__fastcall BoolOption::~BoolOption(BoolOption *this)
{
  Option *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26D9A34;
  v2 = (void (*)(void))*((_DWORD *)this + 20);
  if ( v2 )
    v2();
  return j_j_j__ZN6OptionD2Ev(v1);
}


int __fastcall BoolOption::reset(BoolOption *this)
{
  *((_BYTE *)this + 68) = *((_BYTE *)this + 69);
  return j_j_j__ZN6Option24notifyOptionValueChangedEv(this);
}
