

signed int __fastcall GameControllerManager::getControllerId(int a1, int a2)
{
  signed int result; // r0@2

  if ( *(_DWORD *)a2 )
    result = *(_DWORD *)(*(_DWORD *)a2 + 44);
  else
    result = -1;
  return result;
}


int __fastcall GameControllerManager::feedButton(int result, int a2, int a3, int a4, char a5)
{
  if ( *(_BYTE *)(result + 16) )
    result = GameController::_feedButton(*(_DWORD *)(*(_DWORD *)result + 8 * a2), a3, a4, a5, a2);
  return result;
}


int __fastcall GameControllerManager::feedTrigger(int result, int a2, int a3, float a4)
{
  if ( *(_BYTE *)(result + 16) )
    result = j_j_j__ZN14GameController12_feedTriggerEifi(*(GameController **)(*(_DWORD *)result + 8 * a2), a3, a4, a2);
  return result;
}


unsigned int *__fastcall GameControllerManager::getGameController(GameControllerManager *this, int a2, signed int a3)
{
  int v3; // r5@1
  int v4; // r10@1
  GameControllerManager *v5; // r8@1
  __int64 v6; // kr00_8@2
  unsigned int v7; // r1@2
  int v8; // r2@3
  unsigned int *result; // r0@5
  int v10; // r6@8
  int v11; // r9@9
  unsigned int *v12; // r1@10
  unsigned int v13; // r0@12
  unsigned int *v14; // r7@16
  unsigned int v15; // r0@18
  int v16; // r4@25
  void *v17; // r7@25
  _DWORD *v18; // r0@25
  int v19; // r1@25
  int v20; // r7@25
  unsigned int *v21; // r1@26
  unsigned int v22; // r0@28
  unsigned int *v23; // r4@32
  unsigned int v24; // r0@34
  int v25; // r0@39
  unsigned int v26; // r1@42
  int v27; // [sp+0h] [bp-28h]@7

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( a3 <= -1 )
  {
    result = 0;
    *(_DWORD *)v5 = 0;
    *((_DWORD *)v5 + 1) = 0;
  }
  else
    v6 = *(_QWORD *)a2;
    v7 = (HIDWORD(v6) - (signed int)v6) >> 3;
    if ( (signed int)v7 <= a3 )
    {
      v8 = a3 + 1;
      if ( v3 + 1 <= v7 )
      {
        if ( v3 + 1 < v7 )
        {
          v27 = v6 + 8 * v8;
          if ( HIDWORD(v6) != v27 )
          {
            v10 = v6 + 8 * v8;
            do
            {
              v11 = *(_DWORD *)(v10 + 4);
              if ( v11 )
              {
                v12 = (unsigned int *)(v11 + 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v13 = __ldrex(v12);
                  while ( __strex(v13 - 1, v12) );
                }
                else
                  v13 = (*v12)--;
                if ( v13 == 1 )
                  v14 = (unsigned int *)(v11 + 8);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v15 = __ldrex(v14);
                    while ( __strex(v15 - 1, v14) );
                  }
                  else
                    v15 = (*v14)--;
                  if ( v15 == 1 )
                    (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
              }
              v10 += 8;
            }
            while ( v10 != HIDWORD(v6) );
          }
          *(_DWORD *)(v4 + 4) = v27;
        }
      }
      else
        std::vector<std::shared_ptr<GameController>,std::allocator<std::shared_ptr<GameController>>>::_M_default_append(
          v4,
          v8 - v7);
      v16 = *(_DWORD *)v4;
      v17 = operator new(0x34u);
      GameController::GameController((int)v17, v3);
      v18 = operator new(0x14u);
      v18[1] = 1;
      v18[2] = 1;
      *v18 = &off_26E8804;
      v19 = v16 + 8 * v3;
      v18[4] = v17;
      *(_DWORD *)(v16 + 8 * v3) = v17;
      v20 = *(_DWORD *)(v19 + 4);
      *(_DWORD *)(v19 + 4) = v18;
      if ( v20 )
        v21 = (unsigned int *)(v20 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        else
          v22 = (*v21)--;
        if ( v22 == 1 )
          v23 = (unsigned int *)(v20 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          if ( &pthread_create )
            __dmb();
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
          else
            v24 = (*v23)--;
          if ( v24 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
    }
    v25 = *(_DWORD *)v4 + 8 * v3;
    *(_DWORD *)v5 = *(_DWORD *)v25;
    result = *(unsigned int **)(v25 + 4);
    *((_DWORD *)v5 + 1) = result;
    if ( result )
      result += 2;
      if ( &pthread_create )
        __dmb();
        do
          v26 = __ldrex(result);
        while ( __strex(v26 + 1, result) );
        ++*result;
  return result;
}


GameControllerManager *__fastcall GameControllerManager::~GameControllerManager(GameControllerManager *this)
{
  GameControllerManager *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11

  v1 = this;
  v3 = *(_QWORD *)this >> 32;
  v2 = *(_QWORD *)this;
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *(_DWORD *)v1;
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}


int __fastcall GameControllerManager::getGameControllersInUse(int a1, __int64 *a2)
{
  int v2; // r4@1
  int result; // r0@1
  __int64 i; // r6@1
  int v5; // r0@3
  unsigned int *v6; // r0@4
  unsigned int v7; // r1@6
  __int64 v8; // r0@9
  int v9; // r1@10
  unsigned int *v10; // r1@11
  unsigned int v11; // r0@13
  unsigned int *v12; // r2@19
  unsigned int v13; // r1@21
  int v14; // [sp+4h] [bp-24h]@3
  int v15; // [sp+8h] [bp-20h]@3

  v2 = a1;
  result = 0;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  for ( i = *a2; (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 8 )
  {
    result = *(_DWORD *)i;
    if ( *(_DWORD *)i )
    {
      v14 = *(_DWORD *)i;
      v5 = *(_DWORD *)(i + 4);
      v15 = v5;
      if ( v5 )
      {
        v6 = (unsigned int *)(v5 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 + 1, v6) );
        }
        else
          ++*v6;
      }
      v8 = *(_QWORD *)(v2 + 4);
      if ( (_DWORD)v8 == HIDWORD(v8) )
        std::vector<std::weak_ptr<GameController>,std::allocator<std::weak_ptr<GameController>>>::_M_emplace_back_aux<std::weak_ptr<GameController>>(
          (unsigned __int64 *)v2,
          (int)&v14);
      else
        *(_DWORD *)v8 = v14;
        HIDWORD(v8) = v15;
        *(_DWORD *)(v8 + 4) = v15;
        if ( HIDWORD(v8) )
          v10 = (unsigned int *)(v9 + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 + 1, v10) );
            LODWORD(v8) = *(_DWORD *)(v2 + 4);
          }
          else
            ++*v10;
        *(_DWORD *)(v2 + 4) = v8 + 8;
      result = v15;
      if ( v15 )
        v12 = (unsigned int *)(v15 + 8);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 == 1 )
          result = (*(int (**)(void))(*(_DWORD *)result + 12))();
    }
  }
  return result;
}


GameController *__fastcall GameControllerManager::getConnectedGameControllers(GameControllerManager *this, __int64 *a2)
{
  GameControllerManager *v2; // r4@1
  GameController *result; // r0@1
  __int64 i; // r6@1
  int v5; // r0@4
  unsigned int *v6; // r0@5
  unsigned int v7; // r1@7
  __int64 v8; // r0@10
  int v9; // r1@11
  unsigned int *v10; // r1@12
  unsigned int v11; // r0@14
  unsigned int *v12; // r2@20
  unsigned int v13; // r1@22
  int v14; // [sp+4h] [bp-24h]@4
  GameController *v15; // [sp+8h] [bp-20h]@4

  v2 = this;
  result = 0;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  for ( i = *a2; (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 8 )
  {
    result = *(GameController **)i;
    if ( *(_DWORD *)i )
    {
      result = (GameController *)GameController::isConnected(result);
      if ( result == (GameController *)1 )
      {
        v14 = *(_DWORD *)i;
        v5 = *(_DWORD *)(i + 4);
        v15 = (GameController *)v5;
        if ( v5 )
        {
          v6 = (unsigned int *)(v5 + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v7 = __ldrex(v6);
            while ( __strex(v7 + 1, v6) );
          }
          else
            ++*v6;
        }
        v8 = *(_QWORD *)((char *)v2 + 4);
        if ( (_DWORD)v8 == HIDWORD(v8) )
          std::vector<std::weak_ptr<GameController>,std::allocator<std::weak_ptr<GameController>>>::_M_emplace_back_aux<std::weak_ptr<GameController>>(
            (unsigned __int64 *)v2,
            (int)&v14);
        else
          *(_DWORD *)v8 = v14;
          HIDWORD(v8) = v15;
          *(_DWORD *)(v8 + 4) = v15;
          if ( HIDWORD(v8) )
            v10 = (unsigned int *)(v9 + 8);
            if ( &pthread_create )
            {
              __dmb();
              do
                v11 = __ldrex(v10);
              while ( __strex(v11 + 1, v10) );
              LODWORD(v8) = *((_DWORD *)v2 + 1);
            }
            else
              ++*v10;
          *((_DWORD *)v2 + 1) = v8 + 8;
        result = v15;
        if ( v15 )
          v12 = (unsigned int *)((char *)v15 + 8);
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 == 1 )
            result = (GameController *)(*(int (**)(void))(*(_DWORD *)result + 12))();
      }
    }
  }
  return result;
}


int __fastcall GameControllerManager::setMaxGameControllerButtons(int result, unsigned int a2)
{
  *(_DWORD *)(result + 12) = a2;
  return result;
}


int __fastcall GameControllerManager::feedStick(int result, int a2, int a3, int a4, float a5, float a6)
{
  int v11; // [sp+0h] [bp-10h]@0

  if ( *(_BYTE *)(result + 16) )
  {
    __asm
    {
      VLDR            S2, [SP,#0x10+arg_0]
      VMOV            R12, S2
      VLDR            S0, [SP,#0x10+arg_4]
      VSTR            S0, [SP,#0x10+var_10]
    }
    result = GameController::_feedStick(*(float *)(*(_DWORD *)result + 8 * a2), a3, a4, _R12, v11, a2);
  }
  return result;
}


signed int __fastcall GameControllerManager::hasAdequateConnectedGameController(GameControllerManager *this)
{
  __int64 v1; // r4@1
  signed int result; // r0@6

  v1 = *(_QWORD *)this;
  if ( (_DWORD)v1 == HIDWORD(v1) )
  {
LABEL_6:
    result = 0;
  }
  else
    while ( !*(_DWORD *)v1
         || GameController::isConnected(*(GameController **)v1) != 1
         || !GameController::isAdequateController(*(GameController **)v1) )
    {
      LODWORD(v1) = v1 + 8;
      if ( HIDWORD(v1) == (_DWORD)v1 )
        goto LABEL_6;
    }
    result = 1;
  return result;
}


int __fastcall GameControllerManager::setGameControllerActive(int result, bool a2)
{
  *(_BYTE *)(result + 16) = a2;
  return result;
}


int __fastcall GameControllerManager::GameControllerManager(int a1)
{
  int v1; // r4@1
  int v2; // r6@1
  void *v3; // r0@2
  void *v4; // r7@2
  _DWORD *v5; // r0@2
  int v6; // r1@2 OVERLAPPED
  int v7; // r2@2
  int v8; // r8@4
  unsigned int *v9; // r1@5
  unsigned int v10; // r0@7
  unsigned int *v11; // r7@11
  unsigned int v12; // r0@13
  void *v14; // [sp+4h] [bp-2Ch]@2
  int v15; // [sp+8h] [bp-28h]@2

  v1 = a1;
  v2 = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  do
  {
    v3 = operator new(0x34u);
    v4 = v3;
    v14 = v3;
    GameController::GameController((int)v3, v2);
    v5 = operator new(0x14u);
    v5[2] = 1;
    *v5 = &off_26E8804;
    v5[1] = 1;
    v5[4] = v4;
    v15 = (int)v5;
    *(_QWORD *)&v6 = *(_QWORD *)(v1 + 4);
    if ( v6 == v7 )
    {
      std::vector<std::shared_ptr<GameController>,std::allocator<std::shared_ptr<GameController>>>::_M_emplace_back_aux<std::shared_ptr<GameController>>(
        (_QWORD *)v1,
        (int)&v14);
      v8 = v15;
      if ( v15 )
      {
        v9 = (unsigned int *)(v15 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          v11 = (unsigned int *)(v8 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
      }
    }
    else
      *(_DWORD *)v6 = v4;
      v15 = 0;
      *(_DWORD *)(v6 + 4) = v5;
      v14 = 0;
      *(_DWORD *)(v1 + 4) = v6 + 8;
    ++v2;
  }
  while ( v2 != 4 );
  *(_DWORD *)(v1 + 12) = 14;
  *(_BYTE *)(v1 + 16) = 1;
  return v1;
}


            if ( GameControllerManager::hasAdequateConnectedGameController((GameControllerManager *)&GameControllerManager::sGamePadManager) == 1 )
{
            else
              ConnectGamepadScreenController::_showGamepadRequiredPopup((ConnectGamepadScreenController *)v1);
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v5);
            while ( __strex(result - 1, v5) );
          else
            result = (*v5)--;
          if ( result == 1 )
            v9 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v9);
              while ( __strex(result - 1, v9) );
            }
              result = (*v9)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
      {
        __clrex();
        v4 = v6;
    }
  }
  return result;
}
