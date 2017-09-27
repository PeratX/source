

int __fastcall SplitscreenJoinListener::registerInputHandlers(SplitscreenJoinListener *this, InputHandler *a2)
{
  SplitscreenJoinListener *v2; // r5@1
  InputHandler *v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1
  int result; // r0@1
  _DWORD *v7; // [sp+0h] [bp-20h]@1
  __int64 v8; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(4u);
  LODWORD(v5) = sub_E2A09C;
  *v4 = v2;
  HIDWORD(v5) = sub_E2A094;
  v7 = v4;
  v8 = v5;
  result = InputHandler::registerAddClientHandler((int)v3, (int)&v7);
  if ( (_DWORD)v8 )
    result = ((int (__cdecl *)(_DWORD **))v8)(&v7);
  return result;
}


signed int __fastcall SplitscreenJoinListener::_handleConfirmedAddClientRequest(SplitscreenJoinListener *this, MinecraftGame *a2, int a3)
{
  SplitscreenJoinListener *v3; // r4@1
  signed int result; // r0@1

  v3 = this;
  result = MinecraftGame::addSubClientInstanceAndAssociateToUser(__PAIR__(a3, (unsigned int)a2));
  if ( result == 1 )
  {
    result = 0;
    *(_DWORD *)v3 = 0;
    *((_QWORD *)v3 + 1) = 0x8000000000000000LL;
  }
  return result;
}


void __fastcall SplitscreenJoinListener::_handleAddClientRequest(SplitscreenJoinListener *this, MinecraftGame *a2, int a3, int a4)
{
  MinecraftGame *v4; // r6@1
  SplitscreenJoinListener *v5; // r4@1
  int v6; // r8@1
  int v7; // r5@1
  ClientInstance *v8; // r0@1
  ClientInstance *v9; // r7@1
  NetworkHandler *v10; // r0@1
  int v11; // r0@1
  int v12; // r0@1
  int v13; // r4@2
  void *v14; // r0@2
  void *v15; // r0@3
  unsigned int *v16; // r2@4
  signed int v17; // r1@6
  int v18; // r0@9
  bool v19; // zf@10
  signed __int64 v20; // r0@15
  __int64 v21; // r0@16
  unsigned int *v22; // r2@19
  signed int v23; // r1@21
  int v24; // [sp+Ch] [bp-2Ch]@2
  int v25; // [sp+14h] [bp-24h]@2
  int v26; // [sp+18h] [bp-20h]@16
  int v27; // [sp+1Ch] [bp-1Ch]@16

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(a2);
  v9 = v8;
  v10 = (NetworkHandler *)ClientInstance::getClientNetworkSystem(v8);
  v11 = NetworkHandler::getConnector(v10);
  v12 = (*(int (**)(void))(*(_DWORD *)v11 + 32))();
  if ( ThirdPartyInfo::isValid((ThirdPartyInfo *)(v12 + 20)) == 1 )
  {
    v13 = ClientInstance::getToastManager(v9);
    sub_119C884((void **)&v25, "splitscreen.unavailable.toastHeader");
    sub_119C884((void **)&v24, "splitscreen.unavailable.toastMessage");
    ToastManager::pushToast(v13, 6, &v25, &v24, (int *)&Util::EMPTY_STRING);
    v14 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
    {
      v22 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    }
    v15 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v25 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    return;
  }
  if ( MinecraftGame::canAddSplitscreenSubClient(v4, v7) != 1 )
  v18 = *(_DWORD *)v5;
  if ( !*(_DWORD *)v5 )
    *(_DWORD *)v5 = 1;
    sub_119D2DC(&v26);
    HIDWORD(v21) = v27;
    LODWORD(v21) = v26 + 705032704;
    v20 = v21 + 5000000000LL;
    goto LABEL_17;
  v19 = v18 == 2;
  if ( v18 == 2 )
    v19 = v6 == 1;
  if ( v19 && MinecraftGame::addSubClientInstanceAndAssociateToUser(__PAIR__(v7, (unsigned int)v4)) == 1 )
    v20 = 0x8000000000000000LL;
    *(_DWORD *)v5 = 0;
LABEL_17:
    *((_QWORD *)v5 + 1) = v20;
}


signed int __fastcall SplitscreenJoinListener::isWaitingForSplitscreenJoinConfirmation(SplitscreenJoinListener *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = *(_DWORD *)this - 1;
  result = 0;
  if ( v1 < 2 )
    result = 1;
  return result;
}


SplitscreenJoinListener *__fastcall SplitscreenJoinListener::tick(SplitscreenJoinListener *this, int a2)
{
  SplitscreenJoinListener *v2; // r4@1
  SplitscreenJoinListener *result; // r0@1
  int v4; // r1@7
  signed int v5; // r2@7
  bool v6; // zf@9
  bool v7; // nf@9
  unsigned __int8 v8; // vf@9
  signed int v9; // r1@9
  unsigned int v10; // [sp+0h] [bp-10h]@7
  int v11; // [sp+4h] [bp-Ch]@9

  v2 = this;
  result = *(SplitscreenJoinListener **)this;
  if ( a2 )
  {
    if ( result == (SplitscreenJoinListener *)2 )
    {
      sub_119D2DC(&v10);
      result = (SplitscreenJoinListener *)((char *)v2 + 8);
      v4 = *((_DWORD *)v2 + 3);
      v5 = 0;
      if ( *((_DWORD *)v2 + 2) >= v10 )
        v5 = 1;
      v8 = __OFSUB__(v4, v11);
      v6 = v4 == v11;
      v7 = v4 - v11 < 0;
      v9 = 0;
      if ( !(v7 ^ v8) )
        v9 = 1;
      if ( v6 )
        v9 = v5;
      if ( !v9 )
      {
        *(_DWORD *)v2 = 0;
        *(_DWORD *)result = 0;
        *((_DWORD *)v2 + 3) = 2147483648;
      }
    }
    else if ( result == (SplitscreenJoinListener *)1 )
      result = (SplitscreenJoinListener *)2;
      *(_DWORD *)v2 = 2;
  }
  else if ( result )
    result = 0;
    *(_DWORD *)v2 = 0;
    *((_QWORD *)v2 + 1) = 0x8000000000000000LL;
  return result;
}


signed __int64 __fastcall SplitscreenJoinListener::_handleInitialAddClientRequest(SplitscreenJoinListener *this, MinecraftGame *a2, int a3)
{
  SplitscreenJoinListener *v3; // r4@1
  __int64 v4; // r0@1
  signed __int64 result; // r0@1
  int v6; // [sp+0h] [bp-10h]@1
  int v7; // [sp+4h] [bp-Ch]@1

  v3 = this;
  *(_DWORD *)this = 1;
  sub_119D2DC(&v6);
  HIDWORD(v4) = v7;
  LODWORD(v4) = v6 + 705032704;
  result = v4 + 5000000000LL;
  *((_QWORD *)v3 + 1) = result;
  return result;
}


int __fastcall SplitscreenJoinListener::_resetJoinTrackingState(int result)
{
  __int64 v1; // r1@1

  LODWORD(v1) = 0;
  HIDWORD(v1) = 2147483648;
  *(_DWORD *)result = 0;
  *(_QWORD *)(result + 8) = v1;
  return result;
}


int __fastcall SplitscreenJoinListener::SplitscreenJoinListener(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


void __fastcall SplitscreenJoinListener::_handleAddClientRequest(SplitscreenJoinListener *this, MinecraftGame *a2, int a3, int a4)
{
  SplitscreenJoinListener::_handleAddClientRequest(this, a2, a3, a4);
}


signed int __fastcall SplitscreenJoinListener::SplitscreenJoinTracker::isExpired(SplitscreenJoinListener::SplitscreenJoinTracker *this)
{
  SplitscreenJoinListener::SplitscreenJoinTracker *v1; // r4@1
  int v2; // r2@1 OVERLAPPED
  signed int result; // r0@1
  unsigned int v4; // r1@1
  bool v5; // cf@1
  signed int v6; // r1@1
  unsigned int v7; // [sp+0h] [bp-10h]@1
  int v8; // [sp+4h] [bp-Ch]@3

  v1 = this;
  sub_119D2DC(&v7);
  *(_QWORD *)(&v2 - 1) = *((_QWORD *)v1 + 1);
  result = 0;
  v5 = v4 >= v7;
  v6 = 0;
  if ( !v5 )
    v6 = 1;
  if ( v2 < v8 )
    result = 1;
  if ( v2 == v8 )
    result = v6;
  return result;
}
