

Json::Value *__fastcall NpcCommandAction::toJson(NpcCommandAction *this, int a2)
{
  int v2; // r4@1
  int i; // r6@1
  int v4; // r11@1
  int v5; // r5@2
  int v6; // r8@2
  NpcAction *v8; // [sp+4h] [bp-6Ch]@1
  char v9; // [sp+8h] [bp-68h]@2
  char v10; // [sp+18h] [bp-58h]@2
  char v11; // [sp+28h] [bp-48h]@1
  char v12; // [sp+38h] [bp-38h]@1

  v8 = this;
  v2 = a2;
  Json::Value::Value(&v12, 0);
  Json::Value::Value(&v11, 0);
  v4 = *(_QWORD *)(v2 + 16) >> 32;
  for ( i = *(_QWORD *)(v2 + 16); i != v4; i += 12 )
  {
    v5 = Json::Value::operator[]((Json::Value *)&v11, (const char **)&NpcCommandAction::COMMAND_LINE_KEY);
    Json::Value::Value((int)&v10, (const char **)i);
    Json::Value::operator=(v5, (const Json::Value *)&v10);
    Json::Value::~Value((Json::Value *)&v10);
    v6 = Json::Value::operator[]((Json::Value *)&v11, (const char **)&NpcCommandAction::COMMAND_VERSION_KEY);
    Json::Value::Value((Json::Value *)&v9, *(_DWORD *)(i + 8));
    Json::Value::operator=(v6, (const Json::Value *)&v9);
    Json::Value::~Value((Json::Value *)&v9);
    Json::Value::append((Json::Value *)&v12, (const Json::Value *)&v11);
  }
  NpcAction::toJsonBase(v8, (Json::Value *)v2, (const Json::Value *)&v12);
  Json::Value::~Value((Json::Value *)&v11);
  return Json::Value::~Value((Json::Value *)&v12);
}


char *__fastcall NpcCommandAction::getCommands(NpcCommandAction *this)
{
  return (char *)this + 16;
}


NpcCommandAction::SavedCommand *__fastcall NpcCommandAction::SavedCommand::~SavedCommand(NpcCommandAction::SavedCommand *this)
{
  NpcCommandAction::SavedCommand *v1; // r4@1
  int v2; // r0@1
  int *v3; // r0@3
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 1) = 0;
  v3 = (int *)(*(_DWORD *)v1 - 12);
  if ( v3 != &dword_28898C0 )
  {
    v5 = (unsigned int *)(*(_DWORD *)v1 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


void __fastcall NpcCommandAction::setCommands(int a1, int a2)
{
  NpcCommandAction::setCommands(a1, a2);
}


NpcCommandAction *__fastcall NpcCommandAction::~NpcCommandAction(NpcCommandAction *this)
{
  NpcCommandAction *v1; // r9@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r0@11
  int *v7; // r0@13
  int v8; // r1@18
  void *v9; // r0@18
  int v10; // r1@19
  void *v11; // r0@19
  unsigned int *v13; // r2@21
  signed int v14; // r1@23
  unsigned int *v15; // r2@25
  signed int v16; // r1@27

  v1 = this;
  *(_DWORD *)this = &off_26F0F6C;
  v3 = *((_QWORD *)this + 2) >> 32;
  v2 = *((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      v6 = *(_DWORD *)(v2 + 4);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 4) = 0;
      v7 = (int *)(*(_DWORD *)v2 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      v2 += 12;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete((void *)v2);
  *(_DWORD *)v1 = &off_26F0F3C;
  v8 = *((_DWORD *)v1 + 3);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 2);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v10 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v1;
}


int *__fastcall NpcCommandAction::SavedCommand::SavedCommand(NpcCommandAction::SavedCommand *this, const NpcCommandAction::SavedCommand *a2)
{
  int v2; // r4@1
  int *result; // r0@1

  v2 = *((_DWORD *)a2 + 2);
  result = sub_21E8AF4((int *)this, (int *)a2);
  result[1] = 0;
  result[2] = v2;
  return result;
}


int __fastcall NpcCommandAction::SavedCommand::SavedCommand(int result, int a2)
{
  int v2; // r2@1

  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)a2 = &unk_28898CC;
  v2 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(result + 4) = v2;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  return result;
}


void __fastcall NpcCommandAction::setCommands(int a1, int a2)
{
  void *v2; // r10@1
  void *v3; // r7@1
  int v4; // r2@1
  int v5; // r2@1
  void *v6; // r4@2
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // r0@11
  int *v10; // r0@13

  v2 = *(void **)(a1 + 16);
  *(_DWORD *)(a1 + 16) = 0;
  v3 = *(void **)(a1 + 20);
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  *(_DWORD *)a2 = 0;
  v4 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v4;
  v5 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v5;
  if ( v2 != v3 )
  {
    v6 = v2;
    do
    {
      v9 = *((_DWORD *)v6 + 1);
      if ( v9 )
        (*(void (**)(void))(*(_DWORD *)v9 + 4))();
      *((_DWORD *)v6 + 1) = 0;
      v10 = (int *)(*(_DWORD *)v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v7 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v6 = (char *)v6 + 12;
    }
    while ( v6 != v3 );
  }
  if ( v2 )
    operator delete(v2);
}


int __fastcall NpcCommandAction::NpcCommandAction(int result)
{
  *(_BYTE *)(result + 4) = 1;
  *(_BYTE *)(result + 5) = 1;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  *(_DWORD *)(result + 12) = &unk_28898CC;
  *(_DWORD *)result = &off_26F0F6C;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}


int *__fastcall NpcCommandAction::SavedCommand::SavedCommand(int *a1, int *a2, int *a3, int a4)
{
  int v4; // r4@1
  int *v5; // r5@1
  int *result; // r0@1
  int v7; // r1@1

  v4 = a4;
  v5 = a3;
  result = sub_21E8AF4(a1, a2);
  v7 = *v5;
  *v5 = 0;
  result[1] = v7;
  result[2] = v4;
  return result;
}


void __fastcall NpcCommandAction::~NpcCommandAction(NpcCommandAction *this)
{
  NpcCommandAction::~NpcCommandAction(this);
}


signed int __fastcall NpcCommandAction::fromJson(NpcCommandAction *this, const Json::Value *a2)
{
  Json::Value *v2; // r5@1
  NpcCommandAction *v3; // r10@1
  unsigned int v4; // r11@3
  Json::Value *v5; // r9@4
  Json::Value *v6; // r8@4
  int v7; // r0@6
  int v8; // r7@6
  __int64 v9; // r0@6
  int *v10; // r0@7
  void *v11; // r0@9
  void *v12; // r0@10
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  Json::Value *v17; // r7@29
  int v19; // [sp+Ch] [bp-3Ch]@6
  int v20; // [sp+10h] [bp-38h]@6
  int v21; // [sp+18h] [bp-30h]@6
  int v22; // [sp+1Ch] [bp-2Ch]@6

  v2 = a2;
  v3 = this;
  if ( Json::Value::isArray(a2) != 1 )
    return 0;
  if ( Json::Value::size(v2) )
  {
    v4 = 0;
    while ( 1 )
    {
      v17 = (Json::Value *)Json::Value::operator[]((int)v2, v4);
      if ( Json::Value::isObject(v17) != 1 )
        break;
      v5 = (Json::Value *)Json::Value::operator[]((int)v17, (const char **)&NpcCommandAction::COMMAND_LINE_KEY);
      v6 = (Json::Value *)Json::Value::operator[]((int)v17, (const char **)&NpcCommandAction::COMMAND_VERSION_KEY);
      if ( Json::Value::isString(v5) != 1 || Json::Value::isIntegral(v6) != 1 )
      sub_21E94B4((void **)&v21, (const char *)&unk_257BC67);
      Json::Value::asString(&v22, (int)v5, &v21);
      v20 = 0;
      v7 = Json::Value::asInt(v6, 0);
      v8 = v7;
      v19 = v7;
      v9 = *(_QWORD *)((char *)v3 + 20);
      if ( (_DWORD)v9 == HIDWORD(v9) )
      {
        j__ZNSt6vectorIN16NpcCommandAction12SavedCommandESaIS1_EE19_M_emplace_back_auxIJSsDniEEEvDpOT_(
          (unsigned __int64 *)v3 + 2,
          &v22,
          (int)&v20,
          &v19);
      }
      else
        v10 = sub_21E8AF4((int *)v9, &v22);
        v10[1] = 0;
        v10[2] = v8;
        *((_DWORD *)v3 + 5) += 12;
      v11 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v22 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      v12 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v21 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      if ( ++v4 >= Json::Value::size(v2) )
        return 1;
    }
  }
  return 1;
}


void __fastcall NpcCommandAction::~NpcCommandAction(NpcCommandAction *this)
{
  NpcCommandAction *v1; // r0@1

  v1 = NpcCommandAction::~NpcCommandAction(this);
  j_j_j__ZdlPv_6((void *)v1);
}
