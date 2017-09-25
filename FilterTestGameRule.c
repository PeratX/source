

void __fastcall FilterTestGameRule::~FilterTestGameRule(FilterTestGameRule *this)
{
  FilterTestGameRule::~FilterTestGameRule(this);
}


int __fastcall FilterTestGameRule::evaluate(int a1, int a2)
{
  int v2; // r4@1
  Level *v3; // r0@1
  unsigned __int64 *v4; // r5@2
  GameRule *v5; // r5@2
  void *v6; // r0@2
  int v7; // r0@5
  int result; // r0@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  int v11; // [sp+4h] [bp-1Ch]@2

  v2 = a1;
  v3 = *(Level **)(a2 + 20);
  if ( !v3 )
    goto LABEL_17;
  v4 = (unsigned __int64 *)Level::getGameRules(v3);
  Util::toLower((void **)&v11, *(_DWORD *)(*(_DWORD *)(v2 + 8) - 12), *(_DWORD *)(v2 + 8));
  v5 = (GameRule *)GameRules::getRule(v4, (int **)&v11);
  v6 = (void *)(v11 - 12);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 && GameRule::getType(v5) == 1 )
    v7 = GameRule::getBool(v5);
    result = FilterTest::_testValuesWithOperator((FilterTest *)v2, v7, *(_BYTE *)(v2 + 12));
  else
LABEL_17:
    result = 0;
  return result;
}


FilterTestGameRule *__fastcall FilterTestGameRule::~FilterTestGameRule(FilterTestGameRule *this)
{
  FilterTestGameRule *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2700890;
  v2 = *((_DWORD *)this + 2);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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


signed int __fastcall FilterTestGameRule::setup(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1

  v3 = a3;
  v4 = a1;
  FilterTest::setup(a1, a2, a3);
  v5 = *(_DWORD *)(v3 + 32);
  if ( v5 )
    LOBYTE(v5) = 1;
  *(_BYTE *)(v4 + 12) = v5;
  EntityInteraction::setInteractText((int *)(v4 + 8), (int *)(v3 + 8));
  return 1;
}


void __fastcall FilterTestGameRule::~FilterTestGameRule(FilterTestGameRule *this)
{
  FilterTestGameRule *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2700890;
  v2 = *((_DWORD *)this + 2);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}
