

signed int __fastcall WitherSkull::getInertia(WitherSkull *this)
{
  WitherSkull *v1; // r4@1
  signed int result; // r0@2

  v1 = this;
  if ( SynchedEntityData::getInt8((WitherSkull *)((char *)this + 176), 16) <= 0 )
    result = j_j_j__ZN8Fireball10getInertiaEv(v1);
  else
    result = 1060823368;
  return result;
}


void __fastcall WitherSkull::onHit(WitherSkull *this, const HitResult *a2)
{
  const HitResult *v2; // r6@1
  WitherSkull *v3; // r4@1
  Level *v4; // r0@1
  Mob *v5; // r5@2
  int v6; // r7@4
  int v7; // r1@4
  Mob *v8; // r7@4
  ExplodeComponent *v9; // r5@7
  BlockSource *v10; // r0@7
  int v11; // r5@8
  int v12; // r1@8
  int v13; // r0@8
  WitherBoss *v14; // r5@8
  Level *v15; // r0@11
  Spawner *v16; // r6@11
  BlockSource *v17; // r7@11
  const Vec3 *v18; // r0@11
  int v19; // r4@11
  void *v20; // r0@11
  void *v21; // r0@12
  void *v22; // r0@13
  Level *v23; // r0@19
  int v24; // r0@19
  signed int v25; // r6@19
  int v26; // r0@24
  ExplodeComponent *v27; // r5@25
  BlockSource *v28; // r0@25
  unsigned int *v29; // r2@27
  signed int v30; // r1@29
  unsigned int *v31; // r2@31
  signed int v32; // r1@33
  unsigned int *v33; // r2@35
  signed int v34; // r1@37
  int v35; // [sp+14h] [bp-74h]@11
  int v36; // [sp+18h] [bp-70h]@12
  int v37; // [sp+1Ch] [bp-6Ch]@11
  unsigned int v38; // [sp+20h] [bp-68h]@8
  unsigned int v39; // [sp+24h] [bp-64h]@8
  char v40; // [sp+28h] [bp-60h]@24
  char v41; // [sp+38h] [bp-50h]@16
  unsigned int v42; // [sp+60h] [bp-28h]@4
  unsigned int v43; // [sp+64h] [bp-24h]@4

  v2 = a2;
  v3 = this;
  v4 = (Level *)Entity::getLevel(this);
  if ( !Level::isClientSide(v4) )
  {
    v5 = (Mob *)*((_DWORD *)v2 + 8);
    if ( v5 )
    {
      if ( EntityClassTree::isInstanceOf(*((_DWORD *)v2 + 8), 256) == 1 )
      {
        v6 = Entity::getLevel(v3);
        (*(void (__fastcall **)(unsigned int *, WitherSkull *))(*(_DWORD *)v3 + 500))(&v42, v3);
        v8 = (Mob *)Level::fetchEntity(v6, v7, v42, v43, 0);
        if ( v8 )
        {
          if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)v5 + 316))(v5) )
            Entity::doEnchantDamageEffects(v3, v8, v5);
          else
            (*(void (__fastcall **)(Mob *, signed int))(*(_DWORD *)v8 + 832))(v8, 5);
        }
        else
          EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v41, v3, 14);
          Entity::hurt(*((Entity **)v2 + 8), (const EntityDamageSource *)&v41, 5, 1, 0);
          EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v41);
        if ( EntityClassTree::isInstanceOf((int)v5, 256) == 1 )
          v23 = (Level *)Entity::getLevel(v3);
          v24 = Level::getDifficulty(v23);
          v25 = 0;
          if ( v24 == 3 )
            v25 = 40;
          if ( v24 == 2 )
            v25 = 10;
          if ( v25 )
          {
            v26 = MobEffect::getId((MobEffect *)MobEffect::WITHER);
            MobEffectInstance::MobEffectInstance((int)&v40, v26, 20 * v25, 1);
            Mob::addEffect(v5, (const MobEffectInstance *)&v40);
          }
      }
      v27 = (ExplodeComponent *)*((_DWORD *)v3 + 783);
      v28 = (BlockSource *)Entity::getRegion(v3);
      ExplodeComponent::explode(v27, v28, (WitherSkull *)((char *)v3 + 72), 1.0);
    }
    else
      v9 = (ExplodeComponent *)*((_DWORD *)v3 + 783);
      v10 = (BlockSource *)Entity::getRegion(v3);
      ExplodeComponent::explode(v9, v10, (WitherSkull *)((char *)v3 + 72), 1.0);
      if ( SynchedEntityData::getInt8((WitherSkull *)((char *)v3 + 176), 16) >= 1 )
        v11 = Entity::getLevel(v3);
        (*(void (__fastcall **)(unsigned int *, WitherSkull *))(*(_DWORD *)v3 + 500))(&v38, v3);
        v13 = Level::fetchEntity(v11, v12, v38, v39, 0);
        v14 = (WitherBoss *)v13;
        if ( v13 )
          if ( EntityClassTree::isInstanceOf(v13, 68404) == 1 && WitherBoss::canSummonSkeleton(v14) == 1 )
            v15 = (Level *)Entity::getLevel(v3);
            v16 = (Spawner *)Level::getSpawner(v15);
            v17 = (BlockSource *)Entity::getRegion(v3);
            EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v35, 1116976);
            v18 = (const Vec3 *)(*(int (__fastcall **)(WitherSkull *))(*(_DWORD *)v3 + 52))(v3);
            v19 = Spawner::spawnMob(v16, v17, (const EntityDefinitionIdentifier *)&v35, v3, v18, 0, 1, 0);
            v20 = (void *)(v37 - 12);
            if ( (int *)(v37 - 12) != &dword_28898C0 )
            {
              v29 = (unsigned int *)(v37 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v30 = __ldrex(v29);
                while ( __strex(v30 - 1, v29) );
              }
              else
                v30 = (*v29)--;
              if ( v30 <= 0 )
                j_j_j_j__ZdlPv_9(v20);
            }
            v21 = (void *)(v36 - 12);
            if ( (int *)(v36 - 12) != &dword_28898C0 )
              v31 = (unsigned int *)(v36 - 4);
                  v32 = __ldrex(v31);
                while ( __strex(v32 - 1, v31) );
                v32 = (*v31)--;
              if ( v32 <= 0 )
                j_j_j_j__ZdlPv_9(v21);
            v22 = (void *)(v35 - 12);
            if ( (int *)(v35 - 12) != &dword_28898C0 )
              v33 = (unsigned int *)(v35 - 4);
                  v34 = __ldrex(v33);
                while ( __strex(v34 - 1, v33) );
                v34 = (*v33)--;
              if ( v34 <= 0 )
                j_j_j_j__ZdlPv_9(v22);
            if ( v19 )
              Skeleton::setWitherParent((Skeleton *)v19, v14);
              *(_DWORD *)(v19 + 420) = 60;
              WitherBoss::addSkeleton(v14);
  }
}


unsigned int __fastcall WitherSkull::setDangerous(WitherSkull *this, int a2)
{
  WitherSkull *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((WitherSkull *)((char *)this + 176), 16);
  v5 = *(_DWORD *)(result + 4);
  if ( !(_BYTE)v5 && *(_BYTE *)(result + 9) != v3 )
  {
    *(_BYTE *)(result + 9) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


int __fastcall WitherSkull::isOnFire(WitherSkull *this)
{
  return 0;
}


signed int __fastcall WitherSkull::isPickable(WitherSkull *this)
{
  return 1;
}


void __fastcall WitherSkull::~WitherSkull(WitherSkull *this)
{
  WitherSkull::~WitherSkull(this);
}


int __fastcall WitherSkull::_hurt(WitherSkull *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  Entity *v5; // r7@1
  const EntityDamageSource *v6; // r6@1
  bool v7; // r4@1
  int v8; // r5@1
  int result; // r0@2

  v5 = this;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  if ( SynchedEntityData::getInt8((WitherSkull *)((char *)this + 176), 16) < 1 )
    result = 0;
  else
    result = Entity::_hurt(v5, v6, v8, v7, a5);
  return result;
}


signed int __fastcall WitherSkull::isDangerous(WitherSkull *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = SynchedEntityData::getInt8((WitherSkull *)((char *)this + 176), 16);
  v2 = 0;
  if ( v1 > 0 )
    v2 = 1;
  return v2;
}


void __fastcall WitherSkull::~WitherSkull(WitherSkull *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


Fireball *__fastcall WitherSkull::WitherSkull(Fireball *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  Fireball *v3; // r4@1
  int v4; // r6@2
  _BYTE *v5; // r0@2
  signed __int16 v6; // r5@2
  int v7; // r1@2
  unsigned int v8; // r0@4

  v3 = a1;
  Fireball::Fireball(a1, a2, a3);
  *(_DWORD *)v3 = &off_27000FC;
  if ( !SynchedEntityData::_find((Fireball *)((char *)v3 + 176), 16) )
  {
    SynchedEntityData::_resizeToContain((Fireball *)((char *)v3 + 176), 16);
    v4 = *((_DWORD *)v3 + 44);
    v5 = operator new(0xCu);
    v6 = 16;
    v5[4] = 0;
    *((_WORD *)v5 + 3) = 16;
    v5[8] = 1;
    *(_DWORD *)v5 = &off_26F1394;
    v5[9] = 0;
    v7 = *(_DWORD *)(v4 + 64);
    *(_DWORD *)(v4 + 64) = v5;
    if ( v7 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
    v8 = *((_WORD *)v3 + 94);
    if ( v8 >= 0x10 )
      LOWORD(v8) = 16;
    *((_WORD *)v3 + 94) = v8;
    if ( (unsigned int)*((_WORD *)v3 + 95) > 0x10 )
      v6 = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v6;
  }
  *((_DWORD *)v3 + 62) = 66;
  (*(void (__fastcall **)(Fireball *))(*(_DWORD *)v3 + 680))(v3);
  return v3;
}


signed int __fastcall WitherSkull::getEntityTypeId(WitherSkull *this)
{
  return 4194393;
}


unsigned int __fastcall WitherSkull::initializeComponents(int a1, int a2)
{
  int v2; // r4@1
  ExplodeComponent *v3; // r5@2
  void *v4; // r0@2
  unsigned int result; // r0@5
  int v6; // r5@6
  unsigned int v7; // r1@6
  unsigned int v8; // r1@8
  unsigned int v9; // r0@8

  v2 = a1;
  Entity::initializeComponents(a1, a2);
  if ( !*(_BYTE *)(v2 + 3081) )
  {
    v3 = (ExplodeComponent *)operator new(0x1Cu);
    ExplodeComponent::ExplodeComponent(v3, (Entity *)v2);
    v4 = *(void **)(v2 + 3132);
    *(_DWORD *)(v2 + 3132) = v3;
    if ( v4 )
      operator delete(v4);
    *(_DWORD *)(v2 + 3476) = 200;
  }
  result = *(_DWORD *)(v2 + 3148);
  if ( result )
    v6 = ProjectileComponent::getIsDangerous((ProjectileComponent *)result);
    result = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 16);
    v7 = *(_DWORD *)(result + 4);
    if ( !(_BYTE)v7 && *(_BYTE *)(result + 9) != v6 )
    {
      *(_BYTE *)(result + 9) = v6;
      *(_BYTE *)(result + 8) = 1;
      v8 = v7 >> 16;
      v9 = *(_WORD *)(v2 + 188);
      if ( v9 >= v8 )
        LOWORD(v9) = v8;
      *(_WORD *)(v2 + 188) = v9;
      result = *(_WORD *)(v2 + 190);
      if ( result > v8 )
        LOWORD(v8) = *(_WORD *)(v2 + 190);
      *(_WORD *)(v2 + 190) = v8;
    }
  return result;
}


void __fastcall WitherSkull::onHit(WitherSkull *this, const HitResult *a2)
{
  WitherSkull::onHit(this, a2);
}
