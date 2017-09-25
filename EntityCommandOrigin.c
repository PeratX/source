

int __fastcall EntityCommandOrigin::getDimension(EntityCommandOrigin *this)
{
  Entity *v1; // r0@1
  int result; // r0@2

  v1 = (Entity *)Level::fetchEntity(*((_DWORD *)this + 4), 0, *((_QWORD *)this + 1), *((_QWORD *)this + 1) >> 32, 0);
  if ( v1 )
    result = Entity::getDimension(v1);
  else
    result = 0;
  return result;
}


Entity *__fastcall EntityCommandOrigin::clone(EntityCommandOrigin *this, int a2)
{
  EntityCommandOrigin *v2; // r4@1
  _QWORD *v3; // r5@1
  Entity *result; // r0@1
  Entity *v5; // r6@1
  _QWORD *v6; // r0@2

  v2 = this;
  v3 = 0;
  result = (Entity *)Level::fetchEntity(*(_DWORD *)(a2 + 16), a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) >> 32, 0);
  v5 = result;
  if ( result )
  {
    v6 = operator new(0x18u);
    v3 = v6;
    *(_DWORD *)v6 = &off_26EB058;
    v6[1] = *(_QWORD *)Entity::getUniqueID(v5);
    result = (Entity *)Entity::getLevel(v5);
    *((_DWORD *)v3 + 4) = result;
  }
  *(_DWORD *)v2 = v3;
  return result;
}


void __fastcall EntityCommandOrigin::getName(EntityCommandOrigin *this, int a2)
{
  EntityCommandOrigin *v2; // r4@1
  int v3; // r1@1

  v2 = this;
  v3 = Level::fetchEntity(*(_DWORD *)(a2 + 16), 0, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) >> 32, 0);
  if ( v3 )
    getEntityName(v2, v3);
  else
    sub_21E8AF4((int *)v2, (int *)&Util::EMPTY_STRING);
}


int __fastcall EntityCommandOrigin::getPermissionsLevel(EntityCommandOrigin *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = (*(int (**)(void))(*(_DWORD *)this + 32))();
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 604))();
  else
    result = 0;
  return result;
}


void __fastcall EntityCommandOrigin::getName(EntityCommandOrigin *this, int a2)
{
  EntityCommandOrigin::getName(this, a2);
}


int __fastcall EntityCommandOrigin::EntityCommandOrigin(int a1, Entity *a2)
{
  int v2; // r5@1
  Entity *v3; // r4@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26EB058;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)Entity::getUniqueID(a2);
  *(_DWORD *)(v2 + 16) = Entity::getLevel(v3);
  return v2;
}


int __fastcall EntityCommandOrigin::toCommandOriginData(EntityCommandOrigin *this, int a2)
{
  int v2; // r5@1
  EntityCommandOrigin *v3; // r4@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  CommandOriginData::CommandOriginData((int)this);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 72))(v2);
  *(_BYTE *)v3 = result;
  return result;
}


void *__fastcall EntityCommandOrigin::getRequestId(EntityCommandOrigin *this)
{
  return &Util::EMPTY_GUID;
}


int __fastcall EntityCommandOrigin::getWorldPosition(EntityCommandOrigin *this, int a2)
{
  CommandUtils *v2; // r4@1
  Entity *v3; // r0@1

  v2 = this;
  v3 = (Entity *)Level::fetchEntity(*(_DWORD *)(a2 + 16), 0, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) >> 32, 0);
  return CommandUtils::getFeetPos(v2, v3);
}


signed int __fastcall EntityCommandOrigin::getOriginType(EntityCommandOrigin *this)
{
  return 7;
}


int __fastcall EntityCommandOrigin::getBlockPosition(EntityCommandOrigin *this, int a2)
{
  CommandUtils *v2; // r4@1
  Entity *v3; // r0@1

  v2 = this;
  v3 = (Entity *)Level::fetchEntity(*(_DWORD *)(a2 + 16), 0, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) >> 32, 0);
  return CommandUtils::getFeetBlockPos(v2, v3);
}
