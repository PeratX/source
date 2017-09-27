

void __fastcall CommandOutput::set<int>(int a1, const char *a2, int a3)
{
  CommandOutput::set<int>(a1, a2, a3);
}


void __fastcall CommandOutput::addToResultList(int a1, const char **a2, int a3)
{
  CommandOutput::addToResultList(a1, a2, a3);
}


void __fastcall CommandOutput::forceOutput(_DWORD *a1, int *a2, unsigned __int64 *a3)
{
  CommandOutput::forceOutput(a1, a2, a3);
}


int *__fastcall CommandOutput::getMessageParams(int a1, unsigned __int64 *a2)
{
  int v2; // r9@1
  unsigned __int64 *v3; // r6@1
  int *result; // r0@1
  int v5; // r4@1
  int i; // r5@1
  __int64 v7; // r0@3

  v2 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = a2;
  *(_DWORD *)(a1 + 8) = 0;
  result = (int *)std::vector<std::string,std::allocator<std::string>>::reserve(
                    a1,
                    (signed int)((*a2 >> 32) - *a2) >> 3);
  v5 = *v3 >> 32;
  for ( i = *v3; v5 != i; i += 8 )
  {
    result = *(int **)(i + 4);
    if ( result != (int *)-1 )
    {
      v7 = *(_QWORD *)(v2 + 4);
      if ( (_DWORD)v7 == HIDWORD(v7) )
      {
        result = (int *)std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
                          (unsigned __int64 *)v2,
                          (int *)i);
      }
      else
        result = sub_21E8AF4((int *)v7, (int *)i) + 1;
        *(_DWORD *)(v2 + 4) = result;
    }
  }
  return result;
}


void __fastcall CommandOutput::set<std::string>(int a1, const char *a2, int *a3)
{
  int *v3; // r4@1
  int v4; // r5@2
  int v5; // r4@2
  void *v6; // r0@2
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  int v12; // [sp+4h] [bp-34h]@2
  int v13; // [sp+Ch] [bp-2Ch]@2
  char v14; // [sp+10h] [bp-28h]@2

  v3 = a3;
  if ( *(_DWORD *)a1 == 4 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    sub_119C884((void **)&v13, a2);
    sub_119C854(&v12, v3);
    v5 = Json::Value::operator[]((Json::Value *)(v4 + 8), (const char **)&v13);
    Json::Value::Value((int)&v14, (const char **)&v12);
    Json::Value::operator=(v5, (const Json::Value *)&v14);
    Json::Value::~Value((Json::Value *)&v14);
    v6 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v12 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
    v7 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v13 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
  }
}


signed int __fastcall CommandOutput::wantsData(CommandOutput *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *(_DWORD *)this;
  result = 0;
  if ( v1 == 4 )
    result = 1;
  return result;
}


void __fastcall CommandOutput::set<Vec3>(int a1, const char *a2, int a3, int a4, int a5)
{
  CommandOutput::set<Vec3>(a1, a2, a3, a4, a5);
}


void __fastcall CommandOutput::set<Vec3>(int a1, const char *a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r4@1
  int v7; // r6@2
  void *v8; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  int v11; // [sp+Ch] [bp-1Ch]@2

  v5 = a3;
  v6 = a4;
  if ( *(_DWORD *)a1 == 4 )
  {
    v7 = *(_DWORD *)(a1 + 4);
    sub_21E94B4((void **)&v11, a2);
    j_CommandPropertyBag::set(v7, (const char **)&v11, v5, v6, a5);
    v8 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
  }
}


int __fastcall CommandOutput::getType(CommandOutput *this)
{
  return *(_DWORD *)this;
}


void __fastcall CommandOutput::error(_DWORD *a1, int *a2, unsigned __int64 *a3)
{
  CommandOutput::error(a1, a2, a3);
}


Json::Value *__fastcall CommandOutput::addToResultList(Json::Value *result, const char **a2, const char **a3)
{
  if ( *(_DWORD *)result == 4 )
    result = j_j_j__ZN18CommandPropertyBag15addToResultListERKSsS1_(*((_DWORD *)result + 1), a2, a3);
  return result;
}


void __fastcall CommandOutput::forceOutput(_DWORD *a1, int *a2, unsigned __int64 *a3)
{
  if ( *a1 )
    j_j_j__ZN13CommandOutput10addMessageERKSsRKSt6vectorI22CommandOutputParameterSaIS3_EE24CommandOutputMessageType(
      (int)a1,
      a2,
      a3,
      0);
}


void __fastcall CommandOutput::set<float>(int a1, const char *a2, int a3)
{
  int v4; // r5@2
  int v5; // r5@2
  int v11; // r1@2
  void *v12; // r0@2
  unsigned int *v13; // r2@4
  signed int v14; // r1@6
  int v15; // [sp+8h] [bp-28h]@2
  char v16; // [sp+10h] [bp-20h]@2

  _R4 = a3;
  if ( *(_DWORD *)a1 == 4 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    sub_21E94B4((void **)&v15, a2);
    v5 = j_Json::Value::operator[]((Json::Value *)(v4 + 8), (const char **)&v15);
    __asm
    {
      VMOV            S0, R4
      VCVT.F64.F32    D0, S0
      VMOV            R2, R3, D0
    }
    j_Json::Value::Value((Json::Value *)&v16, v11, _R2);
    j_Json::Value::operator=(v5, (const Json::Value *)&v16);
    j_Json::Value::~Value((Json::Value *)&v16);
    v12 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
  }
}


void __fastcall CommandOutput::success(int a1, int *a2, unsigned __int64 *a3)
{
  CommandOutput::success(a1, a2, a3);
}


void __fastcall CommandOutput::success(int a1, int *a2, unsigned __int64 *a3)
{
  int v3; // r3@1
  int v4; // lr@1
  signed int v5; // r12@1
  int v6; // r4@2

  v4 = *a3 >> 32;
  v3 = *a3;
  v5 = 0;
  if ( v3 == v4 )
    goto LABEL_11;
  do
  {
    v6 = *(_DWORD *)(v3 + 4);
    v3 += 8;
    v5 += v6;
  }
  while ( v4 != v3 );
  if ( v5 != -1 )
LABEL_11:
    if ( v5 < 1 )
      v5 = 1;
    *(_DWORD *)(a1 + 20) += v5;
  if ( (*(_DWORD *)a1 | 2) != 2 )
    j_j_j__ZN13CommandOutput10addMessageERKSsRKSt6vectorI22CommandOutputParameterSaIS3_EE24CommandOutputMessageType(
      a1,
      a2,
      a3,
      0);
}


void __fastcall CommandOutput::set<BlockPos>(int a1, const char *a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int v8; // [sp+4h] [bp-1Ch]@2

  v3 = a3;
  if ( *(_DWORD *)a1 == 4 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    sub_21E94B4((void **)&v8, a2);
    j_CommandPropertyBag::set(v4, (const char **)&v8, v3);
    v5 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v8 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    }
  }
}


int __fastcall CommandOutput::success(int result)
{
  ++*(_DWORD *)(result + 20);
  return result;
}


int __fastcall CommandOutput::load(int a1, int a2, int a3, int a4, int *a5)
{
  int v5; // r12@1
  int v6; // r0@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r1@1
  int result; // r0@1

  v5 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 20) = a3;
  v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v5 + 8) = *(_DWORD *)a4;
  *(_DWORD *)a4 = v6;
  v7 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(a4 + 4) = v7;
  v8 = *(_DWORD *)(v5 + 16);
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(a4 + 8) = v8;
  v9 = *a5;
  *a5 = 0;
  result = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = v9;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


char *__fastcall CommandOutput::getMessages(CommandOutput *this)
{
  return (char *)this + 8;
}


void __fastcall CommandOutput::set<bool>(int a1, const char *a2, bool a3)
{
  bool v3; // r4@1
  int v4; // r5@2
  int v5; // r5@2
  void *v6; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+8h] [bp-28h]@2
  char v10; // [sp+10h] [bp-20h]@2

  v3 = a3;
  if ( *(_DWORD *)a1 == 4 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    sub_119C884((void **)&v9, a2);
    v5 = Json::Value::operator[]((Json::Value *)(v4 + 8), (const char **)&v9);
    Json::Value::Value((Json::Value *)&v10, v3);
    Json::Value::operator=(v5, (const Json::Value *)&v10);
    Json::Value::~Value((Json::Value *)&v10);
    v6 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v9 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
  }
}


void __fastcall CommandOutput::set<int>(int a1, const char *a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@2
  int v5; // r5@2
  void *v6; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+8h] [bp-28h]@2
  char v10; // [sp+10h] [bp-20h]@2

  v3 = a3;
  if ( *(_DWORD *)a1 == 4 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    sub_119C884((void **)&v9, a2);
    v5 = Json::Value::operator[]((Json::Value *)(v4 + 8), (const char **)&v9);
    Json::Value::Value((Json::Value *)&v10, v3);
    Json::Value::operator=(v5, (const Json::Value *)&v10);
    Json::Value::~Value((Json::Value *)&v10);
    v6 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v9 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
  }
}


signed int __fastcall CommandOutput::empty(CommandOutput *this)
{
  CommandOutput *v1; // r1@1
  signed int result; // r0@1

  v1 = this;
  result = 0;
  if ( (unsigned int)*((_QWORD *)v1 + 1) == *((_QWORD *)v1 + 1) >> 32 && *(_DWORD *)v1 != 4 )
    result = 1;
  return result;
}


int __fastcall CommandOutput::CommandOutput(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r1@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 )
    CommandPropertyBag::clone((CommandPropertyBag *)(a1 + 4), v4);
  else
    *(_DWORD *)(a1 + 4) = 0;
  std::vector<CommandOutputMessage,std::allocator<CommandOutputMessage>>::vector(v2 + 8, (unsigned __int64 *)(v3 + 8));
  *(_DWORD *)(v2 + 20) = *(_DWORD *)(v3 + 20);
  return v2;
}


void __fastcall CommandOutput::set<std::string>(int a1, const char *a2, int *a3)
{
  CommandOutput::set<std::string>(a1, a2, a3);
}


void __fastcall CommandOutput::set<BlockPos>(int a1, const char *a2, int a3)
{
  CommandOutput::set<BlockPos>(a1, a2, a3);
}


void __fastcall CommandOutput::set<bool>(int a1, const char *a2, bool a3)
{
  CommandOutput::set<bool>(a1, a2, a3);
}


int __fastcall CommandOutput::CommandOutput(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r7@1
  void *v4; // r6@2
  int v5; // r0@2

  v2 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = a1 + 4;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  if ( a2 == 4 )
  {
    v4 = operator new(0x20u);
    CommandPropertyBag::CommandPropertyBag((int)v4);
    v5 = *(_DWORD *)v3;
    *(_DWORD *)v3 = v4;
    if ( v5 )
      (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  }
  return v2;
}


void __fastcall CommandOutput::addToResultList(int a1, const char **a2, int a3)
{
  const char **v3; // r4@1
  int v4; // r5@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int v8; // [sp+4h] [bp-1Ch]@2

  v3 = a2;
  if ( *(_DWORD *)a1 == 4 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    getEntityName((const Entity *)&v8, a3);
    CommandPropertyBag::addToResultList(v4, v3, (const char **)&v8);
    v5 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v8 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    }
  }
}


void __fastcall CommandOutput::set<float>(int a1, const char *a2, int a3)
{
  CommandOutput::set<float>(a1, a2, a3);
}


void __fastcall CommandOutput::error(_DWORD *a1, int *a2, unsigned __int64 *a3)
{
  if ( *a1 )
    j_j_j__ZN13CommandOutput10addMessageERKSsRKSt6vectorI22CommandOutputParameterSaIS3_EE24CommandOutputMessageType(
      (int)a1,
      a2,
      a3,
      1);
}


void __fastcall CommandOutput::addMessage(int a1, int *a2, unsigned __int64 *a3, int a4)
{
  CommandOutput::addMessage(a1, a2, a3, a4);
}


void __fastcall CommandOutput::addMessage(int a1, int *a2, unsigned __int64 *a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  unsigned __int64 *v6; // r9@1
  int *v7; // r8@1
  _DWORD *v8; // r7@2
  int v9; // r4@2
  __int64 v10; // kr00_8@4
  _DWORD *v11; // r4@6
  _DWORD *v12; // r6@6
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  int *v15; // r0@16
  _DWORD *v16; // [sp+4h] [bp-34h]@4
  _DWORD *v17; // [sp+8h] [bp-30h]@5
  int v18; // [sp+Ch] [bp-2Ch]@5
  int v19; // [sp+10h] [bp-28h]@1

  v4 = a4;
  v5 = a1;
  v19 = a4;
  v6 = a3;
  v7 = a2;
  if ( *(_DWORD *)a1 == 1 )
  {
    v8 = (_DWORD *)(a1 + 12);
    v9 = *(_DWORD *)(a1 + 8);
    std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12));
    *(_DWORD *)(v5 + 12) = v9;
  }
  else
  CommandOutput::getMessageParams((int)&v16, v6);
  v10 = *(_QWORD *)(v5 + 12);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<CommandOutputMessage,std::allocator<CommandOutputMessage>>::_M_emplace_back_aux<CommandOutputMessageType &,std::string const&,std::vector<std::string,std::allocator<std::string>>>(
      (unsigned __int64 *)(v5 + 8),
      &v19,
      v7,
      (int)&v16);
    v11 = v17;
    v12 = v16;
    if ( v16 != v17 )
    {
      do
      {
        v15 = (int *)(*v12 - 12);
        if ( v15 != &dword_28898C0 )
        {
          v13 = (unsigned int *)(*v12 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          }
          else
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        }
        ++v12;
      }
      while ( v12 != v11 );
      v11 = v16;
    }
    if ( v11 )
      operator delete(v11);
    *(_DWORD *)v10 = v4;
    sub_21E8AF4((int *)(v10 + 4), v7);
    *(_DWORD *)(v10 + 8) = v16;
    v16 = 0;
    *(_DWORD *)(v10 + 12) = v17;
    v17 = 0;
    *(_DWORD *)(v10 + 16) = v18;
    v18 = 0;
    *v8 += 20;
}
