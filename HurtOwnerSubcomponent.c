

signed int __fastcall HurtOwnerSubcomponent::readfromJSON(HurtOwnerSubcomponent *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  HurtOwnerSubcomponent *v3; // r4@1
  Json::Value *v4; // r0@1
  Json::Value *v5; // r0@1
  Json::Value *v6; // r0@1
  signed int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = (Json::Value *)j_Json::Value::operator[](a2, "ownerDamage");
  *((_DWORD *)v3 + 1) = j_Json::Value::asFloat(v4, *((float *)v3 + 1));
  v5 = (Json::Value *)j_Json::Value::operator[](v2, "knockBack");
  *((_BYTE *)v3 + 8) = j_Json::Value::asBool(v5, *((_BYTE *)v3 + 8));
  v6 = (Json::Value *)j_Json::Value::operator[](v2, "ignite");
  result = j_Json::Value::asBool(v6, *((_BYTE *)v3 + 9));
  *((_BYTE *)v3 + 9) = result;
  return result;
}


EntityDamageByEntitySource *__fastcall HurtOwnerSubcomponent::doOnHitEffect(HurtOwnerSubcomponent *this, ProjectileComponent *a2)
{
  Entity *v2; // r6@1
  Level *v4; // r0@1
  EntityDamageByEntitySource *result; // r0@1
  int v6; // r5@2
  __int64 v7; // r0@2
  Entity *v8; // r5@2
  int v9; // r7@3
  unsigned int v10; // r0@6
  bool v11; // r1@6
  int v16; // r3@8
  char v18; // [sp+8h] [bp-48h]@6
  unsigned int v19; // [sp+30h] [bp-20h]@2
  unsigned int v20; // [sp+34h] [bp-1Ch]@2

  v2 = (Entity *)*((_DWORD *)a2 + 4);
  _R4 = this;
  v4 = (Level *)j_Entity::getLevel(*((Entity **)a2 + 4));
  result = (EntityDamageByEntitySource *)j_Level::isClientSide(v4);
  if ( !result )
  {
    v6 = j_Entity::getLevel(v2);
    v7 = j_Entity::getOwnerId((Entity *)&v19, (int)v2);
    result = (EntityDamageByEntitySource *)j_Level::fetchEntity(v6, SHIDWORD(v7), v19, v20, 0);
    v8 = result;
    if ( result )
    {
      v9 = (*(int (**)(void))(*(_DWORD *)result + 524))();
      if ( v9 != (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 524))(v2)
        || (*(int (__fastcall **)(Entity *))(*(_DWORD *)v8 + 488))(v8) != 319
        || (result = (EntityDamageByEntitySource *)j_Abilities::getBool((int)v8 + 4320, (int **)&Abilities::INSTABUILD)) == 0 )
      {
        j_EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v18, v8, 2);
        v10 = *((_WORD *)_R4 + 4);
        v11 = 0;
        __asm { VLDR            S0, [R4,#4] }
        if ( v10 > 0xFF )
          v11 = 1;
        __asm { VCVTR.S32.F32   S0, S0 }
        v16 = (unsigned __int8)v10;
        if ( (_BYTE)v10 )
          v16 = 1;
        __asm { VMOV            R2, S0 }
        j_Entity::hurt(v8, (const EntityDamageSource *)&v18, _R2, v16, v11);
        result = j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v18);
      }
    }
  }
  return result;
}


int __fastcall HurtOwnerSubcomponent::HurtOwnerSubcomponent(int result)
{
  *(_QWORD *)result = (unsigned int)&off_271EC30;
  *(_WORD *)(result + 8) = 0;
  return result;
}
