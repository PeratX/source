

GeometryPtr *__fastcall GeometryPtr::~GeometryPtr(GeometryPtr *this)
{
  GeometryPtr *v1; // r4@1
  GeometryGroup *v2; // r0@1

  v1 = this;
  v2 = *(GeometryGroup **)this;
  if ( v2 )
  {
    GeometryGroup::_removeRef(v2, v1);
    *(_DWORD *)v1 = 0;
  }
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


GeometryPtr *__fastcall GeometryPtr::GeometryPtr(GeometryPtr *a1, GeometryGroup *this, int a3)
{
  GeometryPtr *v3; // r4@1

  v3 = a1;
  *(_QWORD *)a1 = *(_QWORD *)&this;
  GeometryGroup::_addRef(this, a1);
  return v3;
}


int __fastcall GeometryPtr::GeometryPtr(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


GeometryPtr *__fastcall GeometryPtr::GeometryPtr(GeometryPtr *a1, int a2)
{
  GeometryPtr *v2; // r4@1
  GeometryGroup *v3; // r0@1

  v2 = a1;
  v3 = *(GeometryGroup **)a2;
  *(_DWORD *)v2 = *(_DWORD *)a2;
  *((_DWORD *)v2 + 1) = *(_DWORD *)(a2 + 4);
  if ( v3 )
    GeometryGroup::_addRef(v3, v2);
  return v2;
}


GeometryPtr *__fastcall GeometryPtr::GeometryPtr(GeometryPtr *a1, GeometryPtr *a2)
{
  GeometryPtr *v2; // r5@1
  GeometryPtr *v3; // r4@1
  GeometryGroup *v4; // r0@1
  GeometryGroup *v5; // r1@1

  v2 = a2;
  v3 = a1;
  v4 = *(GeometryGroup **)a2;
  *(_DWORD *)v3 = *(_DWORD *)a2;
  *((_DWORD *)v3 + 1) = *((_DWORD *)a2 + 1);
  v5 = *(GeometryGroup **)a2;
  if ( v5 )
  {
    GeometryGroup::_removeRef(v5, v2);
    *(_DWORD *)v2 = 0;
    v4 = *(GeometryGroup **)v3;
  }
  *((_DWORD *)v2 + 1) = 0;
  if ( v4 )
    GeometryGroup::_addRef(v4, v3);
  return v3;
}


int __fastcall GeometryPtr::_deref(GeometryPtr *this)
{
  GeometryPtr *v1; // r4@1
  GeometryGroup *v2; // r0@1
  int result; // r0@3

  v1 = this;
  v2 = *(GeometryGroup **)this;
  if ( v2 )
  {
    GeometryGroup::_removeRef(v2, v1);
    *(_DWORD *)v1 = 0;
  }
  result = 0;
  *((_DWORD *)v1 + 1) = 0;
  return result;
}


GeometryPtr *__fastcall GeometryPtr::_move(GeometryPtr *a1, GeometryPtr *a2)
{
  GeometryPtr *v2; // r5@1
  GeometryPtr *v3; // r4@1
  GeometryGroup *v4; // r0@1
  GeometryGroup *v5; // r1@1

  v2 = a2;
  v3 = a1;
  v4 = *(GeometryGroup **)a2;
  *(_DWORD *)v3 = *(_DWORD *)a2;
  *((_DWORD *)v3 + 1) = *((_DWORD *)a2 + 1);
  v5 = *(GeometryGroup **)a2;
  if ( v5 )
  {
    GeometryGroup::_removeRef(v5, v2);
    *(_DWORD *)v2 = 0;
    v4 = *(GeometryGroup **)v3;
  }
  *((_DWORD *)v2 + 1) = 0;
  if ( v4 )
    GeometryGroup::_addRef(v4, v3);
  return v3;
}
