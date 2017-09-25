

void __fastcall BehaviorTreeDescription::~BehaviorTreeDescription(BehaviorTreeDescription *this)
{
  BehaviorTreeDescription::~BehaviorTreeDescription(this);
}


void *__fastcall BehaviorTreeDescription::getDescription(BehaviorTreeDescription *this)
{
  return &unk_257BC67;
}


void *__fastcall BehaviorTreeDescription::getJsonName(BehaviorTreeDescription *this)
{
  return &unk_257BC67;
}


void __fastcall BehaviorTreeDescription::~BehaviorTreeDescription(BehaviorTreeDescription *this)
{
  BehaviorTreeDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271E78C;
  v2 = *((_DWORD *)this + 1);
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


BehaviorTreeDescription *__fastcall BehaviorTreeDescription::~BehaviorTreeDescription(BehaviorTreeDescription *this)
{
  BehaviorTreeDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271E78C;
  v2 = *((_DWORD *)this + 1);
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
