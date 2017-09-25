

char *__fastcall BehaviorComponent::getBehaviorData(BehaviorComponent *this)
{
  return (char *)this + 16;
}


int __fastcall BehaviorComponent::getEntity(BehaviorComponent *this)
{
  return *(_DWORD *)this;
}


void __fastcall BehaviorComponent::initFromDefinition(BehaviorComponent *this)
{
  BehaviorComponent *v1; // r4@1
  int v2; // r0@1
  BehaviorTreeDefinitionPtr *v3; // r5@1
  int v4; // r6@1
  Level *v5; // r0@1
  int v6; // r0@1
  int v7; // r0@1
  int v8; // r4@5
  AttributeInstance *v9; // r0@6
  AttributeInstance *v10; // r0@6
  int v11; // [sp+0h] [bp-18h]@1

  v1 = this;
  v3 = (BehaviorComponent *)((char *)this + 4);
  v2 = *(_DWORD *)this;
  v4 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 456);
  v5 = (Level *)j_Entity::getLevel((Entity *)v2);
  v6 = j_Level::getBehaviorTreeGroup(v5);
  j_BehaviorTreeGroup::tryGetDefinition((BehaviorTreeDefinitionPtr *)&v11, v6, (int **)(v4 + 4));
  j_BehaviorTreeDefinitionPtr::operator=(v3, (BehaviorTreeDefinitionPtr *)&v11);
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BehaviorTreeDefinitionPtr *)&v11);
  v7 = *((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = 0;
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  if ( *((_DWORD *)v1 + 2) )
    j_BehaviorComponent::runTree(v1, v3);
  v8 = *(_DWORD *)v1;
  if ( j_Entity::hasType(v8, 256) == 1 )
  {
    v9 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v8 + 1000))(
                                v8,
                                &SharedAttributes::FOLLOW_RANGE);
    j_AttributeInstance::setRange(v9, 16.0, 256.0, 2048.0);
    v10 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v8 + 1000))(
                                 v8,
                                 &SharedAttributes::FOLLOW_RANGE);
    j_AttributeInstance::resetToDefaultValue(v10);
  }
}


BehaviorTreeDefinitionPtr *__fastcall BehaviorComponent::reset(BehaviorComponent *this)
{
  BehaviorComponent *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  *((_DWORD *)v1 + 3) = 0;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  return j_j_j__ZN17BehaviorComponent7runTreeER25BehaviorTreeDefinitionPtr_0(v1, (BehaviorComponent *)((char *)v1 + 4));
}


int __fastcall BehaviorComponent::tick(BehaviorComponent *this)
{
  BehaviorComponent *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = *((_DWORD *)this + 3);
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 8))();
    if ( result != 1 )
    {
      result = *((_DWORD *)v1 + 3);
      *((_DWORD *)v1 + 3) = 0;
      if ( result )
        result = (*(int (**)(void))(*(_DWORD *)result + 4))();
    }
  }
  return result;
}


BehaviorTreeDefinitionPtr *__fastcall BehaviorComponent::runTree(BehaviorComponent *this, BehaviorTreeDefinitionPtr *a2)
{
  BehaviorTreeDefinitionPtr *v2; // r4@1
  BehaviorComponent *v3; // r5@1
  int v4; // r0@1
  int v5; // r6@1
  void (__fastcall *v6)(int *, int, int, _DWORD); // r7@1
  Level *v7; // r0@1
  int v8; // r0@1
  int v9; // r1@1
  int v10; // r0@1
  BehaviorNode *v11; // r0@4
  int v13; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  v4 = j_BehaviorTreeDefinition::getRoot(*((BehaviorTreeDefinition **)a2 + 1));
  v5 = v4;
  v6 = *(void (__fastcall **)(int *, int, int, _DWORD))(*(_DWORD *)v4 + 12);
  v7 = (Level *)j_Entity::getLevel(*(Entity **)v3);
  v8 = j_Level::getBehaviorFactory(v7);
  v6(&v13, v5, v8, 0);
  v9 = v13;
  v13 = 0;
  v10 = *((_DWORD *)v3 + 3);
  *((_DWORD *)v3 + 3) = v9;
  if ( v10 )
  {
    (*(void (__cdecl **)(int))(*(_DWORD *)v10 + 4))(v10);
    if ( v13 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v13 + 4))(v13);
  }
  v11 = (BehaviorNode *)*((_DWORD *)v3 + 3);
  if ( v11 )
    j_BehaviorNode::setComponent(v11, v3);
  return j_BehaviorTreeDefinitionPtr::operator=((BehaviorComponent *)((char *)v3 + 4), (int)v2);
}


_DWORD *__fastcall BehaviorComponent::BehaviorComponent(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  double v3; // r0@1
  unsigned int v4; // r0@1
  int v5; // r7@3
  void *v6; // r6@3

  v2 = a1;
  *a1 = a2;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(a1 + 1));
  v2[3] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 1065353216;
  LODWORD(v3) = v2 + 8;
  *(_DWORD *)(LODWORD(v3) + 4) = 0;
  v4 = sub_21E6254(v3);
  v2[5] = v4;
  if ( v4 == 1 )
  {
    v2[10] = 0;
    v6 = v2 + 10;
  }
  else
    if ( v4 >= 0x40000000 )
      sub_21E57F4();
    v5 = 4 * v4;
    v6 = j_operator new(4 * v4);
    j___aeabi_memclr4_0((int)v6, v5);
  v2[4] = v6;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  return v2;
}
