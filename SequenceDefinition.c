

Json::Value *__fastcall SequenceDefinition::load(int a1, const Json::Value *a2, unsigned __int64 *a3)
{
  int v3; // r5@1
  unsigned __int64 *v4; // r4@1
  int v6; // [sp+0h] [bp-28h]@1
  char v7; // [sp+8h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  j_Json::Value::Value((Json::Value *)&v7, a2);
  j_BehaviorDefinition::getTreeDefinition((BehaviorDefinition *)&v6, v3);
  j_CompositeDefinition::_compositeLoadChildrenBehaviors((Json::Value *)&v7, v3 + 16, v4, (int)&v6);
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BehaviorTreeDefinitionPtr *)&v6);
  return j_Json::Value::~Value((Json::Value *)&v7);
}


void __fastcall SequenceDefinition::~SequenceDefinition(SequenceDefinition *this)
{
  SequenceDefinition::~SequenceDefinition(this);
}


void __fastcall SequenceDefinition::~SequenceDefinition(SequenceDefinition *this)
{
  SequenceDefinition *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED
  int v4; // r1@8
  void *v5; // r0@8
  unsigned int *v6; // r2@10
  signed int v7; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_271E118;
  *(_QWORD *)&v2 = *((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    j_operator delete(v2);
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((SequenceDefinition *)((char *)v1 + 8));
  v4 = *((_DWORD *)v1 + 1);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v4 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_operator delete((void *)v1);
}
