

signed int __fastcall ExperiencePotion::getEntityTypeId(ExperiencePotion *this)
{
  return 4194372;
}


void __fastcall ExperiencePotion::~ExperiencePotion(ExperiencePotion *this)
{
  ExperiencePotion::~ExperiencePotion(this);
}


void __fastcall ExperiencePotion::~ExperiencePotion(ExperiencePotion *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall ExperiencePotion::getGravity(ExperiencePotion *this)
{
  return 1028443341;
}


signed int __fastcall ExperiencePotion::getThrowUpAngleOffset(ExperiencePotion *this)
{
  return -1046478848;
}


signed int __fastcall ExperiencePotion::getThrowPower(ExperiencePotion *this)
{
  return 1056964608;
}


Entity *__fastcall ExperiencePotion::ExperiencePotion(Throwable *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  Entity *result; // r0@1

  result = Throwable::Throwable(a1, a2, a3);
  *(_DWORD *)result = &off_26FDEE4;
  *((_DWORD *)result + 62) = 52;
  return result;
}
