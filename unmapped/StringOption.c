

int __fastcall StringOption::reset(StringOption *this)
{
  Option *v1; // r4@1

  v1 = this;
  EntityInteraction::setInteractText((int *)this + 17, (int *)this + 18);
  return j_j_j__ZN6Option24notifyOptionValueChangedEv(v1);
}


int __fastcall StringOption::set(int a1, const void **a2)
{
  int v2; // r4@1
  int *v3; // r6@1
  _DWORD *v4; // r0@1
  int *v5; // r5@1
  _DWORD *v6; // r1@1
  size_t v7; // r2@1
  int result; // r0@2
  void *v9; // r0@4
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  int v12; // [sp+0h] [bp-20h]@4

  v2 = a1;
  v3 = (int *)a2;
  v5 = (int *)(a1 + 68);
  v4 = *(_DWORD **)(a1 + 68);
  v6 = *a2;
  v7 = *(v4 - 3);
  if ( v7 != *(v6 - 3) || (result = memcmp(v4, v6, v7)) != 0 )
  {
    if ( *(_DWORD *)(v2 + 84) )
    {
      (*(void (__fastcall **)(int *, int, int *))(v2 + 88))(&v12, v2 + 76, v3);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v12);
      v9 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v12 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v9);
      }
    }
    else
      EntityInteraction::setInteractText(v5, v3);
    result = Option::notifyOptionValueChanged((Option *)v2);
  }
  return result;
}


int __fastcall StringOption::setCoerceValueCallback(int a1, int a2)
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
  v9 = v4 + 76;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 76);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 84);
  v10 = v13;
  *(_DWORD *)(v4 + 84) = v8;
  v14 = *(_DWORD *)(v4 + 88);
  *(_DWORD *)(v4 + 88) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall StringOption::StringOption(int a1, unsigned int a2, unsigned int a3, int a4, int *a5, int *a6, int *a7)
{
  int v7; // r4@1

  v7 = a1;
  Option::Option(a1, a2, a3, a4, a5, a6, 4);
  *(_DWORD *)v7 = &off_26D9AC0;
  sub_119C854((int *)(v7 + 68), a7);
  sub_119C854((int *)(v7 + 72), a7);
  *(_DWORD *)(v7 + 84) = 0;
  return v7;
}


void __fastcall StringOption::~StringOption(StringOption *this)
{
  StringOption *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v7; // r12@6
  signed int v8; // r1@8
  unsigned int *v9; // r12@10
  signed int v10; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26D9AC0;
  v2 = (void (*)(void))*((_DWORD *)this + 21);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 18);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v3 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = *((_DWORD *)v1 + 17);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v5 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  Option::~Option(v1);
  operator delete((void *)v1);
}


int __fastcall StringOption::load(int a1, int *a2)
{
  Option *v2; // r4@1

  v2 = (Option *)a1;
  EntityInteraction::setInteractText((int *)(a1 + 68), a2);
  return j_j_j__ZN6Option24notifyOptionValueChangedEv(v2);
}


char *__fastcall StringOption::getValue(StringOption *this)
{
  return (char *)this + 68;
}


void __fastcall StringOption::~StringOption(StringOption *this)
{
  StringOption::~StringOption(this);
}


void __fastcall StringOption::save(int a1, int a2)
{
  Option *v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = (Option *)a1;
  v3 = a2;
  sub_119C854(&v7, (int *)(a1 + 68));
  Option::_save<std::string>(v2, v3, &v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
}


void __fastcall StringOption::save(int a1, int a2)
{
  StringOption::save(a1, a2);
}


StringOption *__fastcall StringOption::~StringOption(StringOption *this)
{
  StringOption *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v8; // r12@6
  signed int v9; // r1@8
  unsigned int *v10; // r12@10
  signed int v11; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26D9AC0;
  v2 = (void (*)(void))*((_DWORD *)this + 21);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 18);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = *((_DWORD *)v1 + 17);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  Option::~Option(v1);
  return v1;
}
