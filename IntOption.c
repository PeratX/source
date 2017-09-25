

int __fastcall IntOption::IntOption(int a1, unsigned int a2, unsigned int a3, int a4, int *a5, int *a6, int a7, __int64 *a8, char a9)
{
  int v9; // r4@1
  __int64 v10; // kr00_8@1
  _DWORD *v11; // r5@2
  _DWORD *v12; // r2@3
  _DWORD *v13; // r0@3
  int v14; // r7@4
  _DWORD *v15; // r0@7
  int v16; // r3@13
  char *v17; // r5@16
  unsigned int v18; // r6@16
  __int64 v19; // kr08_8@19
  int v20; // r6@19

  v9 = a1;
  Option::Option(a1, a2, a3, a4, a5, a6, 5);
  *(_DWORD *)v9 = &off_26D9A6C;
  v10 = *a8;
  if ( (_DWORD)v10 == HIDWORD(v10) )
  {
    *(_DWORD *)(v9 + 68) = *(_DWORD *)v10;
    v15 = (_DWORD *)v10;
    goto LABEL_16;
  }
  v11 = (_DWORD *)(v10 + 4);
  if ( (_DWORD)v10 + 4 == HIDWORD(v10) )
LABEL_11:
    if ( v11 != (_DWORD *)HIDWORD(v10) )
    {
      v15 = (_DWORD *)v10;
      do
      {
        v16 = (int)(v11 + 1);
        if ( *v11 < *v15 )
          v15 = v11;
        ++v11;
      }
      while ( HIDWORD(v10) != v16 );
    }
  v12 = (_DWORD *)(v10 + 4);
  v13 = (_DWORD *)v10;
  do
    v14 = (int)(v12 + 1);
    if ( *v13 < *v12 )
      v13 = v12;
    ++v12;
  while ( HIDWORD(v10) != v14 );
  *(_DWORD *)(v9 + 68) = *v13;
  v15 = (_DWORD *)v10;
  if ( (_DWORD)v10 != HIDWORD(v10) )
    goto LABEL_11;
LABEL_16:
  *(_DWORD *)(v9 + 72) = *v15;
  *(_DWORD *)(v9 + 76) = a7;
  v17 = 0;
  *(_DWORD *)(v9 + 80) = a7;
  v18 = (HIDWORD(v10) - (signed int)v10) >> 2;
  *(_BYTE *)(v9 + 84) = a9;
  *(_DWORD *)(v9 + 88) = 0;
  *(_DWORD *)(v9 + 92) = 0;
  *(_DWORD *)(v9 + 96) = 0;
  if ( v18 )
    if ( v18 >= 0x40000000 )
      sub_119C874();
    v17 = (char *)operator new(HIDWORD(v10) - v10);
  *(_DWORD *)(v9 + 88) = v17;
  *(_DWORD *)(v9 + 92) = v17;
  *(_DWORD *)(v9 + 96) = &v17[4 * v18];
  v19 = *a8;
  v20 = (HIDWORD(v19) - (signed int)v19) >> 2;
  if ( 0 != v20 )
    _aeabi_memmove4(v17, v19);
  *(_DWORD *)(v9 + 92) = &v17[4 * v20];
  *(_DWORD *)(v9 + 108) = 0;
  return v9;
}


_DWORD *__fastcall IntOption::save(int a1, int a2)
{
  Option *v2; // r5@1
  int v3; // r4@1
  int v4; // r2@1

  v2 = (Option *)a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 76);
  if ( *(_DWORD *)(a1 + 108) )
    v4 = (*(int (__fastcall **)(int, _DWORD))(a1 + 112))(a1 + 100, *(_DWORD *)(a1 + 76));
  return j_j_j__ZN6Option5_saveIiEEvRSt6vectorIN12PropertyFile8PropertyESaIS3_EET_(v2, v3, v4);
}


int __fastcall IntOption::setCoerceSaveValueCallback(int a1, int a2)
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
  v9 = v4 + 100;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 100);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 108);
  v10 = v13;
  *(_DWORD *)(v4 + 108) = v8;
  v14 = *(_DWORD *)(v4 + 112);
  *(_DWORD *)(v4 + 112) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall IntOption::set(IntOption *this, int a2)
{
  IntOption *v2; // r4@1
  int result; // r0@1

  v2 = this;
  result = *((_DWORD *)this + 19);
  if ( result != a2 )
  {
    *((_DWORD *)v2 + 19) = IntOption::_validate(v2, a2);
    result = j_j_j__ZN6Option24notifyOptionValueChangedEv(v2);
  }
  return result;
}


signed int __fastcall IntOption::load(int a1, const void **a2)
{
  int v2; // r4@1
  signed int result; // r0@1

  v2 = a1;
  result = Option::read(a2, (_DWORD *)(a1 + 76));
  if ( result == 1 )
  {
    *(_DWORD *)(v2 + 76) = IntOption::_validate((IntOption *)v2, *(_DWORD *)(v2 + 76));
    result = j_j_j__ZN6Option24notifyOptionValueChangedEv((Option *)v2);
  }
  return result;
}


char *__fastcall IntOption::getValues(IntOption *this)
{
  return (char *)this + 88;
}


int __fastcall IntOption::_validate(IntOption *this, int a2)
{
  __int64 v2; // kr00_8@2
  int result; // r0@3
  __int64 v4; // kr08_8@3
  int v5; // r3@8
  int v6; // r0@8
  int v7; // r2@9
  bool v8; // zf@10
  _DWORD *v9; // r0@10
  int v10; // r4@13
  bool v11; // zf@13
  int v12; // r0@18
  int *v13; // lr@29
  int v14; // r2@30
  int v15; // r4@32
  int v16; // t1@32
  int v17; // r3@32

  if ( !*((_BYTE *)this + 84) )
    return a2;
  v2 = *((_QWORD *)this + 11);
  if ( HIDWORD(v2) == (_DWORD)v2 )
  {
    v4 = *(_QWORD *)((char *)this + 68);
    result = *(_QWORD *)((char *)this + 68) >> 32;
    if ( result < a2 )
      result = a2;
    if ( (signed int)v4 < a2 )
      result = v4;
    return result;
  }
  v5 = v2;
  v6 = (HIDWORD(v2) - (signed int)v2) >> 4;
  if ( v6 >= 1 )
    v7 = v6 + 1;
    v5 = v2;
    do
    {
      v8 = *(_DWORD *)v5 == a2;
      v9 = (_DWORD *)v5;
      if ( *(_DWORD *)v5 != a2 )
      {
        v9 = (_DWORD *)(v5 + 4);
        v8 = *(_DWORD *)(v5 + 4) == a2;
      }
      if ( v8 )
        goto LABEL_27;
      v9 = (_DWORD *)(v5 + 8);
      v10 = *(_DWORD *)(v5 + 8);
      v11 = v10 == a2;
      if ( v10 != a2 )
        v9 = (_DWORD *)(v5 + 12);
        v11 = *(_DWORD *)(v5 + 12) == a2;
      if ( v11 )
      --v7;
      v5 += 16;
    }
    while ( v7 > 1 );
  if ( 1 == (HIDWORD(v2) - v5) >> 2 )
    v9 = (_DWORD *)v5;
    goto LABEL_26;
  v12 = (HIDWORD(v2) - v5) >> 2;
  if ( v12 == 2 )
  else
    if ( v12 != 3 )
      goto LABEL_29;
    if ( *(_DWORD *)v5 == a2 )
      goto LABEL_27;
    v9 = (_DWORD *)(v5 + 4);
  if ( *v9 != a2 )
    ++v9;
LABEL_26:
    if ( *v9 != a2 )
LABEL_27:
  if ( v9 != (_DWORD *)HIDWORD(v2) )
LABEL_29:
  v13 = (int *)(v2 + 4);
  result = *(_DWORD *)v2;
  if ( (_DWORD)v2 + 4 != HIDWORD(v2) )
    v14 = a2 - result;
    if ( a2 - result < 0 )
      v14 = -v14;
      v16 = *v13;
      ++v13;
      v15 = v16;
      v17 = a2 - v16;
      if ( a2 - v16 < 0 )
        v17 = -v17;
      if ( v17 < v14 )
        result = v15;
        v14 = v17;
    while ( HIDWORD(v2) != (_DWORD)v2 );
  return result;
}


Option *__fastcall IntOption::~IntOption(IntOption *this)
{
  IntOption *v1; // r4@1
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
  return j_j_j__ZN6OptionD2Ev(v1);
}


int __fastcall IntOption::IntOption(int a1, unsigned int a2, unsigned int a3, int a4, int *a5, int *a6, int a7, char a8, int a9, int a10)
{
  int result; // r0@1

  result = Option::Option(a1, a2, a3, a4, a5, a6, 5);
  *(_DWORD *)result = &off_26D9A6C;
  *(_DWORD *)(result + 68) = a10;
  *(_DWORD *)(result + 72) = a9;
  *(_DWORD *)(result + 76) = a7;
  *(_BYTE *)(result + 84) = a8;
  *(_DWORD *)(result + 108) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_DWORD *)(result + 92) = 0;
  *(_DWORD *)(result + 96) = 0;
  return result;
}


int __fastcall IntOption::reset(IntOption *this)
{
  *((_DWORD *)this + 19) = *((_DWORD *)this + 20);
  return j_j_j__ZN6Option24notifyOptionValueChangedEv(this);
}


void __fastcall IntOption::~IntOption(IntOption *this)
{
  IntOption *v1; // r4@1
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


void __fastcall IntOption::~IntOption(IntOption *this)
{
  IntOption::~IntOption(this);
}
