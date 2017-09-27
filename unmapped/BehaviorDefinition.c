

char *__fastcall BehaviorDefinition::getName(BehaviorDefinition *this)
{
  return (char *)this + 4;
}


BehaviorDefinition *__fastcall BehaviorDefinition::~BehaviorDefinition(BehaviorDefinition *this)
{
  BehaviorDefinition *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BehaviorDefinition *)((char *)this + 8));
  v2 = *((_DWORD *)v1 + 1);
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


void __fastcall BehaviorDefinition::~BehaviorDefinition(BehaviorDefinition *this)
{
  BehaviorDefinition::~BehaviorDefinition(this);
}


void __fastcall BehaviorDefinition::~BehaviorDefinition(BehaviorDefinition *this)
{
  BehaviorDefinition *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BehaviorDefinition *)((char *)this + 8));
  v2 = *((_DWORD *)v1 + 1);
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
  j_operator delete((void *)v1);
}


int __fastcall BehaviorDefinition::createNode(int *a1, int a2, unsigned __int64 *a3, int a4, int a5)
{
  int v5; // r6@1
  int v6; // r5@1
  int *v7; // r4@1
  int result; // r0@1

  v5 = a2;
  v6 = a4;
  v7 = a1;
  j_BehaviorFactory::tryGetNode(a1, a3, (int **)(a2 + 4));
  result = *v7;
  if ( *v7 )
  {
    *(_DWORD *)(result + 4) = v5;
    j_BehaviorTreeDefinitionPtr::operator=((BehaviorTreeDefinitionPtr *)(*v7 + 8), v5 + 8);
    *(_DWORD *)(*v7 + 16) = v6;
    if ( v6 )
    {
      *(_DWORD *)(*v7 + 20) = *(_DWORD *)(v6 + 20);
      *(_DWORD *)(*v7 + 24) = *(_DWORD *)(v6 + 24);
    }
    if ( a5 )
      *(_DWORD *)(*v7 + 24) = a5;
    result = (*(int (**)(void))(*(_DWORD *)*v7 + 12))();
  }
  return result;
}
