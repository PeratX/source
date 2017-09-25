

void __fastcall GrantXPSubcomponent::doOnHitEffect(GrantXPSubcomponent *this, ProjectileComponent *a2)
{
  Entity *v2; // r5@1
  GrantXPSubcomponent *v3; // r4@1
  int v4; // r0@1
  Level *v5; // r0@1
  Level *v6; // r0@1
  BlockSource *v7; // r0@2
  char v8; // [sp+8h] [bp-58h]@1
  int v9; // [sp+1Ch] [bp-44h]@1

  v2 = (Entity *)*((_DWORD *)a2 + 4);
  v3 = this;
  v4 = j_Entity::getProjectileComponent(*((Entity **)a2 + 4));
  j_HitResult::HitResult((int)&v8, v4 + 108);
  v5 = (Level *)j_Entity::getLevel(v2);
  j_Level::potionSplash(v5, (const Vec3 *)&v9, (const Color *)&MobEffect::DEFAULT_COLOR, 0);
  v6 = (Level *)j_Entity::getLevel(v2);
  if ( !j_Level::isClientSide(v6) )
  {
    v7 = (BlockSource *)j_Entity::getRegion(v2);
    j_ExperienceOrb::spawnOrbs(
      v7,
      (const Vec3 *)&v9,
      *(_QWORD *)((char *)v3 + 4),
      *(_QWORD *)((char *)v3 + 4) >> 32,
      0,
      0);
  }
}


int __fastcall GrantXPSubcomponent::GrantXPSubcomponent(int result)
{
  *(_QWORD *)result = (unsigned int)&off_271EBB8;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


void __fastcall GrantXPSubcomponent::doOnHitEffect(GrantXPSubcomponent *this, ProjectileComponent *a2)
{
  GrantXPSubcomponent::doOnHitEffect(this, a2);
}


Json::Value *__fastcall GrantXPSubcomponent::readfromJSON(GrantXPSubcomponent *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  GrantXPSubcomponent *v3; // r4@1
  const Json::Value *v4; // r0@1
  Json::Value *v5; // r0@1
  int v6; // r0@3
  Json::Value *v7; // r0@4
  Json::Value *v8; // r0@4
  int v10; // [sp+0h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  v4 = (const Json::Value *)j_Json::Value::operator[](a2, "xp");
  v5 = j_Json::Value::Value((Json::Value *)&v10, v4);
  if ( j_Json::Value::isNull(v5) || j_Json::Value::isInt((Json::Value *)&v10) != 1 )
  {
    v7 = (Json::Value *)j_Json::Value::operator[](v2, "minXP");
    *((_DWORD *)v3 + 1) = j_Json::Value::asInt(v7, *((_DWORD *)v3 + 1));
    v8 = (Json::Value *)j_Json::Value::operator[](v2, "maxXP");
    v6 = j_Json::Value::asInt(v8, *((_DWORD *)v3 + 2));
  }
  else
    v6 = j_Json::Value::asInt((Json::Value *)&v10, *((_DWORD *)v3 + 1));
    *((_DWORD *)v3 + 1) = v6;
  *((_DWORD *)v3 + 2) = v6;
  return j_Json::Value::~Value((Json::Value *)&v10);
}
