

int __fastcall AddRiderComponent::addRider(AddRiderComponent *this)
{
  AddRiderComponent *v1; // r4@1
  BlockSource *v2; // r5@1
  int v3; // r0@1
  int result; // r0@1
  int (*v5)(void); // r3@2
  int v6; // r5@2
  int v7; // [sp+8h] [bp-18h]@2
  int v8; // [sp+Ch] [bp-14h]@1

  v1 = this;
  v2 = (BlockSource *)j_Entity::getRegion(*(Entity **)this);
  v3 = (*(int (**)(void))(**(_DWORD **)v1 + 52))();
  j_EntityFactory::createSpawnedEntity((Entity **)&v8, (const void **)v1 + 1, 0, v3, &Vec2::ZERO);
  result = v8;
  if ( v8 )
  {
    v5 = *(int (**)(void))(*(_DWORD *)j_BlockSource::getLevel(v2) + 44);
    v7 = v8;
    v8 = 0;
    v6 = v5();
    if ( v7 )
      (*(void (**)(void))(*(_DWORD *)v7 + 32))();
    v7 = 0;
    if ( v6 && !(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v6 + 144))(v6, *(_DWORD *)v1) )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 44))(v6);
    result = v8;
    if ( v8 )
      result = (*(int (**)(void))(*(_DWORD *)v8 + 32))();
  }
  return result;
}


_DWORD *__fastcall AddRiderComponent::AddRiderComponent(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1

  v2 = a1;
  *a1 = a2;
  j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)(a1 + 1));
  return v2;
}


int __fastcall AddRiderComponent::initFromDefinition(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)result + 48) + 272);
  if ( v1 )
    result = (int)j_j_j__ZN26EntityDefinitionIdentifieraSERKS__0((int *)(result + 4), (int *)(v1 + 4));
  return result;
}
