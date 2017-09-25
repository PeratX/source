

int __fastcall ParticleOnHitSubcomponent::readfromJSON(ParticleOnHitSubcomponent *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  ParticleOnHitSubcomponent *v3; // r4@1
  int v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@2
  Json::Value *v7; // r0@3
  Json::Value *v8; // r0@3
  Json::Value *v9; // r0@3
  int result; // r0@3
  unsigned int *v11; // r2@4
  signed int v12; // r1@6
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  int v15; // [sp+8h] [bp-28h]@1
  int v16; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  v4 = j_Json::Value::operator[](a2, "particle_type");
  sub_21E94B4((void **)&v15, "none");
  j_Json::Value::asString(&v16, v4, &v15);
  *((_DWORD *)v3 + 1) = j_ParticleTypeFromString((unsigned int *)&v16);
  v5 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (Json::Value *)j_Json::Value::operator[](v2, "on_entity_hit");
  *((_BYTE *)v3 + 8) = j_Json::Value::asBool(v7, *((_BYTE *)v3 + 8));
  v8 = (Json::Value *)j_Json::Value::operator[](v2, "on_other_hit");
  *((_BYTE *)v3 + 9) = j_Json::Value::asBool(v8, *((_BYTE *)v3 + 9));
  v9 = (Json::Value *)j_Json::Value::operator[](v2, "num_particles");
  result = j_Json::Value::asInt(v9, 1);
  *((_DWORD *)v3 + 3) = result;
  return result;
}


signed int __fastcall ParticleOnHitSubcomponent::doOnHitEffect(ParticleOnHitSubcomponent *this, ProjectileComponent *a2)
{
  ParticleOnHitSubcomponent *v2; // r9@1
  ProjectileComponent *v3; // r7@1
  signed int result; // r0@1
  Entity *v5; // r5@2
  int v6; // r0@2
  int v7; // r10@2
  int v8; // r4@2
  signed int v9; // r6@9
  Player *v10; // r7@10
  int v11; // r0@10
  int v12; // r7@10
  int v13; // r4@10
  int v14; // r0@10
  char v15; // [sp+18h] [bp-68h]@2
  int v16; // [sp+38h] [bp-48h]@2

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 1);
  if ( result )
  {
    v5 = (Entity *)*((_DWORD *)a2 + 4);
    v6 = j_Entity::getProjectileComponent(*((Entity **)a2 + 4));
    j_HitResult::HitResult((int)&v15, v6 + 108);
    v7 = *((_DWORD *)v2 + 1);
    v8 = v16;
    if ( v7 == 12 )
      v7 = (*((_WORD *)j_Item::lookupByName((unsigned int *)(*(_DWORD *)(*((_DWORD *)v3 + 4) + 48) + 32), 1) + 9) << 16) | 0xC;
    if ( v8 )
      result = *((_BYTE *)v2 + 8);
    else
      result = *((_BYTE *)v2 + 9);
    if ( result )
    {
      result = *((_DWORD *)v2 + 3);
      if ( result >= 1 )
      {
        v9 = 0;
        do
        {
          v10 = (Player *)j_Entity::getLevel(v5);
          v11 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 52))(v5);
          j_Level::broadcastLevelEvent(v10, 2009, __PAIR__(v7, v11), 0);
          v12 = j_Entity::getLevel(v5);
          v13 = *((_DWORD *)v2 + 1);
          v14 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 52))(v5);
          j_Level::addParticle(v12, v13, v14);
          ++v9;
          result = *((_DWORD *)v2 + 3);
        }
        while ( v9 < result );
      }
    }
  }
  return result;
}


int __fastcall ParticleOnHitSubcomponent::ParticleOnHitSubcomponent(int result)
{
  *(_DWORD *)result = &off_271ECC0;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)(result + 8) = 0;
  *(_BYTE *)(result + 9) = 0;
  *(_DWORD *)(result + 12) = 1;
  return result;
}
