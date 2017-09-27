

void __fastcall GameServerConnectProgressHandler::~GameServerConnectProgressHandler(GameServerConnectProgressHandler *this)
{
  GameServerConnectProgressHandler *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26D7604;
  v2 = (void (*)(void))*((_DWORD *)this + 11);
  if ( v2 )
    v2();
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall GameServerConnectProgressHandler::getTitleText(GameServerConnectProgressHandler *this, int a2)
{
  GameServerConnectProgressHandler::getTitleText(this, a2);
}


signed int __fastcall GameServerConnectProgressHandler::getLoadingState(GameServerConnectProgressHandler *this, MinecraftScreenModel *a2)
{
  int v2; // r1@1
  signed int result; // r0@2
  int v4; // r2@3
  unsigned int v5; // r2@9

  v2 = *((_DWORD *)this + 3);
  if ( (_BYTE)v2 )
  {
    result = 16;
  }
  else
    v4 = *((_DWORD *)this + 8);
    if ( (unsigned int)(v4 - 1) >= 2 )
    {
      if ( v4 )
      {
        if ( v4 == 3 )
        {
          v5 = *((_WORD *)this + 6);
          result = 16;
          if ( v5 < 0x100 )
            result = 0x40000000;
          if ( !(v2 & 0xFF0000) )
        }
        else
          result = 0;
      }
      else
        result = 16;
    }
    else
      result = 0x40000000;
  return result;
}


int __fastcall GameServerConnectProgressHandler::tick(GameServerConnectProgressHandler *this, MinecraftScreenModel *a2)
{
  GameServerConnectProgressHandler *v2; // r4@1
  MinecraftScreenModel *v3; // r8@1
  __int64 v4; // kr00_8@1
  unsigned int v5; // r5@1 OVERLAPPED
  unsigned int v6; // r6@1 OVERLAPPED
  signed __int64 v7; // r0@2
  signed __int64 v8; // r0@3
  signed int v9; // r5@3
  __int64 v10; // r2@3
  bool v11; // cf@3
  int v13; // [sp+0h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  sub_DA7B9C(&v13);
  v4 = *((_QWORD *)v2 + 2);
  *(_QWORD *)&v5 = *(_QWORD *)&v13;
  if ( MinecraftScreenModel::hasConnectionToRemoteServer(v3) == 1 )
  {
    LODWORD(v7) = 1;
    *((_BYTE *)v2 + 12) = 1;
  }
  else
    v8 = __PAIR__(v6, v5) - v4;
    v9 = 0;
    v7 = v8 / 1000000000;
    v10 = *((_QWORD *)v2 + 3);
    v11 = (unsigned int)v7 >= (unsigned int)v10;
    LODWORD(v7) = 0;
    if ( !v11 )
      LODWORD(v7) = 1;
    if ( SHIDWORD(v7) < SHIDWORD(v10) )
      v9 = 1;
    if ( HIDWORD(v7) == HIDWORD(v10) )
      v9 = v7;
    if ( !v9 )
      LODWORD(v7) = (*(int (__fastcall **)(GameServerConnectProgressHandler *, MinecraftScreenModel *))(*(_DWORD *)v2 + 20))(
                      v2,
                      v3);
  return v7;
}


void __fastcall GameServerConnectProgressHandler::getTitleText(GameServerConnectProgressHandler *this, int a2)
{
  int *v2; // r4@1
  void *v3; // r0@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+8h] [bp-30h]@12
  int v7; // [sp+10h] [bp-28h]@7
  int v8; // [sp+18h] [bp-20h]@17
  int v9; // [sp+20h] [bp-18h]@2

  v2 = (int *)this;
  switch ( *(_DWORD *)(a2 + 32) )
  {
    case 0:
      sub_DA7364((void **)&v9, "progressScreen.title.connectingLocal");
      I18n::get(v2, (int **)&v9);
      v3 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v9 - 4);
        if ( !&pthread_create )
          goto LABEL_24;
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 - 1, v4) );
        goto LABEL_25;
      }
      break;
    case 2:
      sub_DA7364((void **)&v7, "progressScreen.title.connectingExternal");
      I18n::get(v2, (int **)&v7);
      v3 = (void *)(v7 - 12);
      if ( (int *)(v7 - 12) != &dword_28898C0 )
        v4 = (unsigned int *)(v7 - 4);
    case 3:
      sub_DA7364((void **)&v6, "progressScreen.title.connectingRealms");
      I18n::get(v2, (int **)&v6);
      v3 = (void *)(v6 - 12);
      if ( (int *)(v6 - 12) != &dword_28898C0 )
        v4 = (unsigned int *)(v6 - 4);
    case 1:
      sub_DA7364((void **)&v8, "progressScreen.title.connectingLAN");
      I18n::get(v2, (int **)&v8);
      v3 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
        v4 = (unsigned int *)(v8 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
LABEL_24:
          v5 = (*v4)--;
LABEL_25:
        if ( v5 <= 0 )
          j_j_j_j_j__ZdlPv_9(v3);
    default:
      sub_DA73B4((int *)this, (int *)&Util::EMPTY_STRING);
  }
}


void __fastcall GameServerConnectProgressHandler::~GameServerConnectProgressHandler(GameServerConnectProgressHandler *this)
{
  GameServerConnectProgressHandler::~GameServerConnectProgressHandler(this);
}


int __fastcall GameServerConnectProgressHandler::GameServerConnectProgressHandler(int a1, int a2, int a3, char a4)
{
  int v4; // r4@1
  int v5; // r10@1
  int v6; // r6@1
  int v7; // r7@1
  void (__fastcall *v8)(int, int, signed int); // r3@1
  int v10; // [sp+0h] [bp-28h]@5

  v4 = a1;
  *(_DWORD *)(a1 + 4) = 1;
  v5 = a2;
  v6 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = &off_26D7604;
  *(_BYTE *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 13) = a4;
  *(_BYTE *)(a1 + 14) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v7 = a1 + 16;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 16) = a2;
  *(_DWORD *)(v7 + 28) = 0;
  v8 = *(void (__fastcall **)(int, int, signed int))(a3 + 8);
  if ( v8 )
  {
    v8(a1 + 36, a3, 2);
    *(_DWORD *)(v4 + 48) = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v4 + 44) = *(_DWORD *)(v6 + 8);
  }
  *(_BYTE *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 8) = 1;
  if ( !v5 )
    *(_BYTE *)(v4 + 12) = 1;
  sub_DA7B9C(&v10);
  *(_QWORD *)v7 = *(_QWORD *)&v10;
  *(_DWORD *)(v4 + 24) = 90;
  *(_DWORD *)(v4 + 28) = 0;
  return v4;
}


GameServerConnectProgressHandler *__fastcall GameServerConnectProgressHandler::~GameServerConnectProgressHandler(GameServerConnectProgressHandler *this)
{
  GameServerConnectProgressHandler *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26D7604;
  v2 = (void (*)(void))*((_DWORD *)this + 11);
  if ( v2 )
    v2();
  return v1;
}


signed int __fastcall GameServerConnectProgressHandler::onStart(GameServerConnectProgressHandler *this, MinecraftScreenModel *a2)
{
  GameServerConnectProgressHandler *v2; // r4@1
  signed int result; // r0@2

  v2 = this;
  if ( !*((_DWORD *)this + 11) )
    sub_DA7654();
  (*((void (__fastcall **)(_DWORD))this + 12))((char *)this + 36);
  result = 1;
  *((_BYTE *)v2 + 14) = 1;
  return result;
}
