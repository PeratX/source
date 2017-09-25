

void __fastcall DragonFireball::~DragonFireball(DragonFireball *this)
{
  DragonFireball::~DragonFireball(this);
}


void __fastcall DragonFireball::~DragonFireball(DragonFireball *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall DragonFireball::getEntityTypeId(DragonFireball *this)
{
  return 4194383;
}


int __fastcall DragonFireball::_hurt(DragonFireball *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  return 0;
}


int __fastcall DragonFireball::DragonFireball(Fireball *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  int result; // r0@1

  result = Fireball::Fireball(a1, a2, a3);
  *(_DWORD *)result = &off_26FD8C4;
  *(_DWORD *)(result + 248) = 43;
  return result;
}


signed int __fastcall DragonFireball::getTrailParticle(DragonFireball *this)
{
  return 41;
}


int __fastcall DragonFireball::isPickable(DragonFireball *this)
{
  return 0;
}


int __fastcall DragonFireball::shouldBurn(DragonFireball *this)
{
  return 0;
}
