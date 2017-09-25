

int __fastcall CatchFireSubcomponent::CatchFireSubcomponent(int result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = 2147483648;
  LODWORD(v1) = &off_271EB88;
  *(_QWORD *)result = v1;
  *(_BYTE *)(result + 8) = 0;
  return result;
}


signed int __fastcall CatchFireSubcomponent::readfromJSON(CatchFireSubcomponent *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  CatchFireSubcomponent *v3; // r5@1
  Json::Value *v4; // r0@1
  Json::Value *v5; // r0@1
  signed int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = (Json::Value *)j_Json::Value::operator[](a2, "onFireTime");
  *((_DWORD *)v3 + 1) = j_Json::Value::asFloat(v4, *((float *)v3 + 1));
  v5 = (Json::Value *)j_Json::Value::operator[](v2, "fireAffectedByGriefing");
  result = j_Json::Value::asBool(v5, *((_BYTE *)v3 + 8));
  *((_BYTE *)v3 + 8) = result;
  return result;
}


EntityDamageByChildEntitySource *__fastcall CatchFireSubcomponent::doOnHitEffect(CatchFireSubcomponent *this, ProjectileComponent *a2)
{
  Entity *v2; // r4@1
  CatchFireSubcomponent *v3; // r5@1
  int v4; // r0@1
  Level *v5; // r0@1
  EntityDamageByChildEntitySource *result; // r0@1
  int v7; // r5@4
  int v8; // r1@4
  Entity *v9; // r2@4
  Entity *v10; // r5@5
  int v17; // r5@6
  void (__fastcall *v18)(int, int); // r6@6
  int v21; // r6@8
  int v22; // r1@8
  int v23; // r0@8
  __int16 v24; // r0@9
  Level *v25; // r0@11
  unsigned __int64 *v26; // r0@11
  Entity *v27; // r5@14
  int v30; // r5@15
  void (__fastcall *v31)(int, int); // r6@15
  int v34; // r0@20
  BlockSource *v35; // r0@23
  int v36; // r4@23
  char v37; // [sp+8h] [bp-E0h]@24
  int v38; // [sp+Ch] [bp-DCh]@12
  int v39; // [sp+10h] [bp-D8h]@12
  int v40; // [sp+14h] [bp-D4h]@12
  unsigned int v41; // [sp+18h] [bp-D0h]@8
  unsigned int v42; // [sp+1Ch] [bp-CCh]@8
  char v43; // [sp+20h] [bp-C8h]@14
  char v44; // [sp+48h] [bp-A0h]@5
  unsigned int v45; // [sp+88h] [bp-60h]@4
  unsigned int v46; // [sp+8Ch] [bp-5Ch]@4
  char v47; // [sp+94h] [bp-54h]@1
  char v48; // [sp+98h] [bp-50h]@12
  int v49; // [sp+9Ch] [bp-4Ch]@12
  int v50; // [sp+A0h] [bp-48h]@12
  int v51; // [sp+A4h] [bp-44h]@12
  Entity *v52; // [sp+B4h] [bp-34h]@2

  v2 = (Entity *)*((_DWORD *)a2 + 4);
  v3 = this;
  v4 = j_Entity::getProjectileComponent(*((Entity **)a2 + 4));
  j_HitResult::HitResult((int)&v47, v4 + 108);
  v5 = (Level *)j_Entity::getLevel(v2);
  result = (EntityDamageByChildEntitySource *)j_Level::isClientSide(v5);
  if ( !result )
  {
    if ( v52 )
    {
      result = (EntityDamageByChildEntitySource *)j_Entity::getStatusFlag((int)v52, 47);
      if ( !result )
      {
        v7 = j_Entity::getLevel(v2);
        (*(void (__fastcall **)(unsigned int *, Entity *))(*(_DWORD *)v2 + 500))(&v45, v2);
        v9 = (Entity *)j_Level::fetchEntity(v7, v8, v45, v46, 0);
        if ( v9 )
        {
          j_EntityDamageByChildEntitySource::EntityDamageByChildEntitySource((int)&v44, (int)v2, v9, 3);
          v10 = v52;
          _R0 = j_Entity::getProjectileComponent(v2);
          __asm
          {
            VLDR            S0, [R0,#0xB8]
            VCVTR.S32.F32   S0, S0
            VMOV            R2, S0
          }
          if ( j_Entity::hurt(v10, (const EntityDamageSource *)&v44, _R2, 1, 0) == 1 )
            v17 = (int)v52;
            v18 = *(void (__fastcall **)(int, int))(*(_DWORD *)v52 + 504);
            _R0 = j_Entity::getProjectileComponent(v2);
            __asm
            {
              VLDR            S0, [R0,#0x118]
              VCVTR.S32.F32   S0, S0
              VMOV            R1, S0
            }
            v18(v17, _R1);
          result = j_EntityDamageByChildEntitySource::~EntityDamageByChildEntitySource((EntityDamageByChildEntitySource *)&v44);
        }
        else
          j_EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v43, v2, 3);
          v27 = v52;
          if ( j_Entity::hurt(v27, (const EntityDamageSource *)&v43, _R2, 1, 0) == 1 )
            v30 = (int)v52;
            v31 = *(void (__fastcall **)(int, int))(*(_DWORD *)v52 + 504);
            v31(v30, _R1);
          result = j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v43);
      }
    }
    else
      v21 = j_Entity::getLevel(v2);
      (*(void (__fastcall **)(unsigned int *, Entity *))(*(_DWORD *)v2 + 500))(&v41, v2);
      v23 = j_Level::fetchEntity(v21, v22, v41, v42, 0);
      if ( !v23
        || (v24 = (*(int (**)(void))(*(_DWORD *)v23 + 488))(), j_EntityClassTree::isMob(v24) != 1)
        || !*((_BYTE *)v3 + 8)
        || (v25 = (Level *)j_Entity::getLevel(v2),
            v26 = (unsigned __int64 *)j_Level::getGameRules(v25),
            result = (EntityDamageByChildEntitySource *)j_GameRules::getBool(v26, (int **)&GameRules::MOB_GRIEFING),
            result == (EntityDamageByChildEntitySource *)1) )
        v38 = v49;
        v39 = v50;
        v40 = v51;
        switch ( v48 )
          case 0:
            v39 = v50 - 1;
            break;
          case 1:
            v39 = v50 + 1;
          case 2:
            v40 = v51 - 1;
          case 3:
            v40 = v51 + 1;
          case 4:
            v34 = v49 - 1;
            goto LABEL_22;
          case 5:
            v34 = v49 + 1;
LABEL_22:
            v38 = v34;
          default:
        v35 = (BlockSource *)j_Entity::getRegion(v2);
        v36 = (int)v35;
        result = (EntityDamageByChildEntitySource *)j_BlockSource::isEmptyBlock(v35, (const BlockPos *)&v38);
        if ( result == (EntityDamageByChildEntitySource *)1 )
          v37 = *(_BYTE *)(Block::mFire + 4);
          result = (EntityDamageByChildEntitySource *)j_BlockSource::setBlock(v36, v38, v39, v40, &v37, 3);
  }
  return result;
}
