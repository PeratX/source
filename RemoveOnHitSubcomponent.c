

_DWORD *__fastcall RemoveOnHitSubcomponent::RemoveOnHitSubcomponent(_DWORD *result)
{
  *result = &off_271ECA8;
  return result;
}


unsigned int __fastcall RemoveOnHitSubcomponent::doOnHitEffect(RemoveOnHitSubcomponent *this, ProjectileComponent *a2)
{
  int v2; // r4@1
  int v3; // r0@1
  unsigned int result; // r0@1
  int v5; // [sp+4h] [bp-4Ch]@1

  v2 = *((_DWORD *)a2 + 4);
  v3 = j_Entity::getProjectileComponent(*((Entity **)a2 + 4));
  j_HitResult::HitResult((int)&v5, v3 + 108);
  result = v5 & 0xFFFFFFFE;
  if ( (v5 & 0xFFFFFFFE) != 2 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 44))(v2);
  return result;
}
