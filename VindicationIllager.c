

signed int __fastcall VindicationIllager::canExistInPeaceful(VindicationIllager *this)
{
  return 1;
}


void __fastcall VindicationIllager::~VindicationIllager(VindicationIllager *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall VindicationIllager::getEntityTypeId(VindicationIllager *this)
{
  return 2873;
}


int __fastcall VindicationIllager::VindicationIllager(HumanoidMonster *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  int result; // r0@1

  result = HumanoidMonster::HumanoidMonster(a1, a2, a3);
  *(_DWORD *)result = &off_26FAF28;
  *(_DWORD *)(result + 248) = 77;
  return result;
}


void __fastcall VindicationIllager::~VindicationIllager(VindicationIllager *this)
{
  VindicationIllager::~VindicationIllager(this);
}


signed int __fastcall VindicationIllager::useNewAi(VindicationIllager *this)
{
  return 1;
}
