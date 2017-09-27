

EntityDefinitionPtr *__fastcall EntityDefinitionPtr::EntityDefinitionPtr(EntityDefinitionPtr *a1, EntityDefinitionPtr *a2)
{
  EntityDefinitionPtr *v2; // r5@1
  EntityDefinitionPtr *v3; // r4@1
  EntityDefinitionGroup *v4; // r0@1
  EntityDefinitionGroup *v5; // r1@1

  v2 = a2;
  v3 = a1;
  v4 = *(EntityDefinitionGroup **)a2;
  *(_DWORD *)v3 = *(_DWORD *)a2;
  *((_DWORD *)v3 + 1) = *((_DWORD *)a2 + 1);
  v5 = *(EntityDefinitionGroup **)a2;
  if ( v5 )
  {
    EntityDefinitionGroup::_removeRef(v5, v2);
    *(_DWORD *)v2 = 0;
    v4 = *(EntityDefinitionGroup **)v3;
  }
  *((_DWORD *)v2 + 1) = 0;
  if ( v4 )
    EntityDefinitionGroup::_addRef(v4, v3);
  return v3;
}


EntityDefinitionPtr *__fastcall EntityDefinitionPtr::EntityDefinitionPtr(EntityDefinitionPtr *a1, EntityDefinitionGroup *this, int a3)
{
  EntityDefinitionPtr *v3; // r4@1

  v3 = a1;
  *(_QWORD *)a1 = *(_QWORD *)&this;
  EntityDefinitionGroup::_addRef(this, a1);
  return v3;
}


int __fastcall EntityDefinitionPtr::_deref(EntityDefinitionPtr *this)
{
  EntityDefinitionPtr *v1; // r4@1
  EntityDefinitionGroup *v2; // r0@1
  int result; // r0@3

  v1 = this;
  v2 = *(EntityDefinitionGroup **)this;
  if ( v2 )
  {
    EntityDefinitionGroup::_removeRef(v2, v1);
    *(_DWORD *)v1 = 0;
  }
  result = 0;
  *((_DWORD *)v1 + 1) = 0;
  return result;
}


EntityDefinitionPtr *__fastcall EntityDefinitionPtr::EntityDefinitionPtr(EntityDefinitionPtr *a1, int a2)
{
  EntityDefinitionPtr *v2; // r4@1
  EntityDefinitionGroup *v3; // r0@1

  v2 = a1;
  v3 = *(EntityDefinitionGroup **)a2;
  *(_DWORD *)v2 = *(_DWORD *)a2;
  *((_DWORD *)v2 + 1) = *(_DWORD *)(a2 + 4);
  if ( v3 )
    EntityDefinitionGroup::_addRef(v3, v2);
  return v2;
}


EntityDefinitionPtr *__fastcall EntityDefinitionPtr::~EntityDefinitionPtr(EntityDefinitionPtr *this)
{
  EntityDefinitionPtr *v1; // r4@1
  EntityDefinitionGroup *v2; // r0@1

  v1 = this;
  v2 = *(EntityDefinitionGroup **)this;
  if ( v2 )
  {
    EntityDefinitionGroup::_removeRef(v2, v1);
    *(_DWORD *)v1 = 0;
  }
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


int __fastcall EntityDefinitionPtr::EntityDefinitionPtr(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


EntityDefinitionPtr *__fastcall EntityDefinitionPtr::_move(EntityDefinitionPtr *a1, EntityDefinitionPtr *a2)
{
  EntityDefinitionPtr *v2; // r5@1
  EntityDefinitionPtr *v3; // r4@1
  EntityDefinitionGroup *v4; // r0@1
  EntityDefinitionGroup *v5; // r1@1

  v2 = a2;
  v3 = a1;
  v4 = *(EntityDefinitionGroup **)a2;
  *(_DWORD *)v3 = *(_DWORD *)a2;
  *((_DWORD *)v3 + 1) = *((_DWORD *)a2 + 1);
  v5 = *(EntityDefinitionGroup **)a2;
  if ( v5 )
  {
    EntityDefinitionGroup::_removeRef(v5, v2);
    *(_DWORD *)v2 = 0;
    v4 = *(EntityDefinitionGroup **)v3;
  }
  *((_DWORD *)v2 + 1) = 0;
  if ( v4 )
    EntityDefinitionGroup::_addRef(v4, v3);
  return v3;
}
