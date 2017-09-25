

_DWORD *__fastcall PhysicsComponent::PhysicsComponent(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


unsigned int __fastcall PhysicsComponent::initFromDefinition(PhysicsComponent *this)
{
  int *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@1

  v1 = (int *)this;
  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 460);
  j_Entity::setStatusFlag(v2, 46, *(_BYTE *)(v3 + 4));
  return j_j_j__ZN6Entity13setStatusFlagE11EntityFlagsb_1(*v1, 45, *(_BYTE *)(v3 + 5));
}
