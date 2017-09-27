

int __fastcall SelectorBehaviorNode::SelectorBehaviorNode(BehaviorNode *a1)
{
  int result; // r0@1

  result = j_BehaviorNode::BehaviorNode(a1);
  *(_DWORD *)result = &off_271E2B0;
  *(_DWORD *)(result + 32) = 0;
  return result;
}


int __fastcall SelectorBehaviorNode::tick(SelectorBehaviorNode *this)
{
  SelectorBehaviorNode *v1; // r4@1
  int result; // r0@1
  CompositeDefinition *v3; // r5@2
  unsigned int v4; // r6@2
  int v5; // r0@3
  int v6; // r0@4
  int v7; // r5@4
  void (__fastcall *v8)(int *, int, int, SelectorBehaviorNode *); // r7@4
  Entity *v9; // r0@4
  Level *v10; // r0@4
  int v11; // r0@4
  int v12; // r1@4
  int v13; // r0@4
  int v14; // r0@8
  int v15; // r5@8
  int v16; // r0@10
  int v17; // r0@14
  int v18; // [sp+8h] [bp-18h]@4

  v1 = this;
  result = *((_DWORD *)this + 7);
  if ( result != 1 )
    return result;
  v3 = (CompositeDefinition *)*((_DWORD *)v1 + 1);
  v4 = *((_DWORD *)v1 + 9);
  if ( v4 >= j_CompositeDefinition::getCount(*((CompositeDefinition **)v1 + 1)) )
    goto LABEL_17;
  v5 = *((_DWORD *)v1 + 8);
  if ( !v5 )
  {
    v6 = j_CompositeDefinition::get(v3, *((_DWORD *)v1 + 9));
    v7 = v6;
    v8 = *(void (__fastcall **)(int *, int, int, SelectorBehaviorNode *))(*(_DWORD *)v6 + 12);
    v9 = (Entity *)j_BehaviorComponent::getEntity(*((BehaviorComponent **)v1 + 5));
    v10 = (Level *)j_Entity::getLevel(v9);
    v11 = j_Level::getBehaviorFactory(v10);
    v8(&v18, v7, v11, v1);
    v12 = v18;
    v18 = 0;
    v13 = *((_DWORD *)v1 + 8);
    *((_DWORD *)v1 + 8) = v12;
    if ( v13 )
    {
      (*(void (__cdecl **)(int))(*(_DWORD *)v13 + 4))(v13);
      if ( v18 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v18 + 4))(v18);
    }
    v5 = *((_DWORD *)v1 + 8);
  }
  v14 = (*(int (__cdecl **)(int))(*(_DWORD *)v5 + 8))(v5);
  v15 = v14;
  if ( v14 == 1 )
    return 1;
  if ( v14 != 2 )
    v17 = *((_DWORD *)v1 + 8);
    *((_DWORD *)v1 + 8) = 0;
    if ( v17 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v17 + 4))(v17);
    if ( !v15 )
      result = 0;
      goto LABEL_18;
LABEL_17:
    result = 2;
LABEL_18:
    *((_DWORD *)v1 + 7) = result;
  ++*((_DWORD *)v1 + 9);
  v16 = *((_DWORD *)v1 + 8);
  *((_DWORD *)v1 + 8) = 0;
  if ( v16 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v16 + 4))(v16);
  return (*(int (__fastcall **)(SelectorBehaviorNode *))(*(_DWORD *)v1 + 8))(v1);
}


void __fastcall SelectorBehaviorNode::~SelectorBehaviorNode(SelectorBehaviorNode *this)
{
  SelectorBehaviorNode *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271E2B0;
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  *(_DWORD *)v1 = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((SelectorBehaviorNode *)((char *)v1 + 8));
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall SelectorBehaviorNode::~SelectorBehaviorNode(SelectorBehaviorNode *this)
{
  SelectorBehaviorNode::~SelectorBehaviorNode(this);
}


SelectorBehaviorNode *__fastcall SelectorBehaviorNode::~SelectorBehaviorNode(SelectorBehaviorNode *this)
{
  SelectorBehaviorNode *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271E2B0;
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  *(_DWORD *)v1 = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((SelectorBehaviorNode *)((char *)v1 + 8));
  return v1;
}
