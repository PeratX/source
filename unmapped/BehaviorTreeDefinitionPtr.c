

BehaviorTreeDefinitionPtr *__fastcall BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr *a1, int a2)
{
  BehaviorTreeDefinitionPtr *v2; // r4@1
  BehaviorTreeGroup *v3; // r0@1

  v2 = a1;
  v3 = *(BehaviorTreeGroup **)a2;
  *(_DWORD *)v2 = *(_DWORD *)a2;
  *((_DWORD *)v2 + 1) = *(_DWORD *)(a2 + 4);
  if ( v3 )
    j_BehaviorTreeGroup::_addRef(v3, v2);
  return v2;
}


int __fastcall BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


BehaviorTreeDefinitionPtr *__fastcall BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr *this)
{
  BehaviorTreeDefinitionPtr *v1; // r4@1
  BehaviorTreeGroup *v2; // r0@1

  v1 = this;
  v2 = *(BehaviorTreeGroup **)this;
  if ( v2 )
  {
    j_BehaviorTreeGroup::_removeRef(v2, v1);
    *(_DWORD *)v1 = 0;
  }
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


int __fastcall BehaviorTreeDefinitionPtr::_deref(BehaviorTreeDefinitionPtr *this)
{
  BehaviorTreeDefinitionPtr *v1; // r4@1
  BehaviorTreeGroup *v2; // r0@1
  int result; // r0@3

  v1 = this;
  v2 = *(BehaviorTreeGroup **)this;
  if ( v2 )
  {
    j_BehaviorTreeGroup::_removeRef(v2, v1);
    *(_DWORD *)v1 = 0;
  }
  result = 0;
  *((_DWORD *)v1 + 1) = 0;
  return result;
}


BehaviorTreeDefinitionPtr *__fastcall BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr *a1, BehaviorTreeGroup *this, int a3)
{
  BehaviorTreeDefinitionPtr *v3; // r4@1

  v3 = a1;
  *(_QWORD *)a1 = *(_QWORD *)&this;
  j_BehaviorTreeGroup::_addRef(this, a1);
  return v3;
}


BehaviorTreeDefinitionPtr *__fastcall BehaviorTreeDefinitionPtr::_move(BehaviorTreeDefinitionPtr *a1, BehaviorTreeDefinitionPtr *a2)
{
  BehaviorTreeDefinitionPtr *v2; // r5@1
  BehaviorTreeDefinitionPtr *v3; // r4@1
  BehaviorTreeGroup *v4; // r0@1
  BehaviorTreeGroup *v5; // r1@1

  v2 = a2;
  v3 = a1;
  v4 = *(BehaviorTreeGroup **)a2;
  *(_DWORD *)v3 = *(_DWORD *)a2;
  *((_DWORD *)v3 + 1) = *((_DWORD *)a2 + 1);
  v5 = *(BehaviorTreeGroup **)a2;
  if ( v5 )
  {
    j_BehaviorTreeGroup::_removeRef(v5, v2);
    *(_DWORD *)v2 = 0;
    v4 = *(BehaviorTreeGroup **)v3;
  }
  *((_DWORD *)v2 + 1) = 0;
  if ( v4 )
    j_BehaviorTreeGroup::_addRef(v4, v3);
  return v3;
}


BehaviorTreeDefinitionPtr *__fastcall BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr *a1, BehaviorTreeDefinitionPtr *a2)
{
  BehaviorTreeDefinitionPtr *v2; // r5@1
  BehaviorTreeDefinitionPtr *v3; // r4@1
  BehaviorTreeGroup *v4; // r0@1
  BehaviorTreeGroup *v5; // r1@1

  v2 = a2;
  v3 = a1;
  v4 = *(BehaviorTreeGroup **)a2;
  *(_DWORD *)v3 = *(_DWORD *)a2;
  *((_DWORD *)v3 + 1) = *((_DWORD *)a2 + 1);
  v5 = *(BehaviorTreeGroup **)a2;
  if ( v5 )
  {
    j_BehaviorTreeGroup::_removeRef(v5, v2);
    *(_DWORD *)v2 = 0;
    v4 = *(BehaviorTreeGroup **)v3;
  }
  *((_DWORD *)v2 + 1) = 0;
  if ( v4 )
    j_BehaviorTreeGroup::_addRef(v4, v3);
  return v3;
}
