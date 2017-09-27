

void __fastcall BehaviorNode::~BehaviorNode(BehaviorNode *this)
{
  BehaviorNode::~BehaviorNode(this);
}


BehaviorNode *__fastcall BehaviorNode::~BehaviorNode(BehaviorNode *this)
{
  BehaviorNode *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BehaviorNode *)((char *)this + 8));
  return v1;
}


int __fastcall BehaviorNode::setComponent(int result, BehaviorComponent *a2)
{
  *(_DWORD *)(result + 20) = a2;
  return result;
}


int __fastcall BehaviorNode::BehaviorNode(int a1)
{
  int v1; // r4@1
  int result; // r0@1

  v1 = a1;
  *(_DWORD *)a1 = &off_271E268;
  *(_DWORD *)(a1 + 4) = 0;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr(a1 + 8);
  *(_DWORD *)(v1 + 28) = 1;
  result = v1;
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 20) = 0;
  return result;
}


void __fastcall BehaviorNode::~BehaviorNode(BehaviorNode *this)
{
  BehaviorNode *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BehaviorNode *)((char *)this + 8));
  j_j_j__ZdlPv_7((void *)v1);
}
