

void __fastcall InverterDefinition::~InverterDefinition(InverterDefinition *this)
{
  InverterDefinition *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_271E178;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((InverterDefinition *)((char *)v1 + 8));
  v3 = *((_DWORD *)v1 + 1);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  j_operator delete((void *)v1);
}


void __fastcall InverterDefinition::~InverterDefinition(InverterDefinition *this)
{
  InverterDefinition::~InverterDefinition(this);
}


int __fastcall InverterDefinition::load(int a1, const Json::Value *a2, unsigned __int64 *a3)
{
  int v3; // r4@1
  unsigned __int64 *v4; // r5@1
  int v5; // r1@1
  int result; // r0@1
  int v7; // [sp+0h] [bp-30h]@1
  char v8; // [sp+8h] [bp-28h]@1
  int v9; // [sp+1Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  j_Json::Value::Value((Json::Value *)&v8, a2);
  j_BehaviorDefinition::getTreeDefinition((BehaviorDefinition *)&v7, v3);
  j_DecoratorDefinition::_decoratorLoadChildBehavior(&v9, (Json::Value *)&v8, v4, (int)&v7);
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BehaviorTreeDefinitionPtr *)&v7);
  j_Json::Value::~Value((Json::Value *)&v8);
  v5 = v9;
  v9 = 0;
  result = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v3 + 16) = v5;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}
