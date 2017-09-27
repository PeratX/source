

void __fastcall MessagingCommand::~MessagingCommand(MessagingCommand *this)
{
  MessagingCommand::~MessagingCommand(this);
}


void __fastcall MessagingCommand::~MessagingCommand(MessagingCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall MessagingCommand::MessagingCommand(Command *a1, char a2, char a3)
{
  char v3; // r4@1
  char v4; // r5@1
  int result; // r0@1

  v3 = a3;
  v4 = a2;
  result = j_Command::Command(a1);
  *(_DWORD *)result = &off_271A124;
  *(_BYTE *)(result + 18) = v4;
  *(_BYTE *)(result + 19) = v3;
  return result;
}


signed int __fastcall MessagingCommand::checkChatPermissions(MessagingCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  MessagingCommand *v3; // r6@1
  CommandOutput *v4; // r4@1
  unsigned int v5; // r0@1
  const CommandOrigin *v6; // r5@1
  void *v8; // r4@9
  void *v9; // r6@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  int *v12; // r0@19
  void *v13; // r0@24
  unsigned int *v14; // r2@25
  signed int v15; // r1@27
  void *v16; // r4@29
  void *v17; // r6@29
  unsigned int *v18; // r2@31
  signed int v19; // r1@33
  int *v20; // r0@39
  __int64 v21; // [sp+4h] [bp-4Ch]@29
  int v22; // [sp+Ch] [bp-44h]@29
  int v23; // [sp+14h] [bp-3Ch]@29
  __int64 v24; // [sp+18h] [bp-38h]@9
  int v25; // [sp+20h] [bp-30h]@9
  int v26; // [sp+28h] [bp-28h]@9

  v3 = this;
  v4 = a3;
  v5 = *((_WORD *)this + 9);
  v6 = a2;
  if ( (_BYTE)v5 )
  {
    if ( v5 < 0x100 )
      goto LABEL_7;
  }
  else if ( v5 < 0x100 )
    return 1;
  if ( !(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 52))(a2) )
    sub_21E94B4((void **)&v26, "permissions.chatmute");
    v24 = 0LL;
    v25 = 0;
    j_CommandOutput::error(v4, &v26, (unsigned __int64 *)&v24);
    v9 = (void *)HIDWORD(v24);
    v8 = (void *)v24;
    if ( (_DWORD)v24 != HIDWORD(v24) )
    {
      do
      {
        v12 = (int *)(*(_DWORD *)v8 - 12);
        if ( v12 != &dword_28898C0 )
        {
          v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
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
            j_j_j_j__ZdlPv_9(v12);
        }
        v8 = (char *)v8 + 8;
      }
      while ( v8 != v9 );
      v8 = (void *)v24;
    }
    if ( v8 )
      j_operator delete(v8);
    v13 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) == &dword_28898C0 )
      return 0;
    v14 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
      __dmb();
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      goto LABEL_51;
    goto LABEL_50;
  if ( !*((_BYTE *)v3 + 18) )
LABEL_7:
  if ( (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v6 + 48))(v6) )
  sub_21E94B4((void **)&v23, "permissions.chatmute");
  v21 = 0LL;
  v22 = 0;
  j_CommandOutput::error(v4, &v23, (unsigned __int64 *)&v21);
  v17 = (void *)HIDWORD(v21);
  v16 = (void *)v21;
  if ( (_DWORD)v21 != HIDWORD(v21) )
    do
      v20 = (int *)(*(_DWORD *)v16 - 12);
      if ( v20 != &dword_28898C0 )
        v18 = (unsigned int *)(*(_DWORD *)v16 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        else
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v16 = (char *)v16 + 8;
    while ( v16 != v17 );
    v16 = (void *)v21;
  if ( v16 )
    j_operator delete(v16);
  v13 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v23 - 4);
LABEL_50:
    v15 = (*v14)--;
LABEL_51:
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  return 0;
}
