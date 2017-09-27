

signed int __fastcall InverterNode::tick(InverterNode *this)
{
  InverterNode *v1; // r4@1
  signed int v2; // r5@1
  int v3; // r0@2
  int v4; // r0@3
  int v5; // r5@3
  void (__fastcall *v6)(int *, int, int, InverterNode *); // r7@3
  Entity *v7; // r0@3
  Level *v8; // r0@3
  int v9; // r0@3
  int v10; // r1@3
  int v11; // r0@3
  int v12; // r0@7
  int v13; // r0@10
  int v14; // r0@12
  int v16; // [sp+8h] [bp-18h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 7);
  if ( v2 == 1 )
  {
    v3 = *((_DWORD *)this + 8);
    if ( !v3 )
    {
      v4 = j_DecoratorDefinition::get(*((DecoratorDefinition **)v1 + 1));
      v5 = v4;
      v6 = *(void (__fastcall **)(int *, int, int, InverterNode *))(*(_DWORD *)v4 + 12);
      v7 = (Entity *)j_BehaviorComponent::getEntity(*((BehaviorComponent **)v1 + 5));
      v8 = (Level *)j_Entity::getLevel(v7);
      v9 = j_Level::getBehaviorFactory(v8);
      v6(&v16, v5, v9, v1);
      v10 = v16;
      v16 = 0;
      v11 = *((_DWORD *)v1 + 8);
      *((_DWORD *)v1 + 8) = v10;
      if ( v11 )
      {
        (*(void (__cdecl **)(int))(*(_DWORD *)v11 + 4))(v11);
        if ( v16 )
          (*(void (__cdecl **)(int))(*(_DWORD *)v16 + 4))(v16);
      }
      v3 = *((_DWORD *)v1 + 8);
    }
    v12 = (*(int (__cdecl **)(int))(*(_DWORD *)v3 + 8))(v3);
    if ( v12 )
      if ( v12 == 1 )
        v2 = 1;
      else
        if ( v12 != 2 )
          return *((_DWORD *)v1 + 7);
        v13 = *((_DWORD *)v1 + 8);
        v2 = 0;
        *((_DWORD *)v1 + 8) = 0;
        if ( v13 )
          (*(void (__cdecl **)(int))(*(_DWORD *)v13 + 4))(v13);
    else
      v14 = *((_DWORD *)v1 + 8);
      *((_DWORD *)v1 + 8) = 0;
      if ( v14 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v14 + 4))(v14);
      v2 = 2;
    *((_DWORD *)v1 + 7) = v2;
  }
  return v2;
}


int __fastcall InverterNode::InverterNode(BehaviorNode *a1)
{
  int result; // r0@1

  result = j_BehaviorNode::BehaviorNode(a1);
  *(_DWORD *)result = &off_271E2F8;
  *(_DWORD *)(result + 32) = 0;
  return result;
}


InverterNode *__fastcall InverterNode::~InverterNode(InverterNode *this)
{
  InverterNode *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271E2F8;
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  *(_DWORD *)v1 = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((InverterNode *)((char *)v1 + 8));
  return v1;
}


void __fastcall InverterNode::~InverterNode(InverterNode *this)
{
  InverterNode *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271E2F8;
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  *(_DWORD *)v1 = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((InverterNode *)((char *)v1 + 8));
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall InverterNode::~InverterNode(InverterNode *this)
{
  InverterNode::~InverterNode(this);
}
