

void __fastcall LargeFireball::~LargeFireball(LargeFireball *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall LargeFireball::setExplosionPower(int result, int a2)
{
  *(_DWORD *)(result + 3476) = a2;
  return result;
}


int __fastcall LargeFireball::LargeFireball(Fireball *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  int result; // r0@1

  result = Fireball::Fireball(a1, a2, a3);
  *(_DWORD *)result = &off_26FE51C;
  *(_DWORD *)(result + 3476) = 1;
  *(_DWORD *)(result + 248) = 41;
  return result;
}


signed int __fastcall LargeFireball::getEntityTypeId(LargeFireball *this)
{
  return 4194389;
}


void __fastcall LargeFireball::~LargeFireball(LargeFireball *this)
{
  LargeFireball::~LargeFireball(this);
}
