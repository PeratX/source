

int __fastcall EntityServerCommandOrigin::getPermissionsLevel(EntityServerCommandOrigin *this, int a2)
{
  int v2; // r4@1
  int v3; // r0@1

  v2 = 0;
  v3 = Level::fetchEntity(*((_DWORD *)this + 4), a2, *((_QWORD *)this + 1), *((_QWORD *)this + 1) >> 32, 0);
  if ( v3 )
    v2 = (*(int (**)(void))(*(_DWORD *)v3 + 604))();
  return v2;
}


void **__fastcall EntityServerCommandOrigin::clone(EntityServerCommandOrigin *this, int a2)
{
  EntityServerCommandOrigin *v2; // r4@1
  _QWORD *v3; // r5@1
  void **result; // r0@1
  Entity *v5; // r6@1
  _QWORD *v6; // r0@2

  v2 = this;
  v3 = 0;
  result = (void **)Level::fetchEntity(*(_DWORD *)(a2 + 16), a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) >> 32, 0);
  v5 = (Entity *)result;
  if ( result )
  {
    v6 = operator new(0x18u);
    v3 = v6;
    *(_DWORD *)v6 = &off_26EB058;
    v6[1] = *(_QWORD *)Entity::getUniqueID(v5);
    *((_DWORD *)v3 + 4) = Entity::getLevel(v5);
    result = &off_26EB0B0;
    *(_DWORD *)v3 = &off_26EB0B0;
  }
  *(_DWORD *)v2 = v3;
  return result;
}


signed int __fastcall EntityServerCommandOrigin::getOriginType(EntityServerCommandOrigin *this)
{
  return 10;
}


int __fastcall EntityServerCommandOrigin::EntityServerCommandOrigin(int a1, Entity *a2)
{
  int v2; // r5@1
  Entity *v3; // r4@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26EB058;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)Entity::getUniqueID(a2);
  *(_DWORD *)(v2 + 16) = Entity::getLevel(v3);
  *(_DWORD *)v2 = &off_26EB0B0;
  return v2;
}
