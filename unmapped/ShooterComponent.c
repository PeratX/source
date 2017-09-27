

_QWORD *__fastcall ShooterComponent::ShooterComponent(_QWORD *result, int a2)
{
  void *v2; // r2@1

  v2 = &unk_28898CC;
  *result = *(_QWORD *)&a2;
  return result;
}


int __fastcall ShooterComponent::initFromDefinition(ShooterComponent *this)
{
  ShooterComponent *v1; // r4@1
  int v2; // r5@1
  int result; // r0@1

  v1 = this;
  v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 408);
  EntityInteraction::setInteractText((int *)this + 1, (int *)(v2 + 4));
  result = *(_DWORD *)(v2 + 8);
  *((_DWORD *)v1 + 2) = result;
  return result;
}


int __fastcall ShooterComponent::onShoot(ShooterComponent *this)
{
  ShooterComponent *v1; // r4@1
  Level *v2; // r0@1
  Level **v3; // r0@1
  Entity *v4; // r4@1
  int (__fastcall *v5)(Entity *, signed int, char *, signed int); // r7@1
  char v7; // [sp+8h] [bp-20h]@1

  v1 = this;
  v2 = (Level *)j_Entity::getLevel(*(Entity **)this);
  v3 = (Level **)j_Level::getProjectileFactory(v2);
  j_ProjectileFactory::shootProjectileFromDefinition(v3, (int *)v1 + 1, *(Entity **)v1, 0, 0, 0);
  v4 = *(Entity **)v1;
  v5 = *(int (__fastcall **)(Entity *, signed int, char *, signed int))(*(_DWORD *)v4 + 556);
  j_Entity::getAttachPos((AABB *)&v7, (int)v4, 2, 0);
  return v5(v4, 52, &v7, -1);
}
