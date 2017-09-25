

Goal *__fastcall LookAtTradingPlayerGoal::LookAtTradingPlayerGoal(Goal *a1, int a2, int a3, int a4, int a5, int a6, signed int a7, signed int a8)
{
  int v8; // r4@1
  Goal *result; // r0@1

  v8 = a2;
  result = j_LookAtEntityGoal::LookAtEntityGoal(a1, a2, a3, a4, a5, a6, a7, a8);
  *(_DWORD *)result = &off_271A6C4;
  *((_DWORD *)result + 24) = v8;
  return result;
}


void __fastcall LookAtTradingPlayerGoal::~LookAtTradingPlayerGoal(LookAtTradingPlayerGoal *this)
{
  LookAtTradingPlayerGoal::~LookAtTradingPlayerGoal(this);
}


void __fastcall LookAtTradingPlayerGoal::~LookAtTradingPlayerGoal(LookAtTradingPlayerGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_LookAtEntityGoal::~LookAtEntityGoal(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall LookAtTradingPlayerGoal::canUse(LookAtTradingPlayerGoal *this)
{
  LookAtTradingPlayerGoal *v1; // r4@1
  signed int v2; // r0@1
  signed int v3; // r5@1
  int v4; // r0@5
  int v6; // r0@6

  v1 = this;
  v2 = j_Entity::getTradingPlayer(*((Entity **)this + 24));
  v3 = v2;
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 316))() == 1 && *((_DWORD *)v1 + 3) != v3 )
  {
    if ( *(_DWORD *)(v3 + 3092) )
    {
      *((_QWORD *)v1 + 2) = *(_QWORD *)j_Entity::getUniqueID((Entity *)v3);
      v4 = *(_DWORD *)(v3 + 3092);
      *((_DWORD *)v1 + 6) = v4;
      j_Level::registerTemporaryPointer(v4, (unsigned int)v1 + 8);
      *((_BYTE *)v1 + 28) = 0;
      return 0;
    }
    *((_DWORD *)v1 + 3) = 0;
    *((_DWORD *)v1 + 4) = -1;
    *((_DWORD *)v1 + 5) = -1;
    *((_BYTE *)v1 + 28) = 0;
    v6 = *((_DWORD *)v1 + 6);
    if ( v6 )
      j_Level::unregisterTemporaryPointer(v6, (unsigned int)v1 + 8);
    *((_DWORD *)v1 + 6) = 0;
  }
  return 0;
}


int __fastcall LookAtTradingPlayerGoal::canContinueToUse(LookAtTradingPlayerGoal *this)
{
  LookAtTradingPlayerGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  int v7; // r0@7
  signed int v8; // r0@9
  int result; // r0@10

  v1 = this;
  if ( !*((_BYTE *)this + 28) )
  {
    v2 = *((_DWORD *)this + 6);
    if ( v2 )
    {
      v3 = *((_DWORD *)v1 + 4);
      v4 = *((_DWORD *)v1 + 5);
      if ( (v3 & v4) != -1 )
      {
        v5 = j_Level::fetchEntity(v2, v3 & v4, v3, v4, 0);
        *((_DWORD *)v1 + 3) = v5;
        if ( !v5 )
          *((_DWORD *)v1 + 3) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 6),
                                  v6,
                                  *((_QWORD *)v1 + 2),
                                  *((_QWORD *)v1 + 2) >> 32,
                                  0);
      }
    }
    *((_BYTE *)v1 + 28) = 1;
  }
  v7 = *((_DWORD *)v1 + 3);
  if ( v7
    && (*(int (**)(void))(*(_DWORD *)v7 + 316))() == 1
    && (v8 = j_Entity::getTradingPlayer(*((Entity **)v1 + 24))) != 0 )
    result = (*(int (**)(void))(*(_DWORD *)v8 + 316))();
  else
    result = 0;
  return result;
}
