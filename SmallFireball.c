

int __fastcall SmallFireball::isPickable(SmallFireball *this)
{
  return 0;
}


signed int __fastcall SmallFireball::getEntityTypeId(SmallFireball *this)
{
  return 4194398;
}


int __fastcall SmallFireball::_hurt(SmallFireball *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  return 0;
}


void __fastcall SmallFireball::~SmallFireball(SmallFireball *this)
{
  SmallFireball::~SmallFireball(this);
}


Fireball *__fastcall SmallFireball::SmallFireball(Fireball *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  Fireball *v3; // r4@1

  v3 = a1;
  Fireball::Fireball(a1, a2, a3);
  *(_DWORD *)v3 = &off_26FEE44;
  *((_DWORD *)v3 + 62) = 42;
  Entity::setSize(v3, 0.3125, 0.3125);
  return v3;
}


void __fastcall SmallFireball::~SmallFireball(SmallFireball *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}
