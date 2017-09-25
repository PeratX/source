

void __fastcall ShulkerBullet::reloadHardcoded(Entity *a1)
{
  Entity *v1; // r4@1

  v1 = a1;
  (*(void (**)(void))(*(_DWORD *)a1 + 680))();
  j_j_j__ZN6Entity20enableAutoSendPosRotEb(v1, 1);
}


void __fastcall ShulkerBullet::~ShulkerBullet(ShulkerBullet *this)
{
  ShulkerBullet::~ShulkerBullet(this);
}


int __fastcall ShulkerBullet::ShulkerBullet(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Entity::Entity(a1, a2, a3);
  *(_DWORD *)result = &off_26FEB3C;
  *(_DWORD *)(result + 248) = 28;
  return result;
}


signed int __fastcall ShulkerBullet::isPickable(ShulkerBullet *this)
{
  return 1;
}


int __fastcall ShulkerBullet::normalTick(ShulkerBullet *this)
{
  Entity *v1; // r4@1
  int v2; // r5@1
  int v3; // r0@1

  v1 = this;
  Entity::normalTick(this);
  v2 = Entity::getLevel(v1);
  v3 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 52))(v1);
  return Level::addParticle(v2, 40, v3);
}


signed int __fastcall ShulkerBullet::getEntityTypeId(ShulkerBullet *this)
{
  return 4194380;
}


int __fastcall ShulkerBullet::isOnFire(ShulkerBullet *this)
{
  return 0;
}


void __fastcall ShulkerBullet::~ShulkerBullet(ShulkerBullet *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ShulkerBullet::reloadHardcoded(Entity *a1)
{
  ShulkerBullet::reloadHardcoded(a1);
}
